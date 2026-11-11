#define RECOMP_GENERATED_CODE

#include "functions.h"


void sub_006E9330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9330u);

L_006E9330:
    PUSH32(esp, esi); /* 0x006E9330: push esi */
    esi = ecx; /* 0x006E9331: mov esi, ecx */
    /* cmp MEM8(esi + 0x30), 0 */ /* 0x006E9333: cmp byte ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006E933D; /* 0x006E9337: je 0x6e933d */
L_006E9339:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006E9339: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006E933B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E933C: ret  */
L_006E933D:
    eax = MEM32(esi + 0x20); /* 0x006E933D: mov eax, dword ptr [esi + 0x20] */
    /* test eax, eax */ /* 0x006E9340: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9349; /* 0x006E9342: je 0x6e9349 */
L_006E9344:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x24); /* 0x006E9344: sub eax, dword ptr [esi + 0x24] */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x006E9347: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9348: ret  */
L_006E9349:
    ecx = MEM32(esi + 0x14); /* 0x006E9349: mov ecx, dword ptr [esi + 0x14] */
    eax = MEM32(ecx); /* 0x006E934C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x006E934E: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x18); /* 0x006E9351: sub eax, dword ptr [esi + 0x18] */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x006E9354: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9355: ret  */
    RECOMP_REGS_OUT();
}

void sub_006E9360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9360u);

L_006E9360:
    PUSH32(esp, ebp); /* 0x006E9360: push ebp */
    ebp = esp; /* 0x006E9361: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006E9363: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006E9366: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006E936B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006E936D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x006E9370: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x006E9373: push ebx */
    PUSH32(esp, esi); /* 0x006E9374: push esi */
    esi = ecx; /* 0x006E9375: mov esi, ecx */
    MEM32(ebp + (-0x18)) = edx; /* 0x006E9377: mov dword ptr [ebp - 0x18], edx */
    PUSH32(esp, edi); /* 0x006E937A: push edi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x006E937B: mov dword ptr [ebp - 0x1c], eax */
    /* cmp MEM32(esi + 0x60), 0 */ /* 0x006E937E: cmp dword ptr [esi + 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x60)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E9651; /* 0x006E9382: jne 0x6e9651 */
L_006E9388:
    ecx = esi; /* 0x006E9388: mov ecx, esi */
    RECOMP_CALL(sub_006E3CD0); /* 0x006E938A: call 0x6e3cd0 */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), 0x4Fu */ /* 0x006E938F: cmp al, 0x4f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x4Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E9647; /* 0x006E9391: jne 0x6e9647 */
L_006E9397:
    /* cmp MEM8(esi + 0x30), 0 */ /* 0x006E9397: cmp byte ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006E93A1; /* 0x006E939B: je 0x6e93a1 */
L_006E939D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006E939D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006E93BA; /* 0x006E939F: jmp 0x6e93ba */
L_006E93A1:
    ebx = MEM32(esi + 0x20); /* 0x006E93A1: mov ebx, dword ptr [esi + 0x20] */
    /* test ebx, ebx */ /* 0x006E93A4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E93AD; /* 0x006E93A6: je 0x6e93ad */
L_006E93A8:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(esi + 0x24); /* 0x006E93A8: sub ebx, dword ptr [esi + 0x24] */
    _flag_k = FK_CMP;
    goto L_006E93BA; /* 0x006E93AB: jmp 0x6e93ba */
L_006E93AD:
    ecx = MEM32(esi + 0x14); /* 0x006E93AD: mov ecx, dword ptr [esi + 0x14] */
    eax = MEM32(ecx); /* 0x006E93B0: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x006E93B2: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006E93B5: mov ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(esi + 0x18); /* 0x006E93B7: sub ebx, dword ptr [esi + 0x18] */
    _flag_k = FK_CMP;
L_006E93BA:
    ecx = ebx + (-0x19); /* 0x006E93BA: lea ecx, [ebx - 0x19] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x006E93BD: mov dword ptr [ebp - 0xc], ebx */
    /* cmp ecx, MEM32(esi + 0x2C) */ /* 0x006E93C0: cmp ecx, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006E9651; /* 0x006E93C3: ja 0x6e9651 */
L_006E93C9:
    edi = 1; /* 0x006E93C9: mov edi, 1 */
    edi = edi; /* 0x006E93CE: mov edi, edi */
L_006E93D0:
    ecx = esi; /* 0x006E93D0: mov ecx, esi */
    RECOMP_CALL(sub_006E3CD0); /* 0x006E93D2: call 0x6e3cd0 */
    RECOMP_FLAGS_IN();
    /* cmp LO8(eax), MEM8(edi + 0x860B1C) */ /* 0x006E93D7: cmp al, byte ptr [edi + 0x860b1c] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x860B1C)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E93E5; /* 0x006E93DD: jne 0x6e93e5 */
L_006E93DF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006E93DF: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 4 */ /* 0x006E93E0: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006E93D0; /* 0x006E93E3: jl 0x6e93d0 */
L_006E93E5:
    /* cmp MEM32(esi + 0x60), 0 */ /* 0x006E93E5: cmp dword ptr [esi + 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x60)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E9651; /* 0x006E93E9: jne 0x6e9651 */
L_006E93EF:
    /* cmp edi, 4 */ /* 0x006E93EF: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E95EC; /* 0x006E93F2: jne 0x6e95ec */
L_006E93F8:
    eax = MEM32(0x860B1C); /* 0x006E93F8: mov eax, dword ptr [0x860b1c] */
    ebx = edi; /* 0x006E93FD: mov ebx, edi */
    MEM32(ebp + (-0x3C)) = eax; /* 0x006E93FF: mov dword ptr [ebp - 0x3c], eax */
L_006E9402:
    eax = MEM32(esi + 0x20); /* 0x006E9402: mov eax, dword ptr [esi + 0x20] */
    /* test eax, eax */ /* 0x006E9405: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9416; /* 0x006E9407: je 0x6e9416 */
L_006E9409:
    /* cmp eax, MEM32(esi + 0x28) */ /* 0x006E9409: cmp eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006E943D; /* 0x006E940C: jae 0x6e943d */
L_006E940E:
    SET_LO8(ecx, MEM8(eax)); /* 0x006E940E: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006E9410: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x20) = eax; /* 0x006E9411: mov dword ptr [esi + 0x20], eax */
    goto L_006E9446; /* 0x006E9414: jmp 0x6e9446 */
L_006E9416:
    edi = MEM32(esi + 0x14); /* 0x006E9416: mov edi, dword ptr [esi + 0x14] */
    ecx = edi; /* 0x006E9419: mov ecx, edi */
    eax = MEM32(edi); /* 0x006E941B: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006E941D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006E9420: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006E943D; /* 0x006E9422: jne 0x6e943d */
L_006E9424:
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(eax)); /* 0x006E9424: mov byte ptr [ebp - 5], al */
    ecx = ebp + (-0x5); /* 0x006E9427: lea ecx, [ebp - 5] */
    eax = MEM32(edi); /* 0x006E942A: mov eax, dword ptr [edi] */
    PUSH32(esp, 1); /* 0x006E942C: push 1 */
    PUSH32(esp, ecx); /* 0x006E942E: push ecx */
    ecx = edi; /* 0x006E942F: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006E9431: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)MEM8(ebp + (-0x5)); /* 0x006E9434: movzx ecx, byte ptr [ebp - 5] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x006E9438: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E9446; /* 0x006E943B: jne 0x6e9446 */
L_006E943D:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x006E943D: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x60) = 1; /* 0x006E943F: mov dword ptr [esi + 0x60], 1 */
L_006E9446:
    MEM8(ebp + ebx + (-0x3C)) = (uint8_t)(LO8(ecx)); /* 0x006E9446: mov byte ptr [ebp + ebx - 0x3c], cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006E944A: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, 0x1Bu */ /* 0x006E944B: cmp ebx, 0x1b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006E9402; /* 0x006E944E: jb 0x6e9402 */
L_006E9450:
    /* cmp MEM32(esi + 0x60), 0 */ /* 0x006E9450: cmp dword ptr [esi + 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x60)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E9651; /* 0x006E9454: jne 0x6e9651 */
L_006E945A:
    /* cmp MEM8(ebp + (-0x38)), 0 */ /* 0x006E945A: cmp byte ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x38))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E95E9; /* 0x006E945E: jne 0x6e95e9 */
L_006E9464:
    ecx = (uint32_t)MEM8(ebp + (-0x23)); /* 0x006E9464: movzx ecx, byte ptr [ebp - 0x23] */
    eax = (uint32_t)MEM8(ebp + (-0x24)); /* 0x006E9468: movzx eax, byte ptr [ebp - 0x24] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x006E946C: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x006E946C: shl ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006E946F: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x25)); /* 0x006E9471: movzx eax, byte ptr [ebp - 0x25] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x006E9475: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x006E9475: shl ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006E9478: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebp + (-0x26)); /* 0x006E947A: movzx eax, byte ptr [ebp - 0x26] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x006E947E: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x006E947E: shl ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006E9481: add ecx, eax */
    _flag_k = FK_ADD;
    eax = 0x16u; /* 0x006E9483: mov eax, 0x16 */
    MEM32(ebp + (-0x20)) = ecx; /* 0x006E9488: mov dword ptr [ebp - 0x20], ecx */
    goto L_006E9490; /* 0x006E948B: jmp 0x6e9490 */
L_006E9490:
    /* cmp eax, 0x1Bu */ /* 0x006E9490: cmp eax, 0x1b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006E973E; /* 0x006E9493: jae 0x6e973e */
L_006E9499:
    MEM8(ebp + eax + (-0x3C)) = (uint8_t)(0); /* 0x006E9499: mov byte ptr [ebp + eax - 0x3c], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006E949E: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x1Au */ /* 0x006E949F: cmp eax, 0x1a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006E9490; /* 0x006E94A2: jb 0x6e9490 */
L_006E94A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006E94A4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006E94A6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006E94B0; /* 0x006E94A8: jmp 0x6e94b0 */
L_006E94B0:
    ecx = (uint32_t)MEM8(ebp + edx + (-0x3C)); /* 0x006E94B0: movzx ecx, byte ptr [ebp + edx - 0x3c] */
    eax = edi; /* 0x006E94B5: mov eax, edi */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x006E94B7: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x006E94B7: shr eax, 0x18 */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x006E94BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edi) >> 24) & 1u); /* 0x006E94BC: shl edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 8u; /* 0x006E94BC: shl edi, 8 */
    eax = (uint32_t)MEM8(ebp + edx + (-0x3B)); /* 0x006E94BF: movzx eax, byte ptr [ebp + edx - 0x3b] */
    _flag_a = (uint32_t)((edi ^ MEM32(ecx * 4 + 0x925070))); _flag_b = (uint32_t)((edi ^ MEM32(ecx * 4 + 0x925070)));
    edi = edi ^ MEM32(ecx * 4 + 0x925070); /* 0x006E94C4: xor edi, dword ptr [ecx*4 + 0x925070] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x006E94CB: mov ecx, edi */
    if (8u) _cf = (((edi) >> 24) & 1u); /* 0x006E94CD: shl edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 8u; /* 0x006E94CD: shl edi, 8 */
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x006E94D0: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x006E94D0: shr ecx, 0x18 */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x006E94D3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ MEM32(ecx * 4 + 0x925070))); _flag_b = (uint32_t)((edi ^ MEM32(ecx * 4 + 0x925070)));
    edi = edi ^ MEM32(ecx * 4 + 0x925070); /* 0x006E94D5: xor edi, dword ptr [ecx*4 + 0x925070] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)MEM8(ebp + edx + (-0x3A)); /* 0x006E94DC: movzx ecx, byte ptr [ebp + edx - 0x3a] */
    eax = edi; /* 0x006E94E1: mov eax, edi */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x006E94E3: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x006E94E3: shr eax, 0x18 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 3; /* 0x006E94E6: add edx, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x006E94E9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edi) >> 24) & 1u); /* 0x006E94EB: shl edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 8u; /* 0x006E94EB: shl edi, 8 */
    _flag_a = (uint32_t)((edi ^ MEM32(ecx * 4 + 0x925070))); _flag_b = (uint32_t)((edi ^ MEM32(ecx * 4 + 0x925070)));
    edi = edi ^ MEM32(ecx * 4 + 0x925070); /* 0x006E94EE: xor edi, dword ptr [ecx*4 + 0x925070] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x1Bu */ /* 0x006E94F5: cmp edx, 0x1b */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006E94B0; /* 0x006E94F8: jb 0x6e94b0 */
L_006E94FA:
    eax = (uint32_t)MEM8(ebp + (-0x22)); /* 0x006E94FA: movzx eax, byte ptr [ebp - 0x22] */
    MEM32(ebp + (-0x10)) = 0; /* 0x006E94FE: mov dword ptr [ebp - 0x10], 0 */
    MEM32(ebp + (-0x14)) = eax; /* 0x006E9505: mov dword ptr [ebp - 0x14], eax */
    /* test eax, eax */ /* 0x006E9508: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E95E4; /* 0x006E950A: je 0x6e95e4 */
L_006E9510:
    eax = MEM32(esi + 0x20); /* 0x006E9510: mov eax, dword ptr [esi + 0x20] */
    /* test eax, eax */ /* 0x006E9513: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9524; /* 0x006E9515: je 0x6e9524 */
L_006E9517:
    /* cmp eax, MEM32(esi + 0x28) */ /* 0x006E9517: cmp eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006E954B; /* 0x006E951A: jae 0x6e954b */
L_006E951C:
    SET_LO8(ecx, MEM8(eax)); /* 0x006E951C: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006E951E: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x20) = eax; /* 0x006E951F: mov dword ptr [esi + 0x20], eax */
    goto L_006E9554; /* 0x006E9522: jmp 0x6e9554 */
L_006E9524:
    ebx = MEM32(esi + 0x14); /* 0x006E9524: mov ebx, dword ptr [esi + 0x14] */
    ecx = ebx; /* 0x006E9527: mov ecx, ebx */
    eax = MEM32(ebx); /* 0x006E9529: mov eax, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006E952B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006E952E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006E954B; /* 0x006E9530: jne 0x6e954b */
L_006E9532:
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(eax)); /* 0x006E9532: mov byte ptr [ebp - 5], al */
    ecx = ebp + (-0x5); /* 0x006E9535: lea ecx, [ebp - 5] */
    eax = MEM32(ebx); /* 0x006E9538: mov eax, dword ptr [ebx] */
    PUSH32(esp, 1); /* 0x006E953A: push 1 */
    PUSH32(esp, ecx); /* 0x006E953C: push ecx */
    ecx = ebx; /* 0x006E953D: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006E953F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)MEM8(ebp + (-0x5)); /* 0x006E9542: movzx ecx, byte ptr [ebp - 5] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x006E9546: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E9554; /* 0x006E9549: jne 0x6e9554 */
L_006E954B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x006E954B: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x60) = 1; /* 0x006E954D: mov dword ptr [esi + 0x60], 1 */
L_006E9554:
    edx = (uint32_t)LO8(ecx); /* 0x006E9554: movzx edx, cl */
    ecx = edi; /* 0x006E9557: mov ecx, edi */
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x006E9559: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x006E9559: shr ecx, 0x18 */
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x006E955C: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edi) >> 24) & 1u); /* 0x006E955E: shl edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 8u; /* 0x006E955E: shl edi, 8 */
    _flag_a = (uint32_t)((edi ^ MEM32(ecx * 4 + 0x925070))); _flag_b = (uint32_t)((edi ^ MEM32(ecx * 4 + 0x925070)));
    edi = edi ^ MEM32(ecx * 4 + 0x925070); /* 0x006E9561: xor edi, dword ptr [ecx*4 + 0x925070] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x10)); /* 0x006E9568: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x006E956B: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x006E956D: dec dword ptr [ebp - 0x14] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = ecx; /* 0x006E9570: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006E9510; /* 0x006E9573: jne 0x6e9510 */
L_006E9575:
    /* test ecx, ecx */ /* 0x006E9575: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E95E4; /* 0x006E9577: je 0x6e95e4 */
L_006E9579:
    /* cmp MEM32(esi + 0x60), 0 */ /* 0x006E9579: cmp dword ptr [esi + 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x60)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E9651; /* 0x006E957D: jne 0x6e9651 */
L_006E9583:
    /* test ecx, ecx */ /* 0x006E9583: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E95E4; /* 0x006E9585: je 0x6e95e4 */
L_006E9587:
    eax = MEM32(esi + 0x20); /* 0x006E9587: mov eax, dword ptr [esi + 0x20] */
    /* test eax, eax */ /* 0x006E958A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E959B; /* 0x006E958C: je 0x6e959b */
L_006E958E:
    /* cmp eax, MEM32(esi + 0x28) */ /* 0x006E958E: cmp eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006E95C2; /* 0x006E9591: jae 0x6e95c2 */
L_006E9593:
    SET_LO8(edx, MEM8(eax)); /* 0x006E9593: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006E9595: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x20) = eax; /* 0x006E9596: mov dword ptr [esi + 0x20], eax */
    goto L_006E95CB; /* 0x006E9599: jmp 0x6e95cb */
L_006E959B:
    ebx = MEM32(esi + 0x14); /* 0x006E959B: mov ebx, dword ptr [esi + 0x14] */
    ecx = ebx; /* 0x006E959E: mov ecx, ebx */
    eax = MEM32(ebx); /* 0x006E95A0: mov eax, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006E95A2: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006E95A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006E95C2; /* 0x006E95A7: jne 0x6e95c2 */
L_006E95A9:
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(eax)); /* 0x006E95A9: mov byte ptr [ebp - 5], al */
    ecx = ebp + (-0x5); /* 0x006E95AC: lea ecx, [ebp - 5] */
    eax = MEM32(ebx); /* 0x006E95AF: mov eax, dword ptr [ebx] */
    PUSH32(esp, 1); /* 0x006E95B1: push 1 */
    PUSH32(esp, ecx); /* 0x006E95B3: push ecx */
    ecx = ebx; /* 0x006E95B4: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006E95B6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    edx = (uint32_t)MEM8(ebp + (-0x5)); /* 0x006E95B9: movzx edx, byte ptr [ebp - 5] */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x006E95BD: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E95CB; /* 0x006E95C0: jne 0x6e95cb */
L_006E95C2:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x006E95C2: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x60) = 1; /* 0x006E95C4: mov dword ptr [esi + 0x60], 1 */
L_006E95CB:
    ecx = edi; /* 0x006E95CB: mov ecx, edi */
    eax = (uint32_t)LO8(edx); /* 0x006E95CD: movzx eax, dl */
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x006E95D0: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x006E95D0: shr ecx, 0x18 */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x006E95D3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edi) >> 24) & 1u); /* 0x006E95D5: shl edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 8u; /* 0x006E95D5: shl edi, 8 */
    _flag_a = (uint32_t)((edi ^ MEM32(ecx * 4 + 0x925070))); _flag_b = (uint32_t)((edi ^ MEM32(ecx * 4 + 0x925070)));
    edi = edi ^ MEM32(ecx * 4 + 0x925070); /* 0x006E95D8: xor edi, dword ptr [ecx*4 + 0x925070] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x006E95DF: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006E9587; /* 0x006E95E2: jne 0x6e9587 */
L_006E95E4:
    /* cmp edi, MEM32(ebp + (-0x20)) */ /* 0x006E95E4: cmp edi, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006E9664; /* 0x006E95E7: je 0x6e9664 */
L_006E95E9:
    ebx = MEM32(ebp + (-0xC)); /* 0x006E95E9: mov ebx, dword ptr [ebp - 0xc] */
L_006E95EC:
    /* cmp MEM8(esi + 0x30), 0 */ /* 0x006E95EC: cmp byte ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E9647; /* 0x006E95F0: jne 0x6e9647 */
L_006E95F2:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x006E95F2: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x60) = 0; /* 0x006E95F6: mov dword ptr [esi + 0x60], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006E9621; /* 0x006E95FD: je 0x6e9621 */
L_006E95FF:
    edx = MEM32(esi + 0x24); /* 0x006E95FF: mov edx, dword ptr [esi + 0x24] */
    ecx = MEM32(esi + 0x28); /* 0x006E9602: mov ecx, dword ptr [esi + 0x28] */
    eax = edx + ebx; /* 0x006E9605: lea eax, [edx + ebx] */
    /* cmp eax, ecx */ /* 0x006E9608: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006E9615; /* 0x006E960A: jae 0x6e9615 */
L_006E960C:
    /* cmp eax, edx */ /* 0x006E960C: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006E9615; /* 0x006E960E: jb 0x6e9615 */
L_006E9610:
    MEM32(esi + 0x20) = eax; /* 0x006E9610: mov dword ptr [esi + 0x20], eax */
    goto L_006E9647; /* 0x006E9613: jmp 0x6e9647 */
L_006E9615:
    MEM32(esi + 0x20) = ecx; /* 0x006E9615: mov dword ptr [esi + 0x20], ecx */
    MEM32(esi + 0x60) = 1; /* 0x006E9618: mov dword ptr [esi + 0x60], 1 */
    goto L_006E9647; /* 0x006E961F: jmp 0x6e9647 */
L_006E9621:
    edx = MEM32(esi + 0x18); /* 0x006E9621: mov edx, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x006E9624: add edx, ebx */
    _flag_k = FK_ADD;
    /* cmp edx, ebx */ /* 0x006E9626: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006E9632; /* 0x006E9628: jb 0x6e9632 */
L_006E962A:
    /* cmp ebx, 0x80000000u */ /* 0x006E962A: cmp ebx, 0x80000000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006E963E; /* 0x006E9630: jb 0x6e963e */
L_006E9632:
    edx = 0x7FFFFFFFu; /* 0x006E9632: mov edx, 0x7fffffff */
    MEM32(esi + 0x60) = 1; /* 0x006E9637: mov dword ptr [esi + 0x60], 1 */
L_006E963E:
    ecx = MEM32(esi + 0x14); /* 0x006E963E: mov ecx, dword ptr [esi + 0x14] */
    PUSH32(esp, edx); /* 0x006E9641: push edx */
    eax = MEM32(ecx); /* 0x006E9642: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x006E9644: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_006E9647:
    /* cmp MEM32(esi + 0x60), 0 */ /* 0x006E9647: cmp dword ptr [esi + 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x60)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006E9388; /* 0x006E964B: je 0x6e9388 */
L_006E9651:
    edi = POP32_VAL(esp); /* 0x006E9651: pop edi */
    esi = POP32_VAL(esp); /* 0x006E9652: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006E9653: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006E9655: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006E9656: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006E9659: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006E965B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006E9660: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E9662: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9663: ret  */
L_006E9664:
    edi = MEM32(ebp + (-0x18)); /* 0x006E9664: mov edi, dword ptr [ebp - 0x18] */
    /* test edi, edi */ /* 0x006E9667: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E968E; /* 0x006E9669: je 0x6e968e */
L_006E966B:
    /* cmp MEM8(esi + 0x30), 0 */ /* 0x006E966B: cmp byte ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006E9675; /* 0x006E966F: je 0x6e9675 */
L_006E9671:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006E9671: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006E968C; /* 0x006E9673: jmp 0x6e968c */
L_006E9675:
    eax = MEM32(esi + 0x20); /* 0x006E9675: mov eax, dword ptr [esi + 0x20] */
    /* test eax, eax */ /* 0x006E9678: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9681; /* 0x006E967A: je 0x6e9681 */
L_006E967C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x24); /* 0x006E967C: sub eax, dword ptr [esi + 0x24] */
    _flag_k = FK_CMP;
    goto L_006E968C; /* 0x006E967F: jmp 0x6e968c */
L_006E9681:
    ecx = MEM32(esi + 0x14); /* 0x006E9681: mov ecx, dword ptr [esi + 0x14] */
    eax = MEM32(ecx); /* 0x006E9684: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x006E9686: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x18); /* 0x006E9689: sub eax, dword ptr [esi + 0x18] */
    _flag_k = FK_CMP;
L_006E968C:
    MEM32(edi) = eax; /* 0x006E968C: mov dword ptr [edi], eax */
L_006E968E:
    ecx = MEM32(ebp + (-0x1C)); /* 0x006E968E: mov ecx, dword ptr [ebp - 0x1c] */
    /* test ecx, ecx */ /* 0x006E9691: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E96A1; /* 0x006E9693: je 0x6e96a1 */
L_006E9695:
    eax = (uint32_t)MEM8(ebp + (-0x37)); /* 0x006E9695: movzx eax, byte ptr [ebp - 0x37] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x006E9699: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x006E9699: shr eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x006E969C: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x006E969F: mov dword ptr [ecx], eax */
L_006E96A1:
    ecx = MEM32(ebp + (-0xC)); /* 0x006E96A1: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x006E96A4: dec ecx */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi + 0x30), 0 */ /* 0x006E96A5: cmp byte ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E9728; /* 0x006E96A9: jne 0x6e9728 */
L_006E96AB:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x006E96AB: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x60) = 0; /* 0x006E96AF: mov dword ptr [esi + 0x60], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006E9702; /* 0x006E96B6: je 0x6e9702 */
L_006E96B8:
    edx = MEM32(esi + 0x24); /* 0x006E96B8: mov edx, dword ptr [esi + 0x24] */
    eax = edx + ecx; /* 0x006E96BB: lea eax, [edx + ecx] */
    ecx = MEM32(esi + 0x28); /* 0x006E96BE: mov ecx, dword ptr [esi + 0x28] */
    /* cmp eax, ecx */ /* 0x006E96C1: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006E96E2; /* 0x006E96C3: jae 0x6e96e2 */
L_006E96C5:
    /* cmp eax, edx */ /* 0x006E96C5: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006E96E2; /* 0x006E96C7: jb 0x6e96e2 */
L_006E96C9:
    edi = POP32_VAL(esp); /* 0x006E96C9: pop edi */
    MEM32(esi + 0x20) = eax; /* 0x006E96CA: mov dword ptr [esi + 0x20], eax */
    eax = 1; /* 0x006E96CD: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x006E96D2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006E96D3: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006E96D4: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006E96D7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006E96D9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006E96DE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E96E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E96E1: ret  */
L_006E96E2:
    edi = POP32_VAL(esp); /* 0x006E96E2: pop edi */
    MEM32(esi + 0x20) = ecx; /* 0x006E96E3: mov dword ptr [esi + 0x20], ecx */
    eax = 1; /* 0x006E96E6: mov eax, 1 */
    MEM32(esi + 0x60) = 1; /* 0x006E96EB: mov dword ptr [esi + 0x60], 1 */
    esi = POP32_VAL(esp); /* 0x006E96F2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006E96F3: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006E96F4: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006E96F7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006E96F9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006E96FE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E9700: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9701: ret  */
L_006E9702:
    edx = MEM32(esi + 0x18); /* 0x006E9702: mov edx, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x006E9705: add edx, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, ecx */ /* 0x006E9707: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006E9713; /* 0x006E9709: jb 0x6e9713 */
L_006E970B:
    /* cmp ecx, 0x80000000u */ /* 0x006E970B: cmp ecx, 0x80000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006E971F; /* 0x006E9711: jb 0x6e971f */
L_006E9713:
    edx = 0x7FFFFFFFu; /* 0x006E9713: mov edx, 0x7fffffff */
    MEM32(esi + 0x60) = 1; /* 0x006E9718: mov dword ptr [esi + 0x60], 1 */
L_006E971F:
    ecx = MEM32(esi + 0x14); /* 0x006E971F: mov ecx, dword ptr [esi + 0x14] */
    PUSH32(esp, edx); /* 0x006E9722: push edx */
    eax = MEM32(ecx); /* 0x006E9723: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x006E9725: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_006E9728:
    ecx = MEM32(ebp + (-0x4)); /* 0x006E9728: mov ecx, dword ptr [ebp - 4] */
    eax = 1; /* 0x006E972B: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x006E9730: pop edi */
    esi = POP32_VAL(esp); /* 0x006E9731: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006E9732: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006E9734: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006E9735: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006E973A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E973C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E973D: ret  */
L_006E973E:
    RECOMP_CALL(sub_0077F8A2); /* 0x006E973E: call 0x77f8a2 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006E9743u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006E9750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9750u);

    goto L_006E9750;
L_006E7690:
    PUSH32(esp, ebp); /* 0x006E7690: push ebp */
    ebp = esp; /* 0x006E7691: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x006E7693: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x10); /* 0x006E7696: lea eax, [ebp - 0x10] */
    edx = ebp + (-0x4); /* 0x006E7699: lea edx, [ebp - 4] */
    PUSH32(esp, esi); /* 0x006E769C: push esi */
    PUSH32(esp, eax); /* 0x006E769D: push eax */
    eax = ebp + (-0xC); /* 0x006E769E: lea eax, [ebp - 0xc] */
    esi = ecx; /* 0x006E76A1: mov esi, ecx */
    PUSH32(esp, eax); /* 0x006E76A3: push eax */
    eax = ebp + (-0x8); /* 0x006E76A4: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x006E76A7: push eax */
    eax = ebp + (-0x14); /* 0x006E76A8: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x006E76AB: push eax */
    RECOMP_CALL(sub_006E67A0); /* 0x006E76AC: call 0x6e67a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006E76B1: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006E76B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E76FA; /* 0x006E76B6: je 0x6e76fa */
L_006E76B8:
    eax = ebp + (-0x4); /* 0x006E76B8: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x006E76BB: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x006E76BC: push dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0x10)); /* 0x006E76BF: mov eax, dword ptr [ebp - 0x10] */
    edx = ebp + (-0x10); /* 0x006E76C2: lea edx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x006E76C5: push dword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x006E76C8: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006E76C9: push dword ptr [ebp - 4] */
    eax = eax + eax * 2; /* 0x006E76CC: lea eax, [eax + eax*2] */
    ecx = esi; /* 0x006E76CF: mov ecx, esi */
    eax = eax + 0xCE; /* 0x006E76D1: lea eax, [eax + 0xce] */
    eax = esi + eax * 2; /* 0x006E76D7: lea eax, [esi + eax*2] */
    PUSH32(esp, eax); /* 0x006E76DA: push eax */
    RECOMP_CALL(sub_006E69F0); /* 0x006E76DB: call 0x6e69f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006E76E0: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006E76E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E76FA; /* 0x006E76E5: je 0x6e76fa */
L_006E76E7:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x006E76E7: push dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x10)); /* 0x006E76EA: mov edx, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x006E76ED: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006E76EF: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_006E7500); /* 0x006E76F2: call 0x6e7500 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006E76F7: add esp, 8 */
    _flag_k = FK_ADD;
L_006E76FA:
    esi = POP32_VAL(esp); /* 0x006E76FA: pop esi */
    esp = ebp; /* 0x006E76FB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E76FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E76FE: ret  */
L_006E9750:
    PUSH32(esp, esi); /* 0x006E9750: push esi */
    esi = ecx; /* 0x006E9751: mov esi, ecx */
    /* cmp MEM8(esi + 0x30), 0 */ /* 0x006E9753: cmp byte ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006E976F; /* 0x006E9757: je 0x6e976f */
L_006E9759:
    /* cmp MEM32(esi + 0x60), 0 */ /* 0x006E9759: cmp dword ptr [esi + 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x60)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x64) = 2; /* 0x006E975D: mov dword ptr [esi + 0x64], 2 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E976D; /* 0x006E9764: jne 0x6e976d */
L_006E9766:
    MEM32(esi + 0x64) = 2; /* 0x006E9766: mov dword ptr [esi + 0x64], 2 */
L_006E976D:
    esi = POP32_VAL(esp); /* 0x006E976D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E976E: ret  */
L_006E976F:
    edx = MEM32(esi + 0x34); /* 0x006E976F: mov edx, dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_006E3E30); /* 0x006E9772: call 0x6e3e30 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3E0) = 0; /* 0x006E9777: mov dword ptr [esi + 0x3e0], 0 */
    ecx = esi; /* 0x006E9781: mov ecx, esi */
    MEM8(esi + 0x561) = (uint8_t)(1); /* 0x006E9783: mov byte ptr [esi + 0x561], 1 */
    MEM32(esi + 0x564) = 0xFFFFFFFFu; /* 0x006E978A: mov dword ptr [esi + 0x564], 0xffffffff */
    esi = POP32_VAL(esp); /* 0x006E9794: pop esi */
    RECOMP_BACKEDGE();
    goto L_006E7690; /* 0x006E9795: jmp 0x6e7690 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006E97A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E97A0u);

L_006E97A0:
    PUSH32(esp, ebp); /* 0x006E97A0: push ebp */
    ebp = esp; /* 0x006E97A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006E97A3: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006E97A6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006E97AB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006E97AD: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x006E97B0: push esi */
    esi = ecx; /* 0x006E97B1: mov esi, ecx */
    /* cmp MEM8(esi + 0x30), 0 */ /* 0x006E97B3: cmp byte ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006E97DB; /* 0x006E97B7: je 0x6e97db */
L_006E97B9:
    /* cmp MEM32(esi + 0x60), 0 */ /* 0x006E97B9: cmp dword ptr [esi + 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x60)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 2; /* 0x006E97BD: mov eax, 2 */
    ecx = eax; /* 0x006E97C2: mov ecx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x006E97C4: cmove eax, ecx */
    MEM32(esi + 0x64) = eax; /* 0x006E97C7: mov dword ptr [esi + 0x64], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006E97CA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006E97CC: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x006E97CD: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006E97D0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006E97D2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006E97D7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E97D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E97DA: ret  */
L_006E97DB:
    /* cmp MEM32(esi + 0x31C), 0 */ /* 0x006E97DB: cmp dword ptr [esi + 0x31c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x31C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E9931; /* 0x006E97E2: jne 0x6e9931 */
L_006E97E8:
    eax = MEM32(esi + 0x20); /* 0x006E97E8: mov eax, dword ptr [esi + 0x20] */
    /* test eax, eax */ /* 0x006E97EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E97F4; /* 0x006E97ED: je 0x6e97f4 */
L_006E97EF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x24); /* 0x006E97EF: sub eax, dword ptr [esi + 0x24] */
    _flag_k = FK_CMP;
    goto L_006E97FF; /* 0x006E97F2: jmp 0x6e97ff */
L_006E97F4:
    ecx = MEM32(esi + 0x14); /* 0x006E97F4: mov ecx, dword ptr [esi + 0x14] */
    eax = MEM32(ecx); /* 0x006E97F7: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x006E97F9: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x18); /* 0x006E97FC: sub eax, dword ptr [esi + 0x18] */
    _flag_k = FK_CMP;
L_006E97FF:
    edx = MEM32(esi + 0x2C); /* 0x006E97FF: mov edx, dword ptr [esi + 0x2c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x006E9802: mov dword ptr [ebp - 0x18], eax */
    /* cmp edx, 0x00010000u */ /* 0x006E9805: cmp edx, 0x10000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006E9818; /* 0x006E980B: jb 0x6e9818 */
L_006E980D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFF0000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFF0000u; /* 0x006E980D: add edx, 0xffff0000 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi + 0x34) */ /* 0x006E9813: cmp edx, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006E981B; /* 0x006E9816: jae 0x6e981b */
L_006E9818:
    edx = MEM32(esi + 0x34); /* 0x006E9818: mov edx, dword ptr [esi + 0x34] */
L_006E981B:
    ecx = esi; /* 0x006E981B: mov ecx, esi */
    RECOMP_CALL(sub_006E3E30); /* 0x006E981D: call 0x6e3e30 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x006E9822: lea eax, [ebp - 0x14] */
    ecx = esi; /* 0x006E9825: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006E9827: push eax */
    edx = ebp + (-0x10); /* 0x006E9828: lea edx, [ebp - 0x10] */
    RECOMP_CALL(sub_006E9360); /* 0x006E982B: call 0x6e9360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E9830: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006E9833: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006E984D; /* 0x006E9835: jne 0x6e984d */
L_006E9837:
    MEM32(esi + 0x64) = 0x24u; /* 0x006E9837: mov dword ptr [esi + 0x64], 0x24 */
    MEM32(esi + 0x31C) = 0xFFFFFFFFu; /* 0x006E983E: mov dword ptr [esi + 0x31c], 0xffffffff */
    goto L_006E9927; /* 0x006E9848: jmp 0x6e9927 */
L_006E984D:
    /* cmp MEM8(esi + 0x30), 0 */ /* 0x006E984D: cmp byte ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, edi); /* 0x006E9851: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006E9858; /* 0x006E9852: je 0x6e9858 */
L_006E9854:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006E9854: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006E9871; /* 0x006E9856: jmp 0x6e9871 */
L_006E9858:
    edi = MEM32(esi + 0x20); /* 0x006E9858: mov edi, dword ptr [esi + 0x20] */
    /* test edi, edi */ /* 0x006E985B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9864; /* 0x006E985D: je 0x6e9864 */
L_006E985F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(esi + 0x24); /* 0x006E985F: sub edi, dword ptr [esi + 0x24] */
    _flag_k = FK_CMP;
    goto L_006E9871; /* 0x006E9862: jmp 0x6e9871 */
L_006E9864:
    ecx = MEM32(esi + 0x14); /* 0x006E9864: mov ecx, dword ptr [esi + 0x14] */
    eax = MEM32(ecx); /* 0x006E9867: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x006E9869: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006E986C: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(esi + 0x18); /* 0x006E986E: sub edi, dword ptr [esi + 0x18] */
    _flag_k = FK_CMP;
L_006E9871:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x006E9871: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E98C8; /* 0x006E9875: jne 0x6e98c8 */
L_006E9877:
    goto L_006E9880; /* 0x006E9877: jmp 0x6e9880 */
L_006E9880:
    edx = MEM32(ebp + (-0x10)); /* 0x006E9880: mov edx, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x006E9883: mov ecx, esi */
    RECOMP_CALL(sub_006E3E30); /* 0x006E9885: call 0x6e3e30 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x006E988A: lea eax, [ebp - 0x14] */
    ecx = esi; /* 0x006E988D: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006E988F: push eax */
    edx = ebp + (-0x10); /* 0x006E9890: lea edx, [ebp - 0x10] */
    RECOMP_CALL(sub_006E9360); /* 0x006E9893: call 0x6e9360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E9898: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006E989B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E98C8; /* 0x006E989D: je 0x6e98c8 */
L_006E989F:
    /* cmp MEM8(esi + 0x30), 0 */ /* 0x006E989F: cmp byte ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006E98A9; /* 0x006E98A3: je 0x6e98a9 */
L_006E98A5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006E98A5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006E98C2; /* 0x006E98A7: jmp 0x6e98c2 */
L_006E98A9:
    edi = MEM32(esi + 0x20); /* 0x006E98A9: mov edi, dword ptr [esi + 0x20] */
    /* test edi, edi */ /* 0x006E98AC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E98B5; /* 0x006E98AE: je 0x6e98b5 */
L_006E98B0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(esi + 0x24); /* 0x006E98B0: sub edi, dword ptr [esi + 0x24] */
    _flag_k = FK_CMP;
    goto L_006E98C2; /* 0x006E98B3: jmp 0x6e98c2 */
L_006E98B5:
    ecx = MEM32(esi + 0x14); /* 0x006E98B5: mov ecx, dword ptr [esi + 0x14] */
    eax = MEM32(ecx); /* 0x006E98B8: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x006E98BA: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006E98BD: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(esi + 0x18); /* 0x006E98BF: sub edi, dword ptr [esi + 0x18] */
    _flag_k = FK_CMP;
L_006E98C2:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x006E98C2: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006E9880; /* 0x006E98C6: je 0x6e9880 */
L_006E98C8:
    PUSH32(esp, ebx); /* 0x006E98C8: push ebx */
    edx = edi; /* 0x006E98C9: mov edx, edi */
    ecx = esi; /* 0x006E98CB: mov ecx, esi */
    RECOMP_CALL(sub_006E3E30); /* 0x006E98CD: call 0x6e3e30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x006E98D2: push 6 */
    edx = ebp + (-0xC); /* 0x006E98D4: lea edx, [ebp - 0xc] */
    ecx = esi; /* 0x006E98D7: mov ecx, esi */
    RECOMP_CALL(sub_006E3DA0); /* 0x006E98D9: call 0x6e3da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E98DE: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x006E98E1: mov ecx, esi */
    RECOMP_CALL(sub_006E3D60); /* 0x006E98E3: call 0x6e3d60 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x006E98E8: mov ecx, esi */
    ebx = eax; /* 0x006E98EA: mov ebx, eax */
    RECOMP_CALL(sub_006E3D60); /* 0x006E98EC: call 0x6e3d60 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x006E98F1: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E9909; /* 0x006E98F4: jne 0x6e9909 */
L_006E98F6:
    /* cmp eax, ebx */ /* 0x006E98F6: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E9909; /* 0x006E98F8: jne 0x6e9909 */
L_006E98FA:
    MEM32(esi + 0x64) = 0x24u; /* 0x006E98FA: mov dword ptr [esi + 0x64], 0x24 */
    MEM32(esi + 0x31C) = ebx; /* 0x006E9901: mov dword ptr [esi + 0x31c], ebx */
    goto L_006E9925; /* 0x006E9907: jmp 0x6e9925 */
L_006E9909:
    /* test eax, eax */ /* 0x006E9909: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x44) = edi; /* 0x006E990B: mov dword ptr [esi + 0x44], edi */
    eax = MEM32(ebp + (-0x10)); /* 0x006E990E: mov eax, dword ptr [ebp - 0x10] */
    ecx = 0xFFFFFFFEu; /* 0x006E9911: mov ecx, 0xfffffffe */
    if (TEST_NZ(_flag_a, _flag_b)) { ebx = ecx; } /* 0x006E9916: cmovne ebx, ecx */
    MEM32(esi + 0x48) = eax; /* 0x006E9919: mov dword ptr [esi + 0x48], eax */
    MEM32(esi + 0x31C) = ebx; /* 0x006E991C: mov dword ptr [esi + 0x31c], ebx */
    MEM32(esi + 0x4C) = ebx; /* 0x006E9922: mov dword ptr [esi + 0x4c], ebx */
L_006E9925:
    ebx = POP32_VAL(esp); /* 0x006E9925: pop ebx */
    edi = POP32_VAL(esp); /* 0x006E9926: pop edi */
L_006E9927:
    edx = MEM32(ebp + (-0x18)); /* 0x006E9927: mov edx, dword ptr [ebp - 0x18] */
    ecx = esi; /* 0x006E992A: mov ecx, esi */
    RECOMP_CALL(sub_006E3E30); /* 0x006E992C: call 0x6e3e30 */
    RECOMP_FLAGS_IN();
L_006E9931:
    eax = MEM32(esi + 0x31C); /* 0x006E9931: mov eax, dword ptr [esi + 0x31c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006E9937: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006E9939: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x006E993C: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x006E993D: cmove eax, ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006E9940: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006E9943: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006E9945: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006E994A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E994C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E994D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006E9950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9950u);

L_006E9950:
    PUSH32(esp, ebp); /* 0x006E9950: push ebp */
    ebp = esp; /* 0x006E9951: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x006E9953: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006E9956: push esi */
    esi = ecx; /* 0x006E9957: mov esi, ecx */
    /* cmp MEM8(esi + 0x30), 0 */ /* 0x006E9959: cmp byte ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006E9977; /* 0x006E995D: je 0x6e9977 */
L_006E995F:
    /* cmp MEM32(esi + 0x60), 0 */ /* 0x006E995F: cmp dword ptr [esi + 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x60)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 2; /* 0x006E9963: mov eax, 2 */
    ecx = eax; /* 0x006E9968: mov ecx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x006E996A: cmove eax, ecx */
    MEM32(esi + 0x64) = eax; /* 0x006E996D: mov dword ptr [esi + 0x64], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006E9970: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006E9972: pop esi */
    esp = ebp; /* 0x006E9973: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E9975: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9976: ret  */
L_006E9977:
    PUSH32(esp, edi); /* 0x006E9977: push edi */
    eax = ebp + (-0x10); /* 0x006E9978: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x006E997B: push eax */
    eax = ebp + (-0x8); /* 0x006E997C: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x006E997F: push eax */
    eax = ebp + (-0xC); /* 0x006E9980: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x006E9983: push eax */
    eax = ebp + (-0x14); /* 0x006E9984: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x006E9987: push eax */
    edx = ebp + (-0x4); /* 0x006E9988: lea edx, [ebp - 4] */
    RECOMP_CALL(sub_006E67A0); /* 0x006E998B: call 0x6e67a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006E9990: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006E9993: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9A32; /* 0x006E9995: je 0x6e9a32 */
L_006E999B:
    edi = MEM32(ebp + (-0xC)); /* 0x006E999B: mov edi, dword ptr [ebp - 0xc] */
    eax = ebp + (-0x4); /* 0x006E999E: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x006E99A1: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x006E99A2: push dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x10)); /* 0x006E99A5: mov eax, dword ptr [ebp - 0x10] */
    edx = ebp + (-0x10); /* 0x006E99A8: lea edx, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x006E99AB: push edi */
    PUSH32(esp, ecx); /* 0x006E99AC: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006E99AD: push dword ptr [ebp - 4] */
    eax = eax + eax * 2; /* 0x006E99B0: lea eax, [eax + eax*2] */
    ecx = esi; /* 0x006E99B3: mov ecx, esi */
    eax = eax + 0xCE; /* 0x006E99B5: lea eax, [eax + 0xce] */
    eax = esi + eax * 2; /* 0x006E99BB: lea eax, [esi + eax*2] */
    PUSH32(esp, eax); /* 0x006E99BE: push eax */
    RECOMP_CALL(sub_006E69F0); /* 0x006E99BF: call 0x6e69f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006E99C4: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006E99C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9A32; /* 0x006E99C9: je 0x6e9a32 */
L_006E99CB:
    edx = MEM32(ebp + (-0x10)); /* 0x006E99CB: mov edx, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x006E99CE: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x006E99D0: push ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x006E99D1: mov ebx, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x006E99D4: push edi */
    PUSH32(esp, ebx); /* 0x006E99D5: push ebx */
    RECOMP_CALL(sub_006E7500); /* 0x006E99D6: call 0x6e7500 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006E99DB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006E99DD: add esp, 8 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x006E99E0: mov edi, eax */
    MEM32(ebp + (-0x10)) = edi; /* 0x006E99E2: mov dword ptr [ebp - 0x10], edi */
    /* cmp MEM32(esi + 0x4), edx */ /* 0x006E99E5: cmp dword ptr [esi + 4], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006E9A0B; /* 0x006E99E8: jle 0x6e9a0b */
L_006E99EA:
    edi = ebx * 4; /* 0x006E99EA: lea edi, [ebx*4] */
    ecx = esi + 0x360; /* 0x006E99F1: lea ecx, [esi + 0x360] */
L_006E99F7:
    eax = MEM32(ecx + (-0x40)); /* 0x006E99F7: mov eax, dword ptr [ecx - 0x40] */
    ecx = ecx + 0x4; /* 0x006E99FA: lea ecx, [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x006E99FD: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006E99FF: inc edx */
    _flag_k = FK_INC;
    MEM32(ecx + (-0x4)) = eax; /* 0x006E9A00: mov dword ptr [ecx - 4], eax */
    /* cmp edx, MEM32(esi + 0x4) */ /* 0x006E9A03: cmp edx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006E99F7; /* 0x006E9A06: jl 0x6e99f7 */
L_006E9A08:
    edi = MEM32(ebp + (-0x10)); /* 0x006E9A08: mov edi, dword ptr [ebp - 0x10] */
L_006E9A0B:
    ecx = MEM32(ebp + 0x8); /* 0x006E9A0B: mov ecx, dword ptr [ebp + 8] */
    eax = edi + ebx; /* 0x006E9A0E: lea eax, [edi + ebx] */
    MEM32(esi + 0x5E0) = ebx; /* 0x006E9A11: mov dword ptr [esi + 0x5e0], ebx */
    MEM32(esi + 0x5E4) = eax; /* 0x006E9A17: mov dword ptr [esi + 0x5e4], eax */
    ebx = POP32_VAL(esp); /* 0x006E9A1D: pop ebx */
    /* test ecx, ecx */ /* 0x006E9A1E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9A2A; /* 0x006E9A20: je 0x6e9a2a */
L_006E9A22:
    eax = esi + 0x360; /* 0x006E9A22: lea eax, [esi + 0x360] */
    MEM32(ecx) = eax; /* 0x006E9A28: mov dword ptr [ecx], eax */
L_006E9A2A:
    eax = edi; /* 0x006E9A2A: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006E9A2C: pop edi */
    esi = POP32_VAL(esp); /* 0x006E9A2D: pop esi */
    esp = ebp; /* 0x006E9A2E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E9A30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9A31: ret  */
L_006E9A32:
    edi = POP32_VAL(esp); /* 0x006E9A32: pop edi */
    MEM32(esi + 0x5E4) = 0; /* 0x006E9A33: mov dword ptr [esi + 0x5e4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006E9A3D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x5E0) = 0; /* 0x006E9A3F: mov dword ptr [esi + 0x5e0], 0 */
    esi = POP32_VAL(esp); /* 0x006E9A49: pop esi */
    esp = ebp; /* 0x006E9A4A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E9A4C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9A4D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006E9A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9A50u);

L_006E9A50:
    PUSH32(esp, ebp); /* 0x006E9A50: push ebp */
    ebp = esp; /* 0x006E9A51: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006E9A53: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5F4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5F4u; /* 0x006E9A56: sub esp, 0x5f4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006E9A5C: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006E9A61: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x5F0) = eax; /* 0x006E9A63: mov dword ptr [esp + 0x5f0], eax */
    PUSH32(esp, ebx); /* 0x006E9A6A: push ebx */
    PUSH32(esp, esi); /* 0x006E9A6B: push esi */
    PUSH32(esp, edi); /* 0x006E9A6C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006E9A6D: mov edi, dword ptr [ebp + 8] */
    eax = esp + 0x10; /* 0x006E9A70: lea eax, [esp + 0x10] */
    PUSH32(esp, 0x5E8u); /* 0x006E9A74: push 0x5e8 */
    PUSH32(esp, 0); /* 0x006E9A79: push 0 */
    PUSH32(esp, eax); /* 0x006E9A7B: push eax */
    esi = ecx; /* 0x006E9A7C: mov esi, ecx */
    RECOMP_CALL(sub_0078083E); /* 0x006E9A7E: call 0x78083e */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x006E9A83: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006E9A85: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x006E9A88: mov ecx, esi */
    MEM32(esp + 0x70) = 0; /* 0x006E9A8A: mov dword ptr [esp + 0x70], 0 */
    MEM32(esp + 0x74) = 0; /* 0x006E9A92: mov dword ptr [esp + 0x74], 0 */
    MEM32(esp + 0x30) = 0; /* 0x006E9A9A: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x8C) = 0; /* 0x006E9AA2: mov dword ptr [esp + 0x8c], 0 */
    MEM32(esp + 0x59C) = 0xFFFFFFFFu; /* 0x006E9AAD: mov dword ptr [esp + 0x59c], 0xffffffff */
    MEM32(esp + 0x2C) = 0; /* 0x006E9AB8: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x24) = esi; /* 0x006E9AC0: mov dword ptr [esp + 0x24], esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x006E9AC4: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x28) = eax; /* 0x006E9AC7: mov dword ptr [esp + 0x28], eax */
    ecx = esp + 0x10; /* 0x006E9ACB: lea ecx, [esp + 0x10] */
    eax = MEM32(ebp + 0x10); /* 0x006E9ACF: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esp + 0x3C) = eax; /* 0x006E9AD2: mov dword ptr [esp + 0x3c], eax */
    MEM32(esp + 0x2C) = 0; /* 0x006E9AD6: mov dword ptr [esp + 0x2c], 0 */
    RECOMP_CALL(sub_006E7850); /* 0x006E9ADE: call 0x6e7850 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006E9AE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9B4E; /* 0x006E9AE5: je 0x6e9b4e */
L_006E9AE7:
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0x5E8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 0x5E8u; /* 0x006E9AE7: add dword ptr [esp + 0x18], 0x5e8 */
    _flag_k = FK_ADD;
    ecx = MEM32(esp + 0x60); /* 0x006E9AEF: mov ecx, dword ptr [esp + 0x60] */
    /* test ecx, ecx */ /* 0x006E9AF3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9B0F; /* 0x006E9AF5: je 0x6e9b0f */
L_006E9AF7:
    eax = MEM32(esp + 0x68); /* 0x006E9AF7: mov eax, dword ptr [esp + 0x68] */
    ebx = eax + ecx; /* 0x006E9AFB: lea ebx, [eax + ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5E8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x5E8u; /* 0x006E9AFE: add eax, 0x5e8 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esp + 0x6C) */ /* 0x006E9B03: cmp eax, dword ptr [esp + 0x6c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x6C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006E9B4E; /* 0x006E9B07: jg 0x6e9b4e */
L_006E9B09:
    MEM32(esp + 0x68) = eax; /* 0x006E9B09: mov dword ptr [esp + 0x68], eax */
    goto L_006E9B1F; /* 0x006E9B0D: jmp 0x6e9b1f */
L_006E9B0F:
    PUSH32(esp, 0x5E8u); /* 0x006E9B0F: push 0x5e8 */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006E9B14: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E9B1A: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x006E9B1D: mov ebx, eax */
L_006E9B1F:
    /* test ebx, ebx */ /* 0x006E9B1F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9B4E; /* 0x006E9B21: je 0x6e9b4e */
L_006E9B23:
    ecx = 0x17Au; /* 0x006E9B23: mov ecx, 0x17a */
    esi = esp + 0x10; /* 0x006E9B28: lea esi, [esp + 0x10] */
    edi = ebx; /* 0x006E9B2C: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x006E9B2E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebx; /* 0x006E9B30: mov ecx, ebx */
    RECOMP_CALL(sub_006E7690); /* 0x006E9B32: call 0x6e7690 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x006E9B37: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x006E9B39: pop edi */
    esi = POP32_VAL(esp); /* 0x006E9B3A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006E9B3B: pop ebx */
    ecx = MEM32(esp + 0x5F0); /* 0x006E9B3C: mov ecx, dword ptr [esp + 0x5f0] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006E9B43: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006E9B45: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006E9B4A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E9B4C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9B4D: ret  */
L_006E9B4E:
    /* test edi, edi */ /* 0x006E9B4E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9B58; /* 0x006E9B50: je 0x6e9b58 */
L_006E9B52:
    eax = MEM32(esp + 0x74); /* 0x006E9B52: mov eax, dword ptr [esp + 0x74] */
    MEM32(edi) = eax; /* 0x006E9B56: mov dword ptr [edi], eax */
L_006E9B58:
    ecx = esp + 0x10; /* 0x006E9B58: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_006E9080); /* 0x006E9B5C: call 0x6e9080 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x5FC); /* 0x006E9B61: mov ecx, dword ptr [esp + 0x5fc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006E9B68: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006E9B6A: pop edi */
    esi = POP32_VAL(esp); /* 0x006E9B6B: pop esi */
    ebx = POP32_VAL(esp); /* 0x006E9B6C: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006E9B6D: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006E9B6F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006E9B74: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E9B76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9B77: ret  */
    RECOMP_REGS_OUT();
}

void sub_006E9B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9B80u);

L_006E9B80:
    PUSH32(esp, ebp); /* 0x006E9B80: push ebp */
    ebp = esp; /* 0x006E9B81: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006E9B83: push ebx */
    ebx = ecx; /* 0x006E9B84: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x006E9B86: push esi */
    PUSH32(esp, edi); /* 0x006E9B87: push edi */
    eax = MEM32(ebx); /* 0x006E9B88: mov eax, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x006E9B8A: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebx); /* 0x006E9B8D: mov esi, dword ptr [ebx] */
    ecx = ebx; /* 0x006E9B8F: mov ecx, ebx */
    edi = eax; /* 0x006E9B91: mov edi, eax */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x006E9B93: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006E9B96: push eax */
    ecx = ebx; /* 0x006E9B97: mov ecx, ebx */
    RECOMP_ICALL(MEM32(esi + 0x10)); /* 0x006E9B99: call dword ptr [esi + 0x10] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx); /* 0x006E9B9C: mov edx, dword ptr [ebx] */
    ecx = ebx; /* 0x006E9B9E: mov ecx, ebx */
    RECOMP_ICALL(MEM32(edx + 0x14)); /* 0x006E9BA0: call dword ptr [edx + 0x14] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx); /* 0x006E9BA3: mov edx, dword ptr [ebx] */
    esi = eax; /* 0x006E9BA5: mov esi, eax */
    PUSH32(esp, edi); /* 0x006E9BA7: push edi */
    ecx = ebx; /* 0x006E9BA8: mov ecx, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x006E9BAA: sub esi, edi */
    _flag_k = FK_CMP;
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x006E9BAC: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006E9BAF: push esi */
    PUSH32(esp, ecx); /* 0x006E9BB0: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006E9BB1: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x006E9BB4: mov ecx, ebx */
    RECOMP_CALL(sub_006E9A50); /* 0x006E9BB6: call 0x6e9a50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006E9BBB: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006E9BBE: pop edi */
    esi = POP32_VAL(esp); /* 0x006E9BBF: pop esi */
    ebx = POP32_VAL(esp); /* 0x006E9BC0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006E9BC1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9BC2: ret  */
    RECOMP_REGS_OUT();
}

void sub_006E9BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9BE0u);

L_006E9BE0:
    PUSH32(esp, ebp); /* 0x006E9BE0: push ebp */
    ebp = esp; /* 0x006E9BE1: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006E9BE3: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x006E9BE7: push esi */
    esi = ecx; /* 0x006E9BE8: mov esi, ecx */
    MEM32(esi) = 0x00803EA8u; /* 0x006E9BEA: mov dword ptr [esi], 0x803ea8 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9BFC; /* 0x006E9BF0: je 0x6e9bfc */
L_006E9BF2:
    PUSH32(esp, esi); /* 0x006E9BF2: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006E9BF3: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E9BF9: add esp, 4 */
    _flag_k = FK_ADD;
L_006E9BFC:
    eax = esi; /* 0x006E9BFC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006E9BFE: pop esi */
    ebp = POP32_VAL(esp); /* 0x006E9BFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006E9C00: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006E9C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9C10u);

L_006E9C10:
    PUSH32(esp, ebp); /* 0x006E9C10: push ebp */
    ebp = esp; /* 0x006E9C11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006E9C13: push -1 */
    PUSH32(esp, 0x007C6DB8u); /* 0x006E9C15: push 0x7c6db8 */
    eax = MEM32(FS_BASE + (0)); /* 0x006E9C1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006E9C20: push eax */
    PUSH32(esp, ecx); /* 0x006E9C21: push ecx */
    PUSH32(esp, esi); /* 0x006E9C22: push esi */
    eax = MEM32(0x855000); /* 0x006E9C23: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006E9C28: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006E9C2A: push eax */
    eax = ebp + (-0xC); /* 0x006E9C2B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006E9C2E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006E9C34: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006E9C36: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x00803E60u; /* 0x006E9C39: mov dword ptr [esi], 0x803e60 */
    MEM32(ebp + (-0x4)) = 0; /* 0x006E9C3F: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(esi + 0x4); /* 0x006E9C46: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x006E9C49: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9C57; /* 0x006E9C4B: je 0x6e9c57 */
L_006E9C4D:
    PUSH32(esp, eax); /* 0x006E9C4D: push eax */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x006E9C4E: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E9C54: add esp, 4 */
    _flag_k = FK_ADD;
L_006E9C57:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006E9C57: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x00803EA8u; /* 0x006E9C5B: mov dword ptr [esi], 0x803ea8 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9C6D; /* 0x006E9C61: je 0x6e9c6d */
L_006E9C63:
    PUSH32(esp, esi); /* 0x006E9C63: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006E9C64: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E9C6A: add esp, 4 */
    _flag_k = FK_ADD;
L_006E9C6D:
    eax = esi; /* 0x006E9C6D: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006E9C6F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006E9C72: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006E9C79: pop ecx */
    esi = POP32_VAL(esp); /* 0x006E9C7A: pop esi */
    esp = ebp; /* 0x006E9C7B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E9C7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006E9C7E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006E9C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9C90u);

L_006E9C90:
    PUSH32(esp, ebp); /* 0x006E9C90: push ebp */
    ebp = esp; /* 0x006E9C91: mov ebp, esp */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x006E9C93: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006E9C96: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x006E9C99: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006E9C9B: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC4E8)); /* 0x006E9C9E: call dword ptr [0x7cc4e8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006E9CA4: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x006E9CA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006E9CA8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006E9CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9CB0u);

L_006E9CB0:
    PUSH32(esp, ebp); /* 0x006E9CB0: push ebp */
    ebp = esp; /* 0x006E9CB1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006E9CB3: push ecx */
    PUSH32(esp, ebx); /* 0x006E9CB4: push ebx */
    PUSH32(esp, esi); /* 0x006E9CB5: push esi */
    esi = MEM32(0x7CC510); /* 0x006E9CB6: mov esi, dword ptr [0x7cc510] */
    PUSH32(esp, edi); /* 0x006E9CBC: push edi */
    edi = ecx; /* 0x006E9CBD: mov edi, ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x006E9CBF: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006E9CC2: push dword ptr [edi + 4] */
    RECOMP_ICALL(esi); /* 0x006E9CC5: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x006E9CC7: push 2 */
    PUSH32(esp, 0); /* 0x006E9CC9: push 0 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006E9CCB: push dword ptr [edi + 4] */
    edi = MEM32(0x7CC514); /* 0x006E9CCE: mov edi, dword ptr [0x7cc514] */
    ebx = eax; /* 0x006E9CD4: mov ebx, eax */
    RECOMP_ICALL(edi); /* 0x006E9CD6: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x006E9CD8: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x006E9CDB: push dword ptr [eax + 4] */
    RECOMP_ICALL(esi); /* 0x006E9CDE: call esi */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006E9CE0: mov esi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x006E9CE2: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, 0); /* 0x006E9CE5: push 0 */
    PUSH32(esp, ebx); /* 0x006E9CE7: push ebx */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x006E9CE8: push dword ptr [eax + 4] */
    RECOMP_ICALL(edi); /* 0x006E9CEB: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x006E9CED: add esp, 0x20 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006E9CF0: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006E9CF2: pop edi */
    esi = POP32_VAL(esp); /* 0x006E9CF3: pop esi */
    ebx = POP32_VAL(esp); /* 0x006E9CF4: pop ebx */
    esp = ebp; /* 0x006E9CF5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E9CF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9CF8: ret  */
    RECOMP_REGS_OUT();
}

void sub_006E9D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9D00u);

L_006E9D00:
    PUSH32(esp, ebp); /* 0x006E9D00: push ebp */
    ebp = esp; /* 0x006E9D01: mov ebp, esp */
    PUSH32(esp, 0); /* 0x006E9D03: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006E9D05: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x006E9D08: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x7CC514)); /* 0x006E9D0B: call dword ptr [0x7cc514] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006E9D11: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x006E9D14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006E9D15: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006E9D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9D20u);

L_006E9D20:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x006E9D20: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x7CC510)); /* 0x006E9D23: call dword ptr [0x7cc510] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E9D29: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9D2C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006E9D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9D30u);

L_006E9D30:
    eax = MEM32(ecx + 0x4); /* 0x006E9D30: mov eax, dword ptr [ecx + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9D33: ret  */
    RECOMP_REGS_OUT();
}

void sub_006E9D40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9D40u);

L_006E9D40:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x006E9D40: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x7CC508)); /* 0x006E9D43: call dword ptr [0x7cc508] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E9D49: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9D4C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006E9D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9D50u);

L_006E9D50:
    PUSH32(esp, ebp); /* 0x006E9D50: push ebp */
    ebp = esp; /* 0x006E9D51: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006E9D53: push esi */
    esi = MEM32(ebp + 0xC); /* 0x006E9D54: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x006E9D57: push edi */
    edi = ecx; /* 0x006E9D58: mov edi, ecx */
    edx = MEM32(edi + 0xC); /* 0x006E9D5A: mov edx, dword ptr [edi + 0xc] */
    ecx = MEM32(edi + 0x8); /* 0x006E9D5D: mov ecx, dword ptr [edi + 8] */
    eax = edx + esi; /* 0x006E9D60: lea eax, [edx + esi] */
    /* cmp eax, ecx */ /* 0x006E9D63: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006E9D6B; /* 0x006E9D65: jb 0x6e9d6b */
L_006E9D67:
    esi = ecx; /* 0x006E9D67: mov esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x006E9D69: sub esi, edx */
    _flag_k = FK_CMP;
L_006E9D6B:
    ecx = MEM32(edi + 0x4); /* 0x006E9D6B: mov ecx, dword ptr [edi + 4] */
    PUSH32(esp, esi); /* 0x006E9D6E: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x006E9D6F: add ecx, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x006E9D71: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006E9D72: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00780838); /* 0x006E9D75: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006E9D7A: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006E9D7D: mov eax, esi */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + esi; /* 0x006E9D7F: add dword ptr [edi + 0xc], esi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006E9D82: pop edi */
    esi = POP32_VAL(esp); /* 0x006E9D83: pop esi */
    ebp = POP32_VAL(esp); /* 0x006E9D84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006E9D85: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006E9D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9D90u);

L_006E9D90:
    PUSH32(esp, ebp); /* 0x006E9D90: push ebp */
    ebp = esp; /* 0x006E9D91: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x006E9D93: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x006E9D96: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006E9D9F; /* 0x006E9D98: js 0x6e9d9f */
L_006E9D9A:
    MEM32(ecx + 0xC) = edx; /* 0x006E9D9A: mov dword ptr [ecx + 0xc], edx */
    goto L_006E9DA7; /* 0x006E9D9D: jmp 0x6e9da7 */
L_006E9D9F:
    eax = MEM32(ecx + 0x8); /* 0x006E9D9F: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006E9DA2: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ecx + 0xC) = eax; /* 0x006E9DA4: mov dword ptr [ecx + 0xc], eax */
L_006E9DA7:
    eax = MEM32(ecx + 0x8); /* 0x006E9DA7: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006E9DAA: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM32(ecx + 0xC), eax */ /* 0x006E9DAB: cmp dword ptr [ecx + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006E9DB3; /* 0x006E9DAE: jbe 0x6e9db3 */
L_006E9DB0:
    MEM32(ecx + 0xC) = eax; /* 0x006E9DB0: mov dword ptr [ecx + 0xc], eax */
L_006E9DB3:
    ebp = POP32_VAL(esp); /* 0x006E9DB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006E9DB4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006E9DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9DC0u);

L_006E9DC0:
    eax = MEM32(ecx + 0xC); /* 0x006E9DC0: mov eax, dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9DC3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006E9DD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9DD0u);

L_006E9DD0:
    PUSH32(esp, ebp); /* 0x006E9DD0: push ebp */
    ebp = esp; /* 0x006E9DD1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006E9DD3: push esi */
    esi = ecx; /* 0x006E9DD4: mov esi, ecx */
    /* cmp MEM8(esi + 0x10), 0 */ /* 0x006E9DD6: cmp byte ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(esi) = 0x00803E84u; /* 0x006E9DDA: mov dword ptr [esi], 0x803e84 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006E9DEE; /* 0x006E9DE0: je 0x6e9dee */
L_006E9DE2:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006E9DE2: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006E9DE5: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E9DEB: add esp, 4 */
    _flag_k = FK_ADD;
L_006E9DEE:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006E9DEE: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x00803EA8u; /* 0x006E9DF2: mov dword ptr [esi], 0x803ea8 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9E04; /* 0x006E9DF8: je 0x6e9e04 */
L_006E9DFA:
    PUSH32(esp, esi); /* 0x006E9DFA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006E9DFB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E9E01: add esp, 4 */
    _flag_k = FK_ADD;
L_006E9E04:
    eax = esi; /* 0x006E9E04: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006E9E06: pop esi */
    ebp = POP32_VAL(esp); /* 0x006E9E07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006E9E08: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006E9E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9E10u);

L_006E9E10:
    PUSH32(esp, ebp); /* 0x006E9E10: push ebp */
    ebp = esp; /* 0x006E9E11: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006E9E13: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x006E9E14: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006E9E17: push esi */
    esi = ecx; /* 0x006E9E18: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006E9E1A: push edi */
    /* test ebx, ebx */ /* 0x006E9E1B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9E52; /* 0x006E9E1D: je 0x6e9e52 */
L_006E9E1F:
    edi = MEM32(ebp + 0xC); /* 0x006E9E1F: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x006E9E22: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9E52; /* 0x006E9E24: je 0x6e9e52 */
L_006E9E26:
    /* cmp MEM8(esi + 0x10), 0 */ /* 0x006E9E26: cmp byte ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006E9E38; /* 0x006E9E2A: je 0x6e9e38 */
L_006E9E2C:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006E9E2C: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006E9E2F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E9E35: add esp, 4 */
    _flag_k = FK_ADD;
L_006E9E38:
    MEM32(esi + 0x8) = edi; /* 0x006E9E38: mov dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006E9E3B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006E9E3D: pop edi */
    MEM32(esi + 0x4) = ebx; /* 0x006E9E3E: mov dword ptr [esi + 4], ebx */
    MEM32(esi + 0xC) = 0; /* 0x006E9E41: mov dword ptr [esi + 0xc], 0 */
    MEM8(esi + 0x10) = (uint8_t)(0); /* 0x006E9E48: mov byte ptr [esi + 0x10], 0 */
    esi = POP32_VAL(esp); /* 0x006E9E4C: pop esi */
    ebx = POP32_VAL(esp); /* 0x006E9E4D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006E9E4E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006E9E4F: ret 0x10 */
L_006E9E52:
    edi = POP32_VAL(esp); /* 0x006E9E52: pop edi */
    esi = POP32_VAL(esp); /* 0x006E9E53: pop esi */
    eax = 1; /* 0x006E9E54: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x006E9E59: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006E9E5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006E9E5B: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_006E9E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9E60u);

L_006E9E60:
    eax = MEM32(ecx + 0xC); /* 0x006E9E60: mov eax, dword ptr [ecx + 0xc] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x006E9E63: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x006E9E66: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006E9E68: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9E69: ret  */
    RECOMP_REGS_OUT();
}

void sub_006E9E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9E70u);

L_006E9E70:
    PUSH32(esp, ebp); /* 0x006E9E70: push ebp */
    ebp = esp; /* 0x006E9E71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006E9E73: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006E9E76: push ebx */
    PUSH32(esp, esi); /* 0x006E9E77: push esi */
    PUSH32(esp, edi); /* 0x006E9E78: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006E9E79: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x006E9E7C: mov esi, ecx */
    eax = MEM32(esi + edi * 4 + 0x2C); /* 0x006E9E7E: mov eax, dword ptr [esi + edi*4 + 0x2c] */
    /* test eax, eax */ /* 0x006E9E82: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006E9F4E; /* 0x006E9E84: je 0x6e9f4e */
L_006E9E8A:
    MEM32(eax + 0x14) = _xmm[2].u32[0]; /* 0x006E9E8A: movss dword ptr [eax + 0x14], xmm2 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006E9E8F: xorps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(0x808CB0)); _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x006E9E92: addss xmm2, dword ptr [0x808cb0] */
    _xmm[0].f64[0] = (double)_xmm[2].f32[0]; /* 0x006E9E9A: cvtss2sd xmm0, xmm2 */
    { double _s = sse_f64(MEM64(0x8090D8)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x006E9E9E: mulsd xmm0, qword ptr [0x8090d8] */
    { double _s = sse_f64(MEM64(0x808E10)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x006E9EA6: mulsd xmm0, qword ptr [0x808e10] */
    MEM64(ebp + (-0xC)) = _xmm[0].u64[0]; /* 0x006E9EAE: movsd qword ptr [ebp - 0xc], xmm0 */
    RECOMP_CALL(sub_0077FC64); /* 0x006E9EB3: call 0x77fc64 */
    RECOMP_FLAGS_IN();
    _xmm[0].f32[0] = (float)_xmm[0].f64[0]; /* 0x006E9EB8: cvtsd2ss xmm0, xmm0 */
    MEM32(ebp + 0x8) = _xmm[0].u32[0]; /* 0x006E9EBC: movss dword ptr [ebp + 8], xmm0 */
    _xmm[0].u64[0] = MEM64(ebp + (-0xC)); _xmm[0].u64[1] = 0; /* 0x006E9EC1: movsd xmm0, qword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_0077FC76); /* 0x006E9EC6: call 0x77fc76 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + edi * 4 + 0x2C); /* 0x006E9ECB: mov eax, dword ptr [esi + edi*4 + 0x2c] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x006E9ECF: xorps xmm1, xmm1 */
    _xmm[1].f32[0] = (float)_xmm[0].f64[0]; /* 0x006E9ED2: cvtsd2ss xmm1, xmm0 */
    _xmm[0].u64[0] = MEM32(ebp + 0x8); _xmm[0].u64[1] = 0; /* 0x006E9ED6: movss xmm0, dword ptr [ebp + 8] */
    MEM32(eax + 0x18) = _xmm[0].u32[0]; /* 0x006E9EDB: movss dword ptr [eax + 0x18], xmm0 */
    eax = MEM32(esi + edi * 4 + 0x2C); /* 0x006E9EE0: mov eax, dword ptr [esi + edi*4 + 0x2c] */
    MEM32(ebp + (-0x8)) = _xmm[1].u32[0]; /* 0x006E9EE4: movss dword ptr [ebp - 8], xmm1 */
    MEM32(eax + 0x1C) = _xmm[1].u32[0]; /* 0x006E9EE9: movss dword ptr [eax + 0x1c], xmm1 */
    eax = MEM32(esi + edi * 4 + 0x2C); /* 0x006E9EEE: mov eax, dword ptr [esi + edi*4 + 0x2c] */
    /* cmp MEM32(eax + 0x40), 4 */ /* 0x006E9EF2: cmp dword ptr [eax + 0x40], 4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x40)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E9F06; /* 0x006E9EF6: jne 0x6e9f06 */
L_006E9EF8:
    MEM32(eax + 0x20) = _xmm[0].u32[0]; /* 0x006E9EF8: movss dword ptr [eax + 0x20], xmm0 */
    eax = MEM32(esi + edi * 4 + 0x2C); /* 0x006E9EFD: mov eax, dword ptr [esi + edi*4 + 0x2c] */
    MEM32(eax + 0x24) = _xmm[1].u32[0]; /* 0x006E9F01: movss dword ptr [eax + 0x24], xmm1 */
L_006E9F06:
    ebx = MEM32(esi + edi * 4 + 0x2C); /* 0x006E9F06: mov ebx, dword ptr [esi + edi*4 + 0x2c] */
    /* cmp MEM32(ebx + 0x40), 6 */ /* 0x006E9F0A: cmp dword ptr [ebx + 0x40], 6 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E9F4E; /* 0x006E9F0E: jne 0x6e9f4e */
L_006E9F10:
    PUSH32(esp, ecx); /* 0x006E9F10: push ecx */
    MEM32(esp) = 0x40000000u; /* 0x006E9F11: mov dword ptr [esp], 0x40000000 */
    RECOMP_CALL(sub_0040A6C0); /* 0x006E9F18: call 0x40a6c0 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x006E9F1D: fld1  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006E9F1F: add esp, 4 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x006E9F22: fdivrp st(1) */
    _xmm[0].u64[0] = MEM32(ebp + 0x8); _xmm[0].u64[1] = 0; /* 0x006E9F24: movss xmm0, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x20) = _v; } /* 0x006E9F29: fstp dword ptr [ebx + 0x20] */
    eax = MEM32(esi + edi * 4 + 0x2C); /* 0x006E9F2C: mov eax, dword ptr [esi + edi*4 + 0x2c] */
    MEM32(eax + 0x24) = 0x3F800000u; /* 0x006E9F30: mov dword ptr [eax + 0x24], 0x3f800000 */
    eax = MEM32(esi + edi * 4 + 0x2C); /* 0x006E9F37: mov eax, dword ptr [esi + edi*4 + 0x2c] */
    MEM32(eax + 0x28) = _xmm[0].u32[0]; /* 0x006E9F3B: movss dword ptr [eax + 0x28], xmm0 */
    eax = MEM32(esi + edi * 4 + 0x2C); /* 0x006E9F40: mov eax, dword ptr [esi + edi*4 + 0x2c] */
    _xmm[0].u64[0] = MEM32(ebp + (-0x8)); _xmm[0].u64[1] = 0; /* 0x006E9F44: movss xmm0, dword ptr [ebp - 8] */
    MEM32(eax + 0x2C) = _xmm[0].u32[0]; /* 0x006E9F49: movss dword ptr [eax + 0x2c], xmm0 */
L_006E9F4E:
    edi = POP32_VAL(esp); /* 0x006E9F4E: pop edi */
    esi = POP32_VAL(esp); /* 0x006E9F4F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006E9F50: pop ebx */
    esp = ebp; /* 0x006E9F51: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006E9F53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006E9F54: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006E9F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9F60u);

L_006E9F60:
    PUSH32(esp, ebp); /* 0x006E9F60: push ebp */
    ebp = esp; /* 0x006E9F61: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006E9F63: push ecx */
    ecx = (uint32_t)MEM8(0x92505E); /* 0x006E9F64: movzx ecx, byte ptr [0x92505e] */
    eax = 0x8120u; /* 0x006E9F6B: mov eax, 0x8120 */
    PUSH32(esp, esi); /* 0x006E9F70: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006E9F71: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(0x92505C), LO16(eax) */ /* 0x006E9F73: cmp word ptr [0x92505c], ax */
    _flag_a = (uint32_t)(MEM16(0x92505C)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = MEM32(ebp + 0x10); /* 0x006E9F7A: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x006E9F7D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006E9F7E: mov edi, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006E9FAC; /* 0x006E9F81: jne 0x6e9fac */
L_006E9F83:
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x006E9F83: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x006E9F83: shl ecx, 2 */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x006E9F86: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = edi; /* 0x006E9F88: mov ecx, edi */
    esi = eax; /* 0x006E9F8A: mov esi, eax */
    PUSH32(esp, esi); /* 0x006E9F8C: push esi */
    RECOMP_CALL(sub_006E2200); /* 0x006E9F8D: call 0x6e2200 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x1030)); /* 0x006E9F92: push dword ptr [edi + 0x1030] */
    edx = MEM32(ebp + 0xC); /* 0x006E9F98: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(edi + 0x14); /* 0x006E9F9B: mov ecx, dword ptr [edi + 0x14] */
    PUSH32(esp, esi); /* 0x006E9F9E: push esi */
    RECOMP_CALL(sub_006E2D00); /* 0x006E9F9F: call 0x6e2d00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006E9FA4: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006E9FA7: pop edi */
    esi = POP32_VAL(esp); /* 0x006E9FA8: pop esi */
    ecx = POP32_VAL(esp); /* 0x006E9FA9: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006E9FAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9FAB: ret  */
L_006E9FAC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x006E9FAC: add ecx, ecx */
    _flag_k = FK_ADD;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x006E9FAE: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = edi; /* 0x006E9FB0: mov ecx, edi */
    esi = eax; /* 0x006E9FB2: mov esi, eax */
    PUSH32(esp, esi); /* 0x006E9FB4: push esi */
    RECOMP_CALL(sub_006E2200); /* 0x006E9FB5: call 0x6e2200 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x1030)); /* 0x006E9FBA: push dword ptr [edi + 0x1030] */
    edx = MEM32(ebp + 0xC); /* 0x006E9FC0: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(edi + 0x14); /* 0x006E9FC3: mov ecx, dword ptr [edi + 0x14] */
    PUSH32(esp, esi); /* 0x006E9FC6: push esi */
    RECOMP_CALL(sub_006E2D60); /* 0x006E9FC7: call 0x6e2d60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006E9FCC: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006E9FCF: pop edi */
    esi = POP32_VAL(esp); /* 0x006E9FD0: pop esi */
    ecx = POP32_VAL(esp); /* 0x006E9FD1: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006E9FD2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006E9FD3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006E9FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006E9FF0u);

L_006E9FF0:
    eax = MEM32(0x87CBC8); /* 0x006E9FF0: mov eax, dword ptr [0x87cbc8] */
    /* test eax, eax */ /* 0x006E9FF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA020; /* 0x006E9FF7: je 0x6ea020 */
L_006E9FF9:
    ecx = eax + (-0x1); /* 0x006E9FF9: lea ecx, [eax - 1] */
    /* cmp ecx, 0x10u */ /* 0x006E9FFC: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006EA00C; /* 0x006E9FFF: jae 0x6ea00c */
L_006EA001:
    ecx = MEM32(ecx * 4 + 0x926AD0); /* 0x006EA001: mov ecx, dword ptr [ecx*4 + 0x926ad0] */
    /* test ecx, ecx */ /* 0x006EA008: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EA01B; /* 0x006EA00A: jne 0x6ea01b */
L_006EA00C:
    PUSH32(esp, 0x00805F6Cu); /* 0x006EA00C: push 0x805f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EA011: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA016: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EA019: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EA01B:
    goto L_006F49B0; /* 0x006EA01B: jmp 0x6f49b0 */
L_006EA020:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA020: ret  */
L_006F49B0:
    PUSH32(esp, edi); /* 0x006F49B0: push edi */
    edi = ecx; /* 0x006F49B1: mov edi, ecx */
    /* test edi, edi */ /* 0x006F49B3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4A8A; /* 0x006F49B5: je 0x6f4a8a */
L_006F49BB:
    eax = MEM32(edi); /* 0x006F49BB: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x006F49BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F49D5; /* 0x006F49BF: je 0x6f49d5 */
L_006F49C1:
    /* cmp MEM32(eax * 4 + 0x926ACC), edi */ /* 0x006F49C1: cmp dword ptr [eax*4 + 0x926acc], edi */
    _flag_a = (uint32_t)(MEM32(eax * 4 + 0x926ACC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006F49D5; /* 0x006F49C8: jne 0x6f49d5 */
L_006F49CA:
    MEM32(eax * 4 + 0x926ACC) = 0; /* 0x006F49CA: mov dword ptr [eax*4 + 0x926acc], 0 */
L_006F49D5:
    ecx = 1; /* 0x006F49D5: mov ecx, 1 */
    eax = edi + 0x84; /* 0x006F49DA: lea eax, [edi + 0x84] */
    { uint32_t _tmp = MEM32(eax); /* 0x006F49E0: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006F49E2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x88; /* 0x006F49E4: lea eax, [edi + 0x88] */
    { uint32_t _tmp = MEM32(eax); /* 0x006F49EA: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    ecx = MEM32(edi + 0x9C); /* 0x006F49EC: mov ecx, dword ptr [edi + 0x9c] */
    /* test ecx, ecx */ /* 0x006F49F2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F49FB; /* 0x006F49F4: je 0x6f49fb */
L_006F49F6:
    RECOMP_CALL(sub_006EE760); /* 0x006F49F6: call 0x6ee760 */
    RECOMP_FLAGS_IN();
L_006F49FB:
    PUSH32(esp, ebx); /* 0x006F49FB: push ebx */
    ebx = MEM32(0x7CC44C); /* 0x006F49FC: mov ebx, dword ptr [0x7cc44c] */
    PUSH32(esp, esi); /* 0x006F4A02: push esi */
    esi = MEM32(edi + 0x98); /* 0x006F4A03: mov esi, dword ptr [edi + 0x98] */
    /* test esi, esi */ /* 0x006F4A09: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4A1A; /* 0x006F4A0B: je 0x6f4a1a */
L_006F4A0D:
    PUSH32(esp, esi); /* 0x006F4A0D: push esi */
    RECOMP_ICALL(MEM32(0x7CC15C)); /* 0x006F4A0E: call dword ptr [0x7cc15c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006F4A14: push esi */
    RECOMP_ICALL(ebx); /* 0x006F4A15: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4A17: add esp, 4 */
    _flag_k = FK_ADD;
L_006F4A1A:
    PUSH32(esp, MEM32(edi + 0x94)); /* 0x006F4A1A: push dword ptr [edi + 0x94] */
    RECOMP_ICALL(ebx); /* 0x006F4A20: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4A22: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x006F4A25: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F4A33; /* 0x006F4A29: je 0x6f4a33 */
L_006F4A2B:
    PUSH32(esp, MEM32(edi + 0x2C)); /* 0x006F4A2B: push dword ptr [edi + 0x2c] */
    RECOMP_ICALL(ebx); /* 0x006F4A2E: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4A30: add esp, 4 */
    _flag_k = FK_ADD;
L_006F4A33:
    /* cmp MEM32(edi + 0xB4), 0 */ /* 0x006F4A33: cmp dword ptr [edi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F4A46; /* 0x006F4A3A: je 0x6f4a46 */
L_006F4A3C:
    PUSH32(esp, edi); /* 0x006F4A3C: push edi */
    RECOMP_ICALL(MEM32(0x926A80)); /* 0x006F4A3D: call dword ptr [0x926a80] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4A43: add esp, 4 */
    _flag_k = FK_ADD;
L_006F4A46:
    eax = MEM32(edi + 0xA4); /* 0x006F4A46: mov eax, dword ptr [edi + 0xa4] */
    /* test eax, eax */ /* 0x006F4A4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4A62; /* 0x006F4A4E: je 0x6f4a62 */
L_006F4A50:
    esi = MEM32(eax + 0x2008); /* 0x006F4A50: mov esi, dword ptr [eax + 0x2008] */
    PUSH32(esp, eax); /* 0x006F4A56: push eax */
    RECOMP_ICALL(ebx); /* 0x006F4A57: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4A59: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006F4A5C: mov eax, esi */
    /* test esi, esi */ /* 0x006F4A5E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4A50; /* 0x006F4A60: jne 0x6f4a50 */
L_006F4A62:
    eax = MEM32(edi + 0xAC); /* 0x006F4A62: mov eax, dword ptr [edi + 0xac] */
    /* test eax, eax */ /* 0x006F4A68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F4A82; /* 0x006F4A6A: je 0x6f4a82 */
L_006F4A6C:
    esp = esp; /* 0x006F4A6C: lea esp, [esp] */
L_006F4A70:
    esi = MEM32(eax + 0x2008); /* 0x006F4A70: mov esi, dword ptr [eax + 0x2008] */
    PUSH32(esp, eax); /* 0x006F4A76: push eax */
    RECOMP_ICALL(ebx); /* 0x006F4A77: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4A79: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006F4A7C: mov eax, esi */
    /* test esi, esi */ /* 0x006F4A7E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F4A70; /* 0x006F4A80: jne 0x6f4a70 */
L_006F4A82:
    PUSH32(esp, edi); /* 0x006F4A82: push edi */
    RECOMP_ICALL(ebx); /* 0x006F4A83: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F4A85: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006F4A88: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F4A89: pop ebx */
L_006F4A8A:
    edi = POP32_VAL(esp); /* 0x006F4A8A: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F4A8B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EA030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EA030u);

L_006EA030:
    PUSH32(esp, ebp); /* 0x006EA030: push ebp */
    ebp = esp; /* 0x006EA031: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x006EA033: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x006EA036: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006EA039: push esi */
    PUSH32(esp, edi); /* 0x006EA03A: push edi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x006EA03B: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006EA03E: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = 0x8120u; /* 0x006EA041: mov eax, 0x8120 */
    MEM8(ebp + (-0x16)) = (uint8_t)(2); /* 0x006EA046: mov byte ptr [ebp - 0x16], 2 */
    MEM16(ebp + (-0x18)) = (uint16_t)(LO16(eax)); /* 0x006EA04A: mov word ptr [ebp - 0x18], ax */
    esi = ecx; /* 0x006EA04E: mov esi, ecx */
    eax = MEM32(ebp + 0xC); /* 0x006EA050: mov eax, dword ptr [ebp + 0xc] */
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x006EA053: mov word ptr [ebp - 0x14], ax */
    eax = ebp + (-0x1C); /* 0x006EA057: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x00925058u); /* 0x006EA05A: push 0x925058 */
    PUSH32(esp, eax); /* 0x006EA05F: push eax */
    MEM32(ebp + (-0xC)) = 0x006E9F60u; /* 0x006EA060: mov dword ptr [ebp - 0xc], 0x6e9f60 */
    MEM32(ebp + (-0x8)) = esi; /* 0x006EA067: mov dword ptr [ebp - 8], esi */
    RECOMP_CALL(sub_006F4C00); /* 0x006EA06A: call 0x6f4c00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006EA06F: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(0x87CBC8) = eax; /* 0x006EA072: mov dword ptr [0x87cbc8], eax */
    /* test eax, eax */ /* 0x006EA077: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EA0B5; /* 0x006EA079: jne 0x6ea0b5 */
L_006EA07B:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006EA07B: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x1C); /* 0x006EA07E: lea eax, [ebp - 0x1c] */
    edi = 0x8010u; /* 0x006EA081: mov edi, 0x8010 */
    MEM16(ebp + (-0x18)) = (uint16_t)(LO16(edi)); /* 0x006EA086: mov word ptr [ebp - 0x18], di */
    PUSH32(esp, 0x00925058u); /* 0x006EA08A: push 0x925058 */
    PUSH32(esp, eax); /* 0x006EA08F: push eax */
    RECOMP_CALL(sub_006F4C00); /* 0x006EA090: call 0x6f4c00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006EA095: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(0x87CBC8) = eax; /* 0x006EA098: mov dword ptr [0x87cbc8], eax */
    /* test eax, eax */ /* 0x006EA09D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA0AA; /* 0x006EA09F: je 0x6ea0aa */
L_006EA0A1:
    /* cmp MEM16(0x92505C), LO16(edi) */ /* 0x006EA0A1: cmp word ptr [0x92505c], di */
    _flag_a = (uint32_t)(MEM16(0x92505C)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA0B5; /* 0x006EA0A8: je 0x6ea0b5 */
L_006EA0AA:
    eax = 7; /* 0x006EA0AA: mov eax, 7 */
    edi = POP32_VAL(esp); /* 0x006EA0AF: pop edi */
    esi = POP32_VAL(esp); /* 0x006EA0B0: pop esi */
    esp = ebp; /* 0x006EA0B1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EA0B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA0B4: ret  */
L_006EA0B5:
    eax = (uint32_t)MEM8(0x92505E); /* 0x006EA0B5: movzx eax, byte ptr [0x92505e] */
    PUSH32(esp, eax); /* 0x006EA0BC: push eax */
    eax = (uint32_t)MEM16(0x925060); /* 0x006EA0BD: movzx eax, word ptr [0x925060] */
    PUSH32(esp, ecx); /* 0x006EA0C4: push ecx */
    PUSH32(esp, eax); /* 0x006EA0C5: push eax */
    PUSH32(esp, MEM32(0x925058)); /* 0x006EA0C6: push dword ptr [0x925058] */
    ecx = esi; /* 0x006EA0CC: mov ecx, esi */
    RECOMP_CALL(sub_006E08D0); /* 0x006EA0CE: call 0x6e08d0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = 0x006E9FF0u; /* 0x006EA0D3: mov dword ptr [esi + 8], 0x6e9ff0 */
    RECOMP_CALL(sub_006F5170); /* 0x006EA0DA: call 0x6f5170 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006EA0DF: pop edi */
    MEM32(esi + 0x1038) = 0x00803EC8u; /* 0x006EA0E0: mov dword ptr [esi + 0x1038], 0x803ec8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EA0EA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EA0EC: pop esi */
    esp = ebp; /* 0x006EA0ED: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EA0EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA0F0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EA100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EA100u);

L_006EA100:
    eax = MEM32(0x87CBCC); /* 0x006EA100: mov eax, dword ptr [0x87cbcc] */
    /* cmp MEM32(eax + 0x84), 0 */ /* 0x006EA105: cmp dword ptr [eax + 0x84], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x84)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA114; /* 0x006EA10C: jne 0x6ea114 */
L_006EA10E:
    eax = 1; /* 0x006EA10E: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA113: ret  */
L_006EA114:
    ecx = 0x00803FB0u; /* 0x006EA114: mov ecx, 0x803fb0 */
    RECOMP_CALL(sub_006F5A00); /* 0x006EA119: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EA11E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA135; /* 0x006EA120: je 0x6ea135 */
L_006EA122:
    PUSH32(esp, 0x00803F3Cu); /* 0x006EA122: push 0x803f3c */
    PUSH32(esp, eax); /* 0x006EA127: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x006EA128: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EA12E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EA131: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA15B; /* 0x006EA133: je 0x6ea15b */
L_006EA135:
    ecx = 0x00803F1Cu; /* 0x006EA135: mov ecx, 0x803f1c */
    RECOMP_CALL(sub_006F5A00); /* 0x006EA13A: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EA13F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA15B; /* 0x006EA141: je 0x6ea15b */
L_006EA143:
    /* cmp MEM8(eax), 0x30u */ /* 0x006EA143: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA15B; /* 0x006EA146: je 0x6ea15b */
L_006EA148:
    PUSH32(esp, 0x007DEB8Cu); /* 0x006EA148: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x006EA14D: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x006EA14E: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EA154: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EA157: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EA10E; /* 0x006EA159: jne 0x6ea10e */
L_006EA15B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EA15B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA15D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EA160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EA160u);

L_006EA160:
    PUSH32(esp, ebp); /* 0x006EA160: push ebp */
    ebp = esp; /* 0x006EA161: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x006EA163: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x006EA166: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006EA16C: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006EA171: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x84) = eax; /* 0x006EA173: mov dword ptr [esp + 0x84], eax */
    ecx = MEM32(ebp + 0x14); /* 0x006EA17A: mov ecx, dword ptr [ebp + 0x14] */
    edx = 0x00803F04u; /* 0x006EA17D: mov edx, 0x803f04 */
    eax = MEM32(ebp + 0xC); /* 0x006EA182: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esp + 0x10) = ecx; /* 0x006EA185: mov dword ptr [esp + 0x10], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x006EA189: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x006EA18C: push esi */
    PUSH32(esp, edi); /* 0x006EA18D: push edi */
    edi = MEM32(ebp + 0x10); /* 0x006EA18E: mov edi, dword ptr [ebp + 0x10] */
    MEM32(esp + 0x1C) = ecx; /* 0x006EA191: mov dword ptr [esp + 0x1c], ecx */
    ecx = eax; /* 0x006EA195: mov ecx, eax */
    MEM32(esp + 0x14) = eax; /* 0x006EA197: mov dword ptr [esp + 0x14], eax */
    MEM32(esp + 0x10) = edi; /* 0x006EA19B: mov dword ptr [esp + 0x10], edi */
    RECOMP_CALL(sub_006EB9B0); /* 0x006EA19F: call 0x6eb9b0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006EA1A4: mov esi, eax */
    /* test esi, esi */ /* 0x006EA1A6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EA36F; /* 0x006EA1A8: jne 0x6ea36f */
L_006EA1AE:
    ecx = 0x00803F1Cu; /* 0x006EA1AE: mov ecx, 0x803f1c */
    RECOMP_CALL(sub_006F5A00); /* 0x006EA1B3: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006EA1B8: mov edi, eax */
    /* test edi, edi */ /* 0x006EA1BA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA223; /* 0x006EA1BC: je 0x6ea223 */
L_006EA1BE:
    SET_LO8(eax, MEM8(edi)); /* 0x006EA1BE: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x30u */ /* 0x006EA1C0: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA223; /* 0x006EA1C2: je 0x6ea223 */
L_006EA1C4:
    /* cmp LO8(eax), 0x31u */ /* 0x006EA1C4: cmp al, 0x31 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x31u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA223; /* 0x006EA1C6: je 0x6ea223 */
L_006EA1C8:
    esi = MEM32(0x7CC580); /* 0x006EA1C8: mov esi, dword ptr [0x7cc580] */
    PUSH32(esp, 0x007DEB84u); /* 0x006EA1CE: push 0x7deb84 */
    PUSH32(esp, edi); /* 0x006EA1D3: push edi */
    RECOMP_ICALL(esi); /* 0x006EA1D4: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EA1D6: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EA1D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA223; /* 0x006EA1DB: je 0x6ea223 */
L_006EA1DD:
    PUSH32(esp, 0x007DEB8Cu); /* 0x006EA1DD: push 0x7deb8c */
    PUSH32(esp, edi); /* 0x006EA1E2: push edi */
    RECOMP_ICALL(esi); /* 0x006EA1E3: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EA1E5: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EA1E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA223; /* 0x006EA1EA: je 0x6ea223 */
L_006EA1EC:
    PUSH32(esp, 0x00803F3Cu); /* 0x006EA1EC: push 0x803f3c */
    PUSH32(esp, edi); /* 0x006EA1F1: push edi */
    RECOMP_ICALL(esi); /* 0x006EA1F2: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EA1F4: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EA1F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA223; /* 0x006EA1F9: je 0x6ea223 */
L_006EA1FB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EA1FB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ecx; /* 0x006EA1FD: lea ecx, [ecx] */
L_006EA200:
    edx = esp + 0x20; /* 0x006EA200: lea edx, [esp + 0x20] */
    ecx = esi; /* 0x006EA204: mov ecx, esi */
    RECOMP_CALL(sub_006F7F20); /* 0x006EA206: call 0x6f7f20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006EA20B: push edi */
    PUSH32(esp, MEM32(esp + 0x24)); /* 0x006EA20C: push dword ptr [esp + 0x24] */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x006EA210: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EA216: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EA219: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA276; /* 0x006EA21B: je 0x6ea276 */
L_006EA21D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EA21D: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 1 */ /* 0x006EA21E: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006EA200; /* 0x006EA221: jl 0x6ea200 */
L_006EA223:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006EA223: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EA225:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EA225: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EA227:
    /* test esi, esi */ /* 0x006EA227: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EA2CA; /* 0x006EA229: jne 0x6ea2ca */
L_006EA22F:
    eax = MEM32(esi * 4 + 0x7D5624); /* 0x006EA22F: mov eax, dword ptr [esi*4 + 0x7d5624] */
    _xmm[0] = xmm_ld(eax + 0x4); /* 0x006EA236: movdqu xmm0, xmmword ptr [eax + 4] */
    xmm_st(esp + 0x20, _xmm[0]); /* 0x006EA23B: movdqu xmmword ptr [esp + 0x20], xmm0 */
    _xmm[0] = xmm_ld(eax + 0x14); /* 0x006EA241: movdqu xmm0, xmmword ptr [eax + 0x14] */
    xmm_st(esp + 0x30, _xmm[0]); /* 0x006EA246: movdqu xmmword ptr [esp + 0x30], xmm0 */
    _xmm[0] = xmm_ld(eax + 0x24); /* 0x006EA24C: movdqu xmm0, xmmword ptr [eax + 0x24] */
    xmm_st(esp + 0x40, _xmm[0]); /* 0x006EA251: movdqu xmmword ptr [esp + 0x40], xmm0 */
    _xmm[0] = xmm_ld(eax + 0x34); /* 0x006EA257: movdqu xmm0, xmmword ptr [eax + 0x34] */
    xmm_st(esp + 0x50, _xmm[0]); /* 0x006EA25C: movdqu xmmword ptr [esp + 0x50], xmm0 */
    _xmm[0] = xmm_ld(eax + 0x44); /* 0x006EA262: movdqu xmm0, xmmword ptr [eax + 0x44] */
    eax = MEM32(eax + 0x54); /* 0x006EA267: mov eax, dword ptr [eax + 0x54] */
    MEM32(esp + 0x70) = eax; /* 0x006EA26A: mov dword ptr [esp + 0x70], eax */
    xmm_st(esp + 0x60, _xmm[0]); /* 0x006EA26E: movdqu xmmword ptr [esp + 0x60], xmm0 */
    goto L_006EA2D9; /* 0x006EA274: jmp 0x6ea2d9 */
L_006EA276:
    PUSH32(esp, ecx); /* 0x006EA276: push ecx */
    ecx = MEM32(esp + 0x18); /* 0x006EA277: mov ecx, dword ptr [esp + 0x18] */
    edx = esi; /* 0x006EA27B: mov edx, esi */
    RECOMP_CALL(sub_006F82B0); /* 0x006EA27D: call 0x6f82b0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006EA282: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA284: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006EA287: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA225; /* 0x006EA289: je 0x6ea225 */
L_006EA28B:
    PUSH32(esp, 0x14u); /* 0x006EA28B: push 0x14 */
    PUSH32(esp, 1); /* 0x006EA28D: push 1 */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x006EA28F: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006EA295: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EA297: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006EA29A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EA357; /* 0x006EA29C: jne 0x6ea357 */
L_006EA2A2:
    ecx = edi; /* 0x006EA2A2: mov ecx, edi */
    RECOMP_CALL(sub_006F9A40); /* 0x006EA2A4: call 0x6f9a40 */
    RECOMP_FLAGS_IN();
L_006EA2A9:
    PUSH32(esp, 0x00803E4Cu); /* 0x006EA2A9: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EA2AE: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA2B3: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EA2B6: pop edi */
    esi = POP32_VAL(esp); /* 0x006EA2B7: pop esi */
    ecx = MEM32(esp + 0x84); /* 0x006EA2B8: mov ecx, dword ptr [esp + 0x84] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EA2BF: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EA2C1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EA2C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EA2C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA2C9: ret  */
L_006EA2CA:
    PUSH32(esp, 0); /* 0x006EA2CA: push 0 */
    PUSH32(esp, 0x0080414Cu); /* 0x006EA2CC: push 0x80414c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EA2D1: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EA2D6: add esp, 8 */
    _flag_k = FK_ADD;
L_006EA2D9:
    eax = MEM32(esp + 0x20); /* 0x006EA2D9: mov eax, dword ptr [esp + 0x20] */
    ecx = 0x00803F3Cu; /* 0x006EA2DD: mov ecx, 0x803f3c */
L_006EA2E2:
    SET_LO8(edx, MEM8(eax)); /* 0x006EA2E2: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006EA2E4: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA302; /* 0x006EA2E6: jne 0x6ea302 */
L_006EA2E8:
    /* test LO8(edx), LO8(edx) */ /* 0x006EA2E8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA2FE; /* 0x006EA2EA: je 0x6ea2fe */
L_006EA2EC:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006EA2EC: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006EA2EF: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA302; /* 0x006EA2F2: jne 0x6ea302 */
L_006EA2F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006EA2F4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006EA2F7: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006EA2FA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EA2E2; /* 0x006EA2FC: jne 0x6ea2e2 */
L_006EA2FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EA2FE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006EA307; /* 0x006EA300: jmp 0x6ea307 */
L_006EA302:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006EA302: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006EA304: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EA307:
    /* test eax, eax */ /* 0x006EA307: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA324; /* 0x006EA309: je 0x6ea324 */
L_006EA30B:
    PUSH32(esp, ecx); /* 0x006EA30B: push ecx */
    ecx = MEM32(esp + 0x18); /* 0x006EA30C: mov ecx, dword ptr [esp + 0x18] */
    edx = esi; /* 0x006EA310: mov edx, esi */
    RECOMP_CALL(sub_006F82B0); /* 0x006EA312: call 0x6f82b0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006EA317: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA319: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006EA31C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EA28B; /* 0x006EA31E: jne 0x6ea28b */
L_006EA324:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EA324: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 1 */ /* 0x006EA325: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006EA227; /* 0x006EA328: jl 0x6ea227 */
L_006EA32E:
    /* test edi, edi */ /* 0x006EA32E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EA28B; /* 0x006EA330: jne 0x6ea28b */
L_006EA336:
    PUSH32(esp, 0x00803ED8u); /* 0x006EA336: push 0x803ed8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EA33B: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA340: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EA343: pop edi */
    esi = POP32_VAL(esp); /* 0x006EA344: pop esi */
    ecx = MEM32(esp + 0x84); /* 0x006EA345: mov ecx, dword ptr [esp + 0x84] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EA34C: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EA34E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EA353: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EA355: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA356: ret  */
L_006EA357:
    ecx = MEM32(esp + 0x14); /* 0x006EA357: mov ecx, dword ptr [esp + 0x14] */
    edx = 0x00803F04u; /* 0x006EA35B: mov edx, 0x803f04 */
    PUSH32(esp, esi); /* 0x006EA360: push esi */
    RECOMP_CALL(sub_006EB850); /* 0x006EA361: call 0x6eb850 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = edi; /* 0x006EA366: mov dword ptr [esi], edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA368: add esp, 4 */
    _flag_k = FK_ADD;
    edi = MEM32(esp + 0x10); /* 0x006EA36B: mov edi, dword ptr [esp + 0x10] */
L_006EA36F:
    ecx = MEM32(esi + 0x4); /* 0x006EA36F: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x006EA372: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA382; /* 0x006EA374: je 0x6ea382 */
L_006EA376:
    RECOMP_CALL(sub_006F99A0); /* 0x006EA376: call 0x6f99a0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = 0; /* 0x006EA37B: mov dword ptr [esi + 4], 0 */
L_006EA382:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x006EA382: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EA385: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x006EA38B: mov ecx, dword ptr [esi] */
    edx = esp + 0x24; /* 0x006EA38D: lea edx, [esp + 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA391: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 0; /* 0x006EA394: mov dword ptr [esi + 8], 0 */
    RECOMP_CALL(sub_006F84F0); /* 0x006EA39B: call 0x6f84f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EA3A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EA3BB; /* 0x006EA3A2: jns 0x6ea3bb */
L_006EA3A4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EA3A4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EA3A7: pop edi */
    esi = POP32_VAL(esp); /* 0x006EA3A8: pop esi */
    ecx = MEM32(esp + 0x84); /* 0x006EA3A9: mov ecx, dword ptr [esp + 0x84] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EA3B0: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EA3B2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EA3B7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EA3B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA3BA: ret  */
L_006EA3BB:
    eax = MEM32(esp + 0x2C); /* 0x006EA3BB: mov eax, dword ptr [esp + 0x2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EA3BF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x006EA3C1: mov dword ptr [edi], eax */
    edi = MEM32(esp + 0x28); /* 0x006EA3C3: mov edi, dword ptr [esp + 0x28] */
    /* test edi, edi */ /* 0x006EA3C7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA48D; /* 0x006EA3C9: je 0x6ea48d */
L_006EA3CF:
    /* nop */ /* 0x006EA3CF: nop  */
L_006EA3D0:
    ecx = MEM32(esp + edx * 4 + 0x2C); /* 0x006EA3D0: mov ecx, dword ptr [esp + edx*4 + 0x2c] */
    /* test ecx, ecx */ /* 0x006EA3D4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA3FC; /* 0x006EA3D6: je 0x6ea3fc */
L_006EA3D8:
    eax = ecx; /* 0x006EA3D8: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006EA3DA: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006EA3DF: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA484; /* 0x006EA3E4: jne 0x6ea484 */
L_006EA3EA:
    /* test ecx, ecx */ /* 0x006EA3EA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA3FC; /* 0x006EA3EC: je 0x6ea3fc */
L_006EA3EE:
    eax = ecx; /* 0x006EA3EE: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006EA3F0: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006EA3F5: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA42F; /* 0x006EA3FA: jne 0x6ea42f */
L_006EA3FC:
    eax = ecx; /* 0x006EA3FC: mov eax, ecx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x006EA3FE: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x006EA3FE: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x006EA401: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 4 */ /* 0x006EA404: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA413; /* 0x006EA407: je 0x6ea413 */
L_006EA409:
    /* cmp eax, 5 */ /* 0x006EA409: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA413; /* 0x006EA40C: je 0x6ea413 */
L_006EA40E:
    /* cmp eax, 6 */ /* 0x006EA40E: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA42F; /* 0x006EA411: jne 0x6ea42f */
L_006EA413:
    eax = ecx; /* 0x006EA413: mov eax, ecx */
    if (20u) _cf = (((eax) >> 19) & 1u); /* 0x006EA415: shr eax, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((eax >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 20u; /* 0x006EA415: shr eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x006EA418: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 3 */ /* 0x006EA41B: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA484; /* 0x006EA41E: je 0x6ea484 */
L_006EA420:
    /* cmp eax, 4 */ /* 0x006EA420: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA484; /* 0x006EA423: je 0x6ea484 */
L_006EA425:
    /* cmp eax, 7 */ /* 0x006EA425: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA484; /* 0x006EA428: je 0x6ea484 */
L_006EA42A:
    /* cmp eax, 8 */ /* 0x006EA42A: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA484; /* 0x006EA42D: je 0x6ea484 */
L_006EA42F:
    /* test ecx, ecx */ /* 0x006EA42F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA445; /* 0x006EA431: je 0x6ea445 */
L_006EA433:
    eax = ecx; /* 0x006EA433: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006EA435: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006EA43A: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA4EB; /* 0x006EA43F: jne 0x6ea4eb */
L_006EA445:
    eax = ecx; /* 0x006EA445: mov eax, ecx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x006EA447: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x006EA447: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x006EA44A: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 7 */ /* 0x006EA44D: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA46A; /* 0x006EA450: je 0x6ea46a */
L_006EA452:
    /* cmp eax, 8 */ /* 0x006EA452: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA46A; /* 0x006EA455: je 0x6ea46a */
L_006EA457:
    /* cmp eax, 9 */ /* 0x006EA457: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA46A; /* 0x006EA45A: je 0x6ea46a */
L_006EA45C:
    /* cmp eax, 0xAu */ /* 0x006EA45C: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA46A; /* 0x006EA45F: je 0x6ea46a */
L_006EA461:
    /* cmp eax, 0xBu */ /* 0x006EA461: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA4EB; /* 0x006EA464: jne 0x6ea4eb */
L_006EA46A:
    if (20u) _cf = (((ecx) >> 19) & 1u); /* 0x006EA46A: shr ecx, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((ecx >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 20u; /* 0x006EA46A: shr ecx, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x006EA46D: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 3 */ /* 0x006EA470: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA484; /* 0x006EA473: je 0x6ea484 */
L_006EA475:
    /* cmp ecx, 2 */ /* 0x006EA475: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA484; /* 0x006EA478: je 0x6ea484 */
L_006EA47A:
    /* cmp ecx, 6 */ /* 0x006EA47A: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA484; /* 0x006EA47D: je 0x6ea484 */
L_006EA47F:
    /* cmp ecx, 5 */ /* 0x006EA47F: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA4EB; /* 0x006EA482: jne 0x6ea4eb */
L_006EA484:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006EA484: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x006EA485: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006EA3D0; /* 0x006EA487: jb 0x6ea3d0 */
L_006EA48D:
    edx = MEM32(esp + 0x10); /* 0x006EA48D: mov edx, dword ptr [esp + 0x10] */
L_006EA491:
    edi = MEM32(esp + 0x14); /* 0x006EA491: mov edi, dword ptr [esp + 0x14] */
    edx = MEM32(edx); /* 0x006EA495: mov edx, dword ptr [edx] */
    ecx = MEM32(esi); /* 0x006EA497: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x006EA499: push dword ptr [edi + 0x1c] */
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x006EA49C: push dword ptr [edi + 0x18] */
    PUSH32(esp, 1); /* 0x006EA49F: push 1 */
    RECOMP_CALL(sub_006F8770); /* 0x006EA4A1: call 0x6f8770 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EA4A6: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x006EA4A9: mov dword ptr [esi + 4], eax */
    /* test eax, eax */ /* 0x006EA4AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA3A4; /* 0x006EA4AE: je 0x6ea3a4 */
L_006EA4B4:
    eax = MEM32(esp + 0x10); /* 0x006EA4B4: mov eax, dword ptr [esp + 0x10] */
    ecx = MEM32(eax); /* 0x006EA4B8: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x006EA4BA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA4FE; /* 0x006EA4BC: je 0x6ea4fe */
L_006EA4BE:
    eax = ecx; /* 0x006EA4BE: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x006EA4C0: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x006EA4C5: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA4FE; /* 0x006EA4CA: je 0x6ea4fe */
L_006EA4CC:
    /* cmp ecx, 0x32595559u */ /* 0x006EA4CC: cmp ecx, 0x32595559 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x32595559u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA4F7; /* 0x006EA4D2: je 0x6ea4f7 */
L_006EA4D4:
    /* cmp ecx, 0x59565955u */ /* 0x006EA4D4: cmp ecx, 0x59565955 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x59565955u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA4F7; /* 0x006EA4DA: je 0x6ea4f7 */
L_006EA4DC:
    /* cmp ecx, 0x55595659u */ /* 0x006EA4DC: cmp ecx, 0x55595659 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x55595659u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA4F7; /* 0x006EA4E2: je 0x6ea4f7 */
L_006EA4E4:
    eax = 1; /* 0x006EA4E4: mov eax, 1 */
    goto L_006EA501; /* 0x006EA4E9: jmp 0x6ea501 */
L_006EA4EB:
    eax = MEM32(esp + edx * 4 + 0x2C); /* 0x006EA4EB: mov eax, dword ptr [esp + edx*4 + 0x2c] */
    edx = MEM32(esp + 0x10); /* 0x006EA4EF: mov edx, dword ptr [esp + 0x10] */
    MEM32(edx) = eax; /* 0x006EA4F3: mov dword ptr [edx], eax */
    RECOMP_BACKEDGE();
    goto L_006EA491; /* 0x006EA4F5: jmp 0x6ea491 */
L_006EA4F7:
    eax = 2; /* 0x006EA4F7: mov eax, 2 */
    goto L_006EA501; /* 0x006EA4FC: jmp 0x6ea501 */
L_006EA4FE:
    eax = (uint32_t)LO8(ecx); /* 0x006EA4FE: movzx eax, cl */
L_006EA501:
    MEM32(esi + 0x10) = eax; /* 0x006EA501: mov dword ptr [esi + 0x10], eax */
    ecx = MEM32(edi + 0x18); /* 0x006EA504: mov ecx, dword ptr [edi + 0x18] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x006EA507: imul ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x006EA50A: add ecx, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ecx = ecx & 0xFFFFFFFCu; /* 0x006EA50D: and ecx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = ecx; /* 0x006EA510: mov dword ptr [esi + 0xc], ecx */
    eax = MEM32(edi + 0x1C); /* 0x006EA513: mov eax, dword ptr [edi + 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x006EA516: imul eax, ecx */
    PUSH32(esp, eax); /* 0x006EA519: push eax */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006EA51A: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA520: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x006EA523: mov dword ptr [esi + 8], eax */
    /* test eax, eax */ /* 0x006EA526: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA2A9; /* 0x006EA528: je 0x6ea2a9 */
L_006EA52E:
    ecx = MEM32(esp + 0x18); /* 0x006EA52E: mov ecx, dword ptr [esp + 0x18] */
    MEM32(ecx) = eax; /* 0x006EA532: mov dword ptr [ecx], eax */
    ecx = MEM32(esp + 0x1C); /* 0x006EA534: mov ecx, dword ptr [esp + 0x1c] */
    eax = MEM32(esi + 0xC); /* 0x006EA538: mov eax, dword ptr [esi + 0xc] */
    MEM32(ecx) = eax; /* 0x006EA53B: mov dword ptr [ecx], eax */
    esi = MEM32(esi); /* 0x006EA53D: mov esi, dword ptr [esi] */
    /* test esi, esi */ /* 0x006EA53F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA582; /* 0x006EA541: je 0x6ea582 */
L_006EA543:
    /* cmp MEM32(esi), 0x0092501Bu */ /* 0x006EA543: cmp dword ptr [esi], 0x92501b */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x0092501Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA582; /* 0x006EA549: jne 0x6ea582 */
L_006EA54B:
    eax = esi + 0xE4; /* 0x006EA54B: lea eax, [esi + 0xe4] */
    MEM32(esi + 0xD8) = 0; /* 0x006EA551: mov dword ptr [esi + 0xd8], 0 */
    PUSH32(esp, eax); /* 0x006EA55B: push eax */
    edx = esi + 0xE0; /* 0x006EA55C: lea edx, [esi + 0xe0] */
    MEM32(esi + 0xDC) = 0; /* 0x006EA562: mov dword ptr [esi + 0xdc], 0 */
    ecx = esi; /* 0x006EA56C: mov ecx, esi */
    RECOMP_CALL(sub_006F8560); /* 0x006EA56E: call 0x6f8560 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA573: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EA576: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EA58F; /* 0x006EA578: js 0x6ea58f */
L_006EA57A:
    eax = MEM32(esi + 0x30); /* 0x006EA57A: mov eax, dword ptr [esi + 0x30] */
    PUSH32(esp, esi); /* 0x006EA57D: push esi */
    RECOMP_ICALL(eax); /* 0x006EA57E: call eax */
    RECOMP_FLAGS_IN();
    goto L_006EA58C; /* 0x006EA580: jmp 0x6ea58c */
L_006EA582:
    PUSH32(esp, 0x00806458u); /* 0x006EA582: push 0x806458 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EA587: call 0x6edb70 */
    RECOMP_FLAGS_IN();
L_006EA58C:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA58C: add esp, 4 */
    _flag_k = FK_ADD;
L_006EA58F:
    ecx = MEM32(esp + 0x8C); /* 0x006EA58F: mov ecx, dword ptr [esp + 0x8c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EA596: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EA598: pop edi */
    esi = POP32_VAL(esp); /* 0x006EA599: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EA59A: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EA59C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EA5A1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EA5A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA5A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EA5B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EA5B0u);

L_006EA5B0:
    PUSH32(esp, ebp); /* 0x006EA5B0: push ebp */
    ebp = esp; /* 0x006EA5B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006EA5B3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x006EA5B6: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006EA5B9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006EA5BE: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = eax; /* 0x006EA5C0: mov dword ptr [esp + 0x10], eax */
    PUSH32(esp, ebx); /* 0x006EA5C4: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x006EA5C5: mov ebx, dword ptr [ebp + 0x10] */
    edx = 0x00803F04u; /* 0x006EA5C8: mov edx, 0x803f04 */
    PUSH32(esp, esi); /* 0x006EA5CD: push esi */
    PUSH32(esp, edi); /* 0x006EA5CE: push edi */
    edi = MEM32(ebp + 0xC); /* 0x006EA5CF: mov edi, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x006EA5D2: mov ecx, edi */
    RECOMP_CALL(sub_006EB9B0); /* 0x006EA5D4: call 0x6eb9b0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006EA5D9: mov esi, eax */
    /* test esi, esi */ /* 0x006EA5DB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA6B6; /* 0x006EA5DD: je 0x6ea6b6 */
L_006EA5E3:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x006EA5E3: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA6B6; /* 0x006EA5E7: je 0x6ea6b6 */
L_006EA5ED:
    edx = MEM32(edi + 0x1C); /* 0x006EA5ED: mov edx, dword ptr [edi + 0x1c] */
    eax = esp + 0xC; /* 0x006EA5F0: lea eax, [esp + 0xc] */
    ecx = MEM32(edi + 0x18); /* 0x006EA5F4: mov ecx, dword ptr [edi + 0x18] */
    PUSH32(esp, eax); /* 0x006EA5F7: push eax */
    PUSH32(esp, ebx); /* 0x006EA5F8: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x006EA5F9: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_006F7AB0); /* 0x006EA5FC: call 0x6f7ab0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EA601: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EA604: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA6A2; /* 0x006EA606: je 0x6ea6a2 */
L_006EA60C:
    ecx = MEM32(esi + 0xC); /* 0x006EA60C: mov ecx, dword ptr [esi + 0xc] */
    eax = ecx; /* 0x006EA60F: mov eax, ecx */
    edx = MEM32(esi + 0x10); /* 0x006EA611: mov edx, dword ptr [esi + 0x10] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC)); /* 0x006EA614: imul edx, dword ptr [esp + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10)); /* 0x006EA619: imul eax, dword ptr [esp + 0x10] */
    PUSH32(esp, ecx); /* 0x006EA61E: push ecx */
    ecx = MEM32(esi + 0x4); /* 0x006EA61F: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x006EA622: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(esi + 0x8); /* 0x006EA624: add edx, dword ptr [esi + 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x006EA627: push edx */
    edx = esp + 0x14; /* 0x006EA628: lea edx, [esp + 0x14] */
    RECOMP_CALL(sub_006F8D20); /* 0x006EA62C: call 0x6f8d20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EA631: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EA634: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EA64D; /* 0x006EA636: jns 0x6ea64d */
L_006EA638:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EA638: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EA63B: pop edi */
    esi = POP32_VAL(esp); /* 0x006EA63C: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EA63D: pop ebx */
    ecx = MEM32(esp + 0x10); /* 0x006EA63E: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EA642: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EA644: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EA649: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EA64B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA64C: ret  */
L_006EA64D:
    edx = MEM32(esi + 0x4); /* 0x006EA64D: mov edx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006EA650: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = MEM32(esi); /* 0x006EA653: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_006F9850); /* 0x006EA655: call 0x6f9850 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EA65A: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EA65D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EA638; /* 0x006EA65F: js 0x6ea638 */
L_006EA661:
    eax = MEM32(esi); /* 0x006EA661: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x006EA663: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA695; /* 0x006EA665: je 0x6ea695 */
L_006EA667:
    /* cmp MEM32(eax), 0x0092501Bu */ /* 0x006EA667: cmp dword ptr [eax], 0x92501b */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x0092501Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA695; /* 0x006EA66D: jne 0x6ea695 */
L_006EA66F:
    /* cmp MEM32(eax + 0xC0), 0 */ /* 0x006EA66F: cmp dword ptr [eax + 0xc0], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA6A2; /* 0x006EA676: jne 0x6ea6a2 */
L_006EA678:
    PUSH32(esp, eax); /* 0x006EA678: push eax */
    eax = MEM32(eax + 0x54); /* 0x006EA679: mov eax, dword ptr [eax + 0x54] */
    RECOMP_ICALL(eax); /* 0x006EA67C: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA67E: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EA681: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EA683: pop edi */
    esi = POP32_VAL(esp); /* 0x006EA684: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EA685: pop ebx */
    ecx = MEM32(esp + 0x10); /* 0x006EA686: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EA68A: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EA68C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EA691: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EA693: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA694: ret  */
L_006EA695:
    PUSH32(esp, 0x00806458u); /* 0x006EA695: push 0x806458 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EA69A: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA69F: add esp, 4 */
    _flag_k = FK_ADD;
L_006EA6A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EA6A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EA6A4: pop edi */
    esi = POP32_VAL(esp); /* 0x006EA6A5: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EA6A6: pop ebx */
    ecx = MEM32(esp + 0x10); /* 0x006EA6A7: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EA6AB: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EA6AD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EA6B2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EA6B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA6B5: ret  */
L_006EA6B6:
    PUSH32(esp, 0x00803F98u); /* 0x006EA6B6: push 0x803f98 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EA6BB: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x20); /* 0x006EA6C0: mov ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA6C4: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EA6C7: pop edi */
    esi = POP32_VAL(esp); /* 0x006EA6C8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EA6C9: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EA6CA: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EA6CC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EA6D1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EA6D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA6D4: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EA6E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EA6E0u);

L_006EA6E0:
    PUSH32(esp, ebp); /* 0x006EA6E0: push ebp */
    ebp = esp; /* 0x006EA6E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006EA6E3: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x006EA6E4: mov ecx, dword ptr [ebp + 0xc] */
    edx = 0x00803F04u; /* 0x006EA6E7: mov edx, 0x803f04 */
    PUSH32(esp, edi); /* 0x006EA6EC: push edi */
    PUSH32(esp, 0); /* 0x006EA6ED: push 0 */
    RECOMP_CALL(sub_006EB850); /* 0x006EA6EF: call 0x6eb850 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006EA6F4: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA6F6: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006EA6F9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA72A; /* 0x006EA6FB: je 0x6ea72a */
L_006EA6FD:
    ecx = MEM32(edi + 0x4); /* 0x006EA6FD: mov ecx, dword ptr [edi + 4] */
    /* test ecx, ecx */ /* 0x006EA700: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA709; /* 0x006EA702: je 0x6ea709 */
L_006EA704:
    RECOMP_CALL(sub_006F99A0); /* 0x006EA704: call 0x6f99a0 */
    RECOMP_FLAGS_IN();
L_006EA709:
    ecx = MEM32(edi); /* 0x006EA709: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x006EA70B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA714; /* 0x006EA70D: je 0x6ea714 */
L_006EA70F:
    RECOMP_CALL(sub_006F9A40); /* 0x006EA70F: call 0x6f9a40 */
    RECOMP_FLAGS_IN();
L_006EA714:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x006EA714: push dword ptr [edi + 8] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EA717: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA71D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x006EA720: push edi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EA721: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA727: add esp, 4 */
    _flag_k = FK_ADD;
L_006EA72A:
    edi = POP32_VAL(esp); /* 0x006EA72A: pop edi */
    ecx = POP32_VAL(esp); /* 0x006EA72B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006EA72C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA72D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EA730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EA730u);

L_006EA730:
    PUSH32(esp, ebp); /* 0x006EA730: push ebp */
    ebp = esp; /* 0x006EA731: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x006EA733: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x006EA736: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp eax, ecx */ /* 0x006EA739: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA741; /* 0x006EA73B: jne 0x6ea741 */
L_006EA73D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EA73D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006EA73F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA740: ret  */
L_006EA741:
    edx = MEM32(ecx + 0x4); /* 0x006EA741: mov edx, dword ptr [ecx + 4] */
    PUSH32(esp, esi); /* 0x006EA744: push esi */
    esi = MEM32(eax + 0x4); /* 0x006EA745: mov esi, dword ptr [eax + 4] */
    /* cmp esi, edx */ /* 0x006EA748: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA756; /* 0x006EA74A: jne 0x6ea756 */
L_006EA74C:
    esi = MEM32(eax + 0x8); /* 0x006EA74C: mov esi, dword ptr [eax + 8] */
    edx = MEM32(ecx + 0x8); /* 0x006EA74F: mov edx, dword ptr [ecx + 8] */
    /* cmp esi, edx */ /* 0x006EA752: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA75D; /* 0x006EA754: je 0x6ea75d */
L_006EA756:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x006EA756: sub edx, esi */
    _flag_k = FK_CMP;
    eax = edx; /* 0x006EA758: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x006EA75A: pop esi */
    ebp = POP32_VAL(esp); /* 0x006EA75B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA75C: ret  */
L_006EA75D:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006EA75D: mov dl, byte ptr [eax + 1] */
    PUSH32(esp, ebx); /* 0x006EA760: push ebx */
    SET_LO8(ebx, MEM8(ecx + 0x1)); /* 0x006EA761: mov bl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), LO8(ebx) */ /* 0x006EA764: cmp dl, bl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA774; /* 0x006EA766: je 0x6ea774 */
L_006EA768:
    eax = (uint32_t)LO8(ebx); /* 0x006EA768: movzx eax, bl */
    ecx = (uint32_t)LO8(edx); /* 0x006EA76B: movzx ecx, dl */
    ebx = POP32_VAL(esp); /* 0x006EA76E: pop ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006EA76F: sub eax, ecx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x006EA771: pop esi */
    ebp = POP32_VAL(esp); /* 0x006EA772: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA773: ret  */
L_006EA774:
    edx = (uint32_t)MEM16(ecx + 0x2); /* 0x006EA774: movzx edx, word ptr [ecx + 2] */
    esi = (uint32_t)MEM16(eax + 0x2); /* 0x006EA778: movzx esi, word ptr [eax + 2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x006EA77C: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    esi = esi & 0xFu; /* 0x006EA77F: and esi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edx */ /* 0x006EA782: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA78E; /* 0x006EA784: je 0x6ea78e */
L_006EA786:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x006EA786: sub edx, esi */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x006EA788: pop ebx */
    eax = edx; /* 0x006EA789: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x006EA78B: pop esi */
    ebp = POP32_VAL(esp); /* 0x006EA78C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA78D: ret  */
L_006EA78E:
    edx = MEM32(eax + 0xC); /* 0x006EA78E: mov edx, dword ptr [eax + 0xc] */
    eax = MEM32(ecx + 0xC); /* 0x006EA791: mov eax, dword ptr [ecx + 0xc] */
    /* cmp edx, eax */ /* 0x006EA794: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA79E; /* 0x006EA796: je 0x6ea79e */
L_006EA798:
    ebx = POP32_VAL(esp); /* 0x006EA798: pop ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006EA799: sub eax, edx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x006EA79B: pop esi */
    ebp = POP32_VAL(esp); /* 0x006EA79C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA79D: ret  */
L_006EA79E:
    ebx = POP32_VAL(esp); /* 0x006EA79E: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EA79F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EA7A1: pop esi */
    ebp = POP32_VAL(esp); /* 0x006EA7A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA7A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EA7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EA7B0u);

L_006EA7B0:
    PUSH32(esp, ebp); /* 0x006EA7B0: push ebp */
    ebp = esp; /* 0x006EA7B1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006EA7B3: push ecx */
    /* cmp MEM32(0x87CBCC), 0 */ /* 0x006EA7B4: cmp dword ptr [0x87cbcc], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBCC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006EA7BB: push ebx */
    PUSH32(esp, esi); /* 0x006EA7BC: push esi */
    PUSH32(esp, edi); /* 0x006EA7BD: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA7C5; /* 0x006EA7BE: je 0x6ea7c5 */
L_006EA7C0:
    RECOMP_CALL(sub_006EC430); /* 0x006EA7C0: call 0x6ec430 */
    RECOMP_FLAGS_IN();
L_006EA7C5:
    RECOMP_CALL(sub_006EDFA0); /* 0x006EA7C5: call 0x6edfa0 */
    RECOMP_FLAGS_IN();
    ecx = 0x4000u; /* 0x006EA7CA: mov ecx, 0x4000 */
    RECOMP_CALL(sub_006ED670); /* 0x006EA7CF: call 0x6ed670 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EA7D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EA95C; /* 0x006EA7D6: js 0x6ea95c */
L_006EA7DC:
    PUSH32(esp, 0x800u); /* 0x006EA7DC: push 0x800 */
    PUSH32(esp, 0x007D5628u); /* 0x006EA7E1: push 0x7d5628 */
    PUSH32(esp, 0x009261D8u); /* 0x006EA7E6: push 0x9261d8 */
    RECOMP_CALL(sub_00780838); /* 0x006EA7EB: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EA7F0: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(0x926A48) = 1; /* 0x006EA7F3: mov dword ptr [0x926a48], 1 */
    ecx = 0x00803F5Cu; /* 0x006EA7FD: mov ecx, 0x803f5c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006EA802: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006FBC10); /* 0x006EA804: call 0x6fbc10 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006EA809: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EA80B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x006EA80D: mov dword ptr [ebp - 4], edx */
    /* test edx, edx */ /* 0x006EA810: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA883; /* 0x006EA812: je 0x6ea883 */
L_006EA814:
    /* cmp MEM32(0x7D4BE4), ebx */ /* 0x006EA814: cmp dword ptr [0x7d4be4], ebx */
    _flag_a = (uint32_t)(MEM32(0x7D4BE4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA8CA; /* 0x006EA81A: je 0x6ea8ca */
L_006EA820:
    edi = 0x007D4BE4u; /* 0x006EA820: mov edi, 0x7d4be4 */
L_006EA825:
    eax = edx; /* 0x006EA825: mov eax, edx */
    ebx = eax + 0x1; /* 0x006EA827: lea ebx, [eax + 1] */
    ebx = ebx; /* 0x006EA82A: lea ebx, [ebx] */
L_006EA830:
    SET_LO8(ecx, MEM8(eax)); /* 0x006EA830: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006EA832: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x006EA833: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EA830; /* 0x006EA835: jne 0x6ea830 */
L_006EA837:
    ecx = MEM32(edi); /* 0x006EA837: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x006EA839: sub eax, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006EA83B: push eax */
    PUSH32(esp, edx); /* 0x006EA83C: push edx */
    PUSH32(esp, MEM32(ecx)); /* 0x006EA83D: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC584)); /* 0x006EA83F: call dword ptr [0x7cc584] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EA845: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EA848: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EA857; /* 0x006EA84A: jne 0x6ea857 */
L_006EA84C:
    eax = MEM32(edi); /* 0x006EA84C: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x8); /* 0x006EA84E: mov eax, dword ptr [eax + 8] */
    RECOMP_ICALL(eax); /* 0x006EA851: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EA853: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EA86E; /* 0x006EA855: jne 0x6ea86e */
L_006EA857:
    edx = MEM32(ebp + (-0x4)); /* 0x006EA857: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EA85A: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM32(esi * 4 + 0x7D4BE4), 0 */ /* 0x006EA85B: cmp dword ptr [esi*4 + 0x7d4be4], 0 */
    _flag_a = (uint32_t)(MEM32(esi * 4 + 0x7D4BE4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = esi * 4 + 0x7D4BE4; /* 0x006EA863: lea edi, [esi*4 + 0x7d4be4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EA8CA; /* 0x006EA86A: je 0x6ea8ca */
L_006EA86C:
    RECOMP_BACKEDGE();
    goto L_006EA825; /* 0x006EA86C: jmp 0x6ea825 */
L_006EA86E:
    eax = MEM32(esi * 4 + 0x7D4BE4); /* 0x006EA86E: mov eax, dword ptr [esi*4 + 0x7d4be4] */
    PUSH32(esp, 0); /* 0x006EA875: push 0 */
    eax = MEM32(eax + 0xC); /* 0x006EA877: mov eax, dword ptr [eax + 0xc] */
    RECOMP_ICALL(eax); /* 0x006EA87A: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA87C: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x006EA87F: mov ebx, eax */
    goto L_006EA8C3; /* 0x006EA881: jmp 0x6ea8c3 */
L_006EA883:
    /* cmp MEM32(0x7D4BE4), ebx */ /* 0x006EA883: cmp dword ptr [0x7d4be4], ebx */
    _flag_a = (uint32_t)(MEM32(0x7D4BE4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EAA20; /* 0x006EA889: je 0x6eaa20 */
L_006EA88F:
    edi = 0x007D4BE4u; /* 0x006EA88F: mov edi, 0x7d4be4 */
L_006EA894:
    eax = MEM32(edi); /* 0x006EA894: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x8); /* 0x006EA896: mov eax, dword ptr [eax + 8] */
    RECOMP_ICALL(eax); /* 0x006EA899: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EA89B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA8B1; /* 0x006EA89D: je 0x6ea8b1 */
L_006EA89F:
    eax = MEM32(edi); /* 0x006EA89F: mov eax, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x006EA8A1: push 0 */
    eax = MEM32(eax + 0xC); /* 0x006EA8A3: mov eax, dword ptr [eax + 0xc] */
    RECOMP_ICALL(eax); /* 0x006EA8A6: call eax */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006EA8A8: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA8AA: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x006EA8AD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EA8E7; /* 0x006EA8AF: jne 0x6ea8e7 */
L_006EA8B1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EA8B1: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM32(esi * 4 + 0x7D4BE4), 0 */ /* 0x006EA8B2: cmp dword ptr [esi*4 + 0x7d4be4], 0 */
    _flag_a = (uint32_t)(MEM32(esi * 4 + 0x7D4BE4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = esi * 4 + 0x7D4BE4; /* 0x006EA8BA: lea edi, [esi*4 + 0x7d4be4] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA894; /* 0x006EA8C1: jne 0x6ea894 */
L_006EA8C3:
    /* test ebx, ebx */ /* 0x006EA8C3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EA8E7; /* 0x006EA8C5: jne 0x6ea8e7 */
L_006EA8C7:
    edx = MEM32(ebp + (-0x4)); /* 0x006EA8C7: mov edx, dword ptr [ebp - 4] */
L_006EA8CA:
    /* test edx, edx */ /* 0x006EA8CA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAA20; /* 0x006EA8CC: je 0x6eaa20 */
L_006EA8D2:
    PUSH32(esp, edx); /* 0x006EA8D2: push edx */
    PUSH32(esp, 0x00803F48u); /* 0x006EA8D3: push 0x803f48 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EA8D8: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EA8DD: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EA8E0: pop edi */
    esi = POP32_VAL(esp); /* 0x006EA8E1: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EA8E2: pop ebx */
    esp = ebp; /* 0x006EA8E3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EA8E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA8E6: ret  */
L_006EA8E7:
    eax = MEM32(esi * 4 + 0x7D4BE4); /* 0x006EA8E7: mov eax, dword ptr [esi*4 + 0x7d4be4] */
    MEM32(0x87CBCC) = ebx; /* 0x006EA8EE: mov dword ptr [0x87cbcc], ebx */
    eax = MEM32(eax); /* 0x006EA8F4: mov eax, dword ptr [eax] */
    MEM32(ebx) = eax; /* 0x006EA8F6: mov dword ptr [ebx], eax */
    MEM32(ebx + 0x11C) = 1; /* 0x006EA8F8: mov dword ptr [ebx + 0x11c], 1 */
    MEM32(ebx + 0x184) = 0; /* 0x006EA902: mov dword ptr [ebx + 0x184], 0 */
    MEM32(ebx + 0x288) = 0; /* 0x006EA90C: mov dword ptr [ebx + 0x288], 0 */
    RECOMP_CALL(sub_006EC660); /* 0x006EA916: call 0x6ec660 */
    RECOMP_FLAGS_IN();
    edx = 1; /* 0x006EA91B: mov edx, 1 */
    esi = 0x00925FB8u; /* 0x006EA920: mov esi, 0x925fb8 */
    ecx = edx; /* 0x006EA925: mov ecx, edx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(esi), _sum = MEM32(esi) + ecx; ecx = _old; MEM32(esi) = _sum; } /* 0x006EA927: lock xadd dword ptr [esi], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(0x87CBCC); /* 0x006EA92B: mov eax, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EA930: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax + 0x294) = ecx; /* 0x006EA931: mov dword ptr [eax + 0x294], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(esi), _sum = MEM32(esi) + edx; edx = _old; MEM32(esi) = _sum; } /* 0x006EA937: lock xadd dword ptr [esi], edx */
    _flag_k = FK_ADD;
    ecx = MEM32(0x87CBCC); /* 0x006EA93B: mov ecx, dword ptr [0x87cbcc] */
    eax = edx + 0x1; /* 0x006EA941: lea eax, [edx + 1] */
    PUSH32(esp, ecx); /* 0x006EA944: push ecx */
    MEM32(ecx + 0x298) = eax; /* 0x006EA945: mov dword ptr [ecx + 0x298], eax */
    eax = MEM32(ecx + 0x4); /* 0x006EA94B: mov eax, dword ptr [ecx + 4] */
    RECOMP_ICALL(eax); /* 0x006EA94E: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA950: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EA953: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EA966; /* 0x006EA955: jns 0x6ea966 */
L_006EA957:
    RECOMP_CALL(sub_006EC430); /* 0x006EA957: call 0x6ec430 */
    RECOMP_FLAGS_IN();
L_006EA95C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EA95C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EA95F: pop edi */
    esi = POP32_VAL(esp); /* 0x006EA960: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EA961: pop ebx */
    esp = ebp; /* 0x006EA962: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EA964: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA965: ret  */
L_006EA966:
    eax = MEM32(0x87CBCC); /* 0x006EA966: mov eax, dword ptr [0x87cbcc] */
    /* cmp MEM32(eax + 0x108), 0 */ /* 0x006EA96B: cmp dword ptr [eax + 0x108], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x108)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA98D; /* 0x006EA972: jne 0x6ea98d */
L_006EA974:
    RECOMP_CALL(sub_006EC430); /* 0x006EA974: call 0x6ec430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00804078u); /* 0x006EA979: push 0x804078 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EA97E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA983: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EA986: pop edi */
    esi = POP32_VAL(esp); /* 0x006EA987: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EA988: pop ebx */
    esp = ebp; /* 0x006EA989: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EA98B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EA98C: ret  */
L_006EA98D:
    RECOMP_CALL(sub_006EA100); /* 0x006EA98D: call 0x6ea100 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EA992: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA9B9; /* 0x006EA994: je 0x6ea9b9 */
L_006EA996:
    eax = MEM32(0x87CBCC); /* 0x006EA996: mov eax, dword ptr [0x87cbcc] */
    MEM32(eax + 0x84) = 0x006EA160u; /* 0x006EA99B: mov dword ptr [eax + 0x84], 0x6ea160 */
    MEM32(eax + 0x88) = 0x006EA5B0u; /* 0x006EA9A5: mov dword ptr [eax + 0x88], 0x6ea5b0 */
    MEM32(eax + 0x8C) = 0x006EA6E0u; /* 0x006EA9AF: mov dword ptr [eax + 0x8c], 0x6ea6e0 */
L_006EA9B9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EA9B9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x0080405Cu; /* 0x006EA9BB: mov ecx, 0x80405c */
    RECOMP_CALL(sub_006F5A70); /* 0x006EA9C0: call 0x6f5a70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EA9C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x87CBCC); /* 0x006EA9C7: mov eax, dword ptr [0x87cbcc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EA9FA; /* 0x006EA9CC: jne 0x6ea9fa */
L_006EA9CE:
    /* test eax, eax */ /* 0x006EA9CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAA12; /* 0x006EA9D0: je 0x6eaa12 */
L_006EA9D2:
    /* cmp MEM32(eax + 0x104), 0 */ /* 0x006EA9D2: cmp dword ptr [eax + 0x104], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x104)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EA9FA; /* 0x006EA9D9: jne 0x6ea9fa */
L_006EA9DB:
    ecx = MEM32(eax + 0xD0); /* 0x006EA9DB: mov ecx, dword ptr [eax + 0xd0] */
    MEM32(eax + 0x104) = 1; /* 0x006EA9E1: mov dword ptr [eax + 0x104], 1 */
    /* test ecx, ecx */ /* 0x006EA9EB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EA9FA; /* 0x006EA9ED: je 0x6ea9fa */
L_006EA9EF:
    PUSH32(esp, eax); /* 0x006EA9EF: push eax */
    RECOMP_ICALL(ecx); /* 0x006EA9F0: call ecx */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBCC); /* 0x006EA9F2: mov eax, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EA9F7: add esp, 4 */
    _flag_k = FK_ADD;
L_006EA9FA:
    /* test eax, eax */ /* 0x006EA9FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAA12; /* 0x006EA9FC: je 0x6eaa12 */
L_006EA9FE:
    ecx = MEM32(eax + 0xE0); /* 0x006EA9FE: mov ecx, dword ptr [eax + 0xe0] */
    /* test ecx, ecx */ /* 0x006EAA04: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAA12; /* 0x006EAA06: je 0x6eaa12 */
L_006EAA08:
    PUSH32(esp, eax); /* 0x006EAA08: push eax */
    RECOMP_ICALL(ecx); /* 0x006EAA09: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EAA0B: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EAA0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EAA17; /* 0x006EAA10: jne 0x6eaa17 */
L_006EAA12:
    RECOMP_CALL(sub_006EC8C0); /* 0x006EAA12: call 0x6ec8c0 */
    RECOMP_FLAGS_IN();
L_006EAA17:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EAA17: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EAA19: pop edi */
    esi = POP32_VAL(esp); /* 0x006EAA1A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EAA1B: pop ebx */
    esp = ebp; /* 0x006EAA1C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EAA1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EAA1F: ret  */
L_006EAA20:
    PUSH32(esp, 0x008040A4u); /* 0x006EAA20: push 0x8040a4 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EAA25: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EAA2A: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EAA2D: pop edi */
    esi = POP32_VAL(esp); /* 0x006EAA2E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EAA2F: pop ebx */
    esp = ebp; /* 0x006EAA30: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EAA32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EAA33: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EAA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EAA40u);

L_006EAA40:
    PUSH32(esp, ebp); /* 0x006EAA40: push ebp */
    ebp = esp; /* 0x006EAA41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x006EAA43: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006EAA46: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006EAA4B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006EAA4D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006EAA50: push ebx */
    ebx = MEM32(0x87CBCC); /* 0x006EAA51: mov ebx, dword ptr [0x87cbcc] */
    MEM32(ebp + (-0x28)) = ecx; /* 0x006EAA57: mov dword ptr [ebp - 0x28], ecx */
    eax = MEM32(ebx + 0x108); /* 0x006EAA5A: mov eax, dword ptr [ebx + 0x108] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006EAA60: inc eax */
    _flag_k = FK_INC;
    ecx = eax; /* 0x006EAA61: mov ecx, eax */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x006EAA63: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x006EAA63: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006EAA66: add ecx, eax */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x006EAA68: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x006EAA68: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x006EAA6B: push ecx */
    PUSH32(esp, MEM32(ebx + 0x10C)); /* 0x006EAA6C: push dword ptr [ebx + 0x10c] */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x006EAA72: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006EAA78: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EAA7A: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x006EAA7D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAB0C; /* 0x006EAA7F: je 0x6eab0c */
L_006EAA85:
    ecx = MEM32(ebp + (-0x28)); /* 0x006EAA85: mov ecx, dword ptr [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x006EAA88: push esi */
    esi = MEM32(ebx + 0x108); /* 0x006EAA89: mov esi, dword ptr [ebx + 0x108] */
    PUSH32(esp, edi); /* 0x006EAA8F: push edi */
    eax = esi + 0x1; /* 0x006EAA90: lea eax, [esi + 1] */
    MEM32(ebx + 0x108) = eax; /* 0x006EAA93: mov dword ptr [ebx + 0x108], eax */
    eax = esi; /* 0x006EAA99: mov eax, esi */
    _xmm[0] = xmm_ld(ecx); /* 0x006EAA9B: movdqu xmm0, xmmword ptr [ecx] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x006EAA9F: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x006EAA9F: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x006EAAA2: add eax, esi */
    _flag_k = FK_ADD;
    xmm_st(edx + eax * 4, _xmm[0]); /* 0x006EAAA4: movdqu xmmword ptr [edx + eax*4], xmm0 */
    edi = edx + eax * 4; /* 0x006EAAA9: lea edi, [edx + eax*4] */
    _xmm[0] = xmm_ld(ecx + 0x10); /* 0x006EAAAC: movdqu xmm0, xmmword ptr [ecx + 0x10] */
    xmm_st(edi + 0x10, _xmm[0]); /* 0x006EAAB1: movdqu xmmword ptr [edi + 0x10], xmm0 */
    _xmm[0] = xmm_ld(ecx + 0x20); /* 0x006EAAB6: movdqu xmm0, xmmword ptr [ecx + 0x20] */
    xmm_st(edi + 0x20, _xmm[0]); /* 0x006EAABB: movdqu xmmword ptr [edi + 0x20], xmm0 */
    _xmm[0] = xmm_ld(ecx + 0x30); /* 0x006EAAC0: movdqu xmm0, xmmword ptr [ecx + 0x30] */
    xmm_st(edi + 0x30, _xmm[0]); /* 0x006EAAC5: movdqu xmmword ptr [edi + 0x30], xmm0 */
    eax = MEM32(ecx + 0x40); /* 0x006EAACA: mov eax, dword ptr [ecx + 0x40] */
    MEM32(edi + 0x40) = eax; /* 0x006EAACD: mov dword ptr [edi + 0x40], eax */
    MEM32(edi + 0x3C) = ebx; /* 0x006EAAD0: mov dword ptr [edi + 0x3c], ebx */
    MEM32(ebx + 0x10C) = edx; /* 0x006EAAD3: mov dword ptr [ebx + 0x10c], edx */
    ecx = MEM32(ecx); /* 0x006EAAD9: mov ecx, dword ptr [ecx] */
    /* test ecx, ecx */ /* 0x006EAADB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EAAF2; /* 0x006EAADD: jne 0x6eaaf2 */
L_006EAADF:
    PUSH32(esp, 0xAu); /* 0x006EAADF: push 0xa */
    eax = ebp + (-0x24); /* 0x006EAAE1: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x006EAAE4: push eax */
    PUSH32(esp, esi); /* 0x006EAAE5: push esi */
    RECOMP_ICALL(MEM32(0x7CC5AC)); /* 0x006EAAE6: call dword ptr [0x7cc5ac] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EAAEC: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x24); /* 0x006EAAEF: lea ecx, [ebp - 0x24] */
L_006EAAF2:
    RECOMP_CALL(sub_006F2D10); /* 0x006EAAF2: call 0x6f2d10 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x006EAAF7: mov dword ptr [edi], eax */
    eax = esi; /* 0x006EAAF9: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006EAAFB: pop edi */
    esi = POP32_VAL(esp); /* 0x006EAAFC: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EAAFD: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006EAAFE: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006EAB01: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EAB03: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EAB08: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EAB0A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EAB0B: ret  */
L_006EAB0C:
    PUSH32(esp, 0x00803E4Cu); /* 0x006EAB0C: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EAB11: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006EAB16: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EAB19: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006EAB1C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EAB1E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006EAB21: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006EAB22: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EAB27: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EAB29: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EAB2A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EAB30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EAB30u);

L_006EAB30:
    PUSH32(esp, ebx); /* 0x006EAB30: push ebx */
    PUSH32(esp, esi); /* 0x006EAB31: push esi */
    esi = edx; /* 0x006EAB32: mov esi, edx */
    edx = MEM32(0x87CBCC); /* 0x006EAB34: mov edx, dword ptr [0x87cbcc] */
    PUSH32(esp, edi); /* 0x006EAB3A: push edi */
    edi = ecx; /* 0x006EAB3B: mov edi, ecx */
    /* test edx, edx */ /* 0x006EAB3D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EAB55; /* 0x006EAB3F: jne 0x6eab55 */
L_006EAB41:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EAB41: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EAB46: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EAB4B: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EAB4E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EAB51: pop edi */
    esi = POP32_VAL(esp); /* 0x006EAB52: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EAB53: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EAB54: ret  */
L_006EAB55:
    /* test edi, edi */ /* 0x006EAB55: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EABC2; /* 0x006EAB57: js 0x6eabc2 */
L_006EAB59:
    /* cmp edi, MEM32(edx + 0x108) */ /* 0x006EAB59: cmp edi, dword ptr [edx + 0x108] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(edx + 0x108));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EABC2; /* 0x006EAB5F: jge 0x6eabc2 */
L_006EAB61:
    /* test esi, esi */ /* 0x006EAB61: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EABBC; /* 0x006EAB63: je 0x6eabbc */
L_006EAB65:
    eax = MEM32(edx + 0x10C); /* 0x006EAB65: mov eax, dword ptr [edx + 0x10c] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x006EAB6B: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x006EAB6B: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x006EAB6E: add ecx, edi */
    _flag_k = FK_ADD;
    ebx = eax + ecx * 4; /* 0x006EAB70: lea ebx, [eax + ecx*4] */
    eax = MEM32(edx + 0xC); /* 0x006EAB73: mov eax, dword ptr [edx + 0xc] */
    /* test eax, eax */ /* 0x006EAB76: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAB86; /* 0x006EAB78: je 0x6eab86 */
L_006EAB7A:
    PUSH32(esp, esi); /* 0x006EAB7A: push esi */
    PUSH32(esp, ebx); /* 0x006EAB7B: push ebx */
    PUSH32(esp, edx); /* 0x006EAB7C: push edx */
    RECOMP_ICALL(eax); /* 0x006EAB7D: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EAB7F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EAB82: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EABBC; /* 0x006EAB84: je 0x6eabbc */
L_006EAB86:
    /* test edi, edi */ /* 0x006EAB86: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EABA1; /* 0x006EAB88: jne 0x6eaba1 */
L_006EAB8A:
    MEM32(esi) = edi; /* 0x006EAB8A: mov dword ptr [esi], edi */
    MEM32(esi + 0x4) = edi; /* 0x006EAB8C: mov dword ptr [esi + 4], edi */
    eax = MEM32(ebx + 0x28); /* 0x006EAB8F: mov eax, dword ptr [ebx + 0x28] */
    MEM32(esi + 0x8) = eax; /* 0x006EAB92: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebx + 0x2C); /* 0x006EAB95: mov eax, dword ptr [ebx + 0x2c] */
    MEM32(esi + 0xC) = eax; /* 0x006EAB98: mov dword ptr [esi + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EAB9B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EAB9D: pop edi */
    esi = POP32_VAL(esp); /* 0x006EAB9E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EAB9F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EABA0: ret  */
L_006EABA1:
    ecx = edi + (-0x1); /* 0x006EABA1: lea ecx, [edi - 1] */
    edx = esi; /* 0x006EABA4: mov edx, esi */
    RECOMP_CALL(sub_006EAB30); /* 0x006EABA6: call 0x6eab30 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x006EABAB: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x006EABAE: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x28); /* 0x006EABB0: mov eax, dword ptr [ebx + 0x28] */
    MEM32(esi + 0x8) = eax; /* 0x006EABB3: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebx + 0x2C); /* 0x006EABB6: mov eax, dword ptr [ebx + 0x2c] */
    MEM32(esi + 0xC) = eax; /* 0x006EABB9: mov dword ptr [esi + 0xc], eax */
L_006EABBC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EABBC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EABBE: pop edi */
    esi = POP32_VAL(esp); /* 0x006EABBF: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EABC0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EABC1: ret  */
L_006EABC2:
    eax = MEM32(edx + 0x108); /* 0x006EABC2: mov eax, dword ptr [edx + 0x108] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006EABC8: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x006EABC9: push eax */
    PUSH32(esp, 0x00804030u); /* 0x006EABCA: push 0x804030 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EABCF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EABD4: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EABD7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EABDA: pop edi */
    esi = POP32_VAL(esp); /* 0x006EABDB: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EABDC: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EABDD: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EABE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EABE0u);

L_006EABE0:
    PUSH32(esp, ebp); /* 0x006EABE0: push ebp */
    ebp = esp; /* 0x006EABE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006EABE3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006EABE6: push ebx */
    ebx = ecx; /* 0x006EABE7: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x006EABE9: push esi */
    PUSH32(esp, edi); /* 0x006EABEA: push edi */
    esi = edx; /* 0x006EABEB: mov esi, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006EABED: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x8); /* 0x006EABEF: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebx + 0xC); /* 0x006EABF2: mov edx, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x8)) = edx; /* 0x006EABF5: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x006EABF8: mov dword ptr [ebp - 4], ecx */
    /* test ecx, ecx */ /* 0x006EABFB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EAC62; /* 0x006EABFD: jle 0x6eac62 */
L_006EABFF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x006EABFF: add edx, 8 */
    _flag_k = FK_ADD;
L_006EAC02:
    eax = edx + (-0x8); /* 0x006EAC02: lea eax, [edx - 8] */
    /* cmp esi, eax */ /* 0x006EAC05: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EACC8; /* 0x006EAC07: je 0x6eacc8 */
L_006EAC0D:
    ecx = MEM32(esi + 0x4); /* 0x006EAC0D: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(edx + (-0x4)); /* 0x006EAC10: mov eax, dword ptr [edx - 4] */
    /* cmp ecx, eax */ /* 0x006EAC13: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EAC4E; /* 0x006EAC15: jne 0x6eac4e */
L_006EAC17:
    ecx = MEM32(esi + 0x8); /* 0x006EAC17: mov ecx, dword ptr [esi + 8] */
    eax = MEM32(edx); /* 0x006EAC1A: mov eax, dword ptr [edx] */
    /* cmp ecx, eax */ /* 0x006EAC1C: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EAC4E; /* 0x006EAC1E: jne 0x6eac4e */
L_006EAC20:
    SET_LO8(ecx, MEM8(esi + 0x1)); /* 0x006EAC20: mov cl, byte ptr [esi + 1] */
    SET_LO8(eax, MEM8(edx + (-0x7))); /* 0x006EAC23: mov al, byte ptr [edx - 7] */
    /* cmp LO8(ecx), LO8(eax) */ /* 0x006EAC26: cmp cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EAC32; /* 0x006EAC28: je 0x6eac32 */
L_006EAC2A:
    eax = (uint32_t)LO8(eax); /* 0x006EAC2A: movzx eax, al */
    ecx = (uint32_t)LO8(ecx); /* 0x006EAC2D: movzx ecx, cl */
    goto L_006EAC4E; /* 0x006EAC30: jmp 0x6eac4e */
L_006EAC32:
    eax = (uint32_t)MEM16(edx + (-0x6)); /* 0x006EAC32: movzx eax, word ptr [edx - 6] */
    ecx = (uint32_t)MEM16(esi + 0x2); /* 0x006EAC36: movzx ecx, word ptr [esi + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x006EAC3A: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x006EAC3D: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x006EAC40: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EAC4E; /* 0x006EAC42: jne 0x6eac4e */
L_006EAC44:
    ecx = MEM32(esi + 0xC); /* 0x006EAC44: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(edx + 0x4); /* 0x006EAC47: mov eax, dword ptr [edx + 4] */
    /* cmp ecx, eax */ /* 0x006EAC4A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EACC8; /* 0x006EAC4C: je 0x6eacc8 */
L_006EAC4E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006EAC4E: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x006EAC50: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EACC8; /* 0x006EAC52: je 0x6eacc8 */
L_006EAC54:
    ecx = MEM32(ebp + (-0x4)); /* 0x006EAC54: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EAC57: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x006EAC58: add edx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp edi, ecx */ /* 0x006EAC5B: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006EAC02; /* 0x006EAC5D: jl 0x6eac02 */
L_006EAC5F:
    edx = MEM32(ebp + (-0x8)); /* 0x006EAC5F: mov edx, dword ptr [ebp - 8] */
L_006EAC62:
    eax = MEM32(ebx + 0x4); /* 0x006EAC62: mov eax, dword ptr [ebx + 4] */
    /* cmp ecx, eax */ /* 0x006EAC65: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EAC8F; /* 0x006EAC67: jne 0x6eac8f */
L_006EAC69:
    eax = eax + eax * 4; /* 0x006EAC69: lea eax, [eax + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xA0u; /* 0x006EAC6C: add eax, 0xa0 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x006EAC71: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x006EAC71: shl eax, 2 */
    PUSH32(esp, eax); /* 0x006EAC74: push eax */
    PUSH32(esp, edx); /* 0x006EAC75: push edx */
    RECOMP_ICALL(MEM32(0x7CC494)); /* 0x006EAC76: call dword ptr [0x7cc494] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006EAC7C: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EAC7E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x006EAC81: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EACC8; /* 0x006EAC83: je 0x6eacc8 */
L_006EAC85:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + 0x20u; /* 0x006EAC85: add dword ptr [ebx + 4], 0x20 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x4)); /* 0x006EAC89: mov ecx, dword ptr [ebp - 4] */
    MEM32(ebx + 0xC) = edx; /* 0x006EAC8C: mov dword ptr [ebx + 0xc], edx */
L_006EAC8F:
    _xmm[0] = xmm_ld(esi); /* 0x006EAC8F: movdqu xmm0, xmmword ptr [esi] */
    eax = ecx + ecx * 4; /* 0x006EAC93: lea eax, [ecx + ecx*4] */
    ecx = edx + eax * 4; /* 0x006EAC96: lea ecx, [edx + eax*4] */
    xmm_st(ecx, _xmm[0]); /* 0x006EAC99: movdqu xmmword ptr [ecx], xmm0 */
    eax = MEM32(esi + 0x10); /* 0x006EAC9D: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, 0x006EA730u); /* 0x006EACA0: push 0x6ea730 */
    MEM32(ecx + 0x10) = eax; /* 0x006EACA5: mov dword ptr [ecx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) + 1; /* 0x006EACA8: inc dword ptr [ebx + 8] */
    _flag_k = FK_INC;
    PUSH32(esp, 0x14u); /* 0x006EACAB: push 0x14 */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x006EACAD: push dword ptr [ebx + 8] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x006EACB0: push dword ptr [ebx + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC4C0)); /* 0x006EACB3: call dword ptr [0x7cc4c0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006EACB9: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = 1; /* 0x006EACBC: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x006EACC1: pop edi */
    esi = POP32_VAL(esp); /* 0x006EACC2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EACC3: pop ebx */
    esp = ebp; /* 0x006EACC4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EACC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EACC7: ret  */
L_006EACC8:
    edi = POP32_VAL(esp); /* 0x006EACC8: pop edi */
    esi = POP32_VAL(esp); /* 0x006EACC9: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EACCA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006EACCC: pop ebx */
    esp = ebp; /* 0x006EACCD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EACCF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EACD0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EACE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EACE0u);

L_006EACE0:
    PUSH32(esp, esi); /* 0x006EACE0: push esi */
    esi = ecx; /* 0x006EACE1: mov esi, ecx */
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x006EACE3: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EAD0F; /* 0x006EACE7: jne 0x6ead0f */
L_006EACE9:
    eax = MEM32(0x87CBCC); /* 0x006EACE9: mov eax, dword ptr [0x87cbcc] */
    ecx = MEM32(eax + 0x18); /* 0x006EACEE: mov ecx, dword ptr [eax + 0x18] */
    /* test ecx, ecx */ /* 0x006EACF1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAD0F; /* 0x006EACF3: je 0x6ead0f */
L_006EACF5:
    PUSH32(esp, esi); /* 0x006EACF5: push esi */
    PUSH32(esp, eax); /* 0x006EACF6: push eax */
    RECOMP_ICALL(ecx); /* 0x006EACF7: call ecx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x006EA730u); /* 0x006EACF9: push 0x6ea730 */
    PUSH32(esp, 0x14u); /* 0x006EACFE: push 0x14 */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x006EAD00: push dword ptr [esi + 8] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x006EAD03: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC4C0)); /* 0x006EAD06: call dword ptr [0x7cc4c0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006EAD0C: add esp, 0x18 */
    _flag_k = FK_ADD;
L_006EAD0F:
    eax = MEM32(esi + 0x8); /* 0x006EAD0F: mov eax, dword ptr [esi + 8] */
    esi = POP32_VAL(esp); /* 0x006EAD12: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EAD13: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EAD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EAD20u);

L_006EAD20:
    PUSH32(esp, ebp); /* 0x006EAD20: push ebp */
    ebp = esp; /* 0x006EAD21: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006EAD23: push ecx */
    eax = MEM32(0x87CBCC); /* 0x006EAD24: mov eax, dword ptr [0x87cbcc] */
    PUSH32(esp, esi); /* 0x006EAD29: push esi */
    esi = edx; /* 0x006EAD2A: mov esi, edx */
    PUSH32(esp, edi); /* 0x006EAD2C: push edi */
    /* test eax, eax */ /* 0x006EAD2D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EAD46; /* 0x006EAD2F: jne 0x6ead46 */
L_006EAD31:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EAD31: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EAD36: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EAD3B: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EAD3E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EAD41: pop edi */
    esi = POP32_VAL(esp); /* 0x006EAD42: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EAD43: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006EAD44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EAD45: ret  */
L_006EAD46:
    ecx = MEM32(eax + 0x108); /* 0x006EAD46: mov ecx, dword ptr [eax + 0x108] */
    /* test ecx, ecx */ /* 0x006EAD4C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EADA4; /* 0x006EAD4E: jle 0x6eada4 */
L_006EAD50:
    edi = MEM32(eax + 0x10C); /* 0x006EAD50: mov edi, dword ptr [eax + 0x10c] */
    /* test esi, esi */ /* 0x006EAD56: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EAD89; /* 0x006EAD58: js 0x6ead89 */
L_006EAD5A:
    ecx = edi; /* 0x006EAD5A: mov ecx, edi */
    RECOMP_CALL(sub_006EACE0); /* 0x006EAD5C: call 0x6eace0 */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x006EAD61: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EAD89; /* 0x006EAD63: jge 0x6ead89 */
L_006EAD65:
    edx = MEM32(ebp + 0x8); /* 0x006EAD65: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x006EAD68: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAD82; /* 0x006EAD6A: je 0x6ead82 */
L_006EAD6C:
    eax = MEM32(edi + 0xC); /* 0x006EAD6C: mov eax, dword ptr [edi + 0xc] */
    ecx = esi + esi * 4; /* 0x006EAD6F: lea ecx, [esi + esi*4] */
    _xmm[0] = xmm_ld(eax + ecx * 4); /* 0x006EAD72: movdqu xmm0, xmmword ptr [eax + ecx*4] */
    eax = MEM32(eax + ecx * 4 + 0x10); /* 0x006EAD77: mov eax, dword ptr [eax + ecx*4 + 0x10] */
    xmm_st(edx, _xmm[0]); /* 0x006EAD7B: movdqu xmmword ptr [edx], xmm0 */
    MEM32(edx + 0x10) = eax; /* 0x006EAD7F: mov dword ptr [edx + 0x10], eax */
L_006EAD82:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EAD82: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EAD84: pop edi */
    esi = POP32_VAL(esp); /* 0x006EAD85: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EAD86: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006EAD87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EAD88: ret  */
L_006EAD89:
    ecx = edi; /* 0x006EAD89: mov ecx, edi */
    RECOMP_CALL(sub_006EACE0); /* 0x006EAD8B: call 0x6eace0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006EAD90: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x006EAD91: push eax */
    PUSH32(esp, 0x0080414Cu); /* 0x006EAD92: push 0x80414c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EAD97: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EAD9C: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EAD9F: pop edi */
    esi = POP32_VAL(esp); /* 0x006EADA0: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EADA1: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006EADA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EADA3: ret  */
L_006EADA4:
    eax = ecx + (-0x1); /* 0x006EADA4: lea eax, [ecx - 1] */
    PUSH32(esp, eax); /* 0x006EADA7: push eax */
    PUSH32(esp, 0x00804030u); /* 0x006EADA8: push 0x804030 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EADAD: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EADB2: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EADB5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EADB8: pop edi */
    esi = POP32_VAL(esp); /* 0x006EADB9: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EADBA: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006EADBB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EADBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EADC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EADC0u);

L_006EADC0:
    PUSH32(esp, ecx); /* 0x006EADC0: push ecx */
    eax = MEM32(0x87CBCC); /* 0x006EADC1: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006EADC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EADDC; /* 0x006EADC8: jne 0x6eaddc */
L_006EADCA:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EADCA: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EADCF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EADD4: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EADD7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x006EADDA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EADDB: ret  */
L_006EADDC:
    ecx = MEM32(eax + 0x108); /* 0x006EADDC: mov ecx, dword ptr [eax + 0x108] */
    /* test ecx, ecx */ /* 0x006EADE2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EAE03; /* 0x006EADE4: jle 0x6eae03 */
L_006EADE6:
    eax = MEM32(eax + 0x10C); /* 0x006EADE6: mov eax, dword ptr [eax + 0x10c] */
    /* test edx, edx */ /* 0x006EADEC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EADFF; /* 0x006EADEE: je 0x6eadff */
L_006EADF0:
    _xmm[0] = xmm_ld(eax + 0x10); /* 0x006EADF0: movdqu xmm0, xmmword ptr [eax + 0x10] */
    eax = MEM32(eax + 0x20); /* 0x006EADF5: mov eax, dword ptr [eax + 0x20] */
    xmm_st(edx, _xmm[0]); /* 0x006EADF8: movdqu xmmword ptr [edx], xmm0 */
    MEM32(edx + 0x10) = eax; /* 0x006EADFC: mov dword ptr [edx + 0x10], eax */
L_006EADFF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EADFF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x006EAE01: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EAE02: ret  */
L_006EAE03:
    eax = ecx + (-0x1); /* 0x006EAE03: lea eax, [ecx - 1] */
    PUSH32(esp, eax); /* 0x006EAE06: push eax */
    PUSH32(esp, 0x00804030u); /* 0x006EAE07: push 0x804030 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EAE0C: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EAE11: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EAE14: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x006EAE17: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EAE18: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EAE20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EAE20u);

L_006EAE20:
    PUSH32(esp, ebp); /* 0x006EAE20: push ebp */
    ebp = esp; /* 0x006EAE21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006EAE23: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006EAE26: push ebx */
    PUSH32(esp, esi); /* 0x006EAE27: push esi */
    PUSH32(esp, edi); /* 0x006EAE28: push edi */
    edi = ecx; /* 0x006EAE29: mov edi, ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x006EAE2B: mov dword ptr [ebp - 4], edx */
    ecx = edx; /* 0x006EAE2E: mov ecx, edx */
    MEM32(ebp + (-0xC)) = edi; /* 0x006EAE30: mov dword ptr [ebp - 0xc], edi */
    /* test ecx, ecx */ /* 0x006EAE33: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAFDA; /* 0x006EAE35: je 0x6eafda */
L_006EAE3B:
    ebx = MEM32(ebp + 0x8); /* 0x006EAE3B: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x006EAE3E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAFDA; /* 0x006EAE40: je 0x6eafda */
L_006EAE46:
    ebx = MEM32(ecx); /* 0x006EAE46: mov ebx, dword ptr [ecx] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x006EAE48: mov dword ptr [ebp - 0x14], ebx */
    /* test ebx, ebx */ /* 0x006EAE4B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EAE55; /* 0x006EAE4D: jne 0x6eae55 */
L_006EAE4F:
    eax = MEM32(edi + 0x10); /* 0x006EAE4F: mov eax, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x006EAE52: mov dword ptr [ebp - 0x14], eax */
L_006EAE55:
    edx = MEM32(ecx + 0xC); /* 0x006EAE55: mov edx, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x18)) = edx; /* 0x006EAE58: mov dword ptr [ebp - 0x18], edx */
    /* test edx, edx */ /* 0x006EAE5B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EAE65; /* 0x006EAE5D: jne 0x6eae65 */
L_006EAE5F:
    eax = MEM32(edi + 0x1C); /* 0x006EAE5F: mov eax, dword ptr [edi + 0x1c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x006EAE62: mov dword ptr [ebp - 0x18], eax */
L_006EAE65:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EAE65: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006EAE67: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EAE69: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EAE6B:
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x006EAE6B: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x006EAE6F: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x8)) = ebx; /* 0x006EAE72: mov dword ptr [ebp - 8], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EAEA4; /* 0x006EAE75: jne 0x6eaea4 */
L_006EAE77:
    edx = MEM32(0x87CBCC); /* 0x006EAE77: mov edx, dword ptr [0x87cbcc] */
    eax = MEM32(edx + 0x18); /* 0x006EAE7D: mov eax, dword ptr [edx + 0x18] */
    /* test eax, eax */ /* 0x006EAE80: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAEA1; /* 0x006EAE82: je 0x6eaea1 */
L_006EAE84:
    PUSH32(esp, edi); /* 0x006EAE84: push edi */
    PUSH32(esp, edx); /* 0x006EAE85: push edx */
    RECOMP_ICALL(eax); /* 0x006EAE86: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x006EA730u); /* 0x006EAE88: push 0x6ea730 */
    PUSH32(esp, 0x14u); /* 0x006EAE8D: push 0x14 */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x006EAE8F: push dword ptr [edi + 8] */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x006EAE92: push dword ptr [edi + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC4C0)); /* 0x006EAE95: call dword ptr [0x7cc4c0] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x006EAE9B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x006EAE9E: add esp, 0x18 */
    _flag_k = FK_ADD;
L_006EAEA1:
    eax = MEM32(ebp + (-0x10)); /* 0x006EAEA1: mov eax, dword ptr [ebp - 0x10] */
L_006EAEA4:
    /* cmp ebx, MEM32(edi + 0x8) */ /* 0x006EAEA4: cmp ebx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EAED4; /* 0x006EAEA7: jge 0x6eaed4 */
L_006EAEA9:
    edx = MEM32(edi + 0xC); /* 0x006EAEA9: mov edx, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x006EAEAC: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x4); /* 0x006EAEAE: mov eax, dword ptr [edx + 4] */
    /* test eax, eax */ /* 0x006EAEB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAEBA; /* 0x006EAEB3: je 0x6eaeba */
L_006EAEB5:
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x006EAEB5: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006EAED4; /* 0x006EAEB8: jl 0x6eaed4 */
L_006EAEBA:
    ecx = MEM32(edx + 0x8); /* 0x006EAEBA: mov ecx, dword ptr [edx + 8] */
    /* test ecx, ecx */ /* 0x006EAEBD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAF0C; /* 0x006EAEBF: je 0x6eaf0c */
L_006EAEC1:
    ebx = MEM32(ebp + (-0x4)); /* 0x006EAEC1: mov ebx, dword ptr [ebp - 4] */
    /* cmp ecx, MEM32(ebx + 0x8) */ /* 0x006EAEC4: cmp ecx, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EAF09; /* 0x006EAEC7: jge 0x6eaf09 */
L_006EAEC9:
    ecx = ebx; /* 0x006EAEC9: mov ecx, ebx */
    /* test eax, eax */ /* 0x006EAECB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAF4C; /* 0x006EAECD: je 0x6eaf4c */
L_006EAECF:
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x006EAECF: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EAF4C; /* 0x006EAED2: jne 0x6eaf4c */
L_006EAED4:
    ebx = MEM32(ebp + 0x8); /* 0x006EAED4: mov ebx, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x006EAED7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAFE7; /* 0x006EAED9: je 0x6eafe7 */
L_006EAEDF:
    eax = MEM32(esi); /* 0x006EAEDF: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x006EAEE1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EAEE7; /* 0x006EAEE3: jne 0x6eaee7 */
L_006EAEE5:
    eax = MEM32(ecx); /* 0x006EAEE5: mov eax, dword ptr [ecx] */
L_006EAEE7:
    MEM32(ebx) = eax; /* 0x006EAEE7: mov dword ptr [ebx], eax */
    eax = MEM32(esi + 0x4); /* 0x006EAEE9: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x006EAEEC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAF8D; /* 0x006EAEEE: je 0x6eaf8d */
L_006EAEF4:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x006EAEF4: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EAF8D; /* 0x006EAEF8: je 0x6eaf8d */
L_006EAEFE:
    MEM32(ebx + 0x4) = eax; /* 0x006EAEFE: mov dword ptr [ebx + 4], eax */
    eax = MEM32(esi + 0x8); /* 0x006EAF01: mov eax, dword ptr [esi + 8] */
    goto L_006EAF96; /* 0x006EAF04: jmp 0x6eaf96 */
L_006EAF09:
    ebx = MEM32(ebp + (-0x8)); /* 0x006EAF09: mov ebx, dword ptr [ebp - 8] */
L_006EAF0C:
    /* test esi, esi */ /* 0x006EAF0C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EAF7C; /* 0x006EAF0E: je 0x6eaf7c */
L_006EAF10:
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x006EAF10: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006EAF7C; /* 0x006EAF13: jl 0x6eaf7c */
L_006EAF15:
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x006EAF15: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006EAF7C; /* 0x006EAF18: jl 0x6eaf7c */
L_006EAF1A:
    edi = MEM32(edx); /* 0x006EAF1A: mov edi, dword ptr [edx] */
    /* cmp edi, MEM32(esi) */ /* 0x006EAF1C: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EAF5B; /* 0x006EAF1E: je 0x6eaf5b */
L_006EAF20:
    ebx = MEM32(ebp + (-0x14)); /* 0x006EAF20: mov ebx, dword ptr [ebp - 0x14] */
    /* cmp edi, ebx */ /* 0x006EAF23: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EAF44; /* 0x006EAF25: je 0x6eaf44 */
L_006EAF27:
    eax = (uint32_t)MEM8(edx + 0x1); /* 0x006EAF27: movzx eax, byte ptr [edx + 1] */
    ecx = ebx; /* 0x006EAF2B: mov ecx, ebx */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x006EAF2D: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x006EAF2D: shr ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    ecx = ecx & 0xFFu; /* 0x006EAF30: and ecx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x006EAF36: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006EAF46; /* 0x006EAF38: jb 0x6eaf46 */
L_006EAF3A:
    _flag_a = (uint32_t)((edi ^ ebx)); _flag_b = (uint32_t)((edi ^ ebx));
    edi = edi ^ ebx; /* 0x006EAF3A: xor edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, 0x0F000000u */ /* 0x006EAF3C: test edi, 0xf000000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x0F000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EAF46; /* 0x006EAF42: jne 0x6eaf46 */
L_006EAF44:
    esi = edx; /* 0x006EAF44: mov esi, edx */
L_006EAF46:
    ecx = MEM32(ebp + (-0x4)); /* 0x006EAF46: mov ecx, dword ptr [ebp - 4] */
    edi = MEM32(ebp + (-0xC)); /* 0x006EAF49: mov edi, dword ptr [ebp - 0xc] */
L_006EAF4C:
    ebx = MEM32(ebp + (-0x8)); /* 0x006EAF4C: mov ebx, dword ptr [ebp - 8] */
L_006EAF4F:
    eax = MEM32(ebp + (-0x10)); /* 0x006EAF4F: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006EAF52: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x006EAF53: add eax, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006EAE6B; /* 0x006EAF56: jmp 0x6eae6b */
L_006EAF5B:
    eax = MEM32(edx + 0xC); /* 0x006EAF5B: mov eax, dword ptr [edx + 0xc] */
    edi = MEM32(ebp + (-0xC)); /* 0x006EAF5E: mov edi, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x006EAF61: mov ecx, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(esi + 0xC) */ /* 0x006EAF64: cmp eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EAF4F; /* 0x006EAF67: je 0x6eaf4f */
L_006EAF69:
    /* cmp eax, MEM32(ebp + (-0x18)) */ /* 0x006EAF69: cmp eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006EAF4F; /* 0x006EAF6C: jl 0x6eaf4f */
L_006EAF6E:
    eax = MEM32(ebp + (-0x10)); /* 0x006EAF6E: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006EAF71: inc ebx */
    _flag_k = FK_INC;
    esi = edx; /* 0x006EAF72: mov esi, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x006EAF74: add eax, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006EAE6B; /* 0x006EAF77: jmp 0x6eae6b */
L_006EAF7C:
    eax = MEM32(ebp + (-0x10)); /* 0x006EAF7C: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006EAF7F: inc ebx */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0x4)); /* 0x006EAF80: mov ecx, dword ptr [ebp - 4] */
    esi = edx; /* 0x006EAF83: mov esi, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x006EAF85: add eax, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_006EAE6B; /* 0x006EAF88: jmp 0x6eae6b */
L_006EAF8D:
    eax = MEM32(ecx + 0x4); /* 0x006EAF8D: mov eax, dword ptr [ecx + 4] */
    MEM32(ebx + 0x4) = eax; /* 0x006EAF90: mov dword ptr [ebx + 4], eax */
    eax = MEM32(ecx + 0x8); /* 0x006EAF93: mov eax, dword ptr [ecx + 8] */
L_006EAF96:
    MEM32(ebx + 0x8) = eax; /* 0x006EAF96: mov dword ptr [ebx + 8], eax */
    eax = MEM32(esi + 0xC); /* 0x006EAF99: mov eax, dword ptr [esi + 0xc] */
    /* test eax, eax */ /* 0x006EAF9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EAFA3; /* 0x006EAF9E: jne 0x6eafa3 */
L_006EAFA0:
    eax = MEM32(ecx + 0xC); /* 0x006EAFA0: mov eax, dword ptr [ecx + 0xc] */
L_006EAFA3:
    /* cmp MEM32(ebx), 0 */ /* 0x006EAFA3: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx + 0xC) = eax; /* 0x006EAFA6: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(esi + 0x10); /* 0x006EAFA9: mov eax, dword ptr [esi + 0x10] */
    MEM32(ebx + 0x10) = eax; /* 0x006EAFAC: mov dword ptr [ebx + 0x10], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EAFB7; /* 0x006EAFAF: jne 0x6eafb7 */
L_006EAFB1:
    MEM32(ebx) = 0x16161804u; /* 0x006EAFB1: mov dword ptr [ebx], 0x16161804 */
L_006EAFB7:
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x006EAFB7: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EAFC4; /* 0x006EAFBB: jne 0x6eafc4 */
L_006EAFBD:
    MEM32(ebx + 0x4) = 0x280u; /* 0x006EAFBD: mov dword ptr [ebx + 4], 0x280 */
L_006EAFC4:
    /* cmp MEM32(ebx + 0x8), 0 */ /* 0x006EAFC4: cmp dword ptr [ebx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EAFD1; /* 0x006EAFC8: jne 0x6eafd1 */
L_006EAFCA:
    MEM32(ebx + 0x8) = 0x1E0u; /* 0x006EAFCA: mov dword ptr [ebx + 8], 0x1e0 */
L_006EAFD1:
    eax = ebx; /* 0x006EAFD1: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x006EAFD3: pop edi */
    esi = POP32_VAL(esp); /* 0x006EAFD4: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EAFD5: pop ebx */
    esp = ebp; /* 0x006EAFD6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EAFD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EAFD9: ret  */
L_006EAFDA:
    PUSH32(esp, 0x0080411Cu); /* 0x006EAFDA: push 0x80411c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EAFDF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EAFE4: add esp, 4 */
    _flag_k = FK_ADD;
L_006EAFE7:
    edi = POP32_VAL(esp); /* 0x006EAFE7: pop edi */
    esi = POP32_VAL(esp); /* 0x006EAFE8: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EAFE9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006EAFEB: pop ebx */
    esp = ebp; /* 0x006EAFEC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EAFEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EAFEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EAFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EAFF0u);

L_006EAFF0:
    PUSH32(esp, ebp); /* 0x006EAFF0: push ebp */
    ebp = esp; /* 0x006EAFF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x006EAFF3: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006EAFF6: push esi */
    esi = ecx; /* 0x006EAFF7: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006EAFF9: push edi */
    /* test edx, edx */ /* 0x006EAFFA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB06A; /* 0x006EAFFC: je 0x6eb06a */
L_006EAFFE:
    _xmm[0] = xmm_ld(edx); /* 0x006EAFFE: movdqu xmm0, xmmword ptr [edx] */
    eax = MEM32(edx + 0x10); /* 0x006EB002: mov eax, dword ptr [edx + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006EB005: mov dword ptr [ebp - 4], eax */
    eax = _xmm[0].u32[0]; /* 0x006EB008: movd eax, xmm0 */
    xmm_st(ebp + (-0x14), _xmm[0]); /* 0x006EB00C: movdqu xmmword ptr [ebp - 0x14], xmm0 */
    /* test eax, eax */ /* 0x006EB011: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB01B; /* 0x006EB013: jne 0x6eb01b */
L_006EB015:
    eax = MEM32(esi + 0x24); /* 0x006EB015: mov eax, dword ptr [esi + 0x24] */
    MEM32(ebp + (-0x14)) = eax; /* 0x006EB018: mov dword ptr [ebp - 0x14], eax */
L_006EB01B:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x006EB01B: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB027; /* 0x006EB01F: jne 0x6eb027 */
L_006EB021:
    eax = MEM32(esi + 0x28); /* 0x006EB021: mov eax, dword ptr [esi + 0x28] */
    MEM32(ebp + (-0x10)) = eax; /* 0x006EB024: mov dword ptr [ebp - 0x10], eax */
L_006EB027:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x006EB027: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB033; /* 0x006EB02B: jne 0x6eb033 */
L_006EB02D:
    eax = MEM32(esi + 0x2C); /* 0x006EB02D: mov eax, dword ptr [esi + 0x2c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x006EB030: mov dword ptr [ebp - 0xc], eax */
L_006EB033:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x006EB033: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB03F; /* 0x006EB037: jne 0x6eb03f */
L_006EB039:
    eax = MEM32(esi + 0x30); /* 0x006EB039: mov eax, dword ptr [esi + 0x30] */
    MEM32(ebp + (-0x8)) = eax; /* 0x006EB03C: mov dword ptr [ebp - 8], eax */
L_006EB03F:
    eax = ebp + (-0x14); /* 0x006EB03F: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x006EB042: push eax */
    edx = eax; /* 0x006EB043: mov edx, eax */
    RECOMP_CALL(sub_006EAE20); /* 0x006EB045: call 0x6eae20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB04A: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EB04D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB07A; /* 0x006EB04F: jne 0x6eb07a */
L_006EB051:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x006EB051: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x006EB054: push dword ptr [ebp - 0x10] */
    PUSH32(esp, 0x008040F4u); /* 0x006EB057: push 0x8040f4 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB05C: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EB061: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EB064: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB065: pop esi */
    esp = ebp; /* 0x006EB066: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB068: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB069: ret  */
L_006EB06A:
    _xmm[0] = xmm_ld(esi + 0x10); /* 0x006EB06A: movdqu xmm0, xmmword ptr [esi + 0x10] */
    eax = MEM32(esi + 0x20); /* 0x006EB06F: mov eax, dword ptr [esi + 0x20] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006EB072: mov dword ptr [ebp - 4], eax */
    xmm_st(ebp + (-0x14), _xmm[0]); /* 0x006EB075: movdqu xmmword ptr [ebp - 0x14], xmm0 */
L_006EB07A:
    _xmm[0] = xmm_ld(esi + 0x24); /* 0x006EB07A: movdqu xmm0, xmmword ptr [esi + 0x24] */
    eax = MEM32(esi + 0x34); /* 0x006EB07F: mov eax, dword ptr [esi + 0x34] */
    ecx = ebp + (-0x14); /* 0x006EB082: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x18)) = eax; /* 0x006EB085: mov dword ptr [ebp - 0x18], eax */
    edx = ebp + (-0x28); /* 0x006EB088: lea edx, [ebp - 0x28] */
    xmm_st(ebp + (-0x28), _xmm[0]); /* 0x006EB08B: movdqu xmmword ptr [ebp - 0x28], xmm0 */
    edi = 0x10u; /* 0x006EB090: mov edi, 0x10 */
L_006EB095:
    eax = MEM32(ecx); /* 0x006EB095: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x006EB097: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB0AE; /* 0x006EB099: jne 0x6eb0ae */
L_006EB09B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x006EB09B: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x006EB09E: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x006EB0A1: sub edi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_006EB095; /* 0x006EB0A4: jae 0x6eb095 */
L_006EB0A6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB0A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB0A8: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB0A9: pop esi */
    esp = ebp; /* 0x006EB0AA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB0AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB0AD: ret  */
L_006EB0AE:
    eax = MEM32(0x87CBCC); /* 0x006EB0AE: mov eax, dword ptr [0x87cbcc] */
    ecx = MEM32(eax + 0x1C); /* 0x006EB0B3: mov ecx, dword ptr [eax + 0x1c] */
    /* test ecx, ecx */ /* 0x006EB0B6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB0CD; /* 0x006EB0B8: jne 0x6eb0cd */
L_006EB0BA:
    PUSH32(esp, 0x008040C0u); /* 0x006EB0BA: push 0x8040c0 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB0BF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB0C4: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EB0C7: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB0C8: pop esi */
    esp = ebp; /* 0x006EB0C9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB0CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB0CC: ret  */
L_006EB0CD:
    edx = ebp + (-0x14); /* 0x006EB0CD: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x006EB0D0: push edx */
    PUSH32(esp, esi); /* 0x006EB0D1: push esi */
    PUSH32(esp, eax); /* 0x006EB0D2: push eax */
    RECOMP_ICALL(ecx); /* 0x006EB0D3: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EB0D5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EB0D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EB0E5; /* 0x006EB0DA: jns 0x6eb0e5 */
L_006EB0DC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EB0DC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB0DF: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB0E0: pop esi */
    esp = ebp; /* 0x006EB0E1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB0E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB0E4: ret  */
L_006EB0E5:
    _xmm[0] = xmm_ld(ebp + (-0x14)); /* 0x006EB0E5: movdqu xmm0, xmmword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x4)); /* 0x006EB0EA: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006EB0ED: pop edi */
    xmm_st(esi + 0x24, _xmm[0]); /* 0x006EB0EE: movdqu xmmword ptr [esi + 0x24], xmm0 */
    MEM32(esi + 0x34) = eax; /* 0x006EB0F3: mov dword ptr [esi + 0x34], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB0F6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EB0F8: pop esi */
    esp = ebp; /* 0x006EB0F9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB0FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB0FC: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EB100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EB100u);

L_006EB100:
    PUSH32(esp, ebp); /* 0x006EB100: push ebp */
    ebp = esp; /* 0x006EB101: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006EB103: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x006EB106: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006EB109: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006EB10E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x20) = eax; /* 0x006EB110: mov dword ptr [esp + 0x20], eax */
    edx = MEM32(0x87CBCC); /* 0x006EB114: mov edx, dword ptr [0x87cbcc] */
    PUSH32(esp, ebx); /* 0x006EB11A: push ebx */
    PUSH32(esp, esi); /* 0x006EB11B: push esi */
    PUSH32(esp, edi); /* 0x006EB11C: push edi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x006EB11D: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x006EB120: mov esi, ecx */
    /* test edx, edx */ /* 0x006EB122: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB130; /* 0x006EB124: jne 0x6eb130 */
L_006EB126:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EB126: push 0x803f6c */
    goto L_006EB2B7; /* 0x006EB12B: jmp 0x6eb2b7 */
L_006EB130:
    /* test esi, esi */ /* 0x006EB130: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB2B2; /* 0x006EB132: je 0x6eb2b2 */
L_006EB138:
    eax = edx + 0x118; /* 0x006EB138: lea eax, [edx + 0x118] */
    /* cmp MEM32(esi), eax */ /* 0x006EB13E: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB2B2; /* 0x006EB140: jne 0x6eb2b2 */
L_006EB146:
    ecx = MEM32(esi + 0x10); /* 0x006EB146: mov ecx, dword ptr [esi + 0x10] */
    eax = ecx; /* 0x006EB149: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x006EB14B: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x1FFF0000u */ /* 0x006EB150: cmp eax, 0x1fff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB292; /* 0x006EB155: je 0x6eb292 */
L_006EB15B:
    /* cmp eax, 0x2FFF0000u */ /* 0x006EB15B: cmp eax, 0x2fff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB292; /* 0x006EB160: je 0x6eb292 */
L_006EB166:
    ecx = MEM32(esi + 0x14); /* 0x006EB166: mov ecx, dword ptr [esi + 0x14] */
    eax = ecx; /* 0x006EB169: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x006EB16B: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x1FFF0000u */ /* 0x006EB170: cmp eax, 0x1fff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB292; /* 0x006EB175: je 0x6eb292 */
L_006EB17B:
    /* cmp eax, 0x2FFF0000u */ /* 0x006EB17B: cmp eax, 0x2fff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB292; /* 0x006EB180: je 0x6eb292 */
L_006EB186:
    ebx = MEM32(edx + 0x108); /* 0x006EB186: mov ebx, dword ptr [edx + 0x108] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EB18C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x006EB18E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EB1B0; /* 0x006EB190: jle 0x6eb1b0 */
L_006EB192:
    eax = MEM32(edx + 0x10C); /* 0x006EB192: mov eax, dword ptr [edx + 0x10c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x38u; /* 0x006EB198: add eax, 0x38 */
    _flag_k = FK_ADD;
    goto L_006EB1A0; /* 0x006EB19B: jmp 0x6eb1a0 */
L_006EB1A0:
    /* cmp MEM32(eax), esi */ /* 0x006EB1A0: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB26A; /* 0x006EB1A2: je 0x6eb26a */
L_006EB1A8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EB1A8: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x44u; /* 0x006EB1A9: add eax, 0x44 */
    _flag_k = FK_ADD;
    /* cmp ecx, ebx */ /* 0x006EB1AC: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006EB1A0; /* 0x006EB1AE: jl 0x6eb1a0 */
L_006EB1B0:
    eax = MEM32(esi + 0x18); /* 0x006EB1B0: mov eax, dword ptr [esi + 0x18] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006EB1B3: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006EB1B4: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006EB1B6: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x10); /* 0x006EB1B8: add eax, dword ptr [esi + 0x10] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x10) = eax; /* 0x006EB1BB: mov dword ptr [esp + 0x10], eax */
    eax = MEM32(esi + 0x1C); /* 0x006EB1BF: mov eax, dword ptr [esi + 0x1c] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006EB1C2: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006EB1C3: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006EB1C5: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x14); /* 0x006EB1C7: add eax, dword ptr [esi + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EB1CA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x14) = eax; /* 0x006EB1CC: mov dword ptr [esp + 0x14], eax */
    /* test ebx, ebx */ /* 0x006EB1D0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EB249; /* 0x006EB1D2: jle 0x6eb249 */
L_006EB1D4:
    ebx = 0x7FFFFFFFu; /* 0x006EB1D4: mov ebx, 0x7fffffff */
    esp = esp; /* 0x006EB1D9: lea esp, [esp] */
L_006EB1E0:
    edx = esp + 0x1C; /* 0x006EB1E0: lea edx, [esp + 0x1c] */
    ecx = esi; /* 0x006EB1E4: mov ecx, esi */
    RECOMP_CALL(sub_006EAB30); /* 0x006EB1E6: call 0x6eab30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x006EB1EB: push ecx */
    eax = esp + 0x20; /* 0x006EB1EC: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x006EB1F0: push eax */
    ecx = esp + 0x18; /* 0x006EB1F1: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_006F7640); /* 0x006EB1F5: call 0x6f7640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EB1FA: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EB1FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB27E; /* 0x006EB1FF: jne 0x6eb27e */
L_006EB201:
    eax = MEM32(esp + 0x24); /* 0x006EB201: mov eax, dword ptr [esp + 0x24] */
    ecx = MEM32(esp + 0x10); /* 0x006EB205: mov ecx, dword ptr [esp + 0x10] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006EB209: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006EB20A: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006EB20C: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x006EB20E: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(esp + 0x28); /* 0x006EB210: mov eax, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esp + 0x1C); /* 0x006EB214: sub ecx, dword ptr [esp + 0x1c] */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006EB218: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006EB219: sub eax, edx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ecx); /* 0x006EB21B: imul ecx, ecx */
    edx = MEM32(esp + 0x14); /* 0x006EB21E: mov edx, dword ptr [esp + 0x14] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006EB222: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x006EB224: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(esp + 0x20); /* 0x006EB226: sub edx, dword ptr [esp + 0x20] */
    _flag_k = FK_CMP;
    edx = (uint32_t)((int32_t)edx * (int32_t)edx); /* 0x006EB22A: imul edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x006EB22D: add edx, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, ebx */ /* 0x006EB22F: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EB237; /* 0x006EB231: jge 0x6eb237 */
L_006EB233:
    edi = esi; /* 0x006EB233: mov edi, esi */
    ebx = edx; /* 0x006EB235: mov ebx, edx */
L_006EB237:
    eax = MEM32(0x87CBCC); /* 0x006EB237: mov eax, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EB23C: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(eax + 0x108) */ /* 0x006EB23D: cmp esi, dword ptr [eax + 0x108] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x108));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006EB1E0; /* 0x006EB243: jl 0x6eb1e0 */
L_006EB245:
    /* test edi, edi */ /* 0x006EB245: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EB256; /* 0x006EB247: jns 0x6eb256 */
L_006EB249:
    PUSH32(esp, 0x00804004u); /* 0x006EB249: push 0x804004 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB24E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB253: add esp, 4 */
    _flag_k = FK_ADD;
L_006EB256:
    eax = edi; /* 0x006EB256: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006EB258: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB259: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EB25A: pop ebx */
    ecx = MEM32(esp + 0x20); /* 0x006EB25B: mov ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EB25F: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EB261: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EB266: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB268: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB269: ret  */
L_006EB26A:
    eax = ecx; /* 0x006EB26A: mov eax, ecx */
    edi = POP32_VAL(esp); /* 0x006EB26C: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB26D: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EB26E: pop ebx */
    ecx = MEM32(esp + 0x20); /* 0x006EB26F: mov ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EB273: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EB275: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EB27A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB27C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB27D: ret  */
L_006EB27E:
    eax = esi; /* 0x006EB27E: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006EB280: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB281: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EB282: pop ebx */
    ecx = MEM32(esp + 0x20); /* 0x006EB283: mov ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EB287: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EB289: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EB28E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB290: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB291: ret  */
L_006EB292:
    eax = (uint32_t)LO16(ecx); /* 0x006EB292: movzx eax, cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EB295: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(edx + 0x108) */ /* 0x006EB297: cmp eax, dword ptr [edx + 0x108] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x108));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) { eax = ecx; } /* 0x006EB29D: cmovge eax, ecx */
    edi = POP32_VAL(esp); /* 0x006EB2A0: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB2A1: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EB2A2: pop ebx */
    ecx = MEM32(esp + 0x20); /* 0x006EB2A3: mov ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EB2A7: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EB2A9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EB2AE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB2B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB2B1: ret  */
L_006EB2B2:
    PUSH32(esp, 0x00804020u); /* 0x006EB2B2: push 0x804020 */
L_006EB2B7:
    RECOMP_CALL(sub_006EDB70); /* 0x006EB2B7: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x30); /* 0x006EB2BC: mov ecx, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB2C0: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EB2C3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB2C6: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB2C7: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EB2C8: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EB2C9: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EB2CB: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EB2D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB2D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB2D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EB2E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EB2E0u);

L_006EB2E0:
    RECOMP_CALL(sub_006EB100); /* 0x006EB2E0: call 0x6eb100 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EB2E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EB2FF; /* 0x006EB2E7: js 0x6eb2ff */
L_006EB2E9:
    ecx = eax; /* 0x006EB2E9: mov ecx, eax */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x006EB2EB: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x006EB2EB: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006EB2EE: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(0x87CBCC); /* 0x006EB2F0: mov eax, dword ptr [0x87cbcc] */
    eax = MEM32(eax + 0x10C); /* 0x006EB2F5: mov eax, dword ptr [eax + 0x10c] */
    eax = eax + ecx * 4; /* 0x006EB2FB: lea eax, [eax + ecx*4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB2FE: ret  */
L_006EB2FF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB2FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB301: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EB310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EB310u);

L_006EB310:
    PUSH32(esp, ebp); /* 0x006EB310: push ebp */
    ebp = esp; /* 0x006EB311: mov ebp, esp */
    eax = MEM32(0x87CBCC); /* 0x006EB313: mov eax, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x006EB318: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006EB31B: push esi */
    esi = ecx; /* 0x006EB31C: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006EB31E: push edi */
    edi = edx; /* 0x006EB31F: mov edi, edx */
    /* test eax, eax */ /* 0x006EB321: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB33B; /* 0x006EB323: jne 0x6eb33b */
L_006EB325:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EB325: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB32A: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB32F: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EB332: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB335: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB336: pop esi */
    esp = ebp; /* 0x006EB337: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB339: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB33A: ret  */
L_006EB33B:
    /* test esi, esi */ /* 0x006EB33B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB417; /* 0x006EB33D: je 0x6eb417 */
L_006EB343:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006EB343: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), eax */ /* 0x006EB348: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB417; /* 0x006EB34A: jne 0x6eb417 */
L_006EB350:
    /* test edi, edi */ /* 0x006EB350: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB36C; /* 0x006EB352: jne 0x6eb36c */
L_006EB354:
    PUSH32(esp, 0x007E1FD0u); /* 0x006EB354: push 0x7e1fd0 */
    PUSH32(esp, 0x00803FE8u); /* 0x006EB359: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB35E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EB363: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EB366: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB367: pop esi */
    esp = ebp; /* 0x006EB368: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB36A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB36B: ret  */
L_006EB36C:
    _xmm[0] = xmm_ld(esi + 0x48); /* 0x006EB36C: movdqu xmm0, xmmword ptr [esi + 0x48] */
    eax = MEM32(esi + 0x58); /* 0x006EB371: mov eax, dword ptr [esi + 0x58] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006EB374: mov dword ptr [ebp - 4], eax */
    xmm_st(ebp + (-0x14), _xmm[0]); /* 0x006EB377: movdqu xmmword ptr [ebp - 0x14], xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x006EB37C: psrldq xmm0, 4 */
    eax = _xmm[0].u32[0]; /* 0x006EB381: movd eax, xmm0 */
    /* test eax, eax */ /* 0x006EB385: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB38F; /* 0x006EB387: jne 0x6eb38f */
L_006EB389:
    eax = MEM32(esi + 0x40); /* 0x006EB389: mov eax, dword ptr [esi + 0x40] */
    MEM32(ebp + (-0x10)) = eax; /* 0x006EB38C: mov dword ptr [ebp - 0x10], eax */
L_006EB38F:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x006EB38F: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB39B; /* 0x006EB393: jne 0x6eb39b */
L_006EB395:
    eax = MEM32(esi + 0x44); /* 0x006EB395: mov eax, dword ptr [esi + 0x44] */
    MEM32(ebp + (-0xC)) = eax; /* 0x006EB398: mov dword ptr [ebp - 0xc], eax */
L_006EB39B:
    RECOMP_CALL(sub_006EB2E0); /* 0x006EB39B: call 0x6eb2e0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x30); /* 0x006EB3A0: mov ecx, dword ptr [esi + 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1001u);
    ecx = ecx & 0x1001u; /* 0x006EB3A3: and ecx, 0x1001 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x1001u */ /* 0x006EB3A9: cmp ecx, 0x1001 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1001u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB3CD; /* 0x006EB3AF: jne 0x6eb3cd */
L_006EB3B1:
    _xmm[0] = xmm_ld(eax + 0x10); /* 0x006EB3B1: movdqu xmm0, xmmword ptr [eax + 0x10] */
    xmm_st(ebp + (-0x14), _xmm[0]); /* 0x006EB3B6: movdqu xmmword ptr [ebp - 0x14], xmm0 */
    eax = MEM32(eax + 0x20); /* 0x006EB3BB: mov eax, dword ptr [eax + 0x20] */
    xmm_st(edi, _xmm[0]); /* 0x006EB3BE: movdqu xmmword ptr [edi], xmm0 */
    MEM32(edi + 0x10) = eax; /* 0x006EB3C2: mov dword ptr [edi + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB3C5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB3C7: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB3C8: pop esi */
    esp = ebp; /* 0x006EB3C9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB3CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB3CC: ret  */
L_006EB3CD:
    eax = ebp + (-0x14); /* 0x006EB3CD: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x006EB3D0: push eax */
    PUSH32(esp, ecx); /* 0x006EB3D1: push ecx */
    ecx = esi; /* 0x006EB3D2: mov ecx, esi */
    RECOMP_CALL(sub_006EB2E0); /* 0x006EB3D4: call 0x6eb2e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB3D9: add esp, 4 */
    _flag_k = FK_ADD;
    edx = ebp + (-0x14); /* 0x006EB3DC: lea edx, [ebp - 0x14] */
    ecx = eax; /* 0x006EB3DF: mov ecx, eax */
    RECOMP_CALL(sub_006EAE20); /* 0x006EB3E1: call 0x6eae20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB3E6: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EB3E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB400; /* 0x006EB3EB: jne 0x6eb400 */
L_006EB3ED:
    PUSH32(esp, 0x00803FC4u); /* 0x006EB3ED: push 0x803fc4 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB3F2: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB3F7: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EB3FA: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB3FB: pop esi */
    esp = ebp; /* 0x006EB3FC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB3FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB3FF: ret  */
L_006EB400:
    _xmm[0] = xmm_ld(ebp + (-0x14)); /* 0x006EB400: movdqu xmm0, xmmword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x4)); /* 0x006EB405: mov eax, dword ptr [ebp - 4] */
    xmm_st(edi, _xmm[0]); /* 0x006EB408: movdqu xmmword ptr [edi], xmm0 */
    MEM32(edi + 0x10) = eax; /* 0x006EB40C: mov dword ptr [edi + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB40F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB411: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB412: pop esi */
    esp = ebp; /* 0x006EB413: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB415: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB416: ret  */
L_006EB417:
    PUSH32(esp, 0x00804020u); /* 0x006EB417: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB41C: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB421: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EB424: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB427: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB428: pop esi */
    esp = ebp; /* 0x006EB429: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB42B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB42C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EB430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EB430u);

L_006EB430:
    /* cmp ecx, MEM32(0x926A0C) */ /* 0x006EB430: cmp ecx, dword ptr [0x926a0c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x926A0C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB44A; /* 0x006EB436: jne 0x6eb44a */
L_006EB438:
    PUSH32(esp, MEM32(0x926A14)); /* 0x006EB438: push dword ptr [0x926a14] */
    edx = MEM32(0x926A10); /* 0x006EB43E: mov edx, dword ptr [0x926a10] */
    RECOMP_CALL(sub_006F1220); /* 0x006EB444: call 0x6f1220 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006EB449: pop ecx */
L_006EB44A:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB44A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EB450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EB450u);

L_006EB450:
    PUSH32(esp, ebp); /* 0x006EB450: push ebp */
    ebp = esp; /* 0x006EB451: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x006EB453: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x006EB456: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x87CBCC); /* 0x006EB459: mov eax, dword ptr [0x87cbcc] */
    MEM32(esp + 0x4) = edx; /* 0x006EB45E: mov dword ptr [esp + 4], edx */
    PUSH32(esp, esi); /* 0x006EB462: push esi */
    PUSH32(esp, edi); /* 0x006EB463: push edi */
    edi = ecx; /* 0x006EB464: mov edi, ecx */
    /* test eax, eax */ /* 0x006EB466: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB480; /* 0x006EB468: jne 0x6eb480 */
L_006EB46A:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EB46A: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB46F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB474: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EB477: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB47A: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB47B: pop esi */
    esp = ebp; /* 0x006EB47C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB47E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB47F: ret  */
L_006EB480:
    /* test edi, edi */ /* 0x006EB480: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB698; /* 0x006EB482: je 0x6eb698 */
L_006EB488:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006EB488: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi), eax */ /* 0x006EB48D: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB698; /* 0x006EB48F: jne 0x6eb698 */
L_006EB495:
    /* cmp MEM32(edi + 0x74), 0 */ /* 0x006EB495: cmp dword ptr [edi + 0x74], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x74)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB4A3; /* 0x006EB499: je 0x6eb4a3 */
L_006EB49B:
    /* test edx, edx */ /* 0x006EB49B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB690; /* 0x006EB49D: jne 0x6eb690 */
L_006EB4A3:
    RECOMP_CALL(sub_006EB100); /* 0x006EB4A3: call 0x6eb100 */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x87CBCC); /* 0x006EB4A8: mov edx, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006EB4AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EB4C4; /* 0x006EB4B0: js 0x6eb4c4 */
L_006EB4B2:
    ecx = eax; /* 0x006EB4B2: mov ecx, eax */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x006EB4B4: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x006EB4B4: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006EB4B7: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x10C); /* 0x006EB4B9: mov eax, dword ptr [edx + 0x10c] */
    esi = eax + ecx * 4; /* 0x006EB4BF: lea esi, [eax + ecx*4] */
    goto L_006EB4C6; /* 0x006EB4C2: jmp 0x6eb4c6 */
L_006EB4C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EB4C4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EB4C6:
    ecx = MEM32(esp + 0xC); /* 0x006EB4C6: mov ecx, dword ptr [esp + 0xc] */
    MEM32(esp + 0x8) = esi; /* 0x006EB4CA: mov dword ptr [esp + 8], esi */
    /* test ecx, ecx */ /* 0x006EB4CE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB4EE; /* 0x006EB4D0: je 0x6eb4ee */
L_006EB4D2:
    eax = MEM32(esi + 0x38); /* 0x006EB4D2: mov eax, dword ptr [esi + 0x38] */
    /* test eax, eax */ /* 0x006EB4D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB4EE; /* 0x006EB4D7: je 0x6eb4ee */
L_006EB4D9:
    /* cmp eax, edi */ /* 0x006EB4D9: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB4EE; /* 0x006EB4DB: je 0x6eb4ee */
L_006EB4DD:
    ecx = eax; /* 0x006EB4DD: mov ecx, eax */
    RECOMP_CALL(sub_006EBDF0); /* 0x006EB4DF: call 0x6ebdf0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x87CBCC); /* 0x006EB4E4: mov edx, dword ptr [0x87cbcc] */
    ecx = MEM32(esp + 0xC); /* 0x006EB4EA: mov ecx, dword ptr [esp + 0xc] */
L_006EB4EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB4EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x38), edi */ /* 0x006EB4F0: cmp dword ptr [esi + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006EB4F3: sete al */
    /* cmp eax, ecx */ /* 0x006EB4F6: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB50B; /* 0x006EB4F8: jne 0x6eb50b */
L_006EB4FA:
    eax = MEM32(edi + 0x34); /* 0x006EB4FA: mov eax, dword ptr [edi + 0x34] */
    _flag_a = (uint32_t)((eax ^ MEM32(edi + 0x30))); _flag_b = (uint32_t)((eax ^ MEM32(edi + 0x30)));
    eax = eax ^ MEM32(edi + 0x30); /* 0x006EB4FD: xor eax, dword ptr [edi + 0x30] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0x1001u */ /* 0x006EB500: test eax, 0x1001 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1001u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB690; /* 0x006EB505: je 0x6eb690 */
L_006EB50B:
    esi = MEM32(edx + 0x110); /* 0x006EB50B: mov esi, dword ptr [edx + 0x110] */
    /* test esi, esi */ /* 0x006EB511: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB569; /* 0x006EB513: je 0x6eb569 */
L_006EB515:
    /* cmp esi, edi */ /* 0x006EB515: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB537; /* 0x006EB517: je 0x6eb537 */
L_006EB519:
    eax = MEM32(esi + 0x30); /* 0x006EB519: mov eax, dword ptr [esi + 0x30] */
    /* test LO8(eax), 1 */ /* 0x006EB51C: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB55F; /* 0x006EB51E: je 0x6eb55f */
L_006EB520:
    /* test LO8(eax), 4 */ /* 0x006EB520: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB55F; /* 0x006EB522: je 0x6eb55f */
L_006EB524:
    /* test LO8(eax), 0x40u */ /* 0x006EB524: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB55F; /* 0x006EB526: jne 0x6eb55f */
L_006EB528:
    ecx = esi; /* 0x006EB528: mov ecx, esi */
    RECOMP_CALL(sub_006EB2E0); /* 0x006EB52A: call 0x6eb2e0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, MEM32(esp + 0x8) */ /* 0x006EB52F: cmp eax, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB55B; /* 0x006EB533: jne 0x6eb55b */
L_006EB535:
    goto L_006EB53B; /* 0x006EB535: jmp 0x6eb53b */
L_006EB537:
    /* test ecx, ecx */ /* 0x006EB537: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB55F; /* 0x006EB539: je 0x6eb55f */
L_006EB53B:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006EB53B: xorps xmm0, xmm0 */
    MEM32(esp + 0x20) = 0; /* 0x006EB53E: mov dword ptr [esp + 0x20], 0 */
    edx = esp + 0x10; /* 0x006EB546: lea edx, [esp + 0x10] */
    xmm_st(esp + 0x10, _xmm[0]); /* 0x006EB54A: movdqa xmmword ptr [esp + 0x10], xmm0 */
    ecx = esi; /* 0x006EB550: mov ecx, esi */
    RECOMP_CALL(sub_006EB310); /* 0x006EB552: call 0x6eb310 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EB557: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB5D8; /* 0x006EB559: je 0x6eb5d8 */
L_006EB55B:
    ecx = MEM32(esp + 0xC); /* 0x006EB55B: mov ecx, dword ptr [esp + 0xc] */
L_006EB55F:
    esi = MEM32(esi + 0x98); /* 0x006EB55F: mov esi, dword ptr [esi + 0x98] */
    /* test esi, esi */ /* 0x006EB565: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB515; /* 0x006EB567: jne 0x6eb515 */
L_006EB569:
    esi = MEM32(esp + 0x8); /* 0x006EB569: mov esi, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EB56D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x006EB56F: mov ecx, esi */
    RECOMP_CALL(sub_006EAFF0); /* 0x006EB571: call 0x6eaff0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBCC); /* 0x006EB576: mov eax, dword ptr [0x87cbcc] */
    ecx = MEM32(eax + 0x70); /* 0x006EB57B: mov ecx, dword ptr [eax + 0x70] */
    /* test ecx, ecx */ /* 0x006EB57E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB58C; /* 0x006EB580: je 0x6eb58c */
L_006EB582:
    PUSH32(esp, 0); /* 0x006EB582: push 0 */
    PUSH32(esp, esi); /* 0x006EB584: push esi */
    PUSH32(esp, edi); /* 0x006EB585: push edi */
    PUSH32(esp, eax); /* 0x006EB586: push eax */
    RECOMP_ICALL(ecx); /* 0x006EB587: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006EB589: add esp, 0x10 */
    _flag_k = FK_ADD;
L_006EB58C:
    MEM32(esi + 0x38) = 0; /* 0x006EB58C: mov dword ptr [esi + 0x38], 0 */
    SET_LO8(edx, 6); /* 0x006EB593: mov dl, 6 */
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x006EB595: push dword ptr [edi + 0x1c] */
    ecx = edi; /* 0x006EB598: mov ecx, edi */
    MEM32(edi + 0x70) = 0; /* 0x006EB59A: mov dword ptr [edi + 0x70], 0 */
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x006EB5A1: push dword ptr [edi + 0x18] */
    RECOMP_CALL(sub_006F7C40); /* 0x006EB5A4: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EB5A9: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(0x926A0C) */ /* 0x006EB5AC: cmp edi, dword ptr [0x926a0c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x926A0C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB5CA; /* 0x006EB5B2: jne 0x6eb5ca */
L_006EB5B4:
    PUSH32(esp, MEM32(0x926A14)); /* 0x006EB5B4: push dword ptr [0x926a14] */
    edx = MEM32(0x926A10); /* 0x006EB5BA: mov edx, dword ptr [0x926a10] */
    ecx = edi; /* 0x006EB5C0: mov ecx, edi */
    RECOMP_CALL(sub_006F1220); /* 0x006EB5C2: call 0x6f1220 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB5C7: add esp, 4 */
    _flag_k = FK_ADD;
L_006EB5CA:
    eax = MEM32(edi + 0x30); /* 0x006EB5CA: mov eax, dword ptr [edi + 0x30] */
    MEM32(edi + 0x34) = eax; /* 0x006EB5CD: mov dword ptr [edi + 0x34], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB5D0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB5D2: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB5D3: pop esi */
    esp = ebp; /* 0x006EB5D4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB5D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB5D7: ret  */
L_006EB5D8:
    ecx = MEM32(esp + 0x14); /* 0x006EB5D8: mov ecx, dword ptr [esp + 0x14] */
    eax = 1; /* 0x006EB5DC: mov eax, 1 */
    MEM32(esp + 0xC) = eax; /* 0x006EB5E1: mov dword ptr [esp + 0xc], eax */
    /* cmp MEM32(esi + 0x18), ecx */ /* 0x006EB5E5: cmp dword ptr [esi + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB5FA; /* 0x006EB5E8: jne 0x6eb5fa */
L_006EB5EA:
    ecx = MEM32(esp + 0x18); /* 0x006EB5EA: mov ecx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EB5EE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x1C), ecx */ /* 0x006EB5F0: cmp dword ptr [esi + 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = edx; } /* 0x006EB5F3: cmove eax, edx */
    MEM32(esp + 0xC) = eax; /* 0x006EB5F6: mov dword ptr [esp + 0xc], eax */
L_006EB5FA:
    eax = MEM32(edi + 0x30); /* 0x006EB5FA: mov eax, dword ptr [edi + 0x30] */
    ecx = MEM32(esp + 0x8); /* 0x006EB5FD: mov ecx, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1001u);
    eax = eax & 0x1001u; /* 0x006EB601: and eax, 0x1001 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x1001u */ /* 0x006EB606: cmp eax, 0x1001 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1001u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB623; /* 0x006EB60B: je 0x6eb623 */
L_006EB60D:
    edx = esp + 0x10; /* 0x006EB60D: lea edx, [esp + 0x10] */
    RECOMP_CALL(sub_006EAFF0); /* 0x006EB611: call 0x6eaff0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EB616: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EB62E; /* 0x006EB618: jns 0x6eb62e */
L_006EB61A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EB61A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB61D: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB61E: pop esi */
    esp = ebp; /* 0x006EB61F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB621: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB622: ret  */
L_006EB623:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EB623: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006EAFF0); /* 0x006EB625: call 0x6eaff0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EB62A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EB6A5; /* 0x006EB62C: js 0x6eb6a5 */
L_006EB62E:
    eax = MEM32(0x87CBCC); /* 0x006EB62E: mov eax, dword ptr [0x87cbcc] */
    ecx = MEM32(eax + 0x70); /* 0x006EB633: mov ecx, dword ptr [eax + 0x70] */
    /* test ecx, ecx */ /* 0x006EB636: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB647; /* 0x006EB638: je 0x6eb647 */
L_006EB63A:
    PUSH32(esp, 1); /* 0x006EB63A: push 1 */
    PUSH32(esp, MEM32(esp + 0xC)); /* 0x006EB63C: push dword ptr [esp + 0xc] */
    PUSH32(esp, esi); /* 0x006EB640: push esi */
    PUSH32(esp, eax); /* 0x006EB641: push eax */
    RECOMP_ICALL(ecx); /* 0x006EB642: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006EB644: add esp, 0x10 */
    _flag_k = FK_ADD;
L_006EB647:
    /* cmp MEM32(esp + 0xC), 0 */ /* 0x006EB647: cmp dword ptr [esp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esi; /* 0x006EB64C: mov ecx, esi */
    eax = MEM32(esp + 0x8); /* 0x006EB64E: mov eax, dword ptr [esp + 8] */
    MEM32(eax + 0x38) = esi; /* 0x006EB652: mov dword ptr [eax + 0x38], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB67E; /* 0x006EB655: je 0x6eb67e */
L_006EB657:
    PUSH32(esp, MEM32(esp + 0x18)); /* 0x006EB657: push dword ptr [esp + 0x18] */
    SET_LO8(edx, 5); /* 0x006EB65B: mov dl, 5 */
    PUSH32(esp, MEM32(esp + 0x18)); /* 0x006EB65D: push dword ptr [esp + 0x18] */
    RECOMP_CALL(sub_006F7C40); /* 0x006EB661: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EB666: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x006EB669: mov ecx, esi */
    RECOMP_CALL(sub_006EB430); /* 0x006EB66B: call 0x6eb430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x30); /* 0x006EB670: mov eax, dword ptr [edi + 0x30] */
    MEM32(edi + 0x34) = eax; /* 0x006EB673: mov dword ptr [edi + 0x34], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB676: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB678: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB679: pop esi */
    esp = ebp; /* 0x006EB67A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB67C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB67D: ret  */
L_006EB67E:
    RECOMP_CALL(sub_006EC130); /* 0x006EB67E: call 0x6ec130 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x006EB683: mov ecx, esi */
    RECOMP_CALL(sub_006EB430); /* 0x006EB685: call 0x6eb430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x30); /* 0x006EB68A: mov eax, dword ptr [edi + 0x30] */
    MEM32(edi + 0x34) = eax; /* 0x006EB68D: mov dword ptr [edi + 0x34], eax */
L_006EB690:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB690: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB692: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB693: pop esi */
    esp = ebp; /* 0x006EB694: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB696: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB697: ret  */
L_006EB698:
    PUSH32(esp, 0x00804020u); /* 0x006EB698: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB69D: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB6A2: add esp, 4 */
    _flag_k = FK_ADD;
L_006EB6A5:
    edi = POP32_VAL(esp); /* 0x006EB6A5: pop edi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EB6A6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EB6A9: pop esi */
    esp = ebp; /* 0x006EB6AA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB6AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB6AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EB6B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EB6B0u);

L_006EB6B0:
    PUSH32(esp, ebx); /* 0x006EB6B0: push ebx */
    PUSH32(esp, esi); /* 0x006EB6B1: push esi */
    PUSH32(esp, edi); /* 0x006EB6B2: push edi */
    edi = MEM32(0x87CBCC); /* 0x006EB6B3: mov edi, dword ptr [0x87cbcc] */
    ebx = ecx; /* 0x006EB6B9: mov ebx, ecx */
    /* test edi, edi */ /* 0x006EB6BB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB6D2; /* 0x006EB6BD: jne 0x6eb6d2 */
L_006EB6BF:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EB6BF: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB6C4: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB6C9: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB6CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB6CE: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB6CF: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EB6D0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB6D1: ret  */
L_006EB6D2:
    /* cmp MEM32(edi + 0x24), 0 */ /* 0x006EB6D2: cmp dword ptr [edi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB6EB; /* 0x006EB6D6: jne 0x6eb6eb */
L_006EB6D8:
    PUSH32(esp, 0x00804310u); /* 0x006EB6D8: push 0x804310 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB6DD: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB6E2: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB6E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB6E7: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB6E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EB6E9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB6EA: ret  */
L_006EB6EB:
    PUSH32(esp, 0x9Cu); /* 0x006EB6EB: push 0x9c */
    PUSH32(esp, 1); /* 0x006EB6F0: push 1 */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x006EB6F2: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006EB6F8: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EB6FA: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006EB6FD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB714; /* 0x006EB6FF: jne 0x6eb714 */
L_006EB701:
    PUSH32(esp, 0x00803E4Cu); /* 0x006EB701: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB706: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB70B: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB70E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB710: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB711: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EB712: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB713: ret  */
L_006EB714:
    eax = edi + 0x118; /* 0x006EB714: lea eax, [edi + 0x118] */
    MEM32(esi) = eax; /* 0x006EB71A: mov dword ptr [esi], eax */
    eax = MEM32(edi + 0x11C); /* 0x006EB71C: mov eax, dword ptr [edi + 0x11c] */
    MEM32(esi + 0x4) = eax; /* 0x006EB722: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x11C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x11C) = MEM32(edi + 0x11C) + 1; /* 0x006EB725: inc dword ptr [edi + 0x11c] */
    _flag_k = FK_INC;
    MEM32(esi + 0x30) = 0x800u; /* 0x006EB72B: mov dword ptr [esi + 0x30], 0x800 */
    MEM32(esi + 0x34) = 0x800u; /* 0x006EB732: mov dword ptr [esi + 0x34], 0x800 */
    MEM32(esi + 0x78) = 0; /* 0x006EB739: mov dword ptr [esi + 0x78], 0 */
    MEM32(esi + 0x5C) = 0x3F800000u; /* 0x006EB740: mov dword ptr [esi + 0x5c], 0x3f800000 */
    MEM32(esi + 0x60) = 0x3F800000u; /* 0x006EB747: mov dword ptr [esi + 0x60], 0x3f800000 */
    eax = MEM32(edi + 0x110); /* 0x006EB74E: mov eax, dword ptr [edi + 0x110] */
    MEM32(esi + 0x98) = eax; /* 0x006EB754: mov dword ptr [esi + 0x98], eax */
    eax = MEM32(edi + 0x110); /* 0x006EB75A: mov eax, dword ptr [edi + 0x110] */
    /* test eax, eax */ /* 0x006EB760: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB76A; /* 0x006EB762: je 0x6eb76a */
L_006EB764:
    MEM32(eax + 0x94) = esi; /* 0x006EB764: mov dword ptr [eax + 0x94], esi */
L_006EB76A:
    eax = MEM32(edi + 0x24); /* 0x006EB76A: mov eax, dword ptr [edi + 0x24] */
    PUSH32(esp, ebx); /* 0x006EB76D: push ebx */
    PUSH32(esp, esi); /* 0x006EB76E: push esi */
    PUSH32(esp, edi); /* 0x006EB76F: push edi */
    MEM32(edi + 0x110) = esi; /* 0x006EB770: mov dword ptr [edi + 0x110], esi */
    RECOMP_ICALL(eax); /* 0x006EB776: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EB778: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EB77B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EB78C; /* 0x006EB77D: jns 0x6eb78c */
L_006EB77F:
    ecx = esi; /* 0x006EB77F: mov ecx, esi */
    RECOMP_CALL(sub_006EC270); /* 0x006EB781: call 0x6ec270 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB786: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB788: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB789: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EB78A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB78B: ret  */
L_006EB78C:
    edi = POP32_VAL(esp); /* 0x006EB78C: pop edi */
    eax = esi; /* 0x006EB78D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006EB78F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EB790: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB791: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EB7A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EB7A0u);

L_006EB7A0:
    eax = MEM32(0x87CBCC); /* 0x006EB7A0: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006EB7A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB7B9; /* 0x006EB7A7: jne 0x6eb7b9 */
L_006EB7A9:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EB7A9: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB7AE: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB7B3: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB7B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB7B8: ret  */
L_006EB7B9:
    /* test ecx, ecx */ /* 0x006EB7B9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB7CA; /* 0x006EB7BB: je 0x6eb7ca */
L_006EB7BD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006EB7BD: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx), eax */ /* 0x006EB7C2: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB7CA; /* 0x006EB7C4: jne 0x6eb7ca */
L_006EB7C6:
    eax = MEM32(ecx + 0x4); /* 0x006EB7C6: mov eax, dword ptr [ecx + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB7C9: ret  */
L_006EB7CA:
    PUSH32(esp, 0x00804020u); /* 0x006EB7CA: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB7CF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB7D4: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB7D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB7D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EB7E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EB7E0u);

L_006EB7E0:
    eax = MEM32(0x87CBCC); /* 0x006EB7E0: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006EB7E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB802; /* 0x006EB7E7: je 0x6eb802 */
L_006EB7E9:
    eax = MEM32(eax + 0x110); /* 0x006EB7E9: mov eax, dword ptr [eax + 0x110] */
    /* test eax, eax */ /* 0x006EB7EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB802; /* 0x006EB7F1: je 0x6eb802 */
L_006EB7F3:
    /* cmp MEM32(eax + 0x4), ecx */ /* 0x006EB7F3: cmp dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB804; /* 0x006EB7F6: je 0x6eb804 */
L_006EB7F8:
    eax = MEM32(eax + 0x98); /* 0x006EB7F8: mov eax, dword ptr [eax + 0x98] */
    /* test eax, eax */ /* 0x006EB7FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB7F3; /* 0x006EB800: jne 0x6eb7f3 */
L_006EB802:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB802: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EB804:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB804: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EB810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EB810u);

L_006EB810:
    PUSH32(esp, ecx); /* 0x006EB810: push ecx */
    eax = MEM32(0x87CBCC); /* 0x006EB811: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006EB816: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB82B; /* 0x006EB818: jne 0x6eb82b */
L_006EB81A:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EB81A: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB81F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB824: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB827: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x006EB829: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB82A: ret  */
L_006EB82B:
    /* test ecx, ecx */ /* 0x006EB82B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB83D; /* 0x006EB82D: je 0x6eb83d */
L_006EB82F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006EB82F: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx), eax */ /* 0x006EB834: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB83D; /* 0x006EB836: jne 0x6eb83d */
L_006EB838:
    eax = MEM32(ecx + 0x30); /* 0x006EB838: mov eax, dword ptr [ecx + 0x30] */
    ecx = POP32_VAL(esp); /* 0x006EB83B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB83C: ret  */
L_006EB83D:
    PUSH32(esp, 0x00804020u); /* 0x006EB83D: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB842: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB847: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB84A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x006EB84C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB84D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EB850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EB850u);

L_006EB850:
    PUSH32(esp, ebp); /* 0x006EB850: push ebp */
    ebp = esp; /* 0x006EB851: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006EB853: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x87CBCC); /* 0x006EB856: mov eax, dword ptr [0x87cbcc] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x006EB85B: mov dword ptr [ebp - 4], ecx */
    PUSH32(esp, ebx); /* 0x006EB85E: push ebx */
    ebx = edx; /* 0x006EB85F: mov ebx, edx */
    PUSH32(esp, esi); /* 0x006EB861: push esi */
    PUSH32(esp, edi); /* 0x006EB862: push edi */
    /* test eax, eax */ /* 0x006EB863: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB87D; /* 0x006EB865: jne 0x6eb87d */
L_006EB867:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EB867: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB86C: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB871: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB874: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB876: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB877: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EB878: pop ebx */
    esp = ebp; /* 0x006EB879: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB87B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB87C: ret  */
L_006EB87D:
    /* test ecx, ecx */ /* 0x006EB87D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB98B; /* 0x006EB87F: je 0x6eb98b */
L_006EB885:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006EB885: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx), eax */ /* 0x006EB88A: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB98B; /* 0x006EB88C: jne 0x6eb98b */
L_006EB892:
    /* test ebx, ebx */ /* 0x006EB892: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB970; /* 0x006EB894: je 0x6eb970 */
L_006EB89A:
    /* cmp MEM8(ebx), 0 */ /* 0x006EB89A: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB970; /* 0x006EB89D: je 0x6eb970 */
L_006EB8A3:
    edi = MEM32(ecx + 0x8C); /* 0x006EB8A3: mov edi, dword ptr [ecx + 0x8c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EB8A9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x006EB8AB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB8EA; /* 0x006EB8AD: je 0x6eb8ea */
L_006EB8AF:
    /* nop */ /* 0x006EB8AF: nop  */
L_006EB8B0:
    eax = MEM32(edi); /* 0x006EB8B0: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x006EB8B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB8E1; /* 0x006EB8B4: je 0x6eb8e1 */
L_006EB8B6:
    ecx = ebx; /* 0x006EB8B6: mov ecx, ebx */
L_006EB8B8:
    SET_LO8(edx, MEM8(eax)); /* 0x006EB8B8: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006EB8BA: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB8D8; /* 0x006EB8BC: jne 0x6eb8d8 */
L_006EB8BE:
    /* test LO8(edx), LO8(edx) */ /* 0x006EB8BE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB8D4; /* 0x006EB8C0: je 0x6eb8d4 */
L_006EB8C2:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006EB8C2: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006EB8C5: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB8D8; /* 0x006EB8C8: jne 0x6eb8d8 */
L_006EB8CA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006EB8CA: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006EB8CD: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006EB8D0: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB8B8; /* 0x006EB8D2: jne 0x6eb8b8 */
L_006EB8D4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB8D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006EB8DD; /* 0x006EB8D6: jmp 0x6eb8dd */
L_006EB8D8:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006EB8D8: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006EB8DA: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EB8DD:
    /* test eax, eax */ /* 0x006EB8DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB929; /* 0x006EB8DF: je 0x6eb929 */
L_006EB8E1:
    esi = edi; /* 0x006EB8E1: mov esi, edi */
    edi = MEM32(edi + 0x8); /* 0x006EB8E3: mov edi, dword ptr [edi + 8] */
    /* test edi, edi */ /* 0x006EB8E6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB8B0; /* 0x006EB8E8: jne 0x6eb8b0 */
L_006EB8EA:
    edi = MEM32(ebp + 0x8); /* 0x006EB8EA: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x006EB8ED: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB998; /* 0x006EB8EF: je 0x6eb998 */
L_006EB8F5:
    PUSH32(esp, 0xCu); /* 0x006EB8F5: push 0xc */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006EB8F7: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB8FD: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x006EB900: mov ecx, ebx */
    esi = eax; /* 0x006EB902: mov esi, eax */
    RECOMP_CALL(sub_006F2D10); /* 0x006EB904: call 0x6f2d10 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x006EB909: mov edx, dword ptr [ebp - 4] */
    MEM32(esi) = eax; /* 0x006EB90C: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB90E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edi; /* 0x006EB910: mov dword ptr [esi + 4], edi */
    ecx = MEM32(edx + 0x8C); /* 0x006EB913: mov ecx, dword ptr [edx + 0x8c] */
    MEM32(esi + 0x8) = ecx; /* 0x006EB919: mov dword ptr [esi + 8], ecx */
    MEM32(edx + 0x8C) = esi; /* 0x006EB91C: mov dword ptr [edx + 0x8c], esi */
    edi = POP32_VAL(esp); /* 0x006EB922: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB923: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EB924: pop ebx */
    esp = ebp; /* 0x006EB925: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB927: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB928: ret  */
L_006EB929:
    eax = MEM32(ebp + 0x8); /* 0x006EB929: mov eax, dword ptr [ebp + 8] */
    ebx = MEM32(edi + 0x4); /* 0x006EB92C: mov ebx, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x006EB92F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB93F; /* 0x006EB931: je 0x6eb93f */
L_006EB933:
    MEM32(edi + 0x4) = eax; /* 0x006EB933: mov dword ptr [edi + 4], eax */
    eax = ebx; /* 0x006EB936: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x006EB938: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB939: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EB93A: pop ebx */
    esp = ebp; /* 0x006EB93B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB93D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB93E: ret  */
L_006EB93F:
    eax = MEM32(edi + 0x8); /* 0x006EB93F: mov eax, dword ptr [edi + 8] */
    /* test esi, esi */ /* 0x006EB942: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB94B; /* 0x006EB944: je 0x6eb94b */
L_006EB946:
    MEM32(esi + 0x8) = eax; /* 0x006EB946: mov dword ptr [esi + 8], eax */
    goto L_006EB954; /* 0x006EB949: jmp 0x6eb954 */
L_006EB94B:
    edx = MEM32(ebp + (-0x4)); /* 0x006EB94B: mov edx, dword ptr [ebp - 4] */
    MEM32(edx + 0x8C) = eax; /* 0x006EB94E: mov dword ptr [edx + 0x8c], eax */
L_006EB954:
    PUSH32(esp, MEM32(edi)); /* 0x006EB954: push dword ptr [edi] */
    esi = MEM32(0x7CC44C); /* 0x006EB956: mov esi, dword ptr [0x7cc44c] */
    RECOMP_ICALL(esi); /* 0x006EB95C: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB95E: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x006EB961: push edi */
    RECOMP_ICALL(esi); /* 0x006EB962: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB964: add esp, 4 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x006EB967: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x006EB969: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB96A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EB96B: pop ebx */
    esp = ebp; /* 0x006EB96C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB96E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB96F: ret  */
L_006EB970:
    PUSH32(esp, 0x007CD6C8u); /* 0x006EB970: push 0x7cd6c8 */
    PUSH32(esp, 0x00803FE8u); /* 0x006EB975: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB97A: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EB97F: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB982: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB984: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB985: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EB986: pop ebx */
    esp = ebp; /* 0x006EB987: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB989: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB98A: ret  */
L_006EB98B:
    PUSH32(esp, 0x00804020u); /* 0x006EB98B: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB990: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB995: add esp, 4 */
    _flag_k = FK_ADD;
L_006EB998:
    edi = POP32_VAL(esp); /* 0x006EB998: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB999: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB99A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006EB99C: pop ebx */
    esp = ebp; /* 0x006EB99D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB99F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB9A0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EB9B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EB9B0u);

L_006EB9B0:
    PUSH32(esp, ecx); /* 0x006EB9B0: push ecx */
    eax = MEM32(0x87CBCC); /* 0x006EB9B1: mov eax, dword ptr [0x87cbcc] */
    PUSH32(esp, esi); /* 0x006EB9B6: push esi */
    PUSH32(esp, edi); /* 0x006EB9B7: push edi */
    edi = edx; /* 0x006EB9B8: mov edi, edx */
    /* test eax, eax */ /* 0x006EB9BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB9D1; /* 0x006EB9BC: jne 0x6eb9d1 */
L_006EB9BE:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EB9BE: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB9C3: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB9C8: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB9CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB9CD: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB9CE: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EB9CF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB9D0: ret  */
L_006EB9D1:
    /* test ecx, ecx */ /* 0x006EB9D1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBA55; /* 0x006EB9D3: je 0x6eba55 */
L_006EB9D9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006EB9D9: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx), eax */ /* 0x006EB9DE: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBA55; /* 0x006EB9E0: jne 0x6eba55 */
L_006EB9E2:
    /* test edi, edi */ /* 0x006EB9E2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBA3D; /* 0x006EB9E4: je 0x6eba3d */
L_006EB9E6:
    /* cmp MEM8(edi), 0 */ /* 0x006EB9E6: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EBA3D; /* 0x006EB9E9: je 0x6eba3d */
L_006EB9EB:
    esi = MEM32(ecx + 0x8C); /* 0x006EB9EB: mov esi, dword ptr [ecx + 0x8c] */
    /* test esi, esi */ /* 0x006EB9F1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBA62; /* 0x006EB9F3: je 0x6eba62 */
L_006EB9F5:
    eax = MEM32(esi); /* 0x006EB9F5: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x006EB9F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBA29; /* 0x006EB9F9: je 0x6eba29 */
L_006EB9FB:
    ecx = edi; /* 0x006EB9FB: mov ecx, edi */
    ecx = ecx; /* 0x006EB9FD: lea ecx, [ecx] */
L_006EBA00:
    SET_LO8(edx, MEM8(eax)); /* 0x006EBA00: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x006EBA02: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBA20; /* 0x006EBA04: jne 0x6eba20 */
L_006EBA06:
    /* test LO8(edx), LO8(edx) */ /* 0x006EBA06: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBA1C; /* 0x006EBA08: je 0x6eba1c */
L_006EBA0A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x006EBA0A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x006EBA0D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBA20; /* 0x006EBA10: jne 0x6eba20 */
L_006EBA12:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006EBA12: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006EBA15: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x006EBA18: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EBA00; /* 0x006EBA1A: jne 0x6eba00 */
L_006EBA1C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EBA1C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006EBA25; /* 0x006EBA1E: jmp 0x6eba25 */
L_006EBA20:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006EBA20: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x006EBA22: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EBA25:
    /* test eax, eax */ /* 0x006EBA25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBA36; /* 0x006EBA27: je 0x6eba36 */
L_006EBA29:
    esi = MEM32(esi + 0x8); /* 0x006EBA29: mov esi, dword ptr [esi + 8] */
    /* test esi, esi */ /* 0x006EBA2C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB9F5; /* 0x006EBA2E: jne 0x6eb9f5 */
L_006EBA30:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EBA30: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EBA32: pop edi */
    esi = POP32_VAL(esp); /* 0x006EBA33: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EBA34: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBA35: ret  */
L_006EBA36:
    eax = MEM32(esi + 0x4); /* 0x006EBA36: mov eax, dword ptr [esi + 4] */
    edi = POP32_VAL(esp); /* 0x006EBA39: pop edi */
    esi = POP32_VAL(esp); /* 0x006EBA3A: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EBA3B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBA3C: ret  */
L_006EBA3D:
    PUSH32(esp, 0x007CD6C8u); /* 0x006EBA3D: push 0x7cd6c8 */
    PUSH32(esp, 0x00803FE8u); /* 0x006EBA42: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBA47: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EBA4C: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EBA4F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EBA51: pop edi */
    esi = POP32_VAL(esp); /* 0x006EBA52: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EBA53: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBA54: ret  */
L_006EBA55:
    PUSH32(esp, 0x00804020u); /* 0x006EBA55: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBA5A: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBA5F: add esp, 4 */
    _flag_k = FK_ADD;
L_006EBA62:
    edi = POP32_VAL(esp); /* 0x006EBA62: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EBA63: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EBA65: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EBA66: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBA67: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EBA70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EBA70u);

L_006EBA70:
    PUSH32(esp, ebp); /* 0x006EBA70: push ebp */
    ebp = esp; /* 0x006EBA71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x006EBA73: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x006EBA76: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006EBA79: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006EBA7E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x24) = eax; /* 0x006EBA80: mov dword ptr [esp + 0x24], eax */
    PUSH32(esp, esi); /* 0x006EBA84: push esi */
    esi = ecx; /* 0x006EBA85: mov esi, ecx */
    MEM32(esp + 0x4) = edx; /* 0x006EBA87: mov dword ptr [esp + 4], edx */
    ecx = MEM32(0x87CBCC); /* 0x006EBA8B: mov ecx, dword ptr [0x87cbcc] */
    PUSH32(esp, edi); /* 0x006EBA91: push edi */
    /* test ecx, ecx */ /* 0x006EBA92: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EBAA0; /* 0x006EBA94: jne 0x6ebaa0 */
L_006EBA96:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EBA96: push 0x803f6c */
    goto L_006EBBD8; /* 0x006EBA9B: jmp 0x6ebbd8 */
L_006EBAA0:
    /* test esi, esi */ /* 0x006EBAA0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBBD3; /* 0x006EBAA2: je 0x6ebbd3 */
L_006EBAA8:
    eax = ecx + 0x118; /* 0x006EBAA8: lea eax, [ecx + 0x118] */
    /* cmp MEM32(esi), eax */ /* 0x006EBAAE: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBBD3; /* 0x006EBAB0: jne 0x6ebbd3 */
L_006EBAB6:
    edi = MEM32(ebp + 0x8); /* 0x006EBAB6: mov edi, dword ptr [ebp + 8] */
    eax = edx; /* 0x006EBAB9: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x006EBABB: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xC) = eax; /* 0x006EBAC0: mov dword ptr [esp + 0xc], eax */
    /* cmp eax, 0x2FFF0000u */ /* 0x006EBAC4: cmp eax, 0x2fff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EBAD9; /* 0x006EBAC9: je 0x6ebad9 */
L_006EBACB:
    eax = edi; /* 0x006EBACB: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x006EBACD: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x2FFF0000u */ /* 0x006EBAD2: cmp eax, 0x2fff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBB4E; /* 0x006EBAD7: jne 0x6ebb4e */
L_006EBAD9:
    eax = MEM32(0x87CBCC); /* 0x006EBAD9: mov eax, dword ptr [0x87cbcc] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006EBADE: xorps xmm0, xmm0 */
    ecx = (uint32_t)LO16(edx); /* 0x006EBAE1: movzx ecx, dx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EBAE4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    xmm_st(esp + 0x10, _xmm[0]); /* 0x006EBAE6: movdqa xmmword ptr [esp + 0x10], xmm0 */
    /* cmp ecx, MEM32(eax + 0x108) */ /* 0x006EBAEC: cmp ecx, dword ptr [eax + 0x108] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x108));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { ecx = edx; } /* 0x006EBAF2: cmovg ecx, edx */
    edx = esp + 0x10; /* 0x006EBAF5: lea edx, [esp + 0x10] */
    RECOMP_CALL(sub_006EAB30); /* 0x006EBAF9: call 0x6eab30 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esp + 0xC), 0x2FFF0000u */ /* 0x006EBAFE: cmp dword ptr [esp + 0xc], 0x2fff0000 */
    _flag_a = (uint32_t)(MEM32(esp + 0xC)); _flag_b = (uint32_t)(0x2FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBB20; /* 0x006EBB06: jne 0x6ebb20 */
L_006EBB08:
    eax = MEM32(esp + 0x18); /* 0x006EBB08: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x18); /* 0x006EBB0C: sub eax, dword ptr [esi + 0x18] */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006EBB0F: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006EBB10: sub eax, edx */
    _flag_k = FK_CMP;
    edx = eax; /* 0x006EBB12: mov edx, eax */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x006EBB14: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(esp + 0x10); /* 0x006EBB16: add edx, dword ptr [esp + 0x10] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x8) = edx; /* 0x006EBB1A: mov dword ptr [esp + 8], edx */
    goto L_006EBB24; /* 0x006EBB1E: jmp 0x6ebb24 */
L_006EBB20:
    edx = MEM32(esp + 0x8); /* 0x006EBB20: mov edx, dword ptr [esp + 8] */
L_006EBB24:
    ecx = MEM32(0x87CBCC); /* 0x006EBB24: mov ecx, dword ptr [0x87cbcc] */
    eax = edi; /* 0x006EBB2A: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x006EBB2C: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x2FFF0000u */ /* 0x006EBB31: cmp eax, 0x2fff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBB4E; /* 0x006EBB36: jne 0x6ebb4e */
L_006EBB38:
    eax = MEM32(esp + 0x1C); /* 0x006EBB38: mov eax, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x1C); /* 0x006EBB3C: sub eax, dword ptr [esi + 0x1c] */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006EBB3F: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006EBB40: sub eax, edx */
    _flag_k = FK_CMP;
    edx = MEM32(esp + 0x8); /* 0x006EBB42: mov edx, dword ptr [esp + 8] */
    edi = eax; /* 0x006EBB46: mov edi, eax */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x006EBB48: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esp + 0x14); /* 0x006EBB4A: add edi, dword ptr [esp + 0x14] */
    _flag_k = FK_ADD;
L_006EBB4E:
    eax = edx; /* 0x006EBB4E: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x006EBB50: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(esi + 0x30), 1 */ /* 0x006EBB55: test byte ptr [esi + 0x30], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBB87; /* 0x006EBB59: je 0x6ebb87 */
L_006EBB5B:
    /* cmp eax, 0x1FFF0000u */ /* 0x006EBB5B: cmp eax, 0x1fff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EBB65; /* 0x006EBB60: je 0x6ebb65 */
L_006EBB62:
    MEM32(esi + 0x38) = edx; /* 0x006EBB62: mov dword ptr [esi + 0x38], edx */
L_006EBB65:
    eax = edi; /* 0x006EBB65: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x006EBB67: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x1FFF0000u */ /* 0x006EBB6C: cmp eax, 0x1fff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EBBE0; /* 0x006EBB71: je 0x6ebbe0 */
L_006EBB73:
    MEM32(esi + 0x3C) = edi; /* 0x006EBB73: mov dword ptr [esi + 0x3c], edi */
    edi = POP32_VAL(esp); /* 0x006EBB76: pop edi */
    esi = POP32_VAL(esp); /* 0x006EBB77: pop esi */
    ecx = MEM32(esp + 0x24); /* 0x006EBB78: mov ecx, dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EBB7C: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EBB7E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EBB83: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EBB85: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBB86: ret  */
L_006EBB87:
    /* cmp eax, 0x1FFF0000u */ /* 0x006EBB87: cmp eax, 0x1fff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EBB91; /* 0x006EBB8C: je 0x6ebb91 */
L_006EBB8E:
    MEM32(esi + 0x10) = edx; /* 0x006EBB8E: mov dword ptr [esi + 0x10], edx */
L_006EBB91:
    eax = edi; /* 0x006EBB91: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x006EBB93: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x1FFF0000u */ /* 0x006EBB98: cmp eax, 0x1fff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EBBA2; /* 0x006EBB9D: je 0x6ebba2 */
L_006EBB9F:
    MEM32(esi + 0x14) = edi; /* 0x006EBB9F: mov dword ptr [esi + 0x14], edi */
L_006EBBA2:
    eax = MEM32(ecx + 0x30); /* 0x006EBBA2: mov eax, dword ptr [ecx + 0x30] */
    /* test eax, eax */ /* 0x006EBBA5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBBB4; /* 0x006EBBA7: je 0x6ebbb4 */
L_006EBBA9:
    PUSH32(esp, esi); /* 0x006EBBA9: push esi */
    PUSH32(esp, ecx); /* 0x006EBBAA: push ecx */
    RECOMP_ICALL(eax); /* 0x006EBBAB: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x10); /* 0x006EBBAD: mov edx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EBBB1: add esp, 8 */
    _flag_k = FK_ADD;
L_006EBBB4:
    PUSH32(esp, edi); /* 0x006EBBB4: push edi */
    PUSH32(esp, edx); /* 0x006EBBB5: push edx */
    SET_LO8(edx, 4); /* 0x006EBBB6: mov dl, 4 */
    ecx = esi; /* 0x006EBBB8: mov ecx, esi */
    RECOMP_CALL(sub_006F7C40); /* 0x006EBBBA: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EBBBF: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EBBC2: pop edi */
    esi = POP32_VAL(esp); /* 0x006EBBC3: pop esi */
    ecx = MEM32(esp + 0x24); /* 0x006EBBC4: mov ecx, dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EBBC8: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EBBCA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EBBCF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EBBD1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBBD2: ret  */
L_006EBBD3:
    PUSH32(esp, 0x00804020u); /* 0x006EBBD3: push 0x804020 */
L_006EBBD8:
    RECOMP_CALL(sub_006EDB70); /* 0x006EBBD8: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBBDD: add esp, 4 */
    _flag_k = FK_ADD;
L_006EBBE0:
    ecx = MEM32(esp + 0x2C); /* 0x006EBBE0: mov ecx, dword ptr [esp + 0x2c] */
    edi = POP32_VAL(esp); /* 0x006EBBE4: pop edi */
    esi = POP32_VAL(esp); /* 0x006EBBE5: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006EBBE6: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006EBBE8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EBBED: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EBBEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBBF0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EBC00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EBC00u);

L_006EBC00:
    PUSH32(esp, ebp); /* 0x006EBC00: push ebp */
    ebp = esp; /* 0x006EBC01: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006EBC03: push ecx */
    eax = MEM32(0x87CBCC); /* 0x006EBC04: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006EBC09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EBC1D; /* 0x006EBC0B: jne 0x6ebc1d */
L_006EBC0D:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EBC0D: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBC12: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBC17: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006EBC1A: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006EBC1B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBC1C: ret  */
L_006EBC1D:
    /* test ecx, ecx */ /* 0x006EBC1D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBC42; /* 0x006EBC1F: je 0x6ebc42 */
L_006EBC21:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006EBC21: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx), eax */ /* 0x006EBC26: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBC42; /* 0x006EBC28: jne 0x6ebc42 */
L_006EBC2A:
    /* test edx, edx */ /* 0x006EBC2A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBC33; /* 0x006EBC2C: je 0x6ebc33 */
L_006EBC2E:
    eax = MEM32(ecx + 0x18); /* 0x006EBC2E: mov eax, dword ptr [ecx + 0x18] */
    MEM32(edx) = eax; /* 0x006EBC31: mov dword ptr [edx], eax */
L_006EBC33:
    edx = MEM32(ebp + 0x8); /* 0x006EBC33: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x006EBC36: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBC4F; /* 0x006EBC38: je 0x6ebc4f */
L_006EBC3A:
    eax = MEM32(ecx + 0x1C); /* 0x006EBC3A: mov eax, dword ptr [ecx + 0x1c] */
    MEM32(edx) = eax; /* 0x006EBC3D: mov dword ptr [edx], eax */
    ecx = POP32_VAL(esp); /* 0x006EBC3F: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006EBC40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBC41: ret  */
L_006EBC42:
    PUSH32(esp, 0x00804020u); /* 0x006EBC42: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBC47: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBC4C: add esp, 4 */
    _flag_k = FK_ADD;
L_006EBC4F:
    ecx = POP32_VAL(esp); /* 0x006EBC4F: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006EBC50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBC51: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EBC60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EBC60u);

L_006EBC60:
    PUSH32(esp, ebp); /* 0x006EBC60: push ebp */
    ebp = esp; /* 0x006EBC61: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006EBC63: push ecx */
    eax = MEM32(0x87CBCC); /* 0x006EBC64: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006EBC69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EBC7D; /* 0x006EBC6B: jne 0x6ebc7d */
L_006EBC6D:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EBC6D: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBC72: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBC77: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006EBC7A: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006EBC7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBC7C: ret  */
L_006EBC7D:
    /* test ecx, ecx */ /* 0x006EBC7D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBCA2; /* 0x006EBC7F: je 0x6ebca2 */
L_006EBC81:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006EBC81: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx), eax */ /* 0x006EBC86: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBCA2; /* 0x006EBC88: jne 0x6ebca2 */
L_006EBC8A:
    /* test edx, edx */ /* 0x006EBC8A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBC93; /* 0x006EBC8C: je 0x6ebc93 */
L_006EBC8E:
    eax = MEM32(ecx + 0x20); /* 0x006EBC8E: mov eax, dword ptr [ecx + 0x20] */
    MEM32(edx) = eax; /* 0x006EBC91: mov dword ptr [edx], eax */
L_006EBC93:
    edx = MEM32(ebp + 0x8); /* 0x006EBC93: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x006EBC96: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBCAF; /* 0x006EBC98: je 0x6ebcaf */
L_006EBC9A:
    eax = MEM32(ecx + 0x24); /* 0x006EBC9A: mov eax, dword ptr [ecx + 0x24] */
    MEM32(edx) = eax; /* 0x006EBC9D: mov dword ptr [edx], eax */
    ecx = POP32_VAL(esp); /* 0x006EBC9F: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006EBCA0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBCA1: ret  */
L_006EBCA2:
    PUSH32(esp, 0x00804020u); /* 0x006EBCA2: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBCA7: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBCAC: add esp, 4 */
    _flag_k = FK_ADD;
L_006EBCAF:
    ecx = POP32_VAL(esp); /* 0x006EBCAF: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006EBCB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBCB1: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EBCC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EBCC0u);

L_006EBCC0:
    PUSH32(esp, ebp); /* 0x006EBCC0: push ebp */
    ebp = esp; /* 0x006EBCC1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006EBCC3: push ecx */
    eax = MEM32(0x87CBCC); /* 0x006EBCC4: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006EBCC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EBCDD; /* 0x006EBCCB: jne 0x6ebcdd */
L_006EBCCD:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EBCCD: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBCD2: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBCD7: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006EBCDA: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006EBCDB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBCDC: ret  */
L_006EBCDD:
    /* test ecx, ecx */ /* 0x006EBCDD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBD02; /* 0x006EBCDF: je 0x6ebd02 */
L_006EBCE1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006EBCE1: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx), eax */ /* 0x006EBCE6: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBD02; /* 0x006EBCE8: jne 0x6ebd02 */
L_006EBCEA:
    /* test edx, edx */ /* 0x006EBCEA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBCF3; /* 0x006EBCEC: je 0x6ebcf3 */
L_006EBCEE:
    eax = MEM32(ecx + 0x28); /* 0x006EBCEE: mov eax, dword ptr [ecx + 0x28] */
    MEM32(edx) = eax; /* 0x006EBCF1: mov dword ptr [edx], eax */
L_006EBCF3:
    edx = MEM32(ebp + 0x8); /* 0x006EBCF3: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x006EBCF6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBD0F; /* 0x006EBCF8: je 0x6ebd0f */
L_006EBCFA:
    eax = MEM32(ecx + 0x2C); /* 0x006EBCFA: mov eax, dword ptr [ecx + 0x2c] */
    MEM32(edx) = eax; /* 0x006EBCFD: mov dword ptr [edx], eax */
    ecx = POP32_VAL(esp); /* 0x006EBCFF: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006EBD00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBD01: ret  */
L_006EBD02:
    PUSH32(esp, 0x00804020u); /* 0x006EBD02: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBD07: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBD0C: add esp, 4 */
    _flag_k = FK_ADD;
L_006EBD0F:
    ecx = POP32_VAL(esp); /* 0x006EBD0F: pop ecx */
    ebp = POP32_VAL(esp); /* 0x006EBD10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBD11: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EBD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EBD20u);

L_006EBD20:
    eax = MEM32(0x87CBCC); /* 0x006EBD20: mov eax, dword ptr [0x87cbcc] */
    PUSH32(esp, esi); /* 0x006EBD25: push esi */
    esi = ecx; /* 0x006EBD26: mov esi, ecx */
    /* test eax, eax */ /* 0x006EBD28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EBD3B; /* 0x006EBD2A: jne 0x6ebd3b */
L_006EBD2C:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EBD2C: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBD31: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBD36: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006EBD39: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBD3A: ret  */
L_006EBD3B:
    /* test esi, esi */ /* 0x006EBD3B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBD88; /* 0x006EBD3D: je 0x6ebd88 */
L_006EBD3F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006EBD3F: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), eax */ /* 0x006EBD44: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBD88; /* 0x006EBD46: jne 0x6ebd88 */
L_006EBD48:
    /* test MEM8(esi + 0x30), 4 */ /* 0x006EBD48: test byte ptr [esi + 0x30], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBD95; /* 0x006EBD4C: je 0x6ebd95 */
L_006EBD4E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EBD4E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x74) = 1; /* 0x006EBD50: mov dword ptr [esi + 0x74], 1 */
    RECOMP_CALL(sub_006EB450); /* 0x006EBD57: call 0x6eb450 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBCC); /* 0x006EBD5C: mov eax, dword ptr [0x87cbcc] */
    ecx = MEM32(eax + 0x54); /* 0x006EBD61: mov ecx, dword ptr [eax + 0x54] */
    /* test ecx, ecx */ /* 0x006EBD64: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBD6F; /* 0x006EBD66: je 0x6ebd6f */
L_006EBD68:
    PUSH32(esp, esi); /* 0x006EBD68: push esi */
    PUSH32(esp, eax); /* 0x006EBD69: push eax */
    RECOMP_ICALL(ecx); /* 0x006EBD6A: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EBD6C: add esp, 8 */
    _flag_k = FK_ADD;
L_006EBD6F:
    PUSH32(esp, 0); /* 0x006EBD6F: push 0 */
    PUSH32(esp, 0); /* 0x006EBD71: push 0 */
    SET_LO8(edx, 2); /* 0x006EBD73: mov dl, 2 */
    MEM32(esi + 0x74) = 0; /* 0x006EBD75: mov dword ptr [esi + 0x74], 0 */
    ecx = esi; /* 0x006EBD7C: mov ecx, esi */
    RECOMP_CALL(sub_006F7C40); /* 0x006EBD7E: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EBD83: add esp, 8 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006EBD86: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBD87: ret  */
L_006EBD88:
    PUSH32(esp, 0x00804020u); /* 0x006EBD88: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBD8D: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBD92: add esp, 4 */
    _flag_k = FK_ADD;
L_006EBD95:
    esi = POP32_VAL(esp); /* 0x006EBD95: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBD96: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EBDA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EBDA0u);

L_006EBDA0:
    PUSH32(esp, ecx); /* 0x006EBDA0: push ecx */
    edx = MEM32(0x87CBCC); /* 0x006EBDA1: mov edx, dword ptr [0x87cbcc] */
    /* test edx, edx */ /* 0x006EBDA7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EBDBA; /* 0x006EBDA9: jne 0x6ebdba */
L_006EBDAB:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EBDAB: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBDB0: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBDB5: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006EBDB8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBDB9: ret  */
L_006EBDBA:
    /* test ecx, ecx */ /* 0x006EBDBA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBDDE; /* 0x006EBDBC: je 0x6ebdde */
L_006EBDBE:
    eax = edx + 0x118; /* 0x006EBDBE: lea eax, [edx + 0x118] */
    /* cmp MEM32(ecx), eax */ /* 0x006EBDC4: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBDDE; /* 0x006EBDC6: jne 0x6ebdde */
L_006EBDC8:
    /* test MEM8(ecx + 0x30), 4 */ /* 0x006EBDC8: test byte ptr [ecx + 0x30], 4 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x30)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBDEB; /* 0x006EBDCC: je 0x6ebdeb */
L_006EBDCE:
    eax = MEM32(edx + 0x58); /* 0x006EBDCE: mov eax, dword ptr [edx + 0x58] */
    /* test eax, eax */ /* 0x006EBDD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBDEB; /* 0x006EBDD3: je 0x6ebdeb */
L_006EBDD5:
    PUSH32(esp, ecx); /* 0x006EBDD5: push ecx */
    PUSH32(esp, edx); /* 0x006EBDD6: push edx */
    RECOMP_ICALL(eax); /* 0x006EBDD7: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EBDD9: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006EBDDC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBDDD: ret  */
L_006EBDDE:
    PUSH32(esp, 0x00804020u); /* 0x006EBDDE: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBDE3: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBDE8: add esp, 4 */
    _flag_k = FK_ADD;
L_006EBDEB:
    ecx = POP32_VAL(esp); /* 0x006EBDEB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBDEC: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EBDF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EBDF0u);

L_006EBDF0:
    eax = MEM32(0x87CBCC); /* 0x006EBDF0: mov eax, dword ptr [0x87cbcc] */
    PUSH32(esp, esi); /* 0x006EBDF5: push esi */
    esi = ecx; /* 0x006EBDF6: mov esi, ecx */
    /* test eax, eax */ /* 0x006EBDF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EBE0B; /* 0x006EBDFA: jne 0x6ebe0b */
L_006EBDFC:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EBDFC: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBE01: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBE06: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006EBE09: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBE0A: ret  */
L_006EBE0B:
    /* test esi, esi */ /* 0x006EBE0B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBE3A; /* 0x006EBE0D: je 0x6ebe3a */
L_006EBE0F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006EBE0F: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), eax */ /* 0x006EBE14: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBE3A; /* 0x006EBE16: jne 0x6ebe3a */
L_006EBE18:
    /* test MEM8(esi + 0x30), 0x40u */ /* 0x006EBE18: test byte ptr [esi + 0x30], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EBE47; /* 0x006EBE1C: jne 0x6ebe47 */
L_006EBE1E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EBE1E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006EB450); /* 0x006EBE20: call 0x6eb450 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBCC); /* 0x006EBE25: mov eax, dword ptr [0x87cbcc] */
    ecx = MEM32(eax + 0x60); /* 0x006EBE2A: mov ecx, dword ptr [eax + 0x60] */
    /* test ecx, ecx */ /* 0x006EBE2D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBE47; /* 0x006EBE2F: je 0x6ebe47 */
L_006EBE31:
    PUSH32(esp, esi); /* 0x006EBE31: push esi */
    PUSH32(esp, eax); /* 0x006EBE32: push eax */
    RECOMP_ICALL(ecx); /* 0x006EBE33: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EBE35: add esp, 8 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006EBE38: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBE39: ret  */
L_006EBE3A:
    PUSH32(esp, 0x00804020u); /* 0x006EBE3A: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBE3F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBE44: add esp, 4 */
    _flag_k = FK_ADD;
L_006EBE47:
    esi = POP32_VAL(esp); /* 0x006EBE47: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBE48: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EBE50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EBE50u);

L_006EBE50:
    PUSH32(esp, ecx); /* 0x006EBE50: push ecx */
    edx = MEM32(0x87CBCC); /* 0x006EBE51: mov edx, dword ptr [0x87cbcc] */
    /* test edx, edx */ /* 0x006EBE57: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EBE6A; /* 0x006EBE59: jne 0x6ebe6a */
L_006EBE5B:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EBE5B: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBE60: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBE65: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006EBE68: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBE69: ret  */
L_006EBE6A:
    /* test ecx, ecx */ /* 0x006EBE6A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBE8E; /* 0x006EBE6C: je 0x6ebe8e */
L_006EBE6E:
    eax = edx + 0x118; /* 0x006EBE6E: lea eax, [edx + 0x118] */
    /* cmp MEM32(ecx), eax */ /* 0x006EBE74: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBE8E; /* 0x006EBE76: jne 0x6ebe8e */
L_006EBE78:
    /* test MEM8(ecx + 0x30), 0xC0u */ /* 0x006EBE78: test byte ptr [ecx + 0x30], 0xc0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x30)) << 24; _flag_b = (uint32_t)(0xC0u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBE9B; /* 0x006EBE7C: je 0x6ebe9b */
L_006EBE7E:
    eax = MEM32(edx + 0x64); /* 0x006EBE7E: mov eax, dword ptr [edx + 0x64] */
    /* test eax, eax */ /* 0x006EBE81: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBE9B; /* 0x006EBE83: je 0x6ebe9b */
L_006EBE85:
    PUSH32(esp, ecx); /* 0x006EBE85: push ecx */
    PUSH32(esp, edx); /* 0x006EBE86: push edx */
    RECOMP_ICALL(eax); /* 0x006EBE87: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EBE89: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006EBE8C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBE8D: ret  */
L_006EBE8E:
    PUSH32(esp, 0x00804020u); /* 0x006EBE8E: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBE93: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBE98: add esp, 4 */
    _flag_k = FK_ADD;
L_006EBE9B:
    ecx = POP32_VAL(esp); /* 0x006EBE9B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBE9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EBEA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EBEA0u);

L_006EBEA0:
    PUSH32(esp, ebp); /* 0x006EBEA0: push ebp */
    ebp = esp; /* 0x006EBEA1: mov ebp, esp */
    eax = MEM32(0x87CBCC); /* 0x006EBEA3: mov eax, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x006EBEA8: sub esp, 0x24 */
    _flag_k = FK_CMP;
    edx = MEM32(eax + 0x84); /* 0x006EBEAB: mov edx, dword ptr [eax + 0x84] */
    PUSH32(esp, esi); /* 0x006EBEB1: push esi */
    esi = ecx; /* 0x006EBEB2: mov esi, ecx */
    /* test edx, edx */ /* 0x006EBEB4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBF22; /* 0x006EBEB6: je 0x6ebf22 */
L_006EBEB8:
    /* cmp MEM32(eax + 0x88), 0 */ /* 0x006EBEB8: cmp dword ptr [eax + 0x88], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x88)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EBF22; /* 0x006EBEBF: je 0x6ebf22 */
L_006EBEC1:
    ecx = ebp + (-0x18); /* 0x006EBEC1: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x006EBEC4: push ecx */
    ecx = ebp + (-0x20); /* 0x006EBEC5: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x006EBEC8: push ecx */
    ecx = ebp + (-0x4); /* 0x006EBEC9: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x006EBECC: push ecx */
    PUSH32(esp, esi); /* 0x006EBECD: push esi */
    PUSH32(esp, eax); /* 0x006EBECE: push eax */
    RECOMP_ICALL(edx); /* 0x006EBECF: call edx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006EBED1: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EBED4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EBF22; /* 0x006EBED6: js 0x6ebf22 */
L_006EBED8:
    ecx = MEM32(ebp + (-0x4)); /* 0x006EBED8: mov ecx, dword ptr [ebp - 4] */
    eax = ebp + (-0x8); /* 0x006EBEDB: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x006EBEDE: push eax */
    eax = ebp + (-0xC); /* 0x006EBEDF: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x006EBEE2: push eax */
    eax = ebp + (-0x10); /* 0x006EBEE3: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x006EBEE6: push eax */
    eax = ebp + (-0x14); /* 0x006EBEE7: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x006EBEEA: push eax */
    edx = ebp + (-0x1C); /* 0x006EBEEB: lea edx, [ebp - 0x1c] */
    RECOMP_CALL(sub_006F9E10); /* 0x006EBEEE: call 0x6f9e10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006EBEF3: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EBEF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBF22; /* 0x006EBEF8: je 0x6ebf22 */
L_006EBEFA:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x006EBEFA: push dword ptr [ebp - 8] */
    edx = MEM32(esi + 0x18); /* 0x006EBEFD: mov edx, dword ptr [esi + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x006EBF00: push dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x20)); /* 0x006EBF03: mov ecx, dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x006EBF06: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x006EBF09: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x006EBF0C: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x006EBF0F: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x006EBF12: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_006F5EE0); /* 0x006EBF15: call 0x6f5ee0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x006EBF1A: add esp, 0x1c */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006EBF1D: pop esi */
    esp = ebp; /* 0x006EBF1E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EBF20: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBF21: ret  */
L_006EBF22:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EBF22: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EBF24: pop esi */
    esp = ebp; /* 0x006EBF25: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EBF27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBF28: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EBF30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EBF30u);

L_006EBF30:
    eax = MEM32(0x87CBCC); /* 0x006EBF30: mov eax, dword ptr [0x87cbcc] */
    PUSH32(esp, esi); /* 0x006EBF35: push esi */
    esi = ecx; /* 0x006EBF36: mov esi, ecx */
    /* test eax, eax */ /* 0x006EBF38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EBF4D; /* 0x006EBF3A: jne 0x6ebf4d */
L_006EBF3C:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EBF3C: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBF41: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBF46: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EBF49: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EBF4B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBF4C: ret  */
L_006EBF4D:
    /* test esi, esi */ /* 0x006EBF4D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBF8F; /* 0x006EBF4F: je 0x6ebf8f */
L_006EBF51:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006EBF51: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), eax */ /* 0x006EBF56: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBF8F; /* 0x006EBF58: jne 0x6ebf8f */
L_006EBF5A:
    /* cmp MEM32(esi + 0x70), 0 */ /* 0x006EBF5A: cmp dword ptr [esi + 0x70], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x70)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBF8A; /* 0x006EBF5E: jne 0x6ebf8a */
L_006EBF60:
    eax = MEM32(esi + 0x6C); /* 0x006EBF60: mov eax, dword ptr [esi + 0x6c] */
    /* test eax, eax */ /* 0x006EBF63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBF72; /* 0x006EBF65: je 0x6ebf72 */
L_006EBF67:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFBu; /* 0x006EBF67: and dword ptr [eax], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x6C); /* 0x006EBF6A: mov ecx, dword ptr [esi + 0x6c] */
    RECOMP_CALL(sub_006F7460); /* 0x006EBF6D: call 0x6f7460 */
    RECOMP_FLAGS_IN();
L_006EBF72:
    ecx = esi; /* 0x006EBF72: mov ecx, esi */
    RECOMP_CALL(sub_006EBEA0); /* 0x006EBF74: call 0x6ebea0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x6C) = eax; /* 0x006EBF79: mov dword ptr [esi + 0x6c], eax */
    /* test eax, eax */ /* 0x006EBF7C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBF8A; /* 0x006EBF7E: je 0x6ebf8a */
L_006EBF80:
    MEM32(esi + 0x70) = 1; /* 0x006EBF80: mov dword ptr [esi + 0x70], 1 */
    _flag_a = (uint32_t)((MEM32(eax) | 4)); _flag_b = (uint32_t)((MEM32(eax) | 4));
    MEM32(eax) = MEM32(eax) | 4; /* 0x006EBF87: or dword ptr [eax], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EBF8A:
    eax = MEM32(esi + 0x6C); /* 0x006EBF8A: mov eax, dword ptr [esi + 0x6c] */
    esi = POP32_VAL(esp); /* 0x006EBF8D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBF8E: ret  */
L_006EBF8F:
    PUSH32(esp, 0x00804020u); /* 0x006EBF8F: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBF94: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBF99: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EBF9C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EBF9E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBF9F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC030u);

L_006EC030:
    PUSH32(esp, ecx); /* 0x006EC030: push ecx */
    PUSH32(esp, esi); /* 0x006EC031: push esi */
    esi = MEM32(0x87CBCC); /* 0x006EC032: mov esi, dword ptr [0x87cbcc] */
    /* test esi, esi */ /* 0x006EC038: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC04F; /* 0x006EC03A: jne 0x6ec04f */
L_006EC03C:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EC03C: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EC041: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC046: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EC049: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EC04C: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EC04D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC04E: ret  */
L_006EC04F:
    /* test ecx, ecx */ /* 0x006EC04F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC086; /* 0x006EC051: je 0x6ec086 */
L_006EC053:
    eax = esi + 0x118; /* 0x006EC053: lea eax, [esi + 0x118] */
    /* cmp MEM32(ecx), eax */ /* 0x006EC059: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC086; /* 0x006EC05B: jne 0x6ec086 */
L_006EC05D:
    /* cmp MEM32(ecx + 0x70), 0 */ /* 0x006EC05D: cmp dword ptr [ecx + 0x70], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC073; /* 0x006EC061: jne 0x6ec073 */
L_006EC063:
    PUSH32(esp, 0x008041B0u); /* 0x006EC063: push 0x8041b0 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EC068: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC06D: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006EC070: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EC071: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC072: ret  */
L_006EC073:
    eax = MEM32(esi + 0x88); /* 0x006EC073: mov eax, dword ptr [esi + 0x88] */
    PUSH32(esp, 1); /* 0x006EC079: push 1 */
    PUSH32(esp, edx); /* 0x006EC07B: push edx */
    PUSH32(esp, ecx); /* 0x006EC07C: push ecx */
    PUSH32(esp, esi); /* 0x006EC07D: push esi */
    RECOMP_ICALL(eax); /* 0x006EC07E: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006EC080: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006EC083: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EC084: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC085: ret  */
L_006EC086:
    PUSH32(esp, 0x00804020u); /* 0x006EC086: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EC08B: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC090: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EC093: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EC096: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EC097: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC098: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC0A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC0A0u);

L_006EC0A0:
    /* cmp MEM32(0x926A2C), 0 */ /* 0x006EC0A0: cmp dword ptr [0x926a2c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006EC0A7: push esi */
    PUSH32(esp, edi); /* 0x006EC0A8: push edi */
    esi = ecx; /* 0x006EC0A9: mov esi, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC0B6; /* 0x006EC0AB: jne 0x6ec0b6 */
L_006EC0AD:
    /* test MEM32(esi + 0x30), 0x100u */ /* 0x006EC0AD: test dword ptr [esi + 0x30], 0x100 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC0C6; /* 0x006EC0B4: je 0x6ec0c6 */
L_006EC0B6:
    /* test MEM32(esi + 0x30), 0x200u */ /* 0x006EC0B6: test dword ptr [esi + 0x30], 0x200 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC0C6; /* 0x006EC0BD: je 0x6ec0c6 */
L_006EC0BF:
    edi = 1; /* 0x006EC0BF: mov edi, 1 */
    goto L_006EC0C8; /* 0x006EC0C4: jmp 0x6ec0c8 */
L_006EC0C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006EC0C6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EC0C8:
    eax = MEM32(0x87CBCC); /* 0x006EC0C8: mov eax, dword ptr [0x87cbcc] */
    ecx = MEM32(eax + 0x114); /* 0x006EC0CD: mov ecx, dword ptr [eax + 0x114] */
    /* test edi, edi */ /* 0x006EC0D3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC103; /* 0x006EC0D5: je 0x6ec103 */
L_006EC0D7:
    /* test ecx, ecx */ /* 0x006EC0D7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC0FB; /* 0x006EC0D9: je 0x6ec0fb */
L_006EC0DB:
    /* cmp ecx, esi */ /* 0x006EC0DB: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EC0FB; /* 0x006EC0DD: je 0x6ec0fb */
L_006EC0DF:
    _flag_a = (uint32_t)(MEM32(ecx + 0x30)); _flag_b = (uint32_t)(0xFFFFFEFFu);
    MEM32(ecx + 0x30) = MEM32(ecx + 0x30) & 0xFFFFFEFFu; /* 0x006EC0DF: and dword ptr [ecx + 0x30], 0xfffffeff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax + 0x7C); /* 0x006EC0E6: mov edx, dword ptr [eax + 0x7c] */
    /* test edx, edx */ /* 0x006EC0E9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC0FB; /* 0x006EC0EB: je 0x6ec0fb */
L_006EC0ED:
    PUSH32(esp, 0); /* 0x006EC0ED: push 0 */
    PUSH32(esp, ecx); /* 0x006EC0EF: push ecx */
    PUSH32(esp, eax); /* 0x006EC0F0: push eax */
    RECOMP_ICALL(edx); /* 0x006EC0F1: call edx */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBCC); /* 0x006EC0F3: mov eax, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EC0F8: add esp, 0xc */
    _flag_k = FK_ADD;
L_006EC0FB:
    MEM32(eax + 0x114) = esi; /* 0x006EC0FB: mov dword ptr [eax + 0x114], esi */
    goto L_006EC111; /* 0x006EC101: jmp 0x6ec111 */
L_006EC103:
    /* cmp ecx, esi */ /* 0x006EC103: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC111; /* 0x006EC105: jne 0x6ec111 */
L_006EC107:
    MEM32(eax + 0x114) = 0; /* 0x006EC107: mov dword ptr [eax + 0x114], 0 */
L_006EC111:
    ecx = MEM32(eax + 0x7C); /* 0x006EC111: mov ecx, dword ptr [eax + 0x7c] */
    /* test ecx, ecx */ /* 0x006EC114: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC120; /* 0x006EC116: je 0x6ec120 */
L_006EC118:
    PUSH32(esp, edi); /* 0x006EC118: push edi */
    PUSH32(esp, esi); /* 0x006EC119: push esi */
    PUSH32(esp, eax); /* 0x006EC11A: push eax */
    RECOMP_ICALL(ecx); /* 0x006EC11B: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EC11D: add esp, 0xc */
    _flag_k = FK_ADD;
L_006EC120:
    edi = POP32_VAL(esp); /* 0x006EC120: pop edi */
    esi = POP32_VAL(esp); /* 0x006EC121: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC122: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC130u);

L_006EC130:
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x006EC130: push dword ptr [ecx + 0x1c] */
    SET_LO8(edx, 6); /* 0x006EC133: mov dl, 6 */
    MEM32(ecx + 0x70) = 0; /* 0x006EC135: mov dword ptr [ecx + 0x70], 0 */
    PUSH32(esp, MEM32(ecx + 0x18)); /* 0x006EC13C: push dword ptr [ecx + 0x18] */
    RECOMP_CALL(sub_006F7C40); /* 0x006EC13F: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EC144: add esp, 8 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC147: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC150u);

    goto L_006EC150;
L_006EB450:
    PUSH32(esp, ebp); /* 0x006EB450: push ebp */
    ebp = esp; /* 0x006EB451: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x006EB453: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x006EB456: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x87CBCC); /* 0x006EB459: mov eax, dword ptr [0x87cbcc] */
    MEM32(esp + 0x4) = edx; /* 0x006EB45E: mov dword ptr [esp + 4], edx */
    PUSH32(esp, esi); /* 0x006EB462: push esi */
    PUSH32(esp, edi); /* 0x006EB463: push edi */
    edi = ecx; /* 0x006EB464: mov edi, ecx */
    /* test eax, eax */ /* 0x006EB466: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB480; /* 0x006EB468: jne 0x6eb480 */
L_006EB46A:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EB46A: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB46F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB474: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EB477: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB47A: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB47B: pop esi */
    esp = ebp; /* 0x006EB47C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB47E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB47F: ret  */
L_006EB480:
    /* test edi, edi */ /* 0x006EB480: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB698; /* 0x006EB482: je 0x6eb698 */
L_006EB488:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006EB488: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi), eax */ /* 0x006EB48D: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB698; /* 0x006EB48F: jne 0x6eb698 */
L_006EB495:
    /* cmp MEM32(edi + 0x74), 0 */ /* 0x006EB495: cmp dword ptr [edi + 0x74], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x74)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB4A3; /* 0x006EB499: je 0x6eb4a3 */
L_006EB49B:
    /* test edx, edx */ /* 0x006EB49B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB690; /* 0x006EB49D: jne 0x6eb690 */
L_006EB4A3:
    RECOMP_CALL(sub_006EB100); /* 0x006EB4A3: call 0x6eb100 */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x87CBCC); /* 0x006EB4A8: mov edx, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006EB4AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EB4C4; /* 0x006EB4B0: js 0x6eb4c4 */
L_006EB4B2:
    ecx = eax; /* 0x006EB4B2: mov ecx, eax */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x006EB4B4: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x006EB4B4: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006EB4B7: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x10C); /* 0x006EB4B9: mov eax, dword ptr [edx + 0x10c] */
    esi = eax + ecx * 4; /* 0x006EB4BF: lea esi, [eax + ecx*4] */
    goto L_006EB4C6; /* 0x006EB4C2: jmp 0x6eb4c6 */
L_006EB4C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EB4C4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EB4C6:
    ecx = MEM32(esp + 0xC); /* 0x006EB4C6: mov ecx, dword ptr [esp + 0xc] */
    MEM32(esp + 0x8) = esi; /* 0x006EB4CA: mov dword ptr [esp + 8], esi */
    /* test ecx, ecx */ /* 0x006EB4CE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB4EE; /* 0x006EB4D0: je 0x6eb4ee */
L_006EB4D2:
    eax = MEM32(esi + 0x38); /* 0x006EB4D2: mov eax, dword ptr [esi + 0x38] */
    /* test eax, eax */ /* 0x006EB4D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB4EE; /* 0x006EB4D7: je 0x6eb4ee */
L_006EB4D9:
    /* cmp eax, edi */ /* 0x006EB4D9: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB4EE; /* 0x006EB4DB: je 0x6eb4ee */
L_006EB4DD:
    ecx = eax; /* 0x006EB4DD: mov ecx, eax */
    RECOMP_CALL(sub_006EBDF0); /* 0x006EB4DF: call 0x6ebdf0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x87CBCC); /* 0x006EB4E4: mov edx, dword ptr [0x87cbcc] */
    ecx = MEM32(esp + 0xC); /* 0x006EB4EA: mov ecx, dword ptr [esp + 0xc] */
L_006EB4EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB4EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x38), edi */ /* 0x006EB4F0: cmp dword ptr [esi + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006EB4F3: sete al */
    /* cmp eax, ecx */ /* 0x006EB4F6: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB50B; /* 0x006EB4F8: jne 0x6eb50b */
L_006EB4FA:
    eax = MEM32(edi + 0x34); /* 0x006EB4FA: mov eax, dword ptr [edi + 0x34] */
    _flag_a = (uint32_t)((eax ^ MEM32(edi + 0x30))); _flag_b = (uint32_t)((eax ^ MEM32(edi + 0x30)));
    eax = eax ^ MEM32(edi + 0x30); /* 0x006EB4FD: xor eax, dword ptr [edi + 0x30] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0x1001u */ /* 0x006EB500: test eax, 0x1001 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1001u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB690; /* 0x006EB505: je 0x6eb690 */
L_006EB50B:
    esi = MEM32(edx + 0x110); /* 0x006EB50B: mov esi, dword ptr [edx + 0x110] */
    /* test esi, esi */ /* 0x006EB511: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB569; /* 0x006EB513: je 0x6eb569 */
L_006EB515:
    /* cmp esi, edi */ /* 0x006EB515: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB537; /* 0x006EB517: je 0x6eb537 */
L_006EB519:
    eax = MEM32(esi + 0x30); /* 0x006EB519: mov eax, dword ptr [esi + 0x30] */
    /* test LO8(eax), 1 */ /* 0x006EB51C: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB55F; /* 0x006EB51E: je 0x6eb55f */
L_006EB520:
    /* test LO8(eax), 4 */ /* 0x006EB520: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB55F; /* 0x006EB522: je 0x6eb55f */
L_006EB524:
    /* test LO8(eax), 0x40u */ /* 0x006EB524: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB55F; /* 0x006EB526: jne 0x6eb55f */
L_006EB528:
    ecx = esi; /* 0x006EB528: mov ecx, esi */
    RECOMP_CALL(sub_006EB2E0); /* 0x006EB52A: call 0x6eb2e0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, MEM32(esp + 0x8) */ /* 0x006EB52F: cmp eax, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB55B; /* 0x006EB533: jne 0x6eb55b */
L_006EB535:
    goto L_006EB53B; /* 0x006EB535: jmp 0x6eb53b */
L_006EB537:
    /* test ecx, ecx */ /* 0x006EB537: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB55F; /* 0x006EB539: je 0x6eb55f */
L_006EB53B:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006EB53B: xorps xmm0, xmm0 */
    MEM32(esp + 0x20) = 0; /* 0x006EB53E: mov dword ptr [esp + 0x20], 0 */
    edx = esp + 0x10; /* 0x006EB546: lea edx, [esp + 0x10] */
    xmm_st(esp + 0x10, _xmm[0]); /* 0x006EB54A: movdqa xmmword ptr [esp + 0x10], xmm0 */
    ecx = esi; /* 0x006EB550: mov ecx, esi */
    RECOMP_CALL(sub_006EB310); /* 0x006EB552: call 0x6eb310 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EB557: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB5D8; /* 0x006EB559: je 0x6eb5d8 */
L_006EB55B:
    ecx = MEM32(esp + 0xC); /* 0x006EB55B: mov ecx, dword ptr [esp + 0xc] */
L_006EB55F:
    esi = MEM32(esi + 0x98); /* 0x006EB55F: mov esi, dword ptr [esi + 0x98] */
    /* test esi, esi */ /* 0x006EB565: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EB515; /* 0x006EB567: jne 0x6eb515 */
L_006EB569:
    esi = MEM32(esp + 0x8); /* 0x006EB569: mov esi, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EB56D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x006EB56F: mov ecx, esi */
    RECOMP_CALL(sub_006EAFF0); /* 0x006EB571: call 0x6eaff0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBCC); /* 0x006EB576: mov eax, dword ptr [0x87cbcc] */
    ecx = MEM32(eax + 0x70); /* 0x006EB57B: mov ecx, dword ptr [eax + 0x70] */
    /* test ecx, ecx */ /* 0x006EB57E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB58C; /* 0x006EB580: je 0x6eb58c */
L_006EB582:
    PUSH32(esp, 0); /* 0x006EB582: push 0 */
    PUSH32(esp, esi); /* 0x006EB584: push esi */
    PUSH32(esp, edi); /* 0x006EB585: push edi */
    PUSH32(esp, eax); /* 0x006EB586: push eax */
    RECOMP_ICALL(ecx); /* 0x006EB587: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006EB589: add esp, 0x10 */
    _flag_k = FK_ADD;
L_006EB58C:
    MEM32(esi + 0x38) = 0; /* 0x006EB58C: mov dword ptr [esi + 0x38], 0 */
    SET_LO8(edx, 6); /* 0x006EB593: mov dl, 6 */
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x006EB595: push dword ptr [edi + 0x1c] */
    ecx = edi; /* 0x006EB598: mov ecx, edi */
    MEM32(edi + 0x70) = 0; /* 0x006EB59A: mov dword ptr [edi + 0x70], 0 */
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x006EB5A1: push dword ptr [edi + 0x18] */
    RECOMP_CALL(sub_006F7C40); /* 0x006EB5A4: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EB5A9: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(0x926A0C) */ /* 0x006EB5AC: cmp edi, dword ptr [0x926a0c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x926A0C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB5CA; /* 0x006EB5B2: jne 0x6eb5ca */
L_006EB5B4:
    PUSH32(esp, MEM32(0x926A14)); /* 0x006EB5B4: push dword ptr [0x926a14] */
    edx = MEM32(0x926A10); /* 0x006EB5BA: mov edx, dword ptr [0x926a10] */
    ecx = edi; /* 0x006EB5C0: mov ecx, edi */
    RECOMP_CALL(sub_006F1220); /* 0x006EB5C2: call 0x6f1220 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB5C7: add esp, 4 */
    _flag_k = FK_ADD;
L_006EB5CA:
    eax = MEM32(edi + 0x30); /* 0x006EB5CA: mov eax, dword ptr [edi + 0x30] */
    MEM32(edi + 0x34) = eax; /* 0x006EB5CD: mov dword ptr [edi + 0x34], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB5D0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB5D2: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB5D3: pop esi */
    esp = ebp; /* 0x006EB5D4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB5D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB5D7: ret  */
L_006EB5D8:
    ecx = MEM32(esp + 0x14); /* 0x006EB5D8: mov ecx, dword ptr [esp + 0x14] */
    eax = 1; /* 0x006EB5DC: mov eax, 1 */
    MEM32(esp + 0xC) = eax; /* 0x006EB5E1: mov dword ptr [esp + 0xc], eax */
    /* cmp MEM32(esi + 0x18), ecx */ /* 0x006EB5E5: cmp dword ptr [esi + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EB5FA; /* 0x006EB5E8: jne 0x6eb5fa */
L_006EB5EA:
    ecx = MEM32(esp + 0x18); /* 0x006EB5EA: mov ecx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EB5EE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x1C), ecx */ /* 0x006EB5F0: cmp dword ptr [esi + 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = edx; } /* 0x006EB5F3: cmove eax, edx */
    MEM32(esp + 0xC) = eax; /* 0x006EB5F6: mov dword ptr [esp + 0xc], eax */
L_006EB5FA:
    eax = MEM32(edi + 0x30); /* 0x006EB5FA: mov eax, dword ptr [edi + 0x30] */
    ecx = MEM32(esp + 0x8); /* 0x006EB5FD: mov ecx, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1001u);
    eax = eax & 0x1001u; /* 0x006EB601: and eax, 0x1001 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x1001u */ /* 0x006EB606: cmp eax, 0x1001 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1001u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB623; /* 0x006EB60B: je 0x6eb623 */
L_006EB60D:
    edx = esp + 0x10; /* 0x006EB60D: lea edx, [esp + 0x10] */
    RECOMP_CALL(sub_006EAFF0); /* 0x006EB611: call 0x6eaff0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EB616: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EB62E; /* 0x006EB618: jns 0x6eb62e */
L_006EB61A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EB61A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB61D: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB61E: pop esi */
    esp = ebp; /* 0x006EB61F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB621: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB622: ret  */
L_006EB623:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EB623: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006EAFF0); /* 0x006EB625: call 0x6eaff0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EB62A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EB6A5; /* 0x006EB62C: js 0x6eb6a5 */
L_006EB62E:
    eax = MEM32(0x87CBCC); /* 0x006EB62E: mov eax, dword ptr [0x87cbcc] */
    ecx = MEM32(eax + 0x70); /* 0x006EB633: mov ecx, dword ptr [eax + 0x70] */
    /* test ecx, ecx */ /* 0x006EB636: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EB647; /* 0x006EB638: je 0x6eb647 */
L_006EB63A:
    PUSH32(esp, 1); /* 0x006EB63A: push 1 */
    PUSH32(esp, MEM32(esp + 0xC)); /* 0x006EB63C: push dword ptr [esp + 0xc] */
    PUSH32(esp, esi); /* 0x006EB640: push esi */
    PUSH32(esp, eax); /* 0x006EB641: push eax */
    RECOMP_ICALL(ecx); /* 0x006EB642: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006EB644: add esp, 0x10 */
    _flag_k = FK_ADD;
L_006EB647:
    /* cmp MEM32(esp + 0xC), 0 */ /* 0x006EB647: cmp dword ptr [esp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esi; /* 0x006EB64C: mov ecx, esi */
    eax = MEM32(esp + 0x8); /* 0x006EB64E: mov eax, dword ptr [esp + 8] */
    MEM32(eax + 0x38) = esi; /* 0x006EB652: mov dword ptr [eax + 0x38], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EB67E; /* 0x006EB655: je 0x6eb67e */
L_006EB657:
    PUSH32(esp, MEM32(esp + 0x18)); /* 0x006EB657: push dword ptr [esp + 0x18] */
    SET_LO8(edx, 5); /* 0x006EB65B: mov dl, 5 */
    PUSH32(esp, MEM32(esp + 0x18)); /* 0x006EB65D: push dword ptr [esp + 0x18] */
    RECOMP_CALL(sub_006F7C40); /* 0x006EB661: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EB666: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x006EB669: mov ecx, esi */
    RECOMP_CALL(sub_006EB430); /* 0x006EB66B: call 0x6eb430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x30); /* 0x006EB670: mov eax, dword ptr [edi + 0x30] */
    MEM32(edi + 0x34) = eax; /* 0x006EB673: mov dword ptr [edi + 0x34], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB676: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB678: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB679: pop esi */
    esp = ebp; /* 0x006EB67A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB67C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB67D: ret  */
L_006EB67E:
    RECOMP_CALL(sub_006EC130); /* 0x006EB67E: call 0x6ec130 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x006EB683: mov ecx, esi */
    RECOMP_CALL(sub_006EB430); /* 0x006EB685: call 0x6eb430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x30); /* 0x006EB68A: mov eax, dword ptr [edi + 0x30] */
    MEM32(edi + 0x34) = eax; /* 0x006EB68D: mov dword ptr [edi + 0x34], eax */
L_006EB690:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EB690: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EB692: pop edi */
    esi = POP32_VAL(esp); /* 0x006EB693: pop esi */
    esp = ebp; /* 0x006EB694: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB696: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB697: ret  */
L_006EB698:
    PUSH32(esp, 0x00804020u); /* 0x006EB698: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EB69D: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EB6A2: add esp, 4 */
    _flag_k = FK_ADD;
L_006EB6A5:
    edi = POP32_VAL(esp); /* 0x006EB6A5: pop edi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EB6A6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EB6A9: pop esi */
    esp = ebp; /* 0x006EB6AA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EB6AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EB6AD: ret  */
L_006EC150:
    eax = MEM32(ecx + 0x30); /* 0x006EC150: mov eax, dword ptr [ecx + 0x30] */
    /* test LO8(eax), 1 */ /* 0x006EC153: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC169; /* 0x006EC155: je 0x6ec169 */
L_006EC157:
    /* test LO8(eax), 4 */ /* 0x006EC157: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC169; /* 0x006EC159: je 0x6ec169 */
L_006EC15B:
    /* test LO8(eax), 0x40u */ /* 0x006EC15B: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC169; /* 0x006EC15D: jne 0x6ec169 */
L_006EC15F:
    edx = 1; /* 0x006EC15F: mov edx, 1 */
    RECOMP_BACKEDGE();
    goto L_006EB450; /* 0x006EC164: jmp 0x6eb450 */
L_006EC169:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC169: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC170u);

    goto L_006EC170;
L_006EC0A0:
    /* cmp MEM32(0x926A2C), 0 */ /* 0x006EC0A0: cmp dword ptr [0x926a2c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006EC0A7: push esi */
    PUSH32(esp, edi); /* 0x006EC0A8: push edi */
    esi = ecx; /* 0x006EC0A9: mov esi, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC0B6; /* 0x006EC0AB: jne 0x6ec0b6 */
L_006EC0AD:
    /* test MEM32(esi + 0x30), 0x100u */ /* 0x006EC0AD: test dword ptr [esi + 0x30], 0x100 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC0C6; /* 0x006EC0B4: je 0x6ec0c6 */
L_006EC0B6:
    /* test MEM32(esi + 0x30), 0x200u */ /* 0x006EC0B6: test dword ptr [esi + 0x30], 0x200 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC0C6; /* 0x006EC0BD: je 0x6ec0c6 */
L_006EC0BF:
    edi = 1; /* 0x006EC0BF: mov edi, 1 */
    goto L_006EC0C8; /* 0x006EC0C4: jmp 0x6ec0c8 */
L_006EC0C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006EC0C6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EC0C8:
    eax = MEM32(0x87CBCC); /* 0x006EC0C8: mov eax, dword ptr [0x87cbcc] */
    ecx = MEM32(eax + 0x114); /* 0x006EC0CD: mov ecx, dword ptr [eax + 0x114] */
    /* test edi, edi */ /* 0x006EC0D3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC103; /* 0x006EC0D5: je 0x6ec103 */
L_006EC0D7:
    /* test ecx, ecx */ /* 0x006EC0D7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC0FB; /* 0x006EC0D9: je 0x6ec0fb */
L_006EC0DB:
    /* cmp ecx, esi */ /* 0x006EC0DB: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EC0FB; /* 0x006EC0DD: je 0x6ec0fb */
L_006EC0DF:
    _flag_a = (uint32_t)(MEM32(ecx + 0x30)); _flag_b = (uint32_t)(0xFFFFFEFFu);
    MEM32(ecx + 0x30) = MEM32(ecx + 0x30) & 0xFFFFFEFFu; /* 0x006EC0DF: and dword ptr [ecx + 0x30], 0xfffffeff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax + 0x7C); /* 0x006EC0E6: mov edx, dword ptr [eax + 0x7c] */
    /* test edx, edx */ /* 0x006EC0E9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC0FB; /* 0x006EC0EB: je 0x6ec0fb */
L_006EC0ED:
    PUSH32(esp, 0); /* 0x006EC0ED: push 0 */
    PUSH32(esp, ecx); /* 0x006EC0EF: push ecx */
    PUSH32(esp, eax); /* 0x006EC0F0: push eax */
    RECOMP_ICALL(edx); /* 0x006EC0F1: call edx */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBCC); /* 0x006EC0F3: mov eax, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EC0F8: add esp, 0xc */
    _flag_k = FK_ADD;
L_006EC0FB:
    MEM32(eax + 0x114) = esi; /* 0x006EC0FB: mov dword ptr [eax + 0x114], esi */
    goto L_006EC111; /* 0x006EC101: jmp 0x6ec111 */
L_006EC103:
    /* cmp ecx, esi */ /* 0x006EC103: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC111; /* 0x006EC105: jne 0x6ec111 */
L_006EC107:
    MEM32(eax + 0x114) = 0; /* 0x006EC107: mov dword ptr [eax + 0x114], 0 */
L_006EC111:
    ecx = MEM32(eax + 0x7C); /* 0x006EC111: mov ecx, dword ptr [eax + 0x7c] */
    /* test ecx, ecx */ /* 0x006EC114: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC120; /* 0x006EC116: je 0x6ec120 */
L_006EC118:
    PUSH32(esp, edi); /* 0x006EC118: push edi */
    PUSH32(esp, esi); /* 0x006EC119: push esi */
    PUSH32(esp, eax); /* 0x006EC11A: push eax */
    RECOMP_ICALL(ecx); /* 0x006EC11B: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EC11D: add esp, 0xc */
    _flag_k = FK_ADD;
L_006EC120:
    edi = POP32_VAL(esp); /* 0x006EC120: pop edi */
    esi = POP32_VAL(esp); /* 0x006EC121: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC122: ret  */
L_006EC170:
    PUSH32(esp, esi); /* 0x006EC170: push esi */
    esi = ecx; /* 0x006EC171: mov esi, ecx */
    eax = MEM32(esi + 0x64); /* 0x006EC173: mov eax, dword ptr [esi + 0x64] */
    /* test eax, eax */ /* 0x006EC176: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC18F; /* 0x006EC178: je 0x6ec18f */
L_006EC17A:
    ecx = MEM32(0x87CBCC); /* 0x006EC17A: mov ecx, dword ptr [0x87cbcc] */
    edx = MEM32(ecx + 0x74); /* 0x006EC180: mov edx, dword ptr [ecx + 0x74] */
    /* test edx, edx */ /* 0x006EC183: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC18F; /* 0x006EC185: je 0x6ec18f */
L_006EC187:
    PUSH32(esp, eax); /* 0x006EC187: push eax */
    PUSH32(esp, esi); /* 0x006EC188: push esi */
    PUSH32(esp, ecx); /* 0x006EC189: push ecx */
    RECOMP_ICALL(edx); /* 0x006EC18A: call edx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EC18C: add esp, 0xc */
    _flag_k = FK_ADD;
L_006EC18F:
    /* cmp MEM32(0x926A2C), 0 */ /* 0x006EC18F: cmp dword ptr [0x926a2c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EC1BC; /* 0x006EC196: je 0x6ec1bc */
L_006EC198:
    ecx = esi; /* 0x006EC198: mov ecx, esi */
    RECOMP_CALL(sub_006F0A40); /* 0x006EC19A: call 0x6f0a40 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1C); /* 0x006EC19F: mov eax, dword ptr [esi + 0x1c] */
    ecx = esi; /* 0x006EC1A2: mov ecx, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006EC1A4: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006EC1A5: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006EC1A7: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    PUSH32(esp, eax); /* 0x006EC1A9: push eax */
    eax = MEM32(esi + 0x18); /* 0x006EC1AA: mov eax, dword ptr [esi + 0x18] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006EC1AD: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006EC1AE: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006EC1B0: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edx = eax; /* 0x006EC1B2: mov edx, eax */
    RECOMP_CALL(sub_006F1220); /* 0x006EC1B4: call 0x6f1220 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC1B9: add esp, 4 */
    _flag_k = FK_ADD;
L_006EC1BC:
    ecx = esi; /* 0x006EC1BC: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x006EC1BE: pop esi */
    RECOMP_BACKEDGE();
    goto L_006EC0A0; /* 0x006EC1BF: jmp 0x6ec0a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006EC1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC1D0u);

    goto L_006EC1D0;
L_006EBDF0:
    eax = MEM32(0x87CBCC); /* 0x006EBDF0: mov eax, dword ptr [0x87cbcc] */
    PUSH32(esp, esi); /* 0x006EBDF5: push esi */
    esi = ecx; /* 0x006EBDF6: mov esi, ecx */
    /* test eax, eax */ /* 0x006EBDF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EBE0B; /* 0x006EBDFA: jne 0x6ebe0b */
L_006EBDFC:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EBDFC: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBE01: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBE06: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006EBE09: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBE0A: ret  */
L_006EBE0B:
    /* test esi, esi */ /* 0x006EBE0B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBE3A; /* 0x006EBE0D: je 0x6ebe3a */
L_006EBE0F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006EBE0F: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), eax */ /* 0x006EBE14: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EBE3A; /* 0x006EBE16: jne 0x6ebe3a */
L_006EBE18:
    /* test MEM8(esi + 0x30), 0x40u */ /* 0x006EBE18: test byte ptr [esi + 0x30], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EBE47; /* 0x006EBE1C: jne 0x6ebe47 */
L_006EBE1E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EBE1E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006EB450); /* 0x006EBE20: call 0x6eb450 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBCC); /* 0x006EBE25: mov eax, dword ptr [0x87cbcc] */
    ecx = MEM32(eax + 0x60); /* 0x006EBE2A: mov ecx, dword ptr [eax + 0x60] */
    /* test ecx, ecx */ /* 0x006EBE2D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EBE47; /* 0x006EBE2F: je 0x6ebe47 */
L_006EBE31:
    PUSH32(esp, esi); /* 0x006EBE31: push esi */
    PUSH32(esp, eax); /* 0x006EBE32: push eax */
    RECOMP_ICALL(ecx); /* 0x006EBE33: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EBE35: add esp, 8 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006EBE38: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBE39: ret  */
L_006EBE3A:
    PUSH32(esp, 0x00804020u); /* 0x006EBE3A: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EBE3F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EBE44: add esp, 4 */
    _flag_k = FK_ADD;
L_006EBE47:
    esi = POP32_VAL(esp); /* 0x006EBE47: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EBE48: ret  */
L_006EC1D0:
    PUSH32(esp, esi); /* 0x006EC1D0: push esi */
    esi = ecx; /* 0x006EC1D1: mov esi, ecx */
    /* cmp MEM32(esi + 0x64), 0 */ /* 0x006EC1D3: cmp dword ptr [esi + 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x64)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EC1EF; /* 0x006EC1D7: je 0x6ec1ef */
L_006EC1D9:
    eax = MEM32(0x87CBCC); /* 0x006EC1D9: mov eax, dword ptr [0x87cbcc] */
    ecx = MEM32(eax + 0x74); /* 0x006EC1DE: mov ecx, dword ptr [eax + 0x74] */
    /* test ecx, ecx */ /* 0x006EC1E1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC1EF; /* 0x006EC1E3: je 0x6ec1ef */
L_006EC1E5:
    PUSH32(esp, MEM32(esi + 0x68)); /* 0x006EC1E5: push dword ptr [esi + 0x68] */
    PUSH32(esp, esi); /* 0x006EC1E8: push esi */
    PUSH32(esp, eax); /* 0x006EC1E9: push eax */
    RECOMP_ICALL(ecx); /* 0x006EC1EA: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EC1EC: add esp, 0xc */
    _flag_k = FK_ADD;
L_006EC1EF:
    ecx = esi; /* 0x006EC1EF: mov ecx, esi */
    RECOMP_CALL(sub_006EC0A0); /* 0x006EC1F1: call 0x6ec0a0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(esi + 0x30), 1 */ /* 0x006EC1F6: test byte ptr [esi + 0x30], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC230; /* 0x006EC1FA: je 0x6ec230 */
L_006EC1FC:
    /* cmp MEM32(esi + 0x78), 0 */ /* 0x006EC1FC: cmp dword ptr [esi + 0x78], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x78)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC230; /* 0x006EC200: jne 0x6ec230 */
L_006EC202:
    ecx = 0x0080418Cu; /* 0x006EC202: mov ecx, 0x80418c */
    RECOMP_CALL(sub_006F5A00); /* 0x006EC207: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EC20C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC228; /* 0x006EC20E: je 0x6ec228 */
L_006EC210:
    /* cmp MEM8(eax), 0x30u */ /* 0x006EC210: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EC230; /* 0x006EC213: je 0x6ec230 */
L_006EC215:
    PUSH32(esp, 0x007DEB8Cu); /* 0x006EC215: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x006EC21A: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x006EC21B: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EC221: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EC224: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC230; /* 0x006EC226: je 0x6ec230 */
L_006EC228:
    ecx = esi; /* 0x006EC228: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x006EC22A: pop esi */
    RECOMP_BACKEDGE();
    goto L_006EBDF0; /* 0x006EC22B: jmp 0x6ebdf0 */
L_006EC230:
    esi = POP32_VAL(esp); /* 0x006EC230: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC231: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC240u);

L_006EC240:
    eax = MEM32(0x87CBCC); /* 0x006EC240: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006EC245: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC266; /* 0x006EC247: je 0x6ec266 */
L_006EC249:
    eax = MEM32(eax + 0x110); /* 0x006EC249: mov eax, dword ptr [eax + 0x110] */
    /* test eax, eax */ /* 0x006EC24F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC266; /* 0x006EC251: je 0x6ec266 */
L_006EC253:
    /* test MEM32(eax + 0x30), 0x200u */ /* 0x006EC253: test dword ptr [eax + 0x30], 0x200 */
    _flag_a = (uint32_t)(MEM32(eax + 0x30)); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC268; /* 0x006EC25A: jne 0x6ec268 */
L_006EC25C:
    eax = MEM32(eax + 0x98); /* 0x006EC25C: mov eax, dword ptr [eax + 0x98] */
    /* test eax, eax */ /* 0x006EC262: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC253; /* 0x006EC264: jne 0x6ec253 */
L_006EC266:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EC266: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EC268:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC268: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC270u);

L_006EC270:
    eax = MEM32(0x87CBCC); /* 0x006EC270: mov eax, dword ptr [0x87cbcc] */
    PUSH32(esp, ebx); /* 0x006EC275: push ebx */
    PUSH32(esp, esi); /* 0x006EC276: push esi */
    PUSH32(esp, edi); /* 0x006EC277: push edi */
    edi = ecx; /* 0x006EC278: mov edi, ecx */
    /* test eax, eax */ /* 0x006EC27A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC28F; /* 0x006EC27C: jne 0x6ec28f */
L_006EC27E:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EC27E: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EC283: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC288: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EC28B: pop edi */
    esi = POP32_VAL(esp); /* 0x006EC28C: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EC28D: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC28E: ret  */
L_006EC28F:
    /* test edi, edi */ /* 0x006EC28F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC416; /* 0x006EC291: je 0x6ec416 */
L_006EC297:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006EC297: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi), eax */ /* 0x006EC29C: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC416; /* 0x006EC29E: jne 0x6ec416 */
L_006EC2A4:
    MEM32(edi + 0x78) = 1; /* 0x006EC2A4: mov dword ptr [edi + 0x78], 1 */
    RECOMP_CALL(sub_006EBD20); /* 0x006EC2AB: call 0x6ebd20 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x925FD0), edi */ /* 0x006EC2B0: cmp dword ptr [0x925fd0], edi */
    _flag_a = (uint32_t)(MEM32(0x925FD0)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC2BF; /* 0x006EC2B6: jne 0x6ec2bf */
L_006EC2B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EC2B8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006EFCE0); /* 0x006EC2BA: call 0x6efce0 */
    RECOMP_FLAGS_IN();
L_006EC2BF:
    /* cmp MEM32(0x926A0C), edi */ /* 0x006EC2BF: cmp dword ptr [0x926a0c], edi */
    _flag_a = (uint32_t)(MEM32(0x926A0C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC2CE; /* 0x006EC2C5: jne 0x6ec2ce */
L_006EC2C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EC2C7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006F0A40); /* 0x006EC2C9: call 0x6f0a40 */
    RECOMP_FLAGS_IN();
L_006EC2CE:
    /* test MEM8(edi + 0x30), 2 */ /* 0x006EC2CE: test byte ptr [edi + 0x30], 2 */
    _flag_a = (uint32_t)(MEM8(edi + 0x30)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(0x87CBCC); /* 0x006EC2D2: mov eax, dword ptr [0x87cbcc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC2ED; /* 0x006EC2D7: je 0x6ec2ed */
L_006EC2D9:
    /* cmp MEM32(eax + 0x28C), edi */ /* 0x006EC2D9: cmp dword ptr [eax + 0x28c], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x28C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC2ED; /* 0x006EC2DF: jne 0x6ec2ed */
L_006EC2E1:
    ecx = edi; /* 0x006EC2E1: mov ecx, edi */
    RECOMP_CALL(sub_006EC750); /* 0x006EC2E3: call 0x6ec750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBCC); /* 0x006EC2E8: mov eax, dword ptr [0x87cbcc] */
L_006EC2ED:
    ecx = MEM32(edi + 0x6C); /* 0x006EC2ED: mov ecx, dword ptr [edi + 0x6c] */
    /* test ecx, ecx */ /* 0x006EC2F0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC304; /* 0x006EC2F2: je 0x6ec304 */
L_006EC2F4:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ecx) = MEM32(ecx) & 0xFFFFFFFBu; /* 0x006EC2F4: and dword ptr [ecx], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x6C); /* 0x006EC2F7: mov ecx, dword ptr [edi + 0x6c] */
    RECOMP_CALL(sub_006F7460); /* 0x006EC2FA: call 0x6f7460 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBCC); /* 0x006EC2FF: mov eax, dword ptr [0x87cbcc] */
L_006EC304:
    ecx = MEM32(eax + 0x8C); /* 0x006EC304: mov ecx, dword ptr [eax + 0x8c] */
    /* test ecx, ecx */ /* 0x006EC30A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC31A; /* 0x006EC30C: je 0x6ec31a */
L_006EC30E:
    PUSH32(esp, edi); /* 0x006EC30E: push edi */
    PUSH32(esp, eax); /* 0x006EC30F: push eax */
    RECOMP_ICALL(ecx); /* 0x006EC310: call ecx */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBCC); /* 0x006EC312: mov eax, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EC317: add esp, 8 */
    _flag_k = FK_ADD;
L_006EC31A:
    ecx = MEM32(eax + 0x80); /* 0x006EC31A: mov ecx, dword ptr [eax + 0x80] */
    /* test ecx, ecx */ /* 0x006EC320: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC32B; /* 0x006EC322: je 0x6ec32b */
L_006EC324:
    PUSH32(esp, edi); /* 0x006EC324: push edi */
    PUSH32(esp, eax); /* 0x006EC325: push eax */
    RECOMP_ICALL(ecx); /* 0x006EC326: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EC328: add esp, 8 */
    _flag_k = FK_ADD;
L_006EC32B:
    /* test MEM8(edi + 0x30), 2 */ /* 0x006EC32B: test byte ptr [edi + 0x30], 2 */
    _flag_a = (uint32_t)(MEM8(edi + 0x30)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC336; /* 0x006EC32F: je 0x6ec336 */
L_006EC331:
    RECOMP_CALL(sub_006EC610); /* 0x006EC331: call 0x6ec610 */
    RECOMP_FLAGS_IN();
L_006EC336:
    ecx = edi; /* 0x006EC336: mov ecx, edi */
    RECOMP_CALL(sub_006EB100); /* 0x006EC338: call 0x6eb100 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EC33D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EC358; /* 0x006EC33F: js 0x6ec358 */
L_006EC341:
    ecx = eax; /* 0x006EC341: mov ecx, eax */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x006EC343: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x006EC343: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006EC346: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(0x87CBCC); /* 0x006EC348: mov eax, dword ptr [0x87cbcc] */
    eax = MEM32(eax + 0x10C); /* 0x006EC34D: mov eax, dword ptr [eax + 0x10c] */
    eax = eax + ecx * 4; /* 0x006EC353: lea eax, [eax + ecx*4] */
    goto L_006EC35A; /* 0x006EC356: jmp 0x6ec35a */
L_006EC358:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EC358: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EC35A:
    /* cmp MEM32(eax + 0x38), edi */ /* 0x006EC35A: cmp dword ptr [eax + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC366; /* 0x006EC35D: jne 0x6ec366 */
L_006EC35F:
    MEM32(eax + 0x38) = 0; /* 0x006EC35F: mov dword ptr [eax + 0x38], 0 */
L_006EC366:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x006EC366: push dword ptr [edi + 8] */
    ebx = MEM32(0x7CC44C); /* 0x006EC369: mov ebx, dword ptr [0x7cc44c] */
    MEM32(edi) = 0; /* 0x006EC36F: mov dword ptr [edi], 0 */
    RECOMP_ICALL(ebx); /* 0x006EC375: call ebx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0xC); /* 0x006EC377: mov ecx, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC37A: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_006F7460); /* 0x006EC37D: call 0x6f7460 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x64)); /* 0x006EC382: push dword ptr [edi + 0x64] */
    RECOMP_ICALL(ebx); /* 0x006EC385: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC387: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x8C), 0 */ /* 0x006EC38A: cmp dword ptr [edi + 0x8c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EC3C5; /* 0x006EC391: je 0x6ec3c5 */
L_006EC393:
    goto L_006EC3A0; /* 0x006EC393: jmp 0x6ec3a0 */
L_006EC3A0:
    esi = MEM32(edi + 0x8C); /* 0x006EC3A0: mov esi, dword ptr [edi + 0x8c] */
    eax = MEM32(esi + 0x8); /* 0x006EC3A6: mov eax, dword ptr [esi + 8] */
    MEM32(edi + 0x8C) = eax; /* 0x006EC3A9: mov dword ptr [edi + 0x8c], eax */
    PUSH32(esp, MEM32(esi)); /* 0x006EC3AF: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x006EC3B1: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC3B3: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x006EC3B6: push esi */
    RECOMP_ICALL(ebx); /* 0x006EC3B7: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC3B9: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x8C), 0 */ /* 0x006EC3BC: cmp dword ptr [edi + 0x8c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC3A0; /* 0x006EC3C3: jne 0x6ec3a0 */
L_006EC3C5:
    ecx = MEM32(edi + 0x98); /* 0x006EC3C5: mov ecx, dword ptr [edi + 0x98] */
    /* test ecx, ecx */ /* 0x006EC3CB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC3DB; /* 0x006EC3CD: je 0x6ec3db */
L_006EC3CF:
    eax = MEM32(edi + 0x94); /* 0x006EC3CF: mov eax, dword ptr [edi + 0x94] */
    MEM32(ecx + 0x94) = eax; /* 0x006EC3D5: mov dword ptr [ecx + 0x94], eax */
L_006EC3DB:
    ecx = MEM32(edi + 0x94); /* 0x006EC3DB: mov ecx, dword ptr [edi + 0x94] */
    /* test ecx, ecx */ /* 0x006EC3E1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC3FB; /* 0x006EC3E3: je 0x6ec3fb */
L_006EC3E5:
    eax = MEM32(edi + 0x98); /* 0x006EC3E5: mov eax, dword ptr [edi + 0x98] */
    PUSH32(esp, edi); /* 0x006EC3EB: push edi */
    MEM32(ecx + 0x98) = eax; /* 0x006EC3EC: mov dword ptr [ecx + 0x98], eax */
    RECOMP_ICALL(ebx); /* 0x006EC3F2: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC3F4: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EC3F7: pop edi */
    esi = POP32_VAL(esp); /* 0x006EC3F8: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EC3F9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC3FA: ret  */
L_006EC3FB:
    eax = MEM32(0x87CBCC); /* 0x006EC3FB: mov eax, dword ptr [0x87cbcc] */
    ecx = MEM32(edi + 0x98); /* 0x006EC400: mov ecx, dword ptr [edi + 0x98] */
    PUSH32(esp, edi); /* 0x006EC406: push edi */
    MEM32(eax + 0x110) = ecx; /* 0x006EC407: mov dword ptr [eax + 0x110], ecx */
    RECOMP_ICALL(ebx); /* 0x006EC40D: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC40F: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EC412: pop edi */
    esi = POP32_VAL(esp); /* 0x006EC413: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EC414: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC415: ret  */
L_006EC416:
    PUSH32(esp, 0x00804020u); /* 0x006EC416: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EC41B: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC420: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006EC423: pop edi */
    esi = POP32_VAL(esp); /* 0x006EC424: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EC425: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC426: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC430u);

L_006EC430:
    PUSH32(esp, ebp); /* 0x006EC430: push ebp */
    ebp = esp; /* 0x006EC431: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006EC433: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006EC436: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM32(0x87CBCC), 0 */ /* 0x006EC439: cmp dword ptr [0x87cbcc], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBCC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006EC440: push ebx */
    PUSH32(esp, esi); /* 0x006EC441: push esi */
    PUSH32(esp, edi); /* 0x006EC442: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EC608; /* 0x006EC443: je 0x6ec608 */
L_006EC449:
    RECOMP_CALL(sub_006F58E0); /* 0x006EC449: call 0x6f58e0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_006F1170); /* 0x006EC44E: call 0x6f1170 */
    RECOMP_FLAGS_IN();
    ecx = 0x4000u; /* 0x006EC453: mov ecx, 0x4000 */
    RECOMP_CALL(sub_006ED830); /* 0x006EC458: call 0x6ed830 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBCC); /* 0x006EC45D: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006EC462: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC48E; /* 0x006EC464: je 0x6ec48e */
L_006EC466:
    /* cmp MEM32(eax + 0x104), 0 */ /* 0x006EC466: cmp dword ptr [eax + 0x104], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x104)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EC48E; /* 0x006EC46D: je 0x6ec48e */
L_006EC46F:
    ecx = MEM32(eax + 0xD0); /* 0x006EC46F: mov ecx, dword ptr [eax + 0xd0] */
    MEM32(eax + 0x104) = 0; /* 0x006EC475: mov dword ptr [eax + 0x104], 0 */
    /* test ecx, ecx */ /* 0x006EC47F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC48E; /* 0x006EC481: je 0x6ec48e */
L_006EC483:
    PUSH32(esp, eax); /* 0x006EC483: push eax */
    RECOMP_ICALL(ecx); /* 0x006EC484: call ecx */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBCC); /* 0x006EC486: mov eax, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC48B: add esp, 4 */
    _flag_k = FK_ADD;
L_006EC48E:
    ecx = MEM32(eax + 0x110); /* 0x006EC48E: mov ecx, dword ptr [eax + 0x110] */
    /* test ecx, ecx */ /* 0x006EC494: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC4AC; /* 0x006EC496: je 0x6ec4ac */
L_006EC498:
    RECOMP_CALL(sub_006EC270); /* 0x006EC498: call 0x6ec270 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBCC); /* 0x006EC49D: mov eax, dword ptr [0x87cbcc] */
    ecx = MEM32(eax + 0x110); /* 0x006EC4A2: mov ecx, dword ptr [eax + 0x110] */
    /* test ecx, ecx */ /* 0x006EC4A8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC498; /* 0x006EC4AA: jne 0x6ec498 */
L_006EC4AC:
    PUSH32(esp, eax); /* 0x006EC4AC: push eax */
    eax = MEM32(eax + 0x8); /* 0x006EC4AD: mov eax, dword ptr [eax + 8] */
    RECOMP_ICALL(eax); /* 0x006EC4B0: call eax */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x87CBCC); /* 0x006EC4B2: mov edi, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC4B8: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(0x7CC44C); /* 0x006EC4BB: mov ecx, dword ptr [0x7cc44c] */
    MEM32(esp + 0x10) = 0; /* 0x006EC4C1: mov dword ptr [esp + 0x10], 0 */
    /* cmp MEM32(edi + 0x108), 0 */ /* 0x006EC4C9: cmp dword ptr [edi + 0x108], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x108)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006EC573; /* 0x006EC4D0: jle 0x6ec573 */
L_006EC4D6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EC4D6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x14) = eax; /* 0x006EC4D8: mov dword ptr [esp + 0x14], eax */
    esp = esp; /* 0x006EC4DC: lea esp, [esp] */
L_006EC4E0:
    esi = MEM32(edi + 0x10C); /* 0x006EC4E0: mov esi, dword ptr [edi + 0x10c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x006EC4E6: add esi, eax */
    _flag_k = FK_ADD;
    ebx = MEM32(esi + 0x8); /* 0x006EC4E8: mov ebx, dword ptr [esi + 8] */
    /* test ebx, ebx */ /* 0x006EC4EB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC51E; /* 0x006EC4ED: je 0x6ec51e */
L_006EC4EF:
    edi = ebx + ebx * 4; /* 0x006EC4EF: lea edi, [ebx + ebx*4] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x006EC4F2: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x006EC4F2: shl edi, 2 */
L_006EC4F5:
    eax = MEM32(esi + 0xC); /* 0x006EC4F5: mov eax, dword ptr [esi + 0xc] */
    edi = edi + (-0x14); /* 0x006EC4F8: lea edi, [edi - 0x14] */
    PUSH32(esp, MEM32(edi + eax + 0x10)); /* 0x006EC4FB: push dword ptr [edi + eax + 0x10] */
    RECOMP_ICALL(ecx); /* 0x006EC4FF: call ecx */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x006EC501: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC504: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(0x7CC44C); /* 0x006EC507: mov ecx, dword ptr [0x7cc44c] */
    MEM32(edi + eax + 0x10) = 0; /* 0x006EC50D: mov dword ptr [edi + eax + 0x10], 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x006EC515: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006EC4F5; /* 0x006EC516: jne 0x6ec4f5 */
L_006EC518:
    edi = MEM32(0x87CBCC); /* 0x006EC518: mov edi, dword ptr [0x87cbcc] */
L_006EC51E:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x006EC51E: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(ecx); /* 0x006EC521: call ecx */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC44C); /* 0x006EC523: mov ebx, dword ptr [0x7cc44c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC529: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0xC) = 0; /* 0x006EC52C: mov dword ptr [esi + 0xc], 0 */
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x006EC533: push dword ptr [esi + 0x20] */
    RECOMP_ICALL(ebx); /* 0x006EC536: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC538: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x20) = 0; /* 0x006EC53B: mov dword ptr [esi + 0x20], 0 */
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x006EC542: push dword ptr [esi + 0x40] */
    RECOMP_ICALL(ebx); /* 0x006EC545: call ebx */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x14); /* 0x006EC547: mov edx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC54B: add esp, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(esp + 0x14); /* 0x006EC54E: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006EC552: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x44u; /* 0x006EC553: add eax, 0x44 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x40) = 0; /* 0x006EC556: mov dword ptr [esi + 0x40], 0 */
    ecx = ebx; /* 0x006EC55D: mov ecx, ebx */
    MEM32(esp + 0x10) = edx; /* 0x006EC55F: mov dword ptr [esp + 0x10], edx */
    MEM32(esp + 0x14) = eax; /* 0x006EC563: mov dword ptr [esp + 0x14], eax */
    /* cmp edx, MEM32(edi + 0x108) */ /* 0x006EC567: cmp edx, dword ptr [edi + 0x108] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x108));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006EC4E0; /* 0x006EC56D: jl 0x6ec4e0 */
L_006EC573:
    /* cmp MEM32(edi + 0x10C), 0 */ /* 0x006EC573: cmp dword ptr [edi + 0x10c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EC5D7; /* 0x006EC57A: je 0x6ec5d7 */
L_006EC57C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EC57C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x108), esi */ /* 0x006EC57E: cmp dword ptr [edi + 0x108], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x108)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006EC5B0; /* 0x006EC584: jle 0x6ec5b0 */
L_006EC586:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006EC586: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006EC590; /* 0x006EC588: jmp 0x6ec590 */
L_006EC590:
    eax = MEM32(edi + 0x10C); /* 0x006EC590: mov eax, dword ptr [edi + 0x10c] */
    PUSH32(esp, MEM32(ebx + eax)); /* 0x006EC596: push dword ptr [ebx + eax] */
    RECOMP_ICALL(ecx); /* 0x006EC599: call ecx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x7CC44C); /* 0x006EC59B: mov ecx, dword ptr [0x7cc44c] */
    ebx = ebx + 0x44; /* 0x006EC5A1: lea ebx, [ebx + 0x44] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EC5A4: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC5A5: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edi + 0x108) */ /* 0x006EC5A8: cmp esi, dword ptr [edi + 0x108] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x108));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006EC590; /* 0x006EC5AE: jl 0x6ec590 */
L_006EC5B0:
    PUSH32(esp, MEM32(edi + 0x10C)); /* 0x006EC5B0: push dword ptr [edi + 0x10c] */
    ebx = MEM32(0x7CC44C); /* 0x006EC5B6: mov ebx, dword ptr [0x7cc44c] */
    RECOMP_ICALL(ebx); /* 0x006EC5BC: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC5BE: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x10C) = 0; /* 0x006EC5C1: mov dword ptr [edi + 0x10c], 0 */
    MEM32(edi + 0x108) = 0; /* 0x006EC5CB: mov dword ptr [edi + 0x108], 0 */
    goto L_006EC5DD; /* 0x006EC5D5: jmp 0x6ec5dd */
L_006EC5D7:
    ebx = MEM32(0x7CC44C); /* 0x006EC5D7: mov ebx, dword ptr [0x7cc44c] */
L_006EC5DD:
    PUSH32(esp, MEM32(edi + 0x120)); /* 0x006EC5DD: push dword ptr [edi + 0x120] */
    RECOMP_ICALL(ebx); /* 0x006EC5E3: call ebx */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x2A4); /* 0x006EC5E5: mov eax, dword ptr [edi + 0x2a4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC5EB: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x120) = 0; /* 0x006EC5EE: mov dword ptr [edi + 0x120], 0 */
    PUSH32(esp, edi); /* 0x006EC5F8: push edi */
    RECOMP_ICALL(eax); /* 0x006EC5F9: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC5FB: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x87CBCC) = 0; /* 0x006EC5FE: mov dword ptr [0x87cbcc], 0 */
L_006EC608:
    edi = POP32_VAL(esp); /* 0x006EC608: pop edi */
    esi = POP32_VAL(esp); /* 0x006EC609: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EC60A: pop ebx */
    esp = ebp; /* 0x006EC60B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EC60D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC60E: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC610u);

L_006EC610:
    PUSH32(esp, ecx); /* 0x006EC610: push ecx */
    ecx = MEM32(0x87CBCC); /* 0x006EC611: mov ecx, dword ptr [0x87cbcc] */
    /* test ecx, ecx */ /* 0x006EC617: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC62A; /* 0x006EC619: jne 0x6ec62a */
L_006EC61B:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EC61B: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EC620: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC625: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x006EC628: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC629: ret  */
L_006EC62A:
    eax = MEM32(ecx + 0x184); /* 0x006EC62A: mov eax, dword ptr [ecx + 0x184] */
    /* test eax, eax */ /* 0x006EC630: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EC64F; /* 0x006EC632: jle 0x6ec64f */
L_006EC634:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006EC634: dec eax */
    _flag_k = FK_DEC;
    MEM32(ecx + 0x184) = eax; /* 0x006EC635: mov dword ptr [ecx + 0x184], eax */
    /* test eax, eax */ /* 0x006EC63B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006EC64F; /* 0x006EC63D: jg 0x6ec64f */
L_006EC63F:
    eax = MEM32(ecx + 0xAC); /* 0x006EC63F: mov eax, dword ptr [ecx + 0xac] */
    /* test eax, eax */ /* 0x006EC645: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC64F; /* 0x006EC647: je 0x6ec64f */
L_006EC649:
    PUSH32(esp, ecx); /* 0x006EC649: push ecx */
    RECOMP_ICALL(eax); /* 0x006EC64A: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC64C: add esp, 4 */
    _flag_k = FK_ADD;
L_006EC64F:
    ecx = POP32_VAL(esp); /* 0x006EC64F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC650: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC660u);

L_006EC660:
    eax = MEM32(0x87CBCC); /* 0x006EC660: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006EC665: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC749; /* 0x006EC667: je 0x6ec749 */
L_006EC66D:
    MEM32(eax + 0x124) = 3; /* 0x006EC66D: mov dword ptr [eax + 0x124], 3 */
    MEM32(eax + 0x128) = 3; /* 0x006EC677: mov dword ptr [eax + 0x128], 3 */
    MEM32(eax + 0x12C) = 2; /* 0x006EC681: mov dword ptr [eax + 0x12c], 2 */
    MEM32(eax + 0x130) = 0; /* 0x006EC68B: mov dword ptr [eax + 0x130], 0 */
    MEM32(eax + 0x138) = 0; /* 0x006EC695: mov dword ptr [eax + 0x138], 0 */
    MEM32(eax + 0x134) = 0x10u; /* 0x006EC69F: mov dword ptr [eax + 0x134], 0x10 */
    MEM32(eax + 0x13C) = 0; /* 0x006EC6A9: mov dword ptr [eax + 0x13c], 0 */
    MEM32(eax + 0x140) = 1; /* 0x006EC6B3: mov dword ptr [eax + 0x140], 1 */
    MEM32(eax + 0x144) = 0; /* 0x006EC6BD: mov dword ptr [eax + 0x144], 0 */
    MEM32(eax + 0x148) = 0; /* 0x006EC6C7: mov dword ptr [eax + 0x148], 0 */
    MEM32(eax + 0x14C) = 0; /* 0x006EC6D1: mov dword ptr [eax + 0x14c], 0 */
    MEM32(eax + 0x150) = 0; /* 0x006EC6DB: mov dword ptr [eax + 0x150], 0 */
    MEM32(eax + 0x154) = 0; /* 0x006EC6E5: mov dword ptr [eax + 0x154], 0 */
    MEM32(eax + 0x158) = 0; /* 0x006EC6EF: mov dword ptr [eax + 0x158], 0 */
    MEM32(eax + 0x15C) = 0; /* 0x006EC6F9: mov dword ptr [eax + 0x15c], 0 */
    MEM32(eax + 0x180) = 1; /* 0x006EC703: mov dword ptr [eax + 0x180], 1 */
    MEM32(eax + 0x160) = 0xFFFFFFFFu; /* 0x006EC70D: mov dword ptr [eax + 0x160], 0xffffffff */
    MEM32(eax + 0x170) = 0; /* 0x006EC717: mov dword ptr [eax + 0x170], 0 */
    MEM32(eax + 0x16C) = 0; /* 0x006EC721: mov dword ptr [eax + 0x16c], 0 */
    MEM32(eax + 0x17C) = 0; /* 0x006EC72B: mov dword ptr [eax + 0x17c], 0 */
    MEM32(eax + 0x178) = 1; /* 0x006EC735: mov dword ptr [eax + 0x178], 1 */
    MEM32(eax + 0x174) = 0; /* 0x006EC73F: mov dword ptr [eax + 0x174], 0 */
L_006EC749:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC749: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC750u);

L_006EC750:
    PUSH32(esp, ecx); /* 0x006EC750: push ecx */
    PUSH32(esp, esi); /* 0x006EC751: push esi */
    esi = MEM32(0x87CBCC); /* 0x006EC752: mov esi, dword ptr [0x87cbcc] */
    PUSH32(esp, edi); /* 0x006EC758: push edi */
    edi = ecx; /* 0x006EC759: mov edi, ecx */
    /* test esi, esi */ /* 0x006EC75B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC78F; /* 0x006EC75D: jne 0x6ec78f */
L_006EC75F:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EC75F: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EC764: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC769: add esp, 4 */
    _flag_k = FK_ADD;
L_006EC76C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EC76C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EC76E:
    /* cmp edi, eax */ /* 0x006EC76E: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC7D0; /* 0x006EC770: jne 0x6ec7d0 */
L_006EC772:
    esi = MEM32(0x87CBCC); /* 0x006EC772: mov esi, dword ptr [0x87cbcc] */
    /* test esi, esi */ /* 0x006EC778: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC7AC; /* 0x006EC77A: jne 0x6ec7ac */
L_006EC77C:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EC77C: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EC781: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC786: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EC789: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EC78B: pop edi */
    esi = POP32_VAL(esp); /* 0x006EC78C: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EC78D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC78E: ret  */
L_006EC78F:
    esi = MEM32(esi + 0x294); /* 0x006EC78F: mov esi, dword ptr [esi + 0x294] */
    RECOMP_CALL(sub_006FEE70); /* 0x006EC795: call 0x6fee70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EC79A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC76C; /* 0x006EC79C: je 0x6ec76c */
L_006EC79E:
    /* test esi, esi */ /* 0x006EC79E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC76C; /* 0x006EC7A0: je 0x6ec76c */
L_006EC7A2:
    /* cmp esi, MEM32(eax) */ /* 0x006EC7A2: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_006EC76C; /* 0x006EC7A4: ja 0x6ec76c */
L_006EC7A6:
    eax = MEM32(eax + esi * 8 + (-0x4)); /* 0x006EC7A6: mov eax, dword ptr [eax + esi*8 - 4] */
    RECOMP_BACKEDGE();
    goto L_006EC76E; /* 0x006EC7AA: jmp 0x6ec76e */
L_006EC7AC:
    esi = MEM32(esi + 0x298); /* 0x006EC7AC: mov esi, dword ptr [esi + 0x298] */
    RECOMP_CALL(sub_006FEE70); /* 0x006EC7B2: call 0x6fee70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EC7B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC7CA; /* 0x006EC7B9: je 0x6ec7ca */
L_006EC7BB:
    /* test esi, esi */ /* 0x006EC7BB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC7CA; /* 0x006EC7BD: je 0x6ec7ca */
L_006EC7BF:
    /* cmp esi, MEM32(eax) */ /* 0x006EC7BF: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006EC7CA; /* 0x006EC7C1: ja 0x6ec7ca */
L_006EC7C3:
    /* cmp MEM32(eax + esi * 8 + (-0x4)), 0 */ /* 0x006EC7C3: cmp dword ptr [eax + esi*8 - 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + esi * 8 + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC7D0; /* 0x006EC7C8: jne 0x6ec7d0 */
L_006EC7CA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EC7CA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006EC7CC: pop edi */
    esi = POP32_VAL(esp); /* 0x006EC7CD: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EC7CE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC7CF: ret  */
L_006EC7D0:
    eax = MEM32(0x87CBCC); /* 0x006EC7D0: mov eax, dword ptr [0x87cbcc] */
    PUSH32(esp, 0); /* 0x006EC7D5: push 0 */
    PUSH32(esp, 0); /* 0x006EC7D7: push 0 */
    PUSH32(esp, eax); /* 0x006EC7D9: push eax */
    eax = MEM32(eax + 0xB4); /* 0x006EC7DA: mov eax, dword ptr [eax + 0xb4] */
    RECOMP_ICALL(eax); /* 0x006EC7E0: call eax */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006EC7E2: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EC7E4: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006EC7E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC825; /* 0x006EC7E9: jne 0x6ec825 */
L_006EC7EB:
    ecx = MEM32(0x87CBCC); /* 0x006EC7EB: mov ecx, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EC7F1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006EC7F3: push eax */
    MEM32(ecx + 0x28C) = eax; /* 0x006EC7F4: mov dword ptr [ecx + 0x28c], eax */
    MEM32(ecx + 0x290) = eax; /* 0x006EC7FA: mov dword ptr [ecx + 0x290], eax */
    ecx = MEM32(ecx + 0x294); /* 0x006EC800: mov ecx, dword ptr [ecx + 0x294] */
    RECOMP_CALL(sub_006EE080); /* 0x006EC806: call 0x6ee080 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x87CBCC); /* 0x006EC80B: mov ecx, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC811: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EC814: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ecx + 0x298); /* 0x006EC816: mov ecx, dword ptr [ecx + 0x298] */
    PUSH32(esp, esi); /* 0x006EC81C: push esi */
    RECOMP_CALL(sub_006EE080); /* 0x006EC81D: call 0x6ee080 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC822: add esp, 4 */
    _flag_k = FK_ADD;
L_006EC825:
    edi = POP32_VAL(esp); /* 0x006EC825: pop edi */
    eax = esi; /* 0x006EC826: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006EC828: pop esi */
    ecx = POP32_VAL(esp); /* 0x006EC829: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC82A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC830u);

L_006EC830:
    PUSH32(esp, esi); /* 0x006EC830: push esi */
    esi = MEM32(0x87CBCC); /* 0x006EC831: mov esi, dword ptr [0x87cbcc] */
    /* test esi, esi */ /* 0x006EC837: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC84C; /* 0x006EC839: jne 0x6ec84c */
L_006EC83B:
    PUSH32(esp, 0x00803F6Cu); /* 0x006EC83B: push 0x803f6c */
    RECOMP_CALL(sub_006EDB70); /* 0x006EC840: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC845: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EC848: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EC84A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC84B: ret  */
L_006EC84C:
    /* test ecx, ecx */ /* 0x006EC84C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC8A0; /* 0x006EC84E: je 0x6ec8a0 */
L_006EC850:
    eax = esi + 0x118; /* 0x006EC850: lea eax, [esi + 0x118] */
    /* cmp MEM32(ecx), eax */ /* 0x006EC856: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EC8A0; /* 0x006EC858: jne 0x6ec8a0 */
L_006EC85A:
    /* test edx, edx */ /* 0x006EC85A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC874; /* 0x006EC85C: jne 0x6ec874 */
L_006EC85E:
    PUSH32(esp, 0x00804184u); /* 0x006EC85E: push 0x804184 */
    PUSH32(esp, 0x00803FE8u); /* 0x006EC863: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EC868: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EC86D: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EC870: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EC872: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC873: ret  */
L_006EC874:
    MEM32(edx + 0x4) = 0; /* 0x006EC874: mov dword ptr [edx + 4], 0 */
    eax = MEM32(esi + 0xA0); /* 0x006EC87B: mov eax, dword ptr [esi + 0xa0] */
    /* test eax, eax */ /* 0x006EC881: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC896; /* 0x006EC883: jne 0x6ec896 */
L_006EC885:
    PUSH32(esp, 0x00804310u); /* 0x006EC885: push 0x804310 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EC88A: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC88F: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EC892: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EC894: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC895: ret  */
L_006EC896:
    PUSH32(esp, edx); /* 0x006EC896: push edx */
    PUSH32(esp, ecx); /* 0x006EC897: push ecx */
    PUSH32(esp, esi); /* 0x006EC898: push esi */
    RECOMP_ICALL(eax); /* 0x006EC899: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EC89B: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006EC89E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC89F: ret  */
L_006EC8A0:
    PUSH32(esp, 0x00804020u); /* 0x006EC8A0: push 0x804020 */
    RECOMP_CALL(sub_006EDB70); /* 0x006EC8A5: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC8AA: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EC8AD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006EC8AF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC8B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC8C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC8C0u);

L_006EC8C0:
    eax = MEM32(0x92547C); /* 0x006EC8C0: mov eax, dword ptr [0x92547c] */
    /* test eax, eax */ /* 0x006EC8C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC8E1; /* 0x006EC8C7: je 0x6ec8e1 */
L_006EC8C9:
    ecx = MEM32(eax); /* 0x006EC8C9: mov ecx, dword ptr [eax] */
    /* test LO8(ecx), 8 */ /* 0x006EC8CB: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC8D5; /* 0x006EC8CE: je 0x6ec8d5 */
L_006EC8D0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF7u);
    ecx = ecx & 0xFFFFFFF7u; /* 0x006EC8D0: and ecx, 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x006EC8D3: mov dword ptr [eax], ecx */
L_006EC8D5:
    ecx = MEM32(eax); /* 0x006EC8D5: mov ecx, dword ptr [eax] */
    /* test LO8(ecx), 4 */ /* 0x006EC8D7: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC8E1; /* 0x006EC8DA: je 0x6ec8e1 */
L_006EC8DC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFBu);
    ecx = ecx & 0xFFFFFFFBu; /* 0x006EC8DC: and ecx, 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x006EC8DF: mov dword ptr [eax], ecx */
L_006EC8E1:
    ecx = MEM32(0x87CBCC); /* 0x006EC8E1: mov ecx, dword ptr [0x87cbcc] */
    /* test ecx, ecx */ /* 0x006EC8E7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC933; /* 0x006EC8E9: je 0x6ec933 */
L_006EC8EB:
    eax = MEM32(ecx + 0x110); /* 0x006EC8EB: mov eax, dword ptr [ecx + 0x110] */
    /* test eax, eax */ /* 0x006EC8F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC921; /* 0x006EC8F3: je 0x6ec921 */
L_006EC8F5:
    /* test MEM32(eax + 0x30), 0x200u */ /* 0x006EC8F5: test dword ptr [eax + 0x30], 0x200 */
    _flag_a = (uint32_t)(MEM32(eax + 0x30)); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC90A; /* 0x006EC8FC: jne 0x6ec90a */
L_006EC8FE:
    eax = MEM32(eax + 0x98); /* 0x006EC8FE: mov eax, dword ptr [eax + 0x98] */
    /* test eax, eax */ /* 0x006EC904: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC8F5; /* 0x006EC906: jne 0x6ec8f5 */
L_006EC908:
    goto L_006EC921; /* 0x006EC908: jmp 0x6ec921 */
L_006EC90A:
    edx = MEM32(ecx + 0xE4); /* 0x006EC90A: mov edx, dword ptr [ecx + 0xe4] */
    /* test edx, edx */ /* 0x006EC910: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC921; /* 0x006EC912: je 0x6ec921 */
L_006EC914:
    PUSH32(esp, eax); /* 0x006EC914: push eax */
    PUSH32(esp, ecx); /* 0x006EC915: push ecx */
    RECOMP_ICALL(edx); /* 0x006EC916: call edx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x87CBCC); /* 0x006EC918: mov ecx, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EC91E: add esp, 8 */
    _flag_k = FK_ADD;
L_006EC921:
    /* test ecx, ecx */ /* 0x006EC921: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC933; /* 0x006EC923: je 0x6ec933 */
L_006EC925:
    eax = MEM32(ecx + 0xD4); /* 0x006EC925: mov eax, dword ptr [ecx + 0xd4] */
    /* test eax, eax */ /* 0x006EC92B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC933; /* 0x006EC92D: je 0x6ec933 */
L_006EC92F:
    PUSH32(esp, ecx); /* 0x006EC92F: push ecx */
    RECOMP_ICALL(eax); /* 0x006EC930: call eax */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x006EC932: pop ecx */
L_006EC933:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC933: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC940u);

L_006EC940:
    ecx = MEM32(0x87CBCC); /* 0x006EC940: mov ecx, dword ptr [0x87cbcc] */
    /* test ecx, ecx */ /* 0x006EC946: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC996; /* 0x006EC948: je 0x6ec996 */
L_006EC94A:
    eax = MEM32(ecx + 0xD8); /* 0x006EC94A: mov eax, dword ptr [ecx + 0xd8] */
    /* test eax, eax */ /* 0x006EC950: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC960; /* 0x006EC952: je 0x6ec960 */
L_006EC954:
    PUSH32(esp, ecx); /* 0x006EC954: push ecx */
    RECOMP_ICALL(eax); /* 0x006EC955: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x87CBCC); /* 0x006EC957: mov ecx, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EC95D: add esp, 4 */
    _flag_k = FK_ADD;
L_006EC960:
    /* test ecx, ecx */ /* 0x006EC960: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC996; /* 0x006EC962: je 0x6ec996 */
L_006EC964:
    eax = MEM32(ecx + 0x110); /* 0x006EC964: mov eax, dword ptr [ecx + 0x110] */
    /* test eax, eax */ /* 0x006EC96A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC996; /* 0x006EC96C: je 0x6ec996 */
L_006EC96E:
    edi = edi; /* 0x006EC96E: mov edi, edi */
L_006EC970:
    /* test MEM32(eax + 0x30), 0x200u */ /* 0x006EC970: test dword ptr [eax + 0x30], 0x200 */
    _flag_a = (uint32_t)(MEM32(eax + 0x30)); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC985; /* 0x006EC977: jne 0x6ec985 */
L_006EC979:
    eax = MEM32(eax + 0x98); /* 0x006EC979: mov eax, dword ptr [eax + 0x98] */
    /* test eax, eax */ /* 0x006EC97F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC970; /* 0x006EC981: jne 0x6ec970 */
L_006EC983:
    goto L_006EC996; /* 0x006EC983: jmp 0x6ec996 */
L_006EC985:
    edx = MEM32(ecx + 0xE8); /* 0x006EC985: mov edx, dword ptr [ecx + 0xe8] */
    /* test edx, edx */ /* 0x006EC98B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC996; /* 0x006EC98D: je 0x6ec996 */
L_006EC98F:
    PUSH32(esp, eax); /* 0x006EC98F: push eax */
    PUSH32(esp, ecx); /* 0x006EC990: push ecx */
    RECOMP_ICALL(edx); /* 0x006EC991: call edx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006EC993: add esp, 8 */
    _flag_k = FK_ADD;
L_006EC996:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EC996: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x303u; /* 0x006EC998: mov ecx, 0x303 */
    RECOMP_CALL(sub_006ED490); /* 0x006EC99D: call 0x6ed490 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EC9A2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x302u; /* 0x006EC9A4: mov ecx, 0x302 */
    goto L_006ED490; /* 0x006EC9A9: jmp 0x6ed490 */
L_006ED490:
    PUSH32(esp, ebp); /* 0x006ED490: push ebp */
    ebp = esp; /* 0x006ED491: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006ED493: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006ED496: push ebx */
    PUSH32(esp, esi); /* 0x006ED497: push esi */
    esi = edx; /* 0x006ED498: mov esi, edx */
    edx = ecx; /* 0x006ED49A: mov edx, ecx */
    eax = edx; /* 0x006ED49C: mov eax, edx */
    MEM32(ebp + (-0x8)) = edx; /* 0x006ED49E: mov dword ptr [ebp - 8], edx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x006ED4A1: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x006ED4A1: shr eax, 8 */
    ebx = (uint32_t)LO8(eax); /* 0x006ED4A4: movzx ebx, al */
    PUSH32(esp, edi); /* 0x006ED4A7: push edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x006ED4A8: mov dword ptr [ebp - 4], ebx */
    edi = 1; /* 0x006ED4AB: mov edi, 1 */
    ecx = MEM32(ebx * 4 + 0x925470); /* 0x006ED4B0: mov ecx, dword ptr [ebx*4 + 0x925470] */
    /* test ecx, ecx */ /* 0x006ED4B7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED4DA; /* 0x006ED4B9: je 0x6ed4da */
L_006ED4BB:
    edx = (uint32_t)LO8(edx); /* 0x006ED4BB: movzx edx, dl */
    eax = edi; /* 0x006ED4BE: mov eax, edi */
    ecx = edx; /* 0x006ED4C0: mov ecx, edx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x006ED4C2: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x006ED4C2: shr edx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x006ED4C5: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006ED4C8: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x006ED4C8: shl eax, cl */
    ecx = MEM32(ebx * 4 + 0x925470); /* 0x006ED4CA: mov ecx, dword ptr [ebx*4 + 0x925470] */
    /* test MEM32(ecx + edx * 4), eax */ /* 0x006ED4D1: test dword ptr [ecx + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + edx * 4)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED4DA; /* 0x006ED4D4: je 0x6ed4da */
L_006ED4D6:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x006ED4D6: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_006ED4DC; /* 0x006ED4D8: jmp 0x6ed4dc */
L_006ED4DA:
    SET_LO8(ebx, 1); /* 0x006ED4DA: mov bl, 1 */
L_006ED4DC:
    eax = (uint32_t)LO8(ebx); /* 0x006ED4DC: movzx eax, bl */
    /* cmp esi, eax */ /* 0x006ED4DF: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED562; /* 0x006ED4E1: je 0x6ed562 */
L_006ED4E3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0; /* 0x006ED4E3: sub esi, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006ED513; /* 0x006ED4E6: je 0x6ed513 */
L_006ED4E8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006ED4E8: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006ED562; /* 0x006ED4E9: jne 0x6ed562 */
L_006ED4EB:
    eax = MEM32(ebp + (-0x8)); /* 0x006ED4EB: mov eax, dword ptr [ebp - 8] */
    esi = MEM32(ebp + (-0x4)); /* 0x006ED4EE: mov esi, dword ptr [ebp - 4] */
    ecx = (uint32_t)LO8(eax); /* 0x006ED4F1: movzx ecx, al */
    edx = ecx; /* 0x006ED4F4: mov edx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x006ED4F6: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006ED4F9: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x006ED4F9: shl edi, cl */
    eax = MEM32(esi * 4 + 0x925470); /* 0x006ED4FB: mov eax, dword ptr [esi*4 + 0x925470] */
    edi = ~edi; /* 0x006ED502: not edi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x006ED504: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x006ED504: shr edx, 5 */
    _flag_a = (uint32_t)(MEM32(eax + edx * 4)); _flag_b = (uint32_t)(edi);
    MEM32(eax + edx * 4) = MEM32(eax + edx * 4) & edi; /* 0x006ED507: and dword ptr [eax + edx*4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, LO8(ebx)); /* 0x006ED50A: mov al, bl */
    edi = POP32_VAL(esp); /* 0x006ED50C: pop edi */
    esi = POP32_VAL(esp); /* 0x006ED50D: pop esi */
    ebx = POP32_VAL(esp); /* 0x006ED50E: pop ebx */
    esp = ebp; /* 0x006ED50F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED511: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED512: ret  */
L_006ED513:
    /* test ecx, ecx */ /* 0x006ED513: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED53B; /* 0x006ED515: jne 0x6ed53b */
L_006ED517:
    PUSH32(esp, 0x20u); /* 0x006ED517: push 0x20 */
    PUSH32(esp, 1); /* 0x006ED519: push 1 */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x006ED51B: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x006ED521: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006ED524: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(esi * 4 + 0x925470) = eax; /* 0x006ED527: mov dword ptr [esi*4 + 0x925470], eax */
    /* test eax, eax */ /* 0x006ED52E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED53E; /* 0x006ED530: jne 0x6ed53e */
L_006ED532:
    edi = POP32_VAL(esp); /* 0x006ED532: pop edi */
    esi = POP32_VAL(esp); /* 0x006ED533: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x006ED534: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x006ED536: pop ebx */
    esp = ebp; /* 0x006ED537: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED539: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED53A: ret  */
L_006ED53B:
    esi = MEM32(ebp + (-0x4)); /* 0x006ED53B: mov esi, dword ptr [ebp - 4] */
L_006ED53E:
    eax = MEM32(ebp + (-0x8)); /* 0x006ED53E: mov eax, dword ptr [ebp - 8] */
    ecx = (uint32_t)LO8(eax); /* 0x006ED541: movzx ecx, al */
    eax = MEM32(esi * 4 + 0x925470); /* 0x006ED544: mov eax, dword ptr [esi*4 + 0x925470] */
    edx = ecx; /* 0x006ED54B: mov edx, ecx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x006ED54D: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x006ED54D: shr edx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x006ED550: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006ED553: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x006ED553: shl edi, cl */
    _flag_a = (uint32_t)((MEM32(eax + edx * 4) | edi)); _flag_b = (uint32_t)((MEM32(eax + edx * 4) | edi));
    MEM32(eax + edx * 4) = MEM32(eax + edx * 4) | edi; /* 0x006ED555: or dword ptr [eax + edx*4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x8)); /* 0x006ED558: mov edx, dword ptr [ebp - 8] */
    ecx = edx; /* 0x006ED55B: mov ecx, edx */
    RECOMP_CALL(sub_006ED1A0); /* 0x006ED55D: call 0x6ed1a0 */
    RECOMP_FLAGS_IN();
L_006ED562:
    edi = POP32_VAL(esp); /* 0x006ED562: pop edi */
    esi = POP32_VAL(esp); /* 0x006ED563: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x006ED564: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x006ED566: pop ebx */
    esp = ebp; /* 0x006ED567: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED569: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED56A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC9B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC9B0u);

L_006EC9B0:
    PUSH32(esp, ebp); /* 0x006EC9B0: push ebp */
    ebp = esp; /* 0x006EC9B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006EC9B3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ecx + 0x4); /* 0x006EC9B6: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006EC9B9: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x006EC9BC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EC9C9; /* 0x006EC9BE: jne 0x6ec9c9 */
L_006EC9C0:
    eax = 1; /* 0x006EC9C0: mov eax, 1 */
    esp = ebp; /* 0x006EC9C5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EC9C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC9C8: ret  */
L_006EC9C9:
    edx = esp; /* 0x006EC9C9: lea edx, [esp] */
    MEM16(esp) = (uint16_t)(2); /* 0x006EC9CC: mov word ptr [esp], 2 */
    MEM8(esp + 0x2) = (uint8_t)(5); /* 0x006EC9D2: mov byte ptr [esp + 2], 5 */
    RECOMP_CALL(sub_006EC830); /* 0x006EC9D7: call 0x6ec830 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006EC9DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EC9C0; /* 0x006EC9DE: je 0x6ec9c0 */
L_006EC9E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006EC9E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esp + 0x4), 1 */ /* 0x006EC9E2: cmp dword ptr [esp + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006EC9E7: sete al */
    esp = ebp; /* 0x006EC9EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EC9EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EC9ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EC9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EC9F0u);

L_006EC9F0:
    PUSH32(esp, ebp); /* 0x006EC9F0: push ebp */
    ebp = esp; /* 0x006EC9F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x006EC9F3: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x006EC9F6: mov eax, ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x006EC9F8: mov dword ptr [ebp - 0x10], edx */
    MEM32(ebp + (-0x4)) = eax; /* 0x006EC9FB: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = 0xFFFFFFFFu; /* 0x006EC9FE: mov dword ptr [ebp - 8], 0xffffffff */
    PUSH32(esp, esi); /* 0x006ECA05: push esi */
    PUSH32(esp, edi); /* 0x006ECA06: push edi */
    /* test eax, eax */ /* 0x006ECA07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ECA23; /* 0x006ECA09: jne 0x6eca23 */
L_006ECA0B:
    PUSH32(esp, 0x00804174u); /* 0x006ECA0B: push 0x804174 */
    PUSH32(esp, 0x00803FE8u); /* 0x006ECA10: push 0x803fe8 */
    RECOMP_CALL(sub_006EDB70); /* 0x006ECA15: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006ECA1A: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006ECA1D: pop edi */
    esi = POP32_VAL(esp); /* 0x006ECA1E: pop esi */
    esp = ebp; /* 0x006ECA1F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ECA21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ECA22: ret  */
L_006ECA23:
    esi = MEM32(0x925FD0); /* 0x006ECA23: mov esi, dword ptr [0x925fd0] */
    MEM32(ebp + (-0x14)) = esi; /* 0x006ECA29: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x006ECA2C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECA4B; /* 0x006ECA2E: je 0x6eca4b */
L_006ECA30:
    ecx = esi; /* 0x006ECA30: mov ecx, esi */
    RECOMP_CALL(sub_006EB810); /* 0x006ECA32: call 0x6eb810 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x925FD0); /* 0x006ECA37: mov esi, dword ptr [0x925fd0] */
    MEM32(ebp + (-0xC)) = 1; /* 0x006ECA3D: mov dword ptr [ebp - 0xc], 1 */
    /* test eax, 0x4000u */ /* 0x006ECA44: test eax, 0x4000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ECA52; /* 0x006ECA49: jne 0x6eca52 */
L_006ECA4B:
    MEM32(ebp + (-0xC)) = 0; /* 0x006ECA4B: mov dword ptr [ebp - 0xc], 0 */
L_006ECA52:
    eax = MEM32(0x926A2C); /* 0x006ECA52: mov eax, dword ptr [0x926a2c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x006ECA57: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(0x926A00); /* 0x006ECA5A: mov eax, dword ptr [0x926a00] */
    /* test eax, eax */ /* 0x006ECA5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ECA72; /* 0x006ECA61: jne 0x6eca72 */
L_006ECA63:
    PUSH32(esp, 0x00804310u); /* 0x006ECA63: push 0x804310 */
    RECOMP_CALL(sub_006EDB70); /* 0x006ECA68: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ECA6D: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_006ECA92; /* 0x006ECA70: jmp 0x6eca92 */
L_006ECA72:
    /* test esi, esi */ /* 0x006ECA72: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECA92; /* 0x006ECA74: je 0x6eca92 */
L_006ECA76:
    /* test MEM32(esi + 0x30), 0x4000u */ /* 0x006ECA76: test dword ptr [esi + 0x30], 0x4000 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECA92; /* 0x006ECA7D: je 0x6eca92 */
L_006ECA7F:
    PUSH32(esp, 0); /* 0x006ECA7F: push 0 */
    RECOMP_ICALL(eax); /* 0x006ECA81: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ECA83: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006ECA86: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ECA92; /* 0x006ECA89: je 0x6eca92 */
L_006ECA8B:
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0xFFFFBFFFu);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0xFFFFBFFFu; /* 0x006ECA8B: and dword ptr [esi + 0x30], 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
L_006ECA92:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006ECA92: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006F1290); /* 0x006ECA94: call 0x6f1290 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x926A48); /* 0x006ECA99: mov esi, dword ptr [0x926a48] */
    MEM32(0x926A48) = 1; /* 0x006ECA9F: mov dword ptr [0x926a48], 1 */
    /* cmp esi, 1 */ /* 0x006ECAA9: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ECAB5; /* 0x006ECAAC: je 0x6ecab5 */
L_006ECAAE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006ECAAE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006F1470); /* 0x006ECAB0: call 0x6f1470 */
    RECOMP_FLAGS_IN();
L_006ECAB5:
    RECOMP_CALL(sub_006EFB60); /* 0x006ECAB5: call 0x6efb60 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x006ECABA: mov eax, dword ptr [ebp - 0x10] */
    edi = ebp + (-0x1C); /* 0x006ECABD: lea edi, [ebp - 0x1c] */
    /* test eax, eax */ /* 0x006ECAC0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { edi = eax; } /* 0x006ECAC2: cmovne edi, eax */
    eax = MEM32(0x87CBCC); /* 0x006ECAC5: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006ECACA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECAEA; /* 0x006ECACC: je 0x6ecaea */
L_006ECACE:
    ecx = MEM32(eax + 0xFC); /* 0x006ECACE: mov ecx, dword ptr [eax + 0xfc] */
    /* test ecx, ecx */ /* 0x006ECAD4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECAEA; /* 0x006ECAD6: je 0x6ecaea */
L_006ECAD8:
    PUSH32(esp, edi); /* 0x006ECAD8: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006ECAD9: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x006ECADC: push eax */
    RECOMP_ICALL(ecx); /* 0x006ECADD: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006ECADF: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x006ECAE2: mov dword ptr [ebp - 8], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006ECAE5: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006ECB15; /* 0x006ECAE8: jne 0x6ecb15 */
L_006ECAEA:
    ecx = MEM32(ebp + (-0x4)); /* 0x006ECAEA: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_006EC9B0); /* 0x006ECAED: call 0x6ec9b0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006ECAF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECB08; /* 0x006ECAF4: je 0x6ecb08 */
L_006ECAF6:
    ecx = MEM32(ebp + (-0x4)); /* 0x006ECAF6: mov ecx, dword ptr [ebp - 4] */
    edx = edi; /* 0x006ECAF9: mov edx, edi */
    RECOMP_CALL(sub_006FB990); /* 0x006ECAFB: call 0x6fb990 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006ECB00: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ECB08; /* 0x006ECB02: jne 0x6ecb08 */
L_006ECB04:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006ECB04: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006ECB18; /* 0x006ECB06: jmp 0x6ecb18 */
L_006ECB08:
    PUSH32(esp, 0x00804218u); /* 0x006ECB08: push 0x804218 */
    RECOMP_CALL(sub_006EDB70); /* 0x006ECB0D: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ECB12: add esp, 4 */
    _flag_k = FK_ADD;
L_006ECB15:
    edi = MEM32(ebp + (-0x8)); /* 0x006ECB15: mov edi, dword ptr [ebp - 8] */
L_006ECB18:
    eax = MEM32(ebp + (-0x14)); /* 0x006ECB18: mov eax, dword ptr [ebp - 0x14] */
    /* test eax, eax */ /* 0x006ECB1B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECB36; /* 0x006ECB1D: je 0x6ecb36 */
L_006ECB1F:
    ecx = eax; /* 0x006ECB1F: mov ecx, eax */
    RECOMP_CALL(sub_006EBDA0); /* 0x006ECB21: call 0x6ebda0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x006ECB26: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ECB36; /* 0x006ECB2A: je 0x6ecb36 */
L_006ECB2C:
    ecx = 1; /* 0x006ECB2C: mov ecx, 1 */
    RECOMP_CALL(sub_006F13E0); /* 0x006ECB31: call 0x6f13e0 */
    RECOMP_FLAGS_IN();
L_006ECB36:
    edx = MEM32(0x926A48); /* 0x006ECB36: mov edx, dword ptr [0x926a48] */
    /* test esi, esi */ /* 0x006ECB3C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006ECB57; /* 0x006ECB3E: js 0x6ecb57 */
L_006ECB40:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006ECB40: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x006ECB42: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006ECB44: setne al */
    MEM32(0x926A48) = eax; /* 0x006ECB47: mov dword ptr [0x926a48], eax */
    /* cmp eax, edx */ /* 0x006ECB4C: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ECB57; /* 0x006ECB4E: je 0x6ecb57 */
L_006ECB50:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006ECB50: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006F1470); /* 0x006ECB52: call 0x6f1470 */
    RECOMP_FLAGS_IN();
L_006ECB57:
    ecx = MEM32(ebp + (-0x18)); /* 0x006ECB57: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_006F1290); /* 0x006ECB5A: call 0x6f1290 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x006ECB5F: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x006ECB61: pop edi */
    esi = POP32_VAL(esp); /* 0x006ECB62: pop esi */
    esp = ebp; /* 0x006ECB63: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ECB65: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ECB66: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ECB70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ECB70u);

L_006ECB70:
    PUSH32(esp, ebp); /* 0x006ECB70: push ebp */
    ebp = esp; /* 0x006ECB71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x006ECB73: sub esp, 0x28 */
    _flag_k = FK_CMP;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006ECB76: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x006ECB79: mov dword ptr [ebp - 4], 0 */
    xmm_st(ebp + (-0x28), _xmm[0]); /* 0x006ECB80: movdqu xmmword ptr [ebp - 0x28], xmm0 */
    eax = ebp + (-0xC); /* 0x006ECB85: lea eax, [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006ECB88: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM64(ebp + (-0x18)) = _xmm[0].u64[0]; /* 0x006ECB8A: movq qword ptr [ebp - 0x18], xmm0 */
    ecx = ebp + (-0x28); /* 0x006ECB8F: lea ecx, [ebp - 0x28] */
    MEM64(ebp + (-0xC)) = _xmm[0].u64[0]; /* 0x006ECB92: movq qword ptr [ebp - 0xc], xmm0 */
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC)) | 3)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC)) | 3));
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) | 3; /* 0x006ECB97: or dword ptr [ebp - 0xc], 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = 0; /* 0x006ECB9B: mov dword ptr [ebp - 0x10], 0 */
    MEM32(ebp + (-0x28)) = 0x10u; /* 0x006ECBA2: mov dword ptr [ebp - 0x28], 0x10 */
    MEM32(ebp + (-0x20)) = 0x007ED244u; /* 0x006ECBA9: mov dword ptr [ebp - 0x20], 0x7ed244 */
    MEM32(ebp + (-0x1C)) = 0x007FC1ECu; /* 0x006ECBB0: mov dword ptr [ebp - 0x1c], 0x7fc1ec */
    MEM32(ebp + (-0x18)) = 1; /* 0x006ECBB7: mov dword ptr [ebp - 0x18], 1 */
    MEM32(ebp + (-0x14)) = eax; /* 0x006ECBBE: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x24)) = 0; /* 0x006ECBC1: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x4)) = 0x007E74C8u; /* 0x006ECBC8: mov dword ptr [ebp - 4], 0x7e74c8 */
    RECOMP_CALL(sub_006EC9F0); /* 0x006ECBCF: call 0x6ec9f0 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006ECBD4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ECBD6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ECBD7: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ECBE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ECBE0u);

L_006ECBE0:
    PUSH32(esp, ebp); /* 0x006ECBE0: push ebp */
    ebp = esp; /* 0x006ECBE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFC0u);
    esp = esp & 0xFFFFFFC0u; /* 0x006ECBE3: and esp, 0xffffffc0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x006ECBE6: sub esp, 0x40 */
    _flag_k = FK_CMP;
    _xmm[0] = _xmm[2]; /* 0x006ECBE9: movaps xmm0, xmm2 */
    { float _s = _xmm[3].f32[0]; _xmm[3].f32[0] = (float)(_xmm[3].f32[0] * _s); } /* 0x006ECBEC: mulss xmm3, xmm3 */
    { float _s = _xmm[0].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006ECBF0: mulss xmm0, xmm0 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x006ECBF4: xorps xmm1, xmm1 */
    { float _s = _xmm[3].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x006ECBF7: addss xmm0, xmm3 */
    _flag_a = SSE_COMI(_xmm[1].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x006ECBFB: comiss xmm1, xmm0 */
    _flag_k = FK_EFLAGS;
    MEM32(esp + 0x34) = _xmm[0].u32[0]; /* 0x006ECBFE: movss dword ptr [esp + 0x34], xmm0 */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_006ECC0D; /* 0x006ECC04: jb 0x6ecc0d */
L_006ECC06:
    _xmm[0] = _xmm[1]; /* 0x006ECC06: movaps xmm0, xmm1 */
    esp = ebp; /* 0x006ECC09: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ECC0B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ECC0C: ret  */
L_006ECC0D:
    _xmm[1].u64[0] = (uint32_t)(ecx); _xmm[1].u64[1] = 0; /* 0x006ECC0D: movd xmm1, ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006ECC11: sub esp, 8 */
    _flag_k = FK_CMP;
    _xmm[0].u64[0] = (uint32_t)(edx); _xmm[0].u64[1] = 0; /* 0x006ECC14: movd xmm0, edx */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006ECC18: cvtdq2pd xmm0, xmm0 */
    { int32_t _a = (int32_t)_xmm[1].u32[0], _b = (int32_t)_xmm[1].u32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x006ECC1C: cvtdq2pd xmm1, xmm1 */
    { double _s = _xmm[0].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] * _s); } /* 0x006ECC20: mulsd xmm0, xmm0 */
    { double _s = _xmm[1].f64[0]; _xmm[1].f64[0] = (double)(_xmm[1].f64[0] * _s); } /* 0x006ECC24: mulsd xmm1, xmm1 */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006ECC28: addsd xmm0, xmm1 */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006ECC2C: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F3C0); /* 0x006ECC31: call 0x77f3c0 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(esp + 0x3C); _xmm[0].u64[1] = 0; /* 0x006ECC36: movss xmm0, dword ptr [esp + 0x3c] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006ECC3C: cvtps2pd xmm0, xmm0 */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x40) = _v; } /* 0x006ECC3F: fstp qword ptr [esp + 0x40] */
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006ECC43: movsd qword ptr [esp], xmm0 */
    RECOMP_CALL(sub_0077F3C0); /* 0x006ECC48: call 0x77f3c0 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(esp + 0x40) / _st[0]; /* 0x006ECC4D: fdivr qword ptr [esp + 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006ECC51: add esp, 8 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x34) = _v; } /* 0x006ECC54: fstp dword ptr [esp + 0x34] */
    fp_push(*(float*)&MEM32(esp + 0x34)); /* 0x006ECC58: fld dword ptr [esp + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x34) = _v; } /* 0x006ECC5C: fstp dword ptr [esp + 0x34] */
    _xmm[0].u64[0] = MEM32(esp + 0x34); _xmm[0].u64[1] = 0; /* 0x006ECC60: movss xmm0, dword ptr [esp + 0x34] */
    esp = ebp; /* 0x006ECC66: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ECC68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ECC69: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ECC70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ECC70u);

L_006ECC70:
    PUSH32(esp, ecx); /* 0x006ECC70: push ecx */
    PUSH32(esp, esi); /* 0x006ECC71: push esi */
    PUSH32(esp, edi); /* 0x006ECC72: push edi */
    ecx = 0x008042A8u; /* 0x006ECC73: mov ecx, 0x8042a8 */
    RECOMP_CALL(sub_006F5A00); /* 0x006ECC78: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006ECC7D: mov esi, eax */
    eax = MEM32(0x862908); /* 0x006ECC7F: mov eax, dword ptr [0x862908] */
    /* test eax, eax */ /* 0x006ECC84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECC8F; /* 0x006ECC86: je 0x6ecc8f */
L_006ECC88:
    PUSH32(esp, eax); /* 0x006ECC88: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x006ECC89: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_006ECC8F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006ECC8F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x0086290Cu; /* 0x006ECC91: mov eax, 0x86290c */
    { uint32_t _tmp = MEM32(eax); /* 0x006ECC96: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    /* test esi, esi */ /* 0x006ECC98: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECCBD; /* 0x006ECC9A: je 0x6eccbd */
L_006ECC9C:
    PUSH32(esp, esi); /* 0x006ECC9C: push esi */
    RECOMP_ICALL(MEM32(0x7CC6B0)); /* 0x006ECC9D: call dword ptr [0x7cc6b0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ECCA3: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006ECCA6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECCBD; /* 0x006ECCA8: je 0x6eccbd */
L_006ECCAA:
    PUSH32(esp, MEM32(0x862914)); /* 0x006ECCAA: push dword ptr [0x862914] */
    PUSH32(esp, 0x00804278u); /* 0x006ECCB0: push 0x804278 */
    RECOMP_CALL(sub_006FD000); /* 0x006ECCB5: call 0x6fd000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006ECCBA: add esp, 8 */
    _flag_k = FK_ADD;
L_006ECCBD:
    eax = MEM32(0x862918); /* 0x006ECCBD: mov eax, dword ptr [0x862918] */
    edi = MEM32(0x7CC44C); /* 0x006ECCC2: mov edi, dword ptr [0x7cc44c] */
    /* test eax, eax */ /* 0x006ECCC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECCDF; /* 0x006ECCCA: je 0x6eccdf */
L_006ECCCC:
    esp = esp; /* 0x006ECCCC: lea esp, [esp] */
L_006ECCD0:
    esi = MEM32(eax + 0x54); /* 0x006ECCD0: mov esi, dword ptr [eax + 0x54] */
    PUSH32(esp, eax); /* 0x006ECCD3: push eax */
    RECOMP_ICALL(edi); /* 0x006ECCD4: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ECCD6: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006ECCD9: mov eax, esi */
    /* test esi, esi */ /* 0x006ECCDB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ECCD0; /* 0x006ECCDD: jne 0x6eccd0 */
L_006ECCDF:
    eax = MEM32(0x862920); /* 0x006ECCDF: mov eax, dword ptr [0x862920] */
    /* test eax, eax */ /* 0x006ECCE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECCF7; /* 0x006ECCE6: je 0x6eccf7 */
L_006ECCE8:
    esi = MEM32(eax + 0x54); /* 0x006ECCE8: mov esi, dword ptr [eax + 0x54] */
    PUSH32(esp, eax); /* 0x006ECCEB: push eax */
    RECOMP_ICALL(edi); /* 0x006ECCEC: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ECCEE: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006ECCF1: mov eax, esi */
    /* test esi, esi */ /* 0x006ECCF3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ECCE8; /* 0x006ECCF5: jne 0x6ecce8 */
L_006ECCF7:
    eax = MEM32(0x862924); /* 0x006ECCF7: mov eax, dword ptr [0x862924] */
    /* test eax, eax */ /* 0x006ECCFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECD0F; /* 0x006ECCFE: je 0x6ecd0f */
L_006ECD00:
    esi = MEM32(eax + 0x18); /* 0x006ECD00: mov esi, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x006ECD03: push eax */
    RECOMP_ICALL(edi); /* 0x006ECD04: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ECD06: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006ECD09: mov eax, esi */
    /* test esi, esi */ /* 0x006ECD0B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ECD00; /* 0x006ECD0D: jne 0x6ecd00 */
L_006ECD0F:
    eax = MEM32(0x862928); /* 0x006ECD0F: mov eax, dword ptr [0x862928] */
    /* test eax, eax */ /* 0x006ECD14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECD27; /* 0x006ECD16: je 0x6ecd27 */
L_006ECD18:
    esi = MEM32(eax + 0x18); /* 0x006ECD18: mov esi, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x006ECD1B: push eax */
    RECOMP_ICALL(edi); /* 0x006ECD1C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ECD1E: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006ECD21: mov eax, esi */
    /* test esi, esi */ /* 0x006ECD23: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ECD18; /* 0x006ECD25: jne 0x6ecd18 */
L_006ECD27:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006ECD27: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x00862910u; /* 0x006ECD29: mov ecx, 0x862910 */
    { uint32_t _tmp = MEM32(ecx); /* 0x006ECD2E: xchg dword ptr [ecx], eax */
      MEM32(ecx) = eax;
      eax = _tmp; }
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006ECD30: xorps xmm0, xmm0 */
    MEM32(0x862924) = 0; /* 0x006ECD33: mov dword ptr [0x862924], 0 */
    xmm_st(0x862914, _xmm[0]); /* 0x006ECD3D: movdqu xmmword ptr [0x862914], xmm0 */
    MEM32(0x862928) = 0; /* 0x006ECD45: mov dword ptr [0x862928], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006ECD4F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006ECD51:
    PUSH32(esp, MEM32(esi + 0x925470)); /* 0x006ECD51: push dword ptr [esi + 0x925470] */
    RECOMP_ICALL(edi); /* 0x006ECD57: call edi */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x925470) = 0; /* 0x006ECD59: mov dword ptr [esi + 0x925470], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ECD63: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006ECD66: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x400u */ /* 0x006ECD69: cmp esi, 0x400 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006ECD51; /* 0x006ECD6F: jb 0x6ecd51 */
L_006ECD71:
    esi = MEM32(0x87CBD0); /* 0x006ECD71: mov esi, dword ptr [0x87cbd0] */
    /* test esi, esi */ /* 0x006ECD77: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECD93; /* 0x006ECD79: je 0x6ecd93 */
L_006ECD7B:
    goto L_006ECD80; /* 0x006ECD7B: jmp 0x6ecd80 */
L_006ECD80:
    PUSH32(esp, esi); /* 0x006ECD80: push esi */
    esi = MEM32(esi + 0x8); /* 0x006ECD81: mov esi, dword ptr [esi + 8] */
    RECOMP_ICALL(edi); /* 0x006ECD84: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ECD86: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006ECD89: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ECD80; /* 0x006ECD8B: jne 0x6ecd80 */
L_006ECD8D:
    MEM32(0x87CBD0) = esi; /* 0x006ECD8D: mov dword ptr [0x87cbd0], esi */
L_006ECD93:
    eax = MEM32(0x862908); /* 0x006ECD93: mov eax, dword ptr [0x862908] */
    MEM32(0x87CBD4) = 0; /* 0x006ECD98: mov dword ptr [0x87cbd4], 0 */
    /* test eax, eax */ /* 0x006ECDA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECDCE; /* 0x006ECDA4: je 0x6ecdce */
L_006ECDA6:
    PUSH32(esp, eax); /* 0x006ECDA6: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x006ECDA7: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x862908); /* 0x006ECDAD: mov esi, dword ptr [0x862908] */
    /* test esi, esi */ /* 0x006ECDB3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECDC4; /* 0x006ECDB5: je 0x6ecdc4 */
L_006ECDB7:
    PUSH32(esp, esi); /* 0x006ECDB7: push esi */
    RECOMP_ICALL(MEM32(0x7CC15C)); /* 0x006ECDB8: call dword ptr [0x7cc15c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006ECDBE: push esi */
    RECOMP_ICALL(edi); /* 0x006ECDBF: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ECDC1: add esp, 4 */
    _flag_k = FK_ADD;
L_006ECDC4:
    MEM32(0x862908) = 0; /* 0x006ECDC4: mov dword ptr [0x862908], 0 */
L_006ECDCE:
    edi = POP32_VAL(esp); /* 0x006ECDCE: pop edi */
    esi = POP32_VAL(esp); /* 0x006ECDCF: pop esi */
    ecx = POP32_VAL(esp); /* 0x006ECDD0: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ECDD1: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ECDE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ECDE0u);

L_006ECDE0:
    /* cmp MEM32(0x862908), 0 */ /* 0x006ECDE0: cmp dword ptr [0x862908], 0 */
    _flag_a = (uint32_t)(MEM32(0x862908)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006ECE25; /* 0x006ECDE7: jne 0x6ece25 */
L_006ECDE9:
    PUSH32(esp, esi); /* 0x006ECDE9: push esi */
    PUSH32(esp, 0x18u); /* 0x006ECDEA: push 0x18 */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006ECDEC: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006ECDF2: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ECDF4: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006ECDF7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECE09; /* 0x006ECDF9: je 0x6ece09 */
L_006ECDFB:
    PUSH32(esp, 0x7D0u); /* 0x006ECDFB: push 0x7d0 */
    PUSH32(esp, esi); /* 0x006ECE00: push esi */
    RECOMP_ICALL(MEM32(0x7CC150)); /* 0x006ECE01: call dword ptr [0x7cc150] */
    RECOMP_FLAGS_IN();
    goto L_006ECE16; /* 0x006ECE07: jmp 0x6ece16 */
L_006ECE09:
    PUSH32(esp, 0x00803E4Cu); /* 0x006ECE09: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x006ECE0E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ECE13: add esp, 4 */
    _flag_k = FK_ADD;
L_006ECE16:
    MEM32(0x862908) = esi; /* 0x006ECE16: mov dword ptr [0x862908], esi */
    /* test esi, esi */ /* 0x006ECE1C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006ECE1E: pop esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ECE25; /* 0x006ECE1F: jne 0x6ece25 */
L_006ECE21:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006ECE21: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ECE24: ret  */
L_006ECE25:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006ECE25: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x303u; /* 0x006ECE27: mov ecx, 0x303 */
    RECOMP_CALL(sub_006ED490); /* 0x006ECE2C: call 0x6ed490 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006ECE31: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x302u; /* 0x006ECE33: mov ecx, 0x302 */
    RECOMP_CALL(sub_006ED490); /* 0x006ECE38: call 0x6ed490 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006ECE3D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x201u; /* 0x006ECE3F: mov ecx, 0x201 */
    RECOMP_CALL(sub_006ED490); /* 0x006ECE44: call 0x6ed490 */
    RECOMP_FLAGS_IN();
    eax = 1; /* 0x006ECE49: mov eax, 1 */
    ecx = 0x0086290Cu; /* 0x006ECE4E: mov ecx, 0x86290c */
    { uint32_t _tmp = MEM32(ecx); /* 0x006ECE53: xchg dword ptr [ecx], eax */
      MEM32(ecx) = eax;
      eax = _tmp; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006ECE55: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ECE57: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ECE60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ECE60u);

L_006ECE60:
    PUSH32(esp, ebx); /* 0x006ECE60: push ebx */
    PUSH32(esp, esi); /* 0x006ECE61: push esi */
    PUSH32(esp, edi); /* 0x006ECE62: push edi */
    edi = ecx; /* 0x006ECE63: mov edi, ecx */
    ebx = 0x00862910u; /* 0x006ECE65: mov ebx, 0x862910 */
    ebx = ebx; /* 0x006ECE6A: lea ebx, [ebx] */
L_006ECE70:
    esi = MEM32(0x862910); /* 0x006ECE70: mov esi, dword ptr [0x862910] */
    edx = esi; /* 0x006ECE76: mov edx, esi */
    eax = esi; /* 0x006ECE78: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = edx; } else { eax = _d; } } /* 0x006ECE7A: lock cmpxchg dword ptr [ebx], edx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x006ECE7E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006ECE70; /* 0x006ECE80: jne 0x6ece70 */
L_006ECE82:
    /* cmp esi, 0xFFFFu */ /* 0x006ECE82: cmp esi, 0xffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006ECE9E; /* 0x006ECE88: jl 0x6ece9e */
L_006ECE8A:
    PUSH32(esp, esi); /* 0x006ECE8A: push esi */
    PUSH32(esp, 0x00804258u); /* 0x006ECE8B: push 0x804258 */
    RECOMP_CALL(sub_006EDB70); /* 0x006ECE90: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006ECE95: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006ECE98: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006ECE9A: pop edi */
    esi = POP32_VAL(esp); /* 0x006ECE9B: pop esi */
    ebx = POP32_VAL(esp); /* 0x006ECE9C: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ECE9D: ret  */
L_006ECE9E:
    edx = MEM32(0x862920); /* 0x006ECE9E: mov edx, dword ptr [0x862920] */
    /* test edx, edx */ /* 0x006ECEA4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ECEBD; /* 0x006ECEA6: jne 0x6ecebd */
L_006ECEA8:
    PUSH32(esp, 0x58u); /* 0x006ECEA8: push 0x58 */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006ECEAA: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006ECEB0: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ECEB2: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x006ECEB5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ECEC5; /* 0x006ECEB7: jne 0x6ecec5 */
L_006ECEB9:
    edi = POP32_VAL(esp); /* 0x006ECEB9: pop edi */
    esi = POP32_VAL(esp); /* 0x006ECEBA: pop esi */
    ebx = POP32_VAL(esp); /* 0x006ECEBB: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ECEBC: ret  */
L_006ECEBD:
    eax = MEM32(edx + 0x54); /* 0x006ECEBD: mov eax, dword ptr [edx + 0x54] */
    MEM32(0x862920) = eax; /* 0x006ECEC0: mov dword ptr [0x862920], eax */
L_006ECEC5:
    _xmm[0] = xmm_ld(edi); /* 0x006ECEC5: movdqu xmm0, xmmword ptr [edi] */
    xmm_st(edx, _xmm[0]); /* 0x006ECEC9: movdqu xmmword ptr [edx], xmm0 */
    _xmm[0] = xmm_ld(edi + 0x10); /* 0x006ECECD: movdqu xmm0, xmmword ptr [edi + 0x10] */
    xmm_st(edx + 0x10, _xmm[0]); /* 0x006ECED2: movdqu xmmword ptr [edx + 0x10], xmm0 */
    _xmm[0] = xmm_ld(edi + 0x20); /* 0x006ECED7: movdqu xmm0, xmmword ptr [edi + 0x20] */
    xmm_st(edx + 0x20, _xmm[0]); /* 0x006ECEDC: movdqu xmmword ptr [edx + 0x20], xmm0 */
    _xmm[0].u64[0] = MEM64(edi + 0x30); _xmm[0].u64[1] = 0; /* 0x006ECEE1: movq xmm0, qword ptr [edi + 0x30] */
    MEM64(edx + 0x30) = _xmm[0].u64[0]; /* 0x006ECEE6: movq qword ptr [edx + 0x30], xmm0 */
    /* cmp MEM32(edi), 0x201u */ /* 0x006ECEEB: cmp dword ptr [edi], 0x201 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x201u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006ECF0E; /* 0x006ECEF1: jne 0x6ecf0e */
L_006ECEF3:
    eax = MEM32(edi + 0x8); /* 0x006ECEF3: mov eax, dword ptr [edi + 8] */
    ecx = edx + 0x38; /* 0x006ECEF6: lea ecx, [edx + 0x38] */
    _xmm[0] = xmm_ld(eax); /* 0x006ECEF9: movdqu xmm0, xmmword ptr [eax] */
    xmm_st(ecx, _xmm[0]); /* 0x006ECEFD: movdqu xmmword ptr [ecx], xmm0 */
    _xmm[0].u64[0] = MEM64(eax + 0x10); _xmm[0].u64[1] = 0; /* 0x006ECF01: movq xmm0, qword ptr [eax + 0x10] */
    MEM64(ecx + 0x10) = _xmm[0].u64[0]; /* 0x006ECF06: movq qword ptr [ecx + 0x10], xmm0 */
    MEM32(edx + 0x8) = ecx; /* 0x006ECF0B: mov dword ptr [edx + 8], ecx */
L_006ECF0E:
    eax = MEM32(0x86291C); /* 0x006ECF0E: mov eax, dword ptr [0x86291c] */
    /* test eax, eax */ /* 0x006ECF13: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECF2A; /* 0x006ECF15: je 0x6ecf2a */
L_006ECF17:
    MEM32(eax + 0x54) = edx; /* 0x006ECF17: mov dword ptr [eax + 0x54], edx */
    eax = MEM32(0x86291C); /* 0x006ECF1A: mov eax, dword ptr [0x86291c] */
    MEM32(edx + 0x50) = eax; /* 0x006ECF1F: mov dword ptr [edx + 0x50], eax */
    MEM32(0x86291C) = edx; /* 0x006ECF22: mov dword ptr [0x86291c], edx */
    goto L_006ECF3D; /* 0x006ECF28: jmp 0x6ecf3d */
L_006ECF2A:
    MEM32(0x862918) = edx; /* 0x006ECF2A: mov dword ptr [0x862918], edx */
    MEM32(0x86291C) = edx; /* 0x006ECF30: mov dword ptr [0x86291c], edx */
    MEM32(edx + 0x50) = 0; /* 0x006ECF36: mov dword ptr [edx + 0x50], 0 */
L_006ECF3D:
    MEM32(edx + 0x54) = 0; /* 0x006ECF3D: mov dword ptr [edx + 0x54], 0 */
    edx = 1; /* 0x006ECF44: mov edx, 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ebx), _sum = MEM32(ebx) + edx; edx = _old; MEM32(ebx) = _sum; } /* 0x006ECF49: lock xadd dword ptr [ebx], edx */
    _flag_k = FK_ADD;
    ecx = MEM32(0x862914); /* 0x006ECF4D: mov ecx, dword ptr [0x862914] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006ECF53: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ecx */ /* 0x006ECF54: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 1; /* 0x006ECF56: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x006ECF5B: pop edi */
    if (CMP_G(_flag_a, _flag_b)) { ecx = edx; } /* 0x006ECF5C: cmovg ecx, edx */
    esi = POP32_VAL(esp); /* 0x006ECF5F: pop esi */
    MEM32(0x862914) = ecx; /* 0x006ECF60: mov dword ptr [0x862914], ecx */
    ebx = POP32_VAL(esp); /* 0x006ECF66: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ECF67: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ECF70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ECF70u);

L_006ECF70:
    edx = MEM32(ecx + 0x50); /* 0x006ECF70: mov edx, dword ptr [ecx + 0x50] */
    /* test edx, edx */ /* 0x006ECF73: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECF7D; /* 0x006ECF75: je 0x6ecf7d */
L_006ECF77:
    eax = MEM32(ecx + 0x54); /* 0x006ECF77: mov eax, dword ptr [ecx + 0x54] */
    MEM32(edx + 0x54) = eax; /* 0x006ECF7A: mov dword ptr [edx + 0x54], eax */
L_006ECF7D:
    edx = MEM32(ecx + 0x54); /* 0x006ECF7D: mov edx, dword ptr [ecx + 0x54] */
    /* test edx, edx */ /* 0x006ECF80: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ECF8A; /* 0x006ECF82: je 0x6ecf8a */
L_006ECF84:
    eax = MEM32(ecx + 0x50); /* 0x006ECF84: mov eax, dword ptr [ecx + 0x50] */
    MEM32(edx + 0x50) = eax; /* 0x006ECF87: mov dword ptr [edx + 0x50], eax */
L_006ECF8A:
    /* cmp ecx, MEM32(0x862918) */ /* 0x006ECF8A: cmp ecx, dword ptr [0x862918] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x862918));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006ECF9A; /* 0x006ECF90: jne 0x6ecf9a */
L_006ECF92:
    eax = MEM32(ecx + 0x54); /* 0x006ECF92: mov eax, dword ptr [ecx + 0x54] */
    MEM32(0x862918) = eax; /* 0x006ECF95: mov dword ptr [0x862918], eax */
L_006ECF9A:
    /* cmp ecx, MEM32(0x86291C) */ /* 0x006ECF9A: cmp ecx, dword ptr [0x86291c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x86291C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006ECFAA; /* 0x006ECFA0: jne 0x6ecfaa */
L_006ECFA2:
    eax = MEM32(ecx + 0x50); /* 0x006ECFA2: mov eax, dword ptr [ecx + 0x50] */
    MEM32(0x86291C) = eax; /* 0x006ECFA5: mov dword ptr [0x86291c], eax */
L_006ECFAA:
    eax = MEM32(0x862920); /* 0x006ECFAA: mov eax, dword ptr [0x862920] */
    MEM32(ecx + 0x54) = eax; /* 0x006ECFAF: mov dword ptr [ecx + 0x54], eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006ECFB2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x862920) = ecx; /* 0x006ECFB5: mov dword ptr [0x862920], ecx */
    ecx = 0x00862910u; /* 0x006ECFBB: mov ecx, 0x862910 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x006ECFC0: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ECFC4: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ECFE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ECFE0u);

L_006ECFE0:
    PUSH32(esp, ebp); /* 0x006ECFE0: push ebp */
    ebp = esp; /* 0x006ECFE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006ECFE3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006ECFE6: push ebx */
    PUSH32(esp, esi); /* 0x006ECFE7: push esi */
    PUSH32(esp, edi); /* 0x006ECFE8: push edi */
    MEM32(ebp + (-0x8)) = edx; /* 0x006ECFE9: mov dword ptr [ebp - 8], edx */
    edi = ecx; /* 0x006ECFEC: mov edi, ecx */
    edx = 0x0086290Cu; /* 0x006ECFEE: mov edx, 0x86290c */
L_006ECFF3:
    ecx = MEM32(0x86290C); /* 0x006ECFF3: mov ecx, dword ptr [0x86290c] */
    esi = ecx; /* 0x006ECFF9: mov esi, ecx */
    eax = ecx; /* 0x006ECFFB: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x006ECFFD: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x006ED001: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006ECFF3; /* 0x006ED003: jne 0x6ecff3 */
L_006ED005:
    /* test ecx, ecx */ /* 0x006ED005: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED025; /* 0x006ED007: jne 0x6ed025 */
L_006ED009:
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x006ED009: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED01B; /* 0x006ED00C: je 0x6ed01b */
L_006ED00E:
    PUSH32(esp, 0x00804234u); /* 0x006ED00E: push 0x804234 */
    RECOMP_CALL(sub_006EDB70); /* 0x006ED013: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ED018: add esp, 4 */
    _flag_k = FK_ADD;
L_006ED01B:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006ED01B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006ED01E: pop edi */
    esi = POP32_VAL(esp); /* 0x006ED01F: pop esi */
    ebx = POP32_VAL(esp); /* 0x006ED020: pop ebx */
    esp = ebp; /* 0x006ED021: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED023: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED024: ret  */
L_006ED025:
    eax = MEM32(0x862908); /* 0x006ED025: mov eax, dword ptr [0x862908] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006ED02A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006ED02C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED037; /* 0x006ED02E: je 0x6ed037 */
L_006ED030:
    PUSH32(esp, eax); /* 0x006ED030: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x006ED031: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_006ED037:
    eax = MEM32(ebp + 0x8); /* 0x006ED037: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x006ED03A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED064; /* 0x006ED03C: jne 0x6ed064 */
L_006ED03E:
    esi = MEM32(ebp + (-0x8)); /* 0x006ED03E: mov esi, dword ptr [ebp - 8] */
    /* test esi, esi */ /* 0x006ED041: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006ED17B; /* 0x006ED043: jle 0x6ed17b */
L_006ED049:
    esp = esp; /* 0x006ED049: lea esp, [esp] */
L_006ED050:
    ecx = edi; /* 0x006ED050: mov ecx, edi */
    RECOMP_CALL(sub_006ECE60); /* 0x006ED052: call 0x6ece60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x006ED057: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x38u; /* 0x006ED059: add edi, 0x38 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006ED05C: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006ED050; /* 0x006ED05D: jne 0x6ed050 */
L_006ED05F:
    goto L_006ED17B; /* 0x006ED05F: jmp 0x6ed17b */
L_006ED064:
    /* cmp eax, 2 */ /* 0x006ED064: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006ED09A; /* 0x006ED067: jne 0x6ed09a */
L_006ED069:
    ecx = MEM32(0x862924); /* 0x006ED069: mov ecx, dword ptr [0x862924] */
    /* test ecx, ecx */ /* 0x006ED06F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED094; /* 0x006ED071: je 0x6ed094 */
L_006ED073:
    edx = MEM32(0x862928); /* 0x006ED073: mov edx, dword ptr [0x862928] */
    esp = esp; /* 0x006ED079: lea esp, [esp] */
L_006ED080:
    eax = MEM32(ecx + 0x18); /* 0x006ED080: mov eax, dword ptr [ecx + 0x18] */
    MEM32(ecx + 0x18) = edx; /* 0x006ED083: mov dword ptr [ecx + 0x18], edx */
    edx = ecx; /* 0x006ED086: mov edx, ecx */
    MEM32(0x862928) = edx; /* 0x006ED088: mov dword ptr [0x862928], edx */
    ecx = eax; /* 0x006ED08E: mov ecx, eax */
    /* test eax, eax */ /* 0x006ED090: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED080; /* 0x006ED092: jne 0x6ed080 */
L_006ED094:
    MEM32(0x862924) = ebx; /* 0x006ED094: mov dword ptr [0x862924], ebx */
L_006ED09A:
    esi = MEM32(0x862918); /* 0x006ED09A: mov esi, dword ptr [0x862918] */
    /* test esi, esi */ /* 0x006ED0A0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED17B; /* 0x006ED0A2: je 0x6ed17b */
L_006ED0A8:
    eax = edi; /* 0x006ED0A8: mov eax, edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x006ED0AA: mov dword ptr [ebp - 4], eax */
    ecx = ecx; /* 0x006ED0AD: lea ecx, [ecx] */
L_006ED0B0:
    /* test edi, edi */ /* 0x006ED0B0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED0BD; /* 0x006ED0B2: je 0x6ed0bd */
L_006ED0B4:
    /* cmp ebx, MEM32(ebp + (-0x8)) */ /* 0x006ED0B4: cmp ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006ED17B; /* 0x006ED0B7: jge 0x6ed17b */
L_006ED0BD:
    ecx = MEM32(esi); /* 0x006ED0BD: mov ecx, dword ptr [esi] */
    edx = MEM32(esi + 0x54); /* 0x006ED0BF: mov edx, dword ptr [esi + 0x54] */
    MEM32(ebp + (-0xC)) = edx; /* 0x006ED0C2: mov dword ptr [ebp - 0xc], edx */
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x006ED0C5: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006ED171; /* 0x006ED0C8: ja 0x6ed171 */
L_006ED0CE:
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x006ED0CE: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006ED171; /* 0x006ED0D1: ja 0x6ed171 */
L_006ED0D7:
    /* test edi, edi */ /* 0x006ED0D7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED167; /* 0x006ED0D9: je 0x6ed167 */
L_006ED0DF:
    _xmm[0] = xmm_ld(esi); /* 0x006ED0DF: movdqu xmm0, xmmword ptr [esi] */
    xmm_st(eax, _xmm[0]); /* 0x006ED0E3: movdqu xmmword ptr [eax], xmm0 */
    _xmm[0] = xmm_ld(esi + 0x10); /* 0x006ED0E7: movdqu xmm0, xmmword ptr [esi + 0x10] */
    xmm_st(eax + 0x10, _xmm[0]); /* 0x006ED0EC: movdqu xmmword ptr [eax + 0x10], xmm0 */
    _xmm[0] = xmm_ld(esi + 0x20); /* 0x006ED0F1: movdqu xmm0, xmmword ptr [esi + 0x20] */
    xmm_st(eax + 0x20, _xmm[0]); /* 0x006ED0F6: movdqu xmmword ptr [eax + 0x20], xmm0 */
    _xmm[0].u64[0] = MEM64(esi + 0x30); _xmm[0].u64[1] = 0; /* 0x006ED0FB: movq xmm0, qword ptr [esi + 0x30] */
    MEM64(eax + 0x30) = _xmm[0].u64[0]; /* 0x006ED100: movq qword ptr [eax + 0x30], xmm0 */
    /* cmp MEM32(esi), 0x201u */ /* 0x006ED105: cmp dword ptr [esi], 0x201 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x201u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006ED157; /* 0x006ED10B: jne 0x6ed157 */
L_006ED10D:
    ecx = MEM32(0x862928); /* 0x006ED10D: mov ecx, dword ptr [0x862928] */
    /* test ecx, ecx */ /* 0x006ED113: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED121; /* 0x006ED115: je 0x6ed121 */
L_006ED117:
    eax = MEM32(ecx + 0x18); /* 0x006ED117: mov eax, dword ptr [ecx + 0x18] */
    MEM32(0x862928) = eax; /* 0x006ED11A: mov dword ptr [0x862928], eax */
    goto L_006ED12E; /* 0x006ED11F: jmp 0x6ed12e */
L_006ED121:
    PUSH32(esp, 0x1Cu); /* 0x006ED121: push 0x1c */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006ED123: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ED129: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x006ED12C: mov ecx, eax */
L_006ED12E:
    eax = MEM32(esi + 0x8); /* 0x006ED12E: mov eax, dword ptr [esi + 8] */
    _xmm[0] = xmm_ld(eax); /* 0x006ED131: movdqu xmm0, xmmword ptr [eax] */
    xmm_st(ecx, _xmm[0]); /* 0x006ED135: movdqu xmmword ptr [ecx], xmm0 */
    _xmm[0].u64[0] = MEM64(eax + 0x10); _xmm[0].u64[1] = 0; /* 0x006ED139: movq xmm0, qword ptr [eax + 0x10] */
    MEM64(ecx + 0x10) = _xmm[0].u64[0]; /* 0x006ED13E: movq qword ptr [ecx + 0x10], xmm0 */
    eax = MEM32(0x862924); /* 0x006ED143: mov eax, dword ptr [0x862924] */
    MEM32(ecx + 0x18) = eax; /* 0x006ED148: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x006ED14B: mov eax, dword ptr [ebp - 4] */
    MEM32(0x862924) = ecx; /* 0x006ED14E: mov dword ptr [0x862924], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x006ED154: mov dword ptr [eax + 8], ecx */
L_006ED157:
    /* cmp MEM32(ebp + 0x8), 2 */ /* 0x006ED157: cmp dword ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006ED167; /* 0x006ED15B: jne 0x6ed167 */
L_006ED15D:
    ecx = esi; /* 0x006ED15D: mov ecx, esi */
    RECOMP_CALL(sub_006ECF70); /* 0x006ED15F: call 0x6ecf70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x006ED164: mov eax, dword ptr [ebp - 4] */
L_006ED167:
    edx = MEM32(ebp + (-0xC)); /* 0x006ED167: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006ED16A: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x38u; /* 0x006ED16B: add eax, 0x38 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x006ED16E: mov dword ptr [ebp - 4], eax */
L_006ED171:
    esi = edx; /* 0x006ED171: mov esi, edx */
    /* test edx, edx */ /* 0x006ED173: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED0B0; /* 0x006ED175: jne 0x6ed0b0 */
L_006ED17B:
    eax = MEM32(0x862908); /* 0x006ED17B: mov eax, dword ptr [0x862908] */
    /* test eax, eax */ /* 0x006ED180: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED18B; /* 0x006ED182: je 0x6ed18b */
L_006ED184:
    PUSH32(esp, eax); /* 0x006ED184: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x006ED185: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_006ED18B:
    edi = POP32_VAL(esp); /* 0x006ED18B: pop edi */
    esi = POP32_VAL(esp); /* 0x006ED18C: pop esi */
    eax = ebx; /* 0x006ED18D: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x006ED18F: pop ebx */
    esp = ebp; /* 0x006ED190: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED192: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED193: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ED1A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ED1A0u);

L_006ED1A0:
    PUSH32(esp, ebp); /* 0x006ED1A0: push ebp */
    ebp = esp; /* 0x006ED1A1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006ED1A3: push ecx */
    PUSH32(esp, ebx); /* 0x006ED1A4: push ebx */
    PUSH32(esp, esi); /* 0x006ED1A5: push esi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x006ED1A6: mov dword ptr [ebp - 4], ecx */
    ebx = edx; /* 0x006ED1A9: mov ebx, edx */
    PUSH32(esp, edi); /* 0x006ED1AB: push edi */
    ecx = 0x0086290Cu; /* 0x006ED1AC: mov ecx, 0x86290c */
L_006ED1B1:
    edi = MEM32(0x86290C); /* 0x006ED1B1: mov edi, dword ptr [0x86290c] */
    esi = edi; /* 0x006ED1B7: mov esi, edi */
    eax = edi; /* 0x006ED1B9: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = esi; } else { eax = _d; } } /* 0x006ED1BB: lock cmpxchg dword ptr [ecx], esi */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x006ED1BF: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006ED1B1; /* 0x006ED1C1: jne 0x6ed1b1 */
L_006ED1C3:
    /* test edi, edi */ /* 0x006ED1C3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED220; /* 0x006ED1C5: je 0x6ed220 */
L_006ED1C7:
    eax = MEM32(0x862908); /* 0x006ED1C7: mov eax, dword ptr [0x862908] */
    /* test eax, eax */ /* 0x006ED1CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED220; /* 0x006ED1CE: je 0x6ed220 */
L_006ED1D0:
    PUSH32(esp, eax); /* 0x006ED1D0: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x006ED1D1: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x862918); /* 0x006ED1D7: mov ecx, dword ptr [0x862918] */
    /* test ecx, ecx */ /* 0x006ED1DD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED1FC; /* 0x006ED1DF: je 0x6ed1fc */
L_006ED1E1:
    edi = MEM32(ebp + (-0x4)); /* 0x006ED1E1: mov edi, dword ptr [ebp - 4] */
L_006ED1E4:
    eax = MEM32(ecx); /* 0x006ED1E4: mov eax, dword ptr [ecx] */
    esi = MEM32(ecx + 0x54); /* 0x006ED1E6: mov esi, dword ptr [ecx + 0x54] */
    /* cmp edi, eax */ /* 0x006ED1E9: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006ED1F6; /* 0x006ED1EB: ja 0x6ed1f6 */
L_006ED1ED:
    /* cmp eax, ebx */ /* 0x006ED1ED: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006ED1F6; /* 0x006ED1EF: ja 0x6ed1f6 */
L_006ED1F1:
    RECOMP_CALL(sub_006ECF70); /* 0x006ED1F1: call 0x6ecf70 */
    RECOMP_FLAGS_IN();
L_006ED1F6:
    ecx = esi; /* 0x006ED1F6: mov ecx, esi */
    /* test esi, esi */ /* 0x006ED1F8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED1E4; /* 0x006ED1FA: jne 0x6ed1e4 */
L_006ED1FC:
    eax = MEM32(0x862908); /* 0x006ED1FC: mov eax, dword ptr [0x862908] */
    /* test eax, eax */ /* 0x006ED201: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED219; /* 0x006ED203: jne 0x6ed219 */
L_006ED205:
    PUSH32(esp, 0x00806748u); /* 0x006ED205: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x006ED20A: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ED20F: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006ED212: pop edi */
    esi = POP32_VAL(esp); /* 0x006ED213: pop esi */
    ebx = POP32_VAL(esp); /* 0x006ED214: pop ebx */
    esp = ebp; /* 0x006ED215: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED217: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED218: ret  */
L_006ED219:
    PUSH32(esp, eax); /* 0x006ED219: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x006ED21A: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_006ED220:
    edi = POP32_VAL(esp); /* 0x006ED220: pop edi */
    esi = POP32_VAL(esp); /* 0x006ED221: pop esi */
    ebx = POP32_VAL(esp); /* 0x006ED222: pop ebx */
    esp = ebp; /* 0x006ED223: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED225: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED226: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ED230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ED230u);

L_006ED230:
    PUSH32(esp, ebp); /* 0x006ED230: push ebp */
    ebp = esp; /* 0x006ED231: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006ED233: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006ED236: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006ED239: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006ED23E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = eax; /* 0x006ED240: mov dword ptr [esp + 0x38], eax */
    eax = MEM32(0x87CBCC); /* 0x006ED244: mov eax, dword ptr [0x87cbcc] */
    PUSH32(esp, esi); /* 0x006ED249: push esi */
    esi = ecx; /* 0x006ED24A: mov esi, ecx */
    /* test eax, eax */ /* 0x006ED24C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED25C; /* 0x006ED24E: je 0x6ed25c */
L_006ED250:
    PUSH32(esp, eax); /* 0x006ED250: push eax */
    eax = MEM32(eax + 0xCC); /* 0x006ED251: mov eax, dword ptr [eax + 0xcc] */
    RECOMP_ICALL(eax); /* 0x006ED257: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ED259: add esp, 4 */
    _flag_k = FK_ADD;
L_006ED25C:
    /* cmp MEM32(0x925488), 0 */ /* 0x006ED25C: cmp dword ptr [0x925488], 0 */
    _flag_a = (uint32_t)(MEM32(0x925488)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED271; /* 0x006ED263: je 0x6ed271 */
L_006ED265:
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x006ED265: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006EF060); /* 0x006ED268: call 0x6ef060 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006ED26D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED276; /* 0x006ED26F: je 0x6ed276 */
L_006ED271:
    RECOMP_CALL(sub_006EEF00); /* 0x006ED271: call 0x6eef00 */
    RECOMP_FLAGS_IN();
L_006ED276:
    /* cmp MEM32(0x87CC1C), 0 */ /* 0x006ED276: cmp dword ptr [0x87cc1c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CC1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED2B2; /* 0x006ED27D: je 0x6ed2b2 */
L_006ED27F:
    eax = MEM32(0x925474); /* 0x006ED27F: mov eax, dword ptr [0x925474] */
    MEM32(0x87CC1C) = 0; /* 0x006ED284: mov dword ptr [0x87cc1c], 0 */
    /* test eax, eax */ /* 0x006ED28E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED29B; /* 0x006ED290: je 0x6ed29b */
L_006ED292:
    /* test MEM8(eax), 1 */ /* 0x006ED292: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED29B; /* 0x006ED295: je 0x6ed29b */
L_006ED297:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006ED297: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_006ED29D; /* 0x006ED299: jmp 0x6ed29d */
L_006ED29B:
    SET_LO8(eax, 1); /* 0x006ED29B: mov al, 1 */
L_006ED29D:
    /* cmp LO8(eax), 1 */ /* 0x006ED29D: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006ED2B2; /* 0x006ED29F: jne 0x6ed2b2 */
L_006ED2A1:
    ecx = esp + 0x4; /* 0x006ED2A1: lea ecx, [esp + 4] */
    MEM32(esp + 0x4) = 0x100u; /* 0x006ED2A5: mov dword ptr [esp + 4], 0x100 */
    RECOMP_CALL(sub_006ED2F0); /* 0x006ED2AD: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
L_006ED2B2:
    PUSH32(esp, 0xFFFFu); /* 0x006ED2B2: push 0xffff */
    PUSH32(esp, 0); /* 0x006ED2B7: push 0 */
    PUSH32(esp, 2); /* 0x006ED2B9: push 2 */
    edx = 1; /* 0x006ED2BB: mov edx, 1 */
    ecx = esi; /* 0x006ED2C0: mov ecx, esi */
    RECOMP_CALL(sub_006ECFE0); /* 0x006ED2C2: call 0x6ecfe0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x006ED2C7: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006ED2C9: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006ED2CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x006ED2CE: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED2D8; /* 0x006ED2D1: je 0x6ed2d8 */
L_006ED2D3:
    /* test ecx, ecx */ /* 0x006ED2D3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006ED2D5: setne al */
L_006ED2D8:
    ecx = MEM32(esp + 0x3C); /* 0x006ED2D8: mov ecx, dword ptr [esp + 0x3c] */
    esi = POP32_VAL(esp); /* 0x006ED2DC: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006ED2DD: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006ED2DF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006ED2E4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED2E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED2E7: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ED2F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ED2F0u);

L_006ED2F0:
    PUSH32(esp, ebp); /* 0x006ED2F0: push ebp */
    ebp = esp; /* 0x006ED2F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006ED2F3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x006ED2F6: push esi */
    PUSH32(esp, edi); /* 0x006ED2F7: push edi */
    edi = ecx; /* 0x006ED2F8: mov edi, ecx */
    RECOMP_CALL(sub_006EE000); /* 0x006ED2FA: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x006ED2FF: mov dword ptr [edi + 4], eax */
    eax = MEM32(0x87CBD4); /* 0x006ED302: mov eax, dword ptr [0x87cbd4] */
    /* test eax, eax */ /* 0x006ED307: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED321; /* 0x006ED309: je 0x6ed321 */
L_006ED30B:
    PUSH32(esp, edi); /* 0x006ED30B: push edi */
    PUSH32(esp, MEM32(0x92C620)); /* 0x006ED30C: push dword ptr [0x92c620] */
    RECOMP_ICALL(eax); /* 0x006ED312: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006ED314: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006ED317: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED321; /* 0x006ED319: jne 0x6ed321 */
L_006ED31B:
    edi = POP32_VAL(esp); /* 0x006ED31B: pop edi */
    esi = POP32_VAL(esp); /* 0x006ED31C: pop esi */
    esp = ebp; /* 0x006ED31D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED31F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED320: ret  */
L_006ED321:
    esi = MEM32(0x87CBD0); /* 0x006ED321: mov esi, dword ptr [0x87cbd0] */
    /* test esi, esi */ /* 0x006ED327: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED342; /* 0x006ED329: je 0x6ed342 */
L_006ED32B:
    goto L_006ED330; /* 0x006ED32B: jmp 0x6ed330 */
L_006ED330:
    eax = MEM32(esi); /* 0x006ED330: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x006ED332: push edi */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x006ED333: push dword ptr [esi + 4] */
    RECOMP_ICALL(eax); /* 0x006ED336: call eax */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x8); /* 0x006ED338: mov esi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006ED33B: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006ED33E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED330; /* 0x006ED340: jne 0x6ed330 */
L_006ED342:
    PUSH32(esp, 0); /* 0x006ED342: push 0 */
    PUSH32(esp, 0); /* 0x006ED344: push 0 */
    PUSH32(esp, 0); /* 0x006ED346: push 0 */
    edx = 1; /* 0x006ED348: mov edx, 1 */
    ecx = edi; /* 0x006ED34D: mov ecx, edi */
    RECOMP_CALL(sub_006ECFE0); /* 0x006ED34F: call 0x6ecfe0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006ED354: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006ED357: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006ED364; /* 0x006ED359: jg 0x6ed364 */
L_006ED35B:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006ED35B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006ED35E: pop edi */
    esi = POP32_VAL(esp); /* 0x006ED35F: pop esi */
    esp = ebp; /* 0x006ED360: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED362: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED363: ret  */
L_006ED364:
    ecx = edi; /* 0x006ED364: mov ecx, edi */
    RECOMP_CALL(sub_006FC980); /* 0x006ED366: call 0x6fc980 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006ED36B: pop edi */
    eax = 1; /* 0x006ED36C: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x006ED371: pop esi */
    esp = ebp; /* 0x006ED372: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED374: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED375: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ED380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ED380u);

L_006ED380:
    PUSH32(esp, ebx); /* 0x006ED380: push ebx */
    PUSH32(esp, esi); /* 0x006ED381: push esi */
    PUSH32(esp, edi); /* 0x006ED382: push edi */
    PUSH32(esp, 0xCu); /* 0x006ED383: push 0xc */
    edi = edx; /* 0x006ED385: mov edi, edx */
    ebx = ecx; /* 0x006ED387: mov ebx, ecx */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x006ED389: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006ED38F: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ED391: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006ED394: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED3CB; /* 0x006ED396: je 0x6ed3cb */
L_006ED398:
    ecx = MEM32(0x87CBD0); /* 0x006ED398: mov ecx, dword ptr [0x87cbd0] */
    MEM32(esi) = ebx; /* 0x006ED39E: mov dword ptr [esi], ebx */
    MEM32(esi + 0x4) = edi; /* 0x006ED3A0: mov dword ptr [esi + 4], edi */
    MEM32(esi + 0x8) = 0; /* 0x006ED3A3: mov dword ptr [esi + 8], 0 */
    /* test ecx, ecx */ /* 0x006ED3AA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED3C5; /* 0x006ED3AC: je 0x6ed3c5 */
L_006ED3AE:
    eax = MEM32(ecx + 0x8); /* 0x006ED3AE: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x006ED3B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED3BE; /* 0x006ED3B3: je 0x6ed3be */
L_006ED3B5:
    ecx = eax; /* 0x006ED3B5: mov ecx, eax */
    eax = MEM32(ecx + 0x8); /* 0x006ED3B7: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x006ED3BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED3B5; /* 0x006ED3BC: jne 0x6ed3b5 */
L_006ED3BE:
    edi = POP32_VAL(esp); /* 0x006ED3BE: pop edi */
    MEM32(ecx + 0x8) = esi; /* 0x006ED3BF: mov dword ptr [ecx + 8], esi */
    esi = POP32_VAL(esp); /* 0x006ED3C2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006ED3C3: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED3C4: ret  */
L_006ED3C5:
    MEM32(0x87CBD0) = esi; /* 0x006ED3C5: mov dword ptr [0x87cbd0], esi */
L_006ED3CB:
    edi = POP32_VAL(esp); /* 0x006ED3CB: pop edi */
    esi = POP32_VAL(esp); /* 0x006ED3CC: pop esi */
    ebx = POP32_VAL(esp); /* 0x006ED3CD: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED3CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ED3D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ED3D0u);

L_006ED3D0:
    eax = MEM32(0x87CBD0); /* 0x006ED3D0: mov eax, dword ptr [0x87cbd0] */
    PUSH32(esp, esi); /* 0x006ED3D5: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006ED3D6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006ED3D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED41A; /* 0x006ED3DA: je 0x6ed41a */
L_006ED3DC:
    esp = esp; /* 0x006ED3DC: lea esp, [esp] */
L_006ED3E0:
    /* cmp MEM32(eax), ecx */ /* 0x006ED3E0: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006ED3E9; /* 0x006ED3E2: jne 0x6ed3e9 */
L_006ED3E4:
    /* cmp MEM32(eax + 0x4), edx */ /* 0x006ED3E4: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED3F4; /* 0x006ED3E7: je 0x6ed3f4 */
L_006ED3E9:
    esi = eax; /* 0x006ED3E9: mov esi, eax */
    eax = MEM32(eax + 0x8); /* 0x006ED3EB: mov eax, dword ptr [eax + 8] */
    /* test eax, eax */ /* 0x006ED3EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED3E0; /* 0x006ED3F0: jne 0x6ed3e0 */
L_006ED3F2:
    esi = POP32_VAL(esp); /* 0x006ED3F2: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED3F3: ret  */
L_006ED3F4:
    ecx = MEM32(eax + 0x8); /* 0x006ED3F4: mov ecx, dword ptr [eax + 8] */
    /* test esi, esi */ /* 0x006ED3F7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED40A; /* 0x006ED3F9: je 0x6ed40a */
L_006ED3FB:
    PUSH32(esp, eax); /* 0x006ED3FB: push eax */
    MEM32(esi + 0x8) = ecx; /* 0x006ED3FC: mov dword ptr [esi + 8], ecx */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006ED3FF: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ED405: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006ED408: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED409: ret  */
L_006ED40A:
    PUSH32(esp, eax); /* 0x006ED40A: push eax */
    MEM32(0x87CBD0) = ecx; /* 0x006ED40B: mov dword ptr [0x87cbd0], ecx */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006ED411: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ED417: add esp, 4 */
    _flag_k = FK_ADD;
L_006ED41A:
    esi = POP32_VAL(esp); /* 0x006ED41A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED41B: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ED420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ED420u);

L_006ED420:
    PUSH32(esp, ebp); /* 0x006ED420: push ebp */
    ebp = esp; /* 0x006ED421: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006ED423: push ecx */
    eax = MEM32(0x862908); /* 0x006ED424: mov eax, dword ptr [0x862908] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x006ED429: mov dword ptr [ebp - 4], ecx */
    PUSH32(esp, ebx); /* 0x006ED42C: push ebx */
    ebx = edx; /* 0x006ED42D: mov ebx, edx */
    /* test eax, eax */ /* 0x006ED42F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED486; /* 0x006ED431: je 0x6ed486 */
L_006ED433:
    PUSH32(esp, esi); /* 0x006ED433: push esi */
    PUSH32(esp, eax); /* 0x006ED434: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x006ED435: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x862918); /* 0x006ED43B: mov esi, dword ptr [0x862918] */
    /* test esi, esi */ /* 0x006ED441: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED463; /* 0x006ED443: je 0x6ed463 */
L_006ED445:
    PUSH32(esp, edi); /* 0x006ED445: push edi */
L_006ED446:
    edi = MEM32(esi + 0x54); /* 0x006ED446: mov edi, dword ptr [esi + 0x54] */
    PUSH32(esp, esi); /* 0x006ED449: push esi */
    PUSH32(esp, ebx); /* 0x006ED44A: push ebx */
    RECOMP_ICALL(MEM32(ebp + (-0x4))); /* 0x006ED44B: call dword ptr [ebp - 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006ED44E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006ED451: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED45C; /* 0x006ED453: jne 0x6ed45c */
L_006ED455:
    ecx = esi; /* 0x006ED455: mov ecx, esi */
    RECOMP_CALL(sub_006ECF70); /* 0x006ED457: call 0x6ecf70 */
    RECOMP_FLAGS_IN();
L_006ED45C:
    esi = edi; /* 0x006ED45C: mov esi, edi */
    /* test edi, edi */ /* 0x006ED45E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED446; /* 0x006ED460: jne 0x6ed446 */
L_006ED462:
    edi = POP32_VAL(esp); /* 0x006ED462: pop edi */
L_006ED463:
    eax = MEM32(0x862908); /* 0x006ED463: mov eax, dword ptr [0x862908] */
    esi = POP32_VAL(esp); /* 0x006ED468: pop esi */
    /* test eax, eax */ /* 0x006ED469: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED47F; /* 0x006ED46B: jne 0x6ed47f */
L_006ED46D:
    PUSH32(esp, 0x00806748u); /* 0x006ED46D: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x006ED472: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006ED477: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x006ED47A: pop ebx */
    esp = ebp; /* 0x006ED47B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED47D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED47E: ret  */
L_006ED47F:
    PUSH32(esp, eax); /* 0x006ED47F: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x006ED480: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_006ED486:
    ebx = POP32_VAL(esp); /* 0x006ED486: pop ebx */
    esp = ebp; /* 0x006ED487: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED489: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED48A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ED490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ED490u);

L_006ED490:
    PUSH32(esp, ebp); /* 0x006ED490: push ebp */
    ebp = esp; /* 0x006ED491: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006ED493: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006ED496: push ebx */
    PUSH32(esp, esi); /* 0x006ED497: push esi */
    esi = edx; /* 0x006ED498: mov esi, edx */
    edx = ecx; /* 0x006ED49A: mov edx, ecx */
    eax = edx; /* 0x006ED49C: mov eax, edx */
    MEM32(ebp + (-0x8)) = edx; /* 0x006ED49E: mov dword ptr [ebp - 8], edx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x006ED4A1: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x006ED4A1: shr eax, 8 */
    ebx = (uint32_t)LO8(eax); /* 0x006ED4A4: movzx ebx, al */
    PUSH32(esp, edi); /* 0x006ED4A7: push edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x006ED4A8: mov dword ptr [ebp - 4], ebx */
    edi = 1; /* 0x006ED4AB: mov edi, 1 */
    ecx = MEM32(ebx * 4 + 0x925470); /* 0x006ED4B0: mov ecx, dword ptr [ebx*4 + 0x925470] */
    /* test ecx, ecx */ /* 0x006ED4B7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED4DA; /* 0x006ED4B9: je 0x6ed4da */
L_006ED4BB:
    edx = (uint32_t)LO8(edx); /* 0x006ED4BB: movzx edx, dl */
    eax = edi; /* 0x006ED4BE: mov eax, edi */
    ecx = edx; /* 0x006ED4C0: mov ecx, edx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x006ED4C2: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x006ED4C2: shr edx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x006ED4C5: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006ED4C8: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x006ED4C8: shl eax, cl */
    ecx = MEM32(ebx * 4 + 0x925470); /* 0x006ED4CA: mov ecx, dword ptr [ebx*4 + 0x925470] */
    /* test MEM32(ecx + edx * 4), eax */ /* 0x006ED4D1: test dword ptr [ecx + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + edx * 4)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED4DA; /* 0x006ED4D4: je 0x6ed4da */
L_006ED4D6:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x006ED4D6: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_006ED4DC; /* 0x006ED4D8: jmp 0x6ed4dc */
L_006ED4DA:
    SET_LO8(ebx, 1); /* 0x006ED4DA: mov bl, 1 */
L_006ED4DC:
    eax = (uint32_t)LO8(ebx); /* 0x006ED4DC: movzx eax, bl */
    /* cmp esi, eax */ /* 0x006ED4DF: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED562; /* 0x006ED4E1: je 0x6ed562 */
L_006ED4E3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0; /* 0x006ED4E3: sub esi, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006ED513; /* 0x006ED4E6: je 0x6ed513 */
L_006ED4E8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x006ED4E8: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006ED562; /* 0x006ED4E9: jne 0x6ed562 */
L_006ED4EB:
    eax = MEM32(ebp + (-0x8)); /* 0x006ED4EB: mov eax, dword ptr [ebp - 8] */
    esi = MEM32(ebp + (-0x4)); /* 0x006ED4EE: mov esi, dword ptr [ebp - 4] */
    ecx = (uint32_t)LO8(eax); /* 0x006ED4F1: movzx ecx, al */
    edx = ecx; /* 0x006ED4F4: mov edx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x006ED4F6: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006ED4F9: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x006ED4F9: shl edi, cl */
    eax = MEM32(esi * 4 + 0x925470); /* 0x006ED4FB: mov eax, dword ptr [esi*4 + 0x925470] */
    edi = ~edi; /* 0x006ED502: not edi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x006ED504: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x006ED504: shr edx, 5 */
    _flag_a = (uint32_t)(MEM32(eax + edx * 4)); _flag_b = (uint32_t)(edi);
    MEM32(eax + edx * 4) = MEM32(eax + edx * 4) & edi; /* 0x006ED507: and dword ptr [eax + edx*4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, LO8(ebx)); /* 0x006ED50A: mov al, bl */
    edi = POP32_VAL(esp); /* 0x006ED50C: pop edi */
    esi = POP32_VAL(esp); /* 0x006ED50D: pop esi */
    ebx = POP32_VAL(esp); /* 0x006ED50E: pop ebx */
    esp = ebp; /* 0x006ED50F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED511: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED512: ret  */
L_006ED513:
    /* test ecx, ecx */ /* 0x006ED513: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED53B; /* 0x006ED515: jne 0x6ed53b */
L_006ED517:
    PUSH32(esp, 0x20u); /* 0x006ED517: push 0x20 */
    PUSH32(esp, 1); /* 0x006ED519: push 1 */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x006ED51B: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x006ED521: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006ED524: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(esi * 4 + 0x925470) = eax; /* 0x006ED527: mov dword ptr [esi*4 + 0x925470], eax */
    /* test eax, eax */ /* 0x006ED52E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED53E; /* 0x006ED530: jne 0x6ed53e */
L_006ED532:
    edi = POP32_VAL(esp); /* 0x006ED532: pop edi */
    esi = POP32_VAL(esp); /* 0x006ED533: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x006ED534: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x006ED536: pop ebx */
    esp = ebp; /* 0x006ED537: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED539: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED53A: ret  */
L_006ED53B:
    esi = MEM32(ebp + (-0x4)); /* 0x006ED53B: mov esi, dword ptr [ebp - 4] */
L_006ED53E:
    eax = MEM32(ebp + (-0x8)); /* 0x006ED53E: mov eax, dword ptr [ebp - 8] */
    ecx = (uint32_t)LO8(eax); /* 0x006ED541: movzx ecx, al */
    eax = MEM32(esi * 4 + 0x925470); /* 0x006ED544: mov eax, dword ptr [esi*4 + 0x925470] */
    edx = ecx; /* 0x006ED54B: mov edx, ecx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x006ED54D: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x006ED54D: shr edx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x006ED550: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006ED553: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x006ED553: shl edi, cl */
    _flag_a = (uint32_t)((MEM32(eax + edx * 4) | edi)); _flag_b = (uint32_t)((MEM32(eax + edx * 4) | edi));
    MEM32(eax + edx * 4) = MEM32(eax + edx * 4) | edi; /* 0x006ED555: or dword ptr [eax + edx*4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x8)); /* 0x006ED558: mov edx, dword ptr [ebp - 8] */
    ecx = edx; /* 0x006ED55B: mov ecx, edx */
    RECOMP_CALL(sub_006ED1A0); /* 0x006ED55D: call 0x6ed1a0 */
    RECOMP_FLAGS_IN();
L_006ED562:
    edi = POP32_VAL(esp); /* 0x006ED562: pop edi */
    esi = POP32_VAL(esp); /* 0x006ED563: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x006ED564: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x006ED566: pop ebx */
    esp = ebp; /* 0x006ED567: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED569: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED56A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ED570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ED570u);

L_006ED570:
    PUSH32(esp, ebp); /* 0x006ED570: push ebp */
    ebp = esp; /* 0x006ED571: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006ED573: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006ED576: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006ED579: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006ED57E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = eax; /* 0x006ED580: mov dword ptr [esp + 0x38], eax */
    PUSH32(esp, ebx); /* 0x006ED584: push ebx */
    ebx = ecx; /* 0x006ED585: mov ebx, ecx */
    eax = ebx; /* 0x006ED587: mov eax, ebx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x006ED589: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x006ED589: shr eax, 8 */
    eax = (uint32_t)LO8(eax); /* 0x006ED58C: movzx eax, al */
    PUSH32(esp, esi); /* 0x006ED58F: push esi */
    PUSH32(esp, edi); /* 0x006ED590: push edi */
    edi = MEM32(eax * 4 + 0x925470); /* 0x006ED591: mov edi, dword ptr [eax*4 + 0x925470] */
    /* test edi, edi */ /* 0x006ED598: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED5C7; /* 0x006ED59A: je 0x6ed5c7 */
L_006ED59C:
    esi = (uint32_t)LO8(ebx); /* 0x006ED59C: movzx esi, bl */
    edx = 1; /* 0x006ED59F: mov edx, 1 */
    ecx = esi; /* 0x006ED5A4: mov ecx, esi */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x006ED5A6: shr esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 5u; /* 0x006ED5A6: shr esi, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x006ED5A9: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006ED5AC: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x006ED5AC: shl edx, cl */
    /* test MEM32(edi + esi * 4), edx */ /* 0x006ED5AE: test dword ptr [edi + esi*4], edx */
    _flag_a = (uint32_t)(MEM32(edi + esi * 4)); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED5C7; /* 0x006ED5B1: je 0x6ed5c7 */
L_006ED5B3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006ED5B3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006ED5B5: pop edi */
    esi = POP32_VAL(esp); /* 0x006ED5B6: pop esi */
    ebx = POP32_VAL(esp); /* 0x006ED5B7: pop ebx */
    ecx = MEM32(esp + 0x38); /* 0x006ED5B8: mov ecx, dword ptr [esp + 0x38] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006ED5BC: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006ED5BE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006ED5C3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED5C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED5C6: ret  */
L_006ED5C7:
    ecx = esp + 0xC; /* 0x006ED5C7: lea ecx, [esp + 0xc] */
    MEM32(esp + 0xC) = ebx; /* 0x006ED5CB: mov dword ptr [esp + 0xc], ebx */
    RECOMP_CALL(sub_006ED2F0); /* 0x006ED5CF: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006ED5D4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006ED5D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006ED5D8: pop edi */
    SET_LO8(ecx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006ED5D9: setg cl */
    eax = ecx; /* 0x006ED5DC: mov eax, ecx */
    ecx = MEM32(esp + 0x40); /* 0x006ED5DE: mov ecx, dword ptr [esp + 0x40] */
    esi = POP32_VAL(esp); /* 0x006ED5E2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006ED5E3: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006ED5E4: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006ED5E6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006ED5EB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED5ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED5EE: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ED5F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ED5F0u);

L_006ED5F0:
    PUSH32(esp, ebp); /* 0x006ED5F0: push ebp */
    ebp = esp; /* 0x006ED5F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006ED5F3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006ED5F6: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006ED5F9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006ED5FE: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = eax; /* 0x006ED600: mov dword ptr [esp + 0x38], eax */
    edx = MEM32(0x925478); /* 0x006ED604: mov edx, dword ptr [0x925478] */
    PUSH32(esp, esi); /* 0x006ED60A: push esi */
    esi = ecx; /* 0x006ED60B: mov esi, ecx */
    /* test edx, edx */ /* 0x006ED60D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED628; /* 0x006ED60F: je 0x6ed628 */
L_006ED611:
    /* test MEM8(edx), 2 */ /* 0x006ED611: test byte ptr [edx], 2 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED628; /* 0x006ED614: je 0x6ed628 */
L_006ED616:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006ED616: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006ED618: pop esi */
    ecx = MEM32(esp + 0x38); /* 0x006ED619: mov ecx, dword ptr [esp + 0x38] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006ED61D: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006ED61F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006ED624: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED626: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED627: ret  */
L_006ED628:
    PUSH32(esp, 0x38u); /* 0x006ED628: push 0x38 */
    eax = esp + 0x8; /* 0x006ED62A: lea eax, [esp + 8] */
    PUSH32(esp, 0); /* 0x006ED62E: push 0 */
    PUSH32(esp, eax); /* 0x006ED630: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x006ED631: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006ED636: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x4) = 0x201u; /* 0x006ED639: mov dword ptr [esp + 4], 0x201 */
    ecx = esp + 0x4; /* 0x006ED641: lea ecx, [esp + 4] */
    MEM32(esp + 0xC) = esi; /* 0x006ED645: mov dword ptr [esp + 0xc], esi */
    RECOMP_CALL(sub_006ED2F0); /* 0x006ED649: call 0x6ed2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006ED64E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006ED650: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006ED652: pop esi */
    SET_LO8(ecx, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006ED653: setg cl */
    eax = ecx; /* 0x006ED656: mov eax, ecx */
    ecx = MEM32(esp + 0x38); /* 0x006ED658: mov ecx, dword ptr [esp + 0x38] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006ED65C: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006ED65E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006ED663: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED665: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED666: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ED670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ED670u);

L_006ED670:
    PUSH32(esp, ebp); /* 0x006ED670: push ebp */
    ebp = esp; /* 0x006ED671: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006ED673: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x006ED676: push ecx */
    PUSH32(esp, esi); /* 0x006ED677: push esi */
    esi = ecx; /* 0x006ED678: mov esi, ecx */
    MEM32(esp + 0x4) = esi; /* 0x006ED67A: mov dword ptr [esp + 4], esi */
    RECOMP_CALL(sub_006EE3A0); /* 0x006ED67E: call 0x6ee3a0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0; /* 0x006ED683: mov dword ptr [eax], 0 */
    /* test esi, 0x2000u */ /* 0x006ED689: test esi, 0x2000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED69B; /* 0x006ED68F: je 0x6ed69b */
L_006ED691:
    _flag_a = (uint32_t)((esi | 0x200u)); _flag_b = (uint32_t)((esi | 0x200u));
    esi = esi | 0x200u; /* 0x006ED691: or esi, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x4) = esi; /* 0x006ED697: mov dword ptr [esp + 4], esi */
L_006ED69B:
    /* test esi, 0x220u */ /* 0x006ED69B: test esi, 0x220 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x220u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED6AD; /* 0x006ED6A1: je 0x6ed6ad */
L_006ED6A3:
    _flag_a = (uint32_t)((esi | 0x4000u)); _flag_b = (uint32_t)((esi | 0x4000u));
    esi = esi | 0x4000u; /* 0x006ED6A3: or esi, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x4) = esi; /* 0x006ED6A9: mov dword ptr [esp + 4], esi */
L_006ED6AD:
    /* test esi, 0x1200u */ /* 0x006ED6AD: test esi, 0x1200 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED6C6; /* 0x006ED6B3: je 0x6ed6c6 */
L_006ED6B5:
    RECOMP_CALL(sub_006FE8C0); /* 0x006ED6B5: call 0x6fe8c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006ED6BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006ED6C6; /* 0x006ED6BC: jns 0x6ed6c6 */
L_006ED6BE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006ED6BE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006ED6C1: pop esi */
    esp = ebp; /* 0x006ED6C2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED6C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED6C5: ret  */
L_006ED6C6:
    RECOMP_CALL(sub_006EDFA0); /* 0x006ED6C6: call 0x6edfa0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x4); /* 0x006ED6CB: mov eax, dword ptr [esp + 4] */
    /* test eax, 0x4000u */ /* 0x006ED6CF: test eax, 0x4000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED700; /* 0x006ED6D4: je 0x6ed700 */
L_006ED6D6:
    SET_LO8(ecx, MEM8(0x92587E)); /* 0x006ED6D6: mov cl, byte ptr [0x92587e] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED6DC: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED6F8; /* 0x006ED6DE: jne 0x6ed6f8 */
L_006ED6E0:
    RECOMP_CALL(sub_006ECDE0); /* 0x006ED6E0: call 0x6ecde0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006ED6E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006ED6BE; /* 0x006ED6E7: js 0x6ed6be */
L_006ED6E9:
    RECOMP_CALL(sub_006FCE80); /* 0x006ED6E9: call 0x6fce80 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(0x92587E)); /* 0x006ED6EE: mov cl, byte ptr [0x92587e] */
    eax = MEM32(esp + 0x4); /* 0x006ED6F4: mov eax, dword ptr [esp + 4] */
L_006ED6F8:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x006ED6F8: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(0x92587E) = (uint8_t)(LO8(ecx)); /* 0x006ED6FA: mov byte ptr [0x92587e], cl */
L_006ED700:
    /* test LO8(eax), 1 */ /* 0x006ED700: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED729; /* 0x006ED702: je 0x6ed729 */
L_006ED704:
    SET_LO8(ecx, MEM8(0x925870)); /* 0x006ED704: mov cl, byte ptr [0x925870] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED70A: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED721; /* 0x006ED70C: jne 0x6ed721 */
L_006ED70E:
    RECOMP_CALL(sub_006FD930); /* 0x006ED70E: call 0x6fd930 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006ED713: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006ED6BE; /* 0x006ED715: js 0x6ed6be */
L_006ED717:
    SET_LO8(ecx, MEM8(0x925870)); /* 0x006ED717: mov cl, byte ptr [0x925870] */
    eax = MEM32(esp + 0x4); /* 0x006ED71D: mov eax, dword ptr [esp + 4] */
L_006ED721:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x006ED721: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(0x925870) = (uint8_t)(LO8(ecx)); /* 0x006ED723: mov byte ptr [0x925870], cl */
L_006ED729:
    /* test LO8(eax), 0x20u */ /* 0x006ED729: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED756; /* 0x006ED72B: je 0x6ed756 */
L_006ED72D:
    SET_LO8(ecx, MEM8(0x925875)); /* 0x006ED72D: mov cl, byte ptr [0x925875] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED733: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED74E; /* 0x006ED735: jne 0x6ed74e */
L_006ED737:
    RECOMP_CALL(sub_006EA7B0); /* 0x006ED737: call 0x6ea7b0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006ED73C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006ED6BE; /* 0x006ED73E: js 0x6ed6be */
L_006ED744:
    SET_LO8(ecx, MEM8(0x925875)); /* 0x006ED744: mov cl, byte ptr [0x925875] */
    eax = MEM32(esp + 0x4); /* 0x006ED74A: mov eax, dword ptr [esp + 4] */
L_006ED74E:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x006ED74E: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(0x925875) = (uint8_t)(LO8(ecx)); /* 0x006ED750: mov byte ptr [0x925875], cl */
L_006ED756:
    /* test LO8(eax), 0x10u */ /* 0x006ED756: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED783; /* 0x006ED758: je 0x6ed783 */
L_006ED75A:
    SET_LO8(ecx, MEM8(0x925874)); /* 0x006ED75A: mov cl, byte ptr [0x925874] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED760: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED77B; /* 0x006ED762: jne 0x6ed77b */
L_006ED764:
    RECOMP_CALL(sub_006F4840); /* 0x006ED764: call 0x6f4840 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006ED769: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006ED6BE; /* 0x006ED76B: js 0x6ed6be */
L_006ED771:
    SET_LO8(ecx, MEM8(0x925874)); /* 0x006ED771: mov cl, byte ptr [0x925874] */
    eax = MEM32(esp + 0x4); /* 0x006ED777: mov eax, dword ptr [esp + 4] */
L_006ED77B:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x006ED77B: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(0x925874) = (uint8_t)(LO8(ecx)); /* 0x006ED77D: mov byte ptr [0x925874], cl */
L_006ED783:
    /* test eax, 0x200u */ /* 0x006ED783: test eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED7B3; /* 0x006ED788: je 0x6ed7b3 */
L_006ED78A:
    SET_LO8(ecx, MEM8(0x925879)); /* 0x006ED78A: mov cl, byte ptr [0x925879] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED790: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED7AB; /* 0x006ED792: jne 0x6ed7ab */
L_006ED794:
    RECOMP_CALL(sub_006EE7D0); /* 0x006ED794: call 0x6ee7d0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006ED799: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006ED6BE; /* 0x006ED79B: js 0x6ed6be */
L_006ED7A1:
    SET_LO8(ecx, MEM8(0x925879)); /* 0x006ED7A1: mov cl, byte ptr [0x925879] */
    eax = MEM32(esp + 0x4); /* 0x006ED7A7: mov eax, dword ptr [esp + 4] */
L_006ED7AB:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x006ED7AB: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(0x925879) = (uint8_t)(LO8(ecx)); /* 0x006ED7AD: mov byte ptr [0x925879], cl */
L_006ED7B3:
    /* test eax, 0x2000u */ /* 0x006ED7B3: test eax, 0x2000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED7E3; /* 0x006ED7B8: je 0x6ed7e3 */
L_006ED7BA:
    SET_LO8(ecx, MEM8(0x92587D)); /* 0x006ED7BA: mov cl, byte ptr [0x92587d] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED7C0: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED7DB; /* 0x006ED7C2: jne 0x6ed7db */
L_006ED7C4:
    RECOMP_CALL(sub_006F25B0); /* 0x006ED7C4: call 0x6f25b0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006ED7C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006ED6BE; /* 0x006ED7CB: js 0x6ed6be */
L_006ED7D1:
    SET_LO8(ecx, MEM8(0x92587D)); /* 0x006ED7D1: mov cl, byte ptr [0x92587d] */
    eax = MEM32(esp + 0x4); /* 0x006ED7D7: mov eax, dword ptr [esp + 4] */
L_006ED7DB:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x006ED7DB: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(0x92587D) = (uint8_t)(LO8(ecx)); /* 0x006ED7DD: mov byte ptr [0x92587d], cl */
L_006ED7E3:
    /* test eax, 0x1000u */ /* 0x006ED7E3: test eax, 0x1000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED826; /* 0x006ED7E8: je 0x6ed826 */
L_006ED7EA:
    SET_LO8(eax, MEM8(0x92587C)); /* 0x006ED7EA: mov al, byte ptr [0x92587c] */
    /* test LO8(eax), LO8(eax) */ /* 0x006ED7EF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006ED81F; /* 0x006ED7F1: jne 0x6ed81f */
L_006ED7F3:
    RECOMP_CALL(sub_00714710); /* 0x006ED7F3: call 0x714710 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006ED7F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006ED6BE; /* 0x006ED7FA: js 0x6ed6be */
L_006ED800:
    RECOMP_CALL(sub_00713FF0); /* 0x006ED800: call 0x713ff0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006ED805: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006ED6BE; /* 0x006ED807: js 0x6ed6be */
L_006ED80D:
    /* cmp MEM32(0x87CC5C), 0 */ /* 0x006ED80D: cmp dword ptr [0x87cc5c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CC5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006ED6BE; /* 0x006ED814: jl 0x6ed6be */
L_006ED81A:
    SET_LO8(eax, MEM8(0x92587C)); /* 0x006ED81A: mov al, byte ptr [0x92587c] */
L_006ED81F:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x006ED81F: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(0x92587C) = (uint8_t)(LO8(eax)); /* 0x006ED821: mov byte ptr [0x92587c], al */
L_006ED826:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006ED826: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006ED828: pop esi */
    esp = ebp; /* 0x006ED829: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED82B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED82C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006ED830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006ED830u);

L_006ED830:
    PUSH32(esp, ebp); /* 0x006ED830: push ebp */
    ebp = esp; /* 0x006ED831: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006ED833: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006ED836: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x006ED839: mov eax, ecx */
    MEM32(esp + 0x4) = eax; /* 0x006ED83B: mov dword ptr [esp + 4], eax */
    /* test eax, 0x2000u */ /* 0x006ED83F: test eax, 0x2000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED882; /* 0x006ED844: je 0x6ed882 */
L_006ED846:
    SET_LO8(ecx, MEM8(0x92587D)); /* 0x006ED846: mov cl, byte ptr [0x92587d] */
    _flag_a = (uint32_t)((eax | 0x200u)); _flag_b = (uint32_t)((eax | 0x200u));
    eax = eax | 0x200u; /* 0x006ED84C: or eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x4) = eax; /* 0x006ED851: mov dword ptr [esp + 4], eax */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED855: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED882; /* 0x006ED857: je 0x6ed882 */
L_006ED859:
    /* cmp LO8(ecx), 1 */ /* 0x006ED859: cmp cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED867; /* 0x006ED85C: je 0x6ed867 */
L_006ED85E:
    /* cmp MEM32(0x87CBD8), 0 */ /* 0x006ED85E: cmp dword ptr [0x87cbd8], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED876; /* 0x006ED865: je 0x6ed876 */
L_006ED867:
    RECOMP_CALL(sub_006F2870); /* 0x006ED867: call 0x6f2870 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(0x92587D)); /* 0x006ED86C: mov cl, byte ptr [0x92587d] */
    eax = MEM32(esp + 0x4); /* 0x006ED872: mov eax, dword ptr [esp + 4] */
L_006ED876:
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED876: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED882; /* 0x006ED878: je 0x6ed882 */
L_006ED87A:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) - 1); /* 0x006ED87A: dec cl */
    _flag_k = FK_NARROW(FK_DEC, 24);
    MEM8(0x92587D) = (uint8_t)(LO8(ecx)); /* 0x006ED87C: mov byte ptr [0x92587d], cl */
L_006ED882:
    /* test eax, 0x200u */ /* 0x006ED882: test eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED8C5; /* 0x006ED887: je 0x6ed8c5 */
L_006ED889:
    SET_LO8(ecx, MEM8(0x925879)); /* 0x006ED889: mov cl, byte ptr [0x925879] */
    _flag_a = (uint32_t)((eax | 0x4000u)); _flag_b = (uint32_t)((eax | 0x4000u));
    eax = eax | 0x4000u; /* 0x006ED88F: or eax, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x4) = eax; /* 0x006ED894: mov dword ptr [esp + 4], eax */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED898: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED8C5; /* 0x006ED89A: je 0x6ed8c5 */
L_006ED89C:
    /* cmp LO8(ecx), 1 */ /* 0x006ED89C: cmp cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED8AA; /* 0x006ED89F: je 0x6ed8aa */
L_006ED8A1:
    /* cmp MEM32(0x87CBD8), 0 */ /* 0x006ED8A1: cmp dword ptr [0x87cbd8], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED8B9; /* 0x006ED8A8: je 0x6ed8b9 */
L_006ED8AA:
    RECOMP_CALL(sub_006EEB30); /* 0x006ED8AA: call 0x6eeb30 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(0x925879)); /* 0x006ED8AF: mov cl, byte ptr [0x925879] */
    eax = MEM32(esp + 0x4); /* 0x006ED8B5: mov eax, dword ptr [esp + 4] */
L_006ED8B9:
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED8B9: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED8C5; /* 0x006ED8BB: je 0x6ed8c5 */
L_006ED8BD:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) - 1); /* 0x006ED8BD: dec cl */
    _flag_k = FK_NARROW(FK_DEC, 24);
    MEM8(0x925879) = (uint8_t)(LO8(ecx)); /* 0x006ED8BF: mov byte ptr [0x925879], cl */
L_006ED8C5:
    /* test eax, 0x1000u */ /* 0x006ED8C5: test eax, 0x1000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED909; /* 0x006ED8CA: je 0x6ed909 */
L_006ED8CC:
    SET_LO8(ecx, MEM8(0x92587C)); /* 0x006ED8CC: mov cl, byte ptr [0x92587c] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED8D2: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED909; /* 0x006ED8D4: je 0x6ed909 */
L_006ED8D6:
    /* cmp LO8(ecx), 1 */ /* 0x006ED8D6: cmp cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED8E4; /* 0x006ED8D9: je 0x6ed8e4 */
L_006ED8DB:
    /* cmp MEM32(0x87CBD8), 0 */ /* 0x006ED8DB: cmp dword ptr [0x87cbd8], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED8FD; /* 0x006ED8E2: je 0x6ed8fd */
L_006ED8E4:
    RECOMP_CALL(sub_006FFB90); /* 0x006ED8E4: call 0x6ffb90 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(0x92587C)); /* 0x006ED8E9: mov cl, byte ptr [0x92587c] */
    eax = MEM32(esp + 0x4); /* 0x006ED8EF: mov eax, dword ptr [esp + 4] */
    MEM32(0x87CBF4) = 0; /* 0x006ED8F3: mov dword ptr [0x87cbf4], 0 */
L_006ED8FD:
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED8FD: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED909; /* 0x006ED8FF: je 0x6ed909 */
L_006ED901:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) - 1); /* 0x006ED901: dec cl */
    _flag_k = FK_NARROW(FK_DEC, 24);
    MEM8(0x92587C) = (uint8_t)(LO8(ecx)); /* 0x006ED903: mov byte ptr [0x92587c], cl */
L_006ED909:
    /* test LO8(eax), 0x10u */ /* 0x006ED909: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED940; /* 0x006ED90B: je 0x6ed940 */
L_006ED90D:
    SET_LO8(ecx, MEM8(0x925874)); /* 0x006ED90D: mov cl, byte ptr [0x925874] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED913: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED940; /* 0x006ED915: je 0x6ed940 */
L_006ED917:
    /* cmp LO8(ecx), 1 */ /* 0x006ED917: cmp cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED925; /* 0x006ED91A: je 0x6ed925 */
L_006ED91C:
    /* cmp MEM32(0x87CBD8), 0 */ /* 0x006ED91C: cmp dword ptr [0x87cbd8], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED934; /* 0x006ED923: je 0x6ed934 */
L_006ED925:
    RECOMP_CALL(sub_006F51C0); /* 0x006ED925: call 0x6f51c0 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(0x925874)); /* 0x006ED92A: mov cl, byte ptr [0x925874] */
    eax = MEM32(esp + 0x4); /* 0x006ED930: mov eax, dword ptr [esp + 4] */
L_006ED934:
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED934: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED940; /* 0x006ED936: je 0x6ed940 */
L_006ED938:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) - 1); /* 0x006ED938: dec cl */
    _flag_k = FK_NARROW(FK_DEC, 24);
    MEM8(0x925874) = (uint8_t)(LO8(ecx)); /* 0x006ED93A: mov byte ptr [0x925874], cl */
L_006ED940:
    /* test LO8(eax), 0x20u */ /* 0x006ED940: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED980; /* 0x006ED942: je 0x6ed980 */
L_006ED944:
    SET_LO8(ecx, MEM8(0x925875)); /* 0x006ED944: mov cl, byte ptr [0x925875] */
    _flag_a = (uint32_t)((eax | 0x4000u)); _flag_b = (uint32_t)((eax | 0x4000u));
    eax = eax | 0x4000u; /* 0x006ED94A: or eax, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x4) = eax; /* 0x006ED94F: mov dword ptr [esp + 4], eax */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED953: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED980; /* 0x006ED955: je 0x6ed980 */
L_006ED957:
    /* cmp LO8(ecx), 1 */ /* 0x006ED957: cmp cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED965; /* 0x006ED95A: je 0x6ed965 */
L_006ED95C:
    /* cmp MEM32(0x87CBD8), 0 */ /* 0x006ED95C: cmp dword ptr [0x87cbd8], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED974; /* 0x006ED963: je 0x6ed974 */
L_006ED965:
    RECOMP_CALL(sub_006EC430); /* 0x006ED965: call 0x6ec430 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(0x925875)); /* 0x006ED96A: mov cl, byte ptr [0x925875] */
    eax = MEM32(esp + 0x4); /* 0x006ED970: mov eax, dword ptr [esp + 4] */
L_006ED974:
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED974: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED980; /* 0x006ED976: je 0x6ed980 */
L_006ED978:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) - 1); /* 0x006ED978: dec cl */
    _flag_k = FK_NARROW(FK_DEC, 24);
    MEM8(0x925875) = (uint8_t)(LO8(ecx)); /* 0x006ED97A: mov byte ptr [0x925875], cl */
L_006ED980:
    /* test LO8(eax), 1 */ /* 0x006ED980: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED9B7; /* 0x006ED982: je 0x6ed9b7 */
L_006ED984:
    SET_LO8(ecx, MEM8(0x925870)); /* 0x006ED984: mov cl, byte ptr [0x925870] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED98A: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED9B7; /* 0x006ED98C: je 0x6ed9b7 */
L_006ED98E:
    /* cmp LO8(ecx), 1 */ /* 0x006ED98E: cmp cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED99C; /* 0x006ED991: je 0x6ed99c */
L_006ED993:
    /* cmp MEM32(0x87CBD8), 0 */ /* 0x006ED993: cmp dword ptr [0x87cbd8], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED9AB; /* 0x006ED99A: je 0x6ed9ab */
L_006ED99C:
    RECOMP_CALL(sub_006FDA10); /* 0x006ED99C: call 0x6fda10 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(0x925870)); /* 0x006ED9A1: mov cl, byte ptr [0x925870] */
    eax = MEM32(esp + 0x4); /* 0x006ED9A7: mov eax, dword ptr [esp + 4] */
L_006ED9AB:
    /* test LO8(ecx), LO8(ecx) */ /* 0x006ED9AB: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED9B7; /* 0x006ED9AD: je 0x6ed9b7 */
L_006ED9AF:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) - 1); /* 0x006ED9AF: dec cl */
    _flag_k = FK_NARROW(FK_DEC, 24);
    MEM8(0x925870) = (uint8_t)(LO8(ecx)); /* 0x006ED9B1: mov byte ptr [0x925870], cl */
L_006ED9B7:
    /* test eax, 0x4000u */ /* 0x006ED9B7: test eax, 0x4000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED9EE; /* 0x006ED9BC: je 0x6ed9ee */
L_006ED9BE:
    SET_LO8(eax, MEM8(0x92587E)); /* 0x006ED9BE: mov al, byte ptr [0x92587e] */
    /* test LO8(eax), LO8(eax) */ /* 0x006ED9C3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED9EE; /* 0x006ED9C5: je 0x6ed9ee */
L_006ED9C7:
    /* cmp LO8(eax), 1 */ /* 0x006ED9C7: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED9D4; /* 0x006ED9C9: je 0x6ed9d4 */
L_006ED9CB:
    /* cmp MEM32(0x87CBD8), 0 */ /* 0x006ED9CB: cmp dword ptr [0x87cbd8], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006ED9E3; /* 0x006ED9D2: je 0x6ed9e3 */
L_006ED9D4:
    RECOMP_CALL(sub_006FCEF0); /* 0x006ED9D4: call 0x6fcef0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_006ECC70); /* 0x006ED9D9: call 0x6ecc70 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(0x92587E)); /* 0x006ED9DE: mov al, byte ptr [0x92587e] */
L_006ED9E3:
    /* test LO8(eax), LO8(eax) */ /* 0x006ED9E3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006ED9EE; /* 0x006ED9E5: je 0x6ed9ee */
L_006ED9E7:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x006ED9E7: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    MEM8(0x92587E) = (uint8_t)(LO8(eax)); /* 0x006ED9E9: mov byte ptr [0x92587e], al */
L_006ED9EE:
    esp = ebp; /* 0x006ED9EE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006ED9F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006ED9F1: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EDA00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EDA00u);

L_006EDA00:
    PUSH32(esp, ebx); /* 0x006EDA00: push ebx */
    ebx = ecx; /* 0x006EDA01: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EDA03: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x006EDA05: push esi */
    edx = ebx; /* 0x006EDA06: mov edx, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006EDA08: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x006EDA0A: mov eax, ebx */
    PUSH32(esp, edi); /* 0x006EDA0C: push edi */
    edi = 0x20u; /* 0x006EDA0D: mov edi, 0x20 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFF0000u);
    edx = edx & 0xFFFF0000u; /* 0x006EDA12: and edx, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDA20; /* 0x006EDA18: je 0x6eda20 */
L_006EDA1A:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006EDA1A: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006EDA1A: shr eax, 0x10 */
    ecx = edi + (-0x10); /* 0x006EDA1D: lea ecx, [edi - 0x10] */
L_006EDA20:
    /* test eax, 0xFF00u */ /* 0x006EDA20: test eax, 0xff00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDA2D; /* 0x006EDA25: je 0x6eda2d */
L_006EDA27:
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x006EDA27: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x006EDA27: shr eax, 8 */
    _flag_a = (uint32_t)((ecx | 8)); _flag_b = (uint32_t)((ecx | 8));
    ecx = ecx | 8; /* 0x006EDA2A: or ecx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EDA2D:
    /* test LO8(eax), 0xF0u */ /* 0x006EDA2D: test al, 0xf0 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xF0u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDA37; /* 0x006EDA2F: je 0x6eda37 */
L_006EDA31:
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x006EDA31: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x006EDA31: shr eax, 4 */
    _flag_a = (uint32_t)((ecx | 4)); _flag_b = (uint32_t)((ecx | 4));
    ecx = ecx | 4; /* 0x006EDA34: or ecx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EDA37:
    /* test LO8(eax), 0xCu */ /* 0x006EDA37: test al, 0xc */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xCu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDA41; /* 0x006EDA39: je 0x6eda41 */
L_006EDA3B:
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x006EDA3B: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x006EDA3B: shr eax, 2 */
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x006EDA3E: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EDA41:
    /* test LO8(eax), 2 */ /* 0x006EDA41: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDA48; /* 0x006EDA43: je 0x6eda48 */
L_006EDA45:
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x006EDA45: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EDA48:
    eax = ecx + 0x1; /* 0x006EDA48: lea eax, [ecx + 1] */
    /* cmp eax, 0x20u */ /* 0x006EDA4B: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006EDA8B; /* 0x006EDA4E: jg 0x6eda8b */
L_006EDA50:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006EDA50: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x006EDA52: mov eax, ebx */
    /* test edx, edx */ /* 0x006EDA54: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDA60; /* 0x006EDA56: je 0x6eda60 */
L_006EDA58:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x006EDA58: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x006EDA58: shr eax, 0x10 */
    ecx = 0x10u; /* 0x006EDA5B: mov ecx, 0x10 */
L_006EDA60:
    /* test eax, 0xFF00u */ /* 0x006EDA60: test eax, 0xff00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDA6D; /* 0x006EDA65: je 0x6eda6d */
L_006EDA67:
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x006EDA67: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x006EDA67: shr eax, 8 */
    _flag_a = (uint32_t)((ecx | 8)); _flag_b = (uint32_t)((ecx | 8));
    ecx = ecx | 8; /* 0x006EDA6A: or ecx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EDA6D:
    /* test LO8(eax), 0xF0u */ /* 0x006EDA6D: test al, 0xf0 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xF0u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDA77; /* 0x006EDA6F: je 0x6eda77 */
L_006EDA71:
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x006EDA71: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x006EDA71: shr eax, 4 */
    _flag_a = (uint32_t)((ecx | 4)); _flag_b = (uint32_t)((ecx | 4));
    ecx = ecx | 4; /* 0x006EDA74: or ecx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EDA77:
    /* test LO8(eax), 0xCu */ /* 0x006EDA77: test al, 0xc */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xCu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDA81; /* 0x006EDA79: je 0x6eda81 */
L_006EDA7B:
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x006EDA7B: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x006EDA7B: shr eax, 2 */
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x006EDA7E: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EDA81:
    /* test LO8(eax), 2 */ /* 0x006EDA81: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDA88; /* 0x006EDA83: je 0x6eda88 */
L_006EDA85:
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x006EDA85: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EDA88:
    edi = ecx + 0x1; /* 0x006EDA88: lea edi, [ecx + 1] */
L_006EDA8B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006EDA8B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x006EDA8D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EDAAD; /* 0x006EDA8F: jle 0x6edaad */
L_006EDA91:
    ecx = edx + 0x1; /* 0x006EDA91: lea ecx, [edx + 1] */
L_006EDA94:
    /* test LO8(ebx), 1 */ /* 0x006EDA94: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDAA4; /* 0x006EDA97: je 0x6edaa4 */
L_006EDA99:
    /* cmp MEM8(edx + 0x925870), 0 */ /* 0x006EDA99: cmp byte ptr [edx + 0x925870], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x925870)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_006EDAA4; /* 0x006EDAA0: jbe 0x6edaa4 */
L_006EDAA2:
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x006EDAA2: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_006EDAA4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006EDAA4: inc edx */
    _flag_k = FK_INC;
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x006EDAA5: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x006EDAA5: shr ebx, 1 */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x006EDAA7: rol ecx, 1 */
    /* cmp edx, edi */ /* 0x006EDAA9: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006EDA94; /* 0x006EDAAB: jl 0x6eda94 */
L_006EDAAD:
    edi = POP32_VAL(esp); /* 0x006EDAAD: pop edi */
    eax = esi; /* 0x006EDAAE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006EDAB0: pop esi */
    ebx = POP32_VAL(esp); /* 0x006EDAB1: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EDAB2: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EDAC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EDAC0u);

L_006EDAC0:
    PUSH32(esp, esi); /* 0x006EDAC0: push esi */
    MEM32(0x87CBD8) = 1; /* 0x006EDAC1: mov dword ptr [0x87cbd8], 1 */
    RECOMP_CALL(sub_006FE9C0); /* 0x006EDACB: call 0x6fe9c0 */
    RECOMP_FLAGS_IN();
    ecx = 0x7231u; /* 0x006EDAD0: mov ecx, 0x7231 */
    RECOMP_CALL(sub_006ED830); /* 0x006EDAD5: call 0x6ed830 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006EDADA: push 0 */
    edx = 0x006EDF40u; /* 0x006EDADC: mov edx, 0x6edf40 */
    ecx = 0x0080434Cu; /* 0x006EDAE1: mov ecx, 0x80434c */
    RECOMP_CALL(sub_006F5C00); /* 0x006EDAE6: call 0x6f5c00 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBDC); /* 0x006EDAEB: mov eax, dword ptr [0x87cbdc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EDAF0: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EDAF3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDB08; /* 0x006EDAF5: je 0x6edb08 */
L_006EDAF7:
    PUSH32(esp, eax); /* 0x006EDAF7: push eax */
    RECOMP_ICALL(MEM32(0x7CC910)); /* 0x006EDAF8: call dword ptr [0x7cc910] */
    RECOMP_FLAGS_IN();
    MEM32(0x87CBDC) = 0; /* 0x006EDAFE: mov dword ptr [0x87cbdc], 0 */
L_006EDB08:
    MEM32(0x87CBE0) = 0; /* 0x006EDB08: mov dword ptr [0x87cbe0], 0 */
    MEM32(0x87CBE4) = 0; /* 0x006EDB12: mov dword ptr [0x87cbe4], 0 */
    RECOMP_CALL(sub_006F5CA0); /* 0x006EDB1C: call 0x6f5ca0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_006FD1F0); /* 0x006EDB21: call 0x6fd1f0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x87CC28); /* 0x006EDB26: mov esi, dword ptr [0x87cc28] */
    /* test esi, esi */ /* 0x006EDB2C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDB4B; /* 0x006EDB2E: je 0x6edb4b */
L_006EDB30:
    PUSH32(esp, esi); /* 0x006EDB30: push esi */
    RECOMP_ICALL(MEM32(0x7CC15C)); /* 0x006EDB31: call dword ptr [0x7cc15c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006EDB37: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006EDB38: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EDB3E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x87CC28) = 0; /* 0x006EDB41: mov dword ptr [0x87cc28], 0 */
L_006EDB4B:
    RECOMP_CALL(sub_006FCFB0); /* 0x006EDB4B: call 0x6fcfb0 */
    RECOMP_FLAGS_IN();
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006EDB50: xorps xmm0, xmm0 */
    MEM32(0x87CBD8) = 0; /* 0x006EDB53: mov dword ptr [0x87cbd8], 0 */
    xmm_st(0x925870, _xmm[0]); /* 0x006EDB5D: movdqa xmmword ptr [0x925870], xmm0 */
    xmm_st(0x925880, _xmm[0]); /* 0x006EDB65: movdqa xmmword ptr [0x925880], xmm0 */
    esi = POP32_VAL(esp); /* 0x006EDB6D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EDB6E: ret  */
    RECOMP_REGS_OUT();
}

void sub_006EDB70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EDB70u);

L_006EDB70:
    PUSH32(esp, ebp); /* 0x006EDB70: push ebp */
    ebp = esp; /* 0x006EDB71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006EDB73: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006EDB76: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006EDB79: push ebx */
    PUSH32(esp, esi); /* 0x006EDB7A: push esi */
    PUSH32(esp, edi); /* 0x006EDB7B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006EDB7C: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x006EDB7F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDCF4; /* 0x006EDB81: je 0x6edcf4 */
L_006EDB87:
    RECOMP_CALL(sub_006EE3A0); /* 0x006EDB87: call 0x6ee3a0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x006EDB8C: mov ebx, eax */
    ecx = edi; /* 0x006EDB8E: mov ecx, edi */
    MEM32(ebx) = 1; /* 0x006EDB90: mov dword ptr [ebx], 1 */
    edx = ebx + 0x4; /* 0x006EDB96: lea edx, [ebx + 4] */
    esi = ecx + 0x1; /* 0x006EDB99: lea esi, [ecx + 1] */
    esp = esp; /* 0x006EDB9C: lea esp, [esp] */
L_006EDBA0:
    SET_LO8(eax, MEM8(ecx)); /* 0x006EDBA0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EDBA2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006EDBA3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EDBA0; /* 0x006EDBA5: jne 0x6edba0 */
L_006EDBA7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x006EDBA7: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = 0x7Fu; /* 0x006EDBA9: mov esi, 0x7f */
    /* cmp ecx, esi */ /* 0x006EDBAE: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = ecx; } /* 0x006EDBB0: cmovb esi, ecx */
    PUSH32(esp, esi); /* 0x006EDBB3: push esi */
    PUSH32(esp, edi); /* 0x006EDBB4: push edi */
    PUSH32(esp, edx); /* 0x006EDBB5: push edx */
    RECOMP_CALL(sub_00780838); /* 0x006EDBB6: call 0x780838 */
    RECOMP_FLAGS_IN();
    MEM8(esi + ebx + 0x4) = (uint8_t)(0); /* 0x006EDBBB: mov byte ptr [esi + ebx + 4], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EDBC0: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x84) = 0; /* 0x006EDBC3: mov dword ptr [ebx + 0x84], 0 */
    SET_LO8(eax, MEM8(edi)); /* 0x006EDBCD: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x006EDBCF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDCDF; /* 0x006EDBD1: je 0x6edcdf */
L_006EDBD7:
    edx = ebp + 0xC; /* 0x006EDBD7: lea edx, [ebp + 0xc] */
    esi = ebp + 0x8; /* 0x006EDBDA: lea esi, [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x006EDBDD: sub edx, 8 */
    _flag_k = FK_CMP;
L_006EDBE0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EDBE0: inc edi */
    _flag_k = FK_INC;
    /* cmp LO8(eax), 0x25u */ /* 0x006EDBE1: cmp al, 0x25 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EDCD5; /* 0x006EDBE3: jne 0x6edcd5 */
L_006EDBE9:
    esp = esp; /* 0x006EDBE9: lea esp, [esp] */
L_006EDBF0:
    SET_LO8(eax, MEM8(edi)); /* 0x006EDBF0: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x2Eu */ /* 0x006EDBF2: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EDBFE; /* 0x006EDBF4: je 0x6edbfe */
L_006EDBF6:
    /* cmp LO8(eax), 0x30u */ /* 0x006EDBF6: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_006EDC01; /* 0x006EDBF8: jl 0x6edc01 */
L_006EDBFA:
    /* cmp LO8(eax), 0x39u */ /* 0x006EDBFA: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_006EDC01; /* 0x006EDBFC: jg 0x6edc01 */
L_006EDBFE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EDBFE: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_006EDBF0; /* 0x006EDBFF: jmp 0x6edbf0 */
L_006EDC01:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x006EDC01: movsx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EDC04: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = edi; /* 0x006EDC05: mov dword ptr [ebp + 8], edi */
    /* cmp eax, 0x78u */ /* 0x006EDC08: cmp eax, 0x78 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006EDCCC; /* 0x006EDC0B: ja 0x6edccc */
L_006EDC11:
    eax = (uint32_t)MEM8(eax + 0x6EDD14); /* 0x006EDC11: movzx eax, byte ptr [eax + 0x6edd14] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6EDD00)); goto _ljump; }
L_006EDC1F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006EDC1F: dec edi */
    _flag_k = FK_DEC;
    goto L_006EDCCC; /* 0x006EDC20: jmp 0x6edccc */
L_006EDC25:
    ecx = MEM32(ebx + 0x84); /* 0x006EDC25: mov ecx, dword ptr [ebx + 0x84] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006EDC2B: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x006EDC2E: add edx, 4 */
    _flag_k = FK_ADD;
    if (7u) _cf = (((ecx) >> 25) & 1u); /* 0x006EDC31: shl ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 7u; /* 0x006EDC31: shl ecx, 7 */
    eax = MEM32(esi); /* 0x006EDC34: mov eax, dword ptr [esi] */
    MEM32(ecx + ebx + 0x88) = eax; /* 0x006EDC36: mov dword ptr [ecx + ebx + 0x88], eax */
    goto L_006EDCC6; /* 0x006EDC3D: jmp 0x6edcc6 */
L_006EDC42:
    eax = MEM32(ebx + 0x84); /* 0x006EDC42: mov eax, dword ptr [ebx + 0x84] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x006EDC48: add edx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x006EDC4B: add esi, 8 */
    _flag_k = FK_ADD;
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x006EDC4E: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x006EDC4E: shl eax, 7 */
    _xmm[0].u64[0] = MEM64(edx); _xmm[0].u64[1] = 0; /* 0x006EDC51: movsd xmm0, qword ptr [edx] */
    MEM64(eax + ebx + 0x88) = _xmm[0].u64[0]; /* 0x006EDC55: movsd qword ptr [eax + ebx + 0x88], xmm0 */
    goto L_006EDCC6; /* 0x006EDC5E: jmp 0x6edcc6 */
L_006EDC60:
    eax = MEM32(esi + 0x4); /* 0x006EDC60: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x006EDC63: add esi, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x84); /* 0x006EDC66: mov ecx, dword ptr [ebx + 0x84] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x006EDC6C: add edx, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EDC6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = edx; /* 0x006EDC71: mov dword ptr [esp + 0x10], edx */
    edx = 0x00804308u; /* 0x006EDC75: mov edx, 0x804308 */
    MEM32(esp + 0x14) = esi; /* 0x006EDC7A: mov dword ptr [esp + 0x14], esi */
    if (TEST_NZ(_flag_a, _flag_b)) { edx = eax; } /* 0x006EDC7E: cmovne edx, eax */
    if (7u) _cf = (((ecx) >> 25) & 1u); /* 0x006EDC81: shl ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 7u; /* 0x006EDC81: shl ecx, 7 */
    eax = ecx + 0x88; /* 0x006EDC84: lea eax, [ecx + 0x88] */
    ecx = edx; /* 0x006EDC8A: mov ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x006EDC8C: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(esp + 0xC) = eax; /* 0x006EDC8E: mov dword ptr [esp + 0xc], eax */
    esi = ecx + 0x1; /* 0x006EDC92: lea esi, [ecx + 1] */
L_006EDC95:
    SET_LO8(eax, MEM8(ecx)); /* 0x006EDC95: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EDC97: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006EDC98: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EDC95; /* 0x006EDC9A: jne 0x6edc95 */
L_006EDC9C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x006EDC9C: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = 0x7Fu; /* 0x006EDC9E: mov esi, 0x7f */
    /* cmp ecx, esi */ /* 0x006EDCA3: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = ecx; } /* 0x006EDCA5: cmovb esi, ecx */
    PUSH32(esp, esi); /* 0x006EDCA8: push esi */
    PUSH32(esp, edx); /* 0x006EDCA9: push edx */
    PUSH32(esp, MEM32(esp + 0x14)); /* 0x006EDCAA: push dword ptr [esp + 0x14] */
    RECOMP_CALL(sub_00780838); /* 0x006EDCAE: call 0x780838 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x18); /* 0x006EDCB3: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EDCB7: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = MEM32(esp + 0x10); /* 0x006EDCBA: mov edx, dword ptr [esp + 0x10] */
    MEM8(esi + eax) = (uint8_t)(0); /* 0x006EDCBE: mov byte ptr [esi + eax], 0 */
    esi = MEM32(esp + 0x14); /* 0x006EDCC2: mov esi, dword ptr [esp + 0x14] */
L_006EDCC6:
    _flag_a = (uint32_t)(MEM32(ebx + 0x84)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x84) = MEM32(ebx + 0x84) + 1; /* 0x006EDCC6: inc dword ptr [ebx + 0x84] */
    _flag_k = FK_INC;
L_006EDCCC:
    /* cmp MEM32(ebx + 0x84), 5 */ /* 0x006EDCCC: cmp dword ptr [ebx + 0x84], 5 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x84)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006EDCDF; /* 0x006EDCD3: jge 0x6edcdf */
L_006EDCD5:
    SET_LO8(eax, MEM8(edi)); /* 0x006EDCD5: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x006EDCD7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EDBE0; /* 0x006EDCD9: jne 0x6edbe0 */
L_006EDCDF:
    RECOMP_CALL(sub_006EDD90); /* 0x006EDCDF: call 0x6edd90 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006EDCE4: push eax */
    PUSH32(esp, 0x00800A98u); /* 0x006EDCE5: push 0x800a98 */
    PUSH32(esp, 1); /* 0x006EDCEA: push 1 */
    RECOMP_CALL(sub_006FD020); /* 0x006EDCEC: call 0x6fd020 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006EDCF1: add esp, 0xc */
    _flag_k = FK_ADD;
L_006EDCF4:
    edi = POP32_VAL(esp); /* 0x006EDCF4: pop edi */
    esi = POP32_VAL(esp); /* 0x006EDCF5: pop esi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006EDCF6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006EDCF9: pop ebx */
    esp = ebp; /* 0x006EDCFA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EDCFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EDCFD: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006EDC1Fu: goto L_006EDC1F;
      case 0x006EDC25u: goto L_006EDC25;
      case 0x006EDC42u: goto L_006EDC42;
      case 0x006EDC60u: goto L_006EDC60;
      case 0x006EDCCCu: goto L_006EDCCC;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006EDD90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EDD90u);

L_006EDD90:
    PUSH32(esp, ebp); /* 0x006EDD90: push ebp */
    ebp = esp; /* 0x006EDD91: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x006EDD93: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006EDD96: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006EDD9B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006EDD9D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006EDDA0: push ebx */
    PUSH32(esp, esi); /* 0x006EDDA1: push esi */
    PUSH32(esp, edi); /* 0x006EDDA2: push edi */
    MEM8(0x925890) = (uint8_t)(0); /* 0x006EDDA3: mov byte ptr [0x925890], 0 */
    ebx = 0x3FFu; /* 0x006EDDAA: mov ebx, 0x3ff */
    RECOMP_CALL(sub_006EE3A0); /* 0x006EDDAF: call 0x6ee3a0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0 */ /* 0x006EDDB4: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EDEB1; /* 0x006EDDB7: je 0x6edeb1 */
L_006EDDBD:
    SET_LO8(ecx, MEM8(eax + 0x4)); /* 0x006EDDBD: mov cl, byte ptr [eax + 4] */
    esi = eax + 0x4; /* 0x006EDDC0: lea esi, [eax + 4] */
    edi = 0x00925890u; /* 0x006EDDC3: mov edi, 0x925890 */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006EDDC8: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDEAE; /* 0x006EDDCA: je 0x6edeae */
L_006EDDD0:
    edx = eax + 0x88; /* 0x006EDDD0: lea edx, [eax + 0x88] */
    MEM32(ebp + (-0x28)) = edx; /* 0x006EDDD6: mov dword ptr [ebp - 0x28], edx */
    esp = esp; /* 0x006EDDD9: lea esp, [esp] */
L_006EDDE0:
    /* test ebx, ebx */ /* 0x006EDDE0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EDEA9; /* 0x006EDDE2: jle 0x6edea9 */
L_006EDDE8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EDDE8: inc esi */
    _flag_k = FK_INC;
    /* cmp LO8(ecx), 0x25u */ /* 0x006EDDE9: cmp cl, 0x25 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006EDE99; /* 0x006EDDEC: jne 0x6ede99 */
L_006EDDF2:
    MEM8(ebp + (-0x24)) = (uint8_t)(LO8(ecx)); /* 0x006EDDF2: mov byte ptr [ebp - 0x24], cl */
    ecx = ebp + (-0x23); /* 0x006EDDF5: lea ecx, [ebp - 0x23] */
L_006EDDF8:
    SET_LO8(eax, MEM8(esi)); /* 0x006EDDF8: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x2Eu */ /* 0x006EDDFA: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EDE06; /* 0x006EDDFC: je 0x6ede06 */
L_006EDDFE:
    /* cmp LO8(eax), 0x30u */ /* 0x006EDDFE: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_006EDE13; /* 0x006EDE00: jl 0x6ede13 */
L_006EDE02:
    /* cmp LO8(eax), 0x39u */ /* 0x006EDE02: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_006EDE13; /* 0x006EDE04: jg 0x6ede13 */
L_006EDE06:
    edx = ebp + (-0x6); /* 0x006EDE06: lea edx, [ebp - 6] */
    /* cmp ecx, edx */ /* 0x006EDE09: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006EDE13; /* 0x006EDE0B: jae 0x6ede13 */
L_006EDE0D:
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x006EDE0D: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EDE0F: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EDE10: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_006EDDF8; /* 0x006EDE11: jmp 0x6eddf8 */
L_006EDE13:
    SET_LO8(eax, MEM8(esi)); /* 0x006EDE13: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006EDE15: inc esi */
    _flag_k = FK_INC;
    edx = MEM32(ebp + (-0x28)); /* 0x006EDE16: mov edx, dword ptr [ebp - 0x28] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x006EDE19: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006EDE1B: inc ecx */
    _flag_k = FK_INC;
    MEM8(ecx) = (uint8_t)(0); /* 0x006EDE1C: mov byte ptr [ecx], 0 */
    eax = (int32_t)(int8_t)MEM8(ecx + (-0x1)); /* 0x006EDE1F: movsx eax, byte ptr [ecx - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFDBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFDBu; /* 0x006EDE23: add eax, -0x25 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x53u */ /* 0x006EDE26: cmp eax, 0x53 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x53u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006EDE9D; /* 0x006EDE29: ja 0x6ede9d */
L_006EDE2B:
    eax = (uint32_t)MEM8(eax + 0x6EDEE0); /* 0x006EDE2B: movzx eax, byte ptr [eax + 0x6edee0] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x6EDEC8)); goto _ljump; }
L_006EDE39:
    MEM8(edi) = (uint8_t)(0x25u); /* 0x006EDE39: mov byte ptr [edi], 0x25 */
    goto L_006EDE9B; /* 0x006EDE3C: jmp 0x6ede9b */
L_006EDE3E:
    PUSH32(esp, MEM32(edx)); /* 0x006EDE3E: push dword ptr [edx] */
    eax = ebp + (-0x24); /* 0x006EDE40: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x006EDE43: push eax */
    PUSH32(esp, ebx); /* 0x006EDE44: push ebx */
    PUSH32(esp, edi); /* 0x006EDE45: push edi */
    RECOMP_CALL(sub_006F2E40); /* 0x006EDE46: call 0x6f2e40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) - 0xFFFFFF80u; /* 0x006EDE4B: sub dword ptr [ebp - 0x28], -0x80 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006EDE4F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006EDE52: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EDE9D; /* 0x006EDE54: jle 0x6ede9d */
L_006EDE56:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x006EDE56: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x006EDE58: sub ebx, eax */
    _flag_k = FK_CMP;
    goto L_006EDE9D; /* 0x006EDE5A: jmp 0x6ede9d */
L_006EDE5C:
    _xmm[0].u64[0] = MEM64(edx); _xmm[0].u64[1] = 0; /* 0x006EDE5C: movsd xmm0, qword ptr [edx] */
    eax = ebp + (-0x24); /* 0x006EDE60: lea eax, [ebp - 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006EDE63: sub esp, 8 */
    _flag_k = FK_CMP;
    MEM64(esp) = _xmm[0].u64[0]; /* 0x006EDE66: movsd qword ptr [esp], xmm0 */
    PUSH32(esp, eax); /* 0x006EDE6B: push eax */
    PUSH32(esp, ebx); /* 0x006EDE6C: push ebx */
    PUSH32(esp, edi); /* 0x006EDE6D: push edi */
    RECOMP_CALL(sub_006F2E40); /* 0x006EDE6E: call 0x6f2e40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006EDE73: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_006EDE8B; /* 0x006EDE76: jmp 0x6ede8b */
L_006EDE78:
    PUSH32(esp, MEM32(edx)); /* 0x006EDE78: push dword ptr [edx] */
    goto L_006EDE7D; /* 0x006EDE7A: jmp 0x6ede7d */
L_006EDE7C:
    PUSH32(esp, edx); /* 0x006EDE7C: push edx */
L_006EDE7D:
    eax = ebp + (-0x24); /* 0x006EDE7D: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x006EDE80: push eax */
    PUSH32(esp, ebx); /* 0x006EDE81: push ebx */
    PUSH32(esp, edi); /* 0x006EDE82: push edi */
    RECOMP_CALL(sub_006F2E40); /* 0x006EDE83: call 0x6f2e40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006EDE88: add esp, 0x10 */
    _flag_k = FK_ADD;
L_006EDE8B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) - 0xFFFFFF80u; /* 0x006EDE8B: sub dword ptr [ebp - 0x28], -0x80 */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x006EDE8F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006EDE9D; /* 0x006EDE91: jle 0x6ede9d */
L_006EDE93:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x006EDE93: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x006EDE95: sub ebx, eax */
    _flag_k = FK_CMP;
    goto L_006EDE9D; /* 0x006EDE97: jmp 0x6ede9d */
L_006EDE99:
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x006EDE99: mov byte ptr [edi], cl */
L_006EDE9B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006EDE9B: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x006EDE9C: dec ebx */
    _flag_k = FK_DEC;
L_006EDE9D:
    SET_LO8(ecx, MEM8(esi)); /* 0x006EDE9D: mov cl, byte ptr [esi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x006EDE9F: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EDDE0; /* 0x006EDEA1: jne 0x6edde0 */
L_006EDEA7:
    /* test ebx, ebx */ /* 0x006EDEA7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
L_006EDEA9:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_006EDEAE; /* 0x006EDEA9: jns 0x6edeae */
L_006EDEAB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006EDEAB: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x006EDEAC: add edi, ebx */
    _flag_k = FK_ADD;
L_006EDEAE:
    MEM8(edi) = (uint8_t)(0); /* 0x006EDEAE: mov byte ptr [edi], 0 */
L_006EDEB1:
    ecx = MEM32(ebp + (-0x4)); /* 0x006EDEB1: mov ecx, dword ptr [ebp - 4] */
    eax = 0x00925890u; /* 0x006EDEB4: mov eax, 0x925890 */
    edi = POP32_VAL(esp); /* 0x006EDEB9: pop edi */
    esi = POP32_VAL(esp); /* 0x006EDEBA: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006EDEBB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006EDEBD: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006EDEBE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006EDEC3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006EDEC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EDEC6: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006EDE39u: goto L_006EDE39;
      case 0x006EDE3Eu: goto L_006EDE3E;
      case 0x006EDE5Cu: goto L_006EDE5C;
      case 0x006EDE78u: goto L_006EDE78;
      case 0x006EDE7Cu: goto L_006EDE7C;
      case 0x006EDE9Du: goto L_006EDE9D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006EDF40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006EDF40u);

L_006EDF40:
    PUSH32(esp, ebp); /* 0x006EDF40: push ebp */
    ebp = esp; /* 0x006EDF41: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006EDF43: push esi */
    PUSH32(esp, edi); /* 0x006EDF44: push edi */
    edi = MEM32(ebp + 0x14); /* 0x006EDF45: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x006EDF48: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDF68; /* 0x006EDF4A: je 0x6edf68 */
L_006EDF4C:
    /* cmp MEM8(edi), 0 */ /* 0x006EDF4C: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EDF68; /* 0x006EDF4F: je 0x6edf68 */
L_006EDF51:
    PUSH32(esp, edi); /* 0x006EDF51: push edi */
    RECOMP_ICALL(MEM32(0x7CC6B0)); /* 0x006EDF52: call dword ptr [0x7cc6b0] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006EDF58: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006EDF5A: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006EDF5D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006EDF6D; /* 0x006EDF5F: jne 0x6edf6d */
L_006EDF61:
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x006EDF61: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EDF92; /* 0x006EDF64: je 0x6edf92 */
L_006EDF66:
    goto L_006EDF6D; /* 0x006EDF66: jmp 0x6edf6d */
L_006EDF68:
    esi = 1; /* 0x006EDF68: mov esi, 1 */
L_006EDF6D:
    eax = MEM32(0x87CBDC); /* 0x006EDF6D: mov eax, dword ptr [0x87cbdc] */
    /* cmp esi, eax */ /* 0x006EDF72: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006EDF92; /* 0x006EDF74: je 0x6edf92 */
L_006EDF76:
    /* test eax, eax */ /* 0x006EDF76: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDF81; /* 0x006EDF78: je 0x6edf81 */
L_006EDF7A:
    PUSH32(esp, eax); /* 0x006EDF7A: push eax */
    RECOMP_ICALL(MEM32(0x7CC910)); /* 0x006EDF7B: call dword ptr [0x7cc910] */
    RECOMP_FLAGS_IN();
L_006EDF81:
    MEM32(0x87CBDC) = esi; /* 0x006EDF81: mov dword ptr [0x87cbdc], esi */
    /* test esi, esi */ /* 0x006EDF87: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006EDF92; /* 0x006EDF89: je 0x6edf92 */
L_006EDF8B:
    PUSH32(esp, esi); /* 0x006EDF8B: push esi */
    RECOMP_ICALL(MEM32(0x7CC90C)); /* 0x006EDF8C: call dword ptr [0x7cc90c] */
    RECOMP_FLAGS_IN();
L_006EDF92:
    edi = POP32_VAL(esp); /* 0x006EDF92: pop edi */
    esi = POP32_VAL(esp); /* 0x006EDF93: pop esi */
    ebp = POP32_VAL(esp); /* 0x006EDF94: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006EDF95: ret  */
    RECOMP_REGS_OUT();
}
