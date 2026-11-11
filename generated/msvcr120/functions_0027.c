#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1008B44A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B44Au);

L_1008B44A:
    PUSH32(esp, ebp); /* 0x1008B44A: push ebp */
    ebp = esp; /* 0x1008B44B: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B44D: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B44F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B45B); /* 0x1008B452: call 0x1008b45b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008B457: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008B458: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008B459: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B45A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B45B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B45Bu);

L_1008B45B:
    PUSH32(esp, ebp); /* 0x1008B45B: push ebp */
    ebp = esp; /* 0x1008B45C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008B45E: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1008B461: lea ecx, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B464: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B465: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B468: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1008B46D: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x1008B470: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008B4C2; /* 0x1008B476: jbe 0x1008b4c2 */
L_1008B478:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B478: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0x9) = (uint8_t)(LO8(ecx)); /* 0x1008B47A: mov byte ptr [ebp + 9], cl */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008B47D: mov dword ptr [ebp - 4], eax */
    eax = ecx; /* 0x1008B480: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008B482: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008B482: shr eax, 8 */
    MEM8(ebp + 0x8) = (uint8_t)(LO8(eax)); /* 0x1008B485: mov byte ptr [ebp + 8], al */
    eax = MEM32(ebp + (-0x10)); /* 0x1008B488: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008B48B: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B4E3; /* 0x1008B48F: je 0x1008b4e3 */
L_1008B491:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B491: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B493: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1008B494: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1008B495: push dword ptr [eax + 4] */
    eax = ebp + (-0x4); /* 0x1008B498: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008B49B: push eax */
    PUSH32(esp, 2); /* 0x1008B49C: push 2 */
    eax = ebp + 0x8; /* 0x1008B49E: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1008B4A1: push eax */
    eax = ebp + (-0x14); /* 0x1008B4A2: lea eax, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B4A5: push esi */
    PUSH32(esp, eax); /* 0x1008B4A6: push eax */
    RECOMP_CALL(sub_100211C4); /* 0x1008B4A7: call 0x100211c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1008B4AC: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008B4AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B4E3; /* 0x1008B4B1: je 0x1008b4e3 */
L_1008B4B3:
    /* cmp MEM16(ebp + (-0x2)), 0 */ /* 0x1008B4B3: cmp word ptr [ebp - 2], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x2))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B4E3; /* 0x1008B4B8: jne 0x1008b4e3 */
L_1008B4BA:
    /* test MEM8(ebp + (-0x4)), 0x20u */ /* 0x1008B4BA: test byte ptr [ebp - 4], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B4E3; /* 0x1008B4BE: jne 0x1008b4e3 */
L_1008B4C0:
    goto L_1008B4EA; /* 0x1008B4C0: jmp 0x1008b4ea */
L_1008B4C2:
    eax = MEM32(ebp + (-0x14)); /* 0x1008B4C2: mov eax, dword ptr [ebp - 0x14] */
    edx = 0x157u; /* 0x1008B4C5: mov edx, 0x157 */
    ecx = (uint32_t)LO8(ecx); /* 0x1008B4CA: movzx ecx, cl */
    eax = MEM32(eax + 0x90); /* 0x1008B4CD: mov eax, dword ptr [eax + 0x90] */
    /* test MEM16(eax + ecx * 2), LO16(edx) */ /* 0x1008B4D3: test word ptr [eax + ecx*2], dx */
    _flag_a = (uint32_t)(MEM16(eax + ecx * 2)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B4E7; /* 0x1008B4D7: jne 0x1008b4e7 */
L_1008B4D9:
    eax = MEM32(ebp + (-0x10)); /* 0x1008B4D9: mov eax, dword ptr [ebp - 0x10] */
    /* test MEM8(ecx + eax + 0x19), 3 */ /* 0x1008B4DC: test byte ptr [ecx + eax + 0x19], 3 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x19)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B4E7; /* 0x1008B4E1: jne 0x1008b4e7 */
L_1008B4E3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B4E3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008B4EA; /* 0x1008B4E5: jmp 0x1008b4ea */
L_1008B4E7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B4E7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B4E9: inc esi */
    _flag_k = FK_INC;
L_1008B4EA:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008B4EA: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B4F7; /* 0x1008B4EE: je 0x1008b4f7 */
L_1008B4F0:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008B4F0: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008B4F3: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B4F7:
    eax = esi; /* 0x1008B4F7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008B4F9: pop esi */
    esp = ebp; /* 0x1008B4FA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B4FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B4FD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B4FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B4FEu);

L_1008B4FE:
    PUSH32(esp, ebp); /* 0x1008B4FE: push ebp */
    ebp = esp; /* 0x1008B4FF: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B501: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B503: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B50F); /* 0x1008B506: call 0x1008b50f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008B50B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008B50C: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008B50D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B50E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B50F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B50Fu);

L_1008B50F:
    PUSH32(esp, ebp); /* 0x1008B50F: push ebp */
    ebp = esp; /* 0x1008B510: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008B512: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1008B515: lea ecx, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B518: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B519: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B51C: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1008B521: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x1008B524: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008B576; /* 0x1008B52A: jbe 0x1008b576 */
L_1008B52C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B52C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0x9) = (uint8_t)(LO8(ecx)); /* 0x1008B52E: mov byte ptr [ebp + 9], cl */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008B531: mov dword ptr [ebp - 4], eax */
    eax = ecx; /* 0x1008B534: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008B536: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008B536: shr eax, 8 */
    MEM8(ebp + 0x8) = (uint8_t)(LO8(eax)); /* 0x1008B539: mov byte ptr [ebp + 8], al */
    eax = MEM32(ebp + (-0x10)); /* 0x1008B53C: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008B53F: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B59C; /* 0x1008B543: je 0x1008b59c */
L_1008B545:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B545: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B547: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1008B548: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1008B549: push dword ptr [eax + 4] */
    eax = ebp + (-0x4); /* 0x1008B54C: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008B54F: push eax */
    PUSH32(esp, 2); /* 0x1008B550: push 2 */
    eax = ebp + 0x8; /* 0x1008B552: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1008B555: push eax */
    eax = ebp + (-0x14); /* 0x1008B556: lea eax, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B559: push esi */
    PUSH32(esp, eax); /* 0x1008B55A: push eax */
    RECOMP_CALL(sub_100211C4); /* 0x1008B55B: call 0x100211c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1008B560: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008B563: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B59C; /* 0x1008B565: je 0x1008b59c */
L_1008B567:
    /* cmp MEM16(ebp + (-0x2)), 0 */ /* 0x1008B567: cmp word ptr [ebp - 2], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x2))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B59C; /* 0x1008B56C: jne 0x1008b59c */
L_1008B56E:
    /* test MEM8(ebp + (-0x4)), 0x40u */ /* 0x1008B56E: test byte ptr [ebp - 4], 0x40 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B59C; /* 0x1008B572: je 0x1008b59c */
L_1008B574:
    goto L_1008B5A3; /* 0x1008B574: jmp 0x1008b5a3 */
L_1008B576:
    /* cmp ecx, 9 */ /* 0x1008B576: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B580; /* 0x1008B579: jne 0x1008b580 */
L_1008B57B:
    PUSH32(esp, 0x40u); /* 0x1008B57B: push 0x40 */
    esi = POP32_VAL(esp); /* 0x1008B57D: pop esi */
    goto L_1008B5A3; /* 0x1008B57E: jmp 0x1008b5a3 */
L_1008B580:
    eax = MEM32(ebp + (-0x14)); /* 0x1008B580: mov eax, dword ptr [ebp - 0x14] */
    ecx = (uint32_t)LO8(ecx); /* 0x1008B583: movzx ecx, cl */
    eax = MEM32(eax + 0x90); /* 0x1008B586: mov eax, dword ptr [eax + 0x90] */
    /* test MEM8(eax + ecx * 2), 0x40u */ /* 0x1008B58C: test byte ptr [eax + ecx*2], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 2)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B5A0; /* 0x1008B590: jne 0x1008b5a0 */
L_1008B592:
    eax = MEM32(ebp + (-0x10)); /* 0x1008B592: mov eax, dword ptr [ebp - 0x10] */
    /* test MEM8(ecx + eax + 0x19), 2 */ /* 0x1008B595: test byte ptr [ecx + eax + 0x19], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x19)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B5A0; /* 0x1008B59A: jne 0x1008b5a0 */
L_1008B59C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B59C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008B5A3; /* 0x1008B59E: jmp 0x1008b5a3 */
L_1008B5A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B5A0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B5A2: inc esi */
    _flag_k = FK_INC;
L_1008B5A3:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008B5A3: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B5B0; /* 0x1008B5A7: je 0x1008b5b0 */
L_1008B5A9:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008B5A9: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008B5AC: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B5B0:
    eax = esi; /* 0x1008B5B0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008B5B2: pop esi */
    esp = ebp; /* 0x1008B5B3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B5B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B5B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B5B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B5B7u);

L_1008B5B7:
    PUSH32(esp, ebp); /* 0x1008B5B7: push ebp */
    ebp = esp; /* 0x1008B5B8: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B5BA: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B5BC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B5C8); /* 0x1008B5BF: call 0x1008b5c8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008B5C4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008B5C5: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008B5C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B5C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B5C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B5C8u);

L_1008B5C8:
    PUSH32(esp, ebp); /* 0x1008B5C8: push ebp */
    ebp = esp; /* 0x1008B5C9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008B5CB: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1008B5CE: lea ecx, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B5D1: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B5D2: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B5D5: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1008B5DA: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x1008B5DD: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008B62F; /* 0x1008B5E3: jbe 0x1008b62f */
L_1008B5E5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B5E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0x9) = (uint8_t)(LO8(ecx)); /* 0x1008B5E7: mov byte ptr [ebp + 9], cl */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008B5EA: mov dword ptr [ebp - 4], eax */
    eax = ecx; /* 0x1008B5ED: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008B5EF: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008B5EF: shr eax, 8 */
    MEM8(ebp + 0x8) = (uint8_t)(LO8(eax)); /* 0x1008B5F2: mov byte ptr [ebp + 8], al */
    eax = MEM32(ebp + (-0x10)); /* 0x1008B5F5: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008B5F8: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B64B; /* 0x1008B5FC: je 0x1008b64b */
L_1008B5FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B5FE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B600: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1008B601: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1008B602: push dword ptr [eax + 4] */
    eax = ebp + (-0x4); /* 0x1008B605: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008B608: push eax */
    PUSH32(esp, 2); /* 0x1008B609: push 2 */
    eax = ebp + 0x8; /* 0x1008B60B: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1008B60E: push eax */
    eax = ebp + (-0x14); /* 0x1008B60F: lea eax, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B612: push esi */
    PUSH32(esp, eax); /* 0x1008B613: push eax */
    RECOMP_CALL(sub_100211C4); /* 0x1008B614: call 0x100211c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1008B619: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008B61C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B64B; /* 0x1008B61E: je 0x1008b64b */
L_1008B620:
    /* cmp MEM16(ebp + (-0x2)), 0 */ /* 0x1008B620: cmp word ptr [ebp - 2], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x2))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B64B; /* 0x1008B625: jne 0x1008b64b */
L_1008B627:
    /* test MEM8(ebp + (-0x4)), 0x10u */ /* 0x1008B627: test byte ptr [ebp - 4], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B64B; /* 0x1008B62B: je 0x1008b64b */
L_1008B62D:
    goto L_1008B652; /* 0x1008B62D: jmp 0x1008b652 */
L_1008B62F:
    eax = MEM32(ebp + (-0x14)); /* 0x1008B62F: mov eax, dword ptr [ebp - 0x14] */
    ecx = (uint32_t)LO8(ecx); /* 0x1008B632: movzx ecx, cl */
    eax = MEM32(eax + 0x90); /* 0x1008B635: mov eax, dword ptr [eax + 0x90] */
    /* test MEM8(eax + ecx * 2), 0x10u */ /* 0x1008B63B: test byte ptr [eax + ecx*2], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 2)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B64F; /* 0x1008B63F: jne 0x1008b64f */
L_1008B641:
    eax = MEM32(ebp + (-0x10)); /* 0x1008B641: mov eax, dword ptr [ebp - 0x10] */
    /* test MEM8(ecx + eax + 0x19), 2 */ /* 0x1008B644: test byte ptr [ecx + eax + 0x19], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x19)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B64F; /* 0x1008B649: jne 0x1008b64f */
L_1008B64B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B64B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008B652; /* 0x1008B64D: jmp 0x1008b652 */
L_1008B64F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B64F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B651: inc esi */
    _flag_k = FK_INC;
L_1008B652:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008B652: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B65F; /* 0x1008B656: je 0x1008b65f */
L_1008B658:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008B658: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008B65B: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B65F:
    eax = esi; /* 0x1008B65F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008B661: pop esi */
    esp = ebp; /* 0x1008B662: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B664: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B665: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B666(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B666u);

L_1008B666:
    PUSH32(esp, ebp); /* 0x1008B666: push ebp */
    ebp = esp; /* 0x1008B667: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B669: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B66B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B677); /* 0x1008B66E: call 0x1008b677 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008B673: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008B674: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008B675: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B676: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B677(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B677u);

L_1008B677:
    PUSH32(esp, ebp); /* 0x1008B677: push ebp */
    ebp = esp; /* 0x1008B678: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008B67A: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1008B67D: lea ecx, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B680: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B681: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B684: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1008B689: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x1008B68C: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008B6DE; /* 0x1008B692: jbe 0x1008b6de */
L_1008B694:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B694: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0x9) = (uint8_t)(LO8(ecx)); /* 0x1008B696: mov byte ptr [ebp + 9], cl */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008B699: mov dword ptr [ebp - 4], eax */
    eax = ecx; /* 0x1008B69C: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008B69E: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008B69E: shr eax, 8 */
    MEM8(ebp + 0x8) = (uint8_t)(LO8(eax)); /* 0x1008B6A1: mov byte ptr [ebp + 8], al */
    eax = MEM32(ebp + (-0x10)); /* 0x1008B6A4: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008B6A7: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B6DA; /* 0x1008B6AB: je 0x1008b6da */
L_1008B6AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B6AD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B6AF: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1008B6B0: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1008B6B1: push dword ptr [eax + 4] */
    eax = ebp + (-0x4); /* 0x1008B6B4: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008B6B7: push eax */
    PUSH32(esp, 2); /* 0x1008B6B8: push 2 */
    eax = ebp + 0x8; /* 0x1008B6BA: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1008B6BD: push eax */
    PUSH32(esp, esi); /* 0x1008B6BE: push esi */
    PUSH32(esp, 0); /* 0x1008B6BF: push 0 */
    RECOMP_CALL(sub_100211C4); /* 0x1008B6C1: call 0x100211c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1008B6C6: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008B6C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B6DA; /* 0x1008B6CB: je 0x1008b6da */
L_1008B6CD:
    /* cmp MEM16(ebp + (-0x2)), 0 */ /* 0x1008B6CD: cmp word ptr [ebp - 2], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x2))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B6DA; /* 0x1008B6D2: jne 0x1008b6da */
L_1008B6D4:
    /* test MEM8(ebp + (-0x4)), 8 */ /* 0x1008B6D4: test byte ptr [ebp - 4], 8 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B707; /* 0x1008B6D8: jne 0x1008b707 */
L_1008B6DA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B6DA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008B707; /* 0x1008B6DC: jmp 0x1008b707 */
L_1008B6DE:
    eax = MEM32(ebp + (-0x14)); /* 0x1008B6DE: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax + 0x74), 1 */ /* 0x1008B6E1: cmp dword ptr [eax + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1008B6FA; /* 0x1008B6E5: jle 0x1008b6fa */
L_1008B6E7:
    eax = ebp + (-0x14); /* 0x1008B6E7: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008B6EA: push eax */
    PUSH32(esp, 8); /* 0x1008B6EB: push 8 */
    PUSH32(esp, ecx); /* 0x1008B6ED: push ecx */
    RECOMP_CALL(sub_100895AC); /* 0x1008B6EE: call 0x100895ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008B6F3: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1008B6F6: mov esi, eax */
    goto L_1008B707; /* 0x1008B6F8: jmp 0x1008b707 */
L_1008B6FA:
    eax = MEM32(eax + 0x90); /* 0x1008B6FA: mov eax, dword ptr [eax + 0x90] */
    esi = (uint32_t)MEM16(eax + ecx * 2); /* 0x1008B700: movzx esi, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    esi = esi & 8; /* 0x1008B704: and esi, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B707:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008B707: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B714; /* 0x1008B70B: je 0x1008b714 */
L_1008B70D:
    eax = MEM32(ebp + (-0xC)); /* 0x1008B70D: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1008B710: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B714:
    eax = esi; /* 0x1008B714: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008B716: pop esi */
    esp = ebp; /* 0x1008B717: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B719: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B71A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B71B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B71Bu);

L_1008B71B:
    PUSH32(esp, ebp); /* 0x1008B71B: push ebp */
    ebp = esp; /* 0x1008B71C: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B71E: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B720: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B723: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B730); /* 0x1008B726: call 0x1008b730 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008B72B: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008B72E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B72F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B730u);

L_1008B730:
    PUSH32(esp, ebp); /* 0x1008B730: push ebp */
    ebp = esp; /* 0x1008B731: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008B733: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1008B736: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008B737: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1008B73A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B752; /* 0x1008B73C: jne 0x1008b752 */
L_1008B73E:
    RECOMP_CALL(sub_1001177D); /* 0x1008B73E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008B743: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008B749: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B74E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008B7B8; /* 0x1008B750: jmp 0x1008b7b8 */
L_1008B752:
    PUSH32(esp, edi); /* 0x1008B752: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1008B753: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1008B756: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B76E; /* 0x1008B758: jne 0x1008b76e */
L_1008B75A:
    RECOMP_CALL(sub_1001177D); /* 0x1008B75A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008B75F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008B765: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B76A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008B7B7; /* 0x1008B76C: jmp 0x1008b7b7 */
L_1008B76E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008B76E: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x1008B771: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B774: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1008B779: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008B77C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x8), edx */ /* 0x1008B77E: cmp dword ptr [ecx + 8], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B79F; /* 0x1008B781: jne 0x1008b79f */
L_1008B783:
    goto L_1008B7A8; /* 0x1008B783: jmp 0x1008b7a8 */
L_1008B785:
    SET_LO8(eax, MEM8(esi)); /* 0x1008B785: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1008B787: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B7A8; /* 0x1008B789: je 0x1008b7a8 */
L_1008B78B:
    eax = (uint32_t)LO8(eax); /* 0x1008B78B: movzx eax, al */
    /* test MEM8(eax + ecx + 0x19), 4 */ /* 0x1008B78E: test byte ptr [eax + ecx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B79E; /* 0x1008B793: je 0x1008b79e */
L_1008B795:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B795: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x1008B796: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B7A5; /* 0x1008B798: je 0x1008b7a5 */
L_1008B79A:
    /* cmp MEM8(esi), LO8(edx) */ /* 0x1008B79A: cmp byte ptr [esi], dl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B7A8; /* 0x1008B79C: je 0x1008b7a8 */
L_1008B79E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B79E: inc esi */
    _flag_k = FK_INC;
L_1008B79F:
    /* cmp esi, edi */ /* 0x1008B79F: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1008B7A8; /* 0x1008B7A1: ja 0x1008b7a8 */
L_1008B7A3:
    RECOMP_BACKEDGE();
    goto L_1008B785; /* 0x1008B7A3: jmp 0x1008b785 */
L_1008B7A5:
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x1008B7A5: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B7A8:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008B7A8: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B7B5; /* 0x1008B7AC: je 0x1008b7b5 */
L_1008B7AE:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008B7AE: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008B7B1: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B7B5:
    eax = edx; /* 0x1008B7B5: mov eax, edx */
L_1008B7B7:
    edi = POP32_VAL(esp); /* 0x1008B7B7: pop edi */
L_1008B7B8:
    esi = POP32_VAL(esp); /* 0x1008B7B8: pop esi */
    esp = ebp; /* 0x1008B7B9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B7BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B7BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B7BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B7BDu);

L_1008B7BD:
    PUSH32(esp, ebp); /* 0x1008B7BD: push ebp */
    ebp = esp; /* 0x1008B7BE: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B7C0: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B7C2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B7CE); /* 0x1008B7C5: call 0x1008b7ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008B7CA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008B7CB: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008B7CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B7CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B7CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B7CEu);

L_1008B7CE:
    PUSH32(esp, ebp); /* 0x1008B7CE: push ebp */
    ebp = esp; /* 0x1008B7CF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008B7D1: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1008B7D4: lea ecx, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B7D7: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B7D8: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B7DB: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1008B7E0: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFu */ /* 0x1008B7E3: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008B837; /* 0x1008B7E9: jbe 0x1008b837 */
L_1008B7EB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B7EB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0x9) = (uint8_t)(LO8(ecx)); /* 0x1008B7ED: mov byte ptr [ebp + 9], cl */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008B7F0: mov dword ptr [ebp - 4], eax */
    eax = ecx; /* 0x1008B7F3: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008B7F5: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008B7F5: shr eax, 8 */
    MEM8(ebp + 0x8) = (uint8_t)(LO8(eax)); /* 0x1008B7F8: mov byte ptr [ebp + 8], al */
    eax = MEM32(ebp + (-0x10)); /* 0x1008B7FB: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008B7FE: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B833; /* 0x1008B802: je 0x1008b833 */
L_1008B804:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B804: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008B806: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1008B807: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1008B808: push dword ptr [eax + 4] */
    eax = ebp + (-0x4); /* 0x1008B80B: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1008B80E: push eax */
    PUSH32(esp, 2); /* 0x1008B80F: push 2 */
    eax = ebp + 0x8; /* 0x1008B811: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1008B814: push eax */
    eax = ebp + (-0x14); /* 0x1008B815: lea eax, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1008B818: push esi */
    PUSH32(esp, eax); /* 0x1008B819: push eax */
    RECOMP_CALL(sub_100211C4); /* 0x1008B81A: call 0x100211c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1008B81F: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008B822: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B833; /* 0x1008B824: je 0x1008b833 */
L_1008B826:
    /* cmp MEM16(ebp + (-0x2)), 0 */ /* 0x1008B826: cmp word ptr [ebp - 2], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x2))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B833; /* 0x1008B82B: jne 0x1008b833 */
L_1008B82D:
    /* test MEM8(ebp + (-0x4)), 1 */ /* 0x1008B82D: test byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B845; /* 0x1008B831: jne 0x1008b845 */
L_1008B833:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008B833: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008B845; /* 0x1008B835: jmp 0x1008b845 */
L_1008B837:
    eax = MEM32(ebp + (-0x10)); /* 0x1008B837: mov eax, dword ptr [ebp - 0x10] */
    esi = (uint32_t)MEM8(eax + ecx + 0x19); /* 0x1008B83A: movzx esi, byte ptr [eax + ecx + 0x19] */
    if (4u) _cf = (((esi) >> 3) & 1u); /* 0x1008B83F: shr esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 4u; /* 0x1008B83F: shr esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x1008B842: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B845:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008B845: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B852; /* 0x1008B849: je 0x1008b852 */
L_1008B84B:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008B84B: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008B84E: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B852:
    eax = esi; /* 0x1008B852: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008B854: pop esi */
    esp = ebp; /* 0x1008B855: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B857: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B858: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B859(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B859u);

L_1008B859:
    PUSH32(esp, ebp); /* 0x1008B859: push ebp */
    ebp = esp; /* 0x1008B85A: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B85C: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B85E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B861: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B86E); /* 0x1008B864: call 0x1008b86e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008B869: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008B86C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B86D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B86E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B86Eu);

L_1008B86E:
    PUSH32(esp, ebp); /* 0x1008B86E: push ebp */
    ebp = esp; /* 0x1008B86F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008B871: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1008B874: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008B877: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B87A: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x1008B87F: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    eax = MEM32(ebp + 0x8); /* 0x1008B882: mov eax, dword ptr [ebp + 8] */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008B8BF; /* 0x1008B885: je 0x1008b8bf */
L_1008B887:
    edx = (uint32_t)LO8(eax); /* 0x1008B887: movzx edx, al */
    eax = MEM32(ebp + (-0xC)); /* 0x1008B88A: mov eax, dword ptr [ebp - 0xc] */
    SET_LO8(ecx, MEM8(edx + eax + 0x19)); /* 0x1008B88D: mov cl, byte ptr [edx + eax + 0x19] */
    /* test LO8(ecx), 4 */ /* 0x1008B891: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B89B; /* 0x1008B894: je 0x1008b89b */
L_1008B896:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B896: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008B898: inc eax */
    _flag_k = FK_INC;
    goto L_1008B8D6; /* 0x1008B899: jmp 0x1008b8d6 */
L_1008B89B:
    eax = MEM32(ebp + (-0x10)); /* 0x1008B89B: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1008B89E: push esi */
    esi = 0x157u; /* 0x1008B89F: mov esi, 0x157 */
    eax = MEM32(eax + 0x90); /* 0x1008B8A4: mov eax, dword ptr [eax + 0x90] */
    /* test MEM16(eax + edx * 2), LO16(esi) */ /* 0x1008B8AA: test word ptr [eax + edx*2], si */
    _flag_a = (uint32_t)(MEM16(eax + edx * 2)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = POP32_VAL(esp); /* 0x1008B8AE: pop esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B8BB; /* 0x1008B8AF: jne 0x1008b8bb */
L_1008B8B1:
    /* test LO8(ecx), 3 */ /* 0x1008B8B1: test cl, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008B8BB; /* 0x1008B8B4: jne 0x1008b8bb */
L_1008B8B6:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008B8B6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008B8D6; /* 0x1008B8B9: jmp 0x1008b8d6 */
L_1008B8BB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008B8BB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008B8D6; /* 0x1008B8BD: jmp 0x1008b8d6 */
L_1008B8BF:
    ecx = (uint32_t)LO8(eax); /* 0x1008B8BF: movzx ecx, al */
    eax = MEM32(ebp + (-0xC)); /* 0x1008B8C2: mov eax, dword ptr [ebp - 0xc] */
    SET_LO8(eax, MEM8(ecx + eax + 0x19)); /* 0x1008B8C5: mov al, byte ptr [ecx + eax + 0x19] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    SET_LO8(eax, LO8(eax) & 8); /* 0x1008B8C9: and al, 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x1008B8CB: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1008B8CE: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1008B8D0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1008B8D2: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1008B8D5: dec eax */
    _flag_k = FK_DEC;
L_1008B8D6:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008B8D6: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008B8E3; /* 0x1008B8DA: je 0x1008b8e3 */
L_1008B8DC:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008B8DC: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008B8DF: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008B8E3:
    esp = ebp; /* 0x1008B8E3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B8E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B8E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B8E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B8E7u);

L_1008B8E7:
    PUSH32(esp, ebp); /* 0x1008B8E7: push ebp */
    ebp = esp; /* 0x1008B8E8: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B8EA: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B8EC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1008B8EF: push 0 */
    PUSH32(esp, 2); /* 0x1008B8F1: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B8F3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B935); /* 0x1008B8F6: call 0x1008b935 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008B8FB: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008B8FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B8FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B900u);

L_1008B900:
    PUSH32(esp, ebp); /* 0x1008B900: push ebp */
    ebp = esp; /* 0x1008B901: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008B903: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B906: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1008B909: push 0 */
    PUSH32(esp, 2); /* 0x1008B90B: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B90D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B935); /* 0x1008B910: call 0x1008b935 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008B915: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008B918: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B919: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B91A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B91Au);

L_1008B91A:
    PUSH32(esp, ebp); /* 0x1008B91A: push ebp */
    ebp = esp; /* 0x1008B91B: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008B91D: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008B91F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008B922: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008B925: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008B928: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008B935); /* 0x1008B92B: call 0x1008b935 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008B930: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008B933: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B934: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008B935(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008B935u);

L_1008B935:
    PUSH32(esp, ebp); /* 0x1008B935: push ebp */
    ebp = esp; /* 0x1008B936: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008B938: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1008B93B: push ebx */
    PUSH32(esp, esi); /* 0x1008B93C: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1008B93D: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008B940: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1008B942: push edi */
    /* test esi, esi */ /* 0x1008B943: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B949; /* 0x1008B945: je 0x1008b949 */
L_1008B947:
    MEM32(esi) = ebx; /* 0x1008B947: mov dword ptr [esi], ebx */
L_1008B949:
    edi = MEM32(ebp + 0x8); /* 0x1008B949: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1008B94C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B95C; /* 0x1008B94E: je 0x1008b95c */
L_1008B950:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1008B950: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008B95C; /* 0x1008B953: jbe 0x1008b95c */
L_1008B955:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1008B955: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B974; /* 0x1008B958: jne 0x1008b974 */
L_1008B95A:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1008B95A: mov byte ptr [edi], bl */
L_1008B95C:
    RECOMP_CALL(sub_1001177D); /* 0x1008B95C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008B961: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1008B963: pop esi */
    MEM32(eax) = esi; /* 0x1008B964: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1008B966: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1008B96B: mov eax, esi */
L_1008B96D:
    edi = POP32_VAL(esp); /* 0x1008B96D: pop edi */
    esi = POP32_VAL(esp); /* 0x1008B96E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008B96F: pop ebx */
    esp = ebp; /* 0x1008B970: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008B972: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008B973: ret  */
L_1008B974:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1008B974: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x10); /* 0x1008B977: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008B97A: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1008B97F: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008B982: push eax */
    eax = MEM32(ebp + 0x14); /* 0x1008B983: mov eax, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM8(eax); /* 0x1008B986: movzx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x1008B989: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008B98A: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008B98F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008B990: pop ecx */
    /* test eax, eax */ /* 0x1008B991: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B9E2; /* 0x1008B993: je 0x1008b9e2 */
L_1008B995:
    ecx = MEM32(ebp + 0x14); /* 0x1008B995: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp MEM8(ecx + 0x1), LO8(ebx) */ /* 0x1008B998: cmp byte ptr [ecx + 1], bl */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008B9B5; /* 0x1008B99B: jne 0x1008b9b5 */
L_1008B99D:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1008B99D: mov byte ptr [edi], bl */
    /* test esi, esi */ /* 0x1008B99F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B9A9; /* 0x1008B9A1: je 0x1008b9a9 */
L_1008B9A3:
    MEM32(esi) = 1; /* 0x1008B9A3: mov dword ptr [esi], 1 */
L_1008B9A9:
    RECOMP_CALL(sub_1001177D); /* 0x1008B9A9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1008B9AE: push 0x2a */
    ebx = POP32_VAL(esp); /* 0x1008B9B0: pop ebx */
    MEM32(eax) = ebx; /* 0x1008B9B1: mov dword ptr [eax], ebx */
    goto L_1008B9F3; /* 0x1008B9B3: jmp 0x1008b9f3 */
L_1008B9B5:
    PUSH32(esp, 2); /* 0x1008B9B5: push 2 */
    edx = POP32_VAL(esp); /* 0x1008B9B7: pop edx */
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1008B9B8: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008B9D0; /* 0x1008B9BB: jae 0x1008b9d0 */
L_1008B9BD:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1008B9BD: mov byte ptr [edi], bl */
    RECOMP_CALL(sub_1001177D); /* 0x1008B9BF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1008B9C4: push 0x22 */
    ebx = POP32_VAL(esp); /* 0x1008B9C6: pop ebx */
    MEM32(eax) = ebx; /* 0x1008B9C7: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008B9C9: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008B9F3; /* 0x1008B9CE: jmp 0x1008b9f3 */
L_1008B9D0:
    SET_LO8(eax, MEM8(ecx)); /* 0x1008B9D0: mov al, byte ptr [ecx] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1008B9D2: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x1008B9D4: mov al, byte ptr [ecx + 1] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1008B9D7: mov byte ptr [edi + 1], al */
    /* test esi, esi */ /* 0x1008B9DA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B9F3; /* 0x1008B9DC: je 0x1008b9f3 */
L_1008B9DE:
    MEM32(esi) = edx; /* 0x1008B9DE: mov dword ptr [esi], edx */
    goto L_1008B9F3; /* 0x1008B9E0: jmp 0x1008b9f3 */
L_1008B9E2:
    eax = MEM32(ebp + 0x14); /* 0x1008B9E2: mov eax, dword ptr [ebp + 0x14] */
    SET_LO8(eax, MEM8(eax)); /* 0x1008B9E5: mov al, byte ptr [eax] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1008B9E7: mov byte ptr [edi], al */
    /* test esi, esi */ /* 0x1008B9E9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008B9F3; /* 0x1008B9EB: je 0x1008b9f3 */
L_1008B9ED:
    MEM32(esi) = 1; /* 0x1008B9ED: mov dword ptr [esi], 1 */
L_1008B9F3:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008B9F3: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008BA00; /* 0x1008B9F7: je 0x1008ba00 */
L_1008B9F9:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008B9F9: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008B9FC: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008BA00:
    eax = ebx; /* 0x1008BA00: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_1008B96D; /* 0x1008BA02: jmp 0x1008b96d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008BA07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008BA07u);

L_1008BA07:
    PUSH32(esp, ebp); /* 0x1008BA07: push ebp */
    ebp = esp; /* 0x1008BA08: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1008BA0A: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1008BA0D: push ebx */
    PUSH32(esp, esi); /* 0x1008BA0E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008BA0F: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1008BA12: push edi */
    /* test esi, esi */ /* 0x1008BA13: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BA27; /* 0x1008BA15: je 0x1008ba27 */
L_1008BA17:
    edi = MEM32(ebp + 0xC); /* 0x1008BA17: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1008BA1A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BA27; /* 0x1008BA1C: je 0x1008ba27 */
L_1008BA1E:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1008BA1E: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008BA3F; /* 0x1008BA22: jne 0x1008ba3f */
L_1008BA24:
    MEM8(esi) = (uint8_t)(0); /* 0x1008BA24: mov byte ptr [esi], 0 */
L_1008BA27:
    RECOMP_CALL(sub_1001177D); /* 0x1008BA27: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008BA2C: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1008BA2E: pop ebx */
    MEM32(eax) = ebx; /* 0x1008BA2F: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008BA31: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1008BA36:
    edi = POP32_VAL(esp); /* 0x1008BA36: pop edi */
    esi = POP32_VAL(esp); /* 0x1008BA37: pop esi */
    eax = ebx; /* 0x1008BA38: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1008BA3A: pop ebx */
    esp = ebp; /* 0x1008BA3B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008BA3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008BA3E: ret  */
L_1008BA3F:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008BA3F: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x1C); /* 0x1008BA42: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1000F764); /* 0x1008BA45: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1008BA4A: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008BA4D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x1008BA4F: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008BA68; /* 0x1008BA52: jne 0x1008ba68 */
L_1008BA54:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008BA54: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1008BA57: push edi */
    PUSH32(esp, esi); /* 0x1008BA58: push esi */
    RECOMP_CALL(sub_1002E676); /* 0x1008BA59: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008BA5E: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1008BA61: mov ebx, eax */
    goto L_1008BB77; /* 0x1008BA63: jmp 0x1008bb77 */
L_1008BA68:
    MEM32(ebp + (-0xC)) = ebx; /* 0x1008BA68: mov dword ptr [ebp - 0xc], ebx */
    ecx = esi; /* 0x1008BA6B: mov ecx, esi */
L_1008BA6D:
    /* cmp MEM8(ecx), LO8(ebx) */ /* 0x1008BA6D: cmp byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008BA75; /* 0x1008BA6F: je 0x1008ba75 */
L_1008BA71:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008BA71: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008BA72: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1008BA6D; /* 0x1008BA73: jne 0x1008ba6d */
L_1008BA75:
    MEM32(ebp + (-0x4)) = ecx; /* 0x1008BA75: mov dword ptr [ebp - 4], ecx */
    /* test edi, edi */ /* 0x1008BA78: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008BA8A; /* 0x1008BA7A: jne 0x1008ba8a */
L_1008BA7C:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008BA7C: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_1001177D); /* 0x1008BA7E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008BA83: push 0x16 */
    goto L_1008BB26; /* 0x1008BA85: jmp 0x1008bb26 */
L_1008BA8A:
    eax = ecx + (-0x1); /* 0x1008BA8A: lea eax, [ecx - 1] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1008BA8D: mov dword ptr [ebp - 8], eax */
    edx = eax; /* 0x1008BA90: mov edx, eax */
    MEM32(ebp + 0x8) = edx; /* 0x1008BA92: mov dword ptr [ebp + 8], edx */
    /* cmp eax, esi */ /* 0x1008BA95: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008BAC1; /* 0x1008BA97: jb 0x1008bac1 */
L_1008BA99:
    ebx = eax; /* 0x1008BA99: mov ebx, eax */
L_1008BA9B:
    eax = ebp + (-0x1C); /* 0x1008BA9B: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1008BA9E: push eax */
    eax = (uint32_t)MEM8(ebx); /* 0x1008BA9F: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x1008BAA2: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008BAA3: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008BAA8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008BAA9: pop ecx */
    /* test eax, eax */ /* 0x1008BAAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BAB3; /* 0x1008BAAC: je 0x1008bab3 */
L_1008BAAE:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1008BAAE: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x1008BAAF: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008BA9B; /* 0x1008BAB1: jae 0x1008ba9b */
L_1008BAB3:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008BAB3: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x8)); /* 0x1008BAB6: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + 0x8) = ebx; /* 0x1008BAB9: mov dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008BABC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x8); /* 0x1008BABE: mov edx, dword ptr [ebp + 8] */
L_1008BAC1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1008BAC1: sub eax, edx */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1008BAC3: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BAD3; /* 0x1008BAC5: je 0x1008bad3 */
L_1008BAC7:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008BAC7: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008BACA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008BACC: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008BACD: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = eax; /* 0x1008BACE: mov dword ptr [ebp - 0xc], eax */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1008BAD1: mov byte ptr [ecx], bl */
L_1008BAD3:
    edx = MEM32(ebp + 0x10); /* 0x1008BAD3: mov edx, dword ptr [ebp + 0x10] */
L_1008BAD6:
    SET_LO8(eax, MEM8(edx)); /* 0x1008BAD6: mov al, byte ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1008BAD8: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008BADA: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008BADB: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008BADC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BAE3; /* 0x1008BADE: je 0x1008bae3 */
L_1008BAE0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008BAE0: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1008BAD6; /* 0x1008BAE1: jne 0x1008bad6 */
L_1008BAE3:
    /* test edi, edi */ /* 0x1008BAE3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008BB30; /* 0x1008BAE5: jne 0x1008bb30 */
