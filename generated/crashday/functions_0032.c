#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_005EB4C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB4C0u);

L_005EB4C0:
    PUSH32(esp, ebp); /* 0x005EB4C0: push ebp */
    ebp = esp; /* 0x005EB4C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EB4C3: push -1 */
    PUSH32(esp, 0x007B1780u); /* 0x005EB4C5: push 0x7b1780 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EB4CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EB4D0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EB4D1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EB4D4: push ebx */
    PUSH32(esp, esi); /* 0x005EB4D5: push esi */
    PUSH32(esp, edi); /* 0x005EB4D6: push edi */
    eax = MEM32(0x855000); /* 0x005EB4D7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EB4DC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EB4DE: push eax */
    eax = ebp + (-0xC); /* 0x005EB4DF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EB4E2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005EB4E8: mov dword ptr [ebp - 0x10], esp */
    esi = ecx; /* 0x005EB4EB: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x005EB4ED: mov dword ptr [ebp - 0x14], esi */
    edx = MEM32(esi + 0x4); /* 0x005EB4F0: mov edx, dword ptr [esi + 4] */
    eax = MEM32(esi); /* 0x005EB4F3: mov eax, dword ptr [esi] */
    ecx = edx; /* 0x005EB4F5: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x005EB4F7: sub ecx, eax */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x8); /* 0x005EB4F9: mov edi, dword ptr [ebp + 8] */
    /* cmp ecx, edi */ /* 0x005EB4FC: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005EB533; /* 0x005EB4FE: ja 0x5eb533 */
L_005EB500:
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EB538; /* 0x005EB500: jae 0x5eb538 */
L_005EB502:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005EB502: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005EB504: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005EB506: push eax */
    ecx = esi; /* 0x005EB507: mov ecx, esi */
    RECOMP_CALL(sub_0055BEA0); /* 0x005EB509: call 0x55bea0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005EB50E: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(esi + 0x4); /* 0x005EB515: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(esi); /* 0x005EB518: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005EB51A: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005EB51C: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005EB51E: push eax */
    PUSH32(esp, 0); /* 0x005EB51F: push 0 */
    PUSH32(esp, ecx); /* 0x005EB521: push ecx */
    RECOMP_CALL(sub_0078083E); /* 0x005EB522: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005EB527: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EB52A: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(esi); /* 0x005EB531: mov eax, dword ptr [esi] */
L_005EB533:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005EB533: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x005EB535: mov dword ptr [esi + 4], eax */
L_005EB538:
    ecx = MEM32(ebp + (-0xC)); /* 0x005EB538: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EB53B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EB542: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EB543: pop edi */
    esi = POP32_VAL(esp); /* 0x005EB544: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EB545: pop ebx */
    esp = ebp; /* 0x005EB546: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EB548: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EB549: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EB54C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB54Cu);

L_005EB54C:
    ecx = MEM32(ebp + (-0x14)); /* 0x005EB54C: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_00419790); /* 0x005EB54F: call 0x419790 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005EB554: push 0 */
    PUSH32(esp, 0); /* 0x005EB556: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005EB558: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005EB55Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EB560(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB560u);

L_005EB560:
    PUSH32(esp, ebp); /* 0x005EB560: push ebp */
    ebp = esp; /* 0x005EB561: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EB563: push -1 */
    PUSH32(esp, 0x00781B88u); /* 0x005EB565: push 0x781b88 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EB56A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EB570: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EB571: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005EB574: push esi */
    eax = MEM32(0x855000); /* 0x005EB575: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EB57A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EB57C: push eax */
    eax = ebp + (-0xC); /* 0x005EB57D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EB580: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005EB586: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005EB588: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EB58B: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(esi); /* 0x005EB592: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x005EB594: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005EB595: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x005EB597: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005EB59A: push eax */
    RECOMP_CALL(sub_005EC980); /* 0x005EB59B: call 0x5ec980 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EB5A0: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x005EB5A7: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EB5A9: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EB5AF: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005EB5B2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EB5B5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EB5BC: pop ecx */
    esi = POP32_VAL(esp); /* 0x005EB5BD: pop esi */
    esp = ebp; /* 0x005EB5BE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EB5C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EB5C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EB5D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB5D0u);

L_005EB5D0:
    PUSH32(esp, ebp); /* 0x005EB5D0: push ebp */
    ebp = esp; /* 0x005EB5D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EB5D3: push -1 */
    PUSH32(esp, 0x007B17B3u); /* 0x005EB5D5: push 0x7b17b3 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EB5DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EB5E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EB5E1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EB5E4: push ebx */
    PUSH32(esp, esi); /* 0x005EB5E5: push esi */
    PUSH32(esp, edi); /* 0x005EB5E6: push edi */
    eax = MEM32(0x855000); /* 0x005EB5E7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EB5EC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EB5EE: push eax */
    eax = ebp + (-0xC); /* 0x005EB5EF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EB5F2: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005EB5F8: mov ebx, ecx */
    eax = MEM32(ebp + 0xC); /* 0x005EB5FA: mov eax, dword ptr [ebp + 0xc] */
    ecx = ebp + 0xC; /* 0x005EB5FD: lea ecx, [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = eax; /* 0x005EB600: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_0040B880); /* 0x005EB603: call 0x40b880 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x005EB608: mov edx, dword ptr [ebp - 0x10] */
    esi = MEM32(edx); /* 0x005EB60B: mov esi, dword ptr [edx] */
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005EB60D: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB618; /* 0x005EB611: je 0x5eb618 */
L_005EB613:
    edi = MEM32(edx + 0x8); /* 0x005EB613: mov edi, dword ptr [edx + 8] */
    goto L_005EB632; /* 0x005EB616: jmp 0x5eb632 */
L_005EB618:
    eax = MEM32(edx + 0x8); /* 0x005EB618: mov eax, dword ptr [edx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EB61B: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB625; /* 0x005EB61F: je 0x5eb625 */
L_005EB621:
    edi = esi; /* 0x005EB621: mov edi, esi */
    goto L_005EB632; /* 0x005EB623: jmp 0x5eb632 */
L_005EB625:
    ecx = MEM32(ebp + 0xC); /* 0x005EB625: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x005EB628: mov dword ptr [ebp - 0x14], ecx */
    edi = MEM32(ecx + 0x8); /* 0x005EB62B: mov edi, dword ptr [ecx + 8] */
    /* cmp ecx, edx */ /* 0x005EB62E: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB6A5; /* 0x005EB630: jne 0x5eb6a5 */
L_005EB632:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005EB632: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(edx + 0x4); /* 0x005EB636: mov esi, dword ptr [edx + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB63E; /* 0x005EB639: jne 0x5eb63e */
L_005EB63B:
    MEM32(edi + 0x4) = esi; /* 0x005EB63B: mov dword ptr [edi + 4], esi */
L_005EB63E:
    eax = MEM32(ebx); /* 0x005EB63E: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x4), edx */ /* 0x005EB640: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB64A; /* 0x005EB643: jne 0x5eb64a */
L_005EB645:
    MEM32(eax + 0x4) = edi; /* 0x005EB645: mov dword ptr [eax + 4], edi */
    goto L_005EB655; /* 0x005EB648: jmp 0x5eb655 */
L_005EB64A:
    /* cmp MEM32(esi), edx */ /* 0x005EB64A: cmp dword ptr [esi], edx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB652; /* 0x005EB64C: jne 0x5eb652 */
L_005EB64E:
    MEM32(esi) = edi; /* 0x005EB64E: mov dword ptr [esi], edi */
    goto L_005EB655; /* 0x005EB650: jmp 0x5eb655 */
L_005EB652:
    MEM32(esi + 0x8) = edi; /* 0x005EB652: mov dword ptr [esi + 8], edi */
L_005EB655:
    eax = MEM32(ebx); /* 0x005EB655: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax), edx */ /* 0x005EB657: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB67E; /* 0x005EB659: jne 0x5eb67e */
L_005EB65B:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005EB65B: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB665; /* 0x005EB65F: je 0x5eb665 */
L_005EB661:
    ecx = esi; /* 0x005EB661: mov ecx, esi */
    goto L_005EB67C; /* 0x005EB663: jmp 0x5eb67c */
L_005EB665:
    eax = MEM32(edi); /* 0x005EB665: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x005EB667: mov ecx, edi */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EB669: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB67A; /* 0x005EB66D: jne 0x5eb67a */
L_005EB66F:
    /* nop */ /* 0x005EB66F: nop  */
L_005EB670:
    ecx = eax; /* 0x005EB670: mov ecx, eax */
    eax = MEM32(ecx); /* 0x005EB672: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EB674: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB670; /* 0x005EB678: je 0x5eb670 */
L_005EB67A:
    eax = MEM32(ebx); /* 0x005EB67A: mov eax, dword ptr [ebx] */
L_005EB67C:
    MEM32(eax) = ecx; /* 0x005EB67C: mov dword ptr [eax], ecx */
L_005EB67E:
    eax = MEM32(ebx); /* 0x005EB67E: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x8), edx */ /* 0x005EB680: cmp dword ptr [eax + 8], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB701; /* 0x005EB683: jne 0x5eb701 */
L_005EB685:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005EB685: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB694; /* 0x005EB689: je 0x5eb694 */
L_005EB68B:
    ecx = MEM32(ebx); /* 0x005EB68B: mov ecx, dword ptr [ebx] */
    eax = esi; /* 0x005EB68D: mov eax, esi */
    MEM32(ecx + 0x8) = eax; /* 0x005EB68F: mov dword ptr [ecx + 8], eax */
    goto L_005EB701; /* 0x005EB692: jmp 0x5eb701 */
L_005EB694:
    ecx = edi; /* 0x005EB694: mov ecx, edi */
    RECOMP_CALL(sub_0040B7B0); /* 0x005EB696: call 0x40b7b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x005EB69B: mov ecx, dword ptr [ebx] */
    edx = MEM32(ebp + (-0x10)); /* 0x005EB69D: mov edx, dword ptr [ebp - 0x10] */
    MEM32(ecx + 0x8) = eax; /* 0x005EB6A0: mov dword ptr [ecx + 8], eax */
    goto L_005EB701; /* 0x005EB6A3: jmp 0x5eb701 */
L_005EB6A5:
    MEM32(esi + 0x4) = ecx; /* 0x005EB6A5: mov dword ptr [esi + 4], ecx */
    eax = MEM32(edx); /* 0x005EB6A8: mov eax, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x005EB6AA: mov dword ptr [ecx], eax */
    /* cmp ecx, MEM32(edx + 0x8) */ /* 0x005EB6AC: cmp ecx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB6B5; /* 0x005EB6AF: jne 0x5eb6b5 */
L_005EB6B1:
    esi = ecx; /* 0x005EB6B1: mov esi, ecx */
    goto L_005EB6CF; /* 0x005EB6B3: jmp 0x5eb6cf */
L_005EB6B5:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005EB6B5: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(ecx + 0x4); /* 0x005EB6B9: mov esi, dword ptr [ecx + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB6C1; /* 0x005EB6BC: jne 0x5eb6c1 */
L_005EB6BE:
    MEM32(edi + 0x4) = esi; /* 0x005EB6BE: mov dword ptr [edi + 4], esi */
L_005EB6C1:
    MEM32(esi) = edi; /* 0x005EB6C1: mov dword ptr [esi], edi */
    eax = MEM32(edx + 0x8); /* 0x005EB6C3: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x005EB6C6: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx + 0x8); /* 0x005EB6C9: mov eax, dword ptr [edx + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x005EB6CC: mov dword ptr [eax + 4], ecx */
L_005EB6CF:
    eax = MEM32(ebx); /* 0x005EB6CF: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x4), edx */ /* 0x005EB6D1: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB6DB; /* 0x005EB6D4: jne 0x5eb6db */
L_005EB6D6:
    MEM32(eax + 0x4) = ecx; /* 0x005EB6D6: mov dword ptr [eax + 4], ecx */
    goto L_005EB6E9; /* 0x005EB6D9: jmp 0x5eb6e9 */
L_005EB6DB:
    eax = MEM32(edx + 0x4); /* 0x005EB6DB: mov eax, dword ptr [edx + 4] */
    /* cmp MEM32(eax), edx */ /* 0x005EB6DE: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB6E6; /* 0x005EB6E0: jne 0x5eb6e6 */
L_005EB6E2:
    MEM32(eax) = ecx; /* 0x005EB6E2: mov dword ptr [eax], ecx */
    goto L_005EB6E9; /* 0x005EB6E4: jmp 0x5eb6e9 */
L_005EB6E6:
    MEM32(eax + 0x8) = ecx; /* 0x005EB6E6: mov dword ptr [eax + 8], ecx */
L_005EB6E9:
    eax = MEM32(edx + 0x4); /* 0x005EB6E9: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x005EB6EC: mov dword ptr [ecx + 4], eax */
    SET_LO8(eax, MEM8(edx + 0xC)); /* 0x005EB6EF: mov al, byte ptr [edx + 0xc] */
    edx = MEM32(ebp + (-0x14)); /* 0x005EB6F2: mov edx, dword ptr [ebp - 0x14] */
    SET_LO8(ecx, MEM8(ecx + 0xC)); /* 0x005EB6F5: mov cl, byte ptr [ecx + 0xc] */
    MEM8(edx + 0xC) = (uint8_t)(LO8(eax)); /* 0x005EB6F8: mov byte ptr [edx + 0xc], al */
    edx = MEM32(ebp + (-0x10)); /* 0x005EB6FB: mov edx, dword ptr [ebp - 0x10] */
    MEM8(edx + 0xC) = (uint8_t)(LO8(ecx)); /* 0x005EB6FE: mov byte ptr [edx + 0xc], cl */
L_005EB701:
    /* cmp MEM8(edx + 0xC), 1 */ /* 0x005EB701: cmp byte ptr [edx + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(edx + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB813; /* 0x005EB705: jne 0x5eb813 */
L_005EB70B:
    eax = MEM32(ebx); /* 0x005EB70B: mov eax, dword ptr [ebx] */
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x005EB70D: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB80F; /* 0x005EB710: je 0x5eb80f */
L_005EB716:
    /* cmp MEM8(edi + 0xC), 1 */ /* 0x005EB716: cmp byte ptr [edi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB80C; /* 0x005EB71A: jne 0x5eb80c */
L_005EB720:
    ecx = MEM32(esi); /* 0x005EB720: mov ecx, dword ptr [esi] */
    /* cmp edi, ecx */ /* 0x005EB722: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB792; /* 0x005EB724: jne 0x5eb792 */
L_005EB726:
    ecx = MEM32(esi + 0x8); /* 0x005EB726: mov ecx, dword ptr [esi + 8] */
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005EB729: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB742; /* 0x005EB72D: jne 0x5eb742 */
L_005EB72F:
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x005EB72F: mov byte ptr [ecx + 0xc], 1 */
    ecx = ebx; /* 0x005EB733: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005EB735: push esi */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x005EB736: mov byte ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_0040B6F0); /* 0x005EB73A: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x005EB73F: mov ecx, dword ptr [esi + 8] */
L_005EB742:
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x005EB742: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB7C5; /* 0x005EB746: jne 0x5eb7c5 */
L_005EB748:
    eax = MEM32(ecx); /* 0x005EB748: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005EB74A: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB759; /* 0x005EB74E: jne 0x5eb759 */
L_005EB750:
    eax = MEM32(ecx + 0x8); /* 0x005EB750: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005EB753: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EB7C1; /* 0x005EB757: je 0x5eb7c1 */
L_005EB759:
    eax = MEM32(ecx + 0x8); /* 0x005EB759: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005EB75C: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB777; /* 0x005EB760: jne 0x5eb777 */
L_005EB762:
    eax = MEM32(ecx); /* 0x005EB762: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x005EB764: push ecx */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EB765: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x005EB769: mov byte ptr [ecx + 0xc], 0 */
    ecx = ebx; /* 0x005EB76D: mov ecx, ebx */
    RECOMP_CALL(sub_0040B750); /* 0x005EB76F: call 0x40b750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x005EB774: mov ecx, dword ptr [esi + 8] */
L_005EB777:
    SET_LO8(eax, MEM8(esi + 0xC)); /* 0x005EB777: mov al, byte ptr [esi + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x005EB77A: mov byte ptr [ecx + 0xc], al */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x005EB77D: mov byte ptr [esi + 0xc], 1 */
    eax = MEM32(ecx + 0x8); /* 0x005EB781: mov eax, dword ptr [ecx + 8] */
    ecx = ebx; /* 0x005EB784: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005EB786: push esi */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EB787: mov byte ptr [eax + 0xc], 1 */
    RECOMP_CALL(sub_0040B6F0); /* 0x005EB78B: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    goto L_005EB80C; /* 0x005EB790: jmp 0x5eb80c */
L_005EB792:
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005EB792: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB7AA; /* 0x005EB796: jne 0x5eb7aa */
L_005EB798:
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x005EB798: mov byte ptr [ecx + 0xc], 1 */
    ecx = ebx; /* 0x005EB79C: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005EB79E: push esi */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x005EB79F: mov byte ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_0040B750); /* 0x005EB7A3: call 0x40b750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x005EB7A8: mov ecx, dword ptr [esi] */
L_005EB7AA:
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x005EB7AA: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB7C5; /* 0x005EB7AE: jne 0x5eb7c5 */
L_005EB7B0:
    eax = MEM32(ecx + 0x8); /* 0x005EB7B0: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005EB7B3: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB7D7; /* 0x005EB7B7: jne 0x5eb7d7 */
L_005EB7B9:
    eax = MEM32(ecx); /* 0x005EB7B9: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005EB7BB: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB7D7; /* 0x005EB7BF: jne 0x5eb7d7 */
L_005EB7C1:
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x005EB7C1: mov byte ptr [ecx + 0xc], 0 */
L_005EB7C5:
    eax = MEM32(ebx); /* 0x005EB7C5: mov eax, dword ptr [ebx] */
    edi = esi; /* 0x005EB7C7: mov edi, esi */
    esi = MEM32(esi + 0x4); /* 0x005EB7C9: mov esi, dword ptr [esi + 4] */
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x005EB7CC: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB716; /* 0x005EB7CF: jne 0x5eb716 */
L_005EB7D5:
    goto L_005EB80C; /* 0x005EB7D5: jmp 0x5eb80c */
L_005EB7D7:
    eax = MEM32(ecx); /* 0x005EB7D7: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005EB7D9: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB7F4; /* 0x005EB7DD: jne 0x5eb7f4 */
L_005EB7DF:
    eax = MEM32(ecx + 0x8); /* 0x005EB7DF: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, ecx); /* 0x005EB7E2: push ecx */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EB7E3: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x005EB7E7: mov byte ptr [ecx + 0xc], 0 */
    ecx = ebx; /* 0x005EB7EB: mov ecx, ebx */
    RECOMP_CALL(sub_0040B6F0); /* 0x005EB7ED: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x005EB7F2: mov ecx, dword ptr [esi] */
L_005EB7F4:
    SET_LO8(eax, MEM8(esi + 0xC)); /* 0x005EB7F4: mov al, byte ptr [esi + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x005EB7F7: mov byte ptr [ecx + 0xc], al */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x005EB7FA: mov byte ptr [esi + 0xc], 1 */
    eax = MEM32(ecx); /* 0x005EB7FE: mov eax, dword ptr [ecx] */
    ecx = ebx; /* 0x005EB800: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005EB802: push esi */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EB803: mov byte ptr [eax + 0xc], 1 */
    RECOMP_CALL(sub_0040B750); /* 0x005EB807: call 0x40b750 */
    RECOMP_FLAGS_IN();
L_005EB80C:
    edx = MEM32(ebp + (-0x10)); /* 0x005EB80C: mov edx, dword ptr [ebp - 0x10] */
L_005EB80F:
    MEM8(edi + 0xC) = (uint8_t)(1); /* 0x005EB80F: mov byte ptr [edi + 0xc], 1 */
L_005EB813:
    esi = edx + 0x10; /* 0x005EB813: lea esi, [edx + 0x10] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005EB816: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EB819: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(esi + 0x2C), 0x10u */ /* 0x005EB820: cmp dword ptr [esi + 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x005EB824: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005EB834; /* 0x005EB82A: jb 0x5eb834 */
L_005EB82C:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x005EB82C: push dword ptr [esi + 0x18] */
    RECOMP_ICALL(edi); /* 0x005EB82F: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EB831: add esp, 4 */
    _flag_k = FK_ADD;
L_005EB834:
    MEM32(esi + 0x2C) = 0xFu; /* 0x005EB834: mov dword ptr [esi + 0x2c], 0xf */
    MEM32(esi + 0x28) = 0; /* 0x005EB83B: mov dword ptr [esi + 0x28], 0 */
    MEM8(esi + 0x18) = (uint8_t)(0); /* 0x005EB842: mov byte ptr [esi + 0x18], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EB846: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005EB84D: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EB85A; /* 0x005EB851: jb 0x5eb85a */
L_005EB853:
    PUSH32(esp, MEM32(esi)); /* 0x005EB853: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x005EB855: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EB857: add esp, 4 */
    _flag_k = FK_ADD;
L_005EB85A:
    eax = MEM32(ebp + (-0x10)); /* 0x005EB85A: mov eax, dword ptr [ebp - 0x10] */
    MEM32(esi + 0x14) = 0xFu; /* 0x005EB85D: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005EB864: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x005EB86B: push eax */
    MEM8(esi) = (uint8_t)(0); /* 0x005EB86C: mov byte ptr [esi], 0 */
    RECOMP_ICALL(edi); /* 0x005EB86F: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x005EB871: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EB874: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x005EB877: mov ecx, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x005EB87A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EB882; /* 0x005EB87C: je 0x5eb882 */
L_005EB87E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x005EB87E: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebx + 0x4) = eax; /* 0x005EB87F: mov dword ptr [ebx + 4], eax */
L_005EB882:
    eax = MEM32(ebp + 0x8); /* 0x005EB882: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005EB885: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EB887: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EB88A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EB891: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EB892: pop edi */
    esi = POP32_VAL(esp); /* 0x005EB893: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EB894: pop ebx */
    esp = ebp; /* 0x005EB895: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EB897: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005EB898: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005EB8A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB8A0u);

L_005EB8A0:
    goto L_005EC440; /* 0x005EB8A0: jmp 0x5ec440 */
L_005EC440:
    PUSH32(esp, esi); /* 0x005EC440: push esi */
    PUSH32(esp, edi); /* 0x005EC441: push edi */
    edi = ecx; /* 0x005EC442: mov edi, ecx */
    esi = MEM32(edi); /* 0x005EC444: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x005EC446: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EC480; /* 0x005EC448: je 0x5ec480 */
L_005EC44A:
    PUSH32(esp, ebx); /* 0x005EC44A: push ebx */
    ebx = MEM32(edi + 0x4); /* 0x005EC44B: mov ebx, dword ptr [edi + 4] */
    /* cmp esi, ebx */ /* 0x005EC44E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EC460; /* 0x005EC450: je 0x5ec460 */
L_005EC452:
    ecx = esi; /* 0x005EC452: mov ecx, esi */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EC454: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005EC459: add esi, 0x70 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x005EC45C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EC452; /* 0x005EC45E: jne 0x5ec452 */
L_005EC460:
    PUSH32(esp, MEM32(edi)); /* 0x005EC460: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EC462: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EC468: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = 0; /* 0x005EC46B: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x005EC471: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x8) = 0; /* 0x005EC478: mov dword ptr [edi + 8], 0 */
    ebx = POP32_VAL(esp); /* 0x005EC47F: pop ebx */
L_005EC480:
    edi = POP32_VAL(esp); /* 0x005EC480: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC481: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EC482: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EB8B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB8B0u);

L_005EB8B0:
    PUSH32(esp, ebp); /* 0x005EB8B0: push ebp */
    ebp = esp; /* 0x005EB8B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EB8B3: push -1 */
    PUSH32(esp, 0x00786E9Au); /* 0x005EB8B5: push 0x786e9a */
    eax = MEM32(FS_BASE + (0)); /* 0x005EB8BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EB8C0: push eax */
    PUSH32(esp, esi); /* 0x005EB8C1: push esi */
    PUSH32(esp, edi); /* 0x005EB8C2: push edi */
    eax = MEM32(0x855000); /* 0x005EB8C3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EB8C8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EB8CA: push eax */
    eax = ebp + (-0xC); /* 0x005EB8CB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EB8CE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005EB8D4: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x005EB8D6: mov ecx, dword ptr [esi + 4] */
    edi = MEM32(ebp + 0x8); /* 0x005EB8D9: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, ecx */ /* 0x005EB8DC: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EB91E; /* 0x005EB8DE: jae 0x5eb91e */
L_005EB8E0:
    eax = MEM32(esi); /* 0x005EB8E0: mov eax, dword ptr [esi] */
    /* cmp eax, edi */ /* 0x005EB8E2: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005EB91E; /* 0x005EB8E4: ja 0x5eb91e */
L_005EB8E6:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x005EB8E6: sub edi, eax */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005EB8E8: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x005EB8ED: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x005EB8EF: add edx, edi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EB8F1: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    edi = edx; /* 0x005EB8F4: mov edi, edx */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x005EB8F6: shr edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 31u; /* 0x005EB8F6: shr edi, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x005EB8F9: add edi, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x005EB8FB: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB908; /* 0x005EB8FE: jne 0x5eb908 */
L_005EB900:
    PUSH32(esp, ecx); /* 0x005EB900: push ecx */
    ecx = esi; /* 0x005EB901: mov ecx, esi */
    RECOMP_CALL(sub_005EC3D0); /* 0x005EB903: call 0x5ec3d0 */
    RECOMP_FLAGS_IN();
L_005EB908:
    ecx = MEM32(esi + 0x4); /* 0x005EB908: mov ecx, dword ptr [esi + 4] */
    eax = (uint32_t)((int32_t)edi * (int32_t)0x70u); /* 0x005EB90B: imul eax, edi, 0x70 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x005EB90E: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0; /* 0x005EB910: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x005EB917: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EB93F; /* 0x005EB919: je 0x5eb93f */
L_005EB91B:
    PUSH32(esp, eax); /* 0x005EB91B: push eax */
    goto L_005EB93A; /* 0x005EB91C: jmp 0x5eb93a */
L_005EB91E:
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x005EB91E: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EB92B; /* 0x005EB921: jne 0x5eb92b */
L_005EB923:
    PUSH32(esp, ecx); /* 0x005EB923: push ecx */
    ecx = esi; /* 0x005EB924: mov ecx, esi */
    RECOMP_CALL(sub_005EC3D0); /* 0x005EB926: call 0x5ec3d0 */
    RECOMP_FLAGS_IN();
L_005EB92B:
    ecx = MEM32(esi + 0x4); /* 0x005EB92B: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 1; /* 0x005EB92E: mov dword ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x005EB935: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EB93F; /* 0x005EB937: je 0x5eb93f */
L_005EB939:
    PUSH32(esp, edi); /* 0x005EB939: push edi */
L_005EB93A:
    RECOMP_CALL(sub_0054E8F0); /* 0x005EB93A: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
L_005EB93F:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EB93F: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0x70u; /* 0x005EB946: add dword ptr [esi + 4], 0x70 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005EB94A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EB94D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EB954: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EB955: pop edi */
    esi = POP32_VAL(esp); /* 0x005EB956: pop esi */
    esp = ebp; /* 0x005EB957: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EB959: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EB95A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EB960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB960u);

L_005EB960:
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005EB960: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F6644u; /* 0x005EB964: mov dword ptr [ecx], 0x7f6644 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EB974; /* 0x005EB96A: je 0x5eb974 */
L_005EB96C:
    PUSH32(esp, ecx); /* 0x005EB96C: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005EB96D: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x005EB973: pop ecx */
L_005EB974:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EB974: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EB980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB980u);

L_005EB980:
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005EB980: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F6874u; /* 0x005EB984: mov dword ptr [ecx], 0x7f6874 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EB994; /* 0x005EB98A: je 0x5eb994 */
L_005EB98C:
    PUSH32(esp, ecx); /* 0x005EB98C: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005EB98D: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x005EB993: pop ecx */
L_005EB994:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EB994: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EB9A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB9A0u);

L_005EB9A0:
    eax = 9; /* 0x005EB9A0: mov eax, 9 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EB9A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EB9B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB9B0u);

L_005EB9B0:
    PUSH32(esp, ebp); /* 0x005EB9B0: push ebp */
    ebp = esp; /* 0x005EB9B1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005EB9B3: push ecx */
    PUSH32(esp, esi); /* 0x005EB9B4: push esi */
    esi = ecx; /* 0x005EB9B5: mov esi, ecx */
    ecx = MEM32(esi); /* 0x005EB9B7: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x005EB9B9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EB9E8; /* 0x005EB9BB: je 0x5eb9e8 */
L_005EB9BD:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x005EB9BD: push dword ptr [ebp - 4] */
    edx = MEM32(esi + 0x4); /* 0x005EB9C0: mov edx, dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x005EB9C3: push ecx */
    RECOMP_CALL(sub_005EE1F0); /* 0x005EB9C4: call 0x5ee1f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x005EB9C9: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EB9CB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005EB9D1: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x005EB9D4: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005EB9DA: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005EB9E1: mov dword ptr [esi + 8], 0 */
L_005EB9E8:
    esi = POP32_VAL(esp); /* 0x005EB9E8: pop esi */
    esp = ebp; /* 0x005EB9E9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EB9EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EB9EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EB9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EB9F0u);

L_005EB9F0:
    PUSH32(esp, ebp); /* 0x005EB9F0: push ebp */
    ebp = esp; /* 0x005EB9F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EB9F3: push -1 */
    PUSH32(esp, 0x00786E9Au); /* 0x005EB9F5: push 0x786e9a */
    eax = MEM32(FS_BASE + (0)); /* 0x005EB9FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EBA00: push eax */
    PUSH32(esp, esi); /* 0x005EBA01: push esi */
    PUSH32(esp, edi); /* 0x005EBA02: push edi */
    eax = MEM32(0x855000); /* 0x005EBA03: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EBA08: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EBA0A: push eax */
    eax = ebp + (-0xC); /* 0x005EBA0B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EBA0E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005EBA14: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x005EBA16: mov ecx, dword ptr [esi + 4] */
    edi = MEM32(ebp + 0x8); /* 0x005EBA19: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, ecx */ /* 0x005EBA1C: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EBA5F; /* 0x005EBA1E: jae 0x5eba5f */
L_005EBA20:
    eax = MEM32(esi); /* 0x005EBA20: mov eax, dword ptr [esi] */
    /* cmp eax, edi */ /* 0x005EBA22: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005EBA5F; /* 0x005EBA24: ja 0x5eba5f */
L_005EBA26:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x005EBA26: sub edi, eax */
    _flag_k = FK_CMP;
    eax = 0x38E38E39u; /* 0x005EBA28: mov eax, 0x38e38e39 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x005EBA2D: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005EBA2F: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    edi = edx; /* 0x005EBA32: mov edi, edx */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x005EBA34: shr edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 31u; /* 0x005EBA34: shr edi, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x005EBA37: add edi, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x005EBA39: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBA46; /* 0x005EBA3C: jne 0x5eba46 */
L_005EBA3E:
    PUSH32(esp, ecx); /* 0x005EBA3E: push ecx */
    ecx = esi; /* 0x005EBA3F: mov ecx, esi */
    RECOMP_CALL(sub_005EC490); /* 0x005EBA41: call 0x5ec490 */
    RECOMP_FLAGS_IN();
L_005EBA46:
    eax = MEM32(esi); /* 0x005EBA46: mov eax, dword ptr [esi] */
    ecx = edi + edi * 8; /* 0x005EBA48: lea ecx, [edi + edi*8] */
    eax = eax + ecx * 8; /* 0x005EBA4B: lea eax, [eax + ecx*8] */
    ecx = MEM32(esi + 0x4); /* 0x005EBA4E: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EBA51: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x005EBA58: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EBA80; /* 0x005EBA5A: je 0x5eba80 */
L_005EBA5C:
    PUSH32(esp, eax); /* 0x005EBA5C: push eax */
    goto L_005EBA7B; /* 0x005EBA5D: jmp 0x5eba7b */
L_005EBA5F:
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x005EBA5F: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBA6C; /* 0x005EBA62: jne 0x5eba6c */
L_005EBA64:
    PUSH32(esp, ecx); /* 0x005EBA64: push ecx */
    ecx = esi; /* 0x005EBA65: mov ecx, esi */
    RECOMP_CALL(sub_005EC490); /* 0x005EBA67: call 0x5ec490 */
    RECOMP_FLAGS_IN();
L_005EBA6C:
    ecx = MEM32(esi + 0x4); /* 0x005EBA6C: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 1; /* 0x005EBA6F: mov dword ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x005EBA76: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EBA80; /* 0x005EBA78: je 0x5eba80 */
L_005EBA7A:
    PUSH32(esp, edi); /* 0x005EBA7A: push edi */
L_005EBA7B:
    RECOMP_CALL(sub_005EE6B0); /* 0x005EBA7B: call 0x5ee6b0 */
    RECOMP_FLAGS_IN();
L_005EBA80:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EBA80: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0x48u; /* 0x005EBA87: add dword ptr [esi + 4], 0x48 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005EBA8B: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EBA8E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EBA95: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EBA96: pop edi */
    esi = POP32_VAL(esp); /* 0x005EBA97: pop esi */
    esp = ebp; /* 0x005EBA98: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EBA9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EBA9B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EBAA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EBAA0u);

L_005EBAA0:
    PUSH32(esp, ebp); /* 0x005EBAA0: push ebp */
    ebp = esp; /* 0x005EBAA1: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x005EBAA3: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x005EBAA6: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005EBAA7: push dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x005EBAAA: mov esi, ecx */
    PUSH32(esp, eax); /* 0x005EBAAC: push eax */
    ecx = eax + 0x48; /* 0x005EBAAD: lea ecx, [eax + 0x48] */
    edx = MEM32(esi + 0x4); /* 0x005EBAB0: mov edx, dword ptr [esi + 4] */
    RECOMP_CALL(sub_005EDDA0); /* 0x005EBAB3: call 0x5edda0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x4); /* 0x005EBAB8: mov edx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005EBABB: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005EBABE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x005EBAC1: push ecx */
    ecx = edx + (-0x48); /* 0x005EBAC2: lea ecx, [edx - 0x48] */
    RECOMP_CALL(sub_005EE1F0); /* 0x005EBAC5: call 0x5ee1f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005EBACA: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005EBACD: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFFFB8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0xFFFFFFB8u; /* 0x005EBAD0: add dword ptr [esi + 4], -0x48 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x005EBAD4: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x005EBAD7: mov dword ptr [eax], ecx */
    esi = POP32_VAL(esp); /* 0x005EBAD9: pop esi */
    ebp = POP32_VAL(esp); /* 0x005EBADA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005EBADB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005EBAE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EBAE0u);

L_005EBAE0:
    PUSH32(esp, ebp); /* 0x005EBAE0: push ebp */
    ebp = esp; /* 0x005EBAE1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005EBAE3: push ecx */
    edx = MEM32(ebp + 0x8); /* 0x005EBAE4: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x005EBAE7: push ebx */
    PUSH32(esp, esi); /* 0x005EBAE8: push esi */
    PUSH32(esp, edi); /* 0x005EBAE9: push edi */
    edi = ecx; /* 0x005EBAEA: mov edi, ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x005EBAEC: mov dword ptr [ebp - 4], edi */
    ebx = MEM32(edi); /* 0x005EBAEF: mov ebx, dword ptr [edi] */
    esi = ebx; /* 0x005EBAF1: mov esi, ebx */
    eax = MEM32(ebx + 0x4); /* 0x005EBAF3: mov eax, dword ptr [ebx + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EBAF6: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBB1F; /* 0x005EBAFA: jne 0x5ebb1f */
L_005EBAFC:
    edi = MEM32(edx); /* 0x005EBAFC: mov edi, dword ptr [edx] */
    ecx = MEM32(edx + 0x4); /* 0x005EBAFE: mov ecx, dword ptr [edx + 4] */
L_005EBB01:
    /* cmp MEM32(eax + 0x14), ecx */ /* 0x005EBB01: cmp dword ptr [eax + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005EBB12; /* 0x005EBB04: ja 0x5ebb12 */
L_005EBB06:
    if (CMP_B(_flag_a, _flag_b)) goto L_005EBB0D; /* 0x005EBB06: jb 0x5ebb0d */
L_005EBB08:
    /* cmp MEM32(eax + 0x10), edi */ /* 0x005EBB08: cmp dword ptr [eax + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EBB12; /* 0x005EBB0B: jae 0x5ebb12 */
L_005EBB0D:
    eax = MEM32(eax + 0x8); /* 0x005EBB0D: mov eax, dword ptr [eax + 8] */
    goto L_005EBB16; /* 0x005EBB10: jmp 0x5ebb16 */
L_005EBB12:
    esi = eax; /* 0x005EBB12: mov esi, eax */
    eax = MEM32(eax); /* 0x005EBB14: mov eax, dword ptr [eax] */
L_005EBB16:
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EBB16: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EBB01; /* 0x005EBB1A: je 0x5ebb01 */
L_005EBB1C:
    edi = MEM32(ebp + (-0x4)); /* 0x005EBB1C: mov edi, dword ptr [ebp - 4] */
L_005EBB1F:
    /* cmp esi, ebx */ /* 0x005EBB1F: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EBB40; /* 0x005EBB21: je 0x5ebb40 */
L_005EBB23:
    eax = MEM32(edx + 0x4); /* 0x005EBB23: mov eax, dword ptr [edx + 4] */
    /* cmp eax, MEM32(esi + 0x14) */ /* 0x005EBB26: cmp eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005EBB34; /* 0x005EBB29: ja 0x5ebb34 */
L_005EBB2B:
    if (CMP_B(_flag_a, _flag_b)) goto L_005EBB40; /* 0x005EBB2B: jb 0x5ebb40 */
L_005EBB2D:
    eax = MEM32(edx); /* 0x005EBB2D: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x005EBB2F: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EBB40; /* 0x005EBB32: jb 0x5ebb40 */
L_005EBB34:
    edi = POP32_VAL(esp); /* 0x005EBB34: pop edi */
    eax = esi + 0x18; /* 0x005EBB35: lea eax, [esi + 0x18] */
    esi = POP32_VAL(esp); /* 0x005EBB38: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EBB39: pop ebx */
    esp = ebp; /* 0x005EBB3A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EBB3C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EBB3D: ret 4 */
L_005EBB40:
    PUSH32(esp, ecx); /* 0x005EBB40: push ecx */
    eax = ebp + 0x8; /* 0x005EBB41: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = edx; /* 0x005EBB44: mov dword ptr [ebp + 8], edx */
    PUSH32(esp, eax); /* 0x005EBB47: push eax */
    PUSH32(esp, ecx); /* 0x005EBB48: push ecx */
    ecx = edi; /* 0x005EBB49: mov ecx, edi */
    RECOMP_CALL(sub_005EDE40); /* 0x005EBB4B: call 0x5ede40 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005EBB50: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x005EBB51: add eax, 0x10 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x005EBB54: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005EBB56: push eax */
    PUSH32(esp, esi); /* 0x005EBB57: push esi */
    eax = ebp + 0x8; /* 0x005EBB58: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x005EBB5B: push eax */
    RECOMP_CALL(sub_005EDED0); /* 0x005EBB5C: call 0x5eded0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005EBB61: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x005EBB64: pop edi */
    esi = POP32_VAL(esp); /* 0x005EBB65: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x005EBB66: add eax, 0x18 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x005EBB69: pop ebx */
    esp = ebp; /* 0x005EBB6A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EBB6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EBB6D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EBB70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EBB70u);

L_005EBB70:
    PUSH32(esp, ebp); /* 0x005EBB70: push ebp */
    ebp = esp; /* 0x005EBB71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EBB73: push -1 */
    PUSH32(esp, 0x00781B88u); /* 0x005EBB75: push 0x781b88 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EBB7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EBB80: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EBB81: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005EBB84: push esi */
    eax = MEM32(0x855000); /* 0x005EBB85: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EBB8A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EBB8C: push eax */
    eax = ebp + (-0xC); /* 0x005EBB8D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EBB90: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005EBB96: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005EBB98: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EBB9B: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(esi); /* 0x005EBBA2: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x005EBBA4: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005EBBA5: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x005EBBA7: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005EBBAA: push eax */
    RECOMP_CALL(sub_005ECCA0); /* 0x005EBBAB: call 0x5ecca0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EBBB0: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x005EBBB7: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EBBB9: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EBBBF: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005EBBC2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EBBC5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EBBCC: pop ecx */
    esi = POP32_VAL(esp); /* 0x005EBBCD: pop esi */
    esp = ebp; /* 0x005EBBCE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EBBD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EBBD1: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EBBE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EBBE0u);

L_005EBBE0:
    PUSH32(esp, ebp); /* 0x005EBBE0: push ebp */
    ebp = esp; /* 0x005EBBE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EBBE3: push -1 */
    PUSH32(esp, 0x007B17DBu); /* 0x005EBBE5: push 0x7b17db */
    eax = MEM32(FS_BASE + (0)); /* 0x005EBBEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EBBF0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EBBF1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EBBF4: push ebx */
    PUSH32(esp, esi); /* 0x005EBBF5: push esi */
    PUSH32(esp, edi); /* 0x005EBBF6: push edi */
    eax = MEM32(0x855000); /* 0x005EBBF7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EBBFC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EBBFE: push eax */
    eax = ebp + (-0xC); /* 0x005EBBFF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EBC02: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005EBC08: mov ebx, ecx */
    eax = MEM32(ebp + 0xC); /* 0x005EBC0A: mov eax, dword ptr [ebp + 0xc] */
    ecx = ebp + 0xC; /* 0x005EBC0D: lea ecx, [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = eax; /* 0x005EBC10: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_0040B880); /* 0x005EBC13: call 0x40b880 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x005EBC18: mov edx, dword ptr [ebp - 0x10] */
    esi = MEM32(edx); /* 0x005EBC1B: mov esi, dword ptr [edx] */
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005EBC1D: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EBC28; /* 0x005EBC21: je 0x5ebc28 */
L_005EBC23:
    edi = MEM32(edx + 0x8); /* 0x005EBC23: mov edi, dword ptr [edx + 8] */
    goto L_005EBC42; /* 0x005EBC26: jmp 0x5ebc42 */
L_005EBC28:
    eax = MEM32(edx + 0x8); /* 0x005EBC28: mov eax, dword ptr [edx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EBC2B: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EBC35; /* 0x005EBC2F: je 0x5ebc35 */
L_005EBC31:
    edi = esi; /* 0x005EBC31: mov edi, esi */
    goto L_005EBC42; /* 0x005EBC33: jmp 0x5ebc42 */
L_005EBC35:
    ecx = MEM32(ebp + 0xC); /* 0x005EBC35: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x005EBC38: mov dword ptr [ebp - 0x14], ecx */
    edi = MEM32(ecx + 0x8); /* 0x005EBC3B: mov edi, dword ptr [ecx + 8] */
    /* cmp ecx, edx */ /* 0x005EBC3E: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBCB5; /* 0x005EBC40: jne 0x5ebcb5 */
L_005EBC42:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005EBC42: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(edx + 0x4); /* 0x005EBC46: mov esi, dword ptr [edx + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBC4E; /* 0x005EBC49: jne 0x5ebc4e */
L_005EBC4B:
    MEM32(edi + 0x4) = esi; /* 0x005EBC4B: mov dword ptr [edi + 4], esi */
L_005EBC4E:
    eax = MEM32(ebx); /* 0x005EBC4E: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x4), edx */ /* 0x005EBC50: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBC5A; /* 0x005EBC53: jne 0x5ebc5a */
L_005EBC55:
    MEM32(eax + 0x4) = edi; /* 0x005EBC55: mov dword ptr [eax + 4], edi */
    goto L_005EBC65; /* 0x005EBC58: jmp 0x5ebc65 */
L_005EBC5A:
    /* cmp MEM32(esi), edx */ /* 0x005EBC5A: cmp dword ptr [esi], edx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBC62; /* 0x005EBC5C: jne 0x5ebc62 */
L_005EBC5E:
    MEM32(esi) = edi; /* 0x005EBC5E: mov dword ptr [esi], edi */
    goto L_005EBC65; /* 0x005EBC60: jmp 0x5ebc65 */
L_005EBC62:
    MEM32(esi + 0x8) = edi; /* 0x005EBC62: mov dword ptr [esi + 8], edi */
L_005EBC65:
    eax = MEM32(ebx); /* 0x005EBC65: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax), edx */ /* 0x005EBC67: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBC8E; /* 0x005EBC69: jne 0x5ebc8e */
L_005EBC6B:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005EBC6B: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EBC75; /* 0x005EBC6F: je 0x5ebc75 */
L_005EBC71:
    ecx = esi; /* 0x005EBC71: mov ecx, esi */
    goto L_005EBC8C; /* 0x005EBC73: jmp 0x5ebc8c */
L_005EBC75:
    eax = MEM32(edi); /* 0x005EBC75: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x005EBC77: mov ecx, edi */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EBC79: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBC8A; /* 0x005EBC7D: jne 0x5ebc8a */
L_005EBC7F:
    /* nop */ /* 0x005EBC7F: nop  */
L_005EBC80:
    ecx = eax; /* 0x005EBC80: mov ecx, eax */
    eax = MEM32(ecx); /* 0x005EBC82: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EBC84: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EBC80; /* 0x005EBC88: je 0x5ebc80 */
L_005EBC8A:
    eax = MEM32(ebx); /* 0x005EBC8A: mov eax, dword ptr [ebx] */
L_005EBC8C:
    MEM32(eax) = ecx; /* 0x005EBC8C: mov dword ptr [eax], ecx */
L_005EBC8E:
    eax = MEM32(ebx); /* 0x005EBC8E: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x8), edx */ /* 0x005EBC90: cmp dword ptr [eax + 8], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBD11; /* 0x005EBC93: jne 0x5ebd11 */
L_005EBC95:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005EBC95: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EBCA4; /* 0x005EBC99: je 0x5ebca4 */
L_005EBC9B:
    ecx = MEM32(ebx); /* 0x005EBC9B: mov ecx, dword ptr [ebx] */
    eax = esi; /* 0x005EBC9D: mov eax, esi */
    MEM32(ecx + 0x8) = eax; /* 0x005EBC9F: mov dword ptr [ecx + 8], eax */
    goto L_005EBD11; /* 0x005EBCA2: jmp 0x5ebd11 */
L_005EBCA4:
    ecx = edi; /* 0x005EBCA4: mov ecx, edi */
    RECOMP_CALL(sub_0040B7B0); /* 0x005EBCA6: call 0x40b7b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x005EBCAB: mov ecx, dword ptr [ebx] */
    edx = MEM32(ebp + (-0x10)); /* 0x005EBCAD: mov edx, dword ptr [ebp - 0x10] */
    MEM32(ecx + 0x8) = eax; /* 0x005EBCB0: mov dword ptr [ecx + 8], eax */
    goto L_005EBD11; /* 0x005EBCB3: jmp 0x5ebd11 */
L_005EBCB5:
    MEM32(esi + 0x4) = ecx; /* 0x005EBCB5: mov dword ptr [esi + 4], ecx */
    eax = MEM32(edx); /* 0x005EBCB8: mov eax, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x005EBCBA: mov dword ptr [ecx], eax */
    /* cmp ecx, MEM32(edx + 0x8) */ /* 0x005EBCBC: cmp ecx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBCC5; /* 0x005EBCBF: jne 0x5ebcc5 */
L_005EBCC1:
    esi = ecx; /* 0x005EBCC1: mov esi, ecx */
    goto L_005EBCDF; /* 0x005EBCC3: jmp 0x5ebcdf */
L_005EBCC5:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005EBCC5: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(ecx + 0x4); /* 0x005EBCC9: mov esi, dword ptr [ecx + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBCD1; /* 0x005EBCCC: jne 0x5ebcd1 */
L_005EBCCE:
    MEM32(edi + 0x4) = esi; /* 0x005EBCCE: mov dword ptr [edi + 4], esi */
L_005EBCD1:
    MEM32(esi) = edi; /* 0x005EBCD1: mov dword ptr [esi], edi */
    eax = MEM32(edx + 0x8); /* 0x005EBCD3: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x005EBCD6: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx + 0x8); /* 0x005EBCD9: mov eax, dword ptr [edx + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x005EBCDC: mov dword ptr [eax + 4], ecx */
L_005EBCDF:
    eax = MEM32(ebx); /* 0x005EBCDF: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x4), edx */ /* 0x005EBCE1: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBCEB; /* 0x005EBCE4: jne 0x5ebceb */
L_005EBCE6:
    MEM32(eax + 0x4) = ecx; /* 0x005EBCE6: mov dword ptr [eax + 4], ecx */
    goto L_005EBCF9; /* 0x005EBCE9: jmp 0x5ebcf9 */
L_005EBCEB:
    eax = MEM32(edx + 0x4); /* 0x005EBCEB: mov eax, dword ptr [edx + 4] */
    /* cmp MEM32(eax), edx */ /* 0x005EBCEE: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBCF6; /* 0x005EBCF0: jne 0x5ebcf6 */
L_005EBCF2:
    MEM32(eax) = ecx; /* 0x005EBCF2: mov dword ptr [eax], ecx */
    goto L_005EBCF9; /* 0x005EBCF4: jmp 0x5ebcf9 */
L_005EBCF6:
    MEM32(eax + 0x8) = ecx; /* 0x005EBCF6: mov dword ptr [eax + 8], ecx */
L_005EBCF9:
    eax = MEM32(edx + 0x4); /* 0x005EBCF9: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x005EBCFC: mov dword ptr [ecx + 4], eax */
    SET_LO8(eax, MEM8(edx + 0xC)); /* 0x005EBCFF: mov al, byte ptr [edx + 0xc] */
    edx = MEM32(ebp + (-0x14)); /* 0x005EBD02: mov edx, dword ptr [ebp - 0x14] */
    SET_LO8(ecx, MEM8(ecx + 0xC)); /* 0x005EBD05: mov cl, byte ptr [ecx + 0xc] */
    MEM8(edx + 0xC) = (uint8_t)(LO8(eax)); /* 0x005EBD08: mov byte ptr [edx + 0xc], al */
    edx = MEM32(ebp + (-0x10)); /* 0x005EBD0B: mov edx, dword ptr [ebp - 0x10] */
    MEM8(edx + 0xC) = (uint8_t)(LO8(ecx)); /* 0x005EBD0E: mov byte ptr [edx + 0xc], cl */
L_005EBD11:
    /* cmp MEM8(edx + 0xC), 1 */ /* 0x005EBD11: cmp byte ptr [edx + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(edx + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBE23; /* 0x005EBD15: jne 0x5ebe23 */
L_005EBD1B:
    eax = MEM32(ebx); /* 0x005EBD1B: mov eax, dword ptr [ebx] */
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x005EBD1D: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EBE1F; /* 0x005EBD20: je 0x5ebe1f */
L_005EBD26:
    /* cmp MEM8(edi + 0xC), 1 */ /* 0x005EBD26: cmp byte ptr [edi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBE1C; /* 0x005EBD2A: jne 0x5ebe1c */
L_005EBD30:
    ecx = MEM32(esi); /* 0x005EBD30: mov ecx, dword ptr [esi] */
    /* cmp edi, ecx */ /* 0x005EBD32: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBDA2; /* 0x005EBD34: jne 0x5ebda2 */
L_005EBD36:
    ecx = MEM32(esi + 0x8); /* 0x005EBD36: mov ecx, dword ptr [esi + 8] */
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005EBD39: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBD52; /* 0x005EBD3D: jne 0x5ebd52 */
L_005EBD3F:
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x005EBD3F: mov byte ptr [ecx + 0xc], 1 */
    ecx = ebx; /* 0x005EBD43: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005EBD45: push esi */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x005EBD46: mov byte ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_0040B6F0); /* 0x005EBD4A: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x005EBD4F: mov ecx, dword ptr [esi + 8] */
L_005EBD52:
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x005EBD52: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBDD5; /* 0x005EBD56: jne 0x5ebdd5 */
L_005EBD58:
    eax = MEM32(ecx); /* 0x005EBD58: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005EBD5A: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBD69; /* 0x005EBD5E: jne 0x5ebd69 */
L_005EBD60:
    eax = MEM32(ecx + 0x8); /* 0x005EBD60: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005EBD63: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EBDD1; /* 0x005EBD67: je 0x5ebdd1 */
L_005EBD69:
    eax = MEM32(ecx + 0x8); /* 0x005EBD69: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005EBD6C: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBD87; /* 0x005EBD70: jne 0x5ebd87 */
L_005EBD72:
    eax = MEM32(ecx); /* 0x005EBD72: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x005EBD74: push ecx */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EBD75: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x005EBD79: mov byte ptr [ecx + 0xc], 0 */
    ecx = ebx; /* 0x005EBD7D: mov ecx, ebx */
    RECOMP_CALL(sub_0040B750); /* 0x005EBD7F: call 0x40b750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x005EBD84: mov ecx, dword ptr [esi + 8] */
L_005EBD87:
    SET_LO8(eax, MEM8(esi + 0xC)); /* 0x005EBD87: mov al, byte ptr [esi + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x005EBD8A: mov byte ptr [ecx + 0xc], al */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x005EBD8D: mov byte ptr [esi + 0xc], 1 */
    eax = MEM32(ecx + 0x8); /* 0x005EBD91: mov eax, dword ptr [ecx + 8] */
    ecx = ebx; /* 0x005EBD94: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005EBD96: push esi */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EBD97: mov byte ptr [eax + 0xc], 1 */
    RECOMP_CALL(sub_0040B6F0); /* 0x005EBD9B: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    goto L_005EBE1C; /* 0x005EBDA0: jmp 0x5ebe1c */
L_005EBDA2:
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005EBDA2: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBDBA; /* 0x005EBDA6: jne 0x5ebdba */
L_005EBDA8:
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x005EBDA8: mov byte ptr [ecx + 0xc], 1 */
    ecx = ebx; /* 0x005EBDAC: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005EBDAE: push esi */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x005EBDAF: mov byte ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_0040B750); /* 0x005EBDB3: call 0x40b750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x005EBDB8: mov ecx, dword ptr [esi] */
L_005EBDBA:
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x005EBDBA: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBDD5; /* 0x005EBDBE: jne 0x5ebdd5 */
L_005EBDC0:
    eax = MEM32(ecx + 0x8); /* 0x005EBDC0: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005EBDC3: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBDE7; /* 0x005EBDC7: jne 0x5ebde7 */
L_005EBDC9:
    eax = MEM32(ecx); /* 0x005EBDC9: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005EBDCB: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBDE7; /* 0x005EBDCF: jne 0x5ebde7 */
L_005EBDD1:
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x005EBDD1: mov byte ptr [ecx + 0xc], 0 */
L_005EBDD5:
    eax = MEM32(ebx); /* 0x005EBDD5: mov eax, dword ptr [ebx] */
    edi = esi; /* 0x005EBDD7: mov edi, esi */
    esi = MEM32(esi + 0x4); /* 0x005EBDD9: mov esi, dword ptr [esi + 4] */
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x005EBDDC: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBD26; /* 0x005EBDDF: jne 0x5ebd26 */
L_005EBDE5:
    goto L_005EBE1C; /* 0x005EBDE5: jmp 0x5ebe1c */
L_005EBDE7:
    eax = MEM32(ecx); /* 0x005EBDE7: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005EBDE9: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBE04; /* 0x005EBDED: jne 0x5ebe04 */
L_005EBDEF:
    eax = MEM32(ecx + 0x8); /* 0x005EBDEF: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, ecx); /* 0x005EBDF2: push ecx */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EBDF3: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x005EBDF7: mov byte ptr [ecx + 0xc], 0 */
    ecx = ebx; /* 0x005EBDFB: mov ecx, ebx */
    RECOMP_CALL(sub_0040B6F0); /* 0x005EBDFD: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x005EBE02: mov ecx, dword ptr [esi] */
L_005EBE04:
    SET_LO8(eax, MEM8(esi + 0xC)); /* 0x005EBE04: mov al, byte ptr [esi + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x005EBE07: mov byte ptr [ecx + 0xc], al */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x005EBE0A: mov byte ptr [esi + 0xc], 1 */
    eax = MEM32(ecx); /* 0x005EBE0E: mov eax, dword ptr [ecx] */
    ecx = ebx; /* 0x005EBE10: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005EBE12: push esi */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EBE13: mov byte ptr [eax + 0xc], 1 */
    RECOMP_CALL(sub_0040B750); /* 0x005EBE17: call 0x40b750 */
    RECOMP_FLAGS_IN();
L_005EBE1C:
    edx = MEM32(ebp + (-0x10)); /* 0x005EBE1C: mov edx, dword ptr [ebp - 0x10] */
L_005EBE1F:
    MEM8(edi + 0xC) = (uint8_t)(1); /* 0x005EBE1F: mov byte ptr [edi + 0xc], 1 */
L_005EBE23:
    ecx = edx + 0x10; /* 0x005EBE23: lea ecx, [edx + 0x10] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x005EBE26: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EBE29: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x005EBE30: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005E3440); /* 0x005EBE33: call 0x5e3440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x005EBE38: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x005EBE3B: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EBE3C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x005EBE42: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EBE45: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x005EBE48: mov ecx, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x005EBE4B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EBE53; /* 0x005EBE4D: je 0x5ebe53 */
L_005EBE4F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x005EBE4F: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebx + 0x4) = eax; /* 0x005EBE50: mov dword ptr [ebx + 4], eax */
L_005EBE53:
    eax = MEM32(ebp + 0x8); /* 0x005EBE53: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005EBE56: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EBE58: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EBE5B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EBE62: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EBE63: pop edi */
    esi = POP32_VAL(esp); /* 0x005EBE64: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EBE65: pop ebx */
    esp = ebp; /* 0x005EBE66: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EBE68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005EBE69: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005EBE70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EBE70u);

L_005EBE70:
    PUSH32(esp, ebp); /* 0x005EBE70: push ebp */
    ebp = esp; /* 0x005EBE71: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005EBE73: push ecx */
    PUSH32(esp, esi); /* 0x005EBE74: push esi */
    esi = ecx; /* 0x005EBE75: mov esi, ecx */
    ecx = MEM32(esi); /* 0x005EBE77: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x005EBE79: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EBEA8; /* 0x005EBE7B: je 0x5ebea8 */
L_005EBE7D:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x005EBE7D: push dword ptr [ebp - 4] */
    edx = MEM32(esi + 0x4); /* 0x005EBE80: mov edx, dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x005EBE83: push ecx */
    RECOMP_CALL(sub_005EE2A0); /* 0x005EBE84: call 0x5ee2a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x005EBE89: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EBE8B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005EBE91: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x005EBE94: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005EBE9A: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005EBEA1: mov dword ptr [esi + 8], 0 */
L_005EBEA8:
    esi = POP32_VAL(esp); /* 0x005EBEA8: pop esi */
    esp = ebp; /* 0x005EBEA9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EBEAB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EBEAC: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EBEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EBEB0u);

L_005EBEB0:
    PUSH32(esp, ebp); /* 0x005EBEB0: push ebp */
    ebp = esp; /* 0x005EBEB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EBEB3: push -1 */
    PUSH32(esp, 0x007B1830u); /* 0x005EBEB5: push 0x7b1830 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EBEBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EBEC0: push eax */
    PUSH32(esp, ebx); /* 0x005EBEC1: push ebx */
    PUSH32(esp, esi); /* 0x005EBEC2: push esi */
    PUSH32(esp, edi); /* 0x005EBEC3: push edi */
    eax = MEM32(0x855000); /* 0x005EBEC4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EBEC9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EBECB: push eax */
    eax = ebp + (-0xC); /* 0x005EBECC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EBECF: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005EBED5: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x005EBED7: mov ecx, dword ptr [esi + 4] */
    edi = MEM32(ebp + 0x8); /* 0x005EBEDA: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, ecx */ /* 0x005EBEDD: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EBF4D; /* 0x005EBEDF: jae 0x5ebf4d */
L_005EBEE1:
    eax = MEM32(esi); /* 0x005EBEE1: mov eax, dword ptr [esi] */
    /* cmp eax, edi */ /* 0x005EBEE3: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005EBF4D; /* 0x005EBEE5: ja 0x5ebf4d */
L_005EBEE7:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x005EBEE7: sub edi, eax */
    _flag_k = FK_CMP;
    eax = 0xB21642C9u; /* 0x005EBEE9: mov eax, 0xb21642c9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x005EBEEE: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x005EBEF0: add edx, edi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EBEF2: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    edi = edx; /* 0x005EBEF5: mov edi, edx */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x005EBEF7: shr edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 31u; /* 0x005EBEF7: shr edi, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x005EBEFA: add edi, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x005EBEFC: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBF09; /* 0x005EBEFF: jne 0x5ebf09 */
L_005EBF01:
    PUSH32(esp, ecx); /* 0x005EBF01: push ecx */
    ecx = esi; /* 0x005EBF02: mov ecx, esi */
    RECOMP_CALL(sub_005EC530); /* 0x005EBF04: call 0x5ec530 */
    RECOMP_FLAGS_IN();
L_005EBF09:
    ebx = MEM32(esi + 0x4); /* 0x005EBF09: mov ebx, dword ptr [esi + 4] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x5Cu); /* 0x005EBF0C: imul edi, edi, 0x5c */
    MEM32(ebp + 0x8) = ebx; /* 0x005EBF0F: mov dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi); /* 0x005EBF12: add edi, dword ptr [esi] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0; /* 0x005EBF14: mov dword ptr [ebp - 4], 0 */
    /* test ebx, ebx */ /* 0x005EBF1B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EBF97; /* 0x005EBF1D: je 0x5ebf97 */
L_005EBF1F:
    PUSH32(esp, edi); /* 0x005EBF1F: push edi */
    ecx = ebx; /* 0x005EBF20: mov ecx, ebx */
    RECOMP_CALL(sub_005EE6B0); /* 0x005EBF22: call 0x5ee6b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005EBF27: mov byte ptr [ebp - 4], 1 */
    eax = edi + 0x48; /* 0x005EBF2B: lea eax, [edi + 0x48] */
    PUSH32(esp, eax); /* 0x005EBF2E: push eax */
    ecx = ebx + 0x48; /* 0x005EBF2F: lea ecx, [ebx + 0x48] */
    RECOMP_CALL(sub_004E6D70); /* 0x005EBF32: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005EBF37: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(edi + 0x54); /* 0x005EBF3B: mov eax, dword ptr [edi + 0x54] */
    MEM32(ebx + 0x54) = eax; /* 0x005EBF3E: mov dword ptr [ebx + 0x54], eax */
    eax = MEM32(edi + 0x58); /* 0x005EBF41: mov eax, dword ptr [edi + 0x58] */
    MEM32(ebx + 0x58) = eax; /* 0x005EBF44: mov dword ptr [ebx + 0x58], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005EBF47: mov byte ptr [ebp - 4], 0 */
    goto L_005EBF97; /* 0x005EBF4B: jmp 0x5ebf97 */
L_005EBF4D:
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x005EBF4D: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EBF5A; /* 0x005EBF50: jne 0x5ebf5a */
L_005EBF52:
    PUSH32(esp, ecx); /* 0x005EBF52: push ecx */
    ecx = esi; /* 0x005EBF53: mov ecx, esi */
    RECOMP_CALL(sub_005EC530); /* 0x005EBF55: call 0x5ec530 */
    RECOMP_FLAGS_IN();
L_005EBF5A:
    ebx = MEM32(esi + 0x4); /* 0x005EBF5A: mov ebx, dword ptr [esi + 4] */
    MEM32(ebp + 0x8) = ebx; /* 0x005EBF5D: mov dword ptr [ebp + 8], ebx */
    MEM32(ebp + (-0x4)) = 3; /* 0x005EBF60: mov dword ptr [ebp - 4], 3 */
    /* test ebx, ebx */ /* 0x005EBF67: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EBF97; /* 0x005EBF69: je 0x5ebf97 */
L_005EBF6B:
    PUSH32(esp, edi); /* 0x005EBF6B: push edi */
    ecx = ebx; /* 0x005EBF6C: mov ecx, ebx */
    RECOMP_CALL(sub_005EE6B0); /* 0x005EBF6E: call 0x5ee6b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005EBF73: mov byte ptr [ebp - 4], 4 */
    eax = edi + 0x48; /* 0x005EBF77: lea eax, [edi + 0x48] */
    PUSH32(esp, eax); /* 0x005EBF7A: push eax */
    ecx = ebx + 0x48; /* 0x005EBF7B: lea ecx, [ebx + 0x48] */
    RECOMP_CALL(sub_004E6D70); /* 0x005EBF7E: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005EBF83: mov byte ptr [ebp - 4], 5 */
    eax = MEM32(edi + 0x54); /* 0x005EBF87: mov eax, dword ptr [edi + 0x54] */
    MEM32(ebx + 0x54) = eax; /* 0x005EBF8A: mov dword ptr [ebx + 0x54], eax */
    eax = MEM32(edi + 0x58); /* 0x005EBF8D: mov eax, dword ptr [edi + 0x58] */
    MEM32(ebx + 0x58) = eax; /* 0x005EBF90: mov dword ptr [ebx + 0x58], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005EBF93: mov byte ptr [ebp - 4], 3 */
L_005EBF97:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EBF97: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0x5Cu; /* 0x005EBF9E: add dword ptr [esi + 4], 0x5c */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005EBFA2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EBFA5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EBFAC: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EBFAD: pop edi */
    esi = POP32_VAL(esp); /* 0x005EBFAE: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EBFAF: pop ebx */
    esp = ebp; /* 0x005EBFB0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EBFB2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EBFB3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EBFC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EBFC0u);

L_005EBFC0:
    PUSH32(esp, ebp); /* 0x005EBFC0: push ebp */
    ebp = esp; /* 0x005EBFC1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005EBFC3: push ecx */
    PUSH32(esp, esi); /* 0x005EBFC4: push esi */
    esi = ecx; /* 0x005EBFC5: mov esi, ecx */
    ecx = MEM32(esi); /* 0x005EBFC7: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x005EBFC9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EBFF8; /* 0x005EBFCB: je 0x5ebff8 */
L_005EBFCD:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x005EBFCD: push dword ptr [ebp - 4] */
    edx = MEM32(esi + 0x4); /* 0x005EBFD0: mov edx, dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x005EBFD3: push ecx */
    RECOMP_CALL(sub_005EE380); /* 0x005EBFD4: call 0x5ee380 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x005EBFD9: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EBFDB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005EBFE1: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x005EBFE4: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005EBFEA: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005EBFF1: mov dword ptr [esi + 8], 0 */
L_005EBFF8:
    esi = POP32_VAL(esp); /* 0x005EBFF8: pop esi */
    esp = ebp; /* 0x005EBFF9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EBFFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EBFFC: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EC000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC000u);

L_005EC000:
    PUSH32(esp, ebp); /* 0x005EC000: push ebp */
    ebp = esp; /* 0x005EC001: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EC003: push -1 */
    PUSH32(esp, 0x00786E9Au); /* 0x005EC005: push 0x786e9a */
    eax = MEM32(FS_BASE + (0)); /* 0x005EC00A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EC010: push eax */
    PUSH32(esp, esi); /* 0x005EC011: push esi */
    PUSH32(esp, edi); /* 0x005EC012: push edi */
    eax = MEM32(0x855000); /* 0x005EC013: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EC018: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EC01A: push eax */
    eax = ebp + (-0xC); /* 0x005EC01B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EC01E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005EC024: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x005EC026: mov ecx, dword ptr [esi + 4] */
    edi = MEM32(ebp + 0x8); /* 0x005EC029: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, ecx */ /* 0x005EC02C: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EC06E; /* 0x005EC02E: jae 0x5ec06e */
L_005EC030:
    eax = MEM32(esi); /* 0x005EC030: mov eax, dword ptr [esi] */
    /* cmp eax, edi */ /* 0x005EC032: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005EC06E; /* 0x005EC034: ja 0x5ec06e */
L_005EC036:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x005EC036: sub edi, eax */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005EC038: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x005EC03D: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x005EC03F: add edx, edi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EC041: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    edi = edx; /* 0x005EC044: mov edi, edx */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x005EC046: shr edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 31u; /* 0x005EC046: shr edi, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x005EC049: add edi, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x005EC04B: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EC058; /* 0x005EC04E: jne 0x5ec058 */
L_005EC050:
    PUSH32(esp, ecx); /* 0x005EC050: push ecx */
    ecx = esi; /* 0x005EC051: mov ecx, esi */
    RECOMP_CALL(sub_005EC5A0); /* 0x005EC053: call 0x5ec5a0 */
    RECOMP_FLAGS_IN();
L_005EC058:
    ecx = MEM32(esi + 0x4); /* 0x005EC058: mov ecx, dword ptr [esi + 4] */
    eax = (uint32_t)((int32_t)edi * (int32_t)0x70u); /* 0x005EC05B: imul eax, edi, 0x70 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x005EC05E: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0; /* 0x005EC060: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x005EC067: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EC08F; /* 0x005EC069: je 0x5ec08f */
L_005EC06B:
    PUSH32(esp, eax); /* 0x005EC06B: push eax */
    goto L_005EC08A; /* 0x005EC06C: jmp 0x5ec08a */
L_005EC06E:
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x005EC06E: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EC07B; /* 0x005EC071: jne 0x5ec07b */
L_005EC073:
    PUSH32(esp, ecx); /* 0x005EC073: push ecx */
    ecx = esi; /* 0x005EC074: mov ecx, esi */
    RECOMP_CALL(sub_005EC5A0); /* 0x005EC076: call 0x5ec5a0 */
    RECOMP_FLAGS_IN();
L_005EC07B:
    ecx = MEM32(esi + 0x4); /* 0x005EC07B: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 1; /* 0x005EC07E: mov dword ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x005EC085: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EC08F; /* 0x005EC087: je 0x5ec08f */
L_005EC089:
    PUSH32(esp, edi); /* 0x005EC089: push edi */
L_005EC08A:
    RECOMP_CALL(sub_005EE760); /* 0x005EC08A: call 0x5ee760 */
    RECOMP_FLAGS_IN();
L_005EC08F:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EC08F: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0x70u; /* 0x005EC096: add dword ptr [esi + 4], 0x70 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005EC09A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EC09D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EC0A4: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EC0A5: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC0A6: pop esi */
    esp = ebp; /* 0x005EC0A7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EC0A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EC0AA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EC0B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC0B0u);

L_005EC0B0:
    PUSH32(esp, ebp); /* 0x005EC0B0: push ebp */
    ebp = esp; /* 0x005EC0B1: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x005EC0B3: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x005EC0B6: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005EC0B7: push dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x005EC0BA: mov esi, ecx */
    PUSH32(esp, eax); /* 0x005EC0BC: push eax */
    ecx = eax + 0x70; /* 0x005EC0BD: lea ecx, [eax + 0x70] */
    edx = MEM32(esi + 0x4); /* 0x005EC0C0: mov edx, dword ptr [esi + 4] */
    RECOMP_CALL(sub_005EE120); /* 0x005EC0C3: call 0x5ee120 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x4); /* 0x005EC0C8: mov edx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005EC0CB: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005EC0CE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x005EC0D1: push ecx */
    ecx = edx + (-0x70); /* 0x005EC0D2: lea ecx, [edx - 0x70] */
    RECOMP_CALL(sub_005EE380); /* 0x005EC0D5: call 0x5ee380 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005EC0DA: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005EC0DD: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFFF90u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0xFFFFFF90u; /* 0x005EC0E0: add dword ptr [esi + 4], -0x70 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x005EC0E4: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x005EC0E7: mov dword ptr [eax], ecx */
    esi = POP32_VAL(esp); /* 0x005EC0E9: pop esi */
    ebp = POP32_VAL(esp); /* 0x005EC0EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005EC0EB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005EC0F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC0F0u);

L_005EC0F0:
    PUSH32(esp, ebp); /* 0x005EC0F0: push ebp */
    ebp = esp; /* 0x005EC0F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EC0F3: push -1 */
    PUSH32(esp, 0x007B1869u); /* 0x005EC0F5: push 0x7b1869 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EC0FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EC100: push eax */
    PUSH32(esp, ecx); /* 0x005EC101: push ecx */
    PUSH32(esp, esi); /* 0x005EC102: push esi */
    eax = MEM32(0x855000); /* 0x005EC103: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EC108: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EC10A: push eax */
    eax = ebp + (-0xC); /* 0x005EC10B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EC10E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005EC114: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005EC116: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EC119: mov dword ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_005EC790); /* 0x005EC120: call 0x5ec790 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x005EC125: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, MEM32(esi)); /* 0x005EC12C: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EC12E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EC134: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x005EC137: mov dword ptr [esi], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EC13D: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EC144: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EC147: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EC14E: pop ecx */
    esi = POP32_VAL(esp); /* 0x005EC14F: pop esi */
    esp = ebp; /* 0x005EC150: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EC152: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EC153: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EC160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC160u);

L_005EC160:
    MEM32(0x927BD8) = 0; /* 0x005EC160: mov dword ptr [0x927bd8], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EC16A: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EC170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC170u);

L_005EC170:
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005EC170: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F6654u; /* 0x005EC174: mov dword ptr [ecx], 0x7f6654 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EC184; /* 0x005EC17A: je 0x5ec184 */
L_005EC17C:
    PUSH32(esp, ecx); /* 0x005EC17C: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005EC17D: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x005EC183: pop ecx */
L_005EC184:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EC184: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EC190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC190u);

L_005EC190:
    eax = 0x20u; /* 0x005EC190: mov eax, 0x20 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EC195: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EC1A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC1A0u);

L_005EC1A0:
    PUSH32(esp, ebp); /* 0x005EC1A0: push ebp */
    ebp = esp; /* 0x005EC1A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EC1A3: push -1 */
    PUSH32(esp, 0x00786E9Au); /* 0x005EC1A5: push 0x786e9a */
    eax = MEM32(FS_BASE + (0)); /* 0x005EC1AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EC1B0: push eax */
    PUSH32(esp, esi); /* 0x005EC1B1: push esi */
    PUSH32(esp, edi); /* 0x005EC1B2: push edi */
    eax = MEM32(0x855000); /* 0x005EC1B3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EC1B8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EC1BA: push eax */
    eax = ebp + (-0xC); /* 0x005EC1BB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EC1BE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005EC1C4: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x005EC1C6: mov ecx, dword ptr [esi + 4] */
    edi = MEM32(ebp + 0x8); /* 0x005EC1C9: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, ecx */ /* 0x005EC1CC: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EC217; /* 0x005EC1CE: jae 0x5ec217 */
L_005EC1D0:
    eax = MEM32(esi); /* 0x005EC1D0: mov eax, dword ptr [esi] */
    /* cmp eax, edi */ /* 0x005EC1D2: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005EC217; /* 0x005EC1D4: ja 0x5ec217 */
L_005EC1D6:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x005EC1D6: sub edi, eax */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005EC1D8: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x005EC1DD: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x005EC1DF: add edx, edi */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005EC1E1: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    edi = edx; /* 0x005EC1E4: mov edi, edx */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x005EC1E6: shr edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 31u; /* 0x005EC1E6: shr edi, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x005EC1E9: add edi, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x005EC1EB: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EC1F8; /* 0x005EC1EE: jne 0x5ec1f8 */
L_005EC1F0:
    PUSH32(esp, ecx); /* 0x005EC1F0: push ecx */
    ecx = esi; /* 0x005EC1F1: mov ecx, esi */
    RECOMP_CALL(sub_005EC8D0); /* 0x005EC1F3: call 0x5ec8d0 */
    RECOMP_FLAGS_IN();
L_005EC1F8:
    eax = MEM32(esi); /* 0x005EC1F8: mov eax, dword ptr [esi] */
    ecx = edi * 8; /* 0x005EC1FA: lea ecx, [edi*8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x005EC201: sub ecx, edi */
    _flag_k = FK_CMP;
    eax = eax + ecx * 8; /* 0x005EC203: lea eax, [eax + ecx*8] */
    ecx = MEM32(esi + 0x4); /* 0x005EC206: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EC209: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x005EC210: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EC238; /* 0x005EC212: je 0x5ec238 */
L_005EC214:
    PUSH32(esp, eax); /* 0x005EC214: push eax */
    goto L_005EC233; /* 0x005EC215: jmp 0x5ec233 */
L_005EC217:
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x005EC217: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EC224; /* 0x005EC21A: jne 0x5ec224 */
L_005EC21C:
    PUSH32(esp, ecx); /* 0x005EC21C: push ecx */
    ecx = esi; /* 0x005EC21D: mov ecx, esi */
    RECOMP_CALL(sub_005EC8D0); /* 0x005EC21F: call 0x5ec8d0 */
    RECOMP_FLAGS_IN();
L_005EC224:
    ecx = MEM32(esi + 0x4); /* 0x005EC224: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 1; /* 0x005EC227: mov dword ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x005EC22E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EC238; /* 0x005EC230: je 0x5ec238 */
L_005EC232:
    PUSH32(esp, edi); /* 0x005EC232: push edi */
L_005EC233:
    RECOMP_CALL(sub_005EE7F0); /* 0x005EC233: call 0x5ee7f0 */
    RECOMP_FLAGS_IN();
L_005EC238:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EC238: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0x38u; /* 0x005EC23F: add dword ptr [esi + 4], 0x38 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005EC243: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EC246: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EC24D: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EC24E: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC24F: pop esi */
    esp = ebp; /* 0x005EC250: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EC252: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EC253: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EC300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC300u);

L_005EC300:
    PUSH32(esp, ebp); /* 0x005EC300: push ebp */
    ebp = esp; /* 0x005EC301: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EC303: push -1 */
    PUSH32(esp, 0x007B18E3u); /* 0x005EC305: push 0x7b18e3 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EC30A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EC310: push eax */
    PUSH32(esp, ecx); /* 0x005EC311: push ecx */
    PUSH32(esp, ebx); /* 0x005EC312: push ebx */
    PUSH32(esp, esi); /* 0x005EC313: push esi */
    PUSH32(esp, edi); /* 0x005EC314: push edi */
    eax = MEM32(0x855000); /* 0x005EC315: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EC31A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EC31C: push eax */
    eax = ebp + (-0xC); /* 0x005EC31D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EC320: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005EC326: mov dword ptr [ebp - 0x10], ecx */
    ebx = MEM32(ebp + 0x8); /* 0x005EC329: mov ebx, dword ptr [ebp + 8] */
    edi = ebx; /* 0x005EC32C: mov edi, ebx */
    /* cmp MEM8(ebx + 0xD), 0 */ /* 0x005EC32E: cmp byte ptr [ebx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EC3AD; /* 0x005EC332: jne 0x5ec3ad */
L_005EC334:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x005EC334: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_005EC300); /* 0x005EC337: call 0x5ec300 */
    RECOMP_FLAGS_IN();
    edi = MEM32(edi); /* 0x005EC33C: mov edi, dword ptr [edi] */
    esi = ebx + 0x10; /* 0x005EC33E: lea esi, [ebx + 0x10] */
    MEM32(ebp + 0x8) = esi; /* 0x005EC341: mov dword ptr [ebp + 8], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EC344: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(esi + 0x2C), 0x10u */ /* 0x005EC34B: cmp dword ptr [esi + 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EC35D; /* 0x005EC34F: jb 0x5ec35d */
L_005EC351:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x005EC351: push dword ptr [esi + 0x18] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EC354: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EC35A: add esp, 4 */
    _flag_k = FK_ADD;
L_005EC35D:
    MEM32(esi + 0x2C) = 0xFu; /* 0x005EC35D: mov dword ptr [esi + 0x2c], 0xf */
    MEM32(esi + 0x28) = 0; /* 0x005EC364: mov dword ptr [esi + 0x28], 0 */
    MEM8(esi + 0x18) = (uint8_t)(0); /* 0x005EC36B: mov byte ptr [esi + 0x18], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EC36F: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005EC376: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EC387; /* 0x005EC37A: jb 0x5ec387 */
L_005EC37C:
    PUSH32(esp, MEM32(esi)); /* 0x005EC37C: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EC37E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EC384: add esp, 4 */
    _flag_k = FK_ADD;
L_005EC387:
    MEM32(esi + 0x14) = 0xFu; /* 0x005EC387: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005EC38E: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, ebx); /* 0x005EC395: push ebx */
    MEM8(esi) = (uint8_t)(0); /* 0x005EC396: mov byte ptr [esi], 0 */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EC399: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x005EC39F: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EC3A2: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005EC3A5: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = edi; /* 0x005EC3A9: mov ebx, edi */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EC334; /* 0x005EC3AB: je 0x5ec334 */
L_005EC3AD:
    ecx = MEM32(ebp + (-0xC)); /* 0x005EC3AD: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EC3B0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EC3B7: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EC3B8: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC3B9: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EC3BA: pop ebx */
    esp = ebp; /* 0x005EC3BB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EC3BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EC3BE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EC3D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC3D0u);

L_005EC3D0:
    PUSH32(esp, ebx); /* 0x005EC3D0: push ebx */
    PUSH32(esp, esi); /* 0x005EC3D1: push esi */
    PUSH32(esp, edi); /* 0x005EC3D2: push edi */
    edi = ecx; /* 0x005EC3D3: mov edi, ecx */
    eax = 0x92492493u; /* 0x005EC3D5: mov eax, 0x92492493 */
    esi = MEM32(edi + 0x8); /* 0x005EC3DA: mov esi, dword ptr [edi + 8] */
    ebx = MEM32(edi + 0x4); /* 0x005EC3DD: mov ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x005EC3E0: sub esi, ebx */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005EC3E2: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005EC3E4: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EC3E6: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    ecx = edx; /* 0x005EC3E9: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005EC3EB: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005EC3EB: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005EC3EE: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, 1 */ /* 0x005EC3F0: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EC434; /* 0x005EC3F3: jae 0x5ec434 */
L_005EC3F5:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(edi); /* 0x005EC3F5: sub ebx, dword ptr [edi] */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005EC3F7: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ebx); /* 0x005EC3FC: imul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x02492492u; /* 0x005EC3FE: mov eax, 0x2492492 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x005EC403: add edx, ebx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EC405: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    ecx = edx; /* 0x005EC408: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005EC40A: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005EC40A: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005EC40D: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005EC40F: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x005EC411: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EC421; /* 0x005EC414: jae 0x5ec421 */
L_005EC416:
    PUSH32(esp, 0x007DFAB0u); /* 0x005EC416: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005EC41B: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005EC421:
    eax = ecx + 0x1; /* 0x005EC421: lea eax, [ecx + 1] */
    ecx = edi; /* 0x005EC424: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005EC426: push eax */
    RECOMP_CALL(sub_005ECA40); /* 0x005EC427: call 0x5eca40 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005EC42C: push eax */
    ecx = edi; /* 0x005EC42D: mov ecx, edi */
    RECOMP_CALL(sub_005ECA90); /* 0x005EC42F: call 0x5eca90 */
    RECOMP_FLAGS_IN();
L_005EC434:
    edi = POP32_VAL(esp); /* 0x005EC434: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC435: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EC436: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EC437: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EC440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC440u);

L_005EC440:
    PUSH32(esp, esi); /* 0x005EC440: push esi */
    PUSH32(esp, edi); /* 0x005EC441: push edi */
    edi = ecx; /* 0x005EC442: mov edi, ecx */
    esi = MEM32(edi); /* 0x005EC444: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x005EC446: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EC480; /* 0x005EC448: je 0x5ec480 */
L_005EC44A:
    PUSH32(esp, ebx); /* 0x005EC44A: push ebx */
    ebx = MEM32(edi + 0x4); /* 0x005EC44B: mov ebx, dword ptr [edi + 4] */
    /* cmp esi, ebx */ /* 0x005EC44E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EC460; /* 0x005EC450: je 0x5ec460 */
L_005EC452:
    ecx = esi; /* 0x005EC452: mov ecx, esi */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EC454: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005EC459: add esi, 0x70 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x005EC45C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EC452; /* 0x005EC45E: jne 0x5ec452 */
L_005EC460:
    PUSH32(esp, MEM32(edi)); /* 0x005EC460: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EC462: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EC468: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = 0; /* 0x005EC46B: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x005EC471: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x8) = 0; /* 0x005EC478: mov dword ptr [edi + 8], 0 */
    ebx = POP32_VAL(esp); /* 0x005EC47F: pop ebx */
L_005EC480:
    edi = POP32_VAL(esp); /* 0x005EC480: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC481: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EC482: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EC490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC490u);

L_005EC490:
    PUSH32(esp, esi); /* 0x005EC490: push esi */
    esi = MEM32(ecx + 0x4); /* 0x005EC491: mov esi, dword ptr [ecx + 4] */
    eax = 0x38E38E39u; /* 0x005EC494: mov eax, 0x38e38e39 */
    PUSH32(esp, edi); /* 0x005EC499: push edi */
    edi = MEM32(ecx + 0x8); /* 0x005EC49A: mov edi, dword ptr [ecx + 8] */
    edx = edi; /* 0x005EC49D: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x005EC49F: sub edx, esi */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005EC4A1: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005EC4A3: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005EC4A6: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005EC4A8: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005EC4A8: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005EC4AB: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x005EC4AD: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EC51D; /* 0x005EC4B0: jae 0x5ec51d */
L_005EC4B2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x005EC4B2: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    eax = 0x38E38E39u; /* 0x005EC4B4: mov eax, 0x38e38e39 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005EC4B9: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, ebx); /* 0x005EC4BB: push ebx */
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005EC4BC: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    ebx = 0x038E38E3u; /* 0x005EC4BF: mov ebx, 0x38e38e3 */
    esi = edx; /* 0x005EC4C4: mov esi, edx */
    eax = ebx; /* 0x005EC4C6: mov eax, ebx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x005EC4C8: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x005EC4C8: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x005EC4CB: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x005EC4CD: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x005EC4CF: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EC4DF; /* 0x005EC4D2: jae 0x5ec4df */
L_005EC4D4:
    PUSH32(esp, 0x007DFAB0u); /* 0x005EC4D4: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005EC4D9: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005EC4DF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ecx); /* 0x005EC4DF: sub edi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    eax = 0x38E38E39u; /* 0x005EC4E1: mov eax, 0x38e38e39 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x005EC4E6: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005EC4E8: inc esi */
    _flag_k = FK_INC;
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005EC4E9: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005EC4EC: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005EC4EE: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005EC4EE: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005EC4F1: add eax, edx */
    _flag_k = FK_ADD;
    edx = eax; /* 0x005EC4F3: mov edx, eax */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x005EC4F5: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x005EC4F5: shr edx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x005EC4F7: sub ebx, edx */
    _flag_k = FK_CMP;
    /* cmp ebx, eax */ /* 0x005EC4F9: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x005EC4FB: pop ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EC510; /* 0x005EC4FC: jae 0x5ec510 */
L_005EC4FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005EC4FE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x005EC500: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x005EC502: cmovb eax, esi */
    PUSH32(esp, eax); /* 0x005EC505: push eax */
    RECOMP_CALL(sub_005ECBA0); /* 0x005EC506: call 0x5ecba0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005EC50B: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC50C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EC50D: ret 4 */
L_005EC510:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005EC510: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x005EC512: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x005EC514: cmovb eax, esi */
    PUSH32(esp, eax); /* 0x005EC517: push eax */
    RECOMP_CALL(sub_005ECBA0); /* 0x005EC518: call 0x5ecba0 */
    RECOMP_FLAGS_IN();
L_005EC51D:
    edi = POP32_VAL(esp); /* 0x005EC51D: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC51E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EC51F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EC530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC530u);

L_005EC530:
    PUSH32(esp, ebx); /* 0x005EC530: push ebx */
    PUSH32(esp, esi); /* 0x005EC531: push esi */
    PUSH32(esp, edi); /* 0x005EC532: push edi */
    edi = ecx; /* 0x005EC533: mov edi, ecx */
    eax = 0xB21642C9u; /* 0x005EC535: mov eax, 0xb21642c9 */
    esi = MEM32(edi + 0x8); /* 0x005EC53A: mov esi, dword ptr [edi + 8] */
    ebx = MEM32(edi + 0x4); /* 0x005EC53D: mov ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x005EC540: sub esi, ebx */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005EC542: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005EC544: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EC546: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    ecx = edx; /* 0x005EC549: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005EC54B: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005EC54B: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005EC54E: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, 1 */ /* 0x005EC550: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EC594; /* 0x005EC553: jae 0x5ec594 */
L_005EC555:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(edi); /* 0x005EC555: sub ebx, dword ptr [edi] */
    _flag_k = FK_CMP;
    eax = 0xB21642C9u; /* 0x005EC557: mov eax, 0xb21642c9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ebx); /* 0x005EC55C: imul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x02C8590Bu; /* 0x005EC55E: mov eax, 0x2c8590b */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x005EC563: add edx, ebx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EC565: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    ecx = edx; /* 0x005EC568: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005EC56A: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005EC56A: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005EC56D: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005EC56F: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x005EC571: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EC581; /* 0x005EC574: jae 0x5ec581 */
L_005EC576:
    PUSH32(esp, 0x007DFAB0u); /* 0x005EC576: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005EC57B: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005EC581:
    eax = ecx + 0x1; /* 0x005EC581: lea eax, [ecx + 1] */
    ecx = edi; /* 0x005EC584: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005EC586: push eax */
    RECOMP_CALL(sub_005ECD60); /* 0x005EC587: call 0x5ecd60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005EC58C: push eax */
    ecx = edi; /* 0x005EC58D: mov ecx, edi */
    RECOMP_CALL(sub_005ECDB0); /* 0x005EC58F: call 0x5ecdb0 */
    RECOMP_FLAGS_IN();
L_005EC594:
    edi = POP32_VAL(esp); /* 0x005EC594: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC595: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EC596: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EC597: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EC5A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC5A0u);

L_005EC5A0:
    PUSH32(esp, ebx); /* 0x005EC5A0: push ebx */
    PUSH32(esp, esi); /* 0x005EC5A1: push esi */
    PUSH32(esp, edi); /* 0x005EC5A2: push edi */
    edi = ecx; /* 0x005EC5A3: mov edi, ecx */
    eax = 0x92492493u; /* 0x005EC5A5: mov eax, 0x92492493 */
    esi = MEM32(edi + 0x8); /* 0x005EC5AA: mov esi, dword ptr [edi + 8] */
    ebx = MEM32(edi + 0x4); /* 0x005EC5AD: mov ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x005EC5B0: sub esi, ebx */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005EC5B2: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005EC5B4: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EC5B6: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    ecx = edx; /* 0x005EC5B9: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005EC5BB: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005EC5BB: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005EC5BE: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, 1 */ /* 0x005EC5C0: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EC604; /* 0x005EC5C3: jae 0x5ec604 */
L_005EC5C5:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(edi); /* 0x005EC5C5: sub ebx, dword ptr [edi] */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005EC5C7: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ebx); /* 0x005EC5CC: imul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x02492492u; /* 0x005EC5CE: mov eax, 0x2492492 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x005EC5D3: add edx, ebx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EC5D5: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    ecx = edx; /* 0x005EC5D8: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005EC5DA: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005EC5DA: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005EC5DD: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005EC5DF: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x005EC5E1: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EC5F1; /* 0x005EC5E4: jae 0x5ec5f1 */
L_005EC5E6:
    PUSH32(esp, 0x007DFAB0u); /* 0x005EC5E6: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005EC5EB: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005EC5F1:
    eax = ecx + 0x1; /* 0x005EC5F1: lea eax, [ecx + 1] */
    ecx = edi; /* 0x005EC5F4: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005EC5F6: push eax */
    RECOMP_CALL(sub_005ECA40); /* 0x005EC5F7: call 0x5eca40 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005EC5FC: push eax */
    ecx = edi; /* 0x005EC5FD: mov ecx, edi */
    RECOMP_CALL(sub_005ECEB0); /* 0x005EC5FF: call 0x5eceb0 */
    RECOMP_FLAGS_IN();
L_005EC604:
    edi = POP32_VAL(esp); /* 0x005EC604: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC605: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EC606: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EC607: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EC610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC610u);

L_005EC610:
    PUSH32(esp, ebp); /* 0x005EC610: push ebp */
    ebp = esp; /* 0x005EC611: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EC613: push -1 */
    PUSH32(esp, 0x007B190Bu); /* 0x005EC615: push 0x7b190b */
    eax = MEM32(FS_BASE + (0)); /* 0x005EC61A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EC620: push eax */
    PUSH32(esp, ecx); /* 0x005EC621: push ecx */
    PUSH32(esp, esi); /* 0x005EC622: push esi */
    PUSH32(esp, edi); /* 0x005EC623: push edi */
    eax = MEM32(0x855000); /* 0x005EC624: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EC629: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EC62B: push eax */
    eax = ebp + (-0xC); /* 0x005EC62C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EC62F: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005EC635: mov esi, ecx */
    edx = MEM32(esi + 0x8); /* 0x005EC637: mov edx, dword ptr [esi + 8] */
    eax = MEM32(esi + 0x4); /* 0x005EC63A: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x005EC63D: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    edx = edx & MEM32(esi + 0xC); /* 0x005EC63E: and edx, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(eax + edx * 4); /* 0x005EC641: mov edi, dword ptr [eax + edx*4] */
    MEM32(ebp + (-0x10)) = edi; /* 0x005EC644: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EC647: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(edi + 0x14); /* 0x005EC64E: mov eax, dword ptr [edi + 0x14] */
    /* test eax, eax */ /* 0x005EC651: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EC674; /* 0x005EC653: je 0x5ec674 */
L_005EC655:
    PUSH32(esp, eax); /* 0x005EC655: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EC656: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EC65C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x14) = 0; /* 0x005EC65F: mov dword ptr [edi + 0x14], 0 */
    MEM32(edi + 0x18) = 0; /* 0x005EC666: mov dword ptr [edi + 0x18], 0 */
    MEM32(edi + 0x1C) = 0; /* 0x005EC66D: mov dword ptr [edi + 0x1c], 0 */
L_005EC674:
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) - 1; /* 0x005EC674: dec dword ptr [esi + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_005EC691; /* 0x005EC677: jne 0x5ec691 */
L_005EC679:
    MEM32(esi + 0xC) = 0; /* 0x005EC679: mov dword ptr [esi + 0xc], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EC680: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EC683: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EC68A: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EC68B: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC68C: pop esi */
    esp = ebp; /* 0x005EC68D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EC68F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EC690: ret  */
L_005EC691:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x005EC691: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0xC)); /* 0x005EC694: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EC697: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EC69E: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EC69F: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC6A0: pop esi */
    esp = ebp; /* 0x005EC6A1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EC6A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EC6A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EC6B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC6B0u);

L_005EC6B0:
    PUSH32(esp, ebp); /* 0x005EC6B0: push ebp */
    ebp = esp; /* 0x005EC6B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EC6B3: push -1 */
    PUSH32(esp, 0x007B1940u); /* 0x005EC6B5: push 0x7b1940 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EC6BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EC6C0: push eax */
    PUSH32(esp, ecx); /* 0x005EC6C1: push ecx */
    PUSH32(esp, esi); /* 0x005EC6C2: push esi */
    PUSH32(esp, edi); /* 0x005EC6C3: push edi */
    eax = MEM32(0x855000); /* 0x005EC6C4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EC6C9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EC6CB: push eax */
    eax = ebp + (-0xC); /* 0x005EC6CC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EC6CF: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005EC6D5: mov esi, ecx */
    eax = MEM32(esi + 0x10); /* 0x005EC6D7: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005EC6DA: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(esi + 0x8), eax */ /* 0x005EC6DB: cmp dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005EC6E6; /* 0x005EC6DE: ja 0x5ec6e6 */
L_005EC6E0:
    PUSH32(esp, ecx); /* 0x005EC6E0: push ecx */
    RECOMP_CALL(sub_005ECFD0); /* 0x005EC6E1: call 0x5ecfd0 */
    RECOMP_FLAGS_IN();
L_005EC6E6:
    ecx = MEM32(esi + 0x8); /* 0x005EC6E6: mov ecx, dword ptr [esi + 8] */
    eax = MEM32(esi + 0x10); /* 0x005EC6E9: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x005EC6EC: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ecx);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & ecx; /* 0x005EC6ED: and dword ptr [esi + 0xc], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0xC); /* 0x005EC6F0: add eax, dword ptr [esi + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x005EC6F3: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x4); /* 0x005EC6F5: mov eax, dword ptr [esi + 4] */
    edi = ecx * 4; /* 0x005EC6F8: lea edi, [ecx*4] */
    /* cmp MEM32(edi + eax), 0 */ /* 0x005EC6FF: cmp dword ptr [edi + eax], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EC722; /* 0x005EC703: jne 0x5ec722 */
L_005EC705:
    PUSH32(esp, 0x20u); /* 0x005EC705: push 0x20 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005EC707: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005EC70D: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EC70F: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x005EC712: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EC71C; /* 0x005EC714: jne 0x5ec71c */
L_005EC716:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005EC716: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005EC71C:
    eax = MEM32(esi + 0x4); /* 0x005EC71C: mov eax, dword ptr [esi + 4] */
    MEM32(edi + eax) = ecx; /* 0x005EC71F: mov dword ptr [edi + eax], ecx */
L_005EC722:
    eax = MEM32(esi + 0x4); /* 0x005EC722: mov eax, dword ptr [esi + 4] */
    edx = MEM32(edi + eax); /* 0x005EC725: mov edx, dword ptr [edi + eax] */
    MEM32(ebp + (-0x10)) = edx; /* 0x005EC728: mov dword ptr [ebp - 0x10], edx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EC72B: mov dword ptr [ebp - 4], 0 */
    /* test edx, edx */ /* 0x005EC732: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EC765; /* 0x005EC734: je 0x5ec765 */
L_005EC736:
    ecx = MEM32(ebp + 0x8); /* 0x005EC736: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x005EC739: mov eax, dword ptr [ecx] */
    MEM32(edx) = eax; /* 0x005EC73B: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x4); /* 0x005EC73D: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x005EC740: mov dword ptr [edx + 4], eax */
    eax = MEM32(ecx + 0x8); /* 0x005EC743: mov eax, dword ptr [ecx + 8] */
    MEM32(edx + 0x8) = eax; /* 0x005EC746: mov dword ptr [edx + 8], eax */
    eax = MEM32(ecx + 0xC); /* 0x005EC749: mov eax, dword ptr [ecx + 0xc] */
    MEM32(edx + 0xC) = eax; /* 0x005EC74C: mov dword ptr [edx + 0xc], eax */
    eax = MEM32(ecx + 0x10); /* 0x005EC74F: mov eax, dword ptr [ecx + 0x10] */
    MEM32(edx + 0x10) = eax; /* 0x005EC752: mov dword ptr [edx + 0x10], eax */
    eax = ecx + 0x14; /* 0x005EC755: lea eax, [ecx + 0x14] */
    PUSH32(esp, eax); /* 0x005EC758: push eax */
    ecx = edx + 0x14; /* 0x005EC759: lea ecx, [edx + 0x14] */
    RECOMP_CALL(sub_004E6D70); /* 0x005EC75C: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005EC761: mov byte ptr [ebp - 4], 0 */
L_005EC765:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EC765: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1; /* 0x005EC76C: inc dword ptr [esi + 0x10] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0xC)); /* 0x005EC76F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EC772: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EC779: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EC77A: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC77B: pop esi */
    esp = ebp; /* 0x005EC77C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EC77E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EC77F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EC790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC790u);

L_005EC790:
    PUSH32(esp, ebp); /* 0x005EC790: push ebp */
    ebp = esp; /* 0x005EC791: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EC793: push -1 */
    PUSH32(esp, 0x007B196Bu); /* 0x005EC795: push 0x7b196b */
    eax = MEM32(FS_BASE + (0)); /* 0x005EC79A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EC7A0: push eax */
    PUSH32(esp, ecx); /* 0x005EC7A1: push ecx */
    PUSH32(esp, ebx); /* 0x005EC7A2: push ebx */
    PUSH32(esp, esi); /* 0x005EC7A3: push esi */
    PUSH32(esp, edi); /* 0x005EC7A4: push edi */
    eax = MEM32(0x855000); /* 0x005EC7A5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EC7AA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EC7AC: push eax */
    eax = ebp + (-0xC); /* 0x005EC7AD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EC7B0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005EC7B6: mov esi, ecx */
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x005EC7B8: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(0x7CC694); /* 0x005EC7BC: mov ebx, dword ptr [0x7cc694] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EC817; /* 0x005EC7C2: je 0x5ec817 */
L_005EC7C4:
    ecx = MEM32(esi + 0x10); /* 0x005EC7C4: mov ecx, dword ptr [esi + 0x10] */
    eax = MEM32(esi + 0xC); /* 0x005EC7C7: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x005EC7CA: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x005EC7CB: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x8); /* 0x005EC7CD: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x005EC7D0: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x005EC7D1: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x4); /* 0x005EC7D3: mov eax, dword ptr [esi + 4] */
    edi = MEM32(eax + ecx * 4); /* 0x005EC7D6: mov edi, dword ptr [eax + ecx*4] */
    MEM32(ebp + (-0x10)) = edi; /* 0x005EC7D9: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EC7DC: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(edi + 0x14); /* 0x005EC7E3: mov eax, dword ptr [edi + 0x14] */
    /* test eax, eax */ /* 0x005EC7E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EC805; /* 0x005EC7E8: je 0x5ec805 */
L_005EC7EA:
    PUSH32(esp, eax); /* 0x005EC7EA: push eax */
    RECOMP_ICALL(ebx); /* 0x005EC7EB: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EC7ED: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x14) = 0; /* 0x005EC7F0: mov dword ptr [edi + 0x14], 0 */
    MEM32(edi + 0x18) = 0; /* 0x005EC7F7: mov dword ptr [edi + 0x18], 0 */
    MEM32(edi + 0x1C) = 0; /* 0x005EC7FE: mov dword ptr [edi + 0x1c], 0 */
L_005EC805:
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) - 1; /* 0x005EC805: dec dword ptr [esi + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_005EC811; /* 0x005EC808: jne 0x5ec811 */
L_005EC80A:
    MEM32(esi + 0xC) = 0; /* 0x005EC80A: mov dword ptr [esi + 0xc], 0 */
L_005EC811:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x005EC811: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EC7C4; /* 0x005EC815: jne 0x5ec7c4 */
L_005EC817:
    edi = MEM32(esi + 0x8); /* 0x005EC817: mov edi, dword ptr [esi + 8] */
    /* test edi, edi */ /* 0x005EC81A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EC835; /* 0x005EC81C: je 0x5ec835 */
L_005EC81E:
    edi = edi; /* 0x005EC81E: mov edi, edi */
L_005EC820:
    eax = MEM32(esi + 0x4); /* 0x005EC820: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x005EC823: dec edi */
    _flag_k = FK_DEC;
    eax = MEM32(eax + edi * 4); /* 0x005EC824: mov eax, dword ptr [eax + edi*4] */
    /* test eax, eax */ /* 0x005EC827: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EC831; /* 0x005EC829: je 0x5ec831 */
L_005EC82B:
    PUSH32(esp, eax); /* 0x005EC82B: push eax */
    RECOMP_ICALL(ebx); /* 0x005EC82C: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EC82E: add esp, 4 */
    _flag_k = FK_ADD;
L_005EC831:
    /* test edi, edi */ /* 0x005EC831: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EC820; /* 0x005EC833: jne 0x5ec820 */
L_005EC835:
    eax = MEM32(esi + 0x4); /* 0x005EC835: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x005EC838: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EC842; /* 0x005EC83A: je 0x5ec842 */
L_005EC83C:
    PUSH32(esp, eax); /* 0x005EC83C: push eax */
    RECOMP_ICALL(ebx); /* 0x005EC83D: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EC83F: add esp, 4 */
    _flag_k = FK_ADD;
L_005EC842:
    MEM32(esi + 0x4) = 0; /* 0x005EC842: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005EC849: mov dword ptr [esi + 8], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EC850: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EC853: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EC85A: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EC85B: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC85C: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EC85D: pop ebx */
    esp = ebp; /* 0x005EC85E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EC860: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EC861: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EC870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC870u);

L_005EC870:
    PUSH32(esp, ebp); /* 0x005EC870: push ebp */
    ebp = esp; /* 0x005EC871: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EC873: push -1 */
    PUSH32(esp, 0x007B19A1u); /* 0x005EC875: push 0x7b19a1 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EC87A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EC880: push eax */
    PUSH32(esp, ecx); /* 0x005EC881: push ecx */
    PUSH32(esp, esi); /* 0x005EC882: push esi */
    eax = MEM32(0x855000); /* 0x005EC883: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EC888: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EC88A: push eax */
    eax = ebp + (-0xC); /* 0x005EC88B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EC88E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005EC894: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005EC896: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EC899: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(esi)); /* 0x005EC8A0: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EC8A2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EC8A8: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x005EC8AB: mov dword ptr [esi], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EC8B1: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EC8B8: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EC8BB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EC8C2: pop ecx */
    esi = POP32_VAL(esp); /* 0x005EC8C3: pop esi */
    esp = ebp; /* 0x005EC8C4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EC8C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EC8C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EC8D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC8D0u);

L_005EC8D0:
    PUSH32(esp, ebx); /* 0x005EC8D0: push ebx */
    PUSH32(esp, esi); /* 0x005EC8D1: push esi */
    PUSH32(esp, edi); /* 0x005EC8D2: push edi */
    edi = ecx; /* 0x005EC8D3: mov edi, ecx */
    eax = 0x92492493u; /* 0x005EC8D5: mov eax, 0x92492493 */
    esi = MEM32(edi + 0x8); /* 0x005EC8DA: mov esi, dword ptr [edi + 8] */
    ebx = MEM32(edi + 0x4); /* 0x005EC8DD: mov ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x005EC8E0: sub esi, ebx */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005EC8E2: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005EC8E4: add edx, esi */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005EC8E6: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ecx = edx; /* 0x005EC8E9: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005EC8EB: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005EC8EB: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005EC8EE: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, 1 */ /* 0x005EC8F0: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EC934; /* 0x005EC8F3: jae 0x5ec934 */
L_005EC8F5:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(edi); /* 0x005EC8F5: sub ebx, dword ptr [edi] */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005EC8F7: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ebx); /* 0x005EC8FC: imul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x04924924u; /* 0x005EC8FE: mov eax, 0x4924924 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x005EC903: add edx, ebx */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005EC905: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ecx = edx; /* 0x005EC908: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005EC90A: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005EC90A: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005EC90D: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005EC90F: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x005EC911: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EC921; /* 0x005EC914: jae 0x5ec921 */
L_005EC916:
    PUSH32(esp, 0x007DFAB0u); /* 0x005EC916: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005EC91B: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005EC921:
    eax = ecx + 0x1; /* 0x005EC921: lea eax, [ecx + 1] */
    ecx = edi; /* 0x005EC924: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005EC926: push eax */
    RECOMP_CALL(sub_005ED200); /* 0x005EC927: call 0x5ed200 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005EC92C: push eax */
    ecx = edi; /* 0x005EC92D: mov ecx, edi */
    RECOMP_CALL(sub_005ED250); /* 0x005EC92F: call 0x5ed250 */
    RECOMP_FLAGS_IN();
L_005EC934:
    edi = POP32_VAL(esp); /* 0x005EC934: pop edi */
    esi = POP32_VAL(esp); /* 0x005EC935: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EC936: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EC937: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EC940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC940u);

L_005EC940:
    PUSH32(esp, ebp); /* 0x005EC940: push ebp */
    ebp = esp; /* 0x005EC941: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EC943: push -1 */
    PUSH32(esp, 0x007B19C9u); /* 0x005EC945: push 0x7b19c9 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EC94A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EC950: push eax */
    PUSH32(esp, ecx); /* 0x005EC951: push ecx */
    eax = MEM32(0x855000); /* 0x005EC952: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EC957: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EC959: push eax */
    eax = ebp + (-0xC); /* 0x005EC95A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EC95D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005EC963: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EC966: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EC96D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EC970: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EC977: pop ecx */
    esp = ebp; /* 0x005EC978: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EC97A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EC97B: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EC980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EC980u);

L_005EC980:
    PUSH32(esp, ebp); /* 0x005EC980: push ebp */
    ebp = esp; /* 0x005EC981: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005EC983: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x005EC984: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x005EC987: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x005EC98A: push esi */
    esi = ecx; /* 0x005EC98B: mov esi, ecx */
    ecx = MEM32(esi); /* 0x005EC98D: mov ecx, dword ptr [esi] */
    /* cmp eax, MEM32(ecx) */ /* 0x005EC98F: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EC9C6; /* 0x005EC991: jne 0x5ec9c6 */
L_005EC993:
    /* cmp edx, ecx */ /* 0x005EC993: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EC9C6; /* 0x005EC995: jne 0x5ec9c6 */
L_005EC997:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x005EC997: push dword ptr [ecx + 4] */
    ecx = esi; /* 0x005EC99A: mov ecx, esi */
    RECOMP_CALL(sub_005EC300); /* 0x005EC99C: call 0x5ec300 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005EC9A1: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = eax; /* 0x005EC9A3: mov dword ptr [eax + 4], eax */
    eax = MEM32(esi); /* 0x005EC9A6: mov eax, dword ptr [esi] */
    MEM32(eax) = eax; /* 0x005EC9A8: mov dword ptr [eax], eax */
    eax = MEM32(esi); /* 0x005EC9AA: mov eax, dword ptr [esi] */
    MEM32(eax + 0x8) = eax; /* 0x005EC9AC: mov dword ptr [eax + 8], eax */
    eax = MEM32(esi); /* 0x005EC9AF: mov eax, dword ptr [esi] */
    MEM32(esi + 0x4) = 0; /* 0x005EC9B1: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x005EC9B8: pop esi */
    ecx = MEM32(eax); /* 0x005EC9B9: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x005EC9BB: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005EC9BE: mov dword ptr [eax], ecx */
    esp = ebp; /* 0x005EC9C0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EC9C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005EC9C3: ret 0xc */
L_005EC9C6:
    /* cmp eax, edx */ /* 0x005EC9C6: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005ECA2F; /* 0x005EC9C8: je 0x5eca2f */
L_005EC9CA:
    ebx = ebx; /* 0x005EC9CA: lea ebx, [ebx] */
L_005EC9D0:
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EC9D0: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax; /* 0x005EC9D4: mov ecx, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ECA1B; /* 0x005EC9D6: jne 0x5eca1b */
L_005EC9D8:
    edx = MEM32(eax + 0x8); /* 0x005EC9D8: mov edx, dword ptr [eax + 8] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005EC9DB: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EC9FC; /* 0x005EC9DF: jne 0x5ec9fc */
L_005EC9E1:
    eax = MEM32(edx); /* 0x005EC9E1: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EC9E3: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ECA18; /* 0x005EC9E7: jne 0x5eca18 */
L_005EC9E9:
    esp = esp; /* 0x005EC9E9: lea esp, [esp] */
L_005EC9F0:
    edx = eax; /* 0x005EC9F0: mov edx, eax */
    eax = MEM32(edx); /* 0x005EC9F2: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EC9F4: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EC9F0; /* 0x005EC9F8: je 0x5ec9f0 */
L_005EC9FA:
    goto L_005ECA18; /* 0x005EC9FA: jmp 0x5eca18 */
L_005EC9FC:
    edx = MEM32(eax + 0x4); /* 0x005EC9FC: mov edx, dword ptr [eax + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005EC9FF: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ECA18; /* 0x005ECA03: jne 0x5eca18 */
L_005ECA05:
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x005ECA05: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ECA18; /* 0x005ECA08: jne 0x5eca18 */
L_005ECA0A:
    eax = edx; /* 0x005ECA0A: mov eax, edx */
    MEM32(ebp + 0xC) = eax; /* 0x005ECA0C: mov dword ptr [ebp + 0xc], eax */
    edx = MEM32(edx + 0x4); /* 0x005ECA0F: mov edx, dword ptr [edx + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005ECA12: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005ECA05; /* 0x005ECA16: je 0x5eca05 */
L_005ECA18:
    MEM32(ebp + 0xC) = edx; /* 0x005ECA18: mov dword ptr [ebp + 0xc], edx */
L_005ECA1B:
    PUSH32(esp, ecx); /* 0x005ECA1B: push ecx */
    eax = ebp + (-0x4); /* 0x005ECA1C: lea eax, [ebp - 4] */
    ecx = esi; /* 0x005ECA1F: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005ECA21: push eax */
    RECOMP_CALL(sub_005EB5D0); /* 0x005ECA22: call 0x5eb5d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x005ECA27: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x005ECA2A: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EC9D0; /* 0x005ECA2D: jne 0x5ec9d0 */
L_005ECA2F:
    ecx = MEM32(ebp + 0x8); /* 0x005ECA2F: mov ecx, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x005ECA32: pop esi */
    MEM32(ecx) = eax; /* 0x005ECA33: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x005ECA35: mov eax, ecx */
    esp = ebp; /* 0x005ECA37: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ECA39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005ECA3A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005ECA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ECA40u);

L_005ECA40:
    PUSH32(esp, ebp); /* 0x005ECA40: push ebp */
    ebp = esp; /* 0x005ECA41: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005ECA43: push esi */
    esi = MEM32(ecx + 0x8); /* 0x005ECA44: mov esi, dword ptr [ecx + 8] */
    eax = 0x92492493u; /* 0x005ECA47: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x005ECA4C: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005ECA4E: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x02492492u; /* 0x005ECA50: mov eax, 0x2492492 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005ECA55: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005ECA57: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    esi = edx; /* 0x005ECA5A: mov esi, edx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x005ECA5C: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x005ECA5C: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x005ECA5F: add esi, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x005ECA61: mov ecx, esi */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x005ECA63: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x005ECA63: shr ecx, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005ECA65: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x005ECA67: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005ECA7B; /* 0x005ECA69: jae 0x5eca7b */
L_005ECA6B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005ECA6B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x005ECA6D: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = MEM32(ebp + 0x8); } /* 0x005ECA70: cmovb esi, dword ptr [ebp + 8] */
    eax = esi; /* 0x005ECA74: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005ECA76: pop esi */
    ebp = POP32_VAL(esp); /* 0x005ECA77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ECA78: ret 4 */
L_005ECA7B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x005ECA7B: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x005ECA7D: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = MEM32(ebp + 0x8); } /* 0x005ECA80: cmovb esi, dword ptr [ebp + 8] */
    eax = esi; /* 0x005ECA84: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005ECA86: pop esi */
    ebp = POP32_VAL(esp); /* 0x005ECA87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ECA88: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005ECA90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ECA90u);

L_005ECA90:
    PUSH32(esp, ebp); /* 0x005ECA90: push ebp */
    ebp = esp; /* 0x005ECA91: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005ECA93: push -1 */
    PUSH32(esp, 0x007B19F0u); /* 0x005ECA95: push 0x7b19f0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005ECA9A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005ECAA0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005ECAA1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005ECAA4: push ebx */
    PUSH32(esp, esi); /* 0x005ECAA5: push esi */
    PUSH32(esp, edi); /* 0x005ECAA6: push edi */
    eax = MEM32(0x855000); /* 0x005ECAA7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005ECAAC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005ECAAE: push eax */
    eax = ebp + (-0xC); /* 0x005ECAAF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005ECAB2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005ECAB8: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x005ECABB: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005ECABD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = edi; /* 0x005ECABF: mov dword ptr [ebp - 0x14], edi */
    eax = MEM32(ebp + 0x8); /* 0x005ECAC2: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x005ECAC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ECAEC; /* 0x005ECAC7: je 0x5ecaec */
L_005ECAC9:
    /* cmp eax, 0x02492492u */ /* 0x005ECAC9: cmp eax, 0x2492492 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x02492492u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005ECAE6; /* 0x005ECACE: ja 0x5ecae6 */
L_005ECAD0:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70u); /* 0x005ECAD0: imul eax, eax, 0x70 */
    PUSH32(esp, eax); /* 0x005ECAD3: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005ECAD4: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ECADA: add esp, 4 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x005ECADD: mov edi, eax */
    MEM32(ebp + (-0x14)) = edi; /* 0x005ECADF: mov dword ptr [ebp - 0x14], edi */
    /* test edi, edi */ /* 0x005ECAE2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005ECAEC; /* 0x005ECAE4: jne 0x5ecaec */
L_005ECAE6:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005ECAE6: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005ECAEC:
    MEM32(ebp + (-0x4)) = 0; /* 0x005ECAEC: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005ECAF3: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005ECAF6: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x005ECAF9: push edi */
    edx = MEM32(ebx + 0x4); /* 0x005ECAFA: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x005ECAFD: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_005EF7B0); /* 0x005ECAFF: call 0x5ef7b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005ECB04: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005ECB07: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebx + 0x4); /* 0x005ECB0E: mov eax, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005ECB11: mov dword ptr [ebp - 0x14], eax */
    esi = MEM32(ebx); /* 0x005ECB14: mov esi, dword ptr [ebx] */
    ecx = eax; /* 0x005ECB16: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005ECB18: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005ECB1A: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005ECB1F: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005ECB21: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005ECB23: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005ECB26: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005ECB28: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005ECB28: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005ECB2B: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x005ECB2D: mov dword ptr [ebp - 0x18], eax */
    /* test esi, esi */ /* 0x005ECB30: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ECB5A; /* 0x005ECB32: je 0x5ecb5a */
L_005ECB34:
    /* cmp esi, MEM32(ebp + (-0x14)) */ /* 0x005ECB34: cmp esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005ECB4F; /* 0x005ECB37: je 0x5ecb4f */
L_005ECB39:
    esp = esp; /* 0x005ECB39: lea esp, [esp] */
L_005ECB40:
    ecx = esi; /* 0x005ECB40: mov ecx, esi */
    RECOMP_CALL(sub_0054E9F0); /* 0x005ECB42: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005ECB47: add esi, 0x70 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + (-0x14)) */ /* 0x005ECB4A: cmp esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ECB40; /* 0x005ECB4D: jne 0x5ecb40 */
L_005ECB4F:
    PUSH32(esp, MEM32(ebx)); /* 0x005ECB4F: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005ECB51: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ECB57: add esp, 4 */
    _flag_k = FK_ADD;
L_005ECB5A:
    eax = (uint32_t)((int32_t)MEM32(ebp + 0x8) * (int32_t)0x70u); /* 0x005ECB5A: imul eax, dword ptr [ebp + 8], 0x70 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005ECB5E: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x8) = eax; /* 0x005ECB60: mov dword ptr [ebx + 8], eax */
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x18)) * (int32_t)0x70u); /* 0x005ECB63: imul eax, dword ptr [ebp - 0x18], 0x70 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005ECB67: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4) = eax; /* 0x005ECB69: mov dword ptr [ebx + 4], eax */
    MEM32(ebx) = edi; /* 0x005ECB6C: mov dword ptr [ebx], edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005ECB6E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005ECB71: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005ECB78: pop ecx */
    edi = POP32_VAL(esp); /* 0x005ECB79: pop edi */
    esi = POP32_VAL(esp); /* 0x005ECB7A: pop esi */
    ebx = POP32_VAL(esp); /* 0x005ECB7B: pop ebx */
    esp = ebp; /* 0x005ECB7C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ECB7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ECB7F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005ECB82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ECB82u);

L_005ECB82:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005ECB82: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005ECB85: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ECB8B: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005ECB8E: push 0 */
    PUSH32(esp, 0); /* 0x005ECB90: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005ECB92: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005ECB97u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005ECBA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ECBA0u);

L_005ECBA0:
    PUSH32(esp, ebp); /* 0x005ECBA0: push ebp */
    ebp = esp; /* 0x005ECBA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005ECBA3: push -1 */
    PUSH32(esp, 0x007B1A10u); /* 0x005ECBA5: push 0x7b1a10 */
    eax = MEM32(FS_BASE + (0)); /* 0x005ECBAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005ECBB0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005ECBB1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005ECBB4: push ebx */
    PUSH32(esp, esi); /* 0x005ECBB5: push esi */
    PUSH32(esp, edi); /* 0x005ECBB6: push edi */
    eax = MEM32(0x855000); /* 0x005ECBB7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005ECBBC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005ECBBE: push eax */
    eax = ebp + (-0xC); /* 0x005ECBBF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005ECBC2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005ECBC8: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x005ECBCB: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005ECBCD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x005ECBCF: mov dword ptr [ebp - 0x14], esi */
    edi = MEM32(ebp + 0x8); /* 0x005ECBD2: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x005ECBD5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ECC00; /* 0x005ECBD7: je 0x5ecc00 */
L_005ECBD9:
    /* cmp edi, 0x038E38E3u */ /* 0x005ECBD9: cmp edi, 0x38e38e3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x038E38E3u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005ECBFA; /* 0x005ECBDF: ja 0x5ecbfa */
L_005ECBE1:
    eax = edi + edi * 8; /* 0x005ECBE1: lea eax, [edi + edi*8] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x005ECBE4: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x005ECBE4: shl eax, 3 */
    PUSH32(esp, eax); /* 0x005ECBE7: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005ECBE8: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ECBEE: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005ECBF1: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x005ECBF3: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x005ECBF6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005ECC00; /* 0x005ECBF8: jne 0x5ecc00 */
L_005ECBFA:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005ECBFA: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005ECC00:
    MEM32(ebp + (-0x4)) = 0; /* 0x005ECC00: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005ECC07: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005ECC0A: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005ECC0D: push esi */
    edx = MEM32(ebx + 0x4); /* 0x005ECC0E: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x005ECC11: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_005EF860); /* 0x005ECC13: call 0x5ef860 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005ECC18: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005ECC1B: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebx + 0x4); /* 0x005ECC22: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x005ECC25: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x38E38E39u; /* 0x005ECC27: mov eax, 0x38e38e39 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005ECC2C: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005ECC2E: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    ecx = edx; /* 0x005ECC31: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005ECC33: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005ECC33: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005ECC36: add ecx, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ecx; /* 0x005ECC38: mov dword ptr [ebp + 8], ecx */
    eax = MEM32(ebx); /* 0x005ECC3B: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x005ECC3D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ECC5D; /* 0x005ECC3F: je 0x5ecc5d */
L_005ECC41:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005ECC41: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005ECC44: push ecx */
    edx = MEM32(ebx + 0x4); /* 0x005ECC45: mov edx, dword ptr [ebx + 4] */
    ecx = eax; /* 0x005ECC48: mov ecx, eax */
    RECOMP_CALL(sub_005EE1F0); /* 0x005ECC4A: call 0x5ee1f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx)); /* 0x005ECC4F: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005ECC51: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005ECC57: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x005ECC5A: mov ecx, dword ptr [ebp + 8] */
L_005ECC5D:
    eax = edi + edi * 8; /* 0x005ECC5D: lea eax, [edi + edi*8] */
    eax = esi + eax * 8; /* 0x005ECC60: lea eax, [esi + eax*8] */
    MEM32(ebx + 0x8) = eax; /* 0x005ECC63: mov dword ptr [ebx + 8], eax */
    eax = ecx + ecx * 8; /* 0x005ECC66: lea eax, [ecx + ecx*8] */
    eax = esi + eax * 8; /* 0x005ECC69: lea eax, [esi + eax*8] */
    MEM32(ebx + 0x4) = eax; /* 0x005ECC6C: mov dword ptr [ebx + 4], eax */
    MEM32(ebx) = esi; /* 0x005ECC6F: mov dword ptr [ebx], esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005ECC71: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005ECC74: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005ECC7B: pop ecx */
    edi = POP32_VAL(esp); /* 0x005ECC7C: pop edi */
    esi = POP32_VAL(esp); /* 0x005ECC7D: pop esi */
    ebx = POP32_VAL(esp); /* 0x005ECC7E: pop ebx */
    esp = ebp; /* 0x005ECC7F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ECC81: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ECC82: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005ECC85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ECC85u);

L_005ECC85:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005ECC85: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005ECC88: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ECC8E: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005ECC91: push 0 */
    PUSH32(esp, 0); /* 0x005ECC93: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005ECC95: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005ECC9Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005ECCA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ECCA0u);

L_005ECCA0:
    PUSH32(esp, ebp); /* 0x005ECCA0: push ebp */
    ebp = esp; /* 0x005ECCA1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005ECCA3: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x005ECCA4: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x005ECCA7: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x005ECCAA: push esi */
    esi = ecx; /* 0x005ECCAB: mov esi, ecx */
    ecx = MEM32(esi); /* 0x005ECCAD: mov ecx, dword ptr [esi] */
    /* cmp eax, MEM32(ecx) */ /* 0x005ECCAF: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ECCE6; /* 0x005ECCB1: jne 0x5ecce6 */
L_005ECCB3:
    /* cmp edx, ecx */ /* 0x005ECCB3: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ECCE6; /* 0x005ECCB5: jne 0x5ecce6 */
L_005ECCB7:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x005ECCB7: push dword ptr [ecx + 4] */
    ecx = esi; /* 0x005ECCBA: mov ecx, esi */
    RECOMP_CALL(sub_005ED360); /* 0x005ECCBC: call 0x5ed360 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005ECCC1: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = eax; /* 0x005ECCC3: mov dword ptr [eax + 4], eax */
    eax = MEM32(esi); /* 0x005ECCC6: mov eax, dword ptr [esi] */
    MEM32(eax) = eax; /* 0x005ECCC8: mov dword ptr [eax], eax */
    eax = MEM32(esi); /* 0x005ECCCA: mov eax, dword ptr [esi] */
    MEM32(eax + 0x8) = eax; /* 0x005ECCCC: mov dword ptr [eax + 8], eax */
    eax = MEM32(esi); /* 0x005ECCCF: mov eax, dword ptr [esi] */
    MEM32(esi + 0x4) = 0; /* 0x005ECCD1: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x005ECCD8: pop esi */
    ecx = MEM32(eax); /* 0x005ECCD9: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x005ECCDB: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005ECCDE: mov dword ptr [eax], ecx */
    esp = ebp; /* 0x005ECCE0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ECCE2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005ECCE3: ret 0xc */
L_005ECCE6:
    /* cmp eax, edx */ /* 0x005ECCE6: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005ECD4F; /* 0x005ECCE8: je 0x5ecd4f */
L_005ECCEA:
    ebx = ebx; /* 0x005ECCEA: lea ebx, [ebx] */
L_005ECCF0:
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005ECCF0: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax; /* 0x005ECCF4: mov ecx, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ECD3B; /* 0x005ECCF6: jne 0x5ecd3b */
L_005ECCF8:
    edx = MEM32(eax + 0x8); /* 0x005ECCF8: mov edx, dword ptr [eax + 8] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005ECCFB: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ECD1C; /* 0x005ECCFF: jne 0x5ecd1c */
L_005ECD01:
    eax = MEM32(edx); /* 0x005ECD01: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005ECD03: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ECD38; /* 0x005ECD07: jne 0x5ecd38 */
L_005ECD09:
    esp = esp; /* 0x005ECD09: lea esp, [esp] */
L_005ECD10:
    edx = eax; /* 0x005ECD10: mov edx, eax */
    eax = MEM32(edx); /* 0x005ECD12: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005ECD14: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005ECD10; /* 0x005ECD18: je 0x5ecd10 */
L_005ECD1A:
    goto L_005ECD38; /* 0x005ECD1A: jmp 0x5ecd38 */
L_005ECD1C:
    edx = MEM32(eax + 0x4); /* 0x005ECD1C: mov edx, dword ptr [eax + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005ECD1F: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ECD38; /* 0x005ECD23: jne 0x5ecd38 */
L_005ECD25:
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x005ECD25: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ECD38; /* 0x005ECD28: jne 0x5ecd38 */
L_005ECD2A:
    eax = edx; /* 0x005ECD2A: mov eax, edx */
    MEM32(ebp + 0xC) = eax; /* 0x005ECD2C: mov dword ptr [ebp + 0xc], eax */
    edx = MEM32(edx + 0x4); /* 0x005ECD2F: mov edx, dword ptr [edx + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005ECD32: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005ECD25; /* 0x005ECD36: je 0x5ecd25 */
L_005ECD38:
    MEM32(ebp + 0xC) = edx; /* 0x005ECD38: mov dword ptr [ebp + 0xc], edx */
L_005ECD3B:
    PUSH32(esp, ecx); /* 0x005ECD3B: push ecx */
    eax = ebp + (-0x4); /* 0x005ECD3C: lea eax, [ebp - 4] */
    ecx = esi; /* 0x005ECD3F: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005ECD41: push eax */
    RECOMP_CALL(sub_005EBBE0); /* 0x005ECD42: call 0x5ebbe0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x005ECD47: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x005ECD4A: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ECCF0; /* 0x005ECD4D: jne 0x5eccf0 */
L_005ECD4F:
    ecx = MEM32(ebp + 0x8); /* 0x005ECD4F: mov ecx, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x005ECD52: pop esi */
    MEM32(ecx) = eax; /* 0x005ECD53: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x005ECD55: mov eax, ecx */
    esp = ebp; /* 0x005ECD57: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ECD59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005ECD5A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005ECD60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ECD60u);

L_005ECD60:
    PUSH32(esp, ebp); /* 0x005ECD60: push ebp */
    ebp = esp; /* 0x005ECD61: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005ECD63: push esi */
    esi = MEM32(ecx + 0x8); /* 0x005ECD64: mov esi, dword ptr [ecx + 8] */
    eax = 0xB21642C9u; /* 0x005ECD67: mov eax, 0xb21642c9 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x005ECD6C: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005ECD6E: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x02C8590Bu; /* 0x005ECD70: mov eax, 0x2c8590b */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005ECD75: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005ECD77: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    esi = edx; /* 0x005ECD7A: mov esi, edx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x005ECD7C: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x005ECD7C: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x005ECD7F: add esi, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x005ECD81: mov ecx, esi */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x005ECD83: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x005ECD83: shr ecx, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005ECD85: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x005ECD87: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005ECD9B; /* 0x005ECD89: jae 0x5ecd9b */
L_005ECD8B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005ECD8B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x005ECD8D: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = MEM32(ebp + 0x8); } /* 0x005ECD90: cmovb esi, dword ptr [ebp + 8] */
    eax = esi; /* 0x005ECD94: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005ECD96: pop esi */
    ebp = POP32_VAL(esp); /* 0x005ECD97: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ECD98: ret 4 */
L_005ECD9B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x005ECD9B: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x005ECD9D: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = MEM32(ebp + 0x8); } /* 0x005ECDA0: cmovb esi, dword ptr [ebp + 8] */
    eax = esi; /* 0x005ECDA4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005ECDA6: pop esi */
    ebp = POP32_VAL(esp); /* 0x005ECDA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ECDA8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005ECDB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ECDB0u);

L_005ECDB0:
    PUSH32(esp, ebp); /* 0x005ECDB0: push ebp */
    ebp = esp; /* 0x005ECDB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005ECDB3: push -1 */
    PUSH32(esp, 0x007B1A30u); /* 0x005ECDB5: push 0x7b1a30 */
    eax = MEM32(FS_BASE + (0)); /* 0x005ECDBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005ECDC0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005ECDC1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005ECDC4: push ebx */
    PUSH32(esp, esi); /* 0x005ECDC5: push esi */
    PUSH32(esp, edi); /* 0x005ECDC6: push edi */
    eax = MEM32(0x855000); /* 0x005ECDC7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005ECDCC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005ECDCE: push eax */
    eax = ebp + (-0xC); /* 0x005ECDCF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005ECDD2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005ECDD8: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x005ECDDB: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005ECDDD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x005ECDDF: mov dword ptr [ebp - 0x14], esi */
    ebx = MEM32(ebp + 0x8); /* 0x005ECDE2: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x005ECDE5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ECE0D; /* 0x005ECDE7: je 0x5ece0d */
L_005ECDE9:
    /* cmp ebx, 0x02C8590Bu */ /* 0x005ECDE9: cmp ebx, 0x2c8590b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x02C8590Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005ECE07; /* 0x005ECDEF: ja 0x5ece07 */
L_005ECDF1:
    eax = (uint32_t)((int32_t)ebx * (int32_t)0x5Cu); /* 0x005ECDF1: imul eax, ebx, 0x5c */
    PUSH32(esp, eax); /* 0x005ECDF4: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005ECDF5: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ECDFB: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005ECDFE: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x005ECE00: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x005ECE03: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005ECE0D; /* 0x005ECE05: jne 0x5ece0d */
L_005ECE07:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005ECE07: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005ECE0D:
    MEM32(ebp + (-0x4)) = 0; /* 0x005ECE0D: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005ECE14: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005ECE17: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005ECE1A: push esi */
    edx = MEM32(edi + 0x4); /* 0x005ECE1B: mov edx, dword ptr [edi + 4] */
    ecx = MEM32(edi); /* 0x005ECE1E: mov ecx, dword ptr [edi] */
    RECOMP_CALL(sub_005EF910); /* 0x005ECE20: call 0x5ef910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005ECE25: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005ECE28: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(edi + 0x4); /* 0x005ECE2F: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x005ECE32: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    eax = 0xB21642C9u; /* 0x005ECE34: mov eax, 0xb21642c9 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005ECE39: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005ECE3B: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005ECE3D: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005ECE40: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005ECE42: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005ECE42: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005ECE45: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x005ECE47: mov dword ptr [ebp + 8], eax */
    ecx = MEM32(edi); /* 0x005ECE4A: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x005ECE4C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ECE67; /* 0x005ECE4E: je 0x5ece67 */
L_005ECE50:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005ECE50: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005ECE53: push ecx */
    edx = MEM32(edi + 0x4); /* 0x005ECE54: mov edx, dword ptr [edi + 4] */
    RECOMP_CALL(sub_005EE2A0); /* 0x005ECE57: call 0x5ee2a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x005ECE5C: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005ECE5E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005ECE64: add esp, 0xc */
    _flag_k = FK_ADD;
L_005ECE67:
    eax = (uint32_t)((int32_t)ebx * (int32_t)0x5Cu); /* 0x005ECE67: imul eax, ebx, 0x5c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005ECE6A: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(edi + 0x8) = eax; /* 0x005ECE6C: mov dword ptr [edi + 8], eax */
    eax = (uint32_t)((int32_t)MEM32(ebp + 0x8) * (int32_t)0x5Cu); /* 0x005ECE6F: imul eax, dword ptr [ebp + 8], 0x5c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005ECE73: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x005ECE75: mov dword ptr [edi + 4], eax */
    MEM32(edi) = esi; /* 0x005ECE78: mov dword ptr [edi], esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005ECE7A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005ECE7D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005ECE84: pop ecx */
    edi = POP32_VAL(esp); /* 0x005ECE85: pop edi */
    esi = POP32_VAL(esp); /* 0x005ECE86: pop esi */
    ebx = POP32_VAL(esp); /* 0x005ECE87: pop ebx */
    esp = ebp; /* 0x005ECE88: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ECE8A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ECE8B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005ECE8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ECE8Eu);

L_005ECE8E:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005ECE8E: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005ECE91: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ECE97: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005ECE9A: push 0 */
    PUSH32(esp, 0); /* 0x005ECE9C: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005ECE9E: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005ECEA3u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005ECEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ECEB0u);

L_005ECEB0:
    PUSH32(esp, ebp); /* 0x005ECEB0: push ebp */
    ebp = esp; /* 0x005ECEB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005ECEB3: push -1 */
    PUSH32(esp, 0x007B1A50u); /* 0x005ECEB5: push 0x7b1a50 */
    eax = MEM32(FS_BASE + (0)); /* 0x005ECEBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005ECEC0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005ECEC1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005ECEC4: push ebx */
    PUSH32(esp, esi); /* 0x005ECEC5: push esi */
    PUSH32(esp, edi); /* 0x005ECEC6: push edi */
    eax = MEM32(0x855000); /* 0x005ECEC7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005ECECC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005ECECE: push eax */
    eax = ebp + (-0xC); /* 0x005ECECF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005ECED2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005ECED8: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x005ECEDB: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005ECEDD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x005ECEDF: mov dword ptr [ebp - 0x14], esi */
    ebx = MEM32(ebp + 0x8); /* 0x005ECEE2: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x005ECEE5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ECF0D; /* 0x005ECEE7: je 0x5ecf0d */
L_005ECEE9:
    /* cmp ebx, 0x02492492u */ /* 0x005ECEE9: cmp ebx, 0x2492492 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x02492492u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005ECF07; /* 0x005ECEEF: ja 0x5ecf07 */
L_005ECEF1:
    eax = (uint32_t)((int32_t)ebx * (int32_t)0x70u); /* 0x005ECEF1: imul eax, ebx, 0x70 */
    PUSH32(esp, eax); /* 0x005ECEF4: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005ECEF5: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ECEFB: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005ECEFE: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x005ECF00: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x005ECF03: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005ECF0D; /* 0x005ECF05: jne 0x5ecf0d */
L_005ECF07:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005ECF07: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005ECF0D:
    MEM32(ebp + (-0x4)) = 0; /* 0x005ECF0D: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005ECF14: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005ECF17: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005ECF1A: push esi */
    edx = MEM32(edi + 0x4); /* 0x005ECF1B: mov edx, dword ptr [edi + 4] */
    ecx = MEM32(edi); /* 0x005ECF1E: mov ecx, dword ptr [edi] */
    RECOMP_CALL(sub_005EF9E0); /* 0x005ECF20: call 0x5ef9e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005ECF25: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005ECF28: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(edi + 0x4); /* 0x005ECF2F: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x005ECF32: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005ECF34: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005ECF39: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005ECF3B: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005ECF3D: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005ECF40: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005ECF42: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005ECF42: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005ECF45: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x005ECF47: mov dword ptr [ebp + 8], eax */
    ecx = MEM32(edi); /* 0x005ECF4A: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x005ECF4C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ECF67; /* 0x005ECF4E: je 0x5ecf67 */
L_005ECF50:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005ECF50: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005ECF53: push ecx */
    edx = MEM32(edi + 0x4); /* 0x005ECF54: mov edx, dword ptr [edi + 4] */
    RECOMP_CALL(sub_005EE380); /* 0x005ECF57: call 0x5ee380 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x005ECF5C: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005ECF5E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005ECF64: add esp, 0xc */
    _flag_k = FK_ADD;
L_005ECF67:
    eax = (uint32_t)((int32_t)ebx * (int32_t)0x70u); /* 0x005ECF67: imul eax, ebx, 0x70 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005ECF6A: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(edi + 0x8) = eax; /* 0x005ECF6C: mov dword ptr [edi + 8], eax */
    eax = (uint32_t)((int32_t)MEM32(ebp + 0x8) * (int32_t)0x70u); /* 0x005ECF6F: imul eax, dword ptr [ebp + 8], 0x70 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005ECF73: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x005ECF75: mov dword ptr [edi + 4], eax */
    MEM32(edi) = esi; /* 0x005ECF78: mov dword ptr [edi], esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005ECF7A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005ECF7D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005ECF84: pop ecx */
    edi = POP32_VAL(esp); /* 0x005ECF85: pop edi */
    esi = POP32_VAL(esp); /* 0x005ECF86: pop esi */
    ebx = POP32_VAL(esp); /* 0x005ECF87: pop ebx */
    esp = ebp; /* 0x005ECF88: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ECF8A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ECF8B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005ECF8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ECF8Eu);

L_005ECF8E:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005ECF8E: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005ECF91: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ECF97: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005ECF9A: push 0 */
    PUSH32(esp, 0); /* 0x005ECF9C: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005ECF9E: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005ECFA3u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005ECFB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ECFB0u);

L_005ECFB0:
    PUSH32(esp, ebp); /* 0x005ECFB0: push ebp */
    ebp = esp; /* 0x005ECFB1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005ECFB3: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0xC); /* 0x005ECFB6: mov edx, dword ptr [ecx + 0xc] */
    ecx = MEM32(ecx); /* 0x005ECFB9: mov ecx, dword ptr [ecx] */
    MEM32(eax + 0x4) = 0; /* 0x005ECFBB: mov dword ptr [eax + 4], 0 */
    MEM32(eax) = ecx; /* 0x005ECFC2: mov dword ptr [eax], ecx */
    MEM32(eax + 0x8) = edx; /* 0x005ECFC4: mov dword ptr [eax + 8], edx */
    ebp = POP32_VAL(esp); /* 0x005ECFC7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ECFC8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005ECFD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ECFD0u);

L_005ECFD0:
    PUSH32(esp, ebp); /* 0x005ECFD0: push ebp */
    ebp = esp; /* 0x005ECFD1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x005ECFD3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005ECFD6: push ebx */
    ebx = ecx; /* 0x005ECFD7: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x005ECFD9: push esi */
    esi = 1; /* 0x005ECFDA: mov esi, 1 */
    MEM32(ebp + (-0x14)) = ebx; /* 0x005ECFDF: mov dword ptr [ebp - 0x14], ebx */
    PUSH32(esp, edi); /* 0x005ECFE2: push edi */
    edx = MEM32(ebx + 0x8); /* 0x005ECFE3: mov edx, dword ptr [ebx + 8] */
    /* test edx, edx */ /* 0x005ECFE6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = edx; } /* 0x005ECFE8: cmovne esi, edx */
    goto L_005ECFF0; /* 0x005ECFEB: jmp 0x5ecff0 */
L_005ECFF0:
    eax = esi; /* 0x005ECFF0: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005ECFF2: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x005ECFF4: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005ECFFE; /* 0x005ECFF7: jb 0x5ecffe */
L_005ECFF9:
    /* cmp esi, 8 */ /* 0x005ECFF9: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005ED011; /* 0x005ECFFC: jae 0x5ed011 */
L_005ECFFE:
    eax = 0x07FFFFFFu; /* 0x005ECFFE: mov eax, 0x7ffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x005ED003: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x005ED005: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005ED143; /* 0x005ED007: jb 0x5ed143 */
L_005ED00D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x005ED00D: add esi, esi */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_005ECFF0; /* 0x005ED00F: jmp 0x5ecff0 */
L_005ED011:
    edi = MEM32(ebx + 0xC); /* 0x005ED011: mov edi, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x005ED014: sub esi, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x005ED016: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005ED019: mov dword ptr [ebp - 4], 0 */
    eax = edx + esi; /* 0x005ED020: lea eax, [edx + esi] */
    /* test eax, eax */ /* 0x005ED023: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ED048; /* 0x005ED025: je 0x5ed048 */
L_005ED027:
    /* cmp eax, 0x3FFFFFFFu */ /* 0x005ED027: cmp eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005ED042; /* 0x005ED02C: ja 0x5ed042 */
L_005ED02E:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x005ED02E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x005ED02E: shl eax, 2 */
    PUSH32(esp, eax); /* 0x005ED031: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005ED032: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ED038: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x005ED03B: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x005ED03E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005ED048; /* 0x005ED040: jne 0x5ed048 */
L_005ED042:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005ED042: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005ED048:
    ecx = MEM32(ebx + 0x4); /* 0x005ED048: mov ecx, dword ptr [ebx + 4] */
    eax = MEM32(ebx + 0x8); /* 0x005ED04B: mov eax, dword ptr [ebx + 8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x005ED04E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x005ED04E: shl eax, 2 */
    edx = ecx + edi * 4; /* 0x005ED051: lea edx, [ecx + edi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005ED054: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x005ED056: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x8)); /* 0x005ED058: mov ecx, dword ptr [ebp - 8] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005ED05B: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    edi = eax * 4; /* 0x005ED05E: lea edi, [eax*4] */
    eax = MEM32(ebp + (-0x4)); /* 0x005ED065: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x005ED068: push edi */
    PUSH32(esp, edx); /* 0x005ED069: push edx */
    eax = eax + ecx * 4; /* 0x005ED06A: lea eax, [eax + ecx*4] */
    PUSH32(esp, eax); /* 0x005ED06D: push eax */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x005ED06E: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x005ED074: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005ED077: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = edi + eax; /* 0x005ED07A: lea edx, [edi + eax] */
    edi = MEM32(ebp + (-0x8)); /* 0x005ED07D: mov edi, dword ptr [ebp - 8] */
    MEM32(ebp + (-0xC)) = edx; /* 0x005ED080: mov dword ptr [ebp - 0xc], edx */
    /* cmp edi, esi */ /* 0x005ED083: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005ED0CE; /* 0x005ED085: ja 0x5ed0ce */
L_005ED087:
    eax = edi * 4; /* 0x005ED087: lea eax, [edi*4] */
    edx = esi; /* 0x005ED08E: mov edx, esi */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005ED090: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x005ED093: sub edx, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = edx; /* 0x005ED095: mov dword ptr [ebp - 0x10], edx */
    ebx = eax * 4; /* 0x005ED098: lea ebx, [eax*4] */
    eax = MEM32(0x7CC68C); /* 0x005ED09F: mov eax, dword ptr [0x7cc68c] */
    PUSH32(esp, ebx); /* 0x005ED0A4: push ebx */
    PUSH32(esp, ecx); /* 0x005ED0A5: push ecx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x005ED0A6: push dword ptr [ebp - 0xc] */
    RECOMP_ICALL(eax); /* 0x005ED0A9: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x005ED0AB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005ED0AE: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = ebx + eax; /* 0x005ED0B1: lea edx, [ebx + eax] */
    /* test ecx, ecx */ /* 0x005ED0B4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ED0C1; /* 0x005ED0B6: je 0x5ed0c1 */
L_005ED0B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005ED0B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx; /* 0x005ED0BA: mov edi, edx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x005ED0BC: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + (-0x8)); /* 0x005ED0BE: mov edi, dword ptr [ebp - 8] */
L_005ED0C1:
    ebx = MEM32(ebp + (-0x4)); /* 0x005ED0C1: mov ebx, dword ptr [ebp - 4] */
    /* test edi, edi */ /* 0x005ED0C4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ED120; /* 0x005ED0C6: je 0x5ed120 */
L_005ED0C8:
    ecx = edi; /* 0x005ED0C8: mov ecx, edi */
    edi = ebx; /* 0x005ED0CA: mov edi, ebx */
    goto L_005ED11C; /* 0x005ED0CC: jmp 0x5ed11c */
L_005ED0CE:
    edi = esi * 4; /* 0x005ED0CE: lea edi, [esi*4] */
    eax = edi; /* 0x005ED0D5: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x005ED0D7: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005ED0DA: push eax */
    eax = MEM32(0x7CC68C); /* 0x005ED0DB: mov eax, dword ptr [0x7cc68c] */
    PUSH32(esp, ecx); /* 0x005ED0E0: push ecx */
    PUSH32(esp, edx); /* 0x005ED0E1: push edx */
    RECOMP_ICALL(eax); /* 0x005ED0E2: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x005ED0E4: mov eax, dword ptr [ebx + 4] */
    ecx = edi + eax; /* 0x005ED0E7: lea ecx, [edi + eax] */
    edi = MEM32(ebp + (-0x8)); /* 0x005ED0EA: mov edi, dword ptr [ebp - 8] */
    edx = edi * 4; /* 0x005ED0ED: lea edx, [edi*4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x005ED0F4: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x005ED0F6: add edx, eax */
    _flag_k = FK_ADD;
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x005ED0F8: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    ebx = edx * 4; /* 0x005ED0FB: lea ebx, [edx*4] */
    PUSH32(esp, ebx); /* 0x005ED102: push ebx */
    PUSH32(esp, ecx); /* 0x005ED103: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x005ED104: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x005ED107: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x005ED10D: add esp, 0x18 */
    _flag_k = FK_ADD;
    edi = ebx + eax; /* 0x005ED110: lea edi, [ebx + eax] */
    ebx = MEM32(ebp + (-0x4)); /* 0x005ED113: mov ebx, dword ptr [ebp - 4] */
    /* test esi, esi */ /* 0x005ED116: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ED120; /* 0x005ED118: je 0x5ed120 */
L_005ED11A:
    ecx = esi; /* 0x005ED11A: mov ecx, esi */
L_005ED11C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005ED11C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x005ED11E: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_005ED120:
    edi = MEM32(ebp + (-0x14)); /* 0x005ED120: mov edi, dword ptr [ebp - 0x14] */
    eax = MEM32(edi + 0x4); /* 0x005ED123: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x005ED126: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ED134; /* 0x005ED128: je 0x5ed134 */
L_005ED12A:
    PUSH32(esp, eax); /* 0x005ED12A: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005ED12B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ED131: add esp, 4 */
    _flag_k = FK_ADD;
L_005ED134:
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + esi; /* 0x005ED134: add dword ptr [edi + 8], esi */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = ebx; /* 0x005ED137: mov dword ptr [edi + 4], ebx */
    edi = POP32_VAL(esp); /* 0x005ED13A: pop edi */
    esi = POP32_VAL(esp); /* 0x005ED13B: pop esi */
    ebx = POP32_VAL(esp); /* 0x005ED13C: pop ebx */
    esp = ebp; /* 0x005ED13D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ED13F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ED140: ret 4 */
L_005ED143:
    PUSH32(esp, 0x007F659Cu); /* 0x005ED143: push 0x7f659c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005ED148: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005ED14Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005ED150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED150u);

L_005ED150:
    PUSH32(esp, ebp); /* 0x005ED150: push ebp */
    ebp = esp; /* 0x005ED151: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005ED153: push -1 */
    PUSH32(esp, 0x007B1A86u); /* 0x005ED155: push 0x7b1a86 */
    eax = MEM32(FS_BASE + (0)); /* 0x005ED15A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005ED160: push eax */
    PUSH32(esp, ecx); /* 0x005ED161: push ecx */
    PUSH32(esp, esi); /* 0x005ED162: push esi */
    eax = MEM32(0x855000); /* 0x005ED163: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005ED168: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005ED16A: push eax */
    eax = ebp + (-0xC); /* 0x005ED16B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005ED16E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005ED174: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005ED176: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0; /* 0x005ED179: mov dword ptr [esi], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005ED17F: mov dword ptr [ebp - 4], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005ED186: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005ED18D: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x005ED194: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005ED19B: mov dword ptr [esi + 0x10], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x005ED1A2: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, 8); /* 0x005ED1A9: push 8 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005ED1AB: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ED1B1: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x005ED1B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005ED1BE; /* 0x005ED1B6: jne 0x5ed1be */
L_005ED1B8:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005ED1B8: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005ED1BE:
    MEM32(esi) = eax; /* 0x005ED1BE: mov dword ptr [esi], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005ED1C0: mov byte ptr [ebp - 4], 2 */
    MEM32(eax) = 0; /* 0x005ED1C4: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x005ED1CA: mov dword ptr [eax + 4], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005ED1D1: mov byte ptr [ebp - 4], 1 */
    eax = MEM32(esi); /* 0x005ED1D5: mov eax, dword ptr [esi] */
    MEM32(eax) = esi; /* 0x005ED1D7: mov dword ptr [eax], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005ED1D9: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005ED1E0: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005ED1E2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005ED1E5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005ED1EC: pop ecx */
    esi = POP32_VAL(esp); /* 0x005ED1ED: pop esi */
    esp = ebp; /* 0x005ED1EE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ED1F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ED1F1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005ED200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED200u);

L_005ED200:
    PUSH32(esp, ebp); /* 0x005ED200: push ebp */
    ebp = esp; /* 0x005ED201: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005ED203: push esi */
    esi = MEM32(ecx + 0x8); /* 0x005ED204: mov esi, dword ptr [ecx + 8] */
    eax = 0x92492493u; /* 0x005ED207: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x005ED20C: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005ED20E: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0x04924924u; /* 0x005ED210: mov eax, 0x4924924 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005ED215: add edx, esi */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005ED217: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    esi = edx; /* 0x005ED21A: mov esi, edx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x005ED21C: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x005ED21C: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x005ED21F: add esi, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x005ED221: mov ecx, esi */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x005ED223: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x005ED223: shr ecx, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005ED225: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x005ED227: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005ED23B; /* 0x005ED229: jae 0x5ed23b */
L_005ED22B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005ED22B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x005ED22D: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = MEM32(ebp + 0x8); } /* 0x005ED230: cmovb esi, dword ptr [ebp + 8] */
    eax = esi; /* 0x005ED234: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005ED236: pop esi */
    ebp = POP32_VAL(esp); /* 0x005ED237: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ED238: ret 4 */
L_005ED23B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x005ED23B: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x005ED23D: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = MEM32(ebp + 0x8); } /* 0x005ED240: cmovb esi, dword ptr [ebp + 8] */
    eax = esi; /* 0x005ED244: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005ED246: pop esi */
    ebp = POP32_VAL(esp); /* 0x005ED247: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ED248: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005ED250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED250u);

L_005ED250:
    PUSH32(esp, ebp); /* 0x005ED250: push ebp */
    ebp = esp; /* 0x005ED251: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005ED253: push -1 */
    PUSH32(esp, 0x007B1AB0u); /* 0x005ED255: push 0x7b1ab0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005ED25A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005ED260: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005ED261: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005ED264: push ebx */
    PUSH32(esp, esi); /* 0x005ED265: push esi */
    PUSH32(esp, edi); /* 0x005ED266: push edi */
    eax = MEM32(0x855000); /* 0x005ED267: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005ED26C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005ED26E: push eax */
    eax = ebp + (-0xC); /* 0x005ED26F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005ED272: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005ED278: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x005ED27B: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005ED27D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x005ED27F: mov dword ptr [ebp - 0x14], esi */
    edi = MEM32(ebp + 0x8); /* 0x005ED282: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x005ED285: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ED2B6; /* 0x005ED287: je 0x5ed2b6 */
L_005ED289:
    /* cmp edi, 0x04924924u */ /* 0x005ED289: cmp edi, 0x4924924 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x04924924u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005ED2B0; /* 0x005ED28F: ja 0x5ed2b0 */
L_005ED291:
    eax = edi * 8; /* 0x005ED291: lea eax, [edi*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x005ED298: sub eax, edi */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x005ED29A: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x005ED29A: shl eax, 3 */
    PUSH32(esp, eax); /* 0x005ED29D: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005ED29E: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ED2A4: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005ED2A7: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x005ED2A9: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x005ED2AC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005ED2B6; /* 0x005ED2AE: jne 0x5ed2b6 */
L_005ED2B0:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005ED2B0: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005ED2B6:
    MEM32(ebp + (-0x4)) = 0; /* 0x005ED2B6: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005ED2BD: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005ED2C0: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005ED2C3: push esi */
    edx = MEM32(ebx + 0x4); /* 0x005ED2C4: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x005ED2C7: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_005EFAD0); /* 0x005ED2C9: call 0x5efad0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005ED2CE: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005ED2D1: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebx + 0x4); /* 0x005ED2D8: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x005ED2DB: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005ED2DD: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005ED2E2: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005ED2E4: add edx, ecx */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005ED2E6: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ecx = edx; /* 0x005ED2E9: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005ED2EB: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005ED2EB: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005ED2EE: add ecx, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ecx; /* 0x005ED2F0: mov dword ptr [ebp + 8], ecx */
    eax = MEM32(ebx); /* 0x005ED2F3: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x005ED2F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ED315; /* 0x005ED2F7: je 0x5ed315 */
L_005ED2F9:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005ED2F9: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005ED2FC: push ecx */
    edx = MEM32(ebx + 0x4); /* 0x005ED2FD: mov edx, dword ptr [ebx + 4] */
    ecx = eax; /* 0x005ED300: mov ecx, eax */
    RECOMP_CALL(sub_0051C750); /* 0x005ED302: call 0x51c750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx)); /* 0x005ED307: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005ED309: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005ED30F: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x005ED312: mov ecx, dword ptr [ebp + 8] */
L_005ED315:
    eax = edi * 8; /* 0x005ED315: lea eax, [edi*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x005ED31C: sub eax, edi */
    _flag_k = FK_CMP;
    eax = esi + eax * 8; /* 0x005ED31E: lea eax, [esi + eax*8] */
    MEM32(ebx + 0x8) = eax; /* 0x005ED321: mov dword ptr [ebx + 8], eax */
    eax = ecx * 8; /* 0x005ED324: lea eax, [ecx*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005ED32B: sub eax, ecx */
    _flag_k = FK_CMP;
    eax = esi + eax * 8; /* 0x005ED32D: lea eax, [esi + eax*8] */
    MEM32(ebx + 0x4) = eax; /* 0x005ED330: mov dword ptr [ebx + 4], eax */
    MEM32(ebx) = esi; /* 0x005ED333: mov dword ptr [ebx], esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005ED335: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005ED338: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005ED33F: pop ecx */
    edi = POP32_VAL(esp); /* 0x005ED340: pop edi */
    esi = POP32_VAL(esp); /* 0x005ED341: pop esi */
    ebx = POP32_VAL(esp); /* 0x005ED342: pop ebx */
    esp = ebp; /* 0x005ED343: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ED345: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ED346: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005ED349(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED349u);

L_005ED349:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005ED349: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005ED34C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ED352: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005ED355: push 0 */
    PUSH32(esp, 0); /* 0x005ED357: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005ED359: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005ED35Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005ED360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED360u);

L_005ED360:
    PUSH32(esp, ebp); /* 0x005ED360: push ebp */
    ebp = esp; /* 0x005ED361: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005ED363: push -1 */
    PUSH32(esp, 0x007B1ADBu); /* 0x005ED365: push 0x7b1adb */
    eax = MEM32(FS_BASE + (0)); /* 0x005ED36A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005ED370: push eax */
    PUSH32(esp, ecx); /* 0x005ED371: push ecx */
    PUSH32(esp, ebx); /* 0x005ED372: push ebx */
    PUSH32(esp, esi); /* 0x005ED373: push esi */
    PUSH32(esp, edi); /* 0x005ED374: push edi */
    eax = MEM32(0x855000); /* 0x005ED375: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005ED37A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005ED37C: push eax */
    eax = ebp + (-0xC); /* 0x005ED37D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005ED380: mov dword ptr fs:[0], eax */
    eax = ecx; /* 0x005ED386: mov eax, ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x005ED388: mov dword ptr [ebp - 0x10], eax */
    edi = MEM32(ebp + 0x8); /* 0x005ED38B: mov edi, dword ptr [ebp + 8] */
    esi = edi; /* 0x005ED38E: mov esi, edi */
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005ED390: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ED3D2; /* 0x005ED394: jne 0x5ed3d2 */
L_005ED396:
    ebx = MEM32(0x7CC694); /* 0x005ED396: mov ebx, dword ptr [0x7cc694] */
    esp = esp; /* 0x005ED39C: lea esp, [esp] */
L_005ED3A0:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x005ED3A0: push dword ptr [esi + 8] */
    ecx = eax; /* 0x005ED3A3: mov ecx, eax */
    RECOMP_CALL(sub_005ED360); /* 0x005ED3A5: call 0x5ed360 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi); /* 0x005ED3AA: mov esi, dword ptr [esi] */
    ecx = edi + 0x10; /* 0x005ED3AC: lea ecx, [edi + 0x10] */
    MEM32(ebp + 0x8) = ecx; /* 0x005ED3AF: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005ED3B2: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x005ED3B9: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005E3440); /* 0x005ED3BC: call 0x5e3440 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005ED3C1: push edi */
    RECOMP_ICALL(ebx); /* 0x005ED3C2: call ebx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x005ED3C4: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ED3C7: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005ED3CA: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = esi; /* 0x005ED3CE: mov edi, esi */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005ED3A0; /* 0x005ED3D0: je 0x5ed3a0 */
L_005ED3D2:
    ecx = MEM32(ebp + (-0xC)); /* 0x005ED3D2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005ED3D5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005ED3DC: pop ecx */
    edi = POP32_VAL(esp); /* 0x005ED3DD: pop edi */
    esi = POP32_VAL(esp); /* 0x005ED3DE: pop esi */
    ebx = POP32_VAL(esp); /* 0x005ED3DF: pop ebx */
    esp = ebp; /* 0x005ED3E0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ED3E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ED3E3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005ED3F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED3F0u);

L_005ED3F0:
    PUSH32(esp, ebp); /* 0x005ED3F0: push ebp */
    ebp = esp; /* 0x005ED3F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005ED3F3: push -1 */
    PUSH32(esp, 0x007B1B00u); /* 0x005ED3F5: push 0x7b1b00 */
    eax = MEM32(FS_BASE + (0)); /* 0x005ED3FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005ED400: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005ED401: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005ED404: push ebx */
    PUSH32(esp, esi); /* 0x005ED405: push esi */
    PUSH32(esp, edi); /* 0x005ED406: push edi */
    eax = MEM32(0x855000); /* 0x005ED407: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005ED40C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005ED40E: push eax */
    eax = ebp + (-0xC); /* 0x005ED40F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005ED412: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005ED418: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x40u); /* 0x005ED41B: push 0x40 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005ED41D: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ED423: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005ED426: mov esi, eax */
    MEM32(ebp + (-0x18)) = esi; /* 0x005ED428: mov dword ptr [ebp - 0x18], esi */
    /* test esi, esi */ /* 0x005ED42B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005ED435; /* 0x005ED42D: jne 0x5ed435 */
L_005ED42F:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005ED42F: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005ED435:
    MEM32(ebp + (-0x14)) = esi; /* 0x005ED435: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005ED438: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x14); /* 0x005ED43F: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005ED442: push eax */
    PUSH32(esp, esi); /* 0x005ED443: push esi */
    RECOMP_CALL(sub_0040BAA0); /* 0x005ED444: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x005ED449: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005ED44C: push eax */
    eax = esi + 0x4; /* 0x005ED44D: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x005ED450: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005ED451: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x005ED456: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005ED459: push eax */
    eax = esi + 0x8; /* 0x005ED45A: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x005ED45D: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005ED45E: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005ED463: mov dword ptr [ebp - 4], 0xffffffff */
    MEM16(esi + 0xC) = (uint16_t)(0x101u); /* 0x005ED46A: mov word ptr [esi + 0xc], 0x101 */
    eax = esi; /* 0x005ED470: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005ED472: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005ED475: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005ED47C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005ED47D: pop edi */
    esi = POP32_VAL(esp); /* 0x005ED47E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005ED47F: pop ebx */
    esp = ebp; /* 0x005ED480: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ED482: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005ED483: ret  */
    RECOMP_REGS_OUT();
}

void sub_005ED484(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED484u);

L_005ED484:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x005ED484: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005ED487: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ED48D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005ED490: push 0 */
    PUSH32(esp, 0); /* 0x005ED492: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005ED494: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005ED499u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005ED4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED4A0u);

L_005ED4A0:
    PUSH32(esp, ebp); /* 0x005ED4A0: push ebp */
    ebp = esp; /* 0x005ED4A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005ED4A3: push -1 */
    PUSH32(esp, 0x007B1B20u); /* 0x005ED4A5: push 0x7b1b20 */
    eax = MEM32(FS_BASE + (0)); /* 0x005ED4AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005ED4B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005ED4B1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005ED4B4: push ebx */
    PUSH32(esp, esi); /* 0x005ED4B5: push esi */
    PUSH32(esp, edi); /* 0x005ED4B6: push edi */
    eax = MEM32(0x855000); /* 0x005ED4B7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005ED4BC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005ED4BE: push eax */
    eax = ebp + (-0xC); /* 0x005ED4BF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005ED4C2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005ED4C8: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x30u); /* 0x005ED4CB: push 0x30 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005ED4CD: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ED4D3: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005ED4D6: mov esi, eax */
    MEM32(ebp + (-0x18)) = esi; /* 0x005ED4D8: mov dword ptr [ebp - 0x18], esi */
    /* test esi, esi */ /* 0x005ED4DB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005ED4E5; /* 0x005ED4DD: jne 0x5ed4e5 */
L_005ED4DF:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005ED4DF: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005ED4E5:
    MEM32(ebp + (-0x14)) = esi; /* 0x005ED4E5: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005ED4E8: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x14); /* 0x005ED4EF: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005ED4F2: push eax */
    PUSH32(esp, esi); /* 0x005ED4F3: push esi */
    RECOMP_CALL(sub_0040BAA0); /* 0x005ED4F4: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x005ED4F9: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005ED4FC: push eax */
    eax = esi + 0x4; /* 0x005ED4FD: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x005ED500: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005ED501: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x005ED506: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005ED509: push eax */
    eax = esi + 0x8; /* 0x005ED50A: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x005ED50D: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005ED50E: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005ED513: mov dword ptr [ebp - 4], 0xffffffff */
    MEM16(esi + 0xC) = (uint16_t)(0x101u); /* 0x005ED51A: mov word ptr [esi + 0xc], 0x101 */
    eax = esi; /* 0x005ED520: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005ED522: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005ED525: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005ED52C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005ED52D: pop edi */
    esi = POP32_VAL(esp); /* 0x005ED52E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005ED52F: pop ebx */
    esp = ebp; /* 0x005ED530: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ED532: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005ED533: ret  */
    RECOMP_REGS_OUT();
}

void sub_005ED534(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED534u);

L_005ED534:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x005ED534: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005ED537: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ED53D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005ED540: push 0 */
    PUSH32(esp, 0); /* 0x005ED542: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005ED544: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005ED549u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005ED550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED550u);

L_005ED550:
    PUSH32(esp, ebp); /* 0x005ED550: push ebp */
    ebp = esp; /* 0x005ED551: mov ebp, esp */
    eax = ecx; /* 0x005ED553: mov eax, ecx */
    ecx = MEM32(eax + 0x14); /* 0x005ED555: mov ecx, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0xC); /* 0x005ED558: add ecx, dword ptr [eax + 0xc] */
    _flag_k = FK_ADD;
    eax = MEM32(eax + 0x10); /* 0x005ED55B: mov eax, dword ptr [eax + 0x10] */
    ebp = POP32_VAL(esp); /* 0x005ED55E: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_005ED570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED570u);

L_005ED570:
    PUSH32(esp, ebp); /* 0x005ED570: push ebp */
    ebp = esp; /* 0x005ED571: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005ED573: push -1 */
    PUSH32(esp, 0x007824A9u); /* 0x005ED575: push 0x7824a9 */
    eax = MEM32(FS_BASE + (0)); /* 0x005ED57A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005ED580: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005ED581: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005ED584: push esi */
    eax = MEM32(0x855000); /* 0x005ED585: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005ED58A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005ED58C: push eax */
    eax = ebp + (-0xC); /* 0x005ED58D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005ED590: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005ED596: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x005ED598: mov dword ptr [ebp - 0x14], esi */
    ecx = MEM32(ebp + 0x8); /* 0x005ED59B: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x5Bu); /* 0x005ED59E: push 0x5b */
    PUSH32(esp, 1); /* 0x005ED5A0: push 1 */
    PUSH32(esp, 0); /* 0x005ED5A2: push 0 */
    MEM32(ebp + (-0x10)) = 0; /* 0x005ED5A4: mov dword ptr [ebp - 0x10], 0 */
    RECOMP_CALL(sub_0055A360); /* 0x005ED5AB: call 0x55a360 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = 0xFu; /* 0x005ED5B0: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x005ED5B7: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x005ED5B9: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x005ED5C0: push eax */
    MEM8(esi) = (uint8_t)(0); /* 0x005ED5C1: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x005ED5C4: call 0x419890 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005ED5C9: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x005ED5D0: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x005ED5D7: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005ED5D9: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005ED5DC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005ED5E3: pop ecx */
    esi = POP32_VAL(esp); /* 0x005ED5E4: pop esi */
    esp = ebp; /* 0x005ED5E5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ED5E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005ED5E8: ret  */
    RECOMP_REGS_OUT();
}

void sub_005ED5F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED5F0u);

L_005ED5F0:
    PUSH32(esp, ebp); /* 0x005ED5F0: push ebp */
    ebp = esp; /* 0x005ED5F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005ED5F3: push -1 */
    PUSH32(esp, 0x007B1B40u); /* 0x005ED5F5: push 0x7b1b40 */
    eax = MEM32(FS_BASE + (0)); /* 0x005ED5FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005ED600: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005ED601: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005ED604: push ebx */
    PUSH32(esp, esi); /* 0x005ED605: push esi */
    PUSH32(esp, edi); /* 0x005ED606: push edi */
    eax = MEM32(0x855000); /* 0x005ED607: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005ED60C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005ED60E: push eax */
    eax = ebp + (-0xC); /* 0x005ED60F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005ED612: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005ED618: mov dword ptr [ebp - 0x10], esp */
    esi = ecx; /* 0x005ED61B: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x005ED61D: mov dword ptr [ebp - 0x14], esi */
    MEM32(esi) = 0; /* 0x005ED620: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005ED626: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005ED62D: mov dword ptr [esi + 8], 0 */
    edi = MEM32(ebp + 0x8); /* 0x005ED634: mov edi, dword ptr [ebp + 8] */
    edx = MEM32(edi + 0x4); /* 0x005ED637: mov edx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi); /* 0x005ED63A: sub edx, dword ptr [edi] */
    _flag_k = FK_CMP;
    eax = 0x38E38E39u; /* 0x005ED63C: mov eax, 0x38e38e39 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005ED641: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005ED643: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005ED646: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005ED648: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005ED648: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005ED64B: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005ED64D: push eax */
    RECOMP_CALL(sub_005ED6B0); /* 0x005ED64E: call 0x5ed6b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005ED653: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ED67B; /* 0x005ED655: je 0x5ed67b */
L_005ED657:
    MEM32(ebp + (-0x4)) = 0; /* 0x005ED657: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x005ED65E: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005ED661: push ecx */
    PUSH32(esp, MEM32(esi)); /* 0x005ED662: push dword ptr [esi] */
    edx = MEM32(edi + 0x4); /* 0x005ED664: mov edx, dword ptr [edi + 4] */
    ecx = MEM32(edi); /* 0x005ED667: mov ecx, dword ptr [edi] */
    RECOMP_CALL(sub_005EF860); /* 0x005ED669: call 0x5ef860 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005ED66E: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x005ED671: mov dword ptr [esi + 4], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005ED674: mov dword ptr [ebp - 4], 0xffffffff */
L_005ED67B:
    eax = esi; /* 0x005ED67B: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005ED67D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005ED680: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005ED687: pop ecx */
    edi = POP32_VAL(esp); /* 0x005ED688: pop edi */
    esi = POP32_VAL(esp); /* 0x005ED689: pop esi */
    ebx = POP32_VAL(esp); /* 0x005ED68A: pop ebx */
    esp = ebp; /* 0x005ED68B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ED68D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ED68E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005ED691(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED691u);

L_005ED691:
    ecx = MEM32(ebp + (-0x14)); /* 0x005ED691: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_005EB9B0); /* 0x005ED694: call 0x5eb9b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005ED699: push 0 */
    PUSH32(esp, 0); /* 0x005ED69B: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005ED69D: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005ED6A2u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005ED6B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED6B0u);

L_005ED6B0:
    PUSH32(esp, ebp); /* 0x005ED6B0: push ebp */
    ebp = esp; /* 0x005ED6B1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005ED6B3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005ED6B6: push esi */
    esi = ecx; /* 0x005ED6B7: mov esi, ecx */
    MEM32(esi) = 0; /* 0x005ED6B9: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005ED6BF: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005ED6C6: mov dword ptr [esi + 8], 0 */
    /* test eax, eax */ /* 0x005ED6CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005ED6D8; /* 0x005ED6CF: jne 0x5ed6d8 */
L_005ED6D1:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005ED6D1: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x005ED6D3: pop esi */
    ebp = POP32_VAL(esp); /* 0x005ED6D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ED6D5: ret 4 */
L_005ED6D8:
    /* cmp eax, 0x038E38E3u */ /* 0x005ED6D8: cmp eax, 0x38e38e3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x038E38E3u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005ED6EA; /* 0x005ED6DD: jbe 0x5ed6ea */
L_005ED6DF:
    PUSH32(esp, 0x007DFAB0u); /* 0x005ED6DF: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005ED6E4: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005ED6EA:
    PUSH32(esp, edi); /* 0x005ED6EA: push edi */
    edi = eax + eax * 8; /* 0x005ED6EB: lea edi, [eax + eax*8] */
    if (3u) _cf = (((edi) >> 29) & 1u); /* 0x005ED6EE: shl edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 3u; /* 0x005ED6EE: shl edi, 3 */
    PUSH32(esp, edi); /* 0x005ED6F1: push edi */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005ED6F2: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ED6F8: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x005ED6FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ED711; /* 0x005ED6FD: je 0x5ed711 */
L_005ED6FF:
    MEM32(esi) = eax; /* 0x005ED6FF: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x005ED701: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005ED704: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = eax; /* 0x005ED706: mov dword ptr [esi + 8], eax */
    SET_LO8(eax, 1); /* 0x005ED709: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x005ED70B: pop edi */
    esi = POP32_VAL(esp); /* 0x005ED70C: pop esi */
    ebp = POP32_VAL(esp); /* 0x005ED70D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ED70E: ret 4 */
L_005ED711:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005ED711: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005ED717u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005ED720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED720u);

L_005ED720:
    PUSH32(esp, ebp); /* 0x005ED720: push ebp */
    ebp = esp; /* 0x005ED721: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005ED723: push -1 */
    PUSH32(esp, 0x007B1B83u); /* 0x005ED725: push 0x7b1b83 */
    eax = MEM32(FS_BASE + (0)); /* 0x005ED72A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005ED730: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005ED731: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005ED734: push ebx */
    PUSH32(esp, esi); /* 0x005ED735: push esi */
    PUSH32(esp, edi); /* 0x005ED736: push edi */
    eax = MEM32(0x855000); /* 0x005ED737: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005ED73C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005ED73E: push eax */
    eax = ebp + (-0xC); /* 0x005ED73F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005ED742: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005ED748: mov dword ptr [ebp - 0x10], esp */
    RECOMP_CALL(sub_005EE610); /* 0x005ED74B: call 0x5ee610 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x005ED750: mov ebx, eax */
    MEM32(ebp + (-0x14)) = ebx; /* 0x005ED752: mov dword ptr [ebp - 0x14], ebx */
    MEM16(ebx + 0xC) = (uint16_t)(0); /* 0x005ED755: mov word ptr [ebx + 0xc], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005ED75B: mov dword ptr [ebp - 4], 0 */
    edi = ebx + 0x10; /* 0x005ED762: lea edi, [ebx + 0x10] */
    MEM32(ebp + (-0x18)) = edi; /* 0x005ED765: mov dword ptr [ebp - 0x18], edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005ED768: mov byte ptr [ebp - 4], 1 */
    /* test edi, edi */ /* 0x005ED76C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ED7AA; /* 0x005ED76E: je 0x5ed7aa */
L_005ED770:
    ecx = MEM32(ebp + 0x8); /* 0x005ED770: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x005ED773: mov eax, dword ptr [ecx] */
    MEM32(edi) = eax; /* 0x005ED775: mov dword ptr [edi], eax */
    eax = MEM32(ecx + 0x4); /* 0x005ED777: mov eax, dword ptr [ecx + 4] */
    MEM32(edi + 0x4) = eax; /* 0x005ED77A: mov dword ptr [edi + 4], eax */
    esi = ecx + 0x8; /* 0x005ED77D: lea esi, [ecx + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x005ED780: add edi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edi; /* 0x005ED783: mov dword ptr [ebp + 8], edi */
    PUSH32(esp, esi); /* 0x005ED786: push esi */
    ecx = edi; /* 0x005ED787: mov ecx, edi */
    RECOMP_CALL(sub_005ED5F0); /* 0x005ED789: call 0x5ed5f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005ED78E: mov byte ptr [ebp - 4], 2 */
    eax = esi + 0xC; /* 0x005ED792: lea eax, [esi + 0xc] */
    PUSH32(esp, eax); /* 0x005ED795: push eax */
    ecx = edi + 0xC; /* 0x005ED796: lea ecx, [edi + 0xc] */
    RECOMP_CALL(sub_005ED5F0); /* 0x005ED799: call 0x5ed5f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005ED79E: mov byte ptr [ebp - 4], 3 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005ED7A2: mov byte ptr [ebp - 4], 4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005ED7A6: mov byte ptr [ebp - 4], 1 */
L_005ED7AA:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005ED7AA: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005ED7AE: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebx; /* 0x005ED7B5: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005ED7B7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005ED7BA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005ED7C1: pop ecx */
    edi = POP32_VAL(esp); /* 0x005ED7C2: pop edi */
    esi = POP32_VAL(esp); /* 0x005ED7C3: pop esi */
    ebx = POP32_VAL(esp); /* 0x005ED7C4: pop ebx */
    esp = ebp; /* 0x005ED7C5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ED7C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005ED7C8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005ED7CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED7CBu);

L_005ED7CB:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005ED7CB: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005ED7CE: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005ED7D4: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005ED7D7: push 0 */
    PUSH32(esp, 0); /* 0x005ED7D9: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005ED7DB: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005ED7E0u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005ED7F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED7F0u);

L_005ED7F0:
    PUSH32(esp, ebp); /* 0x005ED7F0: push ebp */
    ebp = esp; /* 0x005ED7F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005ED7F3: push -1 */
    PUSH32(esp, 0x007B1BA0u); /* 0x005ED7F5: push 0x7b1ba0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005ED7FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005ED800: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005ED801: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005ED804: push ebx */
    PUSH32(esp, esi); /* 0x005ED805: push esi */
    PUSH32(esp, edi); /* 0x005ED806: push edi */
    eax = MEM32(0x855000); /* 0x005ED807: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005ED80C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005ED80E: push eax */
    eax = ebp + (-0xC); /* 0x005ED80F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005ED812: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005ED818: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x18)) = ecx; /* 0x005ED81B: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005ED81E: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ecx); /* 0x005ED825: mov edi, dword ptr [ecx] */
    esi = MEM32(edi + 0x4); /* 0x005ED827: mov esi, dword ptr [edi + 4] */
    SET_LO8(eax, 1); /* 0x005ED82A: mov al, 1 */
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x005ED82C: mov byte ptr [ebp - 0x14], al */
    ebx = MEM32(ebp + 0x10); /* 0x005ED82F: mov ebx, dword ptr [ebp + 0x10] */
L_005ED832:
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005ED832: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ED868; /* 0x005ED836: jne 0x5ed868 */
L_005ED838:
    edi = esi; /* 0x005ED838: mov edi, esi */
    eax = esi + 0x10; /* 0x005ED83A: lea eax, [esi + 0x10] */
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x005ED83D: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005ED851; /* 0x005ED841: je 0x5ed851 */
L_005ED843:
    PUSH32(esp, ebx); /* 0x005ED843: push ebx */
    PUSH32(esp, eax); /* 0x005ED844: push eax */
    RECOMP_CALL(sub_00546F00); /* 0x005ED845: call 0x546f00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005ED84A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x005ED84C: sete al */
    goto L_005ED858; /* 0x005ED84F: jmp 0x5ed858 */
L_005ED851:
    PUSH32(esp, eax); /* 0x005ED851: push eax */
    PUSH32(esp, ebx); /* 0x005ED852: push ebx */
    RECOMP_CALL(sub_00546F00); /* 0x005ED853: call 0x546f00 */
    RECOMP_FLAGS_IN();
L_005ED858:
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x005ED858: mov byte ptr [ebp - 0x14], al */
    /* test LO8(eax), LO8(eax) */ /* 0x005ED85B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ED863; /* 0x005ED85D: je 0x5ed863 */
L_005ED85F:
    esi = MEM32(esi); /* 0x005ED85F: mov esi, dword ptr [esi] */
    RECOMP_BACKEDGE();
    goto L_005ED832; /* 0x005ED861: jmp 0x5ed832 */
L_005ED863:
    esi = MEM32(esi + 0x8); /* 0x005ED863: mov esi, dword ptr [esi + 8] */
    RECOMP_BACKEDGE();
    goto L_005ED832; /* 0x005ED866: jmp 0x5ed832 */
L_005ED868:
    esi = edi; /* 0x005ED868: mov esi, edi */
    MEM32(ebp + 0xC) = esi; /* 0x005ED86A: mov dword ptr [ebp + 0xc], esi */
    /* test LO8(eax), LO8(eax) */ /* 0x005ED86D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ED8B4; /* 0x005ED86F: je 0x5ed8b4 */
L_005ED871:
    ecx = MEM32(ebp + (-0x18)); /* 0x005ED871: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ecx); /* 0x005ED874: mov eax, dword ptr [ecx] */
    /* cmp edi, MEM32(eax) */ /* 0x005ED876: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005ED8A9; /* 0x005ED878: jne 0x5ed8a9 */
L_005ED87A:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005ED87A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005ED87D: push ecx */
    PUSH32(esp, edi); /* 0x005ED87E: push edi */
    PUSH32(esp, 1); /* 0x005ED87F: push 1 */
L_005ED881:
    eax = ebp + 0xC; /* 0x005ED881: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x005ED884: push eax */
    RECOMP_CALL(sub_005EE890); /* 0x005ED885: call 0x5ee890 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x005ED88A: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x005ED88C: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005ED88F: mov dword ptr [eax], ecx */
    MEM8(eax + 0x4) = (uint8_t)(1); /* 0x005ED891: mov byte ptr [eax + 4], 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005ED895: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005ED898: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005ED89F: pop ecx */
    edi = POP32_VAL(esp); /* 0x005ED8A0: pop edi */
    esi = POP32_VAL(esp); /* 0x005ED8A1: pop esi */
    ebx = POP32_VAL(esp); /* 0x005ED8A2: pop ebx */
    esp = ebp; /* 0x005ED8A3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ED8A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005ED8A6: ret 0x10 */
L_005ED8A9:
    ecx = ebp + 0xC; /* 0x005ED8A9: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_0041B310); /* 0x005ED8AC: call 0x41b310 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x005ED8B1: mov esi, dword ptr [ebp + 0xc] */
L_005ED8B4:
    PUSH32(esp, ebx); /* 0x005ED8B4: push ebx */
    eax = esi + 0x10; /* 0x005ED8B5: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005ED8B8: push eax */
    RECOMP_CALL(sub_00546F00); /* 0x005ED8B9: call 0x546f00 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005ED8BE: push dword ptr [ebp + 0x14] */
    /* test LO8(eax), LO8(eax) */ /* 0x005ED8C1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005ED8CF; /* 0x005ED8C3: je 0x5ed8cf */
L_005ED8C5:
    PUSH32(esp, ecx); /* 0x005ED8C5: push ecx */
    PUSH32(esp, edi); /* 0x005ED8C6: push edi */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005ED8C7: push dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + (-0x18)); /* 0x005ED8CA: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_BACKEDGE();
    goto L_005ED881; /* 0x005ED8CD: jmp 0x5ed881 */
L_005ED8CF:
    RECOMP_CALL(sub_005EE5B0); /* 0x005ED8CF: call 0x5ee5b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005ED8D4: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x005ED8D7: mov dword ptr [eax], esi */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x005ED8D9: mov byte ptr [eax + 4], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005ED8DD: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005ED8E0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005ED8E7: pop ecx */
    edi = POP32_VAL(esp); /* 0x005ED8E8: pop edi */
    esi = POP32_VAL(esp); /* 0x005ED8E9: pop esi */
    ebx = POP32_VAL(esp); /* 0x005ED8EA: pop ebx */
    esp = ebp; /* 0x005ED8EB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005ED8ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005ED8EE: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005ED8F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED8F1u);

L_005ED8F1:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005ED8F1: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_005EE5B0); /* 0x005ED8F4: call 0x5ee5b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005ED8F9: push 0 */
    PUSH32(esp, 0); /* 0x005ED8FB: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005ED8FD: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005ED902u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005ED910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005ED910u);

L_005ED910:
    PUSH32(esp, ebp); /* 0x005ED910: push ebp */
    ebp = esp; /* 0x005ED911: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005ED913: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = 0x92492493u; /* 0x005ED916: mov eax, 0x92492493 */
    PUSH32(esp, ebx); /* 0x005ED91B: push ebx */
    PUSH32(esp, esi); /* 0x005ED91C: push esi */
    PUSH32(esp, edi); /* 0x005ED91D: push edi */
    edi = edx; /* 0x005ED91E: mov edi, edx */
    ebx = ecx; /* 0x005ED920: mov ebx, ecx */
    esi = edi; /* 0x005ED922: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x005ED924: sub esi, ebx */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x005ED926: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005ED928: add edx, esi */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005ED92A: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005ED92D: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005ED92F: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005ED92F: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005ED932: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 0x20u */ /* 0x005ED934: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_005ED9E8; /* 0x005ED937: jle 0x5ed9e8 */
L_005ED93D:
    esi = MEM32(ebp + 0x8); /* 0x005ED93D: mov esi, dword ptr [ebp + 8] */
L_005ED940:
    /* test esi, esi */ /* 0x005ED940: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_005EDA04; /* 0x005ED942: jle 0x5eda04 */
L_005ED948:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005ED948: push dword ptr [ebp + 0xc] */
    edx = ebx; /* 0x005ED94B: mov edx, ebx */
    ecx = ebp + (-0x8); /* 0x005ED94D: lea ecx, [ebp - 8] */
    PUSH32(esp, edi); /* 0x005ED950: push edi */
    RECOMP_CALL(sub_005EEA70); /* 0x005ED951: call 0x5eea70 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x005ED956: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005ED958: add esp, 8 */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x005ED95B: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005ED95C: sub eax, edx */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x005ED95E: mov ecx, eax */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x005ED960: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = ecx; /* 0x005ED962: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x005ED964: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005ED965: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x005ED967: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x005ED969: add ecx, eax */
    _flag_k = FK_ADD;
    eax = 0x92492493u; /* 0x005ED96B: mov eax, 0x92492493 */
    MEM32(ebp + 0x8) = ecx; /* 0x005ED970: mov dword ptr [ebp + 8], ecx */
    ecx = edi; /* 0x005ED973: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x005ED975: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005ED978: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005ED97A: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005ED97D: add edx, ecx */
    _flag_k = FK_ADD;
    eax = 0x92492493u; /* 0x005ED97F: mov eax, 0x92492493 */
    ecx = MEM32(ebp + (-0x8)); /* 0x005ED984: mov ecx, dword ptr [ebp - 8] */
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005ED987: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x005ED98A: sub ecx, ebx */
    _flag_k = FK_CMP;
    esi = edx; /* 0x005ED98C: mov esi, edx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x005ED98E: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x005ED98E: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x005ED991: add esi, edx */
    _flag_k = FK_ADD;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005ED993: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005ED995: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005ED997: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005ED99A: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005ED99C: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005ED99C: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005ED99F: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x005ED9A1: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x005ED9A3: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005ED9A6: push esi */
    if (CMP_GE(_flag_a, _flag_b)) goto L_005ED9B8; /* 0x005ED9A7: jge 0x5ed9b8 */
L_005ED9A9:
    edx = MEM32(ebp + (-0x8)); /* 0x005ED9A9: mov edx, dword ptr [ebp - 8] */
    ecx = ebx; /* 0x005ED9AC: mov ecx, ebx */
    RECOMP_CALL(sub_005ED910); /* 0x005ED9AE: call 0x5ed910 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x005ED9B3: mov ebx, dword ptr [ebp - 4] */
    goto L_005ED9C5; /* 0x005ED9B6: jmp 0x5ed9c5 */
L_005ED9B8:
    ecx = MEM32(ebp + (-0x4)); /* 0x005ED9B8: mov ecx, dword ptr [ebp - 4] */
    edx = edi; /* 0x005ED9BB: mov edx, edi */
    RECOMP_CALL(sub_005ED910); /* 0x005ED9BD: call 0x5ed910 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x8)); /* 0x005ED9C2: mov edi, dword ptr [ebp - 8] */
L_005ED9C5:
    ecx = edi; /* 0x005ED9C5: mov ecx, edi */
    eax = 0x92492493u; /* 0x005ED9C7: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x005ED9CC: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005ED9CE: add esp, 8 */
    _flag_k = FK_ADD;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005ED9D1: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005ED9D3: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005ED9D5: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005ED9D8: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005ED9DA: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005ED9DA: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005ED9DD: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 0x20u */ /* 0x005ED9DF: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_005ED940; /* 0x005ED9E2: jg 0x5ed940 */
L_005ED9E8:
    /* cmp eax, 1 */ /* 0x005ED9E8: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_005ED9FD; /* 0x005ED9EB: jle 0x5ed9fd */
L_005ED9ED:
    PUSH32(esp, ecx); /* 0x005ED9ED: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005ED9EE: push dword ptr [ebp + 0xc] */
    edx = edi; /* 0x005ED9F1: mov edx, edi */
    ecx = ebx; /* 0x005ED9F3: mov ecx, ebx */
    RECOMP_CALL(sub_005EF680); /* 0x005ED9F5: call 0x5ef680 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005ED9FA: add esp, 8 */
    _flag_k = FK_ADD;
L_005ED9FD:
    edi = POP32_VAL(esp); /* 0x005ED9FD: pop edi */
    esi = POP32_VAL(esp); /* 0x005ED9FE: pop esi */
    ebx = POP32_VAL(esp); /* 0x005ED9FF: pop ebx */
    esp = ebp; /* 0x005EDA00: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EDA02: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EDA03: ret  */
L_005EDA04:
    /* cmp eax, 0x20u */ /* 0x005EDA04: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_005ED9E8; /* 0x005EDA07: jle 0x5ed9e8 */
L_005EDA09:
    ecx = edi; /* 0x005EDA09: mov ecx, edi */
    eax = 0x92492493u; /* 0x005EDA0B: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x005EDA10: sub ecx, ebx */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005EDA12: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005EDA14: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EDA16: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005EDA19: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005EDA1B: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005EDA1B: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005EDA1E: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x005EDA20: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_005EDA37; /* 0x005EDA23: jle 0x5eda37 */
L_005EDA25:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EDA25: sub esp, 8 */
    _flag_k = FK_CMP;
    edx = edi; /* 0x005EDA28: mov edx, edi */
    ecx = ebx; /* 0x005EDA2A: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005EDA2C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_005EF4C0); /* 0x005EDA2F: call 0x5ef4c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005EDA34: add esp, 0xc */
    _flag_k = FK_ADD;
L_005EDA37:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005EDA37: push dword ptr [ebp + 0xc] */
    edx = edi; /* 0x005EDA3A: mov edx, edi */
    ecx = ebx; /* 0x005EDA3C: mov ecx, ebx */
    RECOMP_CALL(sub_005EF590); /* 0x005EDA3E: call 0x5ef590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EDA43: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x005EDA46: pop edi */
    esi = POP32_VAL(esp); /* 0x005EDA47: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EDA48: pop ebx */
    esp = ebp; /* 0x005EDA49: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EDA4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EDA4C: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EDA50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EDA50u);

L_005EDA50:
    PUSH32(esp, ebp); /* 0x005EDA50: push ebp */
    ebp = esp; /* 0x005EDA51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EDA53: push -1 */
    PUSH32(esp, 0x007B1BE0u); /* 0x005EDA55: push 0x7b1be0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EDA5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EDA60: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005EDA61: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EDA64: push ebx */
    PUSH32(esp, esi); /* 0x005EDA65: push esi */
    PUSH32(esp, edi); /* 0x005EDA66: push edi */
    eax = MEM32(0x855000); /* 0x005EDA67: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EDA6C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EDA6E: push eax */
    eax = ebp + (-0xC); /* 0x005EDA6F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EDA72: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005EDA78: mov dword ptr [ebp - 0x10], esp */
    RECOMP_CALL(sub_005EE510); /* 0x005EDA7B: call 0x5ee510 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x005EDA80: mov edi, eax */
    MEM32(ebp + (-0x14)) = edi; /* 0x005EDA82: mov dword ptr [ebp - 0x14], edi */
    MEM16(edi + 0xC) = (uint16_t)(0); /* 0x005EDA85: mov word ptr [edi + 0xc], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EDA8B: mov dword ptr [ebp - 4], 0 */
    esi = edi + 0x10; /* 0x005EDA92: lea esi, [edi + 0x10] */
    MEM32(ebp + (-0x18)) = esi; /* 0x005EDA95: mov dword ptr [ebp - 0x18], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005EDA98: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x005EDA9C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EDB15; /* 0x005EDA9E: je 0x5edb15 */
L_005EDAA0:
    eax = MEM32(ebp + 0xC); /* 0x005EDAA0: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x005EDAA3: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0xC) = ecx; /* 0x005EDAA5: mov dword ptr [ebp + 0xc], ecx */
    MEM32(esi + 0x10) = 0; /* 0x005EDAA8: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x14) = 0; /* 0x005EDAAF: mov dword ptr [esi + 0x14], 0 */
    MEM32(esi + 0x14) = 0xFu; /* 0x005EDAB6: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005EDABD: mov dword ptr [esi + 0x10], 0 */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005EDAC4: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EDACE; /* 0x005EDAC8: jb 0x5edace */
L_005EDACA:
    eax = MEM32(esi); /* 0x005EDACA: mov eax, dword ptr [esi] */
    goto L_005EDAD0; /* 0x005EDACC: jmp 0x5edad0 */
L_005EDACE:
    eax = esi; /* 0x005EDACE: mov eax, esi */
L_005EDAD0:
    MEM8(eax) = (uint8_t)(0); /* 0x005EDAD0: mov byte ptr [eax], 0 */
    PUSH32(esp, ecx); /* 0x005EDAD3: push ecx */
    ecx = esi; /* 0x005EDAD4: mov ecx, esi */
    RECOMP_CALL(sub_00419890); /* 0x005EDAD6: call 0x419890 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005EDADB: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x005EDADF: add esi, 0x18 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = 0; /* 0x005EDAE2: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x14) = 0; /* 0x005EDAE9: mov dword ptr [esi + 0x14], 0 */
    MEM32(esi + 0x14) = 0xFu; /* 0x005EDAF0: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005EDAF7: mov dword ptr [esi + 0x10], 0 */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005EDAFE: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EDB06; /* 0x005EDB02: jb 0x5edb06 */
L_005EDB04:
    esi = MEM32(esi); /* 0x005EDB04: mov esi, dword ptr [esi] */
L_005EDB06:
    MEM8(esi) = (uint8_t)(0); /* 0x005EDB06: mov byte ptr [esi], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005EDB09: mov byte ptr [ebp - 4], 3 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005EDB0D: mov byte ptr [ebp - 4], 4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005EDB11: mov byte ptr [ebp - 4], 1 */
L_005EDB15:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005EDB15: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EDB19: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x005EDB20: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EDB22: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EDB25: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EDB2C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EDB2D: pop edi */
    esi = POP32_VAL(esp); /* 0x005EDB2E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EDB2F: pop ebx */
    esp = ebp; /* 0x005EDB30: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EDB32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005EDB33: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005EDB36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EDB36u);

L_005EDB36:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005EDB36: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EDB39: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EDB3F: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005EDB42: push 0 */
    PUSH32(esp, 0); /* 0x005EDB44: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005EDB46: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005EDB4Bu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EDB50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EDB50u);

L_005EDB50:
    PUSH32(esp, ebp); /* 0x005EDB50: push ebp */
    ebp = esp; /* 0x005EDB51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EDB53: push -1 */
    PUSH32(esp, 0x007B1C00u); /* 0x005EDB55: push 0x7b1c00 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EDB5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EDB60: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005EDB61: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EDB64: push ebx */
    PUSH32(esp, esi); /* 0x005EDB65: push esi */
    PUSH32(esp, edi); /* 0x005EDB66: push edi */
    eax = MEM32(0x855000); /* 0x005EDB67: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EDB6C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EDB6E: push eax */
    eax = ebp + (-0xC); /* 0x005EDB6F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EDB72: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005EDB78: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x005EDB7B: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EDB7D: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x005EDB84: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EDBB3; /* 0x005EDB88: jne 0x5edbb3 */
L_005EDB8A:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EDB8A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005EDB8D: push ecx */
    PUSH32(esp, MEM32(ebx)); /* 0x005EDB8E: push dword ptr [ebx] */
L_005EDB90:
    PUSH32(esp, 1); /* 0x005EDB90: push 1 */
L_005EDB92:
    ecx = ebx; /* 0x005EDB92: mov ecx, ebx */
L_005EDB94:
    esi = MEM32(ebp + 0x8); /* 0x005EDB94: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005EDB97: push esi */
    RECOMP_CALL(sub_005EF040); /* 0x005EDB98: call 0x5ef040 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x005EDB9D: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EDB9F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EDBA2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EDBA9: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EDBAA: pop edi */
    esi = POP32_VAL(esp); /* 0x005EDBAB: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EDBAC: pop ebx */
    esp = ebp; /* 0x005EDBAD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EDBAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005EDBB0: ret 0x10 */
L_005EDBB3:
    ecx = MEM32(ebx); /* 0x005EDBB3: mov ecx, dword ptr [ebx] */
    eax = MEM32(ebp + 0xC); /* 0x005EDBB5: mov eax, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x10); /* 0x005EDBB8: mov edi, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(ecx) */ /* 0x005EDBBB: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EDBDA; /* 0x005EDBBD: jne 0x5edbda */
L_005EDBBF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x005EDBBF: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005EDBC2: push eax */
    PUSH32(esp, edi); /* 0x005EDBC3: push edi */
    RECOMP_CALL(sub_005E0380); /* 0x005EDBC4: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EDBC9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EDCA1; /* 0x005EDBCB: je 0x5edca1 */
L_005EDBD1:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EDBD1: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005EDBD4: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005EDBD5: push dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_005EDB90; /* 0x005EDBD8: jmp 0x5edb90 */
L_005EDBDA:
    /* cmp eax, ecx */ /* 0x005EDBDA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EDC00; /* 0x005EDBDC: jne 0x5edc00 */
L_005EDBDE:
    eax = MEM32(ecx + 0x8); /* 0x005EDBDE: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x005EDBE1: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x005EDBE4: push edi */
    PUSH32(esp, eax); /* 0x005EDBE5: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x005EDBE6: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EDBEB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EDCA1; /* 0x005EDBED: je 0x5edca1 */
L_005EDBF3:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EDBF3: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005EDBF6: push ecx */
    eax = MEM32(ebx); /* 0x005EDBF7: mov eax, dword ptr [ebx] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x005EDBF9: push dword ptr [eax + 8] */
    PUSH32(esp, 0); /* 0x005EDBFC: push 0 */
    RECOMP_BACKEDGE();
    goto L_005EDB92; /* 0x005EDBFE: jmp 0x5edb92 */
L_005EDC00:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x005EDC00: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005EDC03: push eax */
    PUSH32(esp, edi); /* 0x005EDC04: push edi */
    RECOMP_CALL(sub_005E0380); /* 0x005EDC05: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EDC0A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EDC4E; /* 0x005EDC0C: je 0x5edc4e */
L_005EDC0E:
    eax = MEM32(ebp + 0xC); /* 0x005EDC0E: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005EDC11: mov dword ptr [ebp - 0x14], eax */
    ecx = ebp + (-0x14); /* 0x005EDC14: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_0041B310); /* 0x005EDC17: call 0x41b310 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005EDC1C: push edi */
    esi = MEM32(ebp + (-0x14)); /* 0x005EDC1D: mov esi, dword ptr [ebp - 0x14] */
    eax = esi + 0x10; /* 0x005EDC20: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005EDC23: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x005EDC24: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EDC29: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EDC4E; /* 0x005EDC2B: je 0x5edc4e */
L_005EDC2D:
    eax = MEM32(esi + 0x8); /* 0x005EDC2D: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EDC30: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005EDC33: push ecx */
    ecx = ebx; /* 0x005EDC34: mov ecx, ebx */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EDC36: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EDC44; /* 0x005EDC3A: je 0x5edc44 */
L_005EDC3C:
    PUSH32(esp, esi); /* 0x005EDC3C: push esi */
    PUSH32(esp, 0); /* 0x005EDC3D: push 0 */
    RECOMP_BACKEDGE();
    goto L_005EDB94; /* 0x005EDC3F: jmp 0x5edb94 */
L_005EDC44:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005EDC44: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x005EDC47: push 1 */
    RECOMP_BACKEDGE();
    goto L_005EDB94; /* 0x005EDC49: jmp 0x5edb94 */
L_005EDC4E:
    PUSH32(esp, edi); /* 0x005EDC4E: push edi */
    eax = MEM32(ebp + 0xC); /* 0x005EDC4F: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x005EDC52: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005EDC55: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x005EDC56: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EDC5B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EDCA1; /* 0x005EDC5D: je 0x5edca1 */
L_005EDC5F:
    esi = MEM32(ebp + 0xC); /* 0x005EDC5F: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005EDC62: mov dword ptr [ebp - 0x14], esi */
    ecx = ebp + (-0x14); /* 0x005EDC65: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_0040B880); /* 0x005EDC68: call 0x40b880 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x14)); /* 0x005EDC6D: mov edi, dword ptr [ebp - 0x14] */
    /* cmp edi, MEM32(ebx) */ /* 0x005EDC70: cmp edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EDC87; /* 0x005EDC72: je 0x5edc87 */
L_005EDC74:
    eax = edi + 0x10; /* 0x005EDC74: lea eax, [edi + 0x10] */
    PUSH32(esp, eax); /* 0x005EDC77: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005EDC78: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_005E0380); /* 0x005EDC7B: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EDC80: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EDC9E; /* 0x005EDC82: je 0x5edc9e */
L_005EDC84:
    esi = MEM32(ebp + 0xC); /* 0x005EDC84: mov esi, dword ptr [ebp + 0xc] */
L_005EDC87:
    eax = MEM32(esi + 0x8); /* 0x005EDC87: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EDC8A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005EDC8D: push ecx */
    ecx = ebx; /* 0x005EDC8E: mov ecx, ebx */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EDC90: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EDC3C; /* 0x005EDC94: jne 0x5edc3c */
L_005EDC96:
    PUSH32(esp, edi); /* 0x005EDC96: push edi */
    PUSH32(esp, 1); /* 0x005EDC97: push 1 */
    RECOMP_BACKEDGE();
    goto L_005EDB94; /* 0x005EDC99: jmp 0x5edb94 */
L_005EDC9E:
    edi = MEM32(ebp + 0x10); /* 0x005EDC9E: mov edi, dword ptr [ebp + 0x10] */
L_005EDCA1:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EDCA1: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EDCA8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x005EDCAB: push edi */
    PUSH32(esp, 0); /* 0x005EDCAC: push 0 */
    eax = ebp + (-0x18); /* 0x005EDCAE: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x005EDCB1: push eax */
    ecx = ebx; /* 0x005EDCB2: mov ecx, ebx */
    RECOMP_CALL(sub_005EF1E0); /* 0x005EDCB4: call 0x5ef1e0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x005EDCB9: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x005EDCBB: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005EDCBE: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EDCC0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EDCC3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EDCCA: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EDCCB: pop edi */
    esi = POP32_VAL(esp); /* 0x005EDCCC: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EDCCD: pop ebx */
    esp = ebp; /* 0x005EDCCE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EDCD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005EDCD1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005EDCD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EDCD4u);

L_005EDCD4:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EDCD4: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_005EE4F0); /* 0x005EDCD7: call 0x5ee4f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005EDCDC: push 0 */
    PUSH32(esp, 0); /* 0x005EDCDE: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005EDCE0: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005EDCE5u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EDCF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EDCF0u);

L_005EDCF0:
    PUSH32(esp, ebp); /* 0x005EDCF0: push ebp */
    ebp = esp; /* 0x005EDCF1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005EDCF3: push ecx */
    eax = edx; /* 0x005EDCF4: mov eax, edx */
    MEM32(ebp + (-0x4)) = eax; /* 0x005EDCF6: mov dword ptr [ebp - 4], eax */
    /* cmp ecx, eax */ /* 0x005EDCF9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EDD95; /* 0x005EDCFB: je 0x5edd95 */
L_005EDD01:
    PUSH32(esp, ebx); /* 0x005EDD01: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x005EDD02: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005EDD05: push esi */
    PUSH32(esp, edi); /* 0x005EDD06: push edi */
    esi = ecx + 0x20; /* 0x005EDD07: lea esi, [ecx + 0x20] */
    edi = ebx + 0x20; /* 0x005EDD0A: lea edi, [ebx + 0x20] */
    ecx = ecx; /* 0x005EDD0D: lea ecx, [ecx] */
L_005EDD10:
    eax = MEM32(esi + (-0x20)); /* 0x005EDD10: mov eax, dword ptr [esi - 0x20] */
    ecx = esi + (-0x18); /* 0x005EDD13: lea ecx, [esi - 0x18] */
    MEM32(ebx) = eax; /* 0x005EDD16: mov dword ptr [ebx], eax */
    eax = MEM32(esi + (-0x1C)); /* 0x005EDD18: mov eax, dword ptr [esi - 0x1c] */
    MEM32(ebx + 0x4) = eax; /* 0x005EDD1B: mov dword ptr [ebx + 4], eax */
    eax = edi + (-0x18); /* 0x005EDD1E: lea eax, [edi - 0x18] */
    /* cmp eax, ecx */ /* 0x005EDD21: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EDD35; /* 0x005EDD23: je 0x5edd35 */
L_005EDD25:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EDD25: push -1 */
    PUSH32(esp, 0); /* 0x005EDD27: push 0 */
    eax = esi + (-0x18); /* 0x005EDD29: lea eax, [esi - 0x18] */
    PUSH32(esp, eax); /* 0x005EDD2C: push eax */
    ecx = edi + (-0x18); /* 0x005EDD2D: lea ecx, [edi - 0x18] */
    RECOMP_CALL(sub_0040A030); /* 0x005EDD30: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EDD35:
    /* cmp edi, esi */ /* 0x005EDD35: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EDD45; /* 0x005EDD37: je 0x5edd45 */
L_005EDD39:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EDD39: push -1 */
    PUSH32(esp, 0); /* 0x005EDD3B: push 0 */
    PUSH32(esp, esi); /* 0x005EDD3D: push esi */
    ecx = edi; /* 0x005EDD3E: mov ecx, edi */
    RECOMP_CALL(sub_0040A030); /* 0x005EDD40: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EDD45:
    eax = esi + 0x18; /* 0x005EDD45: lea eax, [esi + 0x18] */
    ecx = edi + 0x18; /* 0x005EDD48: lea ecx, [edi + 0x18] */
    /* cmp ecx, eax */ /* 0x005EDD4B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EDD59; /* 0x005EDD4D: je 0x5edd59 */
L_005EDD4F:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EDD4F: push -1 */
    PUSH32(esp, 0); /* 0x005EDD51: push 0 */
    PUSH32(esp, eax); /* 0x005EDD53: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EDD54: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EDD59:
    eax = esi + 0x30; /* 0x005EDD59: lea eax, [esi + 0x30] */
    ecx = edi + 0x30; /* 0x005EDD5C: lea ecx, [edi + 0x30] */
    /* cmp ecx, eax */ /* 0x005EDD5F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EDD6D; /* 0x005EDD61: je 0x5edd6d */
L_005EDD63:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EDD63: push -1 */
    PUSH32(esp, 0); /* 0x005EDD65: push 0 */
    PUSH32(esp, eax); /* 0x005EDD67: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EDD68: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EDD6D:
    SET_LO16(eax, MEM16(esi + 0x48)); /* 0x005EDD6D: mov ax, word ptr [esi + 0x48] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x70u; /* 0x005EDD71: add ebx, 0x70 */
    _flag_k = FK_ADD;
    MEM16(edi + 0x48) = (uint16_t)(LO16(eax)); /* 0x005EDD74: mov word ptr [edi + 0x48], ax */
    ecx = MEM32(esi + 0x4C); /* 0x005EDD78: mov ecx, dword ptr [esi + 0x4c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005EDD7B: add esi, 0x70 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4C) = ecx; /* 0x005EDD7E: mov dword ptr [edi + 0x4c], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x70u; /* 0x005EDD81: add edi, 0x70 */
    _flag_k = FK_ADD;
    ecx = esi + (-0x20); /* 0x005EDD84: lea ecx, [esi - 0x20] */
    /* cmp ecx, MEM32(ebp + (-0x4)) */ /* 0x005EDD87: cmp ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EDD10; /* 0x005EDD8A: jne 0x5edd10 */
L_005EDD8C:
    edi = POP32_VAL(esp); /* 0x005EDD8C: pop edi */
    esi = POP32_VAL(esp); /* 0x005EDD8D: pop esi */
    eax = ebx; /* 0x005EDD8E: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x005EDD90: pop ebx */
    esp = ebp; /* 0x005EDD91: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EDD93: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EDD94: ret  */
L_005EDD95:
    eax = MEM32(ebp + 0x8); /* 0x005EDD95: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x005EDD98: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EDD9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EDD9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EDDA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EDDA0u);

L_005EDDA0:
    PUSH32(esp, ebp); /* 0x005EDDA0: push ebp */
    ebp = esp; /* 0x005EDDA1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005EDDA3: push ecx */
    PUSH32(esp, esi); /* 0x005EDDA4: push esi */
    eax = edx; /* 0x005EDDA5: mov eax, edx */
    esi = ecx; /* 0x005EDDA7: mov esi, ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x005EDDA9: mov dword ptr [ebp - 4], eax */
    /* cmp esi, eax */ /* 0x005EDDAC: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EDE29; /* 0x005EDDAE: je 0x5ede29 */
L_005EDDB0:
    PUSH32(esp, ebx); /* 0x005EDDB0: push ebx */
    PUSH32(esp, edi); /* 0x005EDDB1: push edi */
    edi = MEM32(ebp + 0x8); /* 0x005EDDB2: mov edi, dword ptr [ebp + 8] */
    ebx = edi + 0x18; /* 0x005EDDB5: lea ebx, [edi + 0x18] */
    MEM32(ebp + 0x8) = ebx; /* 0x005EDDB8: mov dword ptr [ebp + 8], ebx */
    goto L_005EDDC0; /* 0x005EDDBB: jmp 0x5eddc0 */
L_005EDDC0:
    /* cmp edi, esi */ /* 0x005EDDC0: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EDDD0; /* 0x005EDDC2: je 0x5eddd0 */
L_005EDDC4:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EDDC4: push -1 */
    PUSH32(esp, 0); /* 0x005EDDC6: push 0 */
    PUSH32(esp, esi); /* 0x005EDDC8: push esi */
    ecx = edi; /* 0x005EDDC9: mov ecx, edi */
    RECOMP_CALL(sub_0040A030); /* 0x005EDDCB: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EDDD0:
    eax = esi + 0x18; /* 0x005EDDD0: lea eax, [esi + 0x18] */
    /* cmp ebx, eax */ /* 0x005EDDD3: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EDDE6; /* 0x005EDDD5: je 0x5edde6 */
L_005EDDD7:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EDDD7: push -1 */
    PUSH32(esp, 0); /* 0x005EDDD9: push 0 */
    PUSH32(esp, eax); /* 0x005EDDDB: push eax */
    ecx = ebx; /* 0x005EDDDC: mov ecx, ebx */
    RECOMP_CALL(sub_0040A030); /* 0x005EDDDE: call 0x40a030 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x18; /* 0x005EDDE3: lea eax, [esi + 0x18] */
L_005EDDE6:
    eax = MEM32(eax + 0x18); /* 0x005EDDE6: mov eax, dword ptr [eax + 0x18] */
    edx = 0x14u; /* 0x005EDDE9: mov edx, 0x14 */
    MEM32(ebx + 0x18) = eax; /* 0x005EDDEE: mov dword ptr [ebx + 0x18], eax */
    eax = ebx + 0x1C; /* 0x005EDDF1: lea eax, [ebx + 0x1c] */
    ebx = esi; /* 0x005EDDF4: mov ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x005EDDF6: sub ebx, edi */
    _flag_k = FK_CMP;
    goto L_005EDE00; /* 0x005EDDF8: jmp 0x5ede00 */
L_005EDE00:
    SET_LO8(ecx, MEM8(ebx + eax)); /* 0x005EDE00: mov cl, byte ptr [ebx + eax] */
    eax = eax + 0x1; /* 0x005EDE03: lea eax, [eax + 1] */
    MEM8(eax + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x005EDE06: mov byte ptr [eax - 1], cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x005EDE09: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_005EDE00; /* 0x005EDE0A: jne 0x5ede00 */
L_005EDE0C:
    ebx = MEM32(ebp + 0x8); /* 0x005EDE0C: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x48u; /* 0x005EDE0F: add esi, 0x48 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x48u; /* 0x005EDE12: add ebx, 0x48 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x48u; /* 0x005EDE15: add edi, 0x48 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x005EDE18: mov dword ptr [ebp + 8], ebx */
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x005EDE1B: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EDDC0; /* 0x005EDE1E: jne 0x5eddc0 */
L_005EDE20:
    eax = edi; /* 0x005EDE20: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x005EDE22: pop edi */
    ebx = POP32_VAL(esp); /* 0x005EDE23: pop ebx */
    esi = POP32_VAL(esp); /* 0x005EDE24: pop esi */
    esp = ebp; /* 0x005EDE25: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EDE27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EDE28: ret  */
L_005EDE29:
    eax = MEM32(ebp + 0x8); /* 0x005EDE29: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x005EDE2C: pop esi */
    esp = ebp; /* 0x005EDE2D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EDE2F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EDE30: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EDE40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EDE40u);

L_005EDE40:
    PUSH32(esp, ebp); /* 0x005EDE40: push ebp */
    ebp = esp; /* 0x005EDE41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EDE43: push -1 */
    PUSH32(esp, 0x007B1C20u); /* 0x005EDE45: push 0x7b1c20 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EDE4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EDE50: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EDE51: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EDE54: push ebx */
    PUSH32(esp, esi); /* 0x005EDE55: push esi */
    PUSH32(esp, edi); /* 0x005EDE56: push edi */
    eax = MEM32(0x855000); /* 0x005EDE57: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EDE5C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EDE5E: push eax */
    eax = ebp + (-0xC); /* 0x005EDE5F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EDE62: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005EDE68: mov dword ptr [ebp - 0x10], esp */
    RECOMP_CALL(sub_005EE610); /* 0x005EDE6B: call 0x5ee610 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x005EDE70: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x005EDE72: mov dword ptr [ebp - 0x14], esi */
    MEM16(esi + 0xC) = (uint16_t)(0); /* 0x005EDE75: mov word ptr [esi + 0xc], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EDE7B: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, ecx); /* 0x005EDE82: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005EDE83: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x005EDE86: push ecx */
    eax = esi + 0x10; /* 0x005EDE87: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005EDE8A: push eax */
    RECOMP_CALL(sub_005EFD20); /* 0x005EDE8B: call 0x5efd20 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EDE90: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005EDE97: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EDE99: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EDE9C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EDEA3: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EDEA4: pop edi */
    esi = POP32_VAL(esp); /* 0x005EDEA5: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EDEA6: pop ebx */
    esp = ebp; /* 0x005EDEA7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EDEA9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005EDEAA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005EDEAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EDEADu);

L_005EDEAD:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005EDEAD: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EDEB0: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EDEB6: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005EDEB9: push 0 */
    PUSH32(esp, 0); /* 0x005EDEBB: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005EDEBD: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005EDEC2u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EDED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EDED0u);

L_005EDED0:
    PUSH32(esp, ebp); /* 0x005EDED0: push ebp */
    ebp = esp; /* 0x005EDED1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EDED3: push -1 */
    PUSH32(esp, 0x007B1C40u); /* 0x005EDED5: push 0x7b1c40 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EDEDA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EDEE0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x005EDEE1: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EDEE4: push ebx */
    PUSH32(esp, esi); /* 0x005EDEE5: push esi */
    PUSH32(esp, edi); /* 0x005EDEE6: push edi */
    eax = MEM32(0x855000); /* 0x005EDEE7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EDEEC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EDEEE: push eax */
    eax = ebp + (-0xC); /* 0x005EDEEF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EDEF2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005EDEF8: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x005EDEFB: mov ebx, ecx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x005EDEFD: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EDF00: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x005EDF07: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EDF36; /* 0x005EDF0B: jne 0x5edf36 */
L_005EDF0D:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EDF0D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005EDF10: push ecx */
    PUSH32(esp, MEM32(ebx)); /* 0x005EDF11: push dword ptr [ebx] */
L_005EDF13:
    PUSH32(esp, 1); /* 0x005EDF13: push 1 */
L_005EDF15:
    ecx = ebx; /* 0x005EDF15: mov ecx, ebx */
L_005EDF17:
    esi = MEM32(ebp + 0x8); /* 0x005EDF17: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005EDF1A: push esi */
    RECOMP_CALL(sub_005EE890); /* 0x005EDF1B: call 0x5ee890 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x005EDF20: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EDF22: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EDF25: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EDF2C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EDF2D: pop edi */
    esi = POP32_VAL(esp); /* 0x005EDF2E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EDF2F: pop ebx */
    esp = ebp; /* 0x005EDF30: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EDF32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005EDF33: ret 0x10 */
L_005EDF36:
    edi = MEM32(ebx); /* 0x005EDF36: mov edi, dword ptr [ebx] */
    esi = MEM32(ebp + 0xC); /* 0x005EDF38: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, MEM32(edi) */ /* 0x005EDF3B: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EDF5A; /* 0x005EDF3D: jne 0x5edf5a */
L_005EDF3F:
    eax = esi + 0x10; /* 0x005EDF3F: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005EDF42: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005EDF43: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_00546F00); /* 0x005EDF46: call 0x546f00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EDF4B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EE01E; /* 0x005EDF4D: je 0x5ee01e */
L_005EDF53:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EDF53: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005EDF56: push ecx */
    PUSH32(esp, esi); /* 0x005EDF57: push esi */
    RECOMP_BACKEDGE();
    goto L_005EDF13; /* 0x005EDF58: jmp 0x5edf13 */
L_005EDF5A:
    /* cmp esi, edi */ /* 0x005EDF5A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EDF7E; /* 0x005EDF5C: jne 0x5edf7e */
L_005EDF5E:
    esi = MEM32(edi + 0x8); /* 0x005EDF5E: mov esi, dword ptr [edi + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005EDF61: push dword ptr [ebp + 0x10] */
    eax = esi + 0x10; /* 0x005EDF64: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005EDF67: push eax */
    RECOMP_CALL(sub_00546F00); /* 0x005EDF68: call 0x546f00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EDF6D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EE01E; /* 0x005EDF6F: je 0x5ee01e */
L_005EDF75:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EDF75: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005EDF78: push ecx */
    PUSH32(esp, esi); /* 0x005EDF79: push esi */
    PUSH32(esp, 0); /* 0x005EDF7A: push 0 */
    RECOMP_BACKEDGE();
    goto L_005EDF15; /* 0x005EDF7C: jmp 0x5edf15 */
L_005EDF7E:
    eax = esi + 0x10; /* 0x005EDF7E: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005EDF81: push eax */
    ebx = MEM32(ebp + 0x10); /* 0x005EDF82: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x005EDF85: push ebx */
    RECOMP_CALL(sub_00546F00); /* 0x005EDF86: call 0x546f00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EDF8B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EDFCE; /* 0x005EDF8D: je 0x5edfce */
L_005EDF8F:
    MEM32(ebp + (-0x14)) = esi; /* 0x005EDF8F: mov dword ptr [ebp - 0x14], esi */
    ecx = ebp + (-0x14); /* 0x005EDF92: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_0041B310); /* 0x005EDF95: call 0x41b310 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x005EDF9A: push ebx */
    ebx = MEM32(ebp + (-0x14)); /* 0x005EDF9B: mov ebx, dword ptr [ebp - 0x14] */
    eax = ebx + 0x10; /* 0x005EDF9E: lea eax, [ebx + 0x10] */
    PUSH32(esp, eax); /* 0x005EDFA1: push eax */
    RECOMP_CALL(sub_00546F00); /* 0x005EDFA2: call 0x546f00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EDFA7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EDFCB; /* 0x005EDFA9: je 0x5edfcb */
L_005EDFAB:
    eax = MEM32(ebx + 0x8); /* 0x005EDFAB: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EDFAE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005EDFB1: push ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x005EDFB2: mov ecx, dword ptr [ebp - 0x1c] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EDFB5: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EDFC3; /* 0x005EDFB9: je 0x5edfc3 */
L_005EDFBB:
    PUSH32(esp, ebx); /* 0x005EDFBB: push ebx */
    PUSH32(esp, 0); /* 0x005EDFBC: push 0 */
    RECOMP_BACKEDGE();
    goto L_005EDF17; /* 0x005EDFBE: jmp 0x5edf17 */
L_005EDFC3:
    PUSH32(esp, esi); /* 0x005EDFC3: push esi */
    PUSH32(esp, 1); /* 0x005EDFC4: push 1 */
    RECOMP_BACKEDGE();
    goto L_005EDF17; /* 0x005EDFC6: jmp 0x5edf17 */
L_005EDFCB:
    ebx = MEM32(ebp + 0x10); /* 0x005EDFCB: mov ebx, dword ptr [ebp + 0x10] */
L_005EDFCE:
    PUSH32(esp, ebx); /* 0x005EDFCE: push ebx */
    eax = esi + 0x10; /* 0x005EDFCF: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005EDFD2: push eax */
    RECOMP_CALL(sub_00546F00); /* 0x005EDFD3: call 0x546f00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EDFD8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EE021; /* 0x005EDFDA: je 0x5ee021 */
L_005EDFDC:
    MEM32(ebp + (-0x14)) = esi; /* 0x005EDFDC: mov dword ptr [ebp - 0x14], esi */
    ecx = ebp + (-0x14); /* 0x005EDFDF: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_0040B880); /* 0x005EDFE2: call 0x40b880 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x14)); /* 0x005EDFE7: mov ebx, dword ptr [ebp - 0x14] */
    /* cmp ebx, edi */ /* 0x005EDFEA: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EDFFE; /* 0x005EDFEC: je 0x5edffe */
L_005EDFEE:
    eax = ebx + 0x10; /* 0x005EDFEE: lea eax, [ebx + 0x10] */
    PUSH32(esp, eax); /* 0x005EDFF1: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005EDFF2: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_00546F00); /* 0x005EDFF5: call 0x546f00 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EDFFA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EE01E; /* 0x005EDFFC: je 0x5ee01e */
L_005EDFFE:
    eax = MEM32(esi + 0x8); /* 0x005EDFFE: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EE001: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005EE004: push ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x005EE005: mov ecx, dword ptr [ebp - 0x1c] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EE008: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE016; /* 0x005EE00C: je 0x5ee016 */
L_005EE00E:
    PUSH32(esp, esi); /* 0x005EE00E: push esi */
    PUSH32(esp, 0); /* 0x005EE00F: push 0 */
    RECOMP_BACKEDGE();
    goto L_005EDF17; /* 0x005EE011: jmp 0x5edf17 */
L_005EE016:
    PUSH32(esp, ebx); /* 0x005EE016: push ebx */
    PUSH32(esp, 1); /* 0x005EE017: push 1 */
    RECOMP_BACKEDGE();
    goto L_005EDF17; /* 0x005EE019: jmp 0x5edf17 */
L_005EE01E:
    ebx = MEM32(ebp + 0x10); /* 0x005EE01E: mov ebx, dword ptr [ebp + 0x10] */
L_005EE021:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EE021: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EE028: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x005EE02B: push ebx */
    PUSH32(esp, 0); /* 0x005EE02C: push 0 */
    eax = ebp + (-0x18); /* 0x005EE02E: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x005EE031: push eax */
    ecx = MEM32(ebp + (-0x1C)); /* 0x005EE032: mov ecx, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_005ED7F0); /* 0x005EE035: call 0x5ed7f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x005EE03A: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x005EE03C: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005EE03F: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EE041: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EE044: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EE04B: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EE04C: pop edi */
    esi = POP32_VAL(esp); /* 0x005EE04D: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EE04E: pop ebx */
    esp = ebp; /* 0x005EE04F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EE051: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005EE052: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005EE055(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE055u);

L_005EE055:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EE055: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_005EE5B0); /* 0x005EE058: call 0x5ee5b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005EE05D: push 0 */
    PUSH32(esp, 0); /* 0x005EE05F: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005EE061: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005EE066u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EE070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE070u);

L_005EE070:
    PUSH32(esp, ebp); /* 0x005EE070: push ebp */
    ebp = esp; /* 0x005EE071: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005EE073: push ecx */
    eax = edx; /* 0x005EE074: mov eax, edx */
    MEM32(ebp + (-0x4)) = eax; /* 0x005EE076: mov dword ptr [ebp - 4], eax */
    /* cmp ecx, eax */ /* 0x005EE079: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE114; /* 0x005EE07B: je 0x5ee114 */
L_005EE081:
    PUSH32(esp, ebx); /* 0x005EE081: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x005EE082: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005EE085: push esi */
    PUSH32(esp, edi); /* 0x005EE086: push edi */
    MEM32(ebp + 0x8) = ebx; /* 0x005EE087: mov dword ptr [ebp + 8], ebx */
    esi = ecx + 0x18; /* 0x005EE08A: lea esi, [ecx + 0x18] */
    edi = ebx + 0x18; /* 0x005EE08D: lea edi, [ebx + 0x18] */
L_005EE090:
    eax = esi + (-0x18); /* 0x005EE090: lea eax, [esi - 0x18] */
    /* cmp ebx, eax */ /* 0x005EE093: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE0A6; /* 0x005EE095: je 0x5ee0a6 */
L_005EE097:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE097: push -1 */
    PUSH32(esp, 0); /* 0x005EE099: push 0 */
    eax = esi + (-0x18); /* 0x005EE09B: lea eax, [esi - 0x18] */
    ecx = ebx; /* 0x005EE09E: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005EE0A0: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EE0A1: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EE0A6:
    /* cmp edi, esi */ /* 0x005EE0A6: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE0B6; /* 0x005EE0A8: je 0x5ee0b6 */
L_005EE0AA:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE0AA: push -1 */
    PUSH32(esp, 0); /* 0x005EE0AC: push 0 */
    PUSH32(esp, esi); /* 0x005EE0AE: push esi */
    ecx = edi; /* 0x005EE0AF: mov ecx, edi */
    RECOMP_CALL(sub_0040A030); /* 0x005EE0B1: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EE0B6:
    eax = MEM32(esi + 0x18); /* 0x005EE0B6: mov eax, dword ptr [esi + 0x18] */
    ecx = esi; /* 0x005EE0B9: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x005EE0BB: sub ecx, ebx */
    _flag_k = FK_CMP;
    MEM32(edi + 0x18) = eax; /* 0x005EE0BD: mov dword ptr [edi + 0x18], eax */
    eax = edi + 0x1C; /* 0x005EE0C0: lea eax, [edi + 0x1c] */
    edx = 0x14u; /* 0x005EE0C3: mov edx, 0x14 */
    ebx = ecx + (-0x18); /* 0x005EE0C8: lea ebx, [ecx - 0x18] */
    goto L_005EE0D0; /* 0x005EE0CB: jmp 0x5ee0d0 */
L_005EE0D0:
    SET_LO8(ecx, MEM8(ebx + eax)); /* 0x005EE0D0: mov cl, byte ptr [ebx + eax] */
    eax = eax + 0x1; /* 0x005EE0D3: lea eax, [eax + 1] */
    MEM8(eax + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x005EE0D6: mov byte ptr [eax - 1], cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x005EE0D9: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_005EE0D0; /* 0x005EE0DA: jne 0x5ee0d0 */
L_005EE0DC:
    eax = esi + 0x30; /* 0x005EE0DC: lea eax, [esi + 0x30] */
    PUSH32(esp, eax); /* 0x005EE0DF: push eax */
    ecx = edi + 0x30; /* 0x005EE0E0: lea ecx, [edi + 0x30] */
    RECOMP_CALL(sub_005EB3A0); /* 0x005EE0E3: call 0x5eb3a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x3C); /* 0x005EE0E8: mov eax, dword ptr [esi + 0x3c] */
    ebx = MEM32(ebp + 0x8); /* 0x005EE0EB: mov ebx, dword ptr [ebp + 8] */
    MEM32(edi + 0x3C) = eax; /* 0x005EE0EE: mov dword ptr [edi + 0x3c], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x5Cu; /* 0x005EE0F1: add ebx, 0x5c */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x40); /* 0x005EE0F4: mov ecx, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x5Cu; /* 0x005EE0F7: add esi, 0x5c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x40) = ecx; /* 0x005EE0FA: mov dword ptr [edi + 0x40], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x5Cu; /* 0x005EE0FD: add edi, 0x5c */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x005EE100: mov dword ptr [ebp + 8], ebx */
    ecx = esi + (-0x18); /* 0x005EE103: lea ecx, [esi - 0x18] */
    /* cmp ecx, MEM32(ebp + (-0x4)) */ /* 0x005EE106: cmp ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EE090; /* 0x005EE109: jne 0x5ee090 */
L_005EE10B:
    edi = POP32_VAL(esp); /* 0x005EE10B: pop edi */
    esi = POP32_VAL(esp); /* 0x005EE10C: pop esi */
    eax = ebx; /* 0x005EE10D: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x005EE10F: pop ebx */
    esp = ebp; /* 0x005EE110: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EE112: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EE113: ret  */
L_005EE114:
    eax = MEM32(ebp + 0x8); /* 0x005EE114: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x005EE117: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EE119: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EE11A: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EE120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE120u);

L_005EE120:
    PUSH32(esp, ebp); /* 0x005EE120: push ebp */
    ebp = esp; /* 0x005EE121: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005EE123: push ecx */
    eax = edx; /* 0x005EE124: mov eax, edx */
    MEM32(ebp + (-0x4)) = eax; /* 0x005EE126: mov dword ptr [ebp - 4], eax */
    /* cmp ecx, eax */ /* 0x005EE129: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE1DA; /* 0x005EE12B: je 0x5ee1da */
L_005EE131:
    PUSH32(esp, ebx); /* 0x005EE131: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x005EE132: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005EE135: push esi */
    PUSH32(esp, edi); /* 0x005EE136: push edi */
    MEM32(ebp + 0x8) = ebx; /* 0x005EE137: mov dword ptr [ebp + 8], ebx */
    esi = ecx + 0x18; /* 0x005EE13A: lea esi, [ecx + 0x18] */
    edi = ebx + 0x18; /* 0x005EE13D: lea edi, [ebx + 0x18] */
L_005EE140:
    eax = esi + (-0x18); /* 0x005EE140: lea eax, [esi - 0x18] */
    /* cmp ebx, eax */ /* 0x005EE143: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE156; /* 0x005EE145: je 0x5ee156 */
L_005EE147:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE147: push -1 */
    PUSH32(esp, 0); /* 0x005EE149: push 0 */
    eax = esi + (-0x18); /* 0x005EE14B: lea eax, [esi - 0x18] */
    ecx = ebx; /* 0x005EE14E: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005EE150: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EE151: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EE156:
    /* cmp edi, esi */ /* 0x005EE156: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE166; /* 0x005EE158: je 0x5ee166 */
L_005EE15A:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE15A: push -1 */
    PUSH32(esp, 0); /* 0x005EE15C: push 0 */
    PUSH32(esp, esi); /* 0x005EE15E: push esi */
    ecx = edi; /* 0x005EE15F: mov ecx, edi */
    RECOMP_CALL(sub_0040A030); /* 0x005EE161: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EE166:
    eax = MEM32(esi + 0x18); /* 0x005EE166: mov eax, dword ptr [esi + 0x18] */
    ecx = esi; /* 0x005EE169: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x005EE16B: sub ecx, ebx */
    _flag_k = FK_CMP;
    MEM32(edi + 0x18) = eax; /* 0x005EE16D: mov dword ptr [edi + 0x18], eax */
    eax = edi + 0x1C; /* 0x005EE170: lea eax, [edi + 0x1c] */
    edx = 0x14u; /* 0x005EE173: mov edx, 0x14 */
    ebx = ecx + (-0x18); /* 0x005EE178: lea ebx, [ecx - 0x18] */
    goto L_005EE180; /* 0x005EE17B: jmp 0x5ee180 */
L_005EE180:
    SET_LO8(ecx, MEM8(ebx + eax)); /* 0x005EE180: mov cl, byte ptr [ebx + eax] */
    eax = eax + 0x1; /* 0x005EE183: lea eax, [eax + 1] */
    MEM8(eax + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x005EE186: mov byte ptr [eax - 1], cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x005EE189: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_005EE180; /* 0x005EE18A: jne 0x5ee180 */
L_005EE18C:
    eax = esi + 0x30; /* 0x005EE18C: lea eax, [esi + 0x30] */
    PUSH32(esp, eax); /* 0x005EE18F: push eax */
    ecx = edi + 0x30; /* 0x005EE190: lea ecx, [edi + 0x30] */
    RECOMP_CALL(sub_005EB3A0); /* 0x005EE193: call 0x5eb3a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x3C); /* 0x005EE198: mov eax, dword ptr [esi + 0x3c] */
    ebx = MEM32(ebp + 0x8); /* 0x005EE19B: mov ebx, dword ptr [ebp + 8] */
    MEM32(edi + 0x3C) = eax; /* 0x005EE19E: mov dword ptr [edi + 0x3c], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x70u; /* 0x005EE1A1: add ebx, 0x70 */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x40); /* 0x005EE1A4: mov eax, dword ptr [esi + 0x40] */
    MEM32(edi + 0x40) = eax; /* 0x005EE1A7: mov dword ptr [edi + 0x40], eax */
    eax = MEM32(esi + 0x48); /* 0x005EE1AA: mov eax, dword ptr [esi + 0x48] */
    MEM32(edi + 0x48) = eax; /* 0x005EE1AD: mov dword ptr [edi + 0x48], eax */
    eax = MEM32(esi + 0x4C); /* 0x005EE1B0: mov eax, dword ptr [esi + 0x4c] */
    MEM32(edi + 0x4C) = eax; /* 0x005EE1B3: mov dword ptr [edi + 0x4c], eax */
    ecx = MEM32(esi + 0x50); /* 0x005EE1B6: mov ecx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005EE1B9: add esi, 0x70 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x50) = ecx; /* 0x005EE1BC: mov dword ptr [edi + 0x50], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x70u; /* 0x005EE1BF: add edi, 0x70 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x005EE1C2: mov dword ptr [ebp + 8], ebx */
    ecx = esi + (-0x18); /* 0x005EE1C5: lea ecx, [esi - 0x18] */
    /* cmp ecx, MEM32(ebp + (-0x4)) */ /* 0x005EE1C8: cmp ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EE140; /* 0x005EE1CB: jne 0x5ee140 */
L_005EE1D1:
    edi = POP32_VAL(esp); /* 0x005EE1D1: pop edi */
    esi = POP32_VAL(esp); /* 0x005EE1D2: pop esi */
    eax = ebx; /* 0x005EE1D3: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x005EE1D5: pop ebx */
    esp = ebp; /* 0x005EE1D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EE1D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EE1D9: ret  */
L_005EE1DA:
    eax = MEM32(ebp + 0x8); /* 0x005EE1DA: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x005EE1DD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EE1DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EE1E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EE1F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE1F0u);

L_005EE1F0:
    PUSH32(esp, ebp); /* 0x005EE1F0: push ebp */
    ebp = esp; /* 0x005EE1F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE1F3: push -1 */
    PUSH32(esp, 0x00795843u); /* 0x005EE1F5: push 0x795843 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EE1FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EE200: push eax */
    PUSH32(esp, ecx); /* 0x005EE201: push ecx */
    PUSH32(esp, ebx); /* 0x005EE202: push ebx */
    PUSH32(esp, esi); /* 0x005EE203: push esi */
    PUSH32(esp, edi); /* 0x005EE204: push edi */
    eax = MEM32(0x855000); /* 0x005EE205: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EE20A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EE20C: push eax */
    eax = ebp + (-0xC); /* 0x005EE20D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EE210: mov dword ptr fs:[0], eax */
    ebx = edx; /* 0x005EE216: mov ebx, edx */
    esi = ecx; /* 0x005EE218: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005EE21A: mov dword ptr [ebp - 0x10], esi */
    /* cmp esi, ebx */ /* 0x005EE21D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE286; /* 0x005EE21F: je 0x5ee286 */
L_005EE221:
    edi = MEM32(0x7CC694); /* 0x005EE221: mov edi, dword ptr [0x7cc694] */
    goto L_005EE230; /* 0x005EE227: jmp 0x5ee230 */
L_005EE230:
    MEM32(ebp + (-0x4)) = 0; /* 0x005EE230: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(esi + 0x2C), 0x10u */ /* 0x005EE237: cmp dword ptr [esi + 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EE245; /* 0x005EE23B: jb 0x5ee245 */
L_005EE23D:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x005EE23D: push dword ptr [esi + 0x18] */
    RECOMP_ICALL(edi); /* 0x005EE240: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EE242: add esp, 4 */
    _flag_k = FK_ADD;
L_005EE245:
    MEM32(esi + 0x2C) = 0xFu; /* 0x005EE245: mov dword ptr [esi + 0x2c], 0xf */
    MEM32(esi + 0x28) = 0; /* 0x005EE24C: mov dword ptr [esi + 0x28], 0 */
    MEM8(esi + 0x18) = (uint8_t)(0); /* 0x005EE253: mov byte ptr [esi + 0x18], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EE257: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005EE25E: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EE26B; /* 0x005EE262: jb 0x5ee26b */
L_005EE264:
    PUSH32(esp, MEM32(esi)); /* 0x005EE264: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x005EE266: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EE268: add esp, 4 */
    _flag_k = FK_ADD;
L_005EE26B:
    MEM32(esi + 0x14) = 0xFu; /* 0x005EE26B: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005EE272: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x005EE279: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x48u; /* 0x005EE27C: add esi, 0x48 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = esi; /* 0x005EE27F: mov dword ptr [ebp - 0x10], esi */
    /* cmp esi, ebx */ /* 0x005EE282: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EE230; /* 0x005EE284: jne 0x5ee230 */
L_005EE286:
    ecx = MEM32(ebp + (-0xC)); /* 0x005EE286: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EE289: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EE290: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EE291: pop edi */
    esi = POP32_VAL(esp); /* 0x005EE292: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EE293: pop ebx */
    esp = ebp; /* 0x005EE294: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EE296: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EE297: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EE2A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE2A0u);

L_005EE2A0:
    PUSH32(esp, ebp); /* 0x005EE2A0: push ebp */
    ebp = esp; /* 0x005EE2A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE2A3: push -1 */
    PUSH32(esp, 0x007B1C86u); /* 0x005EE2A5: push 0x7b1c86 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EE2AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EE2B0: push eax */
    PUSH32(esp, ecx); /* 0x005EE2B1: push ecx */
    PUSH32(esp, ebx); /* 0x005EE2B2: push ebx */
    PUSH32(esp, esi); /* 0x005EE2B3: push esi */
    PUSH32(esp, edi); /* 0x005EE2B4: push edi */
    eax = MEM32(0x855000); /* 0x005EE2B5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EE2BA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EE2BC: push eax */
    eax = ebp + (-0xC); /* 0x005EE2BD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EE2C0: mov dword ptr fs:[0], eax */
    ebx = edx; /* 0x005EE2C6: mov ebx, edx */
    esi = ecx; /* 0x005EE2C8: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005EE2CA: mov dword ptr [ebp - 0x10], esi */
    /* cmp esi, ebx */ /* 0x005EE2CD: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE36D; /* 0x005EE2CF: je 0x5ee36d */
L_005EE2D5:
    edi = MEM32(0x7CC694); /* 0x005EE2D5: mov edi, dword ptr [0x7cc694] */
    goto L_005EE2E0; /* 0x005EE2DB: jmp 0x5ee2e0 */
L_005EE2E0:
    MEM32(ebp + (-0x4)) = 0; /* 0x005EE2E0: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(esi + 0x48); /* 0x005EE2E7: mov eax, dword ptr [esi + 0x48] */
    /* test eax, eax */ /* 0x005EE2EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EE309; /* 0x005EE2EC: je 0x5ee309 */
L_005EE2EE:
    PUSH32(esp, eax); /* 0x005EE2EE: push eax */
    RECOMP_ICALL(edi); /* 0x005EE2EF: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EE2F1: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x48) = 0; /* 0x005EE2F4: mov dword ptr [esi + 0x48], 0 */
    MEM32(esi + 0x4C) = 0; /* 0x005EE2FB: mov dword ptr [esi + 0x4c], 0 */
    MEM32(esi + 0x50) = 0; /* 0x005EE302: mov dword ptr [esi + 0x50], 0 */
L_005EE309:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EE309: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(ebp + (-0x10)) = esi; /* 0x005EE310: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 2; /* 0x005EE313: mov dword ptr [ebp - 4], 2 */
    /* cmp MEM32(esi + 0x2C), 0x10u */ /* 0x005EE31A: cmp dword ptr [esi + 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EE328; /* 0x005EE31E: jb 0x5ee328 */
L_005EE320:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x005EE320: push dword ptr [esi + 0x18] */
    RECOMP_ICALL(edi); /* 0x005EE323: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EE325: add esp, 4 */
    _flag_k = FK_ADD;
L_005EE328:
    MEM32(esi + 0x2C) = 0xFu; /* 0x005EE328: mov dword ptr [esi + 0x2c], 0xf */
    MEM32(esi + 0x28) = 0; /* 0x005EE32F: mov dword ptr [esi + 0x28], 0 */
    MEM8(esi + 0x18) = (uint8_t)(0); /* 0x005EE336: mov byte ptr [esi + 0x18], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EE33A: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005EE341: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EE34E; /* 0x005EE345: jb 0x5ee34e */
L_005EE347:
    PUSH32(esp, MEM32(esi)); /* 0x005EE347: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x005EE349: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EE34B: add esp, 4 */
    _flag_k = FK_ADD;
L_005EE34E:
    MEM32(esi + 0x14) = 0xFu; /* 0x005EE34E: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005EE355: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x005EE35C: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x5Cu; /* 0x005EE35F: add esi, 0x5c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = esi; /* 0x005EE362: mov dword ptr [ebp - 0x10], esi */
    /* cmp esi, ebx */ /* 0x005EE365: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EE2E0; /* 0x005EE367: jne 0x5ee2e0 */
L_005EE36D:
    ecx = MEM32(ebp + (-0xC)); /* 0x005EE36D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EE370: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EE377: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EE378: pop edi */
    esi = POP32_VAL(esp); /* 0x005EE379: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EE37A: pop ebx */
    esp = ebp; /* 0x005EE37B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EE37D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EE37E: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EE380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE380u);

L_005EE380:
    PUSH32(esp, ebp); /* 0x005EE380: push ebp */
    ebp = esp; /* 0x005EE381: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE383: push -1 */
    PUSH32(esp, 0x007B1CDEu); /* 0x005EE385: push 0x7b1cde */
    eax = MEM32(FS_BASE + (0)); /* 0x005EE38A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EE390: push eax */
    PUSH32(esp, ecx); /* 0x005EE391: push ecx */
    PUSH32(esp, ebx); /* 0x005EE392: push ebx */
    PUSH32(esp, esi); /* 0x005EE393: push esi */
    PUSH32(esp, edi); /* 0x005EE394: push edi */
    eax = MEM32(0x855000); /* 0x005EE395: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EE39A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EE39C: push eax */
    eax = ebp + (-0xC); /* 0x005EE39D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EE3A0: mov dword ptr fs:[0], eax */
    ebx = edx; /* 0x005EE3A6: mov ebx, edx */
    esi = ecx; /* 0x005EE3A8: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005EE3AA: mov dword ptr [ebp - 0x10], esi */
    /* cmp esi, ebx */ /* 0x005EE3AD: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE457; /* 0x005EE3AF: je 0x5ee457 */
L_005EE3B5:
    edi = MEM32(0x7CC694); /* 0x005EE3B5: mov edi, dword ptr [0x7cc694] */
    goto L_005EE3C0; /* 0x005EE3BB: jmp 0x5ee3c0 */
L_005EE3C0:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EE3C0: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(ebp + (-0x10)) = esi; /* 0x005EE3C7: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x005EE3CA: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(esi + 0x48); /* 0x005EE3D1: mov eax, dword ptr [esi + 0x48] */
    /* test eax, eax */ /* 0x005EE3D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EE3F3; /* 0x005EE3D6: je 0x5ee3f3 */
L_005EE3D8:
    PUSH32(esp, eax); /* 0x005EE3D8: push eax */
    RECOMP_ICALL(edi); /* 0x005EE3D9: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EE3DB: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x48) = 0; /* 0x005EE3DE: mov dword ptr [esi + 0x48], 0 */
    MEM32(esi + 0x4C) = 0; /* 0x005EE3E5: mov dword ptr [esi + 0x4c], 0 */
    MEM32(esi + 0x50) = 0; /* 0x005EE3EC: mov dword ptr [esi + 0x50], 0 */
L_005EE3F3:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EE3F3: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(ebp + (-0x10)) = esi; /* 0x005EE3FA: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 3; /* 0x005EE3FD: mov dword ptr [ebp - 4], 3 */
    /* cmp MEM32(esi + 0x2C), 0x10u */ /* 0x005EE404: cmp dword ptr [esi + 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EE412; /* 0x005EE408: jb 0x5ee412 */
L_005EE40A:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x005EE40A: push dword ptr [esi + 0x18] */
    RECOMP_ICALL(edi); /* 0x005EE40D: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EE40F: add esp, 4 */
    _flag_k = FK_ADD;
L_005EE412:
    MEM32(esi + 0x2C) = 0xFu; /* 0x005EE412: mov dword ptr [esi + 0x2c], 0xf */
    MEM32(esi + 0x28) = 0; /* 0x005EE419: mov dword ptr [esi + 0x28], 0 */
    MEM8(esi + 0x18) = (uint8_t)(0); /* 0x005EE420: mov byte ptr [esi + 0x18], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EE424: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005EE42B: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EE438; /* 0x005EE42F: jb 0x5ee438 */
L_005EE431:
    PUSH32(esp, MEM32(esi)); /* 0x005EE431: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x005EE433: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EE435: add esp, 4 */
    _flag_k = FK_ADD;
L_005EE438:
    MEM32(esi + 0x14) = 0xFu; /* 0x005EE438: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005EE43F: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x005EE446: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005EE449: add esi, 0x70 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = esi; /* 0x005EE44C: mov dword ptr [ebp - 0x10], esi */
    /* cmp esi, ebx */ /* 0x005EE44F: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EE3C0; /* 0x005EE451: jne 0x5ee3c0 */
L_005EE457:
    ecx = MEM32(ebp + (-0xC)); /* 0x005EE457: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EE45A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EE461: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EE462: pop edi */
    esi = POP32_VAL(esp); /* 0x005EE463: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EE464: pop ebx */
    esp = ebp; /* 0x005EE465: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EE467: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EE468: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EE470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE470u);

L_005EE470:
    PUSH32(esp, ebp); /* 0x005EE470: push ebp */
    ebp = esp; /* 0x005EE471: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005EE473: push esi */
    PUSH32(esp, edi); /* 0x005EE474: push edi */
    edi = MEM32(ebp + 0x8); /* 0x005EE475: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x005EE478: mov esi, ecx */
    eax = MEM32(edi); /* 0x005EE47A: mov eax, dword ptr [edi] */
    ecx = esi + 0x8; /* 0x005EE47C: lea ecx, [esi + 8] */
    MEM32(esi) = eax; /* 0x005EE47F: mov dword ptr [esi], eax */
    eax = MEM32(edi + 0x4); /* 0x005EE481: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x005EE484: mov dword ptr [esi + 4], eax */
    eax = edi + 0x8; /* 0x005EE487: lea eax, [edi + 8] */
    /* cmp ecx, eax */ /* 0x005EE48A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE498; /* 0x005EE48C: je 0x5ee498 */
L_005EE48E:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE48E: push -1 */
    PUSH32(esp, 0); /* 0x005EE490: push 0 */
    PUSH32(esp, eax); /* 0x005EE492: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EE493: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EE498:
    eax = edi + 0x20; /* 0x005EE498: lea eax, [edi + 0x20] */
    ecx = esi + 0x20; /* 0x005EE49B: lea ecx, [esi + 0x20] */
    /* cmp ecx, eax */ /* 0x005EE49E: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE4AC; /* 0x005EE4A0: je 0x5ee4ac */
L_005EE4A2:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE4A2: push -1 */
    PUSH32(esp, 0); /* 0x005EE4A4: push 0 */
    PUSH32(esp, eax); /* 0x005EE4A6: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EE4A7: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EE4AC:
    eax = edi + 0x38; /* 0x005EE4AC: lea eax, [edi + 0x38] */
    ecx = esi + 0x38; /* 0x005EE4AF: lea ecx, [esi + 0x38] */
    /* cmp ecx, eax */ /* 0x005EE4B2: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE4C0; /* 0x005EE4B4: je 0x5ee4c0 */
L_005EE4B6:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE4B6: push -1 */
    PUSH32(esp, 0); /* 0x005EE4B8: push 0 */
    PUSH32(esp, eax); /* 0x005EE4BA: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EE4BB: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EE4C0:
    eax = edi + 0x50; /* 0x005EE4C0: lea eax, [edi + 0x50] */
    ecx = esi + 0x50; /* 0x005EE4C3: lea ecx, [esi + 0x50] */
    /* cmp ecx, eax */ /* 0x005EE4C6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE4D4; /* 0x005EE4C8: je 0x5ee4d4 */
L_005EE4CA:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE4CA: push -1 */
    PUSH32(esp, 0); /* 0x005EE4CC: push 0 */
    PUSH32(esp, eax); /* 0x005EE4CE: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EE4CF: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EE4D4:
    SET_LO16(eax, MEM16(edi + 0x68)); /* 0x005EE4D4: mov ax, word ptr [edi + 0x68] */
    MEM16(esi + 0x68) = (uint16_t)(LO16(eax)); /* 0x005EE4D8: mov word ptr [esi + 0x68], ax */
    eax = MEM32(edi + 0x6C); /* 0x005EE4DC: mov eax, dword ptr [edi + 0x6c] */
    MEM32(esi + 0x6C) = eax; /* 0x005EE4DF: mov dword ptr [esi + 0x6c], eax */
    eax = esi; /* 0x005EE4E2: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x005EE4E4: pop edi */
    esi = POP32_VAL(esp); /* 0x005EE4E5: pop esi */
    ebp = POP32_VAL(esp); /* 0x005EE4E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EE4E7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EE4F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE4F0u);

L_005EE4F0:
    PUSH32(esp, ebp); /* 0x005EE4F0: push ebp */
    ebp = esp; /* 0x005EE4F1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005EE4F3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x005EE4F4: mov esi, dword ptr [ebp + 8] */
    ecx = esi + 0x10; /* 0x005EE4F7: lea ecx, [esi + 0x10] */
    RECOMP_CALL(sub_00441610); /* 0x005EE4FA: call 0x441610 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x005EE4FF: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EE500: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EE506: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x005EE509: pop esi */
    ebp = POP32_VAL(esp); /* 0x005EE50A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EE50B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EE510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE510u);

L_005EE510:
    PUSH32(esp, ebp); /* 0x005EE510: push ebp */
    ebp = esp; /* 0x005EE511: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE513: push -1 */
    PUSH32(esp, 0x007B1D00u); /* 0x005EE515: push 0x7b1d00 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EE51A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EE520: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EE521: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EE524: push ebx */
    PUSH32(esp, esi); /* 0x005EE525: push esi */
    PUSH32(esp, edi); /* 0x005EE526: push edi */
    eax = MEM32(0x855000); /* 0x005EE527: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EE52C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EE52E: push eax */
    eax = ebp + (-0xC); /* 0x005EE52F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EE532: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005EE538: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x005EE53B: mov edi, ecx */
    PUSH32(esp, 0x40u); /* 0x005EE53D: push 0x40 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005EE53F: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EE545: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005EE548: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x005EE54A: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x005EE54D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EE557; /* 0x005EE54F: jne 0x5ee557 */
L_005EE551:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005EE551: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005EE557:
    MEM32(ebp + (-0x4)) = 0; /* 0x005EE557: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, edi); /* 0x005EE55E: push edi */
    PUSH32(esp, esi); /* 0x005EE55F: push esi */
    RECOMP_CALL(sub_0040BAA0); /* 0x005EE560: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005EE565: push edi */
    eax = esi + 0x4; /* 0x005EE566: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x005EE569: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005EE56A: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005EE56F: push edi */
    eax = esi + 0x8; /* 0x005EE570: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x005EE573: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005EE574: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EE579: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005EE580: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EE582: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EE585: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EE58C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EE58D: pop edi */
    esi = POP32_VAL(esp); /* 0x005EE58E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EE58F: pop ebx */
    esp = ebp; /* 0x005EE590: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EE592: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EE593: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EE594(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE594u);

L_005EE594:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005EE594: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EE597: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EE59D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005EE5A0: push 0 */
    PUSH32(esp, 0); /* 0x005EE5A2: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005EE5A4: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005EE5A9u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EE5B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE5B0u);

L_005EE5B0:
    PUSH32(esp, ebp); /* 0x005EE5B0: push ebp */
    ebp = esp; /* 0x005EE5B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE5B3: push -1 */
    PUSH32(esp, 0x007B1D2Bu); /* 0x005EE5B5: push 0x7b1d2b */
    eax = MEM32(FS_BASE + (0)); /* 0x005EE5BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EE5C0: push eax */
    PUSH32(esp, esi); /* 0x005EE5C1: push esi */
    eax = MEM32(0x855000); /* 0x005EE5C2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EE5C7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EE5C9: push eax */
    eax = ebp + (-0xC); /* 0x005EE5CA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EE5CD: mov dword ptr fs:[0], eax */
    esi = MEM32(ebp + 0x8); /* 0x005EE5D3: mov esi, dword ptr [ebp + 8] */
    ecx = esi + 0x10; /* 0x005EE5D6: lea ecx, [esi + 0x10] */
    MEM32(ebp + 0x8) = ecx; /* 0x005EE5D9: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EE5DC: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x005EE5E3: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005E3440); /* 0x005EE5E6: call 0x5e3440 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x005EE5EB: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EE5EC: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EE5F2: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005EE5F5: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EE5F8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EE5FF: pop ecx */
    esi = POP32_VAL(esp); /* 0x005EE600: pop esi */
    esp = ebp; /* 0x005EE601: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EE603: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EE604: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EE610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE610u);

L_005EE610:
    PUSH32(esp, ebp); /* 0x005EE610: push ebp */
    ebp = esp; /* 0x005EE611: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE613: push -1 */
    PUSH32(esp, 0x007B1D50u); /* 0x005EE615: push 0x7b1d50 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EE61A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EE620: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EE621: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EE624: push ebx */
    PUSH32(esp, esi); /* 0x005EE625: push esi */
    PUSH32(esp, edi); /* 0x005EE626: push edi */
    eax = MEM32(0x855000); /* 0x005EE627: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EE62C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EE62E: push eax */
    eax = ebp + (-0xC); /* 0x005EE62F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EE632: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005EE638: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x005EE63B: mov edi, ecx */
    PUSH32(esp, 0x30u); /* 0x005EE63D: push 0x30 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005EE63F: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EE645: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005EE648: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x005EE64A: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x005EE64D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EE657; /* 0x005EE64F: jne 0x5ee657 */
L_005EE651:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005EE651: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005EE657:
    MEM32(ebp + (-0x4)) = 0; /* 0x005EE657: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, edi); /* 0x005EE65E: push edi */
    PUSH32(esp, esi); /* 0x005EE65F: push esi */
    RECOMP_CALL(sub_0040BAA0); /* 0x005EE660: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005EE665: push edi */
    eax = esi + 0x4; /* 0x005EE666: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x005EE669: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005EE66A: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005EE66F: push edi */
    eax = esi + 0x8; /* 0x005EE670: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x005EE673: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005EE674: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EE679: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005EE680: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EE682: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EE685: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EE68C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EE68D: pop edi */
    esi = POP32_VAL(esp); /* 0x005EE68E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EE68F: pop ebx */
    esp = ebp; /* 0x005EE690: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EE692: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EE693: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EE694(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE694u);

L_005EE694:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005EE694: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EE697: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EE69D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005EE6A0: push 0 */
    PUSH32(esp, 0); /* 0x005EE6A2: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005EE6A4: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005EE6A9u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005EE6B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE6B0u);

L_005EE6B0:
    PUSH32(esp, ebp); /* 0x005EE6B0: push ebp */
    ebp = esp; /* 0x005EE6B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE6B3: push -1 */
    PUSH32(esp, 0x007B1D83u); /* 0x005EE6B5: push 0x7b1d83 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EE6BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EE6C0: push eax */
    PUSH32(esp, ecx); /* 0x005EE6C1: push ecx */
    PUSH32(esp, esi); /* 0x005EE6C2: push esi */
    PUSH32(esp, edi); /* 0x005EE6C3: push edi */
    eax = MEM32(0x855000); /* 0x005EE6C4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EE6C9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EE6CB: push eax */
    eax = ebp + (-0xC); /* 0x005EE6CC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EE6CF: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005EE6D5: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x005EE6D7: mov dword ptr [ebp - 0x10], edi */
    esi = MEM32(ebp + 0x8); /* 0x005EE6DA: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE6DD: push -1 */
    PUSH32(esp, 0); /* 0x005EE6DF: push 0 */
    MEM32(edi + 0x14) = 0xFu; /* 0x005EE6E1: mov dword ptr [edi + 0x14], 0xf */
    MEM32(edi + 0x10) = 0; /* 0x005EE6E8: mov dword ptr [edi + 0x10], 0 */
    PUSH32(esp, esi); /* 0x005EE6EF: push esi */
    MEM8(edi) = (uint8_t)(0); /* 0x005EE6F0: mov byte ptr [edi], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005EE6F3: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005EE6F8: mov dword ptr [ebp - 4], 0 */
    ecx = edi + 0x18; /* 0x005EE6FF: lea ecx, [edi + 0x18] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE702: push -1 */
    PUSH32(esp, 0); /* 0x005EE704: push 0 */
    eax = esi + 0x18; /* 0x005EE706: lea eax, [esi + 0x18] */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005EE709: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005EE710: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x005EE717: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x005EE718: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005EE71B: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005EE720: mov byte ptr [ebp - 4], 1 */
    eax = MEM32(esi + 0x30); /* 0x005EE724: mov eax, dword ptr [esi + 0x30] */
    MEM32(edi + 0x30) = eax; /* 0x005EE727: mov dword ptr [edi + 0x30], eax */
    _xmm[0] = xmm_ld(esi + 0x34); /* 0x005EE72A: movdqu xmm0, xmmword ptr [esi + 0x34] */
    xmm_st(edi + 0x34, _xmm[0]); /* 0x005EE72F: movdqu xmmword ptr [edi + 0x34], xmm0 */
    eax = MEM32(esi + 0x44); /* 0x005EE734: mov eax, dword ptr [esi + 0x44] */
    MEM32(edi + 0x44) = eax; /* 0x005EE737: mov dword ptr [edi + 0x44], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EE73A: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x005EE741: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EE743: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EE746: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EE74D: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EE74E: pop edi */
    esi = POP32_VAL(esp); /* 0x005EE74F: pop esi */
    esp = ebp; /* 0x005EE750: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EE752: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EE753: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EE760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE760u);

L_005EE760:
    PUSH32(esp, ebp); /* 0x005EE760: push ebp */
    ebp = esp; /* 0x005EE761: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE763: push -1 */
    PUSH32(esp, 0x007B1DBBu); /* 0x005EE765: push 0x7b1dbb */
    eax = MEM32(FS_BASE + (0)); /* 0x005EE76A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EE770: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005EE771: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005EE774: push esi */
    PUSH32(esp, edi); /* 0x005EE775: push edi */
    eax = MEM32(0x855000); /* 0x005EE776: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EE77B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EE77D: push eax */
    eax = ebp + (-0xC); /* 0x005EE77E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EE781: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005EE787: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x005EE789: mov dword ptr [ebp - 0x10], edi */
    esi = MEM32(ebp + 0x8); /* 0x005EE78C: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005EE78F: push esi */
    MEM32(ebp + (-0x14)) = edi; /* 0x005EE790: mov dword ptr [ebp - 0x14], edi */
    RECOMP_CALL(sub_005EE6B0); /* 0x005EE793: call 0x5ee6b0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005EE798: mov dword ptr [ebp - 4], 0 */
    eax = esi + 0x48; /* 0x005EE79F: lea eax, [esi + 0x48] */
    PUSH32(esp, eax); /* 0x005EE7A2: push eax */
    ecx = edi + 0x48; /* 0x005EE7A3: lea ecx, [edi + 0x48] */
    RECOMP_CALL(sub_004E6D70); /* 0x005EE7A6: call 0x4e6d70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005EE7AB: mov byte ptr [ebp - 4], 1 */
    eax = MEM32(esi + 0x54); /* 0x005EE7AF: mov eax, dword ptr [esi + 0x54] */
    MEM32(edi + 0x54) = eax; /* 0x005EE7B2: mov dword ptr [edi + 0x54], eax */
    eax = MEM32(esi + 0x58); /* 0x005EE7B5: mov eax, dword ptr [esi + 0x58] */
    MEM32(edi + 0x58) = eax; /* 0x005EE7B8: mov dword ptr [edi + 0x58], eax */
    MEM32(ebp + (-0x4)) = 2; /* 0x005EE7BB: mov dword ptr [ebp - 4], 2 */
    eax = MEM32(esi + 0x60); /* 0x005EE7C2: mov eax, dword ptr [esi + 0x60] */
    MEM32(edi + 0x60) = eax; /* 0x005EE7C5: mov dword ptr [edi + 0x60], eax */
    eax = MEM32(esi + 0x64); /* 0x005EE7C8: mov eax, dword ptr [esi + 0x64] */
    MEM32(edi + 0x64) = eax; /* 0x005EE7CB: mov dword ptr [edi + 0x64], eax */
    eax = MEM32(esi + 0x68); /* 0x005EE7CE: mov eax, dword ptr [esi + 0x68] */
    MEM32(edi + 0x68) = eax; /* 0x005EE7D1: mov dword ptr [edi + 0x68], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EE7D4: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x005EE7DB: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EE7DD: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EE7E0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EE7E7: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EE7E8: pop edi */
    esi = POP32_VAL(esp); /* 0x005EE7E9: pop esi */
    esp = ebp; /* 0x005EE7EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EE7EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EE7ED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EE7F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE7F0u);

L_005EE7F0:
    PUSH32(esp, ebp); /* 0x005EE7F0: push ebp */
    ebp = esp; /* 0x005EE7F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE7F3: push -1 */
    PUSH32(esp, 0x007AFE86u); /* 0x005EE7F5: push 0x7afe86 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EE7FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EE800: push eax */
    PUSH32(esp, ecx); /* 0x005EE801: push ecx */
    PUSH32(esp, esi); /* 0x005EE802: push esi */
    PUSH32(esp, edi); /* 0x005EE803: push edi */
    eax = MEM32(0x855000); /* 0x005EE804: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EE809: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EE80B: push eax */
    eax = ebp + (-0xC); /* 0x005EE80C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EE80F: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005EE815: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x005EE817: mov dword ptr [ebp - 0x10], edi */
    esi = MEM32(ebp + 0x8); /* 0x005EE81A: mov esi, dword ptr [ebp + 8] */
    ecx = edi + 0x8; /* 0x005EE81D: lea ecx, [edi + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE820: push -1 */
    PUSH32(esp, 0); /* 0x005EE822: push 0 */
    eax = MEM32(esi); /* 0x005EE824: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x005EE826: mov dword ptr [edi], eax */
    eax = MEM32(esi + 0x4); /* 0x005EE828: mov eax, dword ptr [esi + 4] */
    MEM32(edi + 0x4) = eax; /* 0x005EE82B: mov dword ptr [edi + 4], eax */
    eax = esi + 0x8; /* 0x005EE82E: lea eax, [esi + 8] */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005EE831: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005EE838: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x005EE83F: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x005EE840: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005EE843: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005EE848: mov dword ptr [ebp - 4], 0 */
    ecx = edi + 0x20; /* 0x005EE84F: lea ecx, [edi + 0x20] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE852: push -1 */
    PUSH32(esp, 0); /* 0x005EE854: push 0 */
    eax = esi + 0x20; /* 0x005EE856: lea eax, [esi + 0x20] */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005EE859: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005EE860: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x005EE867: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x005EE868: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005EE86B: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EE870: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x005EE877: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EE879: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EE87C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EE883: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EE884: pop edi */
    esi = POP32_VAL(esp); /* 0x005EE885: pop esi */
    esp = ebp; /* 0x005EE886: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EE888: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005EE889: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005EE890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EE890u);

L_005EE890:
    PUSH32(esp, ebp); /* 0x005EE890: push ebp */
    ebp = esp; /* 0x005EE891: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EE893: push -1 */
    PUSH32(esp, 0x007B1DEBu); /* 0x005EE895: push 0x7b1deb */
    eax = MEM32(FS_BASE + (0)); /* 0x005EE89A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EE8A0: push eax */
    PUSH32(esp, ebx); /* 0x005EE8A1: push ebx */
    PUSH32(esp, esi); /* 0x005EE8A2: push esi */
    PUSH32(esp, edi); /* 0x005EE8A3: push edi */
    eax = MEM32(0x855000); /* 0x005EE8A4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EE8A9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EE8AB: push eax */
    eax = ebp + (-0xC); /* 0x005EE8AC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EE8AF: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005EE8B5: mov edi, ecx */
    eax = MEM32(edi + 0x4); /* 0x005EE8B7: mov eax, dword ptr [edi + 4] */
    /* cmp eax, 0x05555554u */ /* 0x005EE8BA: cmp eax, 0x5555554 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x05555554u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EE8EE; /* 0x005EE8BF: jb 0x5ee8ee */
L_005EE8C1:
    esi = MEM32(ebp + 0x18); /* 0x005EE8C1: mov esi, dword ptr [ebp + 0x18] */
    ecx = esi + 0x10; /* 0x005EE8C4: lea ecx, [esi + 0x10] */
    MEM32(ebp + 0xC) = ecx; /* 0x005EE8C7: mov dword ptr [ebp + 0xc], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EE8CA: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x005EE8D1: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005E3440); /* 0x005EE8D4: call 0x5e3440 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x005EE8D9: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EE8DA: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EE8E0: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x007CD71Cu); /* 0x005EE8E3: push 0x7cd71c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005EE8E8: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005EE8EE:
    ebx = MEM32(ebp + 0x18); /* 0x005EE8EE: mov ebx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005EE8F1: inc eax */
    _flag_k = FK_INC;
    MEM32(edi + 0x4) = eax; /* 0x005EE8F2: mov dword ptr [edi + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x005EE8F5: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = eax; /* 0x005EE8F8: mov dword ptr [ebx + 4], eax */
    ecx = MEM32(edi); /* 0x005EE8FB: mov ecx, dword ptr [edi] */
    /* cmp eax, ecx */ /* 0x005EE8FD: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EE90F; /* 0x005EE8FF: jne 0x5ee90f */
L_005EE901:
    MEM32(ecx + 0x4) = ebx; /* 0x005EE901: mov dword ptr [ecx + 4], ebx */
    eax = MEM32(edi); /* 0x005EE904: mov eax, dword ptr [edi] */
    MEM32(eax) = ebx; /* 0x005EE906: mov dword ptr [eax], ebx */
    eax = MEM32(edi); /* 0x005EE908: mov eax, dword ptr [edi] */
    MEM32(eax + 0x8) = ebx; /* 0x005EE90A: mov dword ptr [eax + 8], ebx */
    goto L_005EE92E; /* 0x005EE90D: jmp 0x5ee92e */
L_005EE90F:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x005EE90F: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE921; /* 0x005EE913: je 0x5ee921 */
L_005EE915:
    MEM32(eax) = ebx; /* 0x005EE915: mov dword ptr [eax], ebx */
    ecx = MEM32(edi); /* 0x005EE917: mov ecx, dword ptr [edi] */
    /* cmp eax, MEM32(ecx) */ /* 0x005EE919: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EE92E; /* 0x005EE91B: jne 0x5ee92e */
L_005EE91D:
    MEM32(ecx) = ebx; /* 0x005EE91D: mov dword ptr [ecx], ebx */
    goto L_005EE92E; /* 0x005EE91F: jmp 0x5ee92e */
L_005EE921:
    MEM32(eax + 0x8) = ebx; /* 0x005EE921: mov dword ptr [eax + 8], ebx */
    ecx = MEM32(edi); /* 0x005EE924: mov ecx, dword ptr [edi] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x005EE926: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EE92E; /* 0x005EE929: jne 0x5ee92e */
L_005EE92B:
    MEM32(ecx + 0x8) = ebx; /* 0x005EE92B: mov dword ptr [ecx + 8], ebx */
L_005EE92E:
    eax = MEM32(ebx + 0x4); /* 0x005EE92E: mov eax, dword ptr [ebx + 4] */
    esi = ebx; /* 0x005EE931: mov esi, ebx */
    /* cmp MEM8(eax + 0xC), 0 */ /* 0x005EE933: cmp byte ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EEA4A; /* 0x005EE937: jne 0x5eea4a */
L_005EE93D:
    ecx = ecx; /* 0x005EE93D: lea ecx, [ecx] */
L_005EE940:
    eax = MEM32(esi + 0x4); /* 0x005EE940: mov eax, dword ptr [esi + 4] */
    edx = MEM32(eax + 0x4); /* 0x005EE943: mov edx, dword ptr [eax + 4] */
    ecx = MEM32(edx); /* 0x005EE946: mov ecx, dword ptr [edx] */
    /* cmp eax, ecx */ /* 0x005EE948: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EE9C0; /* 0x005EE94A: jne 0x5ee9c0 */
L_005EE94C:
    ecx = MEM32(edx + 0x8); /* 0x005EE94C: mov ecx, dword ptr [edx + 8] */
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005EE94F: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE9C6; /* 0x005EE953: je 0x5ee9c6 */
L_005EE955:
    /* cmp esi, MEM32(eax + 0x8) */ /* 0x005EE955: cmp esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EE964; /* 0x005EE958: jne 0x5ee964 */
L_005EE95A:
    esi = eax; /* 0x005EE95A: mov esi, eax */
    ecx = edi; /* 0x005EE95C: mov ecx, edi */
    PUSH32(esp, esi); /* 0x005EE95E: push esi */
    RECOMP_CALL(sub_0040B6F0); /* 0x005EE95F: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
L_005EE964:
    eax = MEM32(esi + 0x4); /* 0x005EE964: mov eax, dword ptr [esi + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EE967: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x005EE96B: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x005EE96E: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x005EE971: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x005EE975: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x005EE978: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx); /* 0x005EE97B: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0x8); /* 0x005EE97D: mov eax, dword ptr [edx + 8] */
    MEM32(ecx) = eax; /* 0x005EE980: mov dword ptr [ecx], eax */
    eax = MEM32(edx + 0x8); /* 0x005EE982: mov eax, dword ptr [edx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EE985: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EE98E; /* 0x005EE989: jne 0x5ee98e */
L_005EE98B:
    MEM32(eax + 0x4) = ecx; /* 0x005EE98B: mov dword ptr [eax + 4], ecx */
L_005EE98E:
    eax = MEM32(ecx + 0x4); /* 0x005EE98E: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x005EE991: mov dword ptr [edx + 4], eax */
    eax = MEM32(edi); /* 0x005EE994: mov eax, dword ptr [edi] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x005EE996: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EE9A6; /* 0x005EE999: jne 0x5ee9a6 */
L_005EE99B:
    MEM32(eax + 0x4) = edx; /* 0x005EE99B: mov dword ptr [eax + 4], edx */
    MEM32(edx + 0x8) = ecx; /* 0x005EE99E: mov dword ptr [edx + 8], ecx */
    goto L_005EEA3A; /* 0x005EE9A1: jmp 0x5eea3a */
L_005EE9A6:
    eax = MEM32(ecx + 0x4); /* 0x005EE9A6: mov eax, dword ptr [ecx + 4] */
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x005EE9A9: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EE9B9; /* 0x005EE9AC: jne 0x5ee9b9 */
L_005EE9AE:
    MEM32(eax + 0x8) = edx; /* 0x005EE9AE: mov dword ptr [eax + 8], edx */
    MEM32(edx + 0x8) = ecx; /* 0x005EE9B1: mov dword ptr [edx + 8], ecx */
    goto L_005EEA3A; /* 0x005EE9B4: jmp 0x5eea3a */
L_005EE9B9:
    MEM32(eax) = edx; /* 0x005EE9B9: mov dword ptr [eax], edx */
    MEM32(edx + 0x8) = ecx; /* 0x005EE9BB: mov dword ptr [edx + 8], ecx */
    goto L_005EEA3A; /* 0x005EE9BE: jmp 0x5eea3a */
L_005EE9C0:
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005EE9C0: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EE9E0; /* 0x005EE9C4: jne 0x5ee9e0 */
L_005EE9C6:
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EE9C6: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x005EE9CA: mov byte ptr [ecx + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x005EE9CE: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x005EE9D1: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x005EE9D4: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x005EE9D8: mov eax, dword ptr [esi + 4] */
    esi = MEM32(eax + 0x4); /* 0x005EE9DB: mov esi, dword ptr [eax + 4] */
    goto L_005EEA3D; /* 0x005EE9DE: jmp 0x5eea3d */
L_005EE9E0:
    /* cmp esi, MEM32(eax) */ /* 0x005EE9E0: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EE9EE; /* 0x005EE9E2: jne 0x5ee9ee */
L_005EE9E4:
    esi = eax; /* 0x005EE9E4: mov esi, eax */
    ecx = edi; /* 0x005EE9E6: mov ecx, edi */
    PUSH32(esp, esi); /* 0x005EE9E8: push esi */
    RECOMP_CALL(sub_0040B750); /* 0x005EE9E9: call 0x40b750 */
    RECOMP_FLAGS_IN();
L_005EE9EE:
    eax = MEM32(esi + 0x4); /* 0x005EE9EE: mov eax, dword ptr [esi + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EE9F1: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x005EE9F5: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x005EE9F8: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x005EE9FB: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x005EE9FF: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x005EEA02: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx + 0x8); /* 0x005EEA05: mov edx, dword ptr [ecx + 8] */
    eax = MEM32(edx); /* 0x005EEA08: mov eax, dword ptr [edx] */
    MEM32(ecx + 0x8) = eax; /* 0x005EEA0A: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx); /* 0x005EEA0D: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EEA0F: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EEA18; /* 0x005EEA13: jne 0x5eea18 */
L_005EEA15:
    MEM32(eax + 0x4) = ecx; /* 0x005EEA15: mov dword ptr [eax + 4], ecx */
L_005EEA18:
    eax = MEM32(ecx + 0x4); /* 0x005EEA18: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x005EEA1B: mov dword ptr [edx + 4], eax */
    eax = MEM32(edi); /* 0x005EEA1E: mov eax, dword ptr [edi] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x005EEA20: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EEA2A; /* 0x005EEA23: jne 0x5eea2a */
L_005EEA25:
    MEM32(eax + 0x4) = edx; /* 0x005EEA25: mov dword ptr [eax + 4], edx */
    goto L_005EEA38; /* 0x005EEA28: jmp 0x5eea38 */
L_005EEA2A:
    eax = MEM32(ecx + 0x4); /* 0x005EEA2A: mov eax, dword ptr [ecx + 4] */
    /* cmp ecx, MEM32(eax) */ /* 0x005EEA2D: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EEA35; /* 0x005EEA2F: jne 0x5eea35 */
L_005EEA31:
    MEM32(eax) = edx; /* 0x005EEA31: mov dword ptr [eax], edx */
    goto L_005EEA38; /* 0x005EEA33: jmp 0x5eea38 */
L_005EEA35:
    MEM32(eax + 0x8) = edx; /* 0x005EEA35: mov dword ptr [eax + 8], edx */
L_005EEA38:
    MEM32(edx) = ecx; /* 0x005EEA38: mov dword ptr [edx], ecx */
L_005EEA3A:
    MEM32(ecx + 0x4) = edx; /* 0x005EEA3A: mov dword ptr [ecx + 4], edx */
L_005EEA3D:
    eax = MEM32(esi + 0x4); /* 0x005EEA3D: mov eax, dword ptr [esi + 4] */
    /* cmp MEM8(eax + 0xC), 0 */ /* 0x005EEA40: cmp byte ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EE940; /* 0x005EEA44: je 0x5ee940 */
L_005EEA4A:
    eax = MEM32(edi); /* 0x005EEA4A: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x4); /* 0x005EEA4C: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EEA4F: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(ebp + 0x8); /* 0x005EEA53: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ebx; /* 0x005EEA56: mov dword ptr [eax], ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EEA58: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EEA5B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EEA62: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EEA63: pop edi */
    esi = POP32_VAL(esp); /* 0x005EEA64: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EEA65: pop ebx */
    esp = ebp; /* 0x005EEA66: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EEA68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x005EEA69: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_005EEA70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EEA70u);

L_005EEA70:
    PUSH32(esp, ebp); /* 0x005EEA70: push ebp */
    ebp = esp; /* 0x005EEA71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EEA73: push -1 */
    PUSH32(esp, 0x007B1E5Au); /* 0x005EEA75: push 0x7b1e5a */
    eax = MEM32(FS_BASE + (0)); /* 0x005EEA7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EEA80: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x32Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x32Cu; /* 0x005EEA81: sub esp, 0x32c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005EEA87: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EEA8C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005EEA8E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005EEA91: push ebx */
    PUSH32(esp, esi); /* 0x005EEA92: push esi */
    PUSH32(esp, edi); /* 0x005EEA93: push edi */
    PUSH32(esp, eax); /* 0x005EEA94: push eax */
    eax = ebp + (-0xC); /* 0x005EEA95: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EEA98: mov dword ptr fs:[0], eax */
    edi = edx; /* 0x005EEA9E: mov edi, edx */
    MEM32(ebp + (-0x334)) = edi; /* 0x005EEAA0: mov dword ptr [ebp - 0x334], edi */
    MEM32(ebp + (-0x338)) = ecx; /* 0x005EEAA6: mov dword ptr [ebp - 0x338], ecx */
    ebx = MEM32(ebp + 0x8); /* 0x005EEAAC: mov ebx, dword ptr [ebp + 8] */
    eax = 0x92492493u; /* 0x005EEAAF: mov eax, 0x92492493 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005EEAB4: push dword ptr [ebp + 0xc] */
    ecx = ebx; /* 0x005EEAB7: mov ecx, ebx */
    MEM32(ebp + (-0x330)) = ebx; /* 0x005EEAB9: mov dword ptr [ebp - 0x330], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x005EEABF: sub ecx, edi */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005EEAC1: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005EEAC3: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x005EEAC5: mov ecx, edi */
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005EEAC7: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005EEACA: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005EEACC: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005EEACC: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005EEACF: add eax, edx */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x005EEAD1: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x005EEAD2: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x005EEAD4: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    esi = (uint32_t)((int32_t)eax * (int32_t)0x70u); /* 0x005EEAD6: imul esi, eax, 0x70 */
    eax = ebx + (-0x70); /* 0x005EEAD9: lea eax, [ebx - 0x70] */
    PUSH32(esp, eax); /* 0x005EEADC: push eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x005EEADD: add esi, edi */
    _flag_k = FK_ADD;
    edx = esi; /* 0x005EEADF: mov edx, esi */
    RECOMP_CALL(sub_005EF400); /* 0x005EEAE1: call 0x5ef400 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005EEAE6: add esp, 8 */
    _flag_k = FK_ADD;
    edi = esi + 0x70; /* 0x005EEAE9: lea edi, [esi + 0x70] */
    MEM32(ebp + (-0x32C)) = edi; /* 0x005EEAEC: mov dword ptr [ebp - 0x32c], edi */
    /* cmp MEM32(ebp + (-0x334)), esi */ /* 0x005EEAF2: cmp dword ptr [ebp - 0x334], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x334))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EEB2B; /* 0x005EEAF8: jae 0x5eeb2b */
L_005EEAFA:
    edi = MEM32(ebp + (-0x334)); /* 0x005EEAFA: mov edi, dword ptr [ebp - 0x334] */
L_005EEB00:
    PUSH32(esp, esi); /* 0x005EEB00: push esi */
    ebx = esi + (-0x70); /* 0x005EEB01: lea ebx, [esi - 0x70] */
    PUSH32(esp, ebx); /* 0x005EEB04: push ebx */
    RECOMP_CALL(sub_005E52B0); /* 0x005EEB05: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EEB0A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EEB1F; /* 0x005EEB0C: jne 0x5eeb1f */
L_005EEB0E:
    PUSH32(esp, ebx); /* 0x005EEB0E: push ebx */
    PUSH32(esp, esi); /* 0x005EEB0F: push esi */
    RECOMP_CALL(sub_005E52B0); /* 0x005EEB10: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EEB15: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EEB1F; /* 0x005EEB17: jne 0x5eeb1f */
L_005EEB19:
    esi = ebx; /* 0x005EEB19: mov esi, ebx */
    /* cmp edi, esi */ /* 0x005EEB1B: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005EEB00; /* 0x005EEB1D: jb 0x5eeb00 */
L_005EEB1F:
    edi = MEM32(ebp + (-0x32C)); /* 0x005EEB1F: mov edi, dword ptr [ebp - 0x32c] */
    ebx = MEM32(ebp + (-0x330)); /* 0x005EEB25: mov ebx, dword ptr [ebp - 0x330] */
L_005EEB2B:
    /* cmp edi, ebx */ /* 0x005EEB2B: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EEB53; /* 0x005EEB2D: jae 0x5eeb53 */
L_005EEB2F:
    /* nop */ /* 0x005EEB2F: nop  */
L_005EEB30:
    PUSH32(esp, esi); /* 0x005EEB30: push esi */
    PUSH32(esp, edi); /* 0x005EEB31: push edi */
    RECOMP_CALL(sub_005E52B0); /* 0x005EEB32: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EEB37: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EEB4D; /* 0x005EEB39: jne 0x5eeb4d */
L_005EEB3B:
    PUSH32(esp, edi); /* 0x005EEB3B: push edi */
    PUSH32(esp, esi); /* 0x005EEB3C: push esi */
    RECOMP_CALL(sub_005E52B0); /* 0x005EEB3D: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EEB42: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EEB4D; /* 0x005EEB44: jne 0x5eeb4d */
L_005EEB46:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x70u; /* 0x005EEB46: add edi, 0x70 */
    _flag_k = FK_ADD;
    /* cmp edi, ebx */ /* 0x005EEB49: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005EEB30; /* 0x005EEB4B: jb 0x5eeb30 */
L_005EEB4D:
    MEM32(ebp + (-0x32C)) = edi; /* 0x005EEB4D: mov dword ptr [ebp - 0x32c], edi */
L_005EEB53:
    eax = esi; /* 0x005EEB53: mov eax, esi */
    ebx = edi; /* 0x005EEB55: mov ebx, edi */
    MEM32(ebp + (-0x324)) = eax; /* 0x005EEB57: mov dword ptr [ebp - 0x324], eax */
L_005EEB5D:
    MEM32(ebp + (-0x328)) = ebx; /* 0x005EEB5D: mov dword ptr [ebp - 0x328], ebx */
L_005EEB63:
    /* cmp ebx, MEM32(ebp + (-0x330)) */ /* 0x005EEB63: cmp ebx, dword ptr [ebp - 0x330] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x330)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005EEC02; /* 0x005EEB69: jae 0x5eec02 */
L_005EEB6F:
    ecx = edi + (-0x70); /* 0x005EEB6F: lea ecx, [edi - 0x70] */
    MEM32(ebp + (-0x328)) = ecx; /* 0x005EEB72: mov dword ptr [ebp - 0x328], ecx */
L_005EEB78:
    PUSH32(esp, ebx); /* 0x005EEB78: push ebx */
    PUSH32(esp, esi); /* 0x005EEB79: push esi */
    RECOMP_CALL(sub_005E52B0); /* 0x005EEB7A: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EEB7F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EEBE5; /* 0x005EEB81: jne 0x5eebe5 */
L_005EEB83:
    PUSH32(esp, esi); /* 0x005EEB83: push esi */
    PUSH32(esp, ebx); /* 0x005EEB84: push ebx */
    RECOMP_CALL(sub_005E52B0); /* 0x005EEB85: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EEB8A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EEBF0; /* 0x005EEB8C: jne 0x5eebf0 */
L_005EEB8E:
    ecx = MEM32(ebp + (-0x328)); /* 0x005EEB8E: mov ecx, dword ptr [ebp - 0x328] */
    eax = edi; /* 0x005EEB94: mov eax, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x70u; /* 0x005EEB96: add ecx, 0x70 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x70u; /* 0x005EEB99: add edi, 0x70 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x328)) = ecx; /* 0x005EEB9C: mov dword ptr [ebp - 0x328], ecx */
    /* cmp eax, ebx */ /* 0x005EEBA2: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EEBE5; /* 0x005EEBA4: je 0x5eebe5 */
L_005EEBA6:
    PUSH32(esp, ecx); /* 0x005EEBA6: push ecx */
    ecx = ebp + (-0x160); /* 0x005EEBA7: lea ecx, [ebp - 0x160] */
    RECOMP_CALL(sub_0054E8F0); /* 0x005EEBAD: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005EEBB2: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(ebp + (-0x328)); /* 0x005EEBB9: mov ecx, dword ptr [ebp - 0x328] */
    PUSH32(esp, ebx); /* 0x005EEBBF: push ebx */
    RECOMP_CALL(sub_005EE470); /* 0x005EEBC0: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x160); /* 0x005EEBC5: lea eax, [ebp - 0x160] */
    ecx = ebx; /* 0x005EEBCB: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005EEBCD: push eax */
    RECOMP_CALL(sub_005EE470); /* 0x005EEBCE: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EEBD3: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x160); /* 0x005EEBDA: lea ecx, [ebp - 0x160] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EEBE0: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
L_005EEBE5:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x70u; /* 0x005EEBE5: add ebx, 0x70 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(ebp + (-0x330)) */ /* 0x005EEBE8: cmp ebx, dword ptr [ebp - 0x330] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x330)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005EEB78; /* 0x005EEBEE: jb 0x5eeb78 */
L_005EEBF0:
    eax = MEM32(ebp + (-0x324)); /* 0x005EEBF0: mov eax, dword ptr [ebp - 0x324] */
    MEM32(ebp + (-0x32C)) = edi; /* 0x005EEBF6: mov dword ptr [ebp - 0x32c], edi */
    MEM32(ebp + (-0x328)) = ebx; /* 0x005EEBFC: mov dword ptr [ebp - 0x328], ebx */
L_005EEC02:
    ecx = MEM32(ebp + (-0x334)); /* 0x005EEC02: mov ecx, dword ptr [ebp - 0x334] */
    /* cmp eax, ecx */ /* 0x005EEC08: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_005EED7F; /* 0x005EEC0A: jbe 0x5eed7f */
L_005EEC10:
    ebx = esi + 0x20; /* 0x005EEC10: lea ebx, [esi + 0x20] */
    edi = eax + (-0x50); /* 0x005EEC13: lea edi, [eax - 0x50] */
L_005EEC16:
    eax = edi + (-0x20); /* 0x005EEC16: lea eax, [edi - 0x20] */
    PUSH32(esp, esi); /* 0x005EEC19: push esi */
    PUSH32(esp, eax); /* 0x005EEC1A: push eax */
    RECOMP_CALL(sub_005E52B0); /* 0x005EEC1B: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EEC20: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EED43; /* 0x005EEC22: jne 0x5eed43 */
L_005EEC28:
    eax = edi + (-0x20); /* 0x005EEC28: lea eax, [edi - 0x20] */
    PUSH32(esp, eax); /* 0x005EEC2B: push eax */
    PUSH32(esp, esi); /* 0x005EEC2C: push esi */
    RECOMP_CALL(sub_005E52B0); /* 0x005EEC2D: call 0x5e52b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EEC32: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005EED65; /* 0x005EEC34: jne 0x5eed65 */
L_005EEC3A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x70u; /* 0x005EEC3A: sub esi, 0x70 */
    _flag_k = FK_CMP;
    eax = edi + (-0x20); /* 0x005EEC3D: lea eax, [edi - 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x70u; /* 0x005EEC40: sub ebx, 0x70 */
    _flag_k = FK_CMP;
    /* cmp esi, eax */ /* 0x005EEC43: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EED43; /* 0x005EEC45: je 0x5eed43 */
L_005EEC4B:
    PUSH32(esp, esi); /* 0x005EEC4B: push esi */
    ecx = ebp + (-0x80); /* 0x005EEC4C: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0054E8F0); /* 0x005EEC4F: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x005EEC54: mov dword ptr [ebp - 4], 1 */
    ecx = edi + (-0x18); /* 0x005EEC5B: lea ecx, [edi - 0x18] */
    eax = MEM32(edi + (-0x20)); /* 0x005EEC5E: mov eax, dword ptr [edi - 0x20] */
    MEM32(esi) = eax; /* 0x005EEC61: mov dword ptr [esi], eax */
    eax = MEM32(edi + (-0x1C)); /* 0x005EEC63: mov eax, dword ptr [edi - 0x1c] */
    MEM32(esi + 0x4) = eax; /* 0x005EEC66: mov dword ptr [esi + 4], eax */
    eax = ebx + (-0x18); /* 0x005EEC69: lea eax, [ebx - 0x18] */
    /* cmp eax, ecx */ /* 0x005EEC6C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EEC80; /* 0x005EEC6E: je 0x5eec80 */
L_005EEC70:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EEC70: push -1 */
    PUSH32(esp, 0); /* 0x005EEC72: push 0 */
    eax = edi + (-0x18); /* 0x005EEC74: lea eax, [edi - 0x18] */
    PUSH32(esp, eax); /* 0x005EEC77: push eax */
    ecx = ebx + (-0x18); /* 0x005EEC78: lea ecx, [ebx - 0x18] */
    RECOMP_CALL(sub_0040A030); /* 0x005EEC7B: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EEC80:
    /* cmp ebx, edi */ /* 0x005EEC80: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EEC90; /* 0x005EEC82: je 0x5eec90 */
L_005EEC84:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EEC84: push -1 */
    PUSH32(esp, 0); /* 0x005EEC86: push 0 */
    PUSH32(esp, edi); /* 0x005EEC88: push edi */
    ecx = ebx; /* 0x005EEC89: mov ecx, ebx */
    RECOMP_CALL(sub_0040A030); /* 0x005EEC8B: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EEC90:
    eax = edi + 0x18; /* 0x005EEC90: lea eax, [edi + 0x18] */
    ecx = ebx + 0x18; /* 0x005EEC93: lea ecx, [ebx + 0x18] */
    /* cmp ecx, eax */ /* 0x005EEC96: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EECA4; /* 0x005EEC98: je 0x5eeca4 */
L_005EEC9A:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EEC9A: push -1 */
    PUSH32(esp, 0); /* 0x005EEC9C: push 0 */
    PUSH32(esp, eax); /* 0x005EEC9E: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EEC9F: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EECA4:
    eax = edi + 0x30; /* 0x005EECA4: lea eax, [edi + 0x30] */
    ecx = ebx + 0x30; /* 0x005EECA7: lea ecx, [ebx + 0x30] */
    /* cmp ecx, eax */ /* 0x005EECAA: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EECB8; /* 0x005EECAC: je 0x5eecb8 */
L_005EECAE:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EECAE: push -1 */
    PUSH32(esp, 0); /* 0x005EECB0: push 0 */
    PUSH32(esp, eax); /* 0x005EECB2: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EECB3: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EECB8:
    SET_LO16(eax, MEM16(edi + 0x48)); /* 0x005EECB8: mov ax, word ptr [edi + 0x48] */
    ecx = ebp + (-0x78); /* 0x005EECBC: lea ecx, [ebp - 0x78] */
    MEM16(ebx + 0x48) = (uint16_t)(LO16(eax)); /* 0x005EECBF: mov word ptr [ebx + 0x48], ax */
    eax = MEM32(edi + 0x4C); /* 0x005EECC3: mov eax, dword ptr [edi + 0x4c] */
    MEM32(ebx + 0x4C) = eax; /* 0x005EECC6: mov dword ptr [ebx + 0x4c], eax */
    eax = MEM32(ebp + (-0x80)); /* 0x005EECC9: mov eax, dword ptr [ebp - 0x80] */
    MEM32(edi + (-0x20)) = eax; /* 0x005EECCC: mov dword ptr [edi - 0x20], eax */
    eax = MEM32(ebp + (-0x7C)); /* 0x005EECCF: mov eax, dword ptr [ebp - 0x7c] */
    MEM32(edi + (-0x1C)) = eax; /* 0x005EECD2: mov dword ptr [edi - 0x1c], eax */
    eax = edi + (-0x18); /* 0x005EECD5: lea eax, [edi - 0x18] */
    /* cmp eax, ecx */ /* 0x005EECD8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EECEB; /* 0x005EECDA: je 0x5eeceb */
L_005EECDC:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EECDC: push -1 */
    eax = ecx; /* 0x005EECDE: mov eax, ecx */
    ecx = edi + (-0x18); /* 0x005EECE0: lea ecx, [edi - 0x18] */
    PUSH32(esp, 0); /* 0x005EECE3: push 0 */
    PUSH32(esp, eax); /* 0x005EECE5: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EECE6: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EECEB:
    eax = ebp + (-0x60); /* 0x005EECEB: lea eax, [ebp - 0x60] */
    /* cmp edi, eax */ /* 0x005EECEE: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EECFE; /* 0x005EECF0: je 0x5eecfe */
L_005EECF2:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EECF2: push -1 */
    PUSH32(esp, 0); /* 0x005EECF4: push 0 */
    PUSH32(esp, eax); /* 0x005EECF6: push eax */
    ecx = edi; /* 0x005EECF7: mov ecx, edi */
    RECOMP_CALL(sub_0040A030); /* 0x005EECF9: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EECFE:
    eax = ebp + (-0x48); /* 0x005EECFE: lea eax, [ebp - 0x48] */
    ecx = edi + 0x18; /* 0x005EED01: lea ecx, [edi + 0x18] */
    /* cmp ecx, eax */ /* 0x005EED04: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EED12; /* 0x005EED06: je 0x5eed12 */
L_005EED08:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EED08: push -1 */
    PUSH32(esp, 0); /* 0x005EED0A: push 0 */
    PUSH32(esp, eax); /* 0x005EED0C: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EED0D: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EED12:
    eax = ebp + (-0x30); /* 0x005EED12: lea eax, [ebp - 0x30] */
    ecx = edi + 0x30; /* 0x005EED15: lea ecx, [edi + 0x30] */
    /* cmp ecx, eax */ /* 0x005EED18: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EED26; /* 0x005EED1A: je 0x5eed26 */
L_005EED1C:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EED1C: push -1 */
    PUSH32(esp, 0); /* 0x005EED1E: push 0 */
    PUSH32(esp, eax); /* 0x005EED20: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EED21: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EED26:
    SET_LO16(eax, MEM16(ebp + (-0x18))); /* 0x005EED26: mov ax, word ptr [ebp - 0x18] */
    MEM16(edi + 0x48) = (uint16_t)(LO16(eax)); /* 0x005EED2A: mov word ptr [edi + 0x48], ax */
    eax = MEM32(ebp + (-0x14)); /* 0x005EED2E: mov eax, dword ptr [ebp - 0x14] */
    MEM32(edi + 0x4C) = eax; /* 0x005EED31: mov dword ptr [edi + 0x4c], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EED34: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x80); /* 0x005EED3B: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EED3E: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
L_005EED43:
    eax = MEM32(ebp + (-0x324)); /* 0x005EED43: mov eax, dword ptr [ebp - 0x324] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x70u; /* 0x005EED49: sub edi, 0x70 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x334)); /* 0x005EED4C: mov ecx, dword ptr [ebp - 0x334] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x70u; /* 0x005EED52: sub eax, 0x70 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x324)) = eax; /* 0x005EED55: mov dword ptr [ebp - 0x324], eax */
    /* cmp ecx, eax */ /* 0x005EED5B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005EEC16; /* 0x005EED5D: jb 0x5eec16 */
L_005EED63:
    goto L_005EED71; /* 0x005EED63: jmp 0x5eed71 */
L_005EED65:
    eax = MEM32(ebp + (-0x324)); /* 0x005EED65: mov eax, dword ptr [ebp - 0x324] */
    ecx = MEM32(ebp + (-0x334)); /* 0x005EED6B: mov ecx, dword ptr [ebp - 0x334] */
L_005EED71:
    ebx = MEM32(ebp + (-0x328)); /* 0x005EED71: mov ebx, dword ptr [ebp - 0x328] */
    /* cmp eax, ecx */ /* 0x005EED77: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x32C)); /* 0x005EED79: mov edi, dword ptr [ebp - 0x32c] */
L_005EED7F:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_005EEF0E; /* 0x005EED7F: jne 0x5eef0e */
L_005EED85:
    /* cmp ebx, MEM32(ebp + (-0x330)) */ /* 0x005EED85: cmp ebx, dword ptr [ebp - 0x330] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x330)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EF00A; /* 0x005EED8B: je 0x5ef00a */
L_005EED91:
    /* cmp edi, ebx */ /* 0x005EED91: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EEEA7; /* 0x005EED93: je 0x5eeea7 */
L_005EED99:
    PUSH32(esp, esi); /* 0x005EED99: push esi */
    ecx = ebp + (-0xF0); /* 0x005EED9A: lea ecx, [ebp - 0xf0] */
    RECOMP_CALL(sub_0054E8F0); /* 0x005EEDA0: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x005EEDA5: mov dword ptr [ebp - 4], 2 */
    ecx = esi + 0x8; /* 0x005EEDAC: lea ecx, [esi + 8] */
    eax = MEM32(edi); /* 0x005EEDAF: mov eax, dword ptr [edi] */
    MEM32(esi) = eax; /* 0x005EEDB1: mov dword ptr [esi], eax */
    eax = MEM32(edi + 0x4); /* 0x005EEDB3: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x005EEDB6: mov dword ptr [esi + 4], eax */
    eax = edi + 0x8; /* 0x005EEDB9: lea eax, [edi + 8] */
    /* cmp ecx, eax */ /* 0x005EEDBC: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EEDCA; /* 0x005EEDBE: je 0x5eedca */
L_005EEDC0:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EEDC0: push -1 */
    PUSH32(esp, 0); /* 0x005EEDC2: push 0 */
    PUSH32(esp, eax); /* 0x005EEDC4: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EEDC5: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EEDCA:
    eax = edi + 0x20; /* 0x005EEDCA: lea eax, [edi + 0x20] */
    ecx = esi + 0x20; /* 0x005EEDCD: lea ecx, [esi + 0x20] */
    /* cmp ecx, eax */ /* 0x005EEDD0: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EEDDE; /* 0x005EEDD2: je 0x5eedde */
L_005EEDD4:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EEDD4: push -1 */
    PUSH32(esp, 0); /* 0x005EEDD6: push 0 */
    PUSH32(esp, eax); /* 0x005EEDD8: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EEDD9: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EEDDE:
    eax = edi + 0x38; /* 0x005EEDDE: lea eax, [edi + 0x38] */
    ecx = esi + 0x38; /* 0x005EEDE1: lea ecx, [esi + 0x38] */
    /* cmp ecx, eax */ /* 0x005EEDE4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EEDF2; /* 0x005EEDE6: je 0x5eedf2 */
L_005EEDE8:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EEDE8: push -1 */
    PUSH32(esp, 0); /* 0x005EEDEA: push 0 */
    PUSH32(esp, eax); /* 0x005EEDEC: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EEDED: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EEDF2:
    eax = edi + 0x50; /* 0x005EEDF2: lea eax, [edi + 0x50] */
    ecx = esi + 0x50; /* 0x005EEDF5: lea ecx, [esi + 0x50] */
    /* cmp ecx, eax */ /* 0x005EEDF8: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EEE06; /* 0x005EEDFA: je 0x5eee06 */
L_005EEDFC:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EEDFC: push -1 */
    PUSH32(esp, 0); /* 0x005EEDFE: push 0 */
    PUSH32(esp, eax); /* 0x005EEE00: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EEE01: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EEE06:
    SET_LO16(eax, MEM16(edi + 0x68)); /* 0x005EEE06: mov ax, word ptr [edi + 0x68] */
    ecx = edi + 0x8; /* 0x005EEE0A: lea ecx, [edi + 8] */
    MEM16(esi + 0x68) = (uint16_t)(LO16(eax)); /* 0x005EEE0D: mov word ptr [esi + 0x68], ax */
    eax = MEM32(edi + 0x6C); /* 0x005EEE11: mov eax, dword ptr [edi + 0x6c] */
    MEM32(esi + 0x6C) = eax; /* 0x005EEE14: mov dword ptr [esi + 0x6c], eax */
    eax = MEM32(ebp + (-0xF0)); /* 0x005EEE17: mov eax, dword ptr [ebp - 0xf0] */
    MEM32(edi) = eax; /* 0x005EEE1D: mov dword ptr [edi], eax */
    eax = MEM32(ebp + (-0xEC)); /* 0x005EEE1F: mov eax, dword ptr [ebp - 0xec] */
    MEM32(edi + 0x4) = eax; /* 0x005EEE25: mov dword ptr [edi + 4], eax */
    eax = ebp + (-0xE8); /* 0x005EEE28: lea eax, [ebp - 0xe8] */
    /* cmp ecx, eax */ /* 0x005EEE2E: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EEE3C; /* 0x005EEE30: je 0x5eee3c */
L_005EEE32:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EEE32: push -1 */
    PUSH32(esp, 0); /* 0x005EEE34: push 0 */
    PUSH32(esp, eax); /* 0x005EEE36: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EEE37: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EEE3C:
    eax = ebp + (-0xD0); /* 0x005EEE3C: lea eax, [ebp - 0xd0] */
    ecx = edi + 0x20; /* 0x005EEE42: lea ecx, [edi + 0x20] */
    /* cmp ecx, eax */ /* 0x005EEE45: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EEE53; /* 0x005EEE47: je 0x5eee53 */
L_005EEE49:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EEE49: push -1 */
    PUSH32(esp, 0); /* 0x005EEE4B: push 0 */
    PUSH32(esp, eax); /* 0x005EEE4D: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EEE4E: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EEE53:
    eax = ebp + (-0xB8); /* 0x005EEE53: lea eax, [ebp - 0xb8] */
    ecx = edi + 0x38; /* 0x005EEE59: lea ecx, [edi + 0x38] */
    /* cmp ecx, eax */ /* 0x005EEE5C: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EEE6A; /* 0x005EEE5E: je 0x5eee6a */
L_005EEE60:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EEE60: push -1 */
    PUSH32(esp, 0); /* 0x005EEE62: push 0 */
    PUSH32(esp, eax); /* 0x005EEE64: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EEE65: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EEE6A:
    eax = ebp + (-0xA0); /* 0x005EEE6A: lea eax, [ebp - 0xa0] */
    ecx = edi + 0x50; /* 0x005EEE70: lea ecx, [edi + 0x50] */
    /* cmp ecx, eax */ /* 0x005EEE73: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EEE81; /* 0x005EEE75: je 0x5eee81 */
L_005EEE77:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EEE77: push -1 */
    PUSH32(esp, 0); /* 0x005EEE79: push 0 */
    PUSH32(esp, eax); /* 0x005EEE7B: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005EEE7C: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005EEE81:
    SET_LO16(eax, MEM16(ebp + (-0x88))); /* 0x005EEE81: mov ax, word ptr [ebp - 0x88] */
    MEM16(edi + 0x68) = (uint16_t)(LO16(eax)); /* 0x005EEE88: mov word ptr [edi + 0x68], ax */
    eax = MEM32(ebp + (-0x84)); /* 0x005EEE8C: mov eax, dword ptr [ebp - 0x84] */
    MEM32(edi + 0x6C) = eax; /* 0x005EEE92: mov dword ptr [edi + 0x6c], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EEE95: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0xF0); /* 0x005EEE9C: lea ecx, [ebp - 0xf0] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EEEA2: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
L_005EEEA7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x328))); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x328)) = MEM32(ebp + (-0x328)) + 0x70u; /* 0x005EEEA7: add dword ptr [ebp - 0x328], 0x70 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x1D0); /* 0x005EEEAE: lea ecx, [ebp - 0x1d0] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x70u; /* 0x005EEEB4: add edi, 0x70 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x32C)) = edi; /* 0x005EEEB7: mov dword ptr [ebp - 0x32c], edi */
    edi = esi; /* 0x005EEEBD: mov edi, esi */
    PUSH32(esp, edi); /* 0x005EEEBF: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x70u; /* 0x005EEEC0: add esi, 0x70 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_0054E8F0); /* 0x005EEEC3: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 3; /* 0x005EEEC8: mov dword ptr [ebp - 4], 3 */
    ecx = edi; /* 0x005EEECF: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x005EEED1: push ebx */
    RECOMP_CALL(sub_005EE470); /* 0x005EEED2: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1D0); /* 0x005EEED7: lea eax, [ebp - 0x1d0] */
    ecx = ebx; /* 0x005EEEDD: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005EEEDF: push eax */
    RECOMP_CALL(sub_005EE470); /* 0x005EEEE0: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EEEE5: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x1D0); /* 0x005EEEEC: lea ecx, [ebp - 0x1d0] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EEEF2: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x328)); /* 0x005EEEF7: mov ebx, dword ptr [ebp - 0x328] */
    edi = MEM32(ebp + (-0x32C)); /* 0x005EEEFD: mov edi, dword ptr [ebp - 0x32c] */
    eax = MEM32(ebp + (-0x324)); /* 0x005EEF03: mov eax, dword ptr [ebp - 0x324] */
    RECOMP_BACKEDGE();
    goto L_005EEB63; /* 0x005EEF09: jmp 0x5eeb63 */
L_005EEF0E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x70u; /* 0x005EEF0E: sub eax, 0x70 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x324)) = eax; /* 0x005EEF11: mov dword ptr [ebp - 0x324], eax */
    /* cmp ebx, MEM32(ebp + (-0x330)) */ /* 0x005EEF17: cmp ebx, dword ptr [ebp - 0x330] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x330)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EEFB8; /* 0x005EEF1D: jne 0x5eefb8 */
L_005EEF23:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x70u; /* 0x005EEF23: sub esi, 0x70 */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x005EEF26: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EEF69; /* 0x005EEF28: je 0x5eef69 */
L_005EEF2A:
    PUSH32(esp, eax); /* 0x005EEF2A: push eax */
    ecx = ebp + (-0x240); /* 0x005EEF2B: lea ecx, [ebp - 0x240] */
    RECOMP_CALL(sub_0054E8F0); /* 0x005EEF31: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 4; /* 0x005EEF36: mov dword ptr [ebp - 4], 4 */
    ecx = MEM32(ebp + (-0x324)); /* 0x005EEF3D: mov ecx, dword ptr [ebp - 0x324] */
    PUSH32(esp, esi); /* 0x005EEF43: push esi */
    RECOMP_CALL(sub_005EE470); /* 0x005EEF44: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x240); /* 0x005EEF49: lea eax, [ebp - 0x240] */
    ecx = esi; /* 0x005EEF4F: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005EEF51: push eax */
    RECOMP_CALL(sub_005EE470); /* 0x005EEF52: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EEF57: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x240); /* 0x005EEF5E: lea ecx, [ebp - 0x240] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EEF64: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
L_005EEF69:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x70u; /* 0x005EEF69: sub edi, 0x70 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x320); /* 0x005EEF6C: lea ecx, [ebp - 0x320] */
    PUSH32(esp, esi); /* 0x005EEF72: push esi */
    MEM32(ebp + (-0x32C)) = edi; /* 0x005EEF73: mov dword ptr [ebp - 0x32c], edi */
    RECOMP_CALL(sub_0054E8F0); /* 0x005EEF79: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 5; /* 0x005EEF7E: mov dword ptr [ebp - 4], 5 */
    ecx = esi; /* 0x005EEF85: mov ecx, esi */
    PUSH32(esp, edi); /* 0x005EEF87: push edi */
    RECOMP_CALL(sub_005EE470); /* 0x005EEF88: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x320); /* 0x005EEF8D: lea eax, [ebp - 0x320] */
    ecx = edi; /* 0x005EEF93: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005EEF95: push eax */
    RECOMP_CALL(sub_005EE470); /* 0x005EEF96: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EEF9B: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x320); /* 0x005EEFA2: lea ecx, [ebp - 0x320] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EEFA8: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x324)); /* 0x005EEFAD: mov eax, dword ptr [ebp - 0x324] */
    RECOMP_BACKEDGE();
    goto L_005EEB63; /* 0x005EEFB3: jmp 0x5eeb63 */
L_005EEFB8:
    PUSH32(esp, ebx); /* 0x005EEFB8: push ebx */
    ecx = ebp + (-0x2B0); /* 0x005EEFB9: lea ecx, [ebp - 0x2b0] */
    RECOMP_CALL(sub_0054E8F0); /* 0x005EEFBF: call 0x54e8f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 6; /* 0x005EEFC4: mov dword ptr [ebp - 4], 6 */
    ecx = ebx; /* 0x005EEFCB: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x324))); /* 0x005EEFCD: push dword ptr [ebp - 0x324] */
    RECOMP_CALL(sub_005EE470); /* 0x005EEFD3: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x324)); /* 0x005EEFD8: mov ecx, dword ptr [ebp - 0x324] */
    eax = ebp + (-0x2B0); /* 0x005EEFDE: lea eax, [ebp - 0x2b0] */
    PUSH32(esp, eax); /* 0x005EEFE4: push eax */
    RECOMP_CALL(sub_005EE470); /* 0x005EEFE5: call 0x5ee470 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005EEFEA: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x2B0); /* 0x005EEFF1: lea ecx, [ebp - 0x2b0] */
    RECOMP_CALL(sub_0054E9F0); /* 0x005EEFF7: call 0x54e9f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x324)); /* 0x005EEFFC: mov eax, dword ptr [ebp - 0x324] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x70u; /* 0x005EF002: add ebx, 0x70 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_005EEB5D; /* 0x005EF005: jmp 0x5eeb5d */
L_005EF00A:
    eax = MEM32(ebp + (-0x338)); /* 0x005EF00A: mov eax, dword ptr [ebp - 0x338] */
    MEM32(eax) = esi; /* 0x005EF010: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = edi; /* 0x005EF012: mov dword ptr [eax + 4], edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EF015: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EF018: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EF01F: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EF020: pop edi */
    esi = POP32_VAL(esp); /* 0x005EF021: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EF022: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005EF023: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005EF026: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005EF028: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005EF02D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EF02F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005EF030: ret  */
    RECOMP_REGS_OUT();
}

void sub_005EF040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF040u);

L_005EF040:
    PUSH32(esp, ebp); /* 0x005EF040: push ebp */
    ebp = esp; /* 0x005EF041: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x005EF043: push ebx */
    PUSH32(esp, esi); /* 0x005EF044: push esi */
    PUSH32(esp, edi); /* 0x005EF045: push edi */
    edi = ecx; /* 0x005EF046: mov edi, ecx */
    eax = MEM32(edi + 0x4); /* 0x005EF048: mov eax, dword ptr [edi + 4] */
    /* cmp eax, 0x03FFFFFEu */ /* 0x005EF04B: cmp eax, 0x3fffffe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x03FFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005EF072; /* 0x005EF050: jb 0x5ef072 */
L_005EF052:
    esi = MEM32(ebp + 0x18); /* 0x005EF052: mov esi, dword ptr [ebp + 0x18] */
    ecx = esi + 0x10; /* 0x005EF055: lea ecx, [esi + 0x10] */
    RECOMP_CALL(sub_00441610); /* 0x005EF058: call 0x441610 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x005EF05D: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005EF05E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005EF064: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x007CD71Cu); /* 0x005EF067: push 0x7cd71c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005EF06C: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005EF072:
    ebx = MEM32(ebp + 0x18); /* 0x005EF072: mov ebx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005EF075: inc eax */
    _flag_k = FK_INC;
    MEM32(edi + 0x4) = eax; /* 0x005EF076: mov dword ptr [edi + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x005EF079: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = eax; /* 0x005EF07C: mov dword ptr [ebx + 4], eax */
    ecx = MEM32(edi); /* 0x005EF07F: mov ecx, dword ptr [edi] */
    /* cmp eax, ecx */ /* 0x005EF081: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF093; /* 0x005EF083: jne 0x5ef093 */
L_005EF085:
    MEM32(ecx + 0x4) = ebx; /* 0x005EF085: mov dword ptr [ecx + 4], ebx */
    eax = MEM32(edi); /* 0x005EF088: mov eax, dword ptr [edi] */
    MEM32(eax) = ebx; /* 0x005EF08A: mov dword ptr [eax], ebx */
    eax = MEM32(edi); /* 0x005EF08C: mov eax, dword ptr [edi] */
    MEM32(eax + 0x8) = ebx; /* 0x005EF08E: mov dword ptr [eax + 8], ebx */
    goto L_005EF0B2; /* 0x005EF091: jmp 0x5ef0b2 */
L_005EF093:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x005EF093: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EF0A5; /* 0x005EF097: je 0x5ef0a5 */
L_005EF099:
    MEM32(eax) = ebx; /* 0x005EF099: mov dword ptr [eax], ebx */
    ecx = MEM32(edi); /* 0x005EF09B: mov ecx, dword ptr [edi] */
    /* cmp eax, MEM32(ecx) */ /* 0x005EF09D: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF0B2; /* 0x005EF09F: jne 0x5ef0b2 */
L_005EF0A1:
    MEM32(ecx) = ebx; /* 0x005EF0A1: mov dword ptr [ecx], ebx */
    goto L_005EF0B2; /* 0x005EF0A3: jmp 0x5ef0b2 */
L_005EF0A5:
    MEM32(eax + 0x8) = ebx; /* 0x005EF0A5: mov dword ptr [eax + 8], ebx */
    ecx = MEM32(edi); /* 0x005EF0A8: mov ecx, dword ptr [edi] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x005EF0AA: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF0B2; /* 0x005EF0AD: jne 0x5ef0b2 */
L_005EF0AF:
    MEM32(ecx + 0x8) = ebx; /* 0x005EF0AF: mov dword ptr [ecx + 8], ebx */
L_005EF0B2:
    eax = MEM32(ebx + 0x4); /* 0x005EF0B2: mov eax, dword ptr [ebx + 4] */
    esi = ebx; /* 0x005EF0B5: mov esi, ebx */
    /* cmp MEM8(eax + 0xC), 0 */ /* 0x005EF0B7: cmp byte ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF1CB; /* 0x005EF0BB: jne 0x5ef1cb */
L_005EF0C1:
    eax = MEM32(esi + 0x4); /* 0x005EF0C1: mov eax, dword ptr [esi + 4] */
    edx = MEM32(eax + 0x4); /* 0x005EF0C4: mov edx, dword ptr [eax + 4] */
    ecx = MEM32(edx); /* 0x005EF0C7: mov ecx, dword ptr [edx] */
    /* cmp eax, ecx */ /* 0x005EF0C9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF141; /* 0x005EF0CB: jne 0x5ef141 */
L_005EF0CD:
    ecx = MEM32(edx + 0x8); /* 0x005EF0CD: mov ecx, dword ptr [edx + 8] */
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005EF0D0: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EF147; /* 0x005EF0D4: je 0x5ef147 */
L_005EF0D6:
    /* cmp esi, MEM32(eax + 0x8) */ /* 0x005EF0D6: cmp esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF0E5; /* 0x005EF0D9: jne 0x5ef0e5 */
L_005EF0DB:
    esi = eax; /* 0x005EF0DB: mov esi, eax */
    ecx = edi; /* 0x005EF0DD: mov ecx, edi */
    PUSH32(esp, esi); /* 0x005EF0DF: push esi */
    RECOMP_CALL(sub_0040B6F0); /* 0x005EF0E0: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
L_005EF0E5:
    eax = MEM32(esi + 0x4); /* 0x005EF0E5: mov eax, dword ptr [esi + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EF0E8: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x005EF0EC: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x005EF0EF: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x005EF0F2: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x005EF0F6: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x005EF0F9: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx); /* 0x005EF0FC: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0x8); /* 0x005EF0FE: mov eax, dword ptr [edx + 8] */
    MEM32(ecx) = eax; /* 0x005EF101: mov dword ptr [ecx], eax */
    eax = MEM32(edx + 0x8); /* 0x005EF103: mov eax, dword ptr [edx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EF106: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF10F; /* 0x005EF10A: jne 0x5ef10f */
L_005EF10C:
    MEM32(eax + 0x4) = ecx; /* 0x005EF10C: mov dword ptr [eax + 4], ecx */
L_005EF10F:
    eax = MEM32(ecx + 0x4); /* 0x005EF10F: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x005EF112: mov dword ptr [edx + 4], eax */
    eax = MEM32(edi); /* 0x005EF115: mov eax, dword ptr [edi] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x005EF117: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF127; /* 0x005EF11A: jne 0x5ef127 */
L_005EF11C:
    MEM32(eax + 0x4) = edx; /* 0x005EF11C: mov dword ptr [eax + 4], edx */
    MEM32(edx + 0x8) = ecx; /* 0x005EF11F: mov dword ptr [edx + 8], ecx */
    goto L_005EF1BB; /* 0x005EF122: jmp 0x5ef1bb */
L_005EF127:
    eax = MEM32(ecx + 0x4); /* 0x005EF127: mov eax, dword ptr [ecx + 4] */
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x005EF12A: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF13A; /* 0x005EF12D: jne 0x5ef13a */
L_005EF12F:
    MEM32(eax + 0x8) = edx; /* 0x005EF12F: mov dword ptr [eax + 8], edx */
    MEM32(edx + 0x8) = ecx; /* 0x005EF132: mov dword ptr [edx + 8], ecx */
    goto L_005EF1BB; /* 0x005EF135: jmp 0x5ef1bb */
L_005EF13A:
    MEM32(eax) = edx; /* 0x005EF13A: mov dword ptr [eax], edx */
    MEM32(edx + 0x8) = ecx; /* 0x005EF13C: mov dword ptr [edx + 8], ecx */
    goto L_005EF1BB; /* 0x005EF13F: jmp 0x5ef1bb */
L_005EF141:
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005EF141: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF161; /* 0x005EF145: jne 0x5ef161 */
L_005EF147:
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EF147: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x005EF14B: mov byte ptr [ecx + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x005EF14F: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x005EF152: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x005EF155: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x005EF159: mov eax, dword ptr [esi + 4] */
    esi = MEM32(eax + 0x4); /* 0x005EF15C: mov esi, dword ptr [eax + 4] */
    goto L_005EF1BE; /* 0x005EF15F: jmp 0x5ef1be */
L_005EF161:
    /* cmp esi, MEM32(eax) */ /* 0x005EF161: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF16F; /* 0x005EF163: jne 0x5ef16f */
L_005EF165:
    esi = eax; /* 0x005EF165: mov esi, eax */
    ecx = edi; /* 0x005EF167: mov ecx, edi */
    PUSH32(esp, esi); /* 0x005EF169: push esi */
    RECOMP_CALL(sub_0040B750); /* 0x005EF16A: call 0x40b750 */
    RECOMP_FLAGS_IN();
L_005EF16F:
    eax = MEM32(esi + 0x4); /* 0x005EF16F: mov eax, dword ptr [esi + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EF172: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x005EF176: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x005EF179: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x005EF17C: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x005EF180: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x005EF183: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx + 0x8); /* 0x005EF186: mov edx, dword ptr [ecx + 8] */
    eax = MEM32(edx); /* 0x005EF189: mov eax, dword ptr [edx] */
    MEM32(ecx + 0x8) = eax; /* 0x005EF18B: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx); /* 0x005EF18E: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005EF190: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF199; /* 0x005EF194: jne 0x5ef199 */
L_005EF196:
    MEM32(eax + 0x4) = ecx; /* 0x005EF196: mov dword ptr [eax + 4], ecx */
L_005EF199:
    eax = MEM32(ecx + 0x4); /* 0x005EF199: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x005EF19C: mov dword ptr [edx + 4], eax */
    eax = MEM32(edi); /* 0x005EF19F: mov eax, dword ptr [edi] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x005EF1A1: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF1AB; /* 0x005EF1A4: jne 0x5ef1ab */
L_005EF1A6:
    MEM32(eax + 0x4) = edx; /* 0x005EF1A6: mov dword ptr [eax + 4], edx */
    goto L_005EF1B9; /* 0x005EF1A9: jmp 0x5ef1b9 */
L_005EF1AB:
    eax = MEM32(ecx + 0x4); /* 0x005EF1AB: mov eax, dword ptr [ecx + 4] */
    /* cmp ecx, MEM32(eax) */ /* 0x005EF1AE: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF1B6; /* 0x005EF1B0: jne 0x5ef1b6 */
L_005EF1B2:
    MEM32(eax) = edx; /* 0x005EF1B2: mov dword ptr [eax], edx */
    goto L_005EF1B9; /* 0x005EF1B4: jmp 0x5ef1b9 */
L_005EF1B6:
    MEM32(eax + 0x8) = edx; /* 0x005EF1B6: mov dword ptr [eax + 8], edx */
L_005EF1B9:
    MEM32(edx) = ecx; /* 0x005EF1B9: mov dword ptr [edx], ecx */
L_005EF1BB:
    MEM32(ecx + 0x4) = edx; /* 0x005EF1BB: mov dword ptr [ecx + 4], edx */
L_005EF1BE:
    eax = MEM32(esi + 0x4); /* 0x005EF1BE: mov eax, dword ptr [esi + 4] */
    /* cmp MEM8(eax + 0xC), 0 */ /* 0x005EF1C1: cmp byte ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EF0C1; /* 0x005EF1C5: je 0x5ef0c1 */
L_005EF1CB:
    eax = MEM32(edi); /* 0x005EF1CB: mov eax, dword ptr [edi] */
    edi = POP32_VAL(esp); /* 0x005EF1CD: pop edi */
    esi = POP32_VAL(esp); /* 0x005EF1CE: pop esi */
    eax = MEM32(eax + 0x4); /* 0x005EF1CF: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005EF1D2: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(ebp + 0x8); /* 0x005EF1D6: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ebx; /* 0x005EF1D9: mov dword ptr [eax], ebx */
    ebx = POP32_VAL(esp); /* 0x005EF1DB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005EF1DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x005EF1DD: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_005EF1E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF1E0u);

L_005EF1E0:
    PUSH32(esp, ebp); /* 0x005EF1E0: push ebp */
    ebp = esp; /* 0x005EF1E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005EF1E3: push -1 */
    PUSH32(esp, 0x007B1E90u); /* 0x005EF1E5: push 0x7b1e90 */
    eax = MEM32(FS_BASE + (0)); /* 0x005EF1EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005EF1F0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005EF1F1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005EF1F4: push ebx */
    PUSH32(esp, esi); /* 0x005EF1F5: push esi */
    PUSH32(esp, edi); /* 0x005EF1F6: push edi */
    eax = MEM32(0x855000); /* 0x005EF1F7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005EF1FC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005EF1FE: push eax */
    eax = ebp + (-0xC); /* 0x005EF1FF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005EF202: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005EF208: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x18)) = ecx; /* 0x005EF20B: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005EF20E: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ecx); /* 0x005EF215: mov edi, dword ptr [ecx] */
    esi = MEM32(edi + 0x4); /* 0x005EF217: mov esi, dword ptr [edi + 4] */
    SET_LO8(eax, 1); /* 0x005EF21A: mov al, 1 */
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x005EF21C: mov byte ptr [ebp - 0x14], al */
    ebx = MEM32(ebp + 0x10); /* 0x005EF21F: mov ebx, dword ptr [ebp + 0x10] */
L_005EF222:
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005EF222: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF258; /* 0x005EF226: jne 0x5ef258 */
L_005EF228:
    edi = esi; /* 0x005EF228: mov edi, esi */
    eax = esi + 0x10; /* 0x005EF22A: lea eax, [esi + 0x10] */
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x005EF22D: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005EF241; /* 0x005EF231: je 0x5ef241 */
L_005EF233:
    PUSH32(esp, ebx); /* 0x005EF233: push ebx */
    PUSH32(esp, eax); /* 0x005EF234: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x005EF235: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005EF23A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x005EF23C: sete al */
    goto L_005EF248; /* 0x005EF23F: jmp 0x5ef248 */
L_005EF241:
    PUSH32(esp, eax); /* 0x005EF241: push eax */
    PUSH32(esp, ebx); /* 0x005EF242: push ebx */
    RECOMP_CALL(sub_005E0380); /* 0x005EF243: call 0x5e0380 */
    RECOMP_FLAGS_IN();
L_005EF248:
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x005EF248: mov byte ptr [ebp - 0x14], al */
    /* test LO8(eax), LO8(eax) */ /* 0x005EF24B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EF253; /* 0x005EF24D: je 0x5ef253 */
L_005EF24F:
    esi = MEM32(esi); /* 0x005EF24F: mov esi, dword ptr [esi] */
    RECOMP_BACKEDGE();
    goto L_005EF222; /* 0x005EF251: jmp 0x5ef222 */
L_005EF253:
    esi = MEM32(esi + 0x8); /* 0x005EF253: mov esi, dword ptr [esi + 8] */
    RECOMP_BACKEDGE();
    goto L_005EF222; /* 0x005EF256: jmp 0x5ef222 */
L_005EF258:
    esi = edi; /* 0x005EF258: mov esi, edi */
    MEM32(ebp + 0xC) = esi; /* 0x005EF25A: mov dword ptr [ebp + 0xc], esi */
    /* test LO8(eax), LO8(eax) */ /* 0x005EF25D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EF2A4; /* 0x005EF25F: je 0x5ef2a4 */
L_005EF261:
    ecx = MEM32(ebp + (-0x18)); /* 0x005EF261: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ecx); /* 0x005EF264: mov eax, dword ptr [ecx] */
    /* cmp edi, MEM32(eax) */ /* 0x005EF266: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005EF299; /* 0x005EF268: jne 0x5ef299 */
L_005EF26A:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EF26A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005EF26D: push ecx */
    PUSH32(esp, edi); /* 0x005EF26E: push edi */
    PUSH32(esp, 1); /* 0x005EF26F: push 1 */
L_005EF271:
    eax = ebp + 0xC; /* 0x005EF271: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x005EF274: push eax */
    RECOMP_CALL(sub_005EF040); /* 0x005EF275: call 0x5ef040 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x005EF27A: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x005EF27C: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005EF27F: mov dword ptr [eax], ecx */
    MEM8(eax + 0x4) = (uint8_t)(1); /* 0x005EF281: mov byte ptr [eax + 4], 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EF285: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EF288: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EF28F: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EF290: pop edi */
    esi = POP32_VAL(esp); /* 0x005EF291: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EF292: pop ebx */
    esp = ebp; /* 0x005EF293: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EF295: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005EF296: ret 0x10 */
L_005EF299:
    ecx = ebp + 0xC; /* 0x005EF299: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_0041B310); /* 0x005EF29C: call 0x41b310 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x005EF2A1: mov esi, dword ptr [ebp + 0xc] */
L_005EF2A4:
    PUSH32(esp, ebx); /* 0x005EF2A4: push ebx */
    eax = esi + 0x10; /* 0x005EF2A5: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005EF2A8: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x005EF2A9: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EF2AE: push dword ptr [ebp + 0x14] */
    /* test LO8(eax), LO8(eax) */ /* 0x005EF2B1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005EF2BF; /* 0x005EF2B3: je 0x5ef2bf */
L_005EF2B5:
    PUSH32(esp, ecx); /* 0x005EF2B5: push ecx */
    PUSH32(esp, edi); /* 0x005EF2B6: push edi */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005EF2B7: push dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + (-0x18)); /* 0x005EF2BA: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_BACKEDGE();
    goto L_005EF271; /* 0x005EF2BD: jmp 0x5ef271 */
L_005EF2BF:
    RECOMP_CALL(sub_005EE4F0); /* 0x005EF2BF: call 0x5ee4f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005EF2C4: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x005EF2C7: mov dword ptr [eax], esi */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x005EF2C9: mov byte ptr [eax + 4], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005EF2CD: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005EF2D0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005EF2D7: pop ecx */
    edi = POP32_VAL(esp); /* 0x005EF2D8: pop edi */
    esi = POP32_VAL(esp); /* 0x005EF2D9: pop esi */
    ebx = POP32_VAL(esp); /* 0x005EF2DA: pop ebx */
    esp = ebp; /* 0x005EF2DB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005EF2DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005EF2DE: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005EF2E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005EF2E1u);

L_005EF2E1:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005EF2E1: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_005EE4F0); /* 0x005EF2E4: call 0x5ee4f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005EF2E9: push 0 */
    PUSH32(esp, 0); /* 0x005EF2EB: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005EF2ED: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005EF2F2u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