L_1008BAE7:
    /* cmp MEM8(edx), 0 */ /* 0x1008BAE7: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008BB1D; /* 0x1008BAEA: jne 0x1008bb1d */
L_1008BAEC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008BAEC: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = ecx; /* 0x1008BAED: mov dword ptr [ebp + 8], ecx */
    edi = ecx; /* 0x1008BAF0: mov edi, ecx */
    /* cmp ecx, esi */ /* 0x1008BAF2: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008BB11; /* 0x1008BAF4: jb 0x1008bb11 */
L_1008BAF6:
    eax = ebp + (-0x1C); /* 0x1008BAF6: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1008BAF9: push eax */
    eax = (uint32_t)MEM8(edi); /* 0x1008BAFA: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x1008BAFD: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008BAFE: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008BB03: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008BB04: pop ecx */
    /* test eax, eax */ /* 0x1008BB05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BB0E; /* 0x1008BB07: je 0x1008bb0e */
L_1008BB09:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008BB09: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x1008BB0A: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008BAF6; /* 0x1008BB0C: jae 0x1008baf6 */
L_1008BB0E:
    ecx = MEM32(ebp + 0x8); /* 0x1008BB0E: mov ecx, dword ptr [ebp + 8] */
L_1008BB11:
    eax = ecx; /* 0x1008BB11: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1008BB13: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1008BB15: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BB1D; /* 0x1008BB17: je 0x1008bb1d */
L_1008BB19:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1008BB19: mov byte ptr [ecx], bl */
    goto L_1008BB6D; /* 0x1008BB1B: jmp 0x1008bb6d */
L_1008BB1D:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008BB1D: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_1001177D); /* 0x1008BB1F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1008BB24: push 0x22 */
L_1008BB26:
    ebx = POP32_VAL(esp); /* 0x1008BB26: pop ebx */
    MEM32(eax) = ebx; /* 0x1008BB27: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008BB29: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008BB77; /* 0x1008BB2E: jmp 0x1008bb77 */
L_1008BB30:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x1008BB30: add ecx, -2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ecx; /* 0x1008BB33: mov dword ptr [ebp + 8], ecx */
    edi = ecx; /* 0x1008BB36: mov edi, ecx */
    /* cmp ecx, esi */ /* 0x1008BB38: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008BB57; /* 0x1008BB3A: jb 0x1008bb57 */
L_1008BB3C:
    eax = ebp + (-0x1C); /* 0x1008BB3C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1008BB3F: push eax */
    eax = (uint32_t)MEM8(edi); /* 0x1008BB40: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x1008BB43: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008BB44: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008BB49: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008BB4A: pop ecx */
    /* test eax, eax */ /* 0x1008BB4B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BB54; /* 0x1008BB4D: je 0x1008bb54 */
L_1008BB4F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008BB4F: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x1008BB50: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008BB3C; /* 0x1008BB52: jae 0x1008bb3c */
L_1008BB54:
    ecx = MEM32(ebp + 0x8); /* 0x1008BB54: mov ecx, dword ptr [ebp + 8] */
L_1008BB57:
    eax = ecx; /* 0x1008BB57: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1008BB59: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1008BB5B: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BB66; /* 0x1008BB5D: je 0x1008bb66 */
L_1008BB5F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008BB5F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1008BB61: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008BB63: inc eax */
    _flag_k = FK_INC;
    goto L_1008BB69; /* 0x1008BB64: jmp 0x1008bb69 */
L_1008BB66:
    eax = MEM32(ebp + (-0xC)); /* 0x1008BB66: mov eax, dword ptr [ebp - 0xc] */
L_1008BB69:
    /* test eax, eax */ /* 0x1008BB69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BB77; /* 0x1008BB6B: je 0x1008bb77 */
L_1008BB6D:
    RECOMP_CALL(sub_1001177D); /* 0x1008BB6D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1008BB72: push 0x2a */
    ebx = POP32_VAL(esp); /* 0x1008BB74: pop ebx */
    MEM32(eax) = ebx; /* 0x1008BB75: mov dword ptr [eax], ebx */
L_1008BB77:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x1008BB77: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008BA36; /* 0x1008BB7B: je 0x1008ba36 */
L_1008BB81:
    ecx = MEM32(ebp + (-0x14)); /* 0x1008BB81: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008BB84: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1008BA36; /* 0x1008BB88: jmp 0x1008ba36 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008BB8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008BB8Du);

L_1008BB8D:
    PUSH32(esp, ebp); /* 0x1008BB8D: push ebp */
    ebp = esp; /* 0x1008BB8E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008BB90: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1008BB93: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008BB94: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1008BB97: push edi */
    /* test esi, esi */ /* 0x1008BB98: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BBAC; /* 0x1008BB9A: je 0x1008bbac */
L_1008BB9C:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1008BB9C: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008BBAC; /* 0x1008BBA0: jbe 0x1008bbac */
L_1008BBA2:
    edi = MEM32(ebp + 0x10); /* 0x1008BBA2: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1008BBA5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008BBC3; /* 0x1008BBA7: jne 0x1008bbc3 */
L_1008BBA9:
    MEM8(esi) = (uint8_t)(0); /* 0x1008BBA9: mov byte ptr [esi], 0 */
L_1008BBAC:
    RECOMP_CALL(sub_1001177D); /* 0x1008BBAC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008BBB1: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1008BBB3: pop esi */
    MEM32(eax) = esi; /* 0x1008BBB4: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1008BBB6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1008BBBB: mov eax, esi */
L_1008BBBD:
    edi = POP32_VAL(esp); /* 0x1008BBBD: pop edi */
    esi = POP32_VAL(esp); /* 0x1008BBBE: pop esi */
    esp = ebp; /* 0x1008BBBF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008BBC1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008BBC2: ret  */
L_1008BBC3:
    PUSH32(esp, ebx); /* 0x1008BBC3: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008BBC4: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x14); /* 0x1008BBC7: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x1008BBCA: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1008BBCF: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008BBD2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x1008BBD4: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008BBED; /* 0x1008BBD7: jne 0x1008bbed */
L_1008BBD9:
    PUSH32(esp, edi); /* 0x1008BBD9: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008BBDA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1008BBDD: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x1008BBDE: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008BBE3: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1008BBE6: mov ebx, eax */
    goto L_1008BC91; /* 0x1008BBE8: jmp 0x1008bc91 */
L_1008BBED:
    ecx = MEM32(ebp + 0xC); /* 0x1008BBED: mov ecx, dword ptr [ebp + 0xc] */
    edx = esi; /* 0x1008BBF0: mov edx, esi */
L_1008BBF2:
    SET_LO8(eax, MEM8(edi)); /* 0x1008BBF2: mov al, byte ptr [edi] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x1008BBF4: mov byte ptr [edx], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008BBF6: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008BBF7: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008BBF8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BBFF; /* 0x1008BBFA: je 0x1008bbff */
L_1008BBFC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008BBFC: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1008BBF2; /* 0x1008BBFD: jne 0x1008bbf2 */
L_1008BBFF:
    MEM32(ebp + 0x8) = edx; /* 0x1008BBFF: mov dword ptr [ebp + 8], edx */
    /* test ecx, ecx */ /* 0x1008BC02: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008BC4C; /* 0x1008BC04: jne 0x1008bc4c */
L_1008BC06:
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x1008BC06: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008BC39; /* 0x1008BC08: jne 0x1008bc39 */
L_1008BC0A:
    ecx = edx + (-0x1); /* 0x1008BC0A: lea ecx, [edx - 1] */
    MEM32(ebp + 0x8) = ecx; /* 0x1008BC0D: mov dword ptr [ebp + 8], ecx */
    edi = ecx; /* 0x1008BC10: mov edi, ecx */
    /* cmp ecx, esi */ /* 0x1008BC12: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008BC31; /* 0x1008BC14: jb 0x1008bc31 */
L_1008BC16:
    eax = ebp + (-0x14); /* 0x1008BC16: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008BC19: push eax */
    eax = (uint32_t)MEM8(edi); /* 0x1008BC1A: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x1008BC1D: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008BC1E: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008BC23: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008BC24: pop ecx */
    /* test eax, eax */ /* 0x1008BC25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BC2E; /* 0x1008BC27: je 0x1008bc2e */
L_1008BC29:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008BC29: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x1008BC2A: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008BC16; /* 0x1008BC2C: jae 0x1008bc16 */
L_1008BC2E:
    ecx = MEM32(ebp + 0x8); /* 0x1008BC2E: mov ecx, dword ptr [ebp + 8] */
L_1008BC31:
    eax = ecx; /* 0x1008BC31: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1008BC33: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1008BC35: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008BC85; /* 0x1008BC37: jne 0x1008bc85 */
L_1008BC39:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008BC39: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_1001177D); /* 0x1008BC3B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1008BC40: push 0x22 */
    ebx = POP32_VAL(esp); /* 0x1008BC42: pop ebx */
    MEM32(eax) = ebx; /* 0x1008BC43: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008BC45: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008BC91; /* 0x1008BC4A: jmp 0x1008bc91 */
L_1008BC4C:
    ecx = edx + (-0x2); /* 0x1008BC4C: lea ecx, [edx - 2] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1008BC4F: mov dword ptr [ebp - 4], ecx */
    edi = ecx; /* 0x1008BC52: mov edi, ecx */
    /* cmp ecx, esi */ /* 0x1008BC54: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008BC76; /* 0x1008BC56: jb 0x1008bc76 */
L_1008BC58:
    eax = ebp + (-0x14); /* 0x1008BC58: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008BC5B: push eax */
    eax = (uint32_t)MEM8(edi); /* 0x1008BC5C: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x1008BC5F: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008BC60: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008BC65: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008BC66: pop ecx */
    /* test eax, eax */ /* 0x1008BC67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BC70; /* 0x1008BC69: je 0x1008bc70 */
L_1008BC6B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008BC6B: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x1008BC6C: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008BC58; /* 0x1008BC6E: jae 0x1008bc58 */
L_1008BC70:
    edx = MEM32(ebp + 0x8); /* 0x1008BC70: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1008BC73: mov ecx, dword ptr [ebp - 4] */
L_1008BC76:
    eax = ecx; /* 0x1008BC76: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1008BC78: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1008BC7A: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BC91; /* 0x1008BC7C: je 0x1008bc91 */
L_1008BC7E:
    eax = edx + (-0x2); /* 0x1008BC7E: lea eax, [edx - 2] */
    /* cmp eax, esi */ /* 0x1008BC81: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008BC91; /* 0x1008BC83: jb 0x1008bc91 */
L_1008BC85:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1008BC85: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_1001177D); /* 0x1008BC87: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1008BC8C: push 0x2a */
    ebx = POP32_VAL(esp); /* 0x1008BC8E: pop ebx */
    MEM32(eax) = ebx; /* 0x1008BC8F: mov dword ptr [eax], ebx */
L_1008BC91:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008BC91: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008BC9E; /* 0x1008BC95: je 0x1008bc9e */
L_1008BC97:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008BC97: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008BC9A: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008BC9E:
    eax = ebx; /* 0x1008BC9E: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1008BCA0: pop ebx */
    RECOMP_BACKEDGE();
    goto L_1008BBBD; /* 0x1008BCA1: jmp 0x1008bbbd */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008BCA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008BCA6u);

L_1008BCA6:
    PUSH32(esp, ebp); /* 0x1008BCA6: push ebp */
    ebp = esp; /* 0x1008BCA7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1008BCA9: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1008BCAC: push ebx */
    PUSH32(esp, esi); /* 0x1008BCAD: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008BCAE: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008BCB1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1008BCB3: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1008BCB4: mov edi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1008BCB7: mov dword ptr [ebp - 4], ebx */
    /* test edi, edi */ /* 0x1008BCBA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008BCCB; /* 0x1008BCBC: jne 0x1008bccb */
L_1008BCBE:
    /* test esi, esi */ /* 0x1008BCBE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008BCCF; /* 0x1008BCC0: jne 0x1008bccf */
L_1008BCC2:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1008BCC2: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008BCDF; /* 0x1008BCC5: jne 0x1008bcdf */
L_1008BCC7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008BCC7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008BCF0; /* 0x1008BCC9: jmp 0x1008bcf0 */
L_1008BCCB:
    /* test esi, esi */ /* 0x1008BCCB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BCDF; /* 0x1008BCCD: je 0x1008bcdf */
L_1008BCCF:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1008BCCF: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008BCDF; /* 0x1008BCD2: jbe 0x1008bcdf */
L_1008BCD4:
    /* test edi, edi */ /* 0x1008BCD4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BCF7; /* 0x1008BCD6: je 0x1008bcf7 */
L_1008BCD8:
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1008BCD8: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008BCF7; /* 0x1008BCDB: jne 0x1008bcf7 */
L_1008BCDD:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008BCDD: mov byte ptr [esi], bl */
L_1008BCDF:
    RECOMP_CALL(sub_1001177D); /* 0x1008BCDF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008BCE4: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1008BCE6: pop ebx */
    MEM32(eax) = ebx; /* 0x1008BCE7: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008BCE9: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1008BCEE:
    eax = ebx; /* 0x1008BCEE: mov eax, ebx */
L_1008BCF0:
    edi = POP32_VAL(esp); /* 0x1008BCF0: pop edi */
    esi = POP32_VAL(esp); /* 0x1008BCF1: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008BCF2: pop ebx */
    esp = ebp; /* 0x1008BCF3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008BCF5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008BCF6: ret  */
L_1008BCF7:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1008BCF7: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x20); /* 0x1008BCFA: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1000F764); /* 0x1008BCFD: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x1008BD02: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x1008BD05: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008BD21; /* 0x1008BD08: jne 0x1008bd21 */
L_1008BD0A:
    PUSH32(esp, edi); /* 0x1008BD0A: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008BD0B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008BD0E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1008BD11: push esi */
    RECOMP_CALL(sub_1002FFBB); /* 0x1008BD12: call 0x1002ffbb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008BD17: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1008BD1A: mov ebx, eax */
    goto L_1008BEE2; /* 0x1008BD1C: jmp 0x1008bee2 */
L_1008BD21:
    eax = MEM32(ebp + 0xC); /* 0x1008BD21: mov eax, dword ptr [ebp + 0xc] */
    edi = esi; /* 0x1008BD24: mov edi, esi */
    ecx = eax; /* 0x1008BD26: mov ecx, eax */
L_1008BD28:
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x1008BD28: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008BD30; /* 0x1008BD2A: je 0x1008bd30 */
L_1008BD2C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008BD2C: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008BD2D: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1008BD28; /* 0x1008BD2E: jne 0x1008bd28 */
L_1008BD30:
    MEM32(ebp + (-0xC)) = ecx; /* 0x1008BD30: mov dword ptr [ebp - 0xc], ecx */
    /* test ecx, ecx */ /* 0x1008BD33: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008BD45; /* 0x1008BD35: jne 0x1008bd45 */
L_1008BD37:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008BD37: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_1001177D); /* 0x1008BD39: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008BD3E: push 0x16 */
    goto L_1008BE8C; /* 0x1008BD40: jmp 0x1008be8c */
L_1008BD45:
    /* cmp ecx, eax */ /* 0x1008BD45: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008BD93; /* 0x1008BD47: jae 0x1008bd93 */
L_1008BD49:
    eax = edi + (-0x1); /* 0x1008BD49: lea eax, [edi - 1] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1008BD4C: mov dword ptr [ebp - 0x10], eax */
    edx = eax; /* 0x1008BD4F: mov edx, eax */
    MEM32(ebp + (-0x8)) = edx; /* 0x1008BD51: mov dword ptr [ebp - 8], edx */
    /* cmp eax, esi */ /* 0x1008BD54: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008BD80; /* 0x1008BD56: jb 0x1008bd80 */
L_1008BD58:
    ebx = eax; /* 0x1008BD58: mov ebx, eax */
L_1008BD5A:
    eax = ebp + (-0x20); /* 0x1008BD5A: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1008BD5D: push eax */
    eax = (uint32_t)MEM8(ebx); /* 0x1008BD5E: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x1008BD61: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008BD62: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008BD67: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008BD68: pop ecx */
    /* test eax, eax */ /* 0x1008BD69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BD72; /* 0x1008BD6B: je 0x1008bd72 */
L_1008BD6D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1008BD6D: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x1008BD6E: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008BD5A; /* 0x1008BD70: jae 0x1008bd5a */
L_1008BD72:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008BD72: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0x10)); /* 0x1008BD75: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1008BD78: mov dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008BD7B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x8)); /* 0x1008BD7D: mov edx, dword ptr [ebp - 8] */
L_1008BD80:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1008BD80: sub eax, edx */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1008BD82: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BD93; /* 0x1008BD84: je 0x1008bd93 */
L_1008BD86:
    edi = MEM32(ebp + (-0x10)); /* 0x1008BD86: mov edi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008BD89: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = 1; /* 0x1008BD8A: mov dword ptr [ebp - 4], 1 */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1008BD91: mov byte ptr [edi], bl */
L_1008BD93:
    edx = MEM32(ebp + 0x14); /* 0x1008BD93: mov edx, dword ptr [ebp + 0x14] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1008BD96: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008BDAF; /* 0x1008BD99: jne 0x1008bdaf */
L_1008BD9B:
    eax = MEM32(ebp + 0x10); /* 0x1008BD9B: mov eax, dword ptr [ebp + 0x10] */
    SET_LO8(eax, MEM8(eax)); /* 0x1008BD9E: mov al, byte ptr [eax] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1008BDA0: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008BDA2: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x1008BDA3: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008BDA6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BDD6; /* 0x1008BDA8: je 0x1008bdd6 */
L_1008BDAA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008BDAA: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008BDD6; /* 0x1008BDAB: je 0x1008bdd6 */
L_1008BDAD:
    RECOMP_BACKEDGE();
    goto L_1008BD9B; /* 0x1008BDAD: jmp 0x1008bd9b */
L_1008BDAF:
    /* test edx, edx */ /* 0x1008BDAF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BDD3; /* 0x1008BDB1: je 0x1008bdd3 */
L_1008BDB3:
    esi = MEM32(ebp + 0x10); /* 0x1008BDB3: mov esi, dword ptr [ebp + 0x10] */
L_1008BDB6:
    SET_LO8(eax, MEM8(esi)); /* 0x1008BDB6: mov al, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1008BDB8: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008BDBA: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008BDBB: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008BDBC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BDC6; /* 0x1008BDBE: je 0x1008bdc6 */
L_1008BDC0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008BDC0: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008BDC6; /* 0x1008BDC1: je 0x1008bdc6 */
L_1008BDC3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1008BDC3: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1008BDB6; /* 0x1008BDC4: jne 0x1008bdb6 */
L_1008BDC6:
    MEM32(ebp + 0x10) = esi; /* 0x1008BDC6: mov dword ptr [ebp + 0x10], esi */
    esi = MEM32(ebp + 0x8); /* 0x1008BDC9: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + 0x14) = edx; /* 0x1008BDCC: mov dword ptr [ebp + 0x14], edx */
    /* test edx, edx */ /* 0x1008BDCF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008BDD6; /* 0x1008BDD1: jne 0x1008bdd6 */
L_1008BDD3:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1008BDD3: mov byte ptr [edi], bl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008BDD5: inc edi */
    _flag_k = FK_INC;
L_1008BDD6:
    /* test ecx, ecx */ /* 0x1008BDD6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008BE96; /* 0x1008BDD8: jne 0x1008be96 */
L_1008BDDE:
    eax = MEM32(ebp + 0x10); /* 0x1008BDDE: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM8(eax), LO8(ecx) */ /* 0x1008BDE1: cmp byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008BDEA; /* 0x1008BDE3: je 0x1008bdea */
L_1008BDE5:
    /* cmp edx, 1 */ /* 0x1008BDE5: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008BE23; /* 0x1008BDE8: jne 0x1008be23 */
L_1008BDEA:
    ecx = edi + (-0x1); /* 0x1008BDEA: lea ecx, [edi - 1] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1008BDED: mov dword ptr [ebp - 0x10], ecx */
    edi = ecx; /* 0x1008BDF0: mov edi, ecx */
    /* cmp ecx, esi */ /* 0x1008BDF2: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008BE14; /* 0x1008BDF4: jb 0x1008be14 */
L_1008BDF6:
    eax = ebp + (-0x20); /* 0x1008BDF6: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1008BDF9: push eax */
    eax = (uint32_t)MEM8(edi); /* 0x1008BDFA: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x1008BDFD: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008BDFE: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008BE03: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008BE04: pop ecx */
    /* test eax, eax */ /* 0x1008BE05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BE0E; /* 0x1008BE07: je 0x1008be0e */
L_1008BE09:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008BE09: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x1008BE0A: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008BDF6; /* 0x1008BE0C: jae 0x1008bdf6 */
L_1008BE0E:
    edx = MEM32(ebp + 0x14); /* 0x1008BE0E: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1008BE11: mov ecx, dword ptr [ebp - 0x10] */
L_1008BE14:
    eax = ecx; /* 0x1008BE14: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1008BE16: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1008BE18: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BE23; /* 0x1008BE1A: je 0x1008be23 */
L_1008BE1C:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1008BE1C: mov byte ptr [ecx], bl */
    goto L_1008BED8; /* 0x1008BE1E: jmp 0x1008bed8 */
L_1008BE23:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1008BE23: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008BE83; /* 0x1008BE26: jne 0x1008be83 */
L_1008BE28:
    eax = MEM32(ebp + (-0x4)); /* 0x1008BE28: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1008BE2B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BE3A; /* 0x1008BE2D: je 0x1008be3a */
L_1008BE2F:
    RECOMP_CALL(sub_1001177D); /* 0x1008BE2F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1008BE34: mov dword ptr [eax], 0x2a */
L_1008BE3A:
    ecx = MEM32(ebp + 0xC); /* 0x1008BE3A: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 1 */ /* 0x1008BE3D: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008BE7A; /* 0x1008BE40: jbe 0x1008be7a */
L_1008BE42:
    edx = ecx + (-0x2); /* 0x1008BE42: lea edx, [ecx - 2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1008BE45: add edx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = edx; /* 0x1008BE47: mov dword ptr [ebp + 0x14], edx */
    edi = edx; /* 0x1008BE4A: mov edi, edx */
    /* cmp edx, esi */ /* 0x1008BE4C: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008BE6E; /* 0x1008BE4E: jb 0x1008be6e */
L_1008BE50:
    eax = ebp + (-0x20); /* 0x1008BE50: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1008BE53: push eax */
    eax = (uint32_t)MEM8(edi); /* 0x1008BE54: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x1008BE57: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008BE58: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008BE5D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008BE5E: pop ecx */
    /* test eax, eax */ /* 0x1008BE5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BE68; /* 0x1008BE61: je 0x1008be68 */
L_1008BE63:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008BE63: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x1008BE64: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008BE50; /* 0x1008BE66: jae 0x1008be50 */
L_1008BE68:
    ecx = MEM32(ebp + 0xC); /* 0x1008BE68: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x14); /* 0x1008BE6B: mov edx, dword ptr [ebp + 0x14] */
L_1008BE6E:
    eax = edx; /* 0x1008BE6E: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1008BE70: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1008BE72: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BE7A; /* 0x1008BE74: je 0x1008be7a */
L_1008BE76:
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x1008BE76: mov byte ptr [edx], bl */
    goto L_1008BE7E; /* 0x1008BE78: jmp 0x1008be7e */
L_1008BE7A:
    MEM8(esi + ecx + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1008BE7A: mov byte ptr [esi + ecx - 1], bl */
L_1008BE7E:
    PUSH32(esp, 0x50u); /* 0x1008BE7E: push 0x50 */
    ebx = POP32_VAL(esp); /* 0x1008BE80: pop ebx */
    goto L_1008BEE2; /* 0x1008BE81: jmp 0x1008bee2 */
L_1008BE83:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008BE83: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_1001177D); /* 0x1008BE85: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1008BE8A: push 0x22 */
L_1008BE8C:
    ebx = POP32_VAL(esp); /* 0x1008BE8C: pop ebx */
    MEM32(eax) = ebx; /* 0x1008BE8D: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008BE8F: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008BEE2; /* 0x1008BE94: jmp 0x1008bee2 */
L_1008BE96:
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x1008BE96: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008BED1; /* 0x1008BE99: jae 0x1008bed1 */
L_1008BE9B:
    ecx = edi + (-0x2); /* 0x1008BE9B: lea ecx, [edi - 2] */
    MEM32(ebp + 0x14) = ecx; /* 0x1008BE9E: mov dword ptr [ebp + 0x14], ecx */
    edi = ecx; /* 0x1008BEA1: mov edi, ecx */
    /* cmp ecx, esi */ /* 0x1008BEA3: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008BEC2; /* 0x1008BEA5: jb 0x1008bec2 */
L_1008BEA7:
    eax = ebp + (-0x20); /* 0x1008BEA7: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1008BEAA: push eax */
    eax = (uint32_t)MEM8(edi); /* 0x1008BEAB: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x1008BEAE: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008BEAF: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008BEB4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008BEB5: pop ecx */
    /* test eax, eax */ /* 0x1008BEB6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BEBF; /* 0x1008BEB8: je 0x1008bebf */
L_1008BEBA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008BEBA: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x1008BEBB: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008BEA7; /* 0x1008BEBD: jae 0x1008bea7 */
L_1008BEBF:
    ecx = MEM32(ebp + 0x14); /* 0x1008BEBF: mov ecx, dword ptr [ebp + 0x14] */
L_1008BEC2:
    eax = ecx; /* 0x1008BEC2: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1008BEC4: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1008BEC6: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BED1; /* 0x1008BEC8: je 0x1008bed1 */
L_1008BECA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008BECA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1008BECC: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008BECE: inc eax */
    _flag_k = FK_INC;
    goto L_1008BED4; /* 0x1008BECF: jmp 0x1008bed4 */
L_1008BED1:
    eax = MEM32(ebp + (-0x4)); /* 0x1008BED1: mov eax, dword ptr [ebp - 4] */
L_1008BED4:
    /* test eax, eax */ /* 0x1008BED4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BEE2; /* 0x1008BED6: je 0x1008bee2 */
L_1008BED8:
    RECOMP_CALL(sub_1001177D); /* 0x1008BED8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1008BEDD: push 0x2a */
    ebx = POP32_VAL(esp); /* 0x1008BEDF: pop ebx */
    MEM32(eax) = ebx; /* 0x1008BEE0: mov dword ptr [eax], ebx */
L_1008BEE2:
    /* cmp MEM8(ebp + (-0x14)), 0 */ /* 0x1008BEE2: cmp byte ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008BCEE; /* 0x1008BEE6: je 0x1008bcee */
L_1008BEEC:
    ecx = MEM32(ebp + (-0x18)); /* 0x1008BEEC: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008BEEF: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1008BCEE; /* 0x1008BEF3: jmp 0x1008bcee */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008BEF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008BEF8u);

L_1008BEF8:
    PUSH32(esp, ebp); /* 0x1008BEF8: push ebp */
    ebp = esp; /* 0x1008BEF9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008BEFB: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1008BEFE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008BEFF: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1008BF02: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1008BF03: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x1008BF06: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008BF17; /* 0x1008BF08: jne 0x1008bf17 */
L_1008BF0A:
    /* test esi, esi */ /* 0x1008BF0A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008BF1B; /* 0x1008BF0C: jne 0x1008bf1b */
L_1008BF0E:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1008BF0E: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008BF33; /* 0x1008BF11: jne 0x1008bf33 */
L_1008BF13:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008BF13: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008BF44; /* 0x1008BF15: jmp 0x1008bf44 */
L_1008BF17:
    /* test esi, esi */ /* 0x1008BF17: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BF33; /* 0x1008BF19: je 0x1008bf33 */
L_1008BF1B:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1008BF1B: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008BF33; /* 0x1008BF1F: jbe 0x1008bf33 */
L_1008BF21:
    /* test edi, edi */ /* 0x1008BF21: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008BF2A; /* 0x1008BF23: jne 0x1008bf2a */
L_1008BF25:
    MEM8(esi) = (uint8_t)(0); /* 0x1008BF25: mov byte ptr [esi], 0 */
    RECOMP_BACKEDGE();
    goto L_1008BF13; /* 0x1008BF28: jmp 0x1008bf13 */
L_1008BF2A:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1008BF2A: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008BF4A; /* 0x1008BF2E: jne 0x1008bf4a */
L_1008BF30:
    MEM8(esi) = (uint8_t)(0); /* 0x1008BF30: mov byte ptr [esi], 0 */
L_1008BF33:
    RECOMP_CALL(sub_1001177D); /* 0x1008BF33: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008BF38: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1008BF3A: pop esi */
    MEM32(eax) = esi; /* 0x1008BF3B: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1008BF3D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1008BF42: mov eax, esi */
L_1008BF44:
    edi = POP32_VAL(esp); /* 0x1008BF44: pop edi */
    esi = POP32_VAL(esp); /* 0x1008BF45: pop esi */
    esp = ebp; /* 0x1008BF46: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008BF48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008BF49: ret  */
L_1008BF4A:
    PUSH32(esp, ebx); /* 0x1008BF4A: push ebx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1008BF4B: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x14); /* 0x1008BF4E: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x1008BF51: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1008BF56: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008BF59: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x1008BF5B: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008BF77; /* 0x1008BF5E: jne 0x1008bf77 */
L_1008BF60:
    PUSH32(esp, edi); /* 0x1008BF60: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008BF61: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008BF64: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1008BF67: push esi */
    RECOMP_CALL(sub_10012A18); /* 0x1008BF68: call 0x10012a18 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008BF6D: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1008BF70: mov ebx, eax */
    goto L_1008C0B2; /* 0x1008BF72: jmp 0x1008c0b2 */
L_1008BF77:
    eax = MEM32(ebp + 0xC); /* 0x1008BF77: mov eax, dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1008BF7A: mov ecx, esi */
    edx = MEM32(ebp + 0x10); /* 0x1008BF7C: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x14) = eax; /* 0x1008BF7F: mov dword ptr [ebp + 0x14], eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1008BF82: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008BF9C; /* 0x1008BF85: jne 0x1008bf9c */
L_1008BF87:
    SET_LO8(eax, MEM8(edx)); /* 0x1008BF87: mov al, byte ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1008BF89: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008BF8B: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008BF8C: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008BF8D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0x14); /* 0x1008BF8F: mov eax, dword ptr [ebp + 0x14] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BFB9; /* 0x1008BF92: je 0x1008bfb9 */
L_1008BF94:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1008BF94: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x14) = eax; /* 0x1008BF95: mov dword ptr [ebp + 0x14], eax */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008BFB9; /* 0x1008BF98: je 0x1008bfb9 */
L_1008BF9A:
    RECOMP_BACKEDGE();
    goto L_1008BF87; /* 0x1008BF9A: jmp 0x1008bf87 */
L_1008BF9C:
    SET_LO8(eax, MEM8(edx)); /* 0x1008BF9C: mov al, byte ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1008BF9E: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008BFA0: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008BFA1: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008BFA2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0x14); /* 0x1008BFA4: mov eax, dword ptr [ebp + 0x14] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BFB2; /* 0x1008BFA7: je 0x1008bfb2 */
L_1008BFA9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1008BFA9: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x14) = eax; /* 0x1008BFAA: mov dword ptr [ebp + 0x14], eax */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008BFB2; /* 0x1008BFAD: je 0x1008bfb2 */
L_1008BFAF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008BFAF: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1008BF9C; /* 0x1008BFB0: jne 0x1008bf9c */
L_1008BFB2:
    /* test edi, edi */ /* 0x1008BFB2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008BFB9; /* 0x1008BFB4: jne 0x1008bfb9 */
L_1008BFB6:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1008BFB6: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008BFB8: inc ecx */
    _flag_k = FK_INC;
L_1008BFB9:
    /* test eax, eax */ /* 0x1008BFB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C06E; /* 0x1008BFBB: jne 0x1008c06e */
L_1008BFC1:
    /* cmp MEM8(edx), LO8(ebx) */ /* 0x1008BFC1: cmp byte ptr [edx], bl */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008BFCA; /* 0x1008BFC3: je 0x1008bfca */
L_1008BFC5:
    /* cmp edi, 1 */ /* 0x1008BFC5: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C00D; /* 0x1008BFC8: jne 0x1008c00d */
L_1008BFCA:
    edx = ecx + (-0x1); /* 0x1008BFCA: lea edx, [ecx - 1] */
    MEM32(ebp + (-0x4)) = edx; /* 0x1008BFCD: mov dword ptr [ebp - 4], edx */
    ecx = edx; /* 0x1008BFD0: mov ecx, edx */
    MEM32(ebp + 0x14) = ecx; /* 0x1008BFD2: mov dword ptr [ebp + 0x14], ecx */
    /* cmp edx, esi */ /* 0x1008BFD5: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008BFFE; /* 0x1008BFD7: jb 0x1008bffe */
L_1008BFD9:
    ebx = edx; /* 0x1008BFD9: mov ebx, edx */
L_1008BFDB:
    eax = ebp + (-0x14); /* 0x1008BFDB: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008BFDE: push eax */
    eax = (uint32_t)MEM8(ebx); /* 0x1008BFDF: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x1008BFE2: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008BFE3: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008BFE8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008BFE9: pop ecx */
    /* test eax, eax */ /* 0x1008BFEA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008BFF3; /* 0x1008BFEC: je 0x1008bff3 */
L_1008BFEE:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1008BFEE: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x1008BFEF: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008BFDB; /* 0x1008BFF1: jae 0x1008bfdb */
L_1008BFF3:
    edx = MEM32(ebp + (-0x4)); /* 0x1008BFF3: mov edx, dword ptr [ebp - 4] */
    MEM32(ebp + 0x14) = ebx; /* 0x1008BFF6: mov dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008BFF9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14); /* 0x1008BFFB: mov ecx, dword ptr [ebp + 0x14] */
L_1008BFFE:
    eax = edx; /* 0x1008BFFE: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1008C000: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1008C002: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C00D; /* 0x1008C004: je 0x1008c00d */
L_1008C006:
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x1008C006: mov byte ptr [edx], bl */
    goto L_1008C0A8; /* 0x1008C008: jmp 0x1008c0a8 */
L_1008C00D:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1008C00D: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C05B; /* 0x1008C010: jne 0x1008c05b */
L_1008C012:
    ecx = MEM32(ebp + 0xC); /* 0x1008C012: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 1 */ /* 0x1008C015: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008C052; /* 0x1008C018: jbe 0x1008c052 */
L_1008C01A:
    edx = ecx + (-0x2); /* 0x1008C01A: lea edx, [ecx - 2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1008C01D: add edx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = edx; /* 0x1008C01F: mov dword ptr [ebp + 0x14], edx */
    edi = edx; /* 0x1008C022: mov edi, edx */
    /* cmp edx, esi */ /* 0x1008C024: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008C046; /* 0x1008C026: jb 0x1008c046 */
L_1008C028:
    eax = ebp + (-0x14); /* 0x1008C028: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008C02B: push eax */
    eax = (uint32_t)MEM8(edi); /* 0x1008C02C: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x1008C02F: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C030: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C035: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C036: pop ecx */
    /* test eax, eax */ /* 0x1008C037: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C040; /* 0x1008C039: je 0x1008c040 */
L_1008C03B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008C03B: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x1008C03C: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008C028; /* 0x1008C03E: jae 0x1008c028 */
L_1008C040:
    ecx = MEM32(ebp + 0xC); /* 0x1008C040: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x14); /* 0x1008C043: mov edx, dword ptr [ebp + 0x14] */
L_1008C046:
    eax = edx; /* 0x1008C046: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1008C048: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1008C04A: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C052; /* 0x1008C04C: je 0x1008c052 */
L_1008C04E:
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x1008C04E: mov byte ptr [edx], bl */
    goto L_1008C056; /* 0x1008C050: jmp 0x1008c056 */
L_1008C052:
    MEM8(esi + ecx + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1008C052: mov byte ptr [esi + ecx - 1], bl */
L_1008C056:
    PUSH32(esp, 0x50u); /* 0x1008C056: push 0x50 */
    ebx = POP32_VAL(esp); /* 0x1008C058: pop ebx */
    goto L_1008C0B2; /* 0x1008C059: jmp 0x1008c0b2 */
L_1008C05B:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008C05B: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_1001177D); /* 0x1008C05D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1008C062: push 0x22 */
    ebx = POP32_VAL(esp); /* 0x1008C064: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C065: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008C067: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008C0B2; /* 0x1008C06C: jmp 0x1008c0b2 */
L_1008C06E:
    eax = ecx; /* 0x1008C06E: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1008C070: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, 2 */ /* 0x1008C072: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1008C0B2; /* 0x1008C075: jl 0x1008c0b2 */
L_1008C077:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x1008C077: add ecx, -2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = ecx; /* 0x1008C07A: mov dword ptr [ebp + 0x14], ecx */
    edi = ecx; /* 0x1008C07D: mov edi, ecx */
    /* cmp ecx, esi */ /* 0x1008C07F: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008C09E; /* 0x1008C081: jb 0x1008c09e */
L_1008C083:
    eax = ebp + (-0x14); /* 0x1008C083: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008C086: push eax */
    eax = (uint32_t)MEM8(edi); /* 0x1008C087: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x1008C08A: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C08B: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C090: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C091: pop ecx */
    /* test eax, eax */ /* 0x1008C092: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C09B; /* 0x1008C094: je 0x1008c09b */
L_1008C096:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008C096: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x1008C097: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008C083; /* 0x1008C099: jae 0x1008c083 */
L_1008C09B:
    ecx = MEM32(ebp + 0x14); /* 0x1008C09B: mov ecx, dword ptr [ebp + 0x14] */
L_1008C09E:
    eax = ecx; /* 0x1008C09E: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1008C0A0: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1008C0A2: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C0B2; /* 0x1008C0A4: je 0x1008c0b2 */
L_1008C0A6:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1008C0A6: mov byte ptr [ecx], bl */
L_1008C0A8:
    RECOMP_CALL(sub_1001177D); /* 0x1008C0A8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1008C0AD: push 0x2a */
    ebx = POP32_VAL(esp); /* 0x1008C0AF: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C0B0: mov dword ptr [eax], ebx */
L_1008C0B2:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008C0B2: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C0BF; /* 0x1008C0B6: je 0x1008c0bf */
L_1008C0B8:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008C0B8: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008C0BB: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008C0BF:
    eax = ebx; /* 0x1008C0BF: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1008C0C1: pop ebx */
    RECOMP_BACKEDGE();
    goto L_1008BF44; /* 0x1008C0C2: jmp 0x1008bf44 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008C0C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008C0C7u);

L_1008C0C7:
    PUSH32(esp, ebp); /* 0x1008C0C7: push ebp */
    ebp = esp; /* 0x1008C0C8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1008C0CA: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1008C0CD: push ebx */
    PUSH32(esp, esi); /* 0x1008C0CE: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1008C0CF: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008C0D2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1008C0D4: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1008C0D7: mov dword ptr [ebp - 4], ebx */
    PUSH32(esp, edi); /* 0x1008C0DA: push edi */
    /* test esi, esi */ /* 0x1008C0DB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C0F4; /* 0x1008C0DD: jne 0x1008c0f4 */
L_1008C0DF:
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1008C0DF: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C0FD; /* 0x1008C0E2: jne 0x1008c0fd */
L_1008C0E4:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1008C0E4: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C2C0; /* 0x1008C0E7: jne 0x1008c2c0 */
L_1008C0ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008C0ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008C2D1; /* 0x1008C0EF: jmp 0x1008c2d1 */
L_1008C0F4:
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1008C0F4: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C2C0; /* 0x1008C0F7: je 0x1008c2c0 */
L_1008C0FD:
    edi = MEM32(ebp + 0xC); /* 0x1008C0FD: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1008C100: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C2C0; /* 0x1008C102: je 0x1008c2c0 */
L_1008C108:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1008C108: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x20); /* 0x1008C10B: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1000F764); /* 0x1008C10E: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x1008C113: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x1008C116: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C132; /* 0x1008C119: jne 0x1008c132 */
L_1008C11B:
    PUSH32(esp, esi); /* 0x1008C11B: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008C11C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1008C11F: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008C120: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008672B); /* 0x1008C123: call 0x1008672b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008C128: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1008C12B: mov ebx, eax */
    goto L_1008C2B1; /* 0x1008C12D: jmp 0x1008c2b1 */
L_1008C132:
    ecx = MEM32(ebp + 0x10); /* 0x1008C132: mov ecx, dword ptr [ebp + 0x10] */
    eax = ecx; /* 0x1008C135: mov eax, ecx */
    esi = MEM32(ebp + 0x8); /* 0x1008C137: mov esi, dword ptr [ebp + 8] */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008C13A: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008C13A: shr eax, 8 */
    MEM32(ebp + (-0xC)) = eax; /* 0x1008C13D: mov dword ptr [ebp - 0xc], eax */
    /* test LO8(eax), LO8(eax) */ /* 0x1008C140: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C1FB; /* 0x1008C142: je 0x1008c1fb */
L_1008C148:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1008C148: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C20E; /* 0x1008C14A: je 0x1008c20e */
L_1008C150:
    ecx = ebp + (-0x20); /* 0x1008C150: lea ecx, [ebp - 0x20] */
    eax = (uint32_t)LO8(eax); /* 0x1008C153: movzx eax, al */
    PUSH32(esp, ecx); /* 0x1008C156: push ecx */
    PUSH32(esp, eax); /* 0x1008C157: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C158: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C15D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C15E: pop ecx */
    /* test eax, eax */ /* 0x1008C15F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C20E; /* 0x1008C161: je 0x1008c20e */
L_1008C167:
    eax = MEM32(ebp + 0x14); /* 0x1008C167: mov eax, dword ptr [ebp + 0x14] */
    /* test LO8(eax), 1 */ /* 0x1008C16A: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C175; /* 0x1008C16C: je 0x1008c175 */
L_1008C16E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1008C16E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1008C170: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008C171: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1008C172: mov dword ptr [ebp - 8], ecx */
L_1008C175:
    ecx = esi; /* 0x1008C175: mov ecx, esi */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1008C177: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1008C177: shr eax, 1 */
    MEM32(ebp + 0x14) = eax; /* 0x1008C179: mov dword ptr [ebp + 0x14], eax */
    /* cmp MEM8(ecx), LO8(ebx) */ /* 0x1008C17C: cmp byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C1EB; /* 0x1008C17E: je 0x1008c1eb */
L_1008C180:
    /* test eax, eax */ /* 0x1008C180: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C1E8; /* 0x1008C182: je 0x1008c1e8 */
L_1008C184:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008C184: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C1E8; /* 0x1008C185: je 0x1008c1e8 */
L_1008C187:
    ecx = esi + 0x1; /* 0x1008C187: lea ecx, [esi + 1] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1008C18A: mov dword ptr [ebp - 0x10], ecx */
    /* cmp MEM8(ecx), LO8(ebx) */ /* 0x1008C18D: cmp byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C1F0; /* 0x1008C18F: je 0x1008c1f0 */
L_1008C191:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x1008C191: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C19A; /* 0x1008C194: je 0x1008c19a */
L_1008C196:
    ecx = ebx; /* 0x1008C196: mov ecx, ebx */
    goto L_1008C1AE; /* 0x1008C198: jmp 0x1008c1ae */
L_1008C19A:
    eax = ebp + (-0x20); /* 0x1008C19A: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1008C19D: push eax */
    eax = (uint32_t)MEM8(esi); /* 0x1008C19E: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1008C1A1: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C1A2: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C1A7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C1A8: pop ecx */
    ecx = eax; /* 0x1008C1A9: mov ecx, eax */
    eax = MEM32(ebp + 0x14); /* 0x1008C1AB: mov eax, dword ptr [ebp + 0x14] */
L_1008C1AE:
    edx = MEM32(ebp + (-0xC)); /* 0x1008C1AE: mov edx, dword ptr [ebp - 0xc] */
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x1008C1B1: mov byte ptr [esi], dl */
    esi = MEM32(ebp + (-0x10)); /* 0x1008C1B3: mov esi, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1008C1B6: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008C1B9: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C1E8; /* 0x1008C1BA: je 0x1008c1e8 */
L_1008C1BC:
    /* test ecx, ecx */ /* 0x1008C1BC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C1C5; /* 0x1008C1BE: je 0x1008c1c5 */
L_1008C1C0:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1008C1C0: mov dword ptr [ebp - 4], ebx */
    goto L_1008C1DA; /* 0x1008C1C3: jmp 0x1008c1da */
L_1008C1C5:
    eax = ebp + (-0x20); /* 0x1008C1C5: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1008C1C8: push eax */
    eax = (uint32_t)MEM8(esi); /* 0x1008C1C9: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1008C1CC: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C1CD: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C1D2: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008C1D3: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x1008C1D6: mov eax, dword ptr [ebp + 0x14] */
    ecx = POP32_VAL(esp); /* 0x1008C1D9: pop ecx */
L_1008C1DA:
    ecx = MEM32(ebp + 0x10); /* 0x1008C1DA: mov ecx, dword ptr [ebp + 0x10] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1008C1DD: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008C1DF: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1008C1E0: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x14) = eax; /* 0x1008C1E1: mov dword ptr [ebp + 0x14], eax */
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1008C1E4: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C180; /* 0x1008C1E6: jne 0x1008c180 */
L_1008C1E8:
    ecx = MEM32(ebp + 0x8); /* 0x1008C1E8: mov ecx, dword ptr [ebp + 8] */
L_1008C1EB:
    edx = MEM32(ebp + (-0x8)); /* 0x1008C1EB: mov edx, dword ptr [ebp - 8] */
    goto L_1008C25E; /* 0x1008C1EE: jmp 0x1008c25e */
L_1008C1F0:
    ecx = MEM32(ebp + 0x8); /* 0x1008C1F0: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008C1F3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008C1F5: inc edi */
    _flag_k = FK_INC;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008C1F6: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008C1F8: inc edx */
    _flag_k = FK_INC;
    goto L_1008C25E; /* 0x1008C1F9: jmp 0x1008c25e */
L_1008C1FB:
    eax = ebp + (-0x20); /* 0x1008C1FB: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1008C1FE: push eax */
    eax = (uint32_t)LO8(ecx); /* 0x1008C1FF: movzx eax, cl */
    PUSH32(esp, eax); /* 0x1008C202: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C203: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C208: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C209: pop ecx */
    /* test eax, eax */ /* 0x1008C20A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C215; /* 0x1008C20C: je 0x1008c215 */
L_1008C20E:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008C20E: mov byte ptr [esi], bl */
    goto L_1008C2A7; /* 0x1008C210: jmp 0x1008c2a7 */
L_1008C215:
    ecx = esi; /* 0x1008C215: mov ecx, esi */
    /* cmp MEM8(ecx), LO8(ebx) */ /* 0x1008C217: cmp byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C25C; /* 0x1008C219: je 0x1008c25c */
L_1008C21B:
    eax = MEM32(ebp + 0x14); /* 0x1008C21B: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x1008C21E: mov ecx, dword ptr [ebp + 0x10] */
L_1008C221:
    /* test eax, eax */ /* 0x1008C221: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C255; /* 0x1008C223: je 0x1008c255 */
L_1008C225:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008C225: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C255; /* 0x1008C226: je 0x1008c255 */
L_1008C228:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x1008C228: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C232; /* 0x1008C22B: je 0x1008c232 */
L_1008C22D:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1008C22D: mov dword ptr [ebp - 4], ebx */
    goto L_1008C24A; /* 0x1008C230: jmp 0x1008c24a */
L_1008C232:
    eax = ebp + (-0x20); /* 0x1008C232: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1008C235: push eax */
    eax = (uint32_t)MEM8(esi); /* 0x1008C236: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1008C239: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C23A: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C23F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C240: pop ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1008C241: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008C244: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x1008C247: mov eax, dword ptr [ebp + 0x14] */
L_1008C24A:
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1008C24A: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008C24C: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1008C24D: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x14) = eax; /* 0x1008C24E: mov dword ptr [ebp + 0x14], eax */
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1008C251: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C221; /* 0x1008C253: jne 0x1008c221 */
L_1008C255:
    ecx = MEM32(ebp + 0x8); /* 0x1008C255: mov ecx, dword ptr [ebp + 8] */
    edx = ebx; /* 0x1008C258: mov edx, ebx */
    goto L_1008C261; /* 0x1008C25A: jmp 0x1008c261 */
L_1008C25C:
    edx = ebx; /* 0x1008C25C: mov edx, ebx */
L_1008C25E:
    eax = MEM32(ebp + 0x14); /* 0x1008C25E: mov eax, dword ptr [ebp + 0x14] */
L_1008C261:
    /* test eax, eax */ /* 0x1008C261: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C28C; /* 0x1008C263: jne 0x1008c28c */
L_1008C265:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x1008C265: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C288; /* 0x1008C268: je 0x1008c288 */
L_1008C26A:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1008C26A: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C28C; /* 0x1008C26C: je 0x1008c28c */
L_1008C26E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008C26E: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C288; /* 0x1008C26F: je 0x1008c288 */
L_1008C271:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008C271: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008C273: inc edx */
    _flag_k = FK_INC;
    /* cmp MEM8(esi + 0x1), LO8(ebx) */ /* 0x1008C274: cmp byte ptr [esi + 1], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C27E; /* 0x1008C277: jne 0x1008c27e */
L_1008C279:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008C279: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008C27B: inc edi */
    _flag_k = FK_INC;
    goto L_1008C288; /* 0x1008C27C: jmp 0x1008c288 */
L_1008C27E:
    MEM8(esi) = (uint8_t)(0x20u); /* 0x1008C27E: mov byte ptr [esi], 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008C281: inc esi */
    _flag_k = FK_INC;
    goto L_1008C288; /* 0x1008C282: jmp 0x1008c288 */
L_1008C284:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008C284: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C28C; /* 0x1008C285: je 0x1008c28c */
L_1008C287:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008C287: inc esi */
    _flag_k = FK_INC;
L_1008C288:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1008C288: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C284; /* 0x1008C28A: jne 0x1008c284 */
L_1008C28C:
    /* test edi, edi */ /* 0x1008C28C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C2A3; /* 0x1008C28E: jne 0x1008c2a3 */
L_1008C290:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1008C290: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_1001177D); /* 0x1008C292: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008C297: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1008C299: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C29A: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008C29C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008C2B1; /* 0x1008C2A1: jmp 0x1008c2b1 */
L_1008C2A3:
    /* test edx, edx */ /* 0x1008C2A3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C2B1; /* 0x1008C2A5: je 0x1008c2b1 */
L_1008C2A7:
    RECOMP_CALL(sub_1001177D); /* 0x1008C2A7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1008C2AC: push 0x2a */
    ebx = POP32_VAL(esp); /* 0x1008C2AE: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C2AF: mov dword ptr [eax], ebx */
L_1008C2B1:
    /* cmp MEM8(ebp + (-0x14)), 0 */ /* 0x1008C2B1: cmp byte ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C2CF; /* 0x1008C2B5: je 0x1008c2cf */
L_1008C2B7:
    ecx = MEM32(ebp + (-0x18)); /* 0x1008C2B7: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008C2BA: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008C2CF; /* 0x1008C2BE: jmp 0x1008c2cf */
L_1008C2C0:
    RECOMP_CALL(sub_1001177D); /* 0x1008C2C0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008C2C5: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1008C2C7: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C2C8: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008C2CA: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1008C2CF:
    eax = ebx; /* 0x1008C2CF: mov eax, ebx */
L_1008C2D1:
    edi = POP32_VAL(esp); /* 0x1008C2D1: pop edi */
    esi = POP32_VAL(esp); /* 0x1008C2D2: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008C2D3: pop ebx */
    esp = ebp; /* 0x1008C2D4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008C2D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008C2D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008C2D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008C2D8u);

L_1008C2D8:
    PUSH32(esp, ebp); /* 0x1008C2D8: push ebp */
    ebp = esp; /* 0x1008C2D9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1008C2DB: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x1008C2DE: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1008C2E1: push ebx */
    PUSH32(esp, esi); /* 0x1008C2E2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008C2E3: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008C2E6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1008C2E8: mov dword ptr [ebp - 8], ebx */
    PUSH32(esp, edi); /* 0x1008C2EB: push edi */
    /* test eax, eax */ /* 0x1008C2EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C2FB; /* 0x1008C2EE: jne 0x1008c2fb */
L_1008C2F0:
    /* test esi, esi */ /* 0x1008C2F0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C2FF; /* 0x1008C2F2: jne 0x1008c2ff */
L_1008C2F4:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1008C2F4: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C322; /* 0x1008C2F7: je 0x1008c322 */
L_1008C2F9:
    goto L_1008C311; /* 0x1008C2F9: jmp 0x1008c311 */
L_1008C2FB:
    /* test esi, esi */ /* 0x1008C2FB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C311; /* 0x1008C2FD: je 0x1008c311 */
L_1008C2FF:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1008C2FF: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008C311; /* 0x1008C302: jbe 0x1008c311 */
L_1008C304:
    edi = MEM32(ebp + 0x10); /* 0x1008C304: mov edi, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1008C307: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C329; /* 0x1008C309: je 0x1008c329 */
L_1008C30B:
    /* test edi, edi */ /* 0x1008C30B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C329; /* 0x1008C30D: jne 0x1008c329 */
L_1008C30F:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008C30F: mov byte ptr [esi], bl */
L_1008C311:
    RECOMP_CALL(sub_1001177D); /* 0x1008C311: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008C316: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1008C318: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C319: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008C31B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1008C320:
    eax = ebx; /* 0x1008C320: mov eax, ebx */
L_1008C322:
    edi = POP32_VAL(esp); /* 0x1008C322: pop edi */
    esi = POP32_VAL(esp); /* 0x1008C323: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008C324: pop ebx */
    esp = ebp; /* 0x1008C325: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008C327: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008C328: ret  */
L_1008C329:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1008C329: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x20); /* 0x1008C32C: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1000F764); /* 0x1008C32F: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x1008C334: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x1008C337: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C353; /* 0x1008C33A: jne 0x1008c353 */
L_1008C33C:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008C33C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1008C33F: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008C340: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1008C343: push esi */
    RECOMP_CALL(sub_1002FFBB); /* 0x1008C344: call 0x1002ffbb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008C349: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1008C34C: mov ebx, eax */
    goto L_1008C4F0; /* 0x1008C34E: jmp 0x1008c4f0 */
L_1008C353:
    eax = MEM32(ebp + 0xC); /* 0x1008C353: mov eax, dword ptr [ebp + 0xc] */
    edi = esi; /* 0x1008C356: mov edi, esi */
    ecx = eax; /* 0x1008C358: mov ecx, eax */
L_1008C35A:
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x1008C35A: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C362; /* 0x1008C35C: je 0x1008c362 */
L_1008C35E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008C35E: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008C35F: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1008C35A; /* 0x1008C360: jne 0x1008c35a */
L_1008C362:
    MEM32(ebp + (-0x4)) = ecx; /* 0x1008C362: mov dword ptr [ebp - 4], ecx */
    /* test ecx, ecx */ /* 0x1008C365: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C377; /* 0x1008C367: jne 0x1008c377 */
L_1008C369:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008C369: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_1001177D); /* 0x1008C36B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008C370: push 0x16 */
    goto L_1008C4D6; /* 0x1008C372: jmp 0x1008c4d6 */
L_1008C377:
    /* cmp ecx, eax */ /* 0x1008C377: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008C3C8; /* 0x1008C379: jae 0x1008c3c8 */
L_1008C37B:
    eax = edi + (-0x1); /* 0x1008C37B: lea eax, [edi - 1] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1008C37E: mov dword ptr [ebp - 0x10], eax */
    edx = eax; /* 0x1008C381: mov edx, eax */
    MEM32(ebp + (-0xC)) = edx; /* 0x1008C383: mov dword ptr [ebp - 0xc], edx */
    /* cmp eax, esi */ /* 0x1008C386: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008C3B2; /* 0x1008C388: jb 0x1008c3b2 */
L_1008C38A:
    ebx = eax; /* 0x1008C38A: mov ebx, eax */
L_1008C38C:
    eax = ebp + (-0x20); /* 0x1008C38C: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1008C38F: push eax */
    eax = (uint32_t)MEM8(ebx); /* 0x1008C390: movzx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x1008C393: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C394: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C399: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C39A: pop ecx */
    /* test eax, eax */ /* 0x1008C39B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C3A4; /* 0x1008C39D: je 0x1008c3a4 */
L_1008C39F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1008C39F: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x1008C3A0: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008C38C; /* 0x1008C3A2: jae 0x1008c38c */
L_1008C3A4:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008C3A4: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x10)); /* 0x1008C3A7: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1008C3AA: mov dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008C3AD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0xC)); /* 0x1008C3AF: mov edx, dword ptr [ebp - 0xc] */
L_1008C3B2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1008C3B2: sub eax, edx */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1008C3B4: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C3C8; /* 0x1008C3B6: je 0x1008c3c8 */
L_1008C3B8:
    edi = MEM32(ebp + (-0x10)); /* 0x1008C3B8: mov edi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008C3BB: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1008C3BC: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = 1; /* 0x1008C3BF: mov dword ptr [ebp - 8], 1 */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1008C3C6: mov byte ptr [edi], bl */
L_1008C3C8:
    eax = MEM32(ebp + 0x14); /* 0x1008C3C8: mov eax, dword ptr [ebp + 0x14] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1008C3CB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C3EB; /* 0x1008C3CE: jne 0x1008c3eb */
L_1008C3D0:
    edx = MEM32(ebp + 0x10); /* 0x1008C3D0: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x1008C3D3: sub edi, edx */
    _flag_k = FK_CMP;
L_1008C3D5:
    SET_LO8(eax, MEM8(edx)); /* 0x1008C3D5: mov al, byte ptr [edx] */
    MEM8(edi + edx) = (uint8_t)(LO8(eax)); /* 0x1008C3D7: mov byte ptr [edi + edx], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008C3DA: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008C3DB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C467; /* 0x1008C3DD: je 0x1008c467 */
L_1008C3E3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008C3E3: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1008C3E4: mov dword ptr [ebp - 4], ecx */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C467; /* 0x1008C3E7: je 0x1008c467 */
L_1008C3E9:
    RECOMP_BACKEDGE();
    goto L_1008C3D5; /* 0x1008C3E9: jmp 0x1008c3d5 */
L_1008C3EB:
    /* test eax, eax */ /* 0x1008C3EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C465; /* 0x1008C3ED: je 0x1008c465 */
L_1008C3EF:
    edx = MEM32(ebp + 0x10); /* 0x1008C3EF: mov edx, dword ptr [ebp + 0x10] */
L_1008C3F2:
    eax = ebp + (-0x20); /* 0x1008C3F2: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1008C3F5: push eax */
    eax = (uint32_t)MEM8(edx); /* 0x1008C3F6: movzx eax, byte ptr [edx] */
    PUSH32(esp, eax); /* 0x1008C3F9: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C3FA: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C3FF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C400: pop ecx */
    /* test eax, eax */ /* 0x1008C401: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C430; /* 0x1008C403: je 0x1008c430 */
L_1008C405:
    eax = MEM32(ebp + 0x10); /* 0x1008C405: mov eax, dword ptr [ebp + 0x10] */
    edx = eax + 0x1; /* 0x1008C408: lea edx, [eax + 1] */
    /* cmp MEM8(edx), 0 */ /* 0x1008C40B: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C455; /* 0x1008C40E: je 0x1008c455 */
L_1008C410:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008C410: mov ecx, dword ptr [ebp - 4] */
    /* cmp ecx, 2 */ /* 0x1008C413: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008C450; /* 0x1008C416: jbe 0x1008c450 */
L_1008C418:
    SET_LO8(eax, MEM8(eax)); /* 0x1008C418: mov al, byte ptr [eax] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1008C41A: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(edx)); /* 0x1008C41C: mov al, byte ptr [edx] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1008C41E: mov byte ptr [edi + 1], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1008C421: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008C424: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x1008C425: sub ecx, 2 */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edx; /* 0x1008C428: mov dword ptr [ebp + 0x10], edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1008C42B: mov dword ptr [ebp - 4], ecx */
    goto L_1008C445; /* 0x1008C42E: jmp 0x1008c445 */
L_1008C430:
    edx = MEM32(ebp + 0x10); /* 0x1008C430: mov edx, dword ptr [ebp + 0x10] */
    SET_LO8(eax, MEM8(edx)); /* 0x1008C433: mov al, byte ptr [edx] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1008C435: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008C437: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008C438: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = edx; /* 0x1008C439: mov dword ptr [ebp + 0x10], edx */
    /* test LO8(eax), LO8(eax) */ /* 0x1008C43C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C45E; /* 0x1008C43E: je 0x1008c45e */
L_1008C440:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1008C440: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C45E; /* 0x1008C443: je 0x1008c45e */
L_1008C445:
    eax = MEM32(ebp + 0x14); /* 0x1008C445: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1008C448: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x14) = eax; /* 0x1008C449: mov dword ptr [ebp + 0x14], eax */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C461; /* 0x1008C44C: je 0x1008c461 */
L_1008C44E:
    RECOMP_BACKEDGE();
    goto L_1008C3F2; /* 0x1008C44E: jmp 0x1008c3f2 */
L_1008C450:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1008C450: mov dword ptr [ebp - 4], ebx */
    goto L_1008C45E; /* 0x1008C453: jmp 0x1008c45e */
L_1008C455:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1008C455: mov byte ptr [edi], bl */
    MEM32(ebp + (-0x8)) = 1; /* 0x1008C457: mov dword ptr [ebp - 8], 1 */
L_1008C45E:
    eax = MEM32(ebp + 0x14); /* 0x1008C45E: mov eax, dword ptr [ebp + 0x14] */
L_1008C461:
    /* test eax, eax */ /* 0x1008C461: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C467; /* 0x1008C463: jne 0x1008c467 */
L_1008C465:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1008C465: mov byte ptr [edi], bl */
L_1008C467:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1008C467: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C4E0; /* 0x1008C46B: jne 0x1008c4e0 */
L_1008C46D:
    /* cmp MEM32(ebp + 0x14), 0xFFFFFFFFu */ /* 0x1008C46D: cmp dword ptr [ebp + 0x14], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C4CD; /* 0x1008C471: jne 0x1008c4cd */
L_1008C473:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1008C473: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C484; /* 0x1008C477: je 0x1008c484 */
L_1008C479:
    RECOMP_CALL(sub_1001177D); /* 0x1008C479: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1008C47E: mov dword ptr [eax], 0x2a */
L_1008C484:
    edx = MEM32(ebp + 0xC); /* 0x1008C484: mov edx, dword ptr [ebp + 0xc] */
    /* cmp edx, 1 */ /* 0x1008C487: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008C4C4; /* 0x1008C48A: jbe 0x1008c4c4 */
L_1008C48C:
    ecx = edx + (-0x2); /* 0x1008C48C: lea ecx, [edx - 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1008C48F: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = ecx; /* 0x1008C491: mov dword ptr [ebp + 0x14], ecx */
    edi = ecx; /* 0x1008C494: mov edi, ecx */
    /* cmp ecx, esi */ /* 0x1008C496: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008C4B8; /* 0x1008C498: jb 0x1008c4b8 */
L_1008C49A:
    eax = ebp + (-0x20); /* 0x1008C49A: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1008C49D: push eax */
    eax = (uint32_t)MEM8(edi); /* 0x1008C49E: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x1008C4A1: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C4A2: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C4A7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C4A8: pop ecx */
    /* test eax, eax */ /* 0x1008C4A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C4B2; /* 0x1008C4AB: je 0x1008c4b2 */
L_1008C4AD:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008C4AD: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x1008C4AE: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008C49A; /* 0x1008C4B0: jae 0x1008c49a */
L_1008C4B2:
    ecx = MEM32(ebp + 0x14); /* 0x1008C4B2: mov ecx, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0xC); /* 0x1008C4B5: mov edx, dword ptr [ebp + 0xc] */
L_1008C4B8:
    eax = ecx; /* 0x1008C4B8: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1008C4BA: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1008C4BC: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C4C4; /* 0x1008C4BE: je 0x1008c4c4 */
L_1008C4C0:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1008C4C0: mov byte ptr [ecx], bl */
    goto L_1008C4C8; /* 0x1008C4C2: jmp 0x1008c4c8 */
L_1008C4C4:
    MEM8(esi + edx + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1008C4C4: mov byte ptr [esi + edx - 1], bl */
L_1008C4C8:
    PUSH32(esp, 0x50u); /* 0x1008C4C8: push 0x50 */
    ebx = POP32_VAL(esp); /* 0x1008C4CA: pop ebx */
    goto L_1008C4F0; /* 0x1008C4CB: jmp 0x1008c4f0 */
L_1008C4CD:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008C4CD: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_1001177D); /* 0x1008C4CF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1008C4D4: push 0x22 */
L_1008C4D6:
    ebx = POP32_VAL(esp); /* 0x1008C4D6: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C4D7: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008C4D9: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008C4F0; /* 0x1008C4DE: jmp 0x1008c4f0 */
L_1008C4E0:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1008C4E0: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C4F0; /* 0x1008C4E4: je 0x1008c4f0 */
L_1008C4E6:
    RECOMP_CALL(sub_1001177D); /* 0x1008C4E6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1008C4EB: push 0x2a */
    ebx = POP32_VAL(esp); /* 0x1008C4ED: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C4EE: mov dword ptr [eax], ebx */
L_1008C4F0:
    /* cmp MEM8(ebp + (-0x14)), 0 */ /* 0x1008C4F0: cmp byte ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C320; /* 0x1008C4F4: je 0x1008c320 */
L_1008C4FA:
    ecx = MEM32(ebp + (-0x18)); /* 0x1008C4FA: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008C4FD: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1008C320; /* 0x1008C501: jmp 0x1008c320 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008C506(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008C506u);

L_1008C506:
    PUSH32(esp, ebp); /* 0x1008C506: push ebp */
    ebp = esp; /* 0x1008C507: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x1008C509: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1008C50C: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1008C50F: push ebx */
    PUSH32(esp, esi); /* 0x1008C510: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008C511: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008C514: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1008C516: push edi */
    /* test eax, eax */ /* 0x1008C517: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C528; /* 0x1008C519: jne 0x1008c528 */
L_1008C51B:
    /* test esi, esi */ /* 0x1008C51B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C52C; /* 0x1008C51D: jne 0x1008c52c */
L_1008C51F:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1008C51F: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C542; /* 0x1008C522: jne 0x1008c542 */
L_1008C524:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008C524: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008C553; /* 0x1008C526: jmp 0x1008c553 */
L_1008C528:
    /* test esi, esi */ /* 0x1008C528: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C542; /* 0x1008C52A: je 0x1008c542 */
L_1008C52C:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1008C52C: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008C542; /* 0x1008C52F: jbe 0x1008c542 */
L_1008C531:
    /* test eax, eax */ /* 0x1008C531: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C539; /* 0x1008C533: jne 0x1008c539 */
L_1008C535:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008C535: mov byte ptr [esi], bl */
    RECOMP_BACKEDGE();
    goto L_1008C524; /* 0x1008C537: jmp 0x1008c524 */
L_1008C539:
    edi = MEM32(ebp + 0x10); /* 0x1008C539: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1008C53C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C55A; /* 0x1008C53E: jne 0x1008c55a */
L_1008C540:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008C540: mov byte ptr [esi], bl */
L_1008C542:
    RECOMP_CALL(sub_1001177D); /* 0x1008C542: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008C547: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1008C549: pop esi */
    MEM32(eax) = esi; /* 0x1008C54A: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1008C54C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1008C551: mov eax, esi */
L_1008C553:
    edi = POP32_VAL(esp); /* 0x1008C553: pop edi */
    esi = POP32_VAL(esp); /* 0x1008C554: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008C555: pop ebx */
    esp = ebp; /* 0x1008C556: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008C558: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008C559: ret  */
L_1008C55A:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1008C55A: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x1C); /* 0x1008C55D: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1000F764); /* 0x1008C560: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1008C565: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + 0x14); /* 0x1008C568: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x1008C56B: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C585; /* 0x1008C56E: jne 0x1008c585 */
L_1008C570:
    PUSH32(esp, ecx); /* 0x1008C570: push ecx */
    PUSH32(esp, edi); /* 0x1008C571: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008C572: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1008C575: push esi */
    RECOMP_CALL(sub_10012A18); /* 0x1008C576: call 0x10012a18 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008C57B: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1008C57E: mov ebx, eax */
    goto L_1008C6CE; /* 0x1008C580: jmp 0x1008c6ce */
L_1008C585:
    edx = MEM32(ebp + 0xC); /* 0x1008C585: mov edx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1008C588: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x8)) = edx; /* 0x1008C58B: mov dword ptr [ebp - 8], edx */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1008C58E: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C61E; /* 0x1008C591: jne 0x1008c61e */
L_1008C597:
    eax = esi; /* 0x1008C597: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1008C599: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = eax; /* 0x1008C59B: mov dword ptr [ebp + 0x14], eax */
L_1008C59E:
    esi = MEM32(ebp + 0x14); /* 0x1008C59E: mov esi, dword ptr [ebp + 0x14] */
    SET_LO8(eax, MEM8(edi)); /* 0x1008C5A1: mov al, byte ptr [edi] */
    MEM8(esi + edi) = (uint8_t)(LO8(eax)); /* 0x1008C5A3: mov byte ptr [esi + edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008C5A6: inc edi */
    _flag_k = FK_INC;
    esi = MEM32(ebp + 0x8); /* 0x1008C5A7: mov esi, dword ptr [ebp + 8] */
    /* test LO8(eax), LO8(eax) */ /* 0x1008C5AA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C5B1; /* 0x1008C5AC: je 0x1008c5b1 */
L_1008C5AE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1008C5AE: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1008C59E; /* 0x1008C5AF: jne 0x1008c59e */
L_1008C5B1:
    edi = ebx; /* 0x1008C5B1: mov edi, ebx */
L_1008C5B3:
    /* test edx, edx */ /* 0x1008C5B3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C6C0; /* 0x1008C5B5: jne 0x1008c6c0 */
L_1008C5BB:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1008C5BB: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C6AD; /* 0x1008C5BE: jne 0x1008c6ad */
L_1008C5C4:
    /* test edi, edi */ /* 0x1008C5C4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C5D3; /* 0x1008C5C6: je 0x1008c5d3 */
L_1008C5C8:
    RECOMP_CALL(sub_1001177D); /* 0x1008C5C8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1008C5CD: mov dword ptr [eax], 0x2a */
L_1008C5D3:
    edx = MEM32(ebp + 0xC); /* 0x1008C5D3: mov edx, dword ptr [ebp + 0xc] */
    /* cmp edx, 1 */ /* 0x1008C5D6: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008C6A4; /* 0x1008C5D9: jbe 0x1008c6a4 */
L_1008C5DF:
    ecx = edx + (-0x2); /* 0x1008C5DF: lea ecx, [edx - 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1008C5E2: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = ecx; /* 0x1008C5E4: mov dword ptr [ebp + 0x14], ecx */
    edi = ecx; /* 0x1008C5E7: mov edi, ecx */
    /* cmp ecx, esi */ /* 0x1008C5E9: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008C60B; /* 0x1008C5EB: jb 0x1008c60b */
L_1008C5ED:
    eax = ebp + (-0x1C); /* 0x1008C5ED: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1008C5F0: push eax */
    eax = (uint32_t)MEM8(edi); /* 0x1008C5F1: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x1008C5F4: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C5F5: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C5FA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C5FB: pop ecx */
    /* test eax, eax */ /* 0x1008C5FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C605; /* 0x1008C5FE: je 0x1008c605 */
L_1008C600:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008C600: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x1008C601: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008C5ED; /* 0x1008C603: jae 0x1008c5ed */
L_1008C605:
    ecx = MEM32(ebp + 0x14); /* 0x1008C605: mov ecx, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0xC); /* 0x1008C608: mov edx, dword ptr [ebp + 0xc] */
L_1008C60B:
    eax = ecx; /* 0x1008C60B: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1008C60D: sub eax, edi */
    _flag_k = FK_CMP;
    /* test LO8(eax), 1 */ /* 0x1008C60F: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C6A4; /* 0x1008C611: je 0x1008c6a4 */
L_1008C617:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1008C617: mov byte ptr [ecx], bl */
    goto L_1008C6A8; /* 0x1008C619: jmp 0x1008c6a8 */
L_1008C61E:
    eax = ebp + (-0x1C); /* 0x1008C61E: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1008C621: push eax */
    eax = (uint32_t)MEM8(edi); /* 0x1008C622: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x1008C625: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C626: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C62B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C62C: pop ecx */
    /* test eax, eax */ /* 0x1008C62D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C661; /* 0x1008C62F: je 0x1008c661 */
L_1008C631:
    edx = MEM32(ebp + (-0x8)); /* 0x1008C631: mov edx, dword ptr [ebp - 8] */
    eax = edi + 0x1; /* 0x1008C634: lea eax, [edi + 1] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1008C637: mov dword ptr [ebp - 0xc], eax */
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1008C63A: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C699; /* 0x1008C63C: je 0x1008c699 */
L_1008C63E:
    /* cmp edx, 2 */ /* 0x1008C63E: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008C695; /* 0x1008C641: jbe 0x1008c695 */
L_1008C643:
    SET_LO8(eax, MEM8(edi)); /* 0x1008C643: mov al, byte ptr [edi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1008C645: mov ecx, dword ptr [ebp - 4] */
    edi = MEM32(ebp + (-0xC)); /* 0x1008C648: mov edi, dword ptr [ebp - 0xc] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1008C64B: mov byte ptr [ecx], al */
    SET_LO8(eax, MEM8(edi)); /* 0x1008C64D: mov al, byte ptr [edi] */
    MEM8(ecx + 0x1) = (uint8_t)(LO8(eax)); /* 0x1008C64F: mov byte ptr [ecx + 1], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1008C652: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008C655: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1008C656: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 2; /* 0x1008C659: sub edx, 2 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edx; /* 0x1008C65C: mov dword ptr [ebp - 8], edx */
    goto L_1008C676; /* 0x1008C65F: jmp 0x1008c676 */
L_1008C661:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008C661: mov ecx, dword ptr [ebp - 4] */
    SET_LO8(eax, MEM8(edi)); /* 0x1008C664: mov al, byte ptr [edi] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1008C666: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008C668: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008C669: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1008C66A: mov dword ptr [ebp - 4], ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1008C66D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C67B; /* 0x1008C66F: je 0x1008c67b */
L_1008C671:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x1008C671: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C67B; /* 0x1008C674: je 0x1008c67b */
L_1008C676:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x1008C676: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1008C61E; /* 0x1008C679: jne 0x1008c61e */
L_1008C67B:
    edx = MEM32(ebp + (-0x8)); /* 0x1008C67B: mov edx, dword ptr [ebp - 8] */
L_1008C67E:
    eax = MEM32(ebp + (-0x4)); /* 0x1008C67E: mov eax, dword ptr [ebp - 4] */
    edi = ebx; /* 0x1008C681: mov edi, ebx */
L_1008C683:
    ecx = MEM32(ebp + 0x14); /* 0x1008C683: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x1008C686: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C5B3; /* 0x1008C688: jne 0x1008c5b3 */
L_1008C68E:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1008C68E: mov byte ptr [eax], bl */
    RECOMP_BACKEDGE();
    goto L_1008C5B3; /* 0x1008C690: jmp 0x1008c5b3 */
L_1008C695:
    edx = ebx; /* 0x1008C695: mov edx, ebx */
    RECOMP_BACKEDGE();
    goto L_1008C67E; /* 0x1008C697: jmp 0x1008c67e */
L_1008C699:
    eax = MEM32(ebp + (-0x4)); /* 0x1008C699: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1008C69C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1008C69E: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008C6A0: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008C6A1: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1008C683; /* 0x1008C6A2: jmp 0x1008c683 */
L_1008C6A4:
    MEM8(esi + edx + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1008C6A4: mov byte ptr [esi + edx - 1], bl */
L_1008C6A8:
    PUSH32(esp, 0x50u); /* 0x1008C6A8: push 0x50 */
    ebx = POP32_VAL(esp); /* 0x1008C6AA: pop ebx */
    goto L_1008C6CE; /* 0x1008C6AB: jmp 0x1008c6ce */
L_1008C6AD:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008C6AD: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_1001177D); /* 0x1008C6AF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1008C6B4: push 0x22 */
    ebx = POP32_VAL(esp); /* 0x1008C6B6: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C6B7: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008C6B9: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008C6CE; /* 0x1008C6BE: jmp 0x1008c6ce */
L_1008C6C0:
    /* test edi, edi */ /* 0x1008C6C0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C6CE; /* 0x1008C6C2: je 0x1008c6ce */
L_1008C6C4:
    RECOMP_CALL(sub_1001177D); /* 0x1008C6C4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1008C6C9: push 0x2a */
    ebx = POP32_VAL(esp); /* 0x1008C6CB: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C6CC: mov dword ptr [eax], ebx */
L_1008C6CE:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x1008C6CE: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C6DB; /* 0x1008C6D2: je 0x1008c6db */
L_1008C6D4:
    ecx = MEM32(ebp + (-0x14)); /* 0x1008C6D4: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008C6D7: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008C6DB:
    eax = ebx; /* 0x1008C6DB: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_1008C553; /* 0x1008C6DD: jmp 0x1008c553 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008C6E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008C6E2u);

L_1008C6E2:
    PUSH32(esp, ebp); /* 0x1008C6E2: push ebp */
    ebp = esp; /* 0x1008C6E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1008C6E5: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1008C6E8: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008C6E9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1008C6EB: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008C6EC: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1008C6EF: push edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1008C6F0: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1008C6F3: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C70C; /* 0x1008C6F6: jne 0x1008c70c */
L_1008C6F8:
    /* test esi, esi */ /* 0x1008C6F8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C714; /* 0x1008C6FA: jne 0x1008c714 */
L_1008C6FC:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1008C6FC: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C8CD; /* 0x1008C6FF: jne 0x1008c8cd */
L_1008C705:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008C705: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008C8DE; /* 0x1008C707: jmp 0x1008c8de */
L_1008C70C:
    /* test esi, esi */ /* 0x1008C70C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C8CD; /* 0x1008C70E: je 0x1008c8cd */
L_1008C714:
    edi = MEM32(ebp + 0xC); /* 0x1008C714: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1008C717: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C8CD; /* 0x1008C719: je 0x1008c8cd */
L_1008C71F:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1008C71F: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x1C); /* 0x1008C722: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1000F764); /* 0x1008C725: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1008C72A: mov eax, dword ptr [ebp - 0x18] */
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x1008C72D: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C749; /* 0x1008C730: jne 0x1008c749 */
L_1008C732:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008C732: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008C735: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1008C738: push edi */
    PUSH32(esp, esi); /* 0x1008C739: push esi */
    RECOMP_CALL(sub_1008672B); /* 0x1008C73A: call 0x1008672b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008C73F: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1008C742: mov ebx, eax */
    goto L_1008C8BE; /* 0x1008C744: jmp 0x1008c8be */
L_1008C749:
    ecx = MEM32(ebp + 0x10); /* 0x1008C749: mov ecx, dword ptr [ebp + 0x10] */
    eax = ecx; /* 0x1008C74C: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008C74E: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008C74E: shr eax, 8 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1008C751: mov dword ptr [ebp - 8], eax */
    /* test LO8(eax), LO8(eax) */ /* 0x1008C754: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C80A; /* 0x1008C756: je 0x1008c80a */
L_1008C75C:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1008C75C: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C81D; /* 0x1008C75E: je 0x1008c81d */
L_1008C764:
    ecx = ebp + (-0x1C); /* 0x1008C764: lea ecx, [ebp - 0x1c] */
    eax = (uint32_t)LO8(eax); /* 0x1008C767: movzx eax, al */
    PUSH32(esp, ecx); /* 0x1008C76A: push ecx */
    PUSH32(esp, eax); /* 0x1008C76B: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C76C: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C771: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C772: pop ecx */
    /* test eax, eax */ /* 0x1008C773: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C81D; /* 0x1008C775: je 0x1008c81d */
L_1008C77B:
    eax = MEM32(ebp + 0x8); /* 0x1008C77B: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1008C77E: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C86B; /* 0x1008C780: je 0x1008c86b */
L_1008C786:
    eax = MEM32(ebp + 0x14); /* 0x1008C786: mov eax, dword ptr [ebp + 0x14] */
L_1008C789:
    /* test eax, eax */ /* 0x1008C789: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C868; /* 0x1008C78B: je 0x1008c868 */
L_1008C791:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008C791: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C868; /* 0x1008C792: je 0x1008c868 */
L_1008C798:
    ecx = esi + 0x1; /* 0x1008C798: lea ecx, [esi + 1] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1008C79B: mov dword ptr [ebp - 0xc], ecx */
    /* cmp MEM8(ecx), LO8(ebx) */ /* 0x1008C79E: cmp byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C7FF; /* 0x1008C7A0: je 0x1008c7ff */
L_1008C7A2:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x1008C7A2: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C7AB; /* 0x1008C7A5: je 0x1008c7ab */
L_1008C7A7:
    ecx = ebx; /* 0x1008C7A7: mov ecx, ebx */
    goto L_1008C7BF; /* 0x1008C7A9: jmp 0x1008c7bf */
L_1008C7AB:
    eax = ebp + (-0x1C); /* 0x1008C7AB: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1008C7AE: push eax */
    eax = (uint32_t)MEM8(esi); /* 0x1008C7AF: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1008C7B2: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C7B3: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C7B8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C7B9: pop ecx */
    ecx = eax; /* 0x1008C7BA: mov ecx, eax */
    eax = MEM32(ebp + 0x14); /* 0x1008C7BC: mov eax, dword ptr [ebp + 0x14] */
L_1008C7BF:
    edx = MEM32(ebp + (-0x8)); /* 0x1008C7BF: mov edx, dword ptr [ebp - 8] */
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x1008C7C2: mov byte ptr [esi], dl */
    esi = MEM32(ebp + (-0xC)); /* 0x1008C7C4: mov esi, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1008C7C7: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008C7CA: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C868; /* 0x1008C7CB: je 0x1008c868 */
L_1008C7D1:
    /* test ecx, ecx */ /* 0x1008C7D1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C7DA; /* 0x1008C7D3: je 0x1008c7da */
L_1008C7D5:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1008C7D5: mov dword ptr [ebp - 4], ebx */
    goto L_1008C7EF; /* 0x1008C7D8: jmp 0x1008c7ef */
L_1008C7DA:
    eax = ebp + (-0x1C); /* 0x1008C7DA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1008C7DD: push eax */
    eax = (uint32_t)MEM8(esi); /* 0x1008C7DE: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1008C7E1: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C7E2: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C7E7: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008C7E8: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x1008C7EB: mov eax, dword ptr [ebp + 0x14] */
    ecx = POP32_VAL(esp); /* 0x1008C7EE: pop ecx */
L_1008C7EF:
    ecx = MEM32(ebp + 0x10); /* 0x1008C7EF: mov ecx, dword ptr [ebp + 0x10] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1008C7F2: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008C7F4: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1008C7F5: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x14) = eax; /* 0x1008C7F6: mov dword ptr [ebp + 0x14], eax */
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1008C7F9: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C868; /* 0x1008C7FB: je 0x1008c868 */
L_1008C7FD:
    RECOMP_BACKEDGE();
    goto L_1008C789; /* 0x1008C7FD: jmp 0x1008c789 */
L_1008C7FF:
    eax = MEM32(ebp + 0x8); /* 0x1008C7FF: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008C802: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008C804: inc edi */
    _flag_k = FK_INC;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008C805: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008C807: inc edx */
    _flag_k = FK_INC;
    goto L_1008C86D; /* 0x1008C808: jmp 0x1008c86d */
L_1008C80A:
    eax = ebp + (-0x1C); /* 0x1008C80A: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1008C80D: push eax */
    eax = (uint32_t)LO8(ecx); /* 0x1008C80E: movzx eax, cl */
    PUSH32(esp, eax); /* 0x1008C811: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C812: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C817: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C818: pop ecx */
    /* test eax, eax */ /* 0x1008C819: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C827; /* 0x1008C81B: je 0x1008c827 */
L_1008C81D:
    eax = MEM32(ebp + 0x8); /* 0x1008C81D: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1008C820: mov byte ptr [eax], bl */
    goto L_1008C8B4; /* 0x1008C822: jmp 0x1008c8b4 */
L_1008C827:
    eax = MEM32(ebp + 0x8); /* 0x1008C827: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1008C82A: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C86B; /* 0x1008C82C: je 0x1008c86b */
L_1008C82E:
    eax = MEM32(ebp + 0x14); /* 0x1008C82E: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x1008C831: mov ecx, dword ptr [ebp + 0x10] */
L_1008C834:
    /* test eax, eax */ /* 0x1008C834: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C868; /* 0x1008C836: je 0x1008c868 */
L_1008C838:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008C838: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C868; /* 0x1008C839: je 0x1008c868 */
L_1008C83B:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x1008C83B: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C845; /* 0x1008C83E: je 0x1008c845 */
L_1008C840:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1008C840: mov dword ptr [ebp - 4], ebx */
    goto L_1008C85D; /* 0x1008C843: jmp 0x1008c85d */
L_1008C845:
    eax = ebp + (-0x1C); /* 0x1008C845: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1008C848: push eax */
    eax = (uint32_t)MEM8(esi); /* 0x1008C849: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1008C84C: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C84D: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C852: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C853: pop ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1008C854: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008C857: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x1008C85A: mov eax, dword ptr [ebp + 0x14] */
L_1008C85D:
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1008C85D: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008C85F: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1008C860: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x14) = eax; /* 0x1008C861: mov dword ptr [ebp + 0x14], eax */
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1008C864: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C834; /* 0x1008C866: jne 0x1008c834 */
L_1008C868:
    eax = MEM32(ebp + 0x8); /* 0x1008C868: mov eax, dword ptr [ebp + 8] */
L_1008C86B:
    edx = ebx; /* 0x1008C86B: mov edx, ebx */
L_1008C86D:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1008C86D: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C899; /* 0x1008C870: jne 0x1008c899 */
L_1008C872:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x1008C872: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C895; /* 0x1008C875: je 0x1008c895 */
L_1008C877:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1008C877: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C899; /* 0x1008C879: je 0x1008c899 */
L_1008C87B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008C87B: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C895; /* 0x1008C87C: je 0x1008c895 */
L_1008C87E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008C87E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008C880: inc edx */
    _flag_k = FK_INC;
    /* cmp MEM8(esi + 0x1), LO8(ebx) */ /* 0x1008C881: cmp byte ptr [esi + 1], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C88B; /* 0x1008C884: jne 0x1008c88b */
L_1008C886:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008C886: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008C888: inc edi */
    _flag_k = FK_INC;
    goto L_1008C895; /* 0x1008C889: jmp 0x1008c895 */
L_1008C88B:
    MEM8(esi) = (uint8_t)(0x20u); /* 0x1008C88B: mov byte ptr [esi], 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008C88E: inc esi */
    _flag_k = FK_INC;
    goto L_1008C895; /* 0x1008C88F: jmp 0x1008c895 */
L_1008C891:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008C891: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C899; /* 0x1008C892: je 0x1008c899 */
L_1008C894:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008C894: inc esi */
    _flag_k = FK_INC;
L_1008C895:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1008C895: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C891; /* 0x1008C897: jne 0x1008c891 */
L_1008C899:
    /* test edi, edi */ /* 0x1008C899: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C8B0; /* 0x1008C89B: jne 0x1008c8b0 */
L_1008C89D:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1008C89D: mov byte ptr [eax], bl */
    RECOMP_CALL(sub_1001177D); /* 0x1008C89F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008C8A4: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1008C8A6: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C8A7: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008C8A9: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008C8BE; /* 0x1008C8AE: jmp 0x1008c8be */
L_1008C8B0:
    /* test edx, edx */ /* 0x1008C8B0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C8BE; /* 0x1008C8B2: je 0x1008c8be */
L_1008C8B4:
    RECOMP_CALL(sub_1001177D); /* 0x1008C8B4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1008C8B9: push 0x2a */
    ebx = POP32_VAL(esp); /* 0x1008C8BB: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C8BC: mov dword ptr [eax], ebx */
L_1008C8BE:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x1008C8BE: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C8DC; /* 0x1008C8C2: je 0x1008c8dc */
L_1008C8C4:
    ecx = MEM32(ebp + (-0x14)); /* 0x1008C8C4: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008C8C7: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008C8DC; /* 0x1008C8CB: jmp 0x1008c8dc */
L_1008C8CD:
    RECOMP_CALL(sub_1001177D); /* 0x1008C8CD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008C8D2: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1008C8D4: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C8D5: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008C8D7: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1008C8DC:
    eax = ebx; /* 0x1008C8DC: mov eax, ebx */
L_1008C8DE:
    edi = POP32_VAL(esp); /* 0x1008C8DE: pop edi */
    esi = POP32_VAL(esp); /* 0x1008C8DF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008C8E0: pop ebx */
    esp = ebp; /* 0x1008C8E1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008C8E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008C8E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008C8E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008C8E5u);

L_1008C8E5:
    PUSH32(esp, ebp); /* 0x1008C8E5: push ebp */
    ebp = esp; /* 0x1008C8E6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008C8E8: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1008C8EB: push ebx */
    PUSH32(esp, esi); /* 0x1008C8EC: push esi */
    PUSH32(esp, edi); /* 0x1008C8ED: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1008C8EE: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008C8F1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1008C8F3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C9EA; /* 0x1008C8F5: je 0x1008c9ea */
L_1008C8FB:
    esi = MEM32(ebp + 0xC); /* 0x1008C8FB: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1008C8FE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C9EA; /* 0x1008C900: je 0x1008c9ea */
L_1008C906:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008C906: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x14); /* 0x1008C909: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x1008C90C: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1008C911: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x1008C914: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C92D; /* 0x1008C917: jne 0x1008c92d */
L_1008C919:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008C919: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1008C91C: push esi */
    PUSH32(esp, edi); /* 0x1008C91D: push edi */
    RECOMP_CALL(sub_100866E4); /* 0x1008C91E: call 0x100866e4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008C923: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1008C926: mov ebx, eax */
    goto L_1008C9DB; /* 0x1008C928: jmp 0x1008c9db */
L_1008C92D:
    eax = MEM32(ebp + 0x10); /* 0x1008C92D: mov eax, dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x1008C930: mov ecx, eax */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x1008C932: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x1008C932: shr ecx, 8 */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1008C935: mov dword ptr [ebp - 4], ecx */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1008C938: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C988; /* 0x1008C93A: je 0x1008c988 */
L_1008C93C:
    /* test LO8(eax), LO8(eax) */ /* 0x1008C93C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C99B; /* 0x1008C93E: je 0x1008c99b */
L_1008C940:
    eax = ebp + (-0x14); /* 0x1008C940: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008C943: push eax */
    eax = (uint32_t)LO8(ecx); /* 0x1008C944: movzx eax, cl */
    PUSH32(esp, eax); /* 0x1008C947: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C948: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C94D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C94E: pop ecx */
    /* test eax, eax */ /* 0x1008C94F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C99B; /* 0x1008C951: je 0x1008c99b */
L_1008C953:
    eax = edi; /* 0x1008C953: mov eax, edi */
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1008C955: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C9B4; /* 0x1008C957: je 0x1008c9b4 */
L_1008C959:
    ecx = MEM32(ebp + 0x10); /* 0x1008C959: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + (-0x4)); /* 0x1008C95C: mov edx, dword ptr [ebp - 4] */
L_1008C95F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1008C95F: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C9B4; /* 0x1008C960: je 0x1008c9b4 */
L_1008C962:
    eax = edi + 0x1; /* 0x1008C962: lea eax, [edi + 1] */
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1008C965: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x4)) = eax; /* 0x1008C967: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1008C96A: mov eax, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C980; /* 0x1008C96D: je 0x1008c980 */
L_1008C96F:
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x1008C96F: mov byte ptr [edi], dl */
    edi = MEM32(ebp + (-0x4)); /* 0x1008C971: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1008C974: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C9BA; /* 0x1008C975: je 0x1008c9ba */
L_1008C977:
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x1008C977: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008C979: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x1008C97A: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C9B4; /* 0x1008C97C: je 0x1008c9b4 */
L_1008C97E:
    RECOMP_BACKEDGE();
    goto L_1008C95F; /* 0x1008C97E: jmp 0x1008c95f */
L_1008C980:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1008C980: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1008C982: mov byte ptr [edi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008C984: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008C985: inc ecx */
    _flag_k = FK_INC;
    goto L_1008C9B6; /* 0x1008C986: jmp 0x1008c9b6 */
L_1008C988:
    ecx = ebp + (-0x14); /* 0x1008C988: lea ecx, [ebp - 0x14] */
    eax = (uint32_t)LO8(eax); /* 0x1008C98B: movzx eax, al */
    PUSH32(esp, ecx); /* 0x1008C98E: push ecx */
    PUSH32(esp, eax); /* 0x1008C98F: push eax */
    RECOMP_CALL(sub_1008ADF1); /* 0x1008C990: call 0x1008adf1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008C995: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008C996: pop ecx */
    /* test eax, eax */ /* 0x1008C997: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C9A1; /* 0x1008C999: je 0x1008c9a1 */
L_1008C99B:
    eax = edi; /* 0x1008C99B: mov eax, edi */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1008C99D: mov byte ptr [eax], bl */
    goto L_1008C9D1; /* 0x1008C99F: jmp 0x1008c9d1 */
L_1008C9A1:
    eax = edi; /* 0x1008C9A1: mov eax, edi */
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1008C9A3: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C9B4; /* 0x1008C9A5: je 0x1008c9b4 */
L_1008C9A7:
    ecx = MEM32(ebp + 0x10); /* 0x1008C9A7: mov ecx, dword ptr [ebp + 0x10] */
L_1008C9AA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1008C9AA: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008C9B4; /* 0x1008C9AB: je 0x1008c9b4 */
L_1008C9AD:
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x1008C9AD: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008C9AF: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x1008C9B0: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008C9AA; /* 0x1008C9B2: jne 0x1008c9aa */
L_1008C9B4:
    ecx = ebx; /* 0x1008C9B4: mov ecx, ebx */
L_1008C9B6:
    /* test esi, esi */ /* 0x1008C9B6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008C9CD; /* 0x1008C9B8: jne 0x1008c9cd */
L_1008C9BA:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1008C9BA: mov byte ptr [eax], bl */
    RECOMP_CALL(sub_1001177D); /* 0x1008C9BC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008C9C1: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1008C9C3: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C9C4: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008C9C6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008C9DB; /* 0x1008C9CB: jmp 0x1008c9db */
L_1008C9CD:
    /* test ecx, ecx */ /* 0x1008C9CD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008C9DB; /* 0x1008C9CF: je 0x1008c9db */
L_1008C9D1:
    RECOMP_CALL(sub_1001177D); /* 0x1008C9D1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1008C9D6: push 0x2a */
    ebx = POP32_VAL(esp); /* 0x1008C9D8: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C9D9: mov dword ptr [eax], ebx */
L_1008C9DB:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008C9DB: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008C9F9; /* 0x1008C9DF: je 0x1008c9f9 */
L_1008C9E1:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008C9E1: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008C9E4: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008C9F9; /* 0x1008C9E8: jmp 0x1008c9f9 */
L_1008C9EA:
    RECOMP_CALL(sub_1001177D); /* 0x1008C9EA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008C9EF: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1008C9F1: pop ebx */
    MEM32(eax) = ebx; /* 0x1008C9F2: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1008C9F4: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1008C9F9:
    edi = POP32_VAL(esp); /* 0x1008C9F9: pop edi */
    esi = POP32_VAL(esp); /* 0x1008C9FA: pop esi */
    eax = ebx; /* 0x1008C9FB: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1008C9FD: pop ebx */
    esp = ebp; /* 0x1008C9FE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008CA00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CA01: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CA02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CA02u);

L_1008CA02:
    PUSH32(esp, ebp); /* 0x1008CA02: push ebp */
    ebp = esp; /* 0x1008CA03: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008CA05: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008CA07: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008CA13); /* 0x1008CA0A: call 0x1008ca13 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008CA0F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008CA10: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008CA11: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CA12: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CA13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CA13u);

L_1008CA13:
    PUSH32(esp, ebp); /* 0x1008CA13: push ebp */
    ebp = esp; /* 0x1008CA14: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008CA16: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008CA19: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1008CA1C: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008CA1F: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1008CA24: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(ecx + 0x4), 0x3A4u */ /* 0x1008CA27: cmp dword ptr [ecx + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008CA59; /* 0x1008CA2E: jne 0x1008ca59 */
L_1008CA30:
    edx = MEM32(ebp + 0x8); /* 0x1008CA30: mov edx, dword ptr [ebp + 8] */
    eax = edx; /* 0x1008CA33: mov eax, edx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008CA35: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008CA35: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1008CA38: movzx eax, al */
    /* test MEM8(eax + ecx + 0x19), 4 */ /* 0x1008CA3B: test byte ptr [eax + ecx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CA59; /* 0x1008CA40: je 0x1008ca59 */
L_1008CA42:
    eax = (uint32_t)LO8(edx); /* 0x1008CA42: movzx eax, dl */
    /* test MEM8(eax + ecx + 0x19), 8 */ /* 0x1008CA45: test byte ptr [eax + ecx + 0x19], 8 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CA59; /* 0x1008CA4A: je 0x1008ca59 */
L_1008CA4C:
    /* cmp edx, 0x889Fu */ /* 0x1008CA4C: cmp edx, 0x889f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x889Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008CA59; /* 0x1008CA52: jae 0x1008ca59 */
L_1008CA54:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008CA54: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008CA56: inc eax */
    _flag_k = FK_INC;
    goto L_1008CA5B; /* 0x1008CA57: jmp 0x1008ca5b */
L_1008CA59:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008CA59: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008CA5B:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008CA5B: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CA68; /* 0x1008CA5F: je 0x1008ca68 */
L_1008CA61:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008CA61: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008CA64: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008CA68:
    esp = ebp; /* 0x1008CA68: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008CA6A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CA6B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CA6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CA6Cu);

L_1008CA6C:
    PUSH32(esp, ebp); /* 0x1008CA6C: push ebp */
    ebp = esp; /* 0x1008CA6D: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008CA6F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008CA71: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008CA7D); /* 0x1008CA74: call 0x1008ca7d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008CA79: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008CA7A: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008CA7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CA7C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CA7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CA7Du);

L_1008CA7D:
    PUSH32(esp, ebp); /* 0x1008CA7D: push ebp */
    ebp = esp; /* 0x1008CA7E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008CA80: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008CA83: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1008CA86: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008CA89: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1008CA8E: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(ecx + 0x4), 0x3A4u */ /* 0x1008CA91: cmp dword ptr [ecx + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008CAC8; /* 0x1008CA98: jne 0x1008cac8 */
L_1008CA9A:
    edx = MEM32(ebp + 0x8); /* 0x1008CA9A: mov edx, dword ptr [ebp + 8] */
    eax = edx; /* 0x1008CA9D: mov eax, edx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008CA9F: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008CA9F: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1008CAA2: movzx eax, al */
    /* test MEM8(eax + ecx + 0x19), 4 */ /* 0x1008CAA5: test byte ptr [eax + ecx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CAC8; /* 0x1008CAAA: je 0x1008cac8 */
L_1008CAAC:
    eax = (uint32_t)LO8(edx); /* 0x1008CAAC: movzx eax, dl */
    /* test MEM8(eax + ecx + 0x19), 8 */ /* 0x1008CAAF: test byte ptr [eax + ecx + 0x19], 8 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CAC8; /* 0x1008CAB4: je 0x1008cac8 */
L_1008CAB6:
    eax = edx + (-0x889F); /* 0x1008CAB6: lea eax, [edx - 0x889f] */
    /* cmp eax, 0xFD3u */ /* 0x1008CABC: cmp eax, 0xfd3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFD3u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1008CAC8; /* 0x1008CAC1: ja 0x1008cac8 */
L_1008CAC3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008CAC3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008CAC5: inc eax */
    _flag_k = FK_INC;
    goto L_1008CACA; /* 0x1008CAC6: jmp 0x1008caca */
L_1008CAC8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008CAC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008CACA:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008CACA: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CAD7; /* 0x1008CACE: je 0x1008cad7 */
L_1008CAD0:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008CAD0: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008CAD3: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008CAD7:
    esp = ebp; /* 0x1008CAD7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008CAD9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CADA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CADB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CADBu);

L_1008CADB:
    PUSH32(esp, ebp); /* 0x1008CADB: push ebp */
    ebp = esp; /* 0x1008CADC: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008CADE: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008CAE0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008CAEC); /* 0x1008CAE3: call 0x1008caec */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008CAE8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008CAE9: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008CAEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CAEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CAEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CAECu);

L_1008CAEC:
    PUSH32(esp, ebp); /* 0x1008CAEC: push ebp */
    ebp = esp; /* 0x1008CAED: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008CAEF: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008CAF2: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1008CAF5: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008CAF8: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1008CAFD: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(ecx + 0x4), 0x3A4u */ /* 0x1008CB00: cmp dword ptr [ecx + 4], 0x3a4 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0x3A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008CB37; /* 0x1008CB07: jne 0x1008cb37 */
L_1008CB09:
    edx = MEM32(ebp + 0x8); /* 0x1008CB09: mov edx, dword ptr [ebp + 8] */
    eax = edx; /* 0x1008CB0C: mov eax, edx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1008CB0E: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x1008CB0E: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1008CB11: movzx eax, al */
    /* test MEM8(eax + ecx + 0x19), 4 */ /* 0x1008CB14: test byte ptr [eax + ecx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CB37; /* 0x1008CB19: je 0x1008cb37 */
L_1008CB1B:
    eax = (uint32_t)LO8(edx); /* 0x1008CB1B: movzx eax, dl */
    /* test MEM8(eax + ecx + 0x19), 8 */ /* 0x1008CB1E: test byte ptr [eax + ecx + 0x19], 8 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CB37; /* 0x1008CB23: je 0x1008cb37 */
L_1008CB25:
    eax = edx + (-0x989F); /* 0x1008CB25: lea eax, [edx - 0x989f] */
    /* cmp eax, 0x5205u */ /* 0x1008CB2B: cmp eax, 0x5205 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5205u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1008CB37; /* 0x1008CB30: ja 0x1008cb37 */
L_1008CB32:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008CB32: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008CB34: inc eax */
    _flag_k = FK_INC;
    goto L_1008CB39; /* 0x1008CB35: jmp 0x1008cb39 */
L_1008CB37:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008CB37: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008CB39:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008CB39: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CB46; /* 0x1008CB3D: je 0x1008cb46 */
L_1008CB3F:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008CB3F: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008CB42: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008CB46:
    esp = ebp; /* 0x1008CB46: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008CB48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CB49: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CB4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CB4Au);

L_1008CB4A:
    PUSH32(esp, ebp); /* 0x1008CB4A: push ebp */
    ebp = esp; /* 0x1008CB4B: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008CB4D: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008CB4F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008CB52: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008CB5F); /* 0x1008CB55: call 0x1008cb5f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008CB5A: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008CB5D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CB5E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CB5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CB5Fu);

L_1008CB5F:
    PUSH32(esp, ebp); /* 0x1008CB5F: push ebp */
    ebp = esp; /* 0x1008CB60: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008CB62: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1008CB65: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x1008CB68: push ebx */
    PUSH32(esp, esi); /* 0x1008CB69: push esi */
    PUSH32(esp, edi); /* 0x1008CB6A: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008CB6B: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008CB6E: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1008CB73: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1008CB76: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008CB8F; /* 0x1008CB78: jne 0x1008cb8f */
L_1008CB7A:
    RECOMP_CALL(sub_1001177D); /* 0x1008CB7A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008CB7F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008CB85: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1008CB8A: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008CBD9; /* 0x1008CB8D: jmp 0x1008cbd9 */
L_1008CB8F:
    eax = MEM32(ebp + (-0xC)); /* 0x1008CB8F: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008CB92: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), esi */ /* 0x1008CB94: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CBD9; /* 0x1008CB97: je 0x1008cbd9 */
L_1008CB99:
    ebx = MEM32(ebp + 0xC); /* 0x1008CB99: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1008CB9C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esi; /* 0x1008CB9F: mov edx, esi */
L_1008CBA1:
    /* test ebx, ebx */ /* 0x1008CBA1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008CBA9; /* 0x1008CBA3: jne 0x1008cba9 */
L_1008CBA5:
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x1008CBA5: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CBD9; /* 0x1008CBA7: je 0x1008cbd9 */
L_1008CBA9:
    SET_LO8(eax, MEM8(edi)); /* 0x1008CBA9: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1008CBAB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CBC9; /* 0x1008CBAD: je 0x1008cbc9 */
L_1008CBAF:
    ecx = ebp + (-0x10); /* 0x1008CBAF: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1008CBB2: push ecx */
    PUSH32(esp, edx); /* 0x1008CBB3: push edx */
    PUSH32(esp, eax); /* 0x1008CBB4: push eax */
    RECOMP_CALL(sub_1008B86E); /* 0x1008CBB5: call 0x1008b86e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008CBBA: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = eax; /* 0x1008CBBD: mov edx, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008CBBF: inc edi */
    _flag_k = FK_INC;
    eax = ebx; /* 0x1008CBC0: mov eax, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1008CBC2: dec ebx */
    _flag_k = FK_DEC;
    /* test eax, eax */ /* 0x1008CBC3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CBDB; /* 0x1008CBC5: je 0x1008cbdb */
L_1008CBC7:
    RECOMP_BACKEDGE();
    goto L_1008CBA1; /* 0x1008CBC7: jmp 0x1008cba1 */
L_1008CBC9:
    RECOMP_CALL(sub_1001177D); /* 0x1008CBC9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008CBCE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008CBD4: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1008CBD9:
    edx = esi; /* 0x1008CBD9: mov edx, esi */
L_1008CBDB:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008CBDB: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x1008CBDF: pop edi */
    esi = POP32_VAL(esp); /* 0x1008CBE0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008CBE1: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CBEB; /* 0x1008CBE2: je 0x1008cbeb */
L_1008CBE4:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008CBE4: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008CBE7: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008CBEB:
    eax = edx; /* 0x1008CBEB: mov eax, edx */
    esp = ebp; /* 0x1008CBED: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008CBEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CBF0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CBF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CBF1u);

L_1008CBF1:
    PUSH32(esp, ebp); /* 0x1008CBF1: push ebp */
    ebp = esp; /* 0x1008CBF2: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008CBF4: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008CBF6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008CBF9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008CBFC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008BA07); /* 0x1008CBFF: call 0x1008ba07 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008CC04: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008CC07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CC08: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CC09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CC09u);

L_1008CC09:
    PUSH32(esp, ebp); /* 0x1008CC09: push ebp */
    ebp = esp; /* 0x1008CC0A: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008CC0C: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008CC0E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008CC11: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008CC1E); /* 0x1008CC14: call 0x1008cc1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008CC19: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008CC1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CC1D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CC1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CC1Eu);

L_1008CC1E:
    PUSH32(esp, ebp); /* 0x1008CC1E: push ebp */
    ebp = esp; /* 0x1008CC1F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008CC21: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1008CC24: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x1008CC27: push ebx */
    PUSH32(esp, esi); /* 0x1008CC28: push esi */
    PUSH32(esp, edi); /* 0x1008CC29: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008CC2A: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008CC2D: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1008CC32: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1008CC35: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CC40; /* 0x1008CC37: je 0x1008cc40 */
L_1008CC39:
    edi = MEM32(ebp + 0xC); /* 0x1008CC39: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1008CC3C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008CC57; /* 0x1008CC3E: jne 0x1008cc57 */
L_1008CC40:
    RECOMP_CALL(sub_1001177D); /* 0x1008CC40: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008CC45: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008CC4B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    edx = 0x7FFFFFFFu; /* 0x1008CC50: mov edx, 0x7fffffff */
    goto L_1008CCD1; /* 0x1008CC55: jmp 0x1008ccd1 */
L_1008CC57:
    ebx = MEM32(ebp + (-0xC)); /* 0x1008CC57: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008CC5A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x8), edx */ /* 0x1008CC5C: cmp dword ptr [ebx + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008CC6E; /* 0x1008CC5F: jne 0x1008cc6e */
L_1008CC61:
    PUSH32(esp, edi); /* 0x1008CC61: push edi */
    PUSH32(esp, esi); /* 0x1008CC62: push esi */
    RECOMP_CALL(sub_1001413E); /* 0x1008CC63: call 0x1001413e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008CC68: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008CC69: pop ecx */
    edx = eax; /* 0x1008CC6A: mov edx, eax */
    goto L_1008CCD1; /* 0x1008CC6C: jmp 0x1008ccd1 */
L_1008CC6E:
    ecx = (uint32_t)MEM8(esi); /* 0x1008CC6E: movzx ecx, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008CC71: inc esi */
    _flag_k = FK_INC;
    eax = ecx; /* 0x1008CC72: mov eax, ecx */
    /* test MEM8(eax + ebx + 0x19), 4 */ /* 0x1008CC74: test byte ptr [eax + ebx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CC92; /* 0x1008CC79: je 0x1008cc92 */
L_1008CC7B:
    SET_LO8(eax, MEM8(esi)); /* 0x1008CC7B: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1008CC7D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008CC85; /* 0x1008CC7F: jne 0x1008cc85 */
L_1008CC81:
    ecx = edx; /* 0x1008CC81: mov ecx, edx */
    goto L_1008CC92; /* 0x1008CC83: jmp 0x1008cc92 */
L_1008CC85:
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x1008CC85: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x1008CC85: shl ecx, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1008CC88: movzx eax, al */
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x1008CC8B: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008CC8E: inc esi */
    _flag_k = FK_INC;
    ecx = (uint32_t)LO16(ecx); /* 0x1008CC8F: movzx ecx, cx */
L_1008CC92:
    ebx = (uint32_t)MEM8(edi); /* 0x1008CC92: movzx ebx, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008CC95: inc edi */
    _flag_k = FK_INC;
    edx = MEM32(ebp + (-0xC)); /* 0x1008CC96: mov edx, dword ptr [ebp - 0xc] */
    eax = ebx; /* 0x1008CC99: mov eax, ebx */
    PUSH32(esp, 0); /* 0x1008CC9B: push 0 */
    /* test MEM8(eax + edx + 0x19), 4 */ /* 0x1008CC9D: test byte ptr [eax + edx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = POP32_VAL(esp); /* 0x1008CCA2: pop edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CCBC; /* 0x1008CCA3: je 0x1008ccbc */
L_1008CCA5:
    SET_LO8(eax, MEM8(edi)); /* 0x1008CCA5: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1008CCA7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008CCAF; /* 0x1008CCA9: jne 0x1008ccaf */
L_1008CCAB:
    ebx = edx; /* 0x1008CCAB: mov ebx, edx */
    goto L_1008CCBC; /* 0x1008CCAD: jmp 0x1008ccbc */
L_1008CCAF:
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x1008CCAF: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x1008CCAF: shl ebx, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1008CCB2: movzx eax, al */
    _flag_a = (uint32_t)((LO16(ebx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ebx) | LO16(eax))) << 16;
    SET_LO16(ebx, LO16(ebx) | LO16(eax)); /* 0x1008CCB5: or bx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008CCB8: inc edi */
    _flag_k = FK_INC;
    ebx = (uint32_t)LO16(ebx); /* 0x1008CCB9: movzx ebx, bx */
L_1008CCBC:
    /* cmp LO16(ebx), LO16(ecx) */ /* 0x1008CCBC: cmp bx, cx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008CCCB; /* 0x1008CCBF: jne 0x1008cccb */
L_1008CCC1:
    ebx = MEM32(ebp + (-0xC)); /* 0x1008CCC1: mov ebx, dword ptr [ebp - 0xc] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1008CCC4: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CCD1; /* 0x1008CCC7: je 0x1008ccd1 */
L_1008CCC9:
    RECOMP_BACKEDGE();
    goto L_1008CC6E; /* 0x1008CCC9: jmp 0x1008cc6e */
L_1008CCCB:
    { uint32_t _sa = edx, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1008CCCB: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    edx = edx & 2; /* 0x1008CCCD: and edx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1008CCD0: dec edx */
    _flag_k = FK_DEC;
L_1008CCD1:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008CCD1: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x1008CCD5: pop edi */
    esi = POP32_VAL(esp); /* 0x1008CCD6: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008CCD7: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CCE1; /* 0x1008CCD8: je 0x1008cce1 */
L_1008CCDA:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008CCDA: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008CCDD: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008CCE1:
    eax = edx; /* 0x1008CCE1: mov eax, edx */
    esp = ebp; /* 0x1008CCE3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008CCE5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CCE6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CCE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CCE7u);

L_1008CCE7:
    PUSH32(esp, ebp); /* 0x1008CCE7: push ebp */
    ebp = esp; /* 0x1008CCE8: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008CCEA: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008CCEC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008CCEF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008CCF2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008BB8D); /* 0x1008CCF5: call 0x1008bb8d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008CCFA: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008CCFD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CCFE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CCFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CCFFu);

L_1008CCFF:
    PUSH32(esp, ebp); /* 0x1008CCFF: push ebp */
    ebp = esp; /* 0x1008CD00: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008CD02: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008CD04: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008CD07: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008CD14); /* 0x1008CD0A: call 0x1008cd14 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008CD0F: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008CD12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CD13: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CD14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CD14u);

L_1008CD14:
    PUSH32(esp, ebp); /* 0x1008CD14: push ebp */
    ebp = esp; /* 0x1008CD15: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008CD17: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1008CD1A: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008CD1D: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008CD20: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1008CD25: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1008CD28: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CD33; /* 0x1008CD2A: je 0x1008cd33 */
L_1008CD2C:
    eax = MEM32(ebp + 0xC); /* 0x1008CD2C: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1008CD2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008CD45; /* 0x1008CD31: jne 0x1008cd45 */
L_1008CD33:
    RECOMP_CALL(sub_1001177D); /* 0x1008CD33: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008CD38: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008CD3E: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008CD8C; /* 0x1008CD43: jmp 0x1008cd8c */
L_1008CD45:
    edx = MEM32(ebp + (-0xC)); /* 0x1008CD45: mov edx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(edx + 0x8), 0 */ /* 0x1008CD48: cmp dword ptr [edx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008CD5D; /* 0x1008CD4C: jne 0x1008cd5d */
L_1008CD4E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008CD4E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1008CD51: push eax */
    PUSH32(esp, ecx); /* 0x1008CD52: push ecx */
    RECOMP_CALL(sub_1009B635); /* 0x1008CD53: call 0x1009b635 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008CD58: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1008CD96; /* 0x1008CD5B: jmp 0x1008cd96 */
L_1008CD5D:
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x1008CD5D: push dword ptr [edx + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1008CD60: push -1 */
    PUSH32(esp, eax); /* 0x1008CD62: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1008CD63: push -1 */
    PUSH32(esp, ecx); /* 0x1008CD65: push ecx */
    PUSH32(esp, 0x1000u); /* 0x1008CD66: push 0x1000 */
    PUSH32(esp, MEM32(edx + 0x21C)); /* 0x1008CD6B: push dword ptr [edx + 0x21c] */
    eax = ebp + (-0x10); /* 0x1008CD71: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008CD74: push eax */
    RECOMP_CALL(sub_10017B92); /* 0x1008CD75: call 0x10017b92 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1008CD7A: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008CD7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008CD93; /* 0x1008CD7F: jne 0x1008cd93 */
L_1008CD81:
    RECOMP_CALL(sub_1001177D); /* 0x1008CD81: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008CD86: mov dword ptr [eax], 0x16 */
L_1008CD8C:
    eax = 0x7FFFFFFFu; /* 0x1008CD8C: mov eax, 0x7fffffff */
    goto L_1008CD96; /* 0x1008CD91: jmp 0x1008cd96 */
L_1008CD93:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1008CD93: add eax, -2 */
    _flag_k = FK_ADD;
L_1008CD96:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008CD96: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CDA3; /* 0x1008CD9A: je 0x1008cda3 */
L_1008CD9C:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008CD9C: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008CD9F: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008CDA3:
    esp = ebp; /* 0x1008CDA3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008CDA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CDA6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CDA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CDA7u);

L_1008CDA7:
    PUSH32(esp, ebp); /* 0x1008CDA7: push ebp */
    ebp = esp; /* 0x1008CDA8: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008CDAA: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008CDAC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008CDAF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008CDBC); /* 0x1008CDB2: call 0x1008cdbc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008CDB7: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008CDBA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CDBB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CDBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CDBCu);

L_1008CDBC:
    PUSH32(esp, ebp); /* 0x1008CDBC: push ebp */
    ebp = esp; /* 0x1008CDBD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008CDBF: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1008CDC2: push ebx */
    PUSH32(esp, esi); /* 0x1008CDC3: push esi */
    PUSH32(esp, edi); /* 0x1008CDC4: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008CDC5: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x14); /* 0x1008CDC8: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x1008CDCB: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x10)); /* 0x1008CDD0: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008CDD3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x8), esi */ /* 0x1008CDD5: cmp dword ptr [ebx + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008CDEE; /* 0x1008CDD8: jne 0x1008cdee */
L_1008CDDA:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008CDDA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008CDDD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10034761); /* 0x1008CDE0: call 0x10034761 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008CDE5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008CDE6: pop ecx */
    esi = eax; /* 0x1008CDE7: mov esi, eax */
    goto L_1008CE70; /* 0x1008CDE9: jmp 0x1008ce70 */
L_1008CDEE:
    edx = MEM32(ebp + 0x8); /* 0x1008CDEE: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1008CDF1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CDFC; /* 0x1008CDF3: je 0x1008cdfc */
L_1008CDF5:
    edi = MEM32(ebp + 0xC); /* 0x1008CDF5: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1008CDF8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008CE0E; /* 0x1008CDFA: jne 0x1008ce0e */
L_1008CDFC:
    RECOMP_CALL(sub_1001177D); /* 0x1008CDFC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008CE01: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008CE07: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008CE70; /* 0x1008CE0C: jmp 0x1008ce70 */
L_1008CE0E:
    /* cmp MEM8(edx), 0 */ /* 0x1008CE0E: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = edx; /* 0x1008CE11: mov esi, edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CE6E; /* 0x1008CE13: je 0x1008ce6e */
L_1008CE15:
    SET_LO8(eax, MEM8(edi)); /* 0x1008CE15: mov al, byte ptr [edi] */
L_1008CE17:
    ecx = edi; /* 0x1008CE17: mov ecx, edi */
    /* test LO8(eax), LO8(eax) */ /* 0x1008CE19: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CE4E; /* 0x1008CE1B: je 0x1008ce4e */
L_1008CE1D:
    edx = MEM32(ebp + (-0x10)); /* 0x1008CE1D: mov edx, dword ptr [ebp - 0x10] */
L_1008CE20:
    SET_LO8(ebx, MEM8(ecx)); /* 0x1008CE20: mov bl, byte ptr [ecx] */
    eax = (uint32_t)LO8(ebx); /* 0x1008CE22: movzx eax, bl */
    /* test MEM8(eax + edx + 0x19), 4 */ /* 0x1008CE25: test byte ptr [eax + edx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CE41; /* 0x1008CE2A: je 0x1008ce41 */
L_1008CE2C:
    /* cmp LO8(ebx), MEM8(esi) */ /* 0x1008CE2C: cmp bl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008CE38; /* 0x1008CE2E: jne 0x1008ce38 */
L_1008CE30:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x1008CE30: mov al, byte ptr [ecx + 1] */
    /* cmp LO8(eax), MEM8(esi + 0x1) */ /* 0x1008CE33: cmp al, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CE4B; /* 0x1008CE36: je 0x1008ce4b */
L_1008CE38:
    /* cmp MEM8(ecx + 0x1), 0 */ /* 0x1008CE38: cmp byte ptr [ecx + 1], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CE4B; /* 0x1008CE3C: je 0x1008ce4b */
L_1008CE3E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008CE3E: inc ecx */
    _flag_k = FK_INC;
    goto L_1008CE45; /* 0x1008CE3F: jmp 0x1008ce45 */
L_1008CE41:
    /* cmp LO8(ebx), MEM8(esi) */ /* 0x1008CE41: cmp bl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CE4B; /* 0x1008CE43: je 0x1008ce4b */
L_1008CE45:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008CE45: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), 0 */ /* 0x1008CE46: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008CE20; /* 0x1008CE49: jne 0x1008ce20 */
L_1008CE4B:
    ebx = MEM32(ebp + (-0x10)); /* 0x1008CE4B: mov ebx, dword ptr [ebp - 0x10] */
L_1008CE4E:
    /* cmp MEM8(ecx), 0 */ /* 0x1008CE4E: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008CE6B; /* 0x1008CE51: jne 0x1008ce6b */
L_1008CE53:
    eax = (uint32_t)MEM8(esi); /* 0x1008CE53: movzx eax, byte ptr [esi] */
    /* test MEM8(eax + ebx + 0x19), 4 */ /* 0x1008CE56: test byte ptr [eax + ebx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CE63; /* 0x1008CE5B: je 0x1008ce63 */
L_1008CE5D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008CE5D: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x1008CE5E: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CE6B; /* 0x1008CE61: je 0x1008ce6b */
L_1008CE63:
    SET_LO8(eax, MEM8(edi)); /* 0x1008CE63: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008CE65: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x1008CE66: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008CE17; /* 0x1008CE69: jne 0x1008ce17 */
L_1008CE6B:
    edx = MEM32(ebp + 0x8); /* 0x1008CE6B: mov edx, dword ptr [ebp + 8] */
L_1008CE6E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1008CE6E: sub esi, edx */
    _flag_k = FK_CMP;
L_1008CE70:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008CE70: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CE7D; /* 0x1008CE74: je 0x1008ce7d */
L_1008CE76:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008CE76: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008CE79: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008CE7D:
    edi = POP32_VAL(esp); /* 0x1008CE7D: pop edi */
    eax = esi; /* 0x1008CE7E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008CE80: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008CE81: pop ebx */
    esp = ebp; /* 0x1008CE82: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008CE84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CE85: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CE86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CE86u);

L_1008CE86:
    PUSH32(esp, ebp); /* 0x1008CE86: push ebp */
    ebp = esp; /* 0x1008CE87: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008CE89: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008CE8B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008CE8E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008CE9B); /* 0x1008CE91: call 0x1008ce9b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008CE96: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008CE99: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CE9A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CE9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CE9Bu);

L_1008CE9B:
    PUSH32(esp, ebp); /* 0x1008CE9B: push ebp */
    ebp = esp; /* 0x1008CE9C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008CE9E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1008CEA1: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008CEBB; /* 0x1008CEA5: jne 0x1008cebb */
L_1008CEA7:
    RECOMP_CALL(sub_1001177D); /* 0x1008CEA7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008CEAC: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008CEB2: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008CEB7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008CF1F; /* 0x1008CEB9: jmp 0x1008cf1f */
L_1008CEBB:
    PUSH32(esp, esi); /* 0x1008CEBB: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1008CEBC: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1008CEBF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008CED5; /* 0x1008CEC1: jne 0x1008ced5 */
L_1008CEC3:
    RECOMP_CALL(sub_1001177D); /* 0x1008CEC3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008CEC8: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008CECE: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008CEDA; /* 0x1008CED3: jmp 0x1008ceda */
L_1008CED5:
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x1008CED5: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008CEDE; /* 0x1008CED8: jb 0x1008cede */
L_1008CEDA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008CEDA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008CF1E; /* 0x1008CEDC: jmp 0x1008cf1e */
L_1008CEDE:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008CEDE: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x1008CEE1: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008CEE4: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xC)); /* 0x1008CEE9: mov edx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(edx + 0x8), 0 */ /* 0x1008CEEC: cmp dword ptr [edx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CF0E; /* 0x1008CEF0: je 0x1008cf0e */
L_1008CEF2:
    ecx = esi + (-0x1); /* 0x1008CEF2: lea ecx, [esi - 1] */
L_1008CEF5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008CEF5: dec ecx */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x1008CEF6: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1008CF05; /* 0x1008CEF9: ja 0x1008cf05 */
L_1008CEFB:
    eax = (uint32_t)MEM8(ecx); /* 0x1008CEFB: movzx eax, byte ptr [ecx] */
    /* test MEM8(eax + edx + 0x19), 4 */ /* 0x1008CEFE: test byte ptr [eax + edx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008CEF5; /* 0x1008CF03: jne 0x1008cef5 */
L_1008CF05:
    eax = esi; /* 0x1008CF05: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1008CF07: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1008CF09: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1008CF0C: sub esi, eax */
    _flag_k = FK_CMP;
L_1008CF0E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1008CF0E: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008CF0F: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008CF1C; /* 0x1008CF13: je 0x1008cf1c */
L_1008CF15:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008CF15: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008CF18: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008CF1C:
    eax = esi; /* 0x1008CF1C: mov eax, esi */
L_1008CF1E:
    esi = POP32_VAL(esp); /* 0x1008CF1E: pop esi */
L_1008CF1F:
    esp = ebp; /* 0x1008CF1F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008CF21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CF22: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CF23(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CF23u);

L_1008CF23:
    PUSH32(esp, ebp); /* 0x1008CF23: push ebp */
    ebp = esp; /* 0x1008CF24: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008CF26: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008CF28: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008CF2B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008CF38); /* 0x1008CF2E: call 0x1008cf38 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008CF33: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008CF36: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008CF37: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008CF38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008CF38u);

L_1008CF38:
    PUSH32(esp, ebp); /* 0x1008CF38: push ebp */
    ebp = esp; /* 0x1008CF39: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008CF3B: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1008CF3E: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x1008CF41: push ebx */
    PUSH32(esp, esi); /* 0x1008CF42: push esi */
    PUSH32(esp, edi); /* 0x1008CF43: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008CF44: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008CF47: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1008CF4C: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1008CF4F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CF5A; /* 0x1008CF51: je 0x1008cf5a */
L_1008CF53:
    edx = MEM32(ebp + 0xC); /* 0x1008CF53: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1008CF56: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008CF6F; /* 0x1008CF58: jne 0x1008cf6f */
L_1008CF5A:
    RECOMP_CALL(sub_1001177D); /* 0x1008CF5A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008CF5F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008CF65: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008D0C1; /* 0x1008CF6A: jmp 0x1008d0c1 */
L_1008CF6F:
    ecx = MEM32(ebp + (-0x10)); /* 0x1008CF6F: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008CF72: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x8), esi */ /* 0x1008CF74: cmp dword ptr [ecx + 8], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008CF8E; /* 0x1008CF77: jne 0x1008cf8e */
L_1008CF79:
    eax = ebp + (-0x14); /* 0x1008CF79: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008CF7C: push eax */
    PUSH32(esp, edx); /* 0x1008CF7D: push edx */
    PUSH32(esp, edi); /* 0x1008CF7E: push edi */
    RECOMP_CALL(sub_1002A0D4); /* 0x1008CF7F: call 0x1002a0d4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008CF84: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1008CF87: mov esi, eax */
    goto L_1008D0CE; /* 0x1008CF89: jmp 0x1008d0ce */
L_1008CF8E:
    ebx = (uint32_t)MEM8(edi); /* 0x1008CF8E: movzx ebx, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008CF91: inc edi */
    _flag_k = FK_INC;
    /* test MEM8(ebx + ecx + 0x19), 4 */ /* 0x1008CF92: test byte ptr [ebx + ecx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(ebx + ecx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008CFFF; /* 0x1008CF97: je 0x1008cfff */
L_1008CF99:
    /* cmp MEM8(edi), 0 */ /* 0x1008CF99: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008CFA2; /* 0x1008CF9C: jne 0x1008cfa2 */
L_1008CF9E:
    ebx = esi; /* 0x1008CF9E: mov ebx, esi */
    goto L_1008D010; /* 0x1008CFA0: jmp 0x1008d010 */
L_1008CFA2:
    PUSH32(esp, 1); /* 0x1008CFA2: push 1 */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x1008CFA4: push dword ptr [ecx + 4] */
    eax = ebp + (-0x4); /* 0x1008CFA7: lea eax, [ebp - 4] */
    PUSH32(esp, 2); /* 0x1008CFAA: push 2 */
    PUSH32(esp, eax); /* 0x1008CFAC: push eax */
    PUSH32(esp, 2); /* 0x1008CFAD: push 2 */
    eax = edi + (-0x1); /* 0x1008CFAF: lea eax, [edi - 1] */
    PUSH32(esp, eax); /* 0x1008CFB2: push eax */
    PUSH32(esp, 0x200u); /* 0x1008CFB3: push 0x200 */
    PUSH32(esp, MEM32(ecx + 0x21C)); /* 0x1008CFB8: push dword ptr [ecx + 0x21c] */
    eax = ebp + (-0x14); /* 0x1008CFBE: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008CFC1: push eax */
    RECOMP_CALL(sub_10020EFE); /* 0x1008CFC2: call 0x10020efe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1008CFC7: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x1008CFCA: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008CFD5; /* 0x1008CFCD: jne 0x1008cfd5 */
L_1008CFCF:
    ebx = (uint32_t)MEM8(ebp + (-0x4)); /* 0x1008CFCF: movzx ebx, byte ptr [ebp - 4] */
    goto L_1008CFF6; /* 0x1008CFD3: jmp 0x1008cff6 */
L_1008CFD5:
    /* cmp eax, 2 */ /* 0x1008CFD5: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D0B6; /* 0x1008CFD8: jne 0x1008d0b6 */
L_1008CFDE:
    eax = MEM32(ebp + (-0x4)); /* 0x1008CFDE: mov eax, dword ptr [ebp - 4] */
    edx = 0x100u; /* 0x1008CFE1: mov edx, 0x100 */
    ecx = (uint32_t)LO8(eax); /* 0x1008CFE6: movzx ecx, al */
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) * (int32_t)LO16(edx))); /* 0x1008CFE9: imul cx, dx */
    eax = (uint32_t)HI8(eax); /* 0x1008CFED: movzx eax, ah */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(ecx, LO16(ecx) + LO16(eax)); /* 0x1008CFF0: add cx, ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    ebx = (uint32_t)LO16(ecx); /* 0x1008CFF3: movzx ebx, cx */
L_1008CFF6:
    ecx = MEM32(ebp + (-0x10)); /* 0x1008CFF6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008CFF9: inc edi */
    _flag_k = FK_INC;
    edx = MEM32(ebp + 0xC); /* 0x1008CFFA: mov edx, dword ptr [ebp + 0xc] */
    goto L_1008D010; /* 0x1008CFFD: jmp 0x1008d010 */
L_1008CFFF:
    eax = ebx; /* 0x1008CFFF: mov eax, ebx */
    /* test MEM8(eax + ecx + 0x19), 0x10u */ /* 0x1008D001: test byte ptr [eax + ecx + 0x19], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D010; /* 0x1008D006: je 0x1008d010 */
L_1008D008:
    ebx = (uint32_t)MEM8(eax + ecx + 0x119); /* 0x1008D008: movzx ebx, byte ptr [eax + ecx + 0x119] */
L_1008D010:
    eax = (uint32_t)MEM8(edx); /* 0x1008D010: movzx eax, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008D013: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x1008D014: mov dword ptr [ebp + 8], eax */
    eax = (uint32_t)LO8(eax); /* 0x1008D017: movzx eax, al */
    MEM32(ebp + 0xC) = edx; /* 0x1008D01A: mov dword ptr [ebp + 0xc], edx */
    /* test MEM8(eax + ecx + 0x19), 4 */ /* 0x1008D01D: test byte ptr [eax + ecx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D089; /* 0x1008D022: je 0x1008d089 */
L_1008D024:
    /* cmp MEM8(edx), 0 */ /* 0x1008D024: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D02D; /* 0x1008D027: jne 0x1008d02d */
L_1008D029:
    eax = esi; /* 0x1008D029: mov eax, esi */
    goto L_1008D0A7; /* 0x1008D02B: jmp 0x1008d0a7 */
L_1008D02D:
    PUSH32(esp, 1); /* 0x1008D02D: push 1 */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x1008D02F: push dword ptr [ecx + 4] */
    eax = ebp + (-0x4); /* 0x1008D032: lea eax, [ebp - 4] */
    PUSH32(esp, 2); /* 0x1008D035: push 2 */
    PUSH32(esp, eax); /* 0x1008D037: push eax */
    PUSH32(esp, 2); /* 0x1008D038: push 2 */
    eax = edx + (-0x1); /* 0x1008D03A: lea eax, [edx - 1] */
    PUSH32(esp, eax); /* 0x1008D03D: push eax */
    PUSH32(esp, 0x200u); /* 0x1008D03E: push 0x200 */
    PUSH32(esp, MEM32(ecx + 0x21C)); /* 0x1008D043: push dword ptr [ecx + 0x21c] */
    eax = ebp + (-0x14); /* 0x1008D049: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008D04C: push eax */
    RECOMP_CALL(sub_10020EFE); /* 0x1008D04D: call 0x10020efe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1008D052: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x1008D055: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D060; /* 0x1008D058: jne 0x1008d060 */
L_1008D05A:
    eax = (uint32_t)MEM8(ebp + (-0x4)); /* 0x1008D05A: movzx eax, byte ptr [ebp - 4] */
    goto L_1008D07D; /* 0x1008D05E: jmp 0x1008d07d */
L_1008D060:
    /* cmp eax, 2 */ /* 0x1008D060: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D0B6; /* 0x1008D063: jne 0x1008d0b6 */
L_1008D065:
    eax = MEM32(ebp + (-0x4)); /* 0x1008D065: mov eax, dword ptr [ebp - 4] */
    edx = 0x100u; /* 0x1008D068: mov edx, 0x100 */
    ecx = (uint32_t)LO8(eax); /* 0x1008D06D: movzx ecx, al */
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) * (int32_t)LO16(edx))); /* 0x1008D070: imul cx, dx */
    eax = (uint32_t)HI8(eax); /* 0x1008D074: movzx eax, ah */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(ecx, LO16(ecx) + LO16(eax)); /* 0x1008D077: add cx, ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    eax = (uint32_t)LO16(ecx); /* 0x1008D07A: movzx eax, cx */
L_1008D07D:
    edx = MEM32(ebp + 0xC); /* 0x1008D07D: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1008D080: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008D083: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = edx; /* 0x1008D084: mov dword ptr [ebp + 0xc], edx */
    goto L_1008D0A7; /* 0x1008D087: jmp 0x1008d0a7 */
L_1008D089:
    eax = MEM32(ebp + 0x8); /* 0x1008D089: mov eax, dword ptr [ebp + 8] */
    edx = (uint32_t)LO16(eax); /* 0x1008D08C: movzx edx, ax */
    MEM32(ebp + 0x8) = edx; /* 0x1008D08F: mov dword ptr [ebp + 8], edx */
    /* test MEM8(edx + ecx + 0x19), 0x10u */ /* 0x1008D092: test byte ptr [edx + ecx + 0x19], 0x10 */
    _flag_a = (uint32_t)(MEM8(edx + ecx + 0x19)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = MEM32(ebp + 0xC); /* 0x1008D097: mov edx, dword ptr [ebp + 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D0A7; /* 0x1008D09A: je 0x1008d0a7 */
L_1008D09C:
    eax = MEM32(ebp + 0x8); /* 0x1008D09C: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM8(eax + ecx + 0x119); /* 0x1008D09F: movzx eax, byte ptr [eax + ecx + 0x119] */
L_1008D0A7:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1008D0A7: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D0C8; /* 0x1008D0AA: jne 0x1008d0c8 */
L_1008D0AC:
    /* test LO16(ebx), LO16(ebx) */ /* 0x1008D0AC: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D0CE; /* 0x1008D0AF: je 0x1008d0ce */
L_1008D0B1:
    RECOMP_BACKEDGE();
    goto L_1008CF8E; /* 0x1008D0B1: jmp 0x1008cf8e */
L_1008D0B6:
    RECOMP_CALL(sub_1001177D); /* 0x1008D0B6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008D0BB: mov dword ptr [eax], 0x16 */
L_1008D0C1:
    esi = 0x7FFFFFFFu; /* 0x1008D0C1: mov esi, 0x7fffffff */
    goto L_1008D0CE; /* 0x1008D0C6: jmp 0x1008d0ce */
L_1008D0C8:
    { uint32_t _sa = esi, _sb = esi, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1008D0C8: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    esi = esi & 2; /* 0x1008D0CA: and esi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1008D0CD: dec esi */
    _flag_k = FK_DEC;
L_1008D0CE:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008D0CE: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D0DB; /* 0x1008D0D2: je 0x1008d0db */
L_1008D0D4:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008D0D4: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008D0D7: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008D0DB:
    edi = POP32_VAL(esp); /* 0x1008D0DB: pop edi */
    eax = esi; /* 0x1008D0DC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008D0DE: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008D0DF: pop ebx */
    esp = ebp; /* 0x1008D0E0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008D0E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D0E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D0E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D0E4u);

L_1008D0E4:
    PUSH32(esp, ebp); /* 0x1008D0E4: push ebp */
    ebp = esp; /* 0x1008D0E5: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008D0E7: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D0E9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D0EC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008D0F9); /* 0x1008D0EF: call 0x1008d0f9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008D0F4: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008D0F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D0F8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D0F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D0F9u);

L_1008D0F9:
    PUSH32(esp, ebp); /* 0x1008D0F9: push ebp */
    ebp = esp; /* 0x1008D0FA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008D0FC: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1008D0FF: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008D102: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008D105: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1008D10A: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1008D10D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D118; /* 0x1008D10F: je 0x1008d118 */
L_1008D111:
    eax = MEM32(ebp + 0xC); /* 0x1008D111: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1008D114: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D12A; /* 0x1008D116: jne 0x1008d12a */
L_1008D118:
    RECOMP_CALL(sub_1001177D); /* 0x1008D118: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008D11D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008D123: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008D171; /* 0x1008D128: jmp 0x1008d171 */
L_1008D12A:
    edx = MEM32(ebp + (-0xC)); /* 0x1008D12A: mov edx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(edx + 0x8), 0 */ /* 0x1008D12D: cmp dword ptr [edx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D142; /* 0x1008D131: jne 0x1008d142 */
L_1008D133:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008D133: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1008D136: push eax */
    PUSH32(esp, ecx); /* 0x1008D137: push ecx */
    RECOMP_CALL(sub_1009B737); /* 0x1008D138: call 0x1009b737 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008D13D: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1008D17B; /* 0x1008D140: jmp 0x1008d17b */
L_1008D142:
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x1008D142: push dword ptr [edx + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1008D145: push -1 */
    PUSH32(esp, eax); /* 0x1008D147: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1008D148: push -1 */
    PUSH32(esp, ecx); /* 0x1008D14A: push ecx */
    PUSH32(esp, 0x1001u); /* 0x1008D14B: push 0x1001 */
    PUSH32(esp, MEM32(edx + 0x21C)); /* 0x1008D150: push dword ptr [edx + 0x21c] */
    eax = ebp + (-0x10); /* 0x1008D156: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008D159: push eax */
    RECOMP_CALL(sub_10017B92); /* 0x1008D15A: call 0x10017b92 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1008D15F: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008D162: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D178; /* 0x1008D164: jne 0x1008d178 */
L_1008D166:
    RECOMP_CALL(sub_1001177D); /* 0x1008D166: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008D16B: mov dword ptr [eax], 0x16 */
L_1008D171:
    eax = 0x7FFFFFFFu; /* 0x1008D171: mov eax, 0x7fffffff */
    goto L_1008D17B; /* 0x1008D176: jmp 0x1008d17b */
L_1008D178:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1008D178: add eax, -2 */
    _flag_k = FK_ADD;
L_1008D17B:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008D17B: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D188; /* 0x1008D17F: je 0x1008d188 */
L_1008D181:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008D181: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008D184: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008D188:
    esp = ebp; /* 0x1008D188: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008D18A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D18B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D18C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D18Cu);

L_1008D18C:
    PUSH32(esp, ebp); /* 0x1008D18C: push ebp */
    ebp = esp; /* 0x1008D18D: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008D18F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D191: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008D19D); /* 0x1008D194: call 0x1008d19d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008D199: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008D19A: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008D19B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D19C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D19D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D19Du);

L_1008D19D:
    PUSH32(esp, ebp); /* 0x1008D19D: push ebp */
    ebp = esp; /* 0x1008D19E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008D1A0: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1008D1A3: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D1A4: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1008D1A7: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008D1AA: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0xC)); /* 0x1008D1AF: mov esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008D1B2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edx */ /* 0x1008D1B4: cmp dword ptr [esi + 8], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D1C6; /* 0x1008D1B7: jne 0x1008d1c6 */
L_1008D1B9:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D1B9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100129AF); /* 0x1008D1BC: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008D1C1: pop ecx */
    edx = eax; /* 0x1008D1C2: mov edx, eax */
    goto L_1008D1E3; /* 0x1008D1C4: jmp 0x1008d1e3 */
L_1008D1C6:
    ecx = MEM32(ebp + 0x8); /* 0x1008D1C6: mov ecx, dword ptr [ebp + 8] */
    goto L_1008D1DD; /* 0x1008D1C9: jmp 0x1008d1dd */
L_1008D1CB:
    eax = (uint32_t)LO8(eax); /* 0x1008D1CB: movzx eax, al */
    /* test MEM8(eax + esi + 0x19), 4 */ /* 0x1008D1CE: test byte ptr [eax + esi + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + esi + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D1DB; /* 0x1008D1D3: je 0x1008d1db */
L_1008D1D5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008D1D5: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), 0 */ /* 0x1008D1D6: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D1E3; /* 0x1008D1D9: je 0x1008d1e3 */
L_1008D1DB:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008D1DB: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008D1DC: inc ecx */
    _flag_k = FK_INC;
L_1008D1DD:
    SET_LO8(eax, MEM8(ecx)); /* 0x1008D1DD: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1008D1DF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D1CB; /* 0x1008D1E1: jne 0x1008d1cb */
L_1008D1E3:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008D1E3: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = POP32_VAL(esp); /* 0x1008D1E7: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D1F1; /* 0x1008D1E8: je 0x1008d1f1 */
L_1008D1EA:
    eax = MEM32(ebp + (-0x8)); /* 0x1008D1EA: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1008D1ED: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008D1F1:
    eax = edx; /* 0x1008D1F1: mov eax, edx */
    esp = ebp; /* 0x1008D1F3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008D1F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D1F6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D1F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D1F7u);

L_1008D1F7:
    PUSH32(esp, ebp); /* 0x1008D1F7: push ebp */
    ebp = esp; /* 0x1008D1F8: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008D1FA: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D1FC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D1FF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008D20C); /* 0x1008D202: call 0x1008d20c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008D207: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008D20A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D20B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D20C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D20Cu);

L_1008D20C:
    PUSH32(esp, ebp); /* 0x1008D20C: push ebp */
    ebp = esp; /* 0x1008D20D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008D20F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1008D212: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008D213: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x1008D216: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008D219: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0xC)); /* 0x1008D21E: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1008D221: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x8), ecx */ /* 0x1008D223: cmp dword ptr [ebx + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D239; /* 0x1008D226: jne 0x1008d239 */
L_1008D228:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D228: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D22B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10017154); /* 0x1008D22E: call 0x10017154 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008D233: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008D234: pop ecx */
    ecx = eax; /* 0x1008D235: mov ecx, eax */
    goto L_1008D271; /* 0x1008D237: jmp 0x1008d271 */
L_1008D239:
    PUSH32(esp, esi); /* 0x1008D239: push esi */
    PUSH32(esp, edi); /* 0x1008D23A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1008D23B: mov edi, dword ptr [ebp + 0xc] */
    edx = ecx; /* 0x1008D23E: mov edx, ecx */
    /* test edi, edi */ /* 0x1008D240: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D26D; /* 0x1008D242: je 0x1008d26d */
L_1008D244:
    esi = MEM32(ebp + 0x8); /* 0x1008D244: mov esi, dword ptr [ebp + 8] */
L_1008D247:
    SET_LO8(eax, MEM8(esi)); /* 0x1008D247: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1008D249: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D269; /* 0x1008D24B: je 0x1008d269 */
L_1008D24D:
    eax = (uint32_t)LO8(eax); /* 0x1008D24D: movzx eax, al */
    /* test MEM8(eax + ebx + 0x19), 4 */ /* 0x1008D250: test byte ptr [eax + ebx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D262; /* 0x1008D255: je 0x1008d262 */
L_1008D257:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008D257: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x1008D258: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008D26D; /* 0x1008D25A: jae 0x1008d26d */
L_1008D25C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008D25C: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x1008D25D: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D269; /* 0x1008D260: je 0x1008d269 */
L_1008D262:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008D262: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008D263: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008D264: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x1008D265: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1008D247; /* 0x1008D267: jb 0x1008d247 */
L_1008D269:
    /* cmp edx, edi */ /* 0x1008D269: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008D26F; /* 0x1008D26B: jb 0x1008d26f */
L_1008D26D:
    ecx = edi; /* 0x1008D26D: mov ecx, edi */
L_1008D26F:
    edi = POP32_VAL(esp); /* 0x1008D26F: pop edi */
    esi = POP32_VAL(esp); /* 0x1008D270: pop esi */
L_1008D271:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008D271: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = POP32_VAL(esp); /* 0x1008D275: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D27F; /* 0x1008D276: je 0x1008d27f */
L_1008D278:
    eax = MEM32(ebp + (-0x8)); /* 0x1008D278: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1008D27B: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008D27F:
    eax = ecx; /* 0x1008D27F: mov eax, ecx */
    esp = ebp; /* 0x1008D281: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008D283: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D284: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D285(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D285u);

L_1008D285:
    PUSH32(esp, ebp); /* 0x1008D285: push ebp */
    ebp = esp; /* 0x1008D286: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1008D288: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1008D28B: neg eax */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1008D28D: push 0 */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1008D28F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x1008D291: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D292: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008D2E1); /* 0x1008D295: call 0x1008d2e1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008D29A: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1008D29D: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1008D29F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x1008D2A1: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    eax = eax & MEM32(ebp + 0x8); /* 0x1008D2A3: and eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1008D2A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D2A7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D2A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D2A8u);

L_1008D2A8:
    PUSH32(esp, ebp); /* 0x1008D2A8: push ebp */
    ebp = esp; /* 0x1008D2A9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1008D2AB: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D2AE: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1008D2B1: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1008D2B3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x1008D2B5: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D2B6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008D2E1); /* 0x1008D2B9: call 0x1008d2e1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008D2BE: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1008D2C1: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1008D2C3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x1008D2C5: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    eax = eax & MEM32(ebp + 0x8); /* 0x1008D2C7: and eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1008D2CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D2CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D2CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D2CCu);

L_1008D2CC:
    PUSH32(esp, ebp); /* 0x1008D2CC: push ebp */
    ebp = esp; /* 0x1008D2CD: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008D2CF: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D2D1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D2D4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008D2E1); /* 0x1008D2D7: call 0x1008d2e1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008D2DC: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008D2DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D2E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D2E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D2E1u);

L_1008D2E1:
    PUSH32(esp, ebp); /* 0x1008D2E1: push ebp */
    ebp = esp; /* 0x1008D2E2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008D2E4: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1008D2E7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008D2E8: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1008D2EB: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1008D2EC: mov edi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1008D2EF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D302; /* 0x1008D2F1: je 0x1008d302 */
L_1008D2F3:
    /* test edi, edi */ /* 0x1008D2F3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D306; /* 0x1008D2F5: je 0x1008d306 */
L_1008D2F7:
    /* test esi, esi */ /* 0x1008D2F7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D31C; /* 0x1008D2F9: jne 0x1008d31c */
L_1008D2FB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008D2FB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008D3BD; /* 0x1008D2FD: jmp 0x1008d3bd */
L_1008D302:
    /* test edi, edi */ /* 0x1008D302: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D2F7; /* 0x1008D304: je 0x1008d2f7 */
L_1008D306:
    RECOMP_CALL(sub_1001177D); /* 0x1008D306: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008D30B: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1008D30D: pop esi */
    MEM32(eax) = esi; /* 0x1008D30E: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1008D310: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1008D315: mov eax, esi */
    goto L_1008D3BD; /* 0x1008D317: jmp 0x1008d3bd */
L_1008D31C:
    PUSH32(esp, edi); /* 0x1008D31C: push edi */
    PUSH32(esp, esi); /* 0x1008D31D: push esi */
    RECOMP_CALL(sub_10017154); /* 0x1008D31E: call 0x10017154 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008D323: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008D324: pop ecx */
    /* cmp eax, edi */ /* 0x1008D325: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008D32E; /* 0x1008D327: jb 0x1008d32e */
L_1008D329:
    MEM8(esi) = (uint8_t)(0); /* 0x1008D329: mov byte ptr [esi], 0 */
    RECOMP_BACKEDGE();
    goto L_1008D306; /* 0x1008D32C: jmp 0x1008d306 */
L_1008D32E:
    PUSH32(esp, ebx); /* 0x1008D32E: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008D32F: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x14); /* 0x1008D332: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x1008D335: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi), 0 */ /* 0x1008D33A: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = esi; /* 0x1008D33D: mov ebx, esi */
    edi = esi; /* 0x1008D33F: mov edi, esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D3AB; /* 0x1008D341: je 0x1008d3ab */
L_1008D343:
    eax = MEM32(ebp + (-0x10)); /* 0x1008D343: mov eax, dword ptr [ebp - 0x10] */
L_1008D346:
    SET_LO8(ecx, MEM8(ebx)); /* 0x1008D346: mov cl, byte ptr [ebx] */
    edx = (uint32_t)LO8(ecx); /* 0x1008D348: movzx edx, cl */
    MEM32(ebp + (-0x4)) = edx; /* 0x1008D34B: mov dword ptr [ebp - 4], edx */
    SET_LO8(edx, MEM8(edx + eax + 0x19)); /* 0x1008D34E: mov dl, byte ptr [edx + eax + 0x19] */
    /* test LO8(edx), 4 */ /* 0x1008D352: test dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D393; /* 0x1008D355: je 0x1008d393 */
L_1008D357:
    PUSH32(esp, 1); /* 0x1008D357: push 1 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1008D359: push dword ptr [eax + 4] */
    ecx = ebp + 0x8; /* 0x1008D35C: lea ecx, [ebp + 8] */
    PUSH32(esp, 2); /* 0x1008D35F: push 2 */
    PUSH32(esp, ecx); /* 0x1008D361: push ecx */
    PUSH32(esp, 2); /* 0x1008D362: push 2 */
    PUSH32(esp, ebx); /* 0x1008D364: push ebx */
    PUSH32(esp, 0x100u); /* 0x1008D365: push 0x100 */
    PUSH32(esp, MEM32(eax + 0x21C)); /* 0x1008D36A: push dword ptr [eax + 0x21c] */
    eax = ebp + (-0x14); /* 0x1008D370: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008D373: push eax */
    RECOMP_CALL(sub_10020EFE); /* 0x1008D374: call 0x10020efe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1008D379: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008D37C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D3C3; /* 0x1008D37E: je 0x1008d3c3 */
L_1008D380:
    ecx = MEM32(ebp + 0x8); /* 0x1008D380: mov ecx, dword ptr [ebp + 8] */
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x1008D383: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008D385: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1008D386: inc ebx */
    _flag_k = FK_INC;
    /* cmp eax, 1 */ /* 0x1008D387: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x10)); /* 0x1008D38A: mov eax, dword ptr [ebp - 0x10] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1008D3A5; /* 0x1008D38D: jle 0x1008d3a5 */
L_1008D38F:
    MEM8(edi) = (uint8_t)(HI8(ecx)); /* 0x1008D38F: mov byte ptr [edi], ch */
    goto L_1008D3A4; /* 0x1008D391: jmp 0x1008d3a4 */
L_1008D393:
    /* test LO8(edx), 0x10u */ /* 0x1008D393: test dl, 0x10 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D3A2; /* 0x1008D396: je 0x1008d3a2 */
L_1008D398:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008D398: mov ecx, dword ptr [ebp - 4] */
    SET_LO8(ecx, MEM8(ecx + eax + 0x119)); /* 0x1008D39B: mov cl, byte ptr [ecx + eax + 0x119] */
L_1008D3A2:
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x1008D3A2: mov byte ptr [edi], cl */
L_1008D3A4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008D3A4: inc edi */
    _flag_k = FK_INC;
L_1008D3A5:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1008D3A5: inc ebx */
    _flag_k = FK_INC;
    /* cmp MEM8(ebx), 0 */ /* 0x1008D3A6: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D346; /* 0x1008D3A9: jne 0x1008d346 */
L_1008D3AB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008D3AB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1008D3AD: mov byte ptr [edi], al */
L_1008D3AF:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008D3AF: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = POP32_VAL(esp); /* 0x1008D3B3: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D3BD; /* 0x1008D3B4: je 0x1008d3bd */
L_1008D3B6:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008D3B6: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008D3B9: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008D3BD:
    edi = POP32_VAL(esp); /* 0x1008D3BD: pop edi */
    esi = POP32_VAL(esp); /* 0x1008D3BE: pop esi */
    esp = ebp; /* 0x1008D3BF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008D3C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D3C2: ret  */
L_1008D3C3:
    RECOMP_CALL(sub_1001177D); /* 0x1008D3C3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1008D3C8: mov dword ptr [eax], 0x2a */
    MEM8(esi) = (uint8_t)(0); /* 0x1008D3CE: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_1001177D); /* 0x1008D3D1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1008D3D6: mov eax, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_1008D3AF; /* 0x1008D3D8: jmp 0x1008d3af */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008D3DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D3DAu);

L_1008D3DA:
    PUSH32(esp, ebp); /* 0x1008D3DA: push ebp */
    ebp = esp; /* 0x1008D3DB: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008D3DD: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008D3DF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D3E2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D3E5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008D3F2); /* 0x1008D3E8: call 0x1008d3f2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008D3ED: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008D3F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D3F1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D3F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D3F2u);

L_1008D3F2:
    PUSH32(esp, ebp); /* 0x1008D3F2: push ebp */
    ebp = esp; /* 0x1008D3F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008D3F5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1008D3F8: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1008D3F9: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1008D3FC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D408; /* 0x1008D3FE: jne 0x1008d408 */
L_1008D400:
    eax = MEM32(ebp + 0x8); /* 0x1008D400: mov eax, dword ptr [ebp + 8] */
    goto L_1008D50C; /* 0x1008D403: jmp 0x1008d50c */
L_1008D408:
    PUSH32(esp, esi); /* 0x1008D408: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008D409: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1008D40C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D427; /* 0x1008D40E: jne 0x1008d427 */
L_1008D410:
    RECOMP_CALL(sub_1001177D); /* 0x1008D410: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008D415: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008D41B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008D420: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008D50B; /* 0x1008D422: jmp 0x1008d50b */
L_1008D427:
    PUSH32(esp, edi); /* 0x1008D427: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1008D428: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1008D42B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D446; /* 0x1008D42D: jne 0x1008d446 */
L_1008D42F:
    RECOMP_CALL(sub_1001177D); /* 0x1008D42F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008D434: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008D43A: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008D43F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008D50A; /* 0x1008D441: jmp 0x1008d50a */
L_1008D446:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008D446: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x14); /* 0x1008D449: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x1008D44C: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1008D451: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008D454: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D46C; /* 0x1008D458: jne 0x1008d46c */
L_1008D45A:
    PUSH32(esp, ebx); /* 0x1008D45A: push ebx */
    PUSH32(esp, edi); /* 0x1008D45B: push edi */
    PUSH32(esp, esi); /* 0x1008D45C: push esi */
    RECOMP_CALL(sub_100347A5); /* 0x1008D45D: call 0x100347a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008D462: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1008D465: mov ecx, eax */
    goto L_1008D4FB; /* 0x1008D467: jmp 0x1008d4fb */
L_1008D46C:
    edx = esi; /* 0x1008D46C: mov edx, esi */
    MEM32(ebp + (-0x4)) = edx; /* 0x1008D46E: mov dword ptr [ebp - 4], edx */
L_1008D471:
    SET_LO8(eax, MEM8(esi)); /* 0x1008D471: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008D473: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008D474: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D471; /* 0x1008D476: jne 0x1008d471 */
L_1008D478:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1008D478: dec esi */
    _flag_k = FK_DEC;
    /* cmp esi, edx */ /* 0x1008D479: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D499; /* 0x1008D47B: je 0x1008d499 */
L_1008D47D:
    eax = ebp + (-0x14); /* 0x1008D47D: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008D480: push eax */
    eax = esi; /* 0x1008D481: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1008D483: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1008D485: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x1008D486: push eax */
    PUSH32(esp, edx); /* 0x1008D487: push edx */
    RECOMP_CALL(sub_1008CB5F); /* 0x1008D488: call 0x1008cb5f */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x1008D48D: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008D490: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x1008D493: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D499; /* 0x1008D496: jne 0x1008d499 */
L_1008D498:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1008D498: dec esi */
    _flag_k = FK_DEC;
L_1008D499:
    ecx = (uint32_t)MEM8(edi); /* 0x1008D499: movzx ecx, byte ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1008D49C: dec ebx */
    _flag_k = FK_DEC;
    eax = MEM32(ebp + (-0x10)); /* 0x1008D49D: mov eax, dword ptr [ebp - 0x10] */
    /* test MEM8(eax + ecx + 0x19), 4 */ /* 0x1008D4A0: test byte ptr [eax + ecx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, MEM8(edi)); /* 0x1008D4A5: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1008D4A7: mov byte ptr [esi], al */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D4C3; /* 0x1008D4A9: je 0x1008d4c3 */
L_1008D4AB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008D4AB: inc esi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x1008D4AC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D4CF; /* 0x1008D4AE: je 0x1008d4cf */
L_1008D4B0:
    SET_LO8(eax, MEM8(edi + 0x1)); /* 0x1008D4B0: mov al, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1008D4B3: dec ebx */
    _flag_k = FK_DEC;
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1008D4B4: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1008D4B6: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008D4B9: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008D4BA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D4C9; /* 0x1008D4BC: jne 0x1008d4c9 */
L_1008D4BE:
    MEM8(esi + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x1008D4BE: mov byte ptr [esi - 2], al */
    goto L_1008D4D3; /* 0x1008D4C1: jmp 0x1008d4d3 */
L_1008D4C3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008D4C3: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008D4C4: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008D4C5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D4D3; /* 0x1008D4C7: je 0x1008d4d3 */
L_1008D4C9:
    /* test ebx, ebx */ /* 0x1008D4C9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D4D3; /* 0x1008D4CB: je 0x1008d4d3 */
L_1008D4CD:
    RECOMP_BACKEDGE();
    goto L_1008D499; /* 0x1008D4CD: jmp 0x1008d499 */
L_1008D4CF:
    MEM8(esi + (-0x1)) = (uint8_t)(0); /* 0x1008D4CF: mov byte ptr [esi - 1], 0 */
L_1008D4D3:
    /* cmp esi, edx */ /* 0x1008D4D3: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D4F5; /* 0x1008D4D5: je 0x1008d4f5 */
L_1008D4D7:
    eax = ebp + (-0x14); /* 0x1008D4D7: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008D4DA: push eax */
    eax = esi; /* 0x1008D4DB: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1008D4DD: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1008D4DF: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x1008D4E0: push eax */
    PUSH32(esp, edx); /* 0x1008D4E1: push edx */
    RECOMP_CALL(sub_1008CB5F); /* 0x1008D4E2: call 0x1008cb5f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008D4E7: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x1008D4EA: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D4F5; /* 0x1008D4ED: jne 0x1008d4f5 */
L_1008D4EF:
    MEM8(esi + (-0x1)) = (uint8_t)(0); /* 0x1008D4EF: mov byte ptr [esi - 1], 0 */
    goto L_1008D4F8; /* 0x1008D4F3: jmp 0x1008d4f8 */
L_1008D4F5:
    MEM8(esi) = (uint8_t)(0); /* 0x1008D4F5: mov byte ptr [esi], 0 */
L_1008D4F8:
    ecx = MEM32(ebp + (-0x4)); /* 0x1008D4F8: mov ecx, dword ptr [ebp - 4] */
L_1008D4FB:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008D4FB: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D508; /* 0x1008D4FF: je 0x1008d508 */
L_1008D501:
    eax = MEM32(ebp + (-0xC)); /* 0x1008D501: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1008D504: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008D508:
    eax = ecx; /* 0x1008D508: mov eax, ecx */
L_1008D50A:
    edi = POP32_VAL(esp); /* 0x1008D50A: pop edi */
L_1008D50B:
    esi = POP32_VAL(esp); /* 0x1008D50B: pop esi */
L_1008D50C:
    ebx = POP32_VAL(esp); /* 0x1008D50C: pop ebx */
    esp = ebp; /* 0x1008D50D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008D50F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D510: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D511(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D511u);

L_1008D511:
    PUSH32(esp, ebp); /* 0x1008D511: push ebp */
    ebp = esp; /* 0x1008D512: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008D514: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008D516: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008D519: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D51C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D51F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008BCA6); /* 0x1008D522: call 0x1008bca6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008D527: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008D52A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D52B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D52C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D52Cu);

L_1008D52C:
    PUSH32(esp, ebp); /* 0x1008D52C: push ebp */
    ebp = esp; /* 0x1008D52D: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008D52F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008D531: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D534: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D537: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008D544); /* 0x1008D53A: call 0x1008d544 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008D53F: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008D542: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D543: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D544(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D544u);

L_1008D544:
    PUSH32(esp, ebp); /* 0x1008D544: push ebp */
    ebp = esp; /* 0x1008D545: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008D547: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1008D54A: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1008D54B: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1008D54E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D559; /* 0x1008D550: jne 0x1008d559 */
L_1008D552:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008D552: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008D655; /* 0x1008D554: jmp 0x1008d655 */
L_1008D559:
    PUSH32(esp, ebx); /* 0x1008D559: push ebx */
    PUSH32(esp, edi); /* 0x1008D55A: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008D55B: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x14); /* 0x1008D55E: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x1008D561: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1008D566: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008D569: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), edx */ /* 0x1008D56B: cmp dword ptr [eax + 8], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D586; /* 0x1008D56E: jne 0x1008d586 */
L_1008D570:
    PUSH32(esp, esi); /* 0x1008D570: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D571: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D574: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001825D); /* 0x1008D577: call 0x1001825d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008D57C: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = eax; /* 0x1008D57F: mov edx, eax */
    goto L_1008D644; /* 0x1008D581: jmp 0x1008d644 */
L_1008D586:
    ebx = MEM32(ebp + 0x8); /* 0x1008D586: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x1008D589: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D594; /* 0x1008D58B: je 0x1008d594 */
L_1008D58D:
    edi = MEM32(ebp + 0xC); /* 0x1008D58D: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1008D590: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D5AE; /* 0x1008D592: jne 0x1008d5ae */
L_1008D594:
    RECOMP_CALL(sub_1001177D); /* 0x1008D594: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008D599: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008D59F: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    edx = 0x7FFFFFFFu; /* 0x1008D5A4: mov edx, 0x7fffffff */
    goto L_1008D644; /* 0x1008D5A9: jmp 0x1008d644 */
L_1008D5AE:
    ecx = (uint32_t)MEM8(ebx); /* 0x1008D5AE: movzx ecx, byte ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1008D5B1: dec esi */
    _flag_k = FK_DEC;
    edx = MEM32(ebp + (-0x10)); /* 0x1008D5B2: mov edx, dword ptr [ebp - 0x10] */
    eax = ecx; /* 0x1008D5B5: mov eax, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1008D5B7: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, 0); /* 0x1008D5B8: push 0 */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1008D5BA: mov dword ptr [ebp - 4], ebx */
    /* test MEM8(eax + edx + 0x19), 4 */ /* 0x1008D5BD: test byte ptr [eax + edx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = POP32_VAL(esp); /* 0x1008D5C2: pop edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D5F9; /* 0x1008D5C3: je 0x1008d5f9 */
L_1008D5C5:
    /* test esi, esi */ /* 0x1008D5C5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D5DF; /* 0x1008D5C7: jne 0x1008d5df */
L_1008D5C9:
    eax = (uint32_t)MEM8(edi); /* 0x1008D5C9: movzx eax, byte ptr [edi] */
    ecx = edx; /* 0x1008D5CC: mov ecx, edx */
    ebx = MEM32(ebp + (-0x10)); /* 0x1008D5CE: mov ebx, dword ptr [ebp - 0x10] */
    /* test MEM8(eax + ebx + 0x19), 4 */ /* 0x1008D5D1: test byte ptr [eax + ebx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D644; /* 0x1008D5D6: jne 0x1008d644 */
L_1008D5D8:
    SET_LO8(eax, MEM8(edi)); /* 0x1008D5D8: mov al, byte ptr [edi] */
    ebx = (uint32_t)LO8(eax); /* 0x1008D5DA: movzx ebx, al */
    goto L_1008D628; /* 0x1008D5DD: jmp 0x1008d628 */
L_1008D5DF:
    SET_LO8(eax, MEM8(ebx)); /* 0x1008D5DF: mov al, byte ptr [ebx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1008D5E1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D5E9; /* 0x1008D5E3: jne 0x1008d5e9 */
L_1008D5E5:
    ecx = edx; /* 0x1008D5E5: mov ecx, edx */
    goto L_1008D5F9; /* 0x1008D5E7: jmp 0x1008d5f9 */
L_1008D5E9:
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x1008D5E9: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x1008D5E9: shl ecx, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1008D5EC: movzx eax, al */
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x1008D5EF: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1008D5F2: inc ebx */
    _flag_k = FK_INC;
    ecx = (uint32_t)LO16(ecx); /* 0x1008D5F3: movzx ecx, cx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1008D5F6: mov dword ptr [ebp - 4], ebx */
L_1008D5F9:
    ebx = (uint32_t)MEM8(edi); /* 0x1008D5F9: movzx ebx, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008D5FC: inc edi */
    _flag_k = FK_INC;
    edx = MEM32(ebp + (-0x10)); /* 0x1008D5FD: mov edx, dword ptr [ebp - 0x10] */
    eax = ebx; /* 0x1008D600: mov eax, ebx */
    PUSH32(esp, 0); /* 0x1008D602: push 0 */
    /* test MEM8(eax + edx + 0x19), 4 */ /* 0x1008D604: test byte ptr [eax + edx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = POP32_VAL(esp); /* 0x1008D609: pop edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D628; /* 0x1008D60A: je 0x1008d628 */
L_1008D60C:
    /* test esi, esi */ /* 0x1008D60C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D614; /* 0x1008D60E: jne 0x1008d614 */
L_1008D610:
    ebx = edx; /* 0x1008D610: mov ebx, edx */
    goto L_1008D628; /* 0x1008D612: jmp 0x1008d628 */
L_1008D614:
    SET_LO8(eax, MEM8(edi)); /* 0x1008D614: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1008D616: dec esi */
    _flag_k = FK_DEC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008D617: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D610; /* 0x1008D619: je 0x1008d610 */
L_1008D61B:
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x1008D61B: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x1008D61B: shl ebx, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1008D61E: movzx eax, al */
    _flag_a = (uint32_t)((LO16(ebx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ebx) | LO16(eax))) << 16;
    SET_LO16(ebx, LO16(ebx) | LO16(eax)); /* 0x1008D621: or bx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008D624: inc edi */
    _flag_k = FK_INC;
    ebx = (uint32_t)LO16(ebx); /* 0x1008D625: movzx ebx, bx */
L_1008D628:
    /* cmp LO16(ebx), LO16(ecx) */ /* 0x1008D628: cmp bx, cx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D63E; /* 0x1008D62B: jne 0x1008d63e */
L_1008D62D:
    /* test LO16(ecx), LO16(ecx) */ /* 0x1008D62D: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D644; /* 0x1008D630: je 0x1008d644 */
L_1008D632:
    ebx = MEM32(ebp + (-0x4)); /* 0x1008D632: mov ebx, dword ptr [ebp - 4] */
    /* test esi, esi */ /* 0x1008D635: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D644; /* 0x1008D637: je 0x1008d644 */
L_1008D639:
    RECOMP_BACKEDGE();
    goto L_1008D5AE; /* 0x1008D639: jmp 0x1008d5ae */
L_1008D63E:
    { uint32_t _sa = edx, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1008D63E: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    edx = edx & 2; /* 0x1008D640: and edx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1008D643: dec edx */
    _flag_k = FK_DEC;
L_1008D644:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008D644: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x1008D648: pop edi */
    ebx = POP32_VAL(esp); /* 0x1008D649: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D653; /* 0x1008D64A: je 0x1008d653 */
L_1008D64C:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008D64C: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008D64F: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008D653:
    eax = edx; /* 0x1008D653: mov eax, edx */
L_1008D655:
    esi = POP32_VAL(esp); /* 0x1008D655: pop esi */
    esp = ebp; /* 0x1008D656: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008D658: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D659: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D65A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D65Au);

L_1008D65A:
    PUSH32(esp, ebp); /* 0x1008D65A: push ebp */
    ebp = esp; /* 0x1008D65B: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008D65D: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D65F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D662: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008D66F); /* 0x1008D665: call 0x1008d66f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008D66A: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008D66D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D66E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D66F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D66Fu);

L_1008D66F:
    PUSH32(esp, ebp); /* 0x1008D66F: push ebp */
    ebp = esp; /* 0x1008D670: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008D672: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1008D675: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008D678: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008D67B: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1008D680: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x1008D684: mov ecx, dword ptr [ebp + 0xc] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D6A1; /* 0x1008D687: jne 0x1008d6a1 */
L_1008D689:
    /* test ecx, ecx */ /* 0x1008D689: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D6A1; /* 0x1008D68B: je 0x1008d6a1 */
L_1008D68D:
    RECOMP_CALL(sub_1001177D); /* 0x1008D68D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008D692: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008D698: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008D69D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008D6CF; /* 0x1008D69F: jmp 0x1008d6cf */
L_1008D6A1:
    edx = MEM32(ebp + 0x8); /* 0x1008D6A1: mov edx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1008D6A4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D6CC; /* 0x1008D6A6: je 0x1008d6cc */
L_1008D6A8:
    PUSH32(esp, edi); /* 0x1008D6A8: push edi */
    edi = MEM32(ebp + (-0xC)); /* 0x1008D6A9: mov edi, dword ptr [ebp - 0xc] */
L_1008D6AC:
    SET_LO8(eax, MEM8(edx)); /* 0x1008D6AC: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008D6AE: dec ecx */
    _flag_k = FK_DEC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008D6AF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D6CB; /* 0x1008D6B1: je 0x1008d6cb */
L_1008D6B3:
    eax = (uint32_t)LO8(eax); /* 0x1008D6B3: movzx eax, al */
    /* test MEM8(eax + edi + 0x19), 4 */ /* 0x1008D6B6: test byte ptr [eax + edi + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edi + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D6C3; /* 0x1008D6BB: je 0x1008d6c3 */
L_1008D6BD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008D6BD: inc edx */
    _flag_k = FK_INC;
    /* cmp MEM8(edx), 0 */ /* 0x1008D6BE: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D6CA; /* 0x1008D6C1: je 0x1008d6ca */
L_1008D6C3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008D6C3: inc edx */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x1008D6C4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D6CB; /* 0x1008D6C6: je 0x1008d6cb */
L_1008D6C8:
    RECOMP_BACKEDGE();
    goto L_1008D6AC; /* 0x1008D6C8: jmp 0x1008d6ac */
L_1008D6CA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1008D6CA: dec edx */
    _flag_k = FK_DEC;
L_1008D6CB:
    edi = POP32_VAL(esp); /* 0x1008D6CB: pop edi */
L_1008D6CC:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + 0x8); /* 0x1008D6CC: sub edx, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
L_1008D6CF:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008D6CF: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D6DC; /* 0x1008D6D3: je 0x1008d6dc */
L_1008D6D5:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008D6D5: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008D6D8: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008D6DC:
    eax = edx; /* 0x1008D6DC: mov eax, edx */
    esp = ebp; /* 0x1008D6DE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008D6E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D6E1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D6E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D6E2u);

L_1008D6E2:
    PUSH32(esp, ebp); /* 0x1008D6E2: push ebp */
    ebp = esp; /* 0x1008D6E3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008D6E5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008D6E7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D6EA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D6ED: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008D6FA); /* 0x1008D6F0: call 0x1008d6fa */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008D6F5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008D6F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D6F9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D6FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D6FAu);

L_1008D6FA:
    PUSH32(esp, ebp); /* 0x1008D6FA: push ebp */
    ebp = esp; /* 0x1008D6FB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008D6FD: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1008D700: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1008D701: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1008D704: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D70F; /* 0x1008D706: jne 0x1008d70f */
L_1008D708:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008D708: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008D7C1; /* 0x1008D70A: jmp 0x1008d7c1 */
L_1008D70F:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1008D70F: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D72F; /* 0x1008D713: jne 0x1008d72f */
L_1008D715:
    RECOMP_CALL(sub_1001177D); /* 0x1008D715: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008D71A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008D720: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0x7FFFFFFFu; /* 0x1008D725: mov eax, 0x7fffffff */
    goto L_1008D7C1; /* 0x1008D72A: jmp 0x1008d7c1 */
L_1008D72F:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1008D72F: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D715; /* 0x1008D733: je 0x1008d715 */
L_1008D735:
    PUSH32(esp, esi); /* 0x1008D735: push esi */
    esi = 0x7FFFFFFFu; /* 0x1008D736: mov esi, 0x7fffffff */
    /* cmp edi, esi */ /* 0x1008D73B: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008D751; /* 0x1008D73D: jbe 0x1008d751 */
L_1008D73F:
    RECOMP_CALL(sub_1001177D); /* 0x1008D73F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008D744: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008D74A: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008D7BE; /* 0x1008D74F: jmp 0x1008d7be */
L_1008D751:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008D751: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x10); /* 0x1008D754: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008D757: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1008D75C: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008D75F: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D77B; /* 0x1008D763: jne 0x1008d77b */
L_1008D765:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008D765: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1008D768: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D769: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D76C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009B8A5); /* 0x1008D76F: call 0x1009b8a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008D774: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1008D777: mov esi, eax */
    goto L_1008D7B1; /* 0x1008D779: jmp 0x1008d7b1 */
L_1008D77B:
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1008D77B: push dword ptr [eax + 4] */
    PUSH32(esp, edi); /* 0x1008D77E: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D77F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1008D782: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D783: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1000u); /* 0x1008D786: push 0x1000 */
    PUSH32(esp, MEM32(eax + 0x21C)); /* 0x1008D78B: push dword ptr [eax + 0x21c] */
    eax = ebp + (-0x10); /* 0x1008D791: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008D794: push eax */
    RECOMP_CALL(sub_10017B92); /* 0x1008D795: call 0x10017b92 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1008D79A: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008D79D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D7AE; /* 0x1008D79F: jne 0x1008d7ae */
L_1008D7A1:
    RECOMP_CALL(sub_1001177D); /* 0x1008D7A1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008D7A6: mov dword ptr [eax], 0x16 */
    goto L_1008D7B1; /* 0x1008D7AC: jmp 0x1008d7b1 */
L_1008D7AE:
    esi = eax + (-0x2); /* 0x1008D7AE: lea esi, [eax - 2] */
L_1008D7B1:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008D7B1: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D7BE; /* 0x1008D7B5: je 0x1008d7be */
L_1008D7B7:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008D7B7: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008D7BA: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008D7BE:
    eax = esi; /* 0x1008D7BE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008D7C0: pop esi */
L_1008D7C1:
    edi = POP32_VAL(esp); /* 0x1008D7C1: pop edi */
    esp = ebp; /* 0x1008D7C2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008D7C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D7C5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D7C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D7C6u);

L_1008D7C6:
    PUSH32(esp, ebp); /* 0x1008D7C6: push ebp */
    ebp = esp; /* 0x1008D7C7: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008D7C9: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008D7CB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D7CE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D7D1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008D7DE); /* 0x1008D7D4: call 0x1008d7de */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008D7D9: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008D7DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D7DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D7DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D7DEu);

L_1008D7DE:
    PUSH32(esp, ebp); /* 0x1008D7DE: push ebp */
    ebp = esp; /* 0x1008D7DF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008D7E1: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1008D7E4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008D7E5: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x1008D7E8: lea ecx, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x1008D7EB: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008D7EC: push dword ptr [ebp + 0x14] */
    edi = esi; /* 0x1008D7EF: mov edi, esi */
    MEM32(ebp + 0x8) = edi; /* 0x1008D7F1: mov dword ptr [ebp + 8], edi */
    RECOMP_CALL(sub_1000F764); /* 0x1008D7F4: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x1008D7F9: mov ecx, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1008D7FC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D804; /* 0x1008D7FE: jne 0x1008d804 */
L_1008D800:
    /* test ecx, ecx */ /* 0x1008D800: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D80F; /* 0x1008D802: jne 0x1008d80f */
L_1008D804:
    edx = MEM32(ebp + 0xC); /* 0x1008D804: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1008D807: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D823; /* 0x1008D809: jne 0x1008d823 */
L_1008D80B:
    /* test ecx, ecx */ /* 0x1008D80B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D823; /* 0x1008D80D: je 0x1008d823 */
L_1008D80F:
    RECOMP_CALL(sub_1001177D); /* 0x1008D80F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008D814: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008D81A: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1008D81F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008D87E; /* 0x1008D821: jmp 0x1008d87e */
L_1008D823:
    eax = MEM32(ebp + (-0xC)); /* 0x1008D823: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008D826: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D83B; /* 0x1008D82A: jne 0x1008d83b */
L_1008D82C:
    PUSH32(esp, ecx); /* 0x1008D82C: push ecx */
    PUSH32(esp, edx); /* 0x1008D82D: push edx */
    PUSH32(esp, esi); /* 0x1008D82E: push esi */
    RECOMP_CALL(sub_100183C4); /* 0x1008D82F: call 0x100183c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008D834: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1008D837: mov edi, eax */
    goto L_1008D87E; /* 0x1008D839: jmp 0x1008d87e */
L_1008D83B:
    /* test ecx, ecx */ /* 0x1008D83B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D87E; /* 0x1008D83D: je 0x1008d87e */
L_1008D83F:
    PUSH32(esp, ebx); /* 0x1008D83F: push ebx */
L_1008D840:
    SET_LO8(ebx, MEM8(edx)); /* 0x1008D840: mov bl, byte ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008D842: dec ecx */
    _flag_k = FK_DEC;
    edi = MEM32(ebp + (-0xC)); /* 0x1008D843: mov edi, dword ptr [ebp - 0xc] */
    eax = (uint32_t)LO8(ebx); /* 0x1008D846: movzx eax, bl */
    /* test MEM8(eax + edi + 0x19), 4 */ /* 0x1008D849: test byte ptr [eax + edi + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edi + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + 0x8); /* 0x1008D84E: mov edi, dword ptr [ebp + 8] */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008D851: mov byte ptr [esi], bl */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D893; /* 0x1008D853: je 0x1008d893 */
L_1008D855:
    /* test ecx, ecx */ /* 0x1008D855: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D89F; /* 0x1008D857: je 0x1008d89f */
L_1008D859:
    SET_LO8(eax, MEM8(edx + 0x1)); /* 0x1008D859: mov al, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008D85C: dec ecx */
    _flag_k = FK_DEC;
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1008D85D: mov byte ptr [esi + 1], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1008D860: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1008D863: add esi, 2 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x1008D866: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D899; /* 0x1008D868: jne 0x1008d899 */
L_1008D86A:
    MEM8(esi + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x1008D86A: mov byte ptr [esi - 2], al */
L_1008D86D:
    /* test ecx, ecx */ /* 0x1008D86D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D87D; /* 0x1008D86F: je 0x1008d87d */
L_1008D871:
    PUSH32(esp, ecx); /* 0x1008D871: push ecx */
    PUSH32(esp, 0); /* 0x1008D872: push 0 */
    PUSH32(esp, esi); /* 0x1008D874: push esi */
    RECOMP_CALL(sub_10011533); /* 0x1008D875: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008D87A: add esp, 0xc */
    _flag_k = FK_ADD;
L_1008D87D:
    ebx = POP32_VAL(esp); /* 0x1008D87D: pop ebx */
L_1008D87E:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008D87E: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008D88B; /* 0x1008D882: je 0x1008d88b */
L_1008D884:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008D884: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008D887: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008D88B:
    eax = edi; /* 0x1008D88B: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1008D88D: pop edi */
    esi = POP32_VAL(esp); /* 0x1008D88E: pop esi */
    esp = ebp; /* 0x1008D88F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008D891: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D892: ret  */
L_1008D893:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008D893: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008D894: inc edx */
    _flag_k = FK_INC;
    /* test LO8(ebx), LO8(ebx) */ /* 0x1008D895: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D86D; /* 0x1008D897: je 0x1008d86d */
L_1008D899:
    /* test ecx, ecx */ /* 0x1008D899: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D87D; /* 0x1008D89B: je 0x1008d87d */
L_1008D89D:
    RECOMP_BACKEDGE();
    goto L_1008D840; /* 0x1008D89D: jmp 0x1008d840 */
L_1008D89F:
    MEM8(esi) = (uint8_t)(0); /* 0x1008D89F: mov byte ptr [esi], 0 */
    RECOMP_BACKEDGE();
    goto L_1008D87D; /* 0x1008D8A2: jmp 0x1008d87d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008D8A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D8A4u);

L_1008D8A4:
    PUSH32(esp, ebp); /* 0x1008D8A4: push ebp */
    ebp = esp; /* 0x1008D8A5: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008D8A7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008D8A9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008D8AC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D8AF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D8B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008BEF8); /* 0x1008D8B5: call 0x1008bef8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008D8BA: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008D8BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D8BE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D8BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D8BFu);

L_1008D8BF:
    PUSH32(esp, ebp); /* 0x1008D8BF: push ebp */
    ebp = esp; /* 0x1008D8C0: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008D8C2: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008D8C4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D8C7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D8CA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008D8D7); /* 0x1008D8CD: call 0x1008d8d7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008D8D2: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008D8D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008D8D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008D8D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008D8D7u);

L_1008D8D7:
    PUSH32(esp, ebp); /* 0x1008D8D7: push ebp */
    ebp = esp; /* 0x1008D8D8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1008D8DA: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x1008D8DD: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x1008D8E0: push ebx */
    PUSH32(esp, edi); /* 0x1008D8E1: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008D8E2: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x1008D8E5: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x10); /* 0x1008D8EA: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008D8ED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1008D8EF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DA7C; /* 0x1008D8F1: je 0x1008da7c */
L_1008D8F7:
    ecx = MEM32(ebp + (-0x14)); /* 0x1008D8F7: mov ecx, dword ptr [ebp - 0x14] */
    /* cmp MEM32(ecx + 0x8), edx */ /* 0x1008D8FA: cmp dword ptr [ecx + 8], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008D915; /* 0x1008D8FD: jne 0x1008d915 */
L_1008D8FF:
    PUSH32(esp, edi); /* 0x1008D8FF: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008D900: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008D903: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002E3AD); /* 0x1008D906: call 0x1002e3ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008D90B: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = eax; /* 0x1008D90E: mov edx, eax */
    goto L_1008DA7C; /* 0x1008D910: jmp 0x1008da7c */
L_1008D915:
    eax = MEM32(ebp + 0x8); /* 0x1008D915: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1008D918: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x1008D91B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D926; /* 0x1008D91D: je 0x1008d926 */
L_1008D91F:
    ebx = MEM32(ebp + 0xC); /* 0x1008D91F: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1008D922: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D940; /* 0x1008D924: jne 0x1008d940 */
L_1008D926:
    RECOMP_CALL(sub_1001177D); /* 0x1008D926: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008D92B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008D931: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    edx = 0x7FFFFFFFu; /* 0x1008D936: mov edx, 0x7fffffff */
    goto L_1008DA7C; /* 0x1008D93B: jmp 0x1008da7c */
L_1008D940:
    PUSH32(esp, esi); /* 0x1008D940: push esi */
L_1008D941:
    esi = (uint32_t)MEM8(eax); /* 0x1008D941: movzx esi, byte ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008D944: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1008D945: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = esi; /* 0x1008D948: mov dword ptr [ebp - 4], esi */
    eax = (uint32_t)MEM8(ebp + (-0x4)); /* 0x1008D94B: movzx eax, byte ptr [ebp - 4] */
    /* test MEM8(eax + ecx + 0x19), 4 */ /* 0x1008D94F: test byte ptr [eax + ecx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D9BF; /* 0x1008D954: je 0x1008d9bf */
L_1008D956:
    /* test edi, edi */ /* 0x1008D956: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D978; /* 0x1008D958: jne 0x1008d978 */
L_1008D95A:
    eax = (uint32_t)MEM8(ebx); /* 0x1008D95A: movzx eax, byte ptr [ebx] */
    MEM32(ebp + (-0x4)) = edx; /* 0x1008D95D: mov dword ptr [ebp - 4], edx */
    /* test MEM8(eax + ecx + 0x19), 4 */ /* 0x1008D960: test byte ptr [eax + ecx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DA7B; /* 0x1008D965: jne 0x1008da7b */
L_1008D96B:
    SET_LO8(eax, MEM8(ebx)); /* 0x1008D96B: mov al, byte ptr [ebx] */
    SET_LO16(esi, LO16(edx)); /* 0x1008D96D: mov si, dx */
    eax = (uint32_t)LO8(eax); /* 0x1008D970: movzx eax, al */
    goto L_1008DA58; /* 0x1008D973: jmp 0x1008da58 */
L_1008D978:
    eax = MEM32(ebp + (-0x8)); /* 0x1008D978: mov eax, dword ptr [ebp - 8] */
    SET_LO8(eax, MEM8(eax)); /* 0x1008D97B: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1008D97D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D986; /* 0x1008D97F: jne 0x1008d986 */
L_1008D981:
    MEM32(ebp + (-0x4)) = edx; /* 0x1008D981: mov dword ptr [ebp - 4], edx */
    goto L_1008D9D8; /* 0x1008D984: jmp 0x1008d9d8 */
L_1008D986:
    if (8u) _cf = (((esi) >> 24) & 1u); /* 0x1008D986: shl esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((esi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 8u; /* 0x1008D986: shl esi, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1008D989: movzx eax, al */
    _flag_a = (uint32_t)((LO16(esi) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(esi) | LO16(eax))) << 16;
    SET_LO16(esi, LO16(esi) | LO16(eax)); /* 0x1008D98C: or si, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1008D98F: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = (uint32_t)LO16(esi); /* 0x1008D992: movzx eax, si */
    SET_LO16(esi, LO16(eax)); /* 0x1008D995: mov si, ax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008D998: mov dword ptr [ebp - 4], eax */
    /* cmp LO16(esi), MEM16(ecx + 0xC) */ /* 0x1008D99B: cmp si, word ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0xC)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1008D9AD; /* 0x1008D99F: jb 0x1008d9ad */
L_1008D9A1:
    /* cmp LO16(esi), MEM16(ecx + 0xE) */ /* 0x1008D9A1: cmp si, word ptr [ecx + 0xe] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0xE)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1008D9AD; /* 0x1008D9A5: ja 0x1008d9ad */
L_1008D9A7:
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x10)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(esi, LO16(esi) + MEM16(ecx + 0x10)); /* 0x1008D9A7: add si, word ptr [ecx + 0x10] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_1008D9DC; /* 0x1008D9AB: jmp 0x1008d9dc */
L_1008D9AD:
    /* cmp LO16(esi), MEM16(ecx + 0x12) */ /* 0x1008D9AD: cmp si, word ptr [ecx + 0x12] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x12)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1008D9DC; /* 0x1008D9B1: jb 0x1008d9dc */
L_1008D9B3:
    /* cmp LO16(esi), MEM16(ecx + 0x14) */ /* 0x1008D9B3: cmp si, word ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x14)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1008D9DC; /* 0x1008D9B7: ja 0x1008d9dc */
L_1008D9B9:
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x16)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(esi, LO16(esi) + MEM16(ecx + 0x16)); /* 0x1008D9B9: add si, word ptr [ecx + 0x16] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_1008D9DC; /* 0x1008D9BD: jmp 0x1008d9dc */
L_1008D9BF:
    SET_LO16(esi, MEM16(ebp + (-0x4))); /* 0x1008D9BF: mov si, word ptr [ebp - 4] */
    eax = (uint32_t)LO16(esi); /* 0x1008D9C3: movzx eax, si */
    /* test MEM8(eax + ecx + 0x19), 0x10u */ /* 0x1008D9C6: test byte ptr [eax + ecx + 0x19], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D9DC; /* 0x1008D9CB: je 0x1008d9dc */
L_1008D9CD:
    eax = (uint32_t)MEM8(eax + ecx + 0x119); /* 0x1008D9CD: movzx eax, byte ptr [eax + ecx + 0x119] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008D9D5: mov dword ptr [ebp - 4], eax */
L_1008D9D8:
    SET_LO16(esi, MEM16(ebp + (-0x4))); /* 0x1008D9D8: mov si, word ptr [ebp - 4] */
L_1008D9DC:
    eax = (uint32_t)MEM8(ebx); /* 0x1008D9DC: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1008D9DF: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x1008D9E0: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + 0x10) = eax; /* 0x1008D9E3: mov dword ptr [ebp + 0x10], eax */
    eax = (uint32_t)LO8(eax); /* 0x1008D9E6: movzx eax, al */
    /* test MEM8(eax + ecx + 0x19), 4 */ /* 0x1008D9E9: test byte ptr [eax + ecx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DA39; /* 0x1008D9EE: je 0x1008da39 */
L_1008D9F0:
    /* test edi, edi */ /* 0x1008D9F0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008D9F9; /* 0x1008D9F2: jne 0x1008d9f9 */
L_1008D9F4:
    MEM32(ebp + 0x10) = edx; /* 0x1008D9F4: mov dword ptr [ebp + 0x10], edx */
    goto L_1008DA5B; /* 0x1008D9F7: jmp 0x1008da5b */
L_1008D9F9:
    SET_LO8(eax, MEM8(ebx)); /* 0x1008D9F9: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008D9FB: dec edi */
    _flag_k = FK_DEC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008D9FC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008D9F4; /* 0x1008D9FE: je 0x1008d9f4 */
L_1008DA00:
    if (8u) _cf = (((MEM32(ebp + (-0x4))) >> 24) & 1u); /* 0x1008DA00: shl dword ptr [ebp - 4], 8 */
    if (8u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) << 8u; /* 0x1008DA00: shl dword ptr [ebp - 4], 8 */
    eax = (uint32_t)LO8(eax); /* 0x1008DA04: movzx eax, al */
    _flag_a = (uint32_t)((MEM16(ebp + (-0x4)) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(ebp + (-0x4)) | LO16(eax))) << 16;
    MEM16(ebp + (-0x4)) = (uint16_t)(MEM16(ebp + (-0x4)) | LO16(eax)); /* 0x1008DA07: or word ptr [ebp - 4], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1008DA0B: inc ebx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x1008DA0C: mov eax, dword ptr [ebp - 4] */
    eax = (uint32_t)LO16(eax); /* 0x1008DA0F: movzx eax, ax */
    MEM32(ebp + 0x10) = eax; /* 0x1008DA12: mov dword ptr [ebp + 0x10], eax */
    /* cmp LO16(eax), MEM16(ecx + 0xC) */ /* 0x1008DA15: cmp ax, word ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0xC)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1008DA27; /* 0x1008DA19: jb 0x1008da27 */
L_1008DA1B:
    /* cmp LO16(eax), MEM16(ecx + 0xE) */ /* 0x1008DA1B: cmp ax, word ptr [ecx + 0xe] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0xE)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1008DA27; /* 0x1008DA1F: ja 0x1008da27 */
L_1008DA21:
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x10)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 0x10)); /* 0x1008DA21: add ax, word ptr [ecx + 0x10] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_1008DA5F; /* 0x1008DA25: jmp 0x1008da5f */
L_1008DA27:
    /* cmp LO16(eax), MEM16(ecx + 0x12) */ /* 0x1008DA27: cmp ax, word ptr [ecx + 0x12] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x12)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1008DA5F; /* 0x1008DA2B: jb 0x1008da5f */
L_1008DA2D:
    /* cmp LO16(eax), MEM16(ecx + 0x14) */ /* 0x1008DA2D: cmp ax, word ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x14)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1008DA5F; /* 0x1008DA31: ja 0x1008da5f */
L_1008DA33:
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x16)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 0x16)); /* 0x1008DA33: add ax, word ptr [ecx + 0x16] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_1008DA5F; /* 0x1008DA37: jmp 0x1008da5f */
L_1008DA39:
    SET_LO16(eax, MEM16(ebp + 0x10)); /* 0x1008DA39: mov ax, word ptr [ebp + 0x10] */
    edx = (uint32_t)LO16(eax); /* 0x1008DA3D: movzx edx, ax */
    PUSH32(esp, 0); /* 0x1008DA40: push 0 */
    MEM32(ebp + 0x10) = edx; /* 0x1008DA42: mov dword ptr [ebp + 0x10], edx */
    /* test MEM8(edx + ecx + 0x19), 0x10u */ /* 0x1008DA45: test byte ptr [edx + ecx + 0x19], 0x10 */
    _flag_a = (uint32_t)(MEM8(edx + ecx + 0x19)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = POP32_VAL(esp); /* 0x1008DA4A: pop edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DA5F; /* 0x1008DA4B: je 0x1008da5f */
L_1008DA4D:
    eax = MEM32(ebp + 0x10); /* 0x1008DA4D: mov eax, dword ptr [ebp + 0x10] */
    eax = (uint32_t)MEM8(eax + ecx + 0x119); /* 0x1008DA50: movzx eax, byte ptr [eax + ecx + 0x119] */
L_1008DA58:
    MEM32(ebp + 0x10) = eax; /* 0x1008DA58: mov dword ptr [ebp + 0x10], eax */
L_1008DA5B:
    SET_LO16(eax, MEM16(ebp + 0x10)); /* 0x1008DA5B: mov ax, word ptr [ebp + 0x10] */
L_1008DA5F:
    /* cmp LO16(eax), LO16(esi) */ /* 0x1008DA5F: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008DA75; /* 0x1008DA62: jne 0x1008da75 */
L_1008DA64:
    /* test LO16(esi), LO16(esi) */ /* 0x1008DA64: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DA7B; /* 0x1008DA67: je 0x1008da7b */
L_1008DA69:
    eax = MEM32(ebp + (-0x8)); /* 0x1008DA69: mov eax, dword ptr [ebp - 8] */
    /* test edi, edi */ /* 0x1008DA6C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DA7B; /* 0x1008DA6E: je 0x1008da7b */
L_1008DA70:
    RECOMP_BACKEDGE();
    goto L_1008D941; /* 0x1008DA70: jmp 0x1008d941 */
L_1008DA75:
    { uint32_t _sa = edx, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1008DA75: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    edx = edx & 2; /* 0x1008DA77: and edx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1008DA7A: dec edx */
    _flag_k = FK_DEC;
L_1008DA7B:
    esi = POP32_VAL(esp); /* 0x1008DA7B: pop esi */
L_1008DA7C:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1008DA7C: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x1008DA80: pop edi */
    ebx = POP32_VAL(esp); /* 0x1008DA81: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008DA8B; /* 0x1008DA82: je 0x1008da8b */
L_1008DA84:
    ecx = MEM32(ebp + (-0x10)); /* 0x1008DA84: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008DA87: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008DA8B:
    eax = edx; /* 0x1008DA8B: mov eax, edx */
    esp = ebp; /* 0x1008DA8D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008DA8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008DA90: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008DA91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008DA91u);

L_1008DA91:
    PUSH32(esp, ebp); /* 0x1008DA91: push ebp */
    ebp = esp; /* 0x1008DA92: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008DA94: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008DA96: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008DA99: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008DA9C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008DAA9); /* 0x1008DA9F: call 0x1008daa9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008DAA4: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008DAA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008DAA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008DAA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008DAA9u);

L_1008DAA9:
    PUSH32(esp, ebp); /* 0x1008DAA9: push ebp */
    ebp = esp; /* 0x1008DAAA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008DAAC: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1008DAAF: push ebx */
    PUSH32(esp, esi); /* 0x1008DAB0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008DAB1: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x1008DAB4: lea ecx, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x1008DAB7: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008DAB8: push dword ptr [ebp + 0x14] */
    MEM32(ebp + 0x8) = esi; /* 0x1008DABB: mov dword ptr [ebp + 8], esi */
    RECOMP_CALL(sub_1000F764); /* 0x1008DABE: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1008DAC3: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008DAC6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x1008DAC8: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008DAE0; /* 0x1008DACB: jne 0x1008dae0 */
L_1008DACD:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008DACD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008DAD0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1008DAD3: push esi */
    RECOMP_CALL(sub_10034960); /* 0x1008DAD4: call 0x10034960 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008DAD9: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1008DADC: mov ebx, eax */
    goto L_1008DB53; /* 0x1008DADE: jmp 0x1008db53 */
L_1008DAE0:
    edi = MEM32(ebp + 0x10); /* 0x1008DAE0: mov edi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1008DAE3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DAFD; /* 0x1008DAE5: jne 0x1008dafd */
L_1008DAE7:
    /* test edi, edi */ /* 0x1008DAE7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DAFD; /* 0x1008DAE9: je 0x1008dafd */
L_1008DAEB:
    RECOMP_CALL(sub_1001177D); /* 0x1008DAEB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008DAF0: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008DAF6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008DB53; /* 0x1008DAFB: jmp 0x1008db53 */
L_1008DAFD:
    ecx = MEM32(ebp + 0xC); /* 0x1008DAFD: mov ecx, dword ptr [ebp + 0xc] */
    edx = ecx; /* 0x1008DB00: mov edx, ecx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x1008DB02: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x1008DB02: shr edx, 8 */
    /* test LO8(edx), LO8(edx) */ /* 0x1008DB05: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DB4C; /* 0x1008DB07: je 0x1008db4c */
L_1008DB09:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1008DB09: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DB39; /* 0x1008DB0B: jne 0x1008db39 */
L_1008DB0D:
    RECOMP_CALL(sub_1001177D); /* 0x1008DB0D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    SET_LO8(edx, 0x20u); /* 0x1008DB12: mov dl, 0x20 */
    SET_LO8(ecx, LO8(edx)); /* 0x1008DB14: mov cl, dl */
    MEM32(eax) = 0x16u; /* 0x1008DB16: mov dword ptr [eax], 0x16 */
    goto L_1008DB39; /* 0x1008DB1C: jmp 0x1008db39 */
L_1008DB1E:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1008DB1E: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008DB50; /* 0x1008DB20: je 0x1008db50 */
L_1008DB22:
    eax = edi + (-0x1); /* 0x1008DB22: lea eax, [edi - 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x1008DB25: sub edi, 2 */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1008DB28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DB3F; /* 0x1008DB2A: je 0x1008db3f */
L_1008DB2C:
    /* cmp MEM8(esi + 0x1), LO8(ebx) */ /* 0x1008DB2C: cmp byte ptr [esi + 1], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008DB3F; /* 0x1008DB2F: je 0x1008db3f */
L_1008DB31:
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x1008DB31: mov byte ptr [esi], dl */
    MEM8(esi + 0x1) = (uint8_t)(LO8(ecx)); /* 0x1008DB33: mov byte ptr [esi + 1], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1008DB36: add esi, 2 */
    _flag_k = FK_ADD;
L_1008DB39:
    /* test edi, edi */ /* 0x1008DB39: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DB50; /* 0x1008DB3B: je 0x1008db50 */
L_1008DB3D:
    RECOMP_BACKEDGE();
    goto L_1008DB1E; /* 0x1008DB3D: jmp 0x1008db1e */
L_1008DB3F:
    MEM8(esi) = (uint8_t)(0x20u); /* 0x1008DB3F: mov byte ptr [esi], 0x20 */
    goto L_1008DB50; /* 0x1008DB42: jmp 0x1008db50 */
L_1008DB44:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008DB44: dec edi */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1008DB45: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008DB50; /* 0x1008DB47: je 0x1008db50 */
L_1008DB49:
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1008DB49: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008DB4B: inc esi */
    _flag_k = FK_INC;
L_1008DB4C:
    /* test edi, edi */ /* 0x1008DB4C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DB44; /* 0x1008DB4E: jne 0x1008db44 */
L_1008DB50:
    ebx = MEM32(ebp + 0x8); /* 0x1008DB50: mov ebx, dword ptr [ebp + 8] */
L_1008DB53:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008DB53: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008DB60; /* 0x1008DB57: je 0x1008db60 */
L_1008DB59:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008DB59: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008DB5C: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008DB60:
    edi = POP32_VAL(esp); /* 0x1008DB60: pop edi */
    esi = POP32_VAL(esp); /* 0x1008DB61: pop esi */
    eax = ebx; /* 0x1008DB62: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1008DB64: pop ebx */
    esp = ebp; /* 0x1008DB65: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008DB67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008DB68: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008DB69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008DB69u);

L_1008DB69:
    PUSH32(esp, ebp); /* 0x1008DB69: push ebp */
    ebp = esp; /* 0x1008DB6A: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008DB6C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008DB6E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008DB71: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008DB74: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008DB77: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008C0C7); /* 0x1008DB7A: call 0x1008c0c7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008DB7F: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008DB82: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008DB83: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008DB84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008DB84u);

L_1008DB84:
    PUSH32(esp, ebp); /* 0x1008DB84: push ebp */
    ebp = esp; /* 0x1008DB85: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008DB87: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008DB89: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008DB8C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008DB8F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008DB9C); /* 0x1008DB92: call 0x1008db9c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008DB97: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008DB9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008DB9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008DB9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008DB9Cu);

L_1008DB9C:
    PUSH32(esp, ebp); /* 0x1008DB9C: push ebp */
    ebp = esp; /* 0x1008DB9D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008DB9F: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1008DBA2: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1008DBA3: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1008DBA6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DBB2; /* 0x1008DBA8: jne 0x1008dbb2 */
L_1008DBAA:
    eax = MEM32(ebp + 0x8); /* 0x1008DBAA: mov eax, dword ptr [ebp + 8] */
    goto L_1008DCA0; /* 0x1008DBAD: jmp 0x1008dca0 */
L_1008DBB2:
    PUSH32(esp, esi); /* 0x1008DBB2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008DBB3: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1008DBB6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DBD1; /* 0x1008DBB8: jne 0x1008dbd1 */
L_1008DBBA:
    RECOMP_CALL(sub_1001177D); /* 0x1008DBBA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008DBBF: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008DBC5: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008DBCA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008DC9F; /* 0x1008DBCC: jmp 0x1008dc9f */
L_1008DBD1:
    PUSH32(esp, edi); /* 0x1008DBD1: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1008DBD2: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1008DBD5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DBF0; /* 0x1008DBD7: jne 0x1008dbf0 */
L_1008DBD9:
    RECOMP_CALL(sub_1001177D); /* 0x1008DBD9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008DBDE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008DBE4: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008DBE9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008DC9E; /* 0x1008DBEB: jmp 0x1008dc9e */
L_1008DBF0:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008DBF0: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x14); /* 0x1008DBF3: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x1008DBF6: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1008DBFB: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008DBFE: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008DC13; /* 0x1008DC02: jne 0x1008dc13 */
L_1008DC04:
    PUSH32(esp, ebx); /* 0x1008DC04: push ebx */
    PUSH32(esp, edi); /* 0x1008DC05: push edi */
    PUSH32(esp, esi); /* 0x1008DC06: push esi */
    RECOMP_CALL(sub_100347A5); /* 0x1008DC07: call 0x100347a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008DC0C: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1008DC0F: mov ebx, eax */
    goto L_1008DC8F; /* 0x1008DC11: jmp 0x1008dc8f */
L_1008DC13:
    ebx = esi; /* 0x1008DC13: mov ebx, esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1008DC15: mov dword ptr [ebp - 4], ebx */
L_1008DC18:
    SET_LO8(eax, MEM8(esi)); /* 0x1008DC18: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008DC1A: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008DC1B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DC18; /* 0x1008DC1D: jne 0x1008dc18 */
L_1008DC1F:
    eax = ebp + (-0x14); /* 0x1008DC1F: lea eax, [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1008DC22: dec esi */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x1008DC23: push eax */
    PUSH32(esp, esi); /* 0x1008DC24: push esi */
    PUSH32(esp, ebx); /* 0x1008DC25: push ebx */
    RECOMP_CALL(sub_1008ABA2); /* 0x1008DC26: call 0x1008aba2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008DC2B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008DC2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DC33; /* 0x1008DC30: je 0x1008dc33 */
L_1008DC32:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1008DC32: dec esi */
    _flag_k = FK_DEC;
L_1008DC33:
    ecx = MEM32(ebp + 0x10); /* 0x1008DC33: mov ecx, dword ptr [ebp + 0x10] */
L_1008DC36:
    SET_LO8(edx, MEM8(edi)); /* 0x1008DC36: mov dl, byte ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008DC38: dec ecx */
    _flag_k = FK_DEC;
    ebx = MEM32(ebp + (-0x10)); /* 0x1008DC39: mov ebx, dword ptr [ebp - 0x10] */
    eax = (uint32_t)LO8(edx); /* 0x1008DC3C: movzx eax, dl */
    /* test MEM8(eax + ebx + 0x19), 4 */ /* 0x1008DC3F: test byte ptr [eax + ebx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = MEM32(ebp + (-0x4)); /* 0x1008DC44: mov ebx, dword ptr [ebp - 4] */
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x1008DC47: mov byte ptr [esi], dl */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DC80; /* 0x1008DC49: je 0x1008dc80 */
L_1008DC4B:
    SET_LO8(eax, MEM8(edi + 0x1)); /* 0x1008DC4B: mov al, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1008DC4E: add edi, 2 */
    _flag_k = FK_ADD;
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1008DC51: mov byte ptr [esi + 1], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1008DC54: add esi, 2 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x1008DC57: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DC86; /* 0x1008DC59: jne 0x1008dc86 */
L_1008DC5B:
    MEM8(esi + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x1008DC5B: mov byte ptr [esi - 2], al */
L_1008DC5E:
    /* cmp esi, ebx */ /* 0x1008DC5E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008DC8C; /* 0x1008DC60: je 0x1008dc8c */
L_1008DC62:
    eax = ebp + (-0x14); /* 0x1008DC62: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1008DC65: push eax */
    eax = esi; /* 0x1008DC66: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1008DC68: sub eax, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1008DC6A: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x1008DC6B: push eax */
    PUSH32(esp, ebx); /* 0x1008DC6C: push ebx */
    RECOMP_CALL(sub_1008CB5F); /* 0x1008DC6D: call 0x1008cb5f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008DC72: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x1008DC75: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008DC8C; /* 0x1008DC78: jne 0x1008dc8c */
L_1008DC7A:
    MEM8(esi + (-0x1)) = (uint8_t)(0); /* 0x1008DC7A: mov byte ptr [esi - 1], 0 */
    goto L_1008DC8F; /* 0x1008DC7E: jmp 0x1008dc8f */
L_1008DC80:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008DC80: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008DC81: inc edi */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x1008DC82: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DC5E; /* 0x1008DC84: je 0x1008dc5e */
L_1008DC86:
    /* test ecx, ecx */ /* 0x1008DC86: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DC5E; /* 0x1008DC88: je 0x1008dc5e */
L_1008DC8A:
    RECOMP_BACKEDGE();
    goto L_1008DC36; /* 0x1008DC8A: jmp 0x1008dc36 */
L_1008DC8C:
    MEM8(esi) = (uint8_t)(0); /* 0x1008DC8C: mov byte ptr [esi], 0 */
L_1008DC8F:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008DC8F: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008DC9C; /* 0x1008DC93: je 0x1008dc9c */
L_1008DC95:
    eax = MEM32(ebp + (-0xC)); /* 0x1008DC95: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1008DC98: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008DC9C:
    eax = ebx; /* 0x1008DC9C: mov eax, ebx */
L_1008DC9E:
    edi = POP32_VAL(esp); /* 0x1008DC9E: pop edi */
L_1008DC9F:
    esi = POP32_VAL(esp); /* 0x1008DC9F: pop esi */
L_1008DCA0:
    ebx = POP32_VAL(esp); /* 0x1008DCA0: pop ebx */
    esp = ebp; /* 0x1008DCA1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008DCA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008DCA4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008DCA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008DCA5u);

L_1008DCA5:
    PUSH32(esp, ebp); /* 0x1008DCA5: push ebp */
    ebp = esp; /* 0x1008DCA6: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008DCA8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008DCAA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008DCAD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008DCB0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008DCB3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008C2D8); /* 0x1008DCB6: call 0x1008c2d8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008DCBB: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008DCBE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008DCBF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008DCC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008DCC0u);

L_1008DCC0:
    PUSH32(esp, ebp); /* 0x1008DCC0: push ebp */
    ebp = esp; /* 0x1008DCC1: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008DCC3: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008DCC5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008DCC8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008DCD5); /* 0x1008DCCB: call 0x1008dcd5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008DCD0: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008DCD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008DCD4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008DCD5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008DCD5u);

L_1008DCD5:
    PUSH32(esp, ebp); /* 0x1008DCD5: push ebp */
    ebp = esp; /* 0x1008DCD6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008DCD8: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1008DCDB: lea ecx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1008DCDE: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008DCDF: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1008DCE2: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1008DCE7: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1008DCEA: mov ecx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1008DCED: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DD09; /* 0x1008DCEF: jne 0x1008dd09 */
L_1008DCF1:
    /* test ecx, ecx */ /* 0x1008DCF1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DD09; /* 0x1008DCF3: je 0x1008dd09 */
L_1008DCF5:
    RECOMP_CALL(sub_1001177D); /* 0x1008DCF5: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008DCFA: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008DD00: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008DD05: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008DD38; /* 0x1008DD07: jmp 0x1008dd38 */
L_1008DD09:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008DD09: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1008DD0B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DD38; /* 0x1008DD0D: je 0x1008dd38 */
L_1008DD0F:
    PUSH32(esp, edi); /* 0x1008DD0F: push edi */
    edi = MEM32(ebp + (-0xC)); /* 0x1008DD10: mov edi, dword ptr [ebp - 0xc] */
L_1008DD13:
    SET_LO8(eax, MEM8(edx)); /* 0x1008DD13: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008DD15: dec ecx */
    _flag_k = FK_DEC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008DD16: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DD37; /* 0x1008DD18: je 0x1008dd37 */
L_1008DD1A:
    eax = (uint32_t)LO8(eax); /* 0x1008DD1A: movzx eax, al */
    /* test MEM8(eax + edi + 0x19), 4 */ /* 0x1008DD1D: test byte ptr [eax + edi + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edi + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DD31; /* 0x1008DD22: je 0x1008dd31 */
L_1008DD24:
    eax = ecx; /* 0x1008DD24: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008DD26: dec ecx */
    _flag_k = FK_DEC;
    /* test eax, eax */ /* 0x1008DD27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DD37; /* 0x1008DD29: je 0x1008dd37 */
L_1008DD2B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008DD2B: inc edx */
    _flag_k = FK_INC;
    /* cmp MEM8(edx), 0 */ /* 0x1008DD2C: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008DD37; /* 0x1008DD2F: je 0x1008dd37 */
L_1008DD31:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008DD31: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008DD32: inc edx */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x1008DD33: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DD13; /* 0x1008DD35: jne 0x1008dd13 */
L_1008DD37:
    edi = POP32_VAL(esp); /* 0x1008DD37: pop edi */
L_1008DD38:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008DD38: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008DD45; /* 0x1008DD3C: je 0x1008dd45 */
L_1008DD3E:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008DD3E: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008DD41: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008DD45:
    eax = esi; /* 0x1008DD45: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008DD47: pop esi */
    esp = ebp; /* 0x1008DD48: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008DD4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008DD4B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008DD4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008DD4Cu);

L_1008DD4C:
    PUSH32(esp, ebp); /* 0x1008DD4C: push ebp */
    ebp = esp; /* 0x1008DD4D: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008DD4F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008DD51: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008DD54: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008DD57: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008DD64); /* 0x1008DD5A: call 0x1008dd64 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008DD5F: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008DD62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008DD63: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008DD64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008DD64u);

L_1008DD64:
    PUSH32(esp, ebp); /* 0x1008DD64: push ebp */
    ebp = esp; /* 0x1008DD65: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008DD67: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1008DD6A: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x1008DD6D: push ebx */
    PUSH32(esp, esi); /* 0x1008DD6E: push esi */
    PUSH32(esp, edi); /* 0x1008DD6F: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008DD70: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x1008DD73: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x10); /* 0x1008DD78: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008DD7B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1008DD7D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DE3D; /* 0x1008DD7F: je 0x1008de3d */
L_1008DD85:
    eax = MEM32(ebp + (-0xC)); /* 0x1008DD85: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x8), edx */ /* 0x1008DD88: cmp dword ptr [eax + 8], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008DDA3; /* 0x1008DD8B: jne 0x1008dda3 */
L_1008DD8D:
    PUSH32(esp, edi); /* 0x1008DD8D: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008DD8E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008DD91: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001825D); /* 0x1008DD94: call 0x1001825d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008DD99: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = eax; /* 0x1008DD9C: mov edx, eax */
    goto L_1008DE3D; /* 0x1008DD9E: jmp 0x1008de3d */
L_1008DDA3:
    esi = MEM32(ebp + 0x8); /* 0x1008DDA3: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1008DDA6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DDB4; /* 0x1008DDA8: je 0x1008ddb4 */
L_1008DDAA:
    ebx = MEM32(ebp + 0xC); /* 0x1008DDAA: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = ebx; /* 0x1008DDAD: mov dword ptr [ebp + 0x10], ebx */
    /* test ebx, ebx */ /* 0x1008DDB0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DDCB; /* 0x1008DDB2: jne 0x1008ddcb */
L_1008DDB4:
    RECOMP_CALL(sub_1001177D); /* 0x1008DDB4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008DDB9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008DDBF: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    edx = 0x7FFFFFFFu; /* 0x1008DDC4: mov edx, 0x7fffffff */
    goto L_1008DE3D; /* 0x1008DDC9: jmp 0x1008de3d */
L_1008DDCB:
    ecx = (uint32_t)MEM8(esi); /* 0x1008DDCB: movzx ecx, byte ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008DDCE: dec edi */
    _flag_k = FK_DEC;
    ebx = MEM32(ebp + (-0xC)); /* 0x1008DDCF: mov ebx, dword ptr [ebp - 0xc] */
    eax = ecx; /* 0x1008DDD2: mov eax, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008DDD4: inc esi */
    _flag_k = FK_INC;
    /* test MEM8(eax + ebx + 0x19), 4 */ /* 0x1008DDD5: test byte ptr [eax + ebx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = MEM32(ebp + 0x10); /* 0x1008DDDA: mov ebx, dword ptr [ebp + 0x10] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DDF6; /* 0x1008DDDD: je 0x1008ddf6 */
L_1008DDDF:
    SET_LO8(eax, MEM8(esi)); /* 0x1008DDDF: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1008DDE1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DDE9; /* 0x1008DDE3: jne 0x1008dde9 */
L_1008DDE5:
    ecx = edx; /* 0x1008DDE5: mov ecx, edx */
    goto L_1008DDF6; /* 0x1008DDE7: jmp 0x1008ddf6 */
L_1008DDE9:
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x1008DDE9: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x1008DDE9: shl ecx, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1008DDEC: movzx eax, al */
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x1008DDEF: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008DDF2: inc esi */
    _flag_k = FK_INC;
    ecx = (uint32_t)LO16(ecx); /* 0x1008DDF3: movzx ecx, cx */
L_1008DDF6:
    ebx = (uint32_t)MEM8(ebx); /* 0x1008DDF6: movzx ebx, byte ptr [ebx] */
    edx = MEM32(ebp + (-0xC)); /* 0x1008DDF9: mov edx, dword ptr [ebp - 0xc] */
    eax = ebx; /* 0x1008DDFC: mov eax, ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x1008DDFE: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    PUSH32(esp, 0); /* 0x1008DE01: push 0 */
    /* test MEM8(eax + edx + 0x19), 4 */ /* 0x1008DE03: test byte ptr [eax + edx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = POP32_VAL(esp); /* 0x1008DE08: pop edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DE27; /* 0x1008DE09: je 0x1008de27 */
L_1008DE0B:
    eax = MEM32(ebp + 0x10); /* 0x1008DE0B: mov eax, dword ptr [ebp + 0x10] */
    SET_LO8(eax, MEM8(eax)); /* 0x1008DE0E: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1008DE10: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DE18; /* 0x1008DE12: jne 0x1008de18 */
L_1008DE14:
    ebx = edx; /* 0x1008DE14: mov ebx, edx */
    goto L_1008DE27; /* 0x1008DE16: jmp 0x1008de27 */
L_1008DE18:
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x1008DE18: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x1008DE18: shl ebx, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1008DE1B: movzx eax, al */
    _flag_a = (uint32_t)((LO16(ebx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ebx) | LO16(eax))) << 16;
    SET_LO16(ebx, LO16(ebx) | LO16(eax)); /* 0x1008DE1E: or bx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x1008DE21: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    ebx = (uint32_t)LO16(ebx); /* 0x1008DE24: movzx ebx, bx */
L_1008DE27:
    /* cmp LO16(ebx), LO16(ecx) */ /* 0x1008DE27: cmp bx, cx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008DE37; /* 0x1008DE2A: jne 0x1008de37 */
L_1008DE2C:
    /* test LO16(ecx), LO16(ecx) */ /* 0x1008DE2C: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DE3D; /* 0x1008DE2F: je 0x1008de3d */
L_1008DE31:
    /* test edi, edi */ /* 0x1008DE31: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DE3D; /* 0x1008DE33: je 0x1008de3d */
L_1008DE35:
    RECOMP_BACKEDGE();
    goto L_1008DDCB; /* 0x1008DE35: jmp 0x1008ddcb */
L_1008DE37:
    { uint32_t _sa = edx, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1008DE37: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    edx = edx & 2; /* 0x1008DE39: and edx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1008DE3C: dec edx */
    _flag_k = FK_DEC;
L_1008DE3D:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008DE3D: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x1008DE41: pop edi */
    esi = POP32_VAL(esp); /* 0x1008DE42: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008DE43: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008DE4D; /* 0x1008DE44: je 0x1008de4d */
L_1008DE46:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008DE46: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008DE49: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008DE4D:
    eax = edx; /* 0x1008DE4D: mov eax, edx */
    esp = ebp; /* 0x1008DE4F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008DE51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008DE52: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008DE53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008DE53u);

L_1008DE53:
    PUSH32(esp, ebp); /* 0x1008DE53: push ebp */
    ebp = esp; /* 0x1008DE54: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008DE56: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008DE58: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008DE5B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008DE5E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008DE6B); /* 0x1008DE61: call 0x1008de6b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008DE66: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008DE69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008DE6A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008DE6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008DE6Bu);

L_1008DE6B:
    PUSH32(esp, ebp); /* 0x1008DE6B: push ebp */
    ebp = esp; /* 0x1008DE6C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008DE6E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1008DE71: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x1008DE74: push ebx */
    PUSH32(esp, edi); /* 0x1008DE75: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008DE76: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x1008DE79: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x10); /* 0x1008DE7E: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1008DE81: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DE8C; /* 0x1008DE83: jne 0x1008de8c */
L_1008DE85:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1008DE85: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008DF40; /* 0x1008DE87: jmp 0x1008df40 */
L_1008DE8C:
    ecx = MEM32(ebp + 0x8); /* 0x1008DE8C: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1008DE8F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DE99; /* 0x1008DE91: je 0x1008de99 */
L_1008DE93:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1008DE93: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008DEB3; /* 0x1008DE97: jne 0x1008deb3 */
L_1008DE99:
    RECOMP_CALL(sub_1001177D); /* 0x1008DE99: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008DE9E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008DEA4: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    edi = 0x7FFFFFFFu; /* 0x1008DEA9: mov edi, 0x7fffffff */
    goto L_1008DF40; /* 0x1008DEAE: jmp 0x1008df40 */
L_1008DEB3:
    edi = 0x7FFFFFFFu; /* 0x1008DEB3: mov edi, 0x7fffffff */
    /* cmp ebx, edi */ /* 0x1008DEB8: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008DECE; /* 0x1008DEBA: jbe 0x1008dece */
L_1008DEBC:
    RECOMP_CALL(sub_1001177D); /* 0x1008DEBC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008DEC1: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008DEC7: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008DF40; /* 0x1008DECC: jmp 0x1008df40 */
L_1008DECE:
    eax = MEM32(ebp + (-0xC)); /* 0x1008DECE: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008DED1: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008DEEB; /* 0x1008DED5: jne 0x1008deeb */
L_1008DED7:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008DED7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1008DEDA: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008DEDB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1008DEDE: push ecx */
    RECOMP_CALL(sub_1009B8A5); /* 0x1008DEDF: call 0x1009b8a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008DEE4: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1008DEE7: mov edi, eax */
    goto L_1008DF40; /* 0x1008DEE9: jmp 0x1008df40 */
L_1008DEEB:
    PUSH32(esp, esi); /* 0x1008DEEB: push esi */
    eax = ebp + (-0x10); /* 0x1008DEEC: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008DEEF: push eax */
    PUSH32(esp, ebx); /* 0x1008DEF0: push ebx */
    PUSH32(esp, ecx); /* 0x1008DEF1: push ecx */
    RECOMP_CALL(sub_1008D66F); /* 0x1008DEF2: call 0x1008d66f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1008DEF7: mov esi, eax */
    eax = ebp + (-0x10); /* 0x1008DEF9: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008DEFC: push eax */
    PUSH32(esp, ebx); /* 0x1008DEFD: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008DEFE: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1008D66F); /* 0x1008DF01: call 0x1008d66f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1008DF06: mov ecx, dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x1008DF09: push dword ptr [ecx + 4] */
    PUSH32(esp, eax); /* 0x1008DF0C: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008DF0D: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x10); /* 0x1008DF10: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1008DF13: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008DF14: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1000u); /* 0x1008DF17: push 0x1000 */
    PUSH32(esp, MEM32(ecx + 0x21C)); /* 0x1008DF1C: push dword ptr [ecx + 0x21c] */
    PUSH32(esp, eax); /* 0x1008DF22: push eax */
    RECOMP_CALL(sub_10017B92); /* 0x1008DF23: call 0x10017b92 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x38u; /* 0x1008DF28: add esp, 0x38 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1008DF2B: pop esi */
    /* test eax, eax */ /* 0x1008DF2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DF3D; /* 0x1008DF2E: jne 0x1008df3d */
L_1008DF30:
    RECOMP_CALL(sub_1001177D); /* 0x1008DF30: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008DF35: mov dword ptr [eax], 0x16 */
    goto L_1008DF40; /* 0x1008DF3B: jmp 0x1008df40 */
L_1008DF3D:
    edi = eax + (-0x2); /* 0x1008DF3D: lea edi, [eax - 2] */
L_1008DF40:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008DF40: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008DF4D; /* 0x1008DF44: je 0x1008df4d */
L_1008DF46:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008DF46: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008DF49: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008DF4D:
    eax = edi; /* 0x1008DF4D: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1008DF4F: pop edi */
    ebx = POP32_VAL(esp); /* 0x1008DF50: pop ebx */
    esp = ebp; /* 0x1008DF51: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008DF53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008DF54: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008DF55(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008DF55u);

L_1008DF55:
    PUSH32(esp, ebp); /* 0x1008DF55: push ebp */
    ebp = esp; /* 0x1008DF56: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008DF58: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008DF5A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008DF5D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008DF60: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008DF6D); /* 0x1008DF63: call 0x1008df6d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008DF68: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008DF6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008DF6C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008DF6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008DF6Du);

L_1008DF6D:
    PUSH32(esp, ebp); /* 0x1008DF6D: push ebp */
    ebp = esp; /* 0x1008DF6E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008DF70: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1008DF73: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008DF74: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x1008DF77: lea ecx, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x1008DF7A: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008DF7B: push dword ptr [ebp + 0x14] */
    edi = esi; /* 0x1008DF7E: mov edi, esi */
    MEM32(ebp + 0x8) = edi; /* 0x1008DF80: mov dword ptr [ebp + 8], edi */
    RECOMP_CALL(sub_1000F764); /* 0x1008DF83: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x1008DF88: mov ecx, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1008DF8B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DF93; /* 0x1008DF8D: jne 0x1008df93 */
L_1008DF8F:
    /* test ecx, ecx */ /* 0x1008DF8F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DF9E; /* 0x1008DF91: jne 0x1008df9e */
L_1008DF93:
    edx = MEM32(ebp + 0xC); /* 0x1008DF93: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1008DF96: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008DFB2; /* 0x1008DF98: jne 0x1008dfb2 */
L_1008DF9A:
    /* test ecx, ecx */ /* 0x1008DF9A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DFB2; /* 0x1008DF9C: je 0x1008dfb2 */
L_1008DF9E:
    RECOMP_CALL(sub_1001177D); /* 0x1008DF9E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008DFA3: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008DFA9: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1008DFAE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008E008; /* 0x1008DFB0: jmp 0x1008e008 */
L_1008DFB2:
    eax = MEM32(ebp + (-0xC)); /* 0x1008DFB2: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008DFB5: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008DFCA; /* 0x1008DFB9: jne 0x1008dfca */
L_1008DFBB:
    PUSH32(esp, ecx); /* 0x1008DFBB: push ecx */
    PUSH32(esp, edx); /* 0x1008DFBC: push edx */
    PUSH32(esp, esi); /* 0x1008DFBD: push esi */
    RECOMP_CALL(sub_100183C4); /* 0x1008DFBE: call 0x100183c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008DFC3: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1008DFC6: mov edi, eax */
    goto L_1008E008; /* 0x1008DFC8: jmp 0x1008e008 */
L_1008DFCA:
    /* test ecx, ecx */ /* 0x1008DFCA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E008; /* 0x1008DFCC: je 0x1008e008 */
L_1008DFCE:
    PUSH32(esp, ebx); /* 0x1008DFCE: push ebx */
L_1008DFCF:
    SET_LO8(ebx, MEM8(edx)); /* 0x1008DFCF: mov bl, byte ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1008DFD1: dec ecx */
    _flag_k = FK_DEC;
    edi = MEM32(ebp + (-0xC)); /* 0x1008DFD2: mov edi, dword ptr [ebp - 0xc] */
    eax = (uint32_t)LO8(ebx); /* 0x1008DFD5: movzx eax, bl */
    /* test MEM8(eax + edi + 0x19), 4 */ /* 0x1008DFD8: test byte ptr [eax + edi + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edi + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + 0x8); /* 0x1008DFDD: mov edi, dword ptr [ebp + 8] */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1008DFE0: mov byte ptr [esi], bl */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E01D; /* 0x1008DFE2: je 0x1008e01d */
L_1008DFE4:
    SET_LO8(eax, MEM8(edx + 0x1)); /* 0x1008DFE4: mov al, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1008DFE7: add edx, 2 */
    _flag_k = FK_ADD;
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1008DFEA: mov byte ptr [esi + 1], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1008DFED: add esi, 2 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x1008DFF0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E023; /* 0x1008DFF2: jne 0x1008e023 */
L_1008DFF4:
    MEM8(esi + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x1008DFF4: mov byte ptr [esi - 2], al */
L_1008DFF7:
    /* test ecx, ecx */ /* 0x1008DFF7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E007; /* 0x1008DFF9: je 0x1008e007 */
L_1008DFFB:
    PUSH32(esp, ecx); /* 0x1008DFFB: push ecx */
    PUSH32(esp, 0); /* 0x1008DFFC: push 0 */
    PUSH32(esp, esi); /* 0x1008DFFE: push esi */
    RECOMP_CALL(sub_10011533); /* 0x1008DFFF: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008E004: add esp, 0xc */
    _flag_k = FK_ADD;
L_1008E007:
    ebx = POP32_VAL(esp); /* 0x1008E007: pop ebx */
L_1008E008:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008E008: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008E015; /* 0x1008E00C: je 0x1008e015 */
L_1008E00E:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008E00E: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008E011: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008E015:
    eax = edi; /* 0x1008E015: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1008E017: pop edi */
    esi = POP32_VAL(esp); /* 0x1008E018: pop esi */
    esp = ebp; /* 0x1008E019: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008E01B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E01C: ret  */
L_1008E01D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008E01D: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008E01E: inc edx */
    _flag_k = FK_INC;
    /* test LO8(ebx), LO8(ebx) */ /* 0x1008E01F: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008DFF7; /* 0x1008E021: je 0x1008dff7 */
L_1008E023:
    /* test ecx, ecx */ /* 0x1008E023: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E007; /* 0x1008E025: je 0x1008e007 */
L_1008E027:
    RECOMP_BACKEDGE();
    goto L_1008DFCF; /* 0x1008E027: jmp 0x1008dfcf */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008E029(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008E029u);

L_1008E029:
    PUSH32(esp, ebp); /* 0x1008E029: push ebp */
    ebp = esp; /* 0x1008E02A: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008E02C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008E02E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008E031: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008E034: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008E037: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008C506); /* 0x1008E03A: call 0x1008c506 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008E03F: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008E042: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E043: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008E044(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008E044u);

L_1008E044:
    PUSH32(esp, ebp); /* 0x1008E044: push ebp */
    ebp = esp; /* 0x1008E045: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008E047: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008E049: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008E055); /* 0x1008E04C: call 0x1008e055 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008E051: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008E052: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008E053: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E054: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008E055(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008E055u);

L_1008E055:
    PUSH32(esp, ebp); /* 0x1008E055: push ebp */
    ebp = esp; /* 0x1008E056: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008E058: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1008E05B: lea ecx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1008E05E: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008E05F: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008E062: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F764); /* 0x1008E064: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1008E069: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1008E06C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E082; /* 0x1008E06E: jne 0x1008e082 */
L_1008E070:
    RECOMP_CALL(sub_1001177D); /* 0x1008E070: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008E075: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008E07B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008E0A0; /* 0x1008E080: jmp 0x1008e0a0 */
L_1008E082:
    edx = (uint32_t)MEM8(ecx); /* 0x1008E082: movzx edx, byte ptr [ecx] */
    eax = MEM32(ebp + (-0xC)); /* 0x1008E085: mov eax, dword ptr [ebp - 0xc] */
    /* test MEM8(eax + edx + 0x19), 4 */ /* 0x1008E088: test byte ptr [eax + edx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E09B; /* 0x1008E08D: je 0x1008e09b */
L_1008E08F:
    /* cmp MEM8(ecx + 0x1), 0 */ /* 0x1008E08F: cmp byte ptr [ecx + 1], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008E09B; /* 0x1008E093: je 0x1008e09b */
L_1008E095:
    esi = edx; /* 0x1008E095: mov esi, edx */
    if (8u) _cf = (((esi) >> 24) & 1u); /* 0x1008E097: shl esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((esi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 8u; /* 0x1008E097: shl esi, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008E09A: inc ecx */
    _flag_k = FK_INC;
L_1008E09B:
    eax = (uint32_t)MEM8(ecx); /* 0x1008E09B: movzx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1008E09E: add esi, eax */
    _flag_k = FK_ADD;
L_1008E0A0:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008E0A0: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008E0AD; /* 0x1008E0A4: je 0x1008e0ad */
L_1008E0A6:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008E0A6: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008E0A9: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008E0AD:
    eax = esi; /* 0x1008E0AD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008E0AF: pop esi */
    esp = ebp; /* 0x1008E0B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008E0B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E0B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008E0B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008E0B4u);

L_1008E0B4:
    PUSH32(esp, ebp); /* 0x1008E0B4: push ebp */
    ebp = esp; /* 0x1008E0B5: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008E0B7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008E0B9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008E0BC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008E0BF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008E0CC); /* 0x1008E0C2: call 0x1008e0cc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008E0C7: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008E0CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E0CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008E0CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008E0CCu);

L_1008E0CC:
    PUSH32(esp, ebp); /* 0x1008E0CC: push ebp */
    ebp = esp; /* 0x1008E0CD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1008E0CF: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1008E0D2: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1008E0D3: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1008E0D6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E0E1; /* 0x1008E0D8: jne 0x1008e0e1 */
L_1008E0DA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008E0DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008E25D; /* 0x1008E0DC: jmp 0x1008e25d */
L_1008E0E1:
    PUSH32(esp, ebx); /* 0x1008E0E1: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008E0E2: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x18); /* 0x1008E0E5: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1000F764); /* 0x1008E0E8: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x1008E0ED: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1008E0F0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x8), edx */ /* 0x1008E0F2: cmp dword ptr [ecx + 8], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008E10D; /* 0x1008E0F5: jne 0x1008e10d */
L_1008E0F7:
    PUSH32(esp, edi); /* 0x1008E0F7: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008E0F8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008E0FB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002E3AD); /* 0x1008E0FE: call 0x1002e3ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008E103: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = eax; /* 0x1008E106: mov edx, eax */
    goto L_1008E24D; /* 0x1008E108: jmp 0x1008e24d */
L_1008E10D:
    ebx = MEM32(ebp + 0x8); /* 0x1008E10D: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x1008E110: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E11E; /* 0x1008E112: je 0x1008e11e */
L_1008E114:
    eax = MEM32(ebp + 0xC); /* 0x1008E114: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1008E117: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x1008E11A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E138; /* 0x1008E11C: jne 0x1008e138 */
L_1008E11E:
    RECOMP_CALL(sub_1001177D); /* 0x1008E11E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008E123: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008E129: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    edx = 0x7FFFFFFFu; /* 0x1008E12E: mov edx, 0x7fffffff */
    goto L_1008E24D; /* 0x1008E133: jmp 0x1008e24d */
L_1008E138:
    PUSH32(esp, esi); /* 0x1008E138: push esi */
L_1008E139:
    esi = (uint32_t)MEM8(ebx); /* 0x1008E139: movzx esi, byte ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1008E13C: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = esi; /* 0x1008E13D: mov dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1008E140: inc ebx */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(ebp + 0x10); /* 0x1008E141: movzx eax, byte ptr [ebp + 0x10] */
    /* test MEM8(eax + ecx + 0x19), 4 */ /* 0x1008E145: test byte ptr [eax + ecx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E18E; /* 0x1008E14A: je 0x1008e18e */
L_1008E14C:
    SET_LO8(eax, MEM8(ebx)); /* 0x1008E14C: mov al, byte ptr [ebx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1008E14E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E157; /* 0x1008E150: jne 0x1008e157 */
L_1008E152:
    MEM32(ebp + 0x10) = edx; /* 0x1008E152: mov dword ptr [ebp + 0x10], edx */
    goto L_1008E1A7; /* 0x1008E155: jmp 0x1008e1a7 */
L_1008E157:
    if (8u) _cf = (((esi) >> 24) & 1u); /* 0x1008E157: shl esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((esi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 8u; /* 0x1008E157: shl esi, 8 */
    eax = (uint32_t)LO8(eax); /* 0x1008E15A: movzx eax, al */
    _flag_a = (uint32_t)((LO16(esi) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(esi) | LO16(eax))) << 16;
    SET_LO16(esi, LO16(esi) | LO16(eax)); /* 0x1008E15D: or si, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1008E160: inc ebx */
    _flag_k = FK_INC;
    eax = (uint32_t)LO16(esi); /* 0x1008E161: movzx eax, si */
    SET_LO16(esi, LO16(eax)); /* 0x1008E164: mov si, ax */
    MEM32(ebp + 0x10) = eax; /* 0x1008E167: mov dword ptr [ebp + 0x10], eax */
    /* cmp LO16(esi), MEM16(ecx + 0xC) */ /* 0x1008E16A: cmp si, word ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0xC)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1008E17C; /* 0x1008E16E: jb 0x1008e17c */
L_1008E170:
    /* cmp LO16(esi), MEM16(ecx + 0xE) */ /* 0x1008E170: cmp si, word ptr [ecx + 0xe] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0xE)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1008E17C; /* 0x1008E174: ja 0x1008e17c */
L_1008E176:
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x10)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(esi, LO16(esi) + MEM16(ecx + 0x10)); /* 0x1008E176: add si, word ptr [ecx + 0x10] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_1008E1AB; /* 0x1008E17A: jmp 0x1008e1ab */
L_1008E17C:
    /* cmp LO16(esi), MEM16(ecx + 0x12) */ /* 0x1008E17C: cmp si, word ptr [ecx + 0x12] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x12)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1008E1AB; /* 0x1008E180: jb 0x1008e1ab */
L_1008E182:
    /* cmp LO16(esi), MEM16(ecx + 0x14) */ /* 0x1008E182: cmp si, word ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x14)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1008E1AB; /* 0x1008E186: ja 0x1008e1ab */
L_1008E188:
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x16)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(esi, LO16(esi) + MEM16(ecx + 0x16)); /* 0x1008E188: add si, word ptr [ecx + 0x16] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_1008E1AB; /* 0x1008E18C: jmp 0x1008e1ab */
L_1008E18E:
    SET_LO16(esi, MEM16(ebp + 0x10)); /* 0x1008E18E: mov si, word ptr [ebp + 0x10] */
    eax = (uint32_t)LO16(esi); /* 0x1008E192: movzx eax, si */
    /* test MEM8(eax + ecx + 0x19), 0x10u */ /* 0x1008E195: test byte ptr [eax + ecx + 0x19], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E1AB; /* 0x1008E19A: je 0x1008e1ab */
L_1008E19C:
    eax = (uint32_t)MEM8(eax + ecx + 0x119); /* 0x1008E19C: movzx eax, byte ptr [eax + ecx + 0x119] */
    MEM32(ebp + 0x10) = eax; /* 0x1008E1A4: mov dword ptr [ebp + 0x10], eax */
L_1008E1A7:
    SET_LO16(esi, MEM16(ebp + 0x10)); /* 0x1008E1A7: mov si, word ptr [ebp + 0x10] */
L_1008E1AB:
    eax = MEM32(ebp + (-0x4)); /* 0x1008E1AB: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1008E1AE: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(eax); /* 0x1008E1B1: movzx eax, byte ptr [eax] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1008E1B4: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + 0x10) = eax; /* 0x1008E1B7: mov dword ptr [ebp + 0x10], eax */
    eax = (uint32_t)LO8(eax); /* 0x1008E1BA: movzx eax, al */
    /* test MEM8(eax + ecx + 0x19), 4 */ /* 0x1008E1BD: test byte ptr [eax + ecx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E20D; /* 0x1008E1C2: je 0x1008e20d */
L_1008E1C4:
    eax = MEM32(ebp + (-0x4)); /* 0x1008E1C4: mov eax, dword ptr [ebp - 4] */
    SET_LO8(eax, MEM8(eax)); /* 0x1008E1C7: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x1008E1C9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E1D2; /* 0x1008E1CB: jne 0x1008e1d2 */
L_1008E1CD:
    MEM32(ebp + 0x10) = edx; /* 0x1008E1CD: mov dword ptr [ebp + 0x10], edx */
    goto L_1008E22F; /* 0x1008E1D0: jmp 0x1008e22f */
L_1008E1D2:
    if (8u) _cf = (((MEM32(ebp + (-0x8))) >> 24) & 1u); /* 0x1008E1D2: shl dword ptr [ebp - 8], 8 */
    if (8u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x8)) << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) << 8u; /* 0x1008E1D2: shl dword ptr [ebp - 8], 8 */
    eax = (uint32_t)LO8(eax); /* 0x1008E1D6: movzx eax, al */
    _flag_a = (uint32_t)((MEM16(ebp + (-0x8)) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(ebp + (-0x8)) | LO16(eax))) << 16;
    MEM16(ebp + (-0x8)) = (uint16_t)(MEM16(ebp + (-0x8)) | LO16(eax)); /* 0x1008E1D9: or word ptr [ebp - 8], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(ebp + (-0x8)); /* 0x1008E1DD: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1008E1E0: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = (uint32_t)LO16(eax); /* 0x1008E1E3: movzx eax, ax */
    MEM32(ebp + 0x10) = eax; /* 0x1008E1E6: mov dword ptr [ebp + 0x10], eax */
    /* cmp LO16(eax), MEM16(ecx + 0xC) */ /* 0x1008E1E9: cmp ax, word ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0xC)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1008E1FB; /* 0x1008E1ED: jb 0x1008e1fb */
L_1008E1EF:
    /* cmp LO16(eax), MEM16(ecx + 0xE) */ /* 0x1008E1EF: cmp ax, word ptr [ecx + 0xe] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0xE)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1008E1FB; /* 0x1008E1F3: ja 0x1008e1fb */
L_1008E1F5:
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x10)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 0x10)); /* 0x1008E1F5: add ax, word ptr [ecx + 0x10] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_1008E233; /* 0x1008E1F9: jmp 0x1008e233 */
L_1008E1FB:
    /* cmp LO16(eax), MEM16(ecx + 0x12) */ /* 0x1008E1FB: cmp ax, word ptr [ecx + 0x12] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x12)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1008E233; /* 0x1008E1FF: jb 0x1008e233 */
L_1008E201:
    /* cmp LO16(eax), MEM16(ecx + 0x14) */ /* 0x1008E201: cmp ax, word ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x14)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1008E233; /* 0x1008E205: ja 0x1008e233 */
L_1008E207:
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x16)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 0x16)); /* 0x1008E207: add ax, word ptr [ecx + 0x16] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_1008E233; /* 0x1008E20B: jmp 0x1008e233 */
L_1008E20D:
    SET_LO16(eax, MEM16(ebp + 0x10)); /* 0x1008E20D: mov ax, word ptr [ebp + 0x10] */
    edx = (uint32_t)LO16(eax); /* 0x1008E211: movzx edx, ax */
    PUSH32(esp, 0); /* 0x1008E214: push 0 */
    MEM32(ebp + 0x10) = edx; /* 0x1008E216: mov dword ptr [ebp + 0x10], edx */
    /* test MEM8(edx + ecx + 0x19), 0x10u */ /* 0x1008E219: test byte ptr [edx + ecx + 0x19], 0x10 */
    _flag_a = (uint32_t)(MEM8(edx + ecx + 0x19)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = POP32_VAL(esp); /* 0x1008E21E: pop edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E233; /* 0x1008E21F: je 0x1008e233 */
L_1008E221:
    eax = MEM32(ebp + 0x10); /* 0x1008E221: mov eax, dword ptr [ebp + 0x10] */
    eax = (uint32_t)MEM8(eax + ecx + 0x119); /* 0x1008E224: movzx eax, byte ptr [eax + ecx + 0x119] */
    MEM32(ebp + 0x10) = eax; /* 0x1008E22C: mov dword ptr [ebp + 0x10], eax */
L_1008E22F:
    SET_LO16(eax, MEM16(ebp + 0x10)); /* 0x1008E22F: mov ax, word ptr [ebp + 0x10] */
L_1008E233:
    /* cmp LO16(eax), LO16(esi) */ /* 0x1008E233: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008E246; /* 0x1008E236: jne 0x1008e246 */
L_1008E238:
    /* test LO16(esi), LO16(esi) */ /* 0x1008E238: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E24C; /* 0x1008E23B: je 0x1008e24c */
L_1008E23D:
    /* test edi, edi */ /* 0x1008E23D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E24C; /* 0x1008E23F: je 0x1008e24c */
L_1008E241:
    RECOMP_BACKEDGE();
    goto L_1008E139; /* 0x1008E241: jmp 0x1008e139 */
L_1008E246:
    { uint32_t _sa = edx, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1008E246: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    edx = edx & 2; /* 0x1008E248: and edx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1008E24B: dec edx */
    _flag_k = FK_DEC;
L_1008E24C:
    esi = POP32_VAL(esp); /* 0x1008E24C: pop esi */
L_1008E24D:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1008E24D: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = POP32_VAL(esp); /* 0x1008E251: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008E25B; /* 0x1008E252: je 0x1008e25b */
L_1008E254:
    ecx = MEM32(ebp + (-0x10)); /* 0x1008E254: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008E257: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008E25B:
    eax = edx; /* 0x1008E25B: mov eax, edx */
L_1008E25D:
    edi = POP32_VAL(esp); /* 0x1008E25D: pop edi */
    esp = ebp; /* 0x1008E25E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008E260: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E261: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008E262(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008E262u);

L_1008E262:
    PUSH32(esp, ebp); /* 0x1008E262: push ebp */
    ebp = esp; /* 0x1008E263: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008E265: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008E267: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008E26A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008E26D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008E27A); /* 0x1008E270: call 0x1008e27a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008E275: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008E278: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E279: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008E27A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008E27Au);

L_1008E27A:
    PUSH32(esp, ebp); /* 0x1008E27A: push ebp */
    ebp = esp; /* 0x1008E27B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008E27D: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1008E280: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x1008E283: push ebx */
    PUSH32(esp, edi); /* 0x1008E284: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008E285: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x1008E288: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x10); /* 0x1008E28D: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1008E290: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E29B; /* 0x1008E292: jne 0x1008e29b */
L_1008E294:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1008E294: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008E34F; /* 0x1008E296: jmp 0x1008e34f */
L_1008E29B:
    ecx = MEM32(ebp + 0x8); /* 0x1008E29B: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1008E29E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E2A8; /* 0x1008E2A0: je 0x1008e2a8 */
L_1008E2A2:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1008E2A2: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008E2C2; /* 0x1008E2A6: jne 0x1008e2c2 */
L_1008E2A8:
    RECOMP_CALL(sub_1001177D); /* 0x1008E2A8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008E2AD: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008E2B3: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    edi = 0x7FFFFFFFu; /* 0x1008E2B8: mov edi, 0x7fffffff */
    goto L_1008E34F; /* 0x1008E2BD: jmp 0x1008e34f */
L_1008E2C2:
    edi = 0x7FFFFFFFu; /* 0x1008E2C2: mov edi, 0x7fffffff */
    /* cmp ebx, edi */ /* 0x1008E2C7: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1008E2DD; /* 0x1008E2C9: jbe 0x1008e2dd */
L_1008E2CB:
    RECOMP_CALL(sub_1001177D); /* 0x1008E2CB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008E2D0: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008E2D6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008E34F; /* 0x1008E2DB: jmp 0x1008e34f */
L_1008E2DD:
    eax = MEM32(ebp + (-0xC)); /* 0x1008E2DD: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1008E2E0: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008E2FA; /* 0x1008E2E4: jne 0x1008e2fa */
L_1008E2E6:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008E2E6: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1008E2E9: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008E2EA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1008E2ED: push ecx */
    RECOMP_CALL(sub_10016F4B); /* 0x1008E2EE: call 0x10016f4b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008E2F3: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1008E2F6: mov edi, eax */
    goto L_1008E34F; /* 0x1008E2F8: jmp 0x1008e34f */
L_1008E2FA:
    PUSH32(esp, esi); /* 0x1008E2FA: push esi */
    eax = ebp + (-0x10); /* 0x1008E2FB: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008E2FE: push eax */
    PUSH32(esp, ebx); /* 0x1008E2FF: push ebx */
    PUSH32(esp, ecx); /* 0x1008E300: push ecx */
    RECOMP_CALL(sub_1008D66F); /* 0x1008E301: call 0x1008d66f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1008E306: mov esi, eax */
    eax = ebp + (-0x10); /* 0x1008E308: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1008E30B: push eax */
    PUSH32(esp, ebx); /* 0x1008E30C: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008E30D: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1008D66F); /* 0x1008E310: call 0x1008d66f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1008E315: mov ecx, dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x1008E318: push dword ptr [ecx + 4] */
    PUSH32(esp, eax); /* 0x1008E31B: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008E31C: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x10); /* 0x1008E31F: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1008E322: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008E323: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001u); /* 0x1008E326: push 0x1001 */
    PUSH32(esp, MEM32(ecx + 0x21C)); /* 0x1008E32B: push dword ptr [ecx + 0x21c] */
    PUSH32(esp, eax); /* 0x1008E331: push eax */
    RECOMP_CALL(sub_10017B92); /* 0x1008E332: call 0x10017b92 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x38u; /* 0x1008E337: add esp, 0x38 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1008E33A: pop esi */
    /* test eax, eax */ /* 0x1008E33B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E34C; /* 0x1008E33D: jne 0x1008e34c */
L_1008E33F:
    RECOMP_CALL(sub_1001177D); /* 0x1008E33F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008E344: mov dword ptr [eax], 0x16 */
    goto L_1008E34F; /* 0x1008E34A: jmp 0x1008e34f */
L_1008E34C:
    edi = eax + (-0x2); /* 0x1008E34C: lea edi, [eax - 2] */
L_1008E34F:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008E34F: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008E35C; /* 0x1008E353: je 0x1008e35c */
L_1008E355:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008E355: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008E358: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008E35C:
    eax = edi; /* 0x1008E35C: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1008E35E: pop edi */
    ebx = POP32_VAL(esp); /* 0x1008E35F: pop ebx */
    esp = ebp; /* 0x1008E360: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008E362: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E363: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008E364(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008E364u);

L_1008E364:
    PUSH32(esp, ebp); /* 0x1008E364: push ebp */
    ebp = esp; /* 0x1008E365: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008E367: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008E369: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008E36C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008E36F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008E37C); /* 0x1008E372: call 0x1008e37c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008E377: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008E37A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E37B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008E37C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008E37Cu);

L_1008E37C:
    PUSH32(esp, ebp); /* 0x1008E37C: push ebp */
    ebp = esp; /* 0x1008E37D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1008E37F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1008E382: push ebx */
    PUSH32(esp, esi); /* 0x1008E383: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1008E384: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x18); /* 0x1008E387: lea ecx, [ebp - 0x18] */
    PUSH32(esp, edi); /* 0x1008E38A: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008E38B: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1008E38E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x1008E390: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + 0x8) = edi; /* 0x1008E393: mov dword ptr [ebp + 8], edi */
    RECOMP_CALL(sub_1000F764); /* 0x1008E396: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x10); /* 0x1008E39B: mov ebx, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1008E39E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E3BB; /* 0x1008E3A0: jne 0x1008e3bb */
L_1008E3A2:
    /* test ebx, ebx */ /* 0x1008E3A2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E3BB; /* 0x1008E3A4: je 0x1008e3bb */
L_1008E3A6:
    RECOMP_CALL(sub_1001177D); /* 0x1008E3A6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008E3AB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008E3B1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008E4A0; /* 0x1008E3B6: jmp 0x1008e4a0 */
L_1008E3BB:
    eax = MEM32(ebp + (-0x14)); /* 0x1008E3BB: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax + 0x8), edi */ /* 0x1008E3BE: cmp dword ptr [eax + 8], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008E3D7; /* 0x1008E3C1: jne 0x1008e3d7 */
L_1008E3C3:
    PUSH32(esp, ebx); /* 0x1008E3C3: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008E3C4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1008E3C7: push esi */
    RECOMP_CALL(sub_10034960); /* 0x1008E3C8: call 0x10034960 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008E3CD: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1008E3D0: mov edi, eax */
    goto L_1008E4A0; /* 0x1008E3D2: jmp 0x1008e4a0 */
L_1008E3D7:
    ecx = MEM32(ebp + 0xC); /* 0x1008E3D7: mov ecx, dword ptr [ebp + 0xc] */
    edx = ecx; /* 0x1008E3DA: mov edx, ecx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x1008E3DC: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x1008E3DC: shr edx, 8 */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1008E3DF: mov dword ptr [ebp - 4], ecx */
    /* test LO8(edx), LO8(edx) */ /* 0x1008E3E2: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E462; /* 0x1008E3E4: je 0x1008e462 */
L_1008E3E6:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1008E3E6: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E3FA; /* 0x1008E3E8: jne 0x1008e3fa */
L_1008E3EA:
    RECOMP_CALL(sub_1001177D); /* 0x1008E3EA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    SET_LO8(edx, 0x20u); /* 0x1008E3EF: mov dl, 0x20 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(edx)); /* 0x1008E3F1: mov byte ptr [ebp - 4], dl */
    MEM32(eax) = 0x16u; /* 0x1008E3F4: mov dword ptr [eax], 0x16 */
L_1008E3FA:
    /* test ebx, ebx */ /* 0x1008E3FA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E49D; /* 0x1008E3FC: je 0x1008e49d */
L_1008E402:
    SET_LO8(eax, MEM8(esi)); /* 0x1008E402: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1008E404: dec ebx */
    _flag_k = FK_DEC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008E405: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E490; /* 0x1008E407: je 0x1008e490 */
L_1008E40D:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1008E40D: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008E427; /* 0x1008E410: jne 0x1008e427 */
L_1008E412:
    ecx = MEM32(ebp + (-0x14)); /* 0x1008E412: mov ecx, dword ptr [ebp - 0x14] */
    eax = (uint32_t)LO8(eax); /* 0x1008E415: movzx eax, al */
    /* test MEM8(eax + ecx + 0x19), 4 */ /* 0x1008E418: test byte ptr [eax + ecx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E427; /* 0x1008E41D: je 0x1008e427 */
L_1008E41F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008E41F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008E421: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x1008E422: mov dword ptr [ebp + 8], eax */
    goto L_1008E42C; /* 0x1008E425: jmp 0x1008e42c */
L_1008E427:
    eax = edi; /* 0x1008E427: mov eax, edi */
    MEM32(ebp + 0x8) = edi; /* 0x1008E429: mov dword ptr [ebp + 8], edi */
L_1008E42C:
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x1008E42C: mov byte ptr [esi], dl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008E42E: inc esi */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(esi)); /* 0x1008E42F: mov cl, byte ptr [esi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1008E431: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E458; /* 0x1008E433: je 0x1008e458 */
L_1008E435:
    /* test eax, eax */ /* 0x1008E435: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E44D; /* 0x1008E437: jne 0x1008e44d */
L_1008E439:
    eax = (uint32_t)LO8(ecx); /* 0x1008E439: movzx eax, cl */
    ecx = MEM32(ebp + (-0x14)); /* 0x1008E43C: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + 0x8) = 1; /* 0x1008E43F: mov dword ptr [ebp + 8], 1 */
    /* test MEM8(eax + ecx + 0x19), 4 */ /* 0x1008E446: test byte ptr [eax + ecx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E450; /* 0x1008E44B: jne 0x1008e450 */
L_1008E44D:
    MEM32(ebp + 0x8) = edi; /* 0x1008E44D: mov dword ptr [ebp + 8], edi */
L_1008E450:
    eax = MEM32(ebp + (-0x4)); /* 0x1008E450: mov eax, dword ptr [ebp - 4] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1008E453: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008E455: inc esi */
    _flag_k = FK_INC;
    goto L_1008E45C; /* 0x1008E456: jmp 0x1008e45c */
L_1008E458:
    MEM8(esi + (-0x1)) = (uint8_t)(0x20u); /* 0x1008E458: mov byte ptr [esi - 1], 0x20 */
L_1008E45C:
    /* test ebx, ebx */ /* 0x1008E45C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E490; /* 0x1008E45E: je 0x1008e490 */
L_1008E460:
    RECOMP_BACKEDGE();
    goto L_1008E402; /* 0x1008E460: jmp 0x1008e402 */
L_1008E462:
    /* test ebx, ebx */ /* 0x1008E462: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E49D; /* 0x1008E464: je 0x1008e49d */
L_1008E466:
    edx = MEM32(ebp + (-0x14)); /* 0x1008E466: mov edx, dword ptr [ebp - 0x14] */
L_1008E469:
    SET_LO8(eax, MEM8(esi)); /* 0x1008E469: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1008E46B: dec ebx */
    _flag_k = FK_DEC;
    /* test LO8(eax), LO8(eax) */ /* 0x1008E46C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E490; /* 0x1008E46E: je 0x1008e490 */
L_1008E470:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1008E470: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008E486; /* 0x1008E473: jne 0x1008e486 */
L_1008E475:
    eax = (uint32_t)LO8(eax); /* 0x1008E475: movzx eax, al */
    MEM32(ebp + 0x8) = 1; /* 0x1008E478: mov dword ptr [ebp + 8], 1 */
    /* test MEM8(eax + edx + 0x19), 4 */ /* 0x1008E47F: test byte ptr [eax + edx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E489; /* 0x1008E484: jne 0x1008e489 */
L_1008E486:
    MEM32(ebp + 0x8) = edi; /* 0x1008E486: mov dword ptr [ebp + 8], edi */
L_1008E489:
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1008E489: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008E48B: inc esi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x1008E48C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E469; /* 0x1008E48E: jne 0x1008e469 */
L_1008E490:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1008E490: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008E49D; /* 0x1008E493: je 0x1008e49d */
L_1008E495:
    /* cmp MEM8(esi), 0 */ /* 0x1008E495: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008E49D; /* 0x1008E498: je 0x1008e49d */
L_1008E49A:
    MEM8(esi) = (uint8_t)(0x20u); /* 0x1008E49A: mov byte ptr [esi], 0x20 */
L_1008E49D:
    edi = MEM32(ebp + (-0x8)); /* 0x1008E49D: mov edi, dword ptr [ebp - 8] */
L_1008E4A0:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1008E4A0: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008E4AD; /* 0x1008E4A4: je 0x1008e4ad */
L_1008E4A6:
    ecx = MEM32(ebp + (-0x10)); /* 0x1008E4A6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008E4A9: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008E4AD:
    eax = edi; /* 0x1008E4AD: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1008E4AF: pop edi */
    esi = POP32_VAL(esp); /* 0x1008E4B0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008E4B1: pop ebx */
    esp = ebp; /* 0x1008E4B2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008E4B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E4B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008E4B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008E4B6u);

L_1008E4B6:
    PUSH32(esp, ebp); /* 0x1008E4B6: push ebp */
    ebp = esp; /* 0x1008E4B7: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008E4B9: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008E4BB: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008E4BE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008E4C1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008E4C4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008C6E2); /* 0x1008E4C7: call 0x1008c6e2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008E4CC: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008E4CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E4D0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008E4D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008E4D1u);

L_1008E4D1:
    PUSH32(esp, ebp); /* 0x1008E4D1: push ebp */
    ebp = esp; /* 0x1008E4D2: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008E4D4: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008E4D6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008E4D9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008E4E6); /* 0x1008E4DC: call 0x1008e4e6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008E4E1: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008E4E4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E4E5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008E4E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008E4E6u);

L_1008E4E6:
    PUSH32(esp, ebp); /* 0x1008E4E6: push ebp */
    ebp = esp; /* 0x1008E4E7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1008E4E9: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1008E4EC: push ebx */
    PUSH32(esp, esi); /* 0x1008E4ED: push esi */
    PUSH32(esp, edi); /* 0x1008E4EE: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008E4EF: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x14); /* 0x1008E4F2: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x1008E4F5: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x10)); /* 0x1008E4FA: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008E4FD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x8), esi */ /* 0x1008E4FF: cmp dword ptr [ebx + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008E518; /* 0x1008E502: jne 0x1008e518 */
L_1008E504:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008E504: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008E507: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1003498B); /* 0x1008E50A: call 0x1003498b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008E50F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008E510: pop ecx */
    esi = eax; /* 0x1008E511: mov esi, eax */
    goto L_1008E59C; /* 0x1008E513: jmp 0x1008e59c */
L_1008E518:
    ecx = MEM32(ebp + 0x8); /* 0x1008E518: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1008E51B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E526; /* 0x1008E51D: je 0x1008e526 */
L_1008E51F:
    edi = MEM32(ebp + 0xC); /* 0x1008E51F: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1008E522: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E538; /* 0x1008E524: jne 0x1008e538 */
L_1008E526:
    RECOMP_CALL(sub_1001177D); /* 0x1008E526: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008E52B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008E531: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008E59C; /* 0x1008E536: jmp 0x1008e59c */
L_1008E538:
    /* cmp MEM8(ecx), 0 */ /* 0x1008E538: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008E593; /* 0x1008E53B: je 0x1008e593 */
L_1008E53D:
    SET_LO8(eax, MEM8(edi)); /* 0x1008E53D: mov al, byte ptr [edi] */
L_1008E53F:
    edx = edi; /* 0x1008E53F: mov edx, edi */
    /* test LO8(eax), LO8(eax) */ /* 0x1008E541: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E576; /* 0x1008E543: je 0x1008e576 */
L_1008E545:
    esi = MEM32(ebp + (-0x10)); /* 0x1008E545: mov esi, dword ptr [ebp - 0x10] */
L_1008E548:
    SET_LO8(ebx, MEM8(edx)); /* 0x1008E548: mov bl, byte ptr [edx] */
    eax = (uint32_t)LO8(ebx); /* 0x1008E54A: movzx eax, bl */
    /* test MEM8(eax + esi + 0x19), 4 */ /* 0x1008E54D: test byte ptr [eax + esi + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + esi + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E569; /* 0x1008E552: je 0x1008e569 */
L_1008E554:
    /* cmp LO8(ebx), MEM8(ecx) */ /* 0x1008E554: cmp bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008E560; /* 0x1008E556: jne 0x1008e560 */
L_1008E558:
    SET_LO8(eax, MEM8(edx + 0x1)); /* 0x1008E558: mov al, byte ptr [edx + 1] */
    /* cmp LO8(eax), MEM8(ecx + 0x1) */ /* 0x1008E55B: cmp al, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008E573; /* 0x1008E55E: je 0x1008e573 */
L_1008E560:
    /* cmp MEM8(edx + 0x1), 0 */ /* 0x1008E560: cmp byte ptr [edx + 1], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008E573; /* 0x1008E564: je 0x1008e573 */
L_1008E566:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008E566: inc edx */
    _flag_k = FK_INC;
    goto L_1008E56D; /* 0x1008E567: jmp 0x1008e56d */
L_1008E569:
    /* cmp LO8(ebx), MEM8(ecx) */ /* 0x1008E569: cmp bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008E573; /* 0x1008E56B: je 0x1008e573 */
L_1008E56D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008E56D: inc edx */
    _flag_k = FK_INC;
    /* cmp MEM8(edx), 0 */ /* 0x1008E56E: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008E548; /* 0x1008E571: jne 0x1008e548 */
L_1008E573:
    ebx = MEM32(ebp + (-0x10)); /* 0x1008E573: mov ebx, dword ptr [ebp - 0x10] */
L_1008E576:
    /* cmp MEM8(edx), 0 */ /* 0x1008E576: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008E593; /* 0x1008E579: jne 0x1008e593 */
L_1008E57B:
    eax = (uint32_t)MEM8(ecx); /* 0x1008E57B: movzx eax, byte ptr [ecx] */
    /* test MEM8(eax + ebx + 0x19), 4 */ /* 0x1008E57E: test byte ptr [eax + ebx + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E58B; /* 0x1008E583: je 0x1008e58b */
L_1008E585:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008E585: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), 0 */ /* 0x1008E586: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008E593; /* 0x1008E589: je 0x1008e593 */
L_1008E58B:
    SET_LO8(eax, MEM8(edi)); /* 0x1008E58B: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008E58D: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), 0 */ /* 0x1008E58E: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008E53F; /* 0x1008E591: jne 0x1008e53f */
L_1008E593:
    esi = (uint32_t)MEM8(ecx); /* 0x1008E593: movzx esi, byte ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1008E596: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1008E598: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    esi = esi & ecx; /* 0x1008E59A: and esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008E59C:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1008E59C: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008E5A9; /* 0x1008E5A0: je 0x1008e5a9 */
L_1008E5A2:
    ecx = MEM32(ebp + (-0xC)); /* 0x1008E5A2: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008E5A5: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008E5A9:
    edi = POP32_VAL(esp); /* 0x1008E5A9: pop edi */
    eax = esi; /* 0x1008E5AA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008E5AC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1008E5AD: pop ebx */
    esp = ebp; /* 0x1008E5AE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008E5B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E5B1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008E5B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008E5B2u);

L_1008E5B2:
    PUSH32(esp, ebp); /* 0x1008E5B2: push ebp */
    ebp = esp; /* 0x1008E5B3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008E5B5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008E5B7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008E5BA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008E5C7); /* 0x1008E5BD: call 0x1008e5c7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008E5C2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008E5C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E5C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008E5C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008E5C7u);

L_1008E5C7:
    PUSH32(esp, ebp); /* 0x1008E5C7: push ebp */
    ebp = esp; /* 0x1008E5C8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1008E5CA: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1008E5CD: lea ecx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1008E5D0: push esi */
    PUSH32(esp, edi); /* 0x1008E5D1: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008E5D2: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008E5D5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F764); /* 0x1008E5D7: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1008E5DC: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1008E5DF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E5F5; /* 0x1008E5E1: jne 0x1008e5f5 */
L_1008E5E3:
    RECOMP_CALL(sub_1001177D); /* 0x1008E5E3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008E5E8: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008E5EE: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1008E643; /* 0x1008E5F3: jmp 0x1008e643 */
L_1008E5F5:
    edi = MEM32(ebp + (-0xC)); /* 0x1008E5F5: mov edi, dword ptr [ebp - 0xc] */
    /* cmp MEM32(edi + 0x8), esi */ /* 0x1008E5F8: cmp dword ptr [edi + 8], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008E60C; /* 0x1008E5FB: jne 0x1008e60c */
L_1008E5FD:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008E5FD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1008E600: push ecx */
    RECOMP_CALL(sub_1002E6CE); /* 0x1008E601: call 0x1002e6ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008E606: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008E607: pop ecx */
    esi = eax; /* 0x1008E608: mov esi, eax */
    goto L_1008E643; /* 0x1008E60A: jmp 0x1008e643 */
L_1008E60C:
    PUSH32(esp, ebx); /* 0x1008E60C: push ebx */
L_1008E60D:
    SET_LO8(ebx, MEM8(ecx)); /* 0x1008E60D: mov bl, byte ptr [ecx] */
    edx = (uint32_t)LO8(ebx); /* 0x1008E60F: movzx edx, bl */
    /* test MEM8(edx + edi + 0x19), 4 */ /* 0x1008E612: test byte ptr [edx + edi + 0x19], 4 */
    _flag_a = (uint32_t)(MEM8(edx + edi + 0x19)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E636; /* 0x1008E617: je 0x1008e636 */
L_1008E619:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008E619: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(ebx, MEM8(ecx)); /* 0x1008E61A: mov bl, byte ptr [ecx] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1008E61C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008E632; /* 0x1008E61E: je 0x1008e632 */
L_1008E620:
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x1008E620: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x1008E620: shl edx, 8 */
    eax = (uint32_t)LO8(ebx); /* 0x1008E623: movzx eax, bl */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1008E626: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1008E628: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008E63D; /* 0x1008E62B: jne 0x1008e63d */
L_1008E62D:
    esi = ecx + (-0x1); /* 0x1008E62D: lea esi, [ecx - 1] */
    goto L_1008E63D; /* 0x1008E630: jmp 0x1008e63d */
L_1008E632:
    /* test esi, esi */ /* 0x1008E632: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008E639; /* 0x1008E634: jmp 0x1008e639 */
L_1008E636:
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1008E636: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1008E639:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1008E63D; /* 0x1008E639: jne 0x1008e63d */
L_1008E63B:
    esi = ecx; /* 0x1008E63B: mov esi, ecx */
L_1008E63D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008E63D: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(ebx), LO8(ebx) */ /* 0x1008E63E: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008E60D; /* 0x1008E640: jne 0x1008e60d */
L_1008E642:
    ebx = POP32_VAL(esp); /* 0x1008E642: pop ebx */
L_1008E643:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1008E643: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008E650; /* 0x1008E647: je 0x1008e650 */
L_1008E649:
    ecx = MEM32(ebp + (-0x8)); /* 0x1008E649: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1008E64C: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008E650:
    edi = POP32_VAL(esp); /* 0x1008E650: pop edi */
    eax = esi; /* 0x1008E651: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1008E653: pop esi */
    esp = ebp; /* 0x1008E654: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008E656: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E657: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008E658(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008E658u);

L_1008E658:
    PUSH32(esp, ebp); /* 0x1008E658: push ebp */
    ebp = esp; /* 0x1008E659: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1008E65B: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008E65D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008E669); /* 0x1008E660: call 0x1008e669 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008E665: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008E666: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1008E667: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008E668: ret  */
    RECOMP_REGS_OUT();
}
