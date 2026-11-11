#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_0070F4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0070F4A0u);

L_0070F4A0:
    PUSH32(esp, ecx); /* 0x0070F4A0: push ecx */
    MEM32(ecx + 0x14C0) = 0; /* 0x0070F4A1: mov dword ptr [ecx + 0x14c0], 0 */
    MEM32(ecx + 0xA4) = 0; /* 0x0070F4AB: mov dword ptr [ecx + 0xa4], 0 */
    RECOMP_CALL(sub_0070F130); /* 0x0070F4B5: call 0x70f130 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0070F4BA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070F4BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_0070F4C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0070F4C0u);

L_0070F4C0:
    PUSH32(esp, ebp); /* 0x0070F4C0: push ebp */
    ebp = esp; /* 0x0070F4C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0070F4C3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0070F4C6: push ebx */
    PUSH32(esp, esi); /* 0x0070F4C7: push esi */
    esi = MEM32(ebp + 0x10); /* 0x0070F4C8: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0070F4CB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x0070F4CD: push edi */
    edi = MEM32(ebp + 0xC); /* 0x0070F4CE: mov edi, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x0070F4D1: mov eax, ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x0070F4D3: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = edi; /* 0x0070F4D6: mov dword ptr [ebp - 4], edi */
    /* cmp MEM32(esi + 0x28), ebx */ /* 0x0070F4D9: cmp dword ptr [esi + 0x28], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F736; /* 0x0070F4DC: je 0x70f736 */
L_0070F4E2:
    /* cmp MEM32(esi + 0x30), ebx */ /* 0x0070F4E2: cmp dword ptr [esi + 0x30], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F736; /* 0x0070F4E5: je 0x70f736 */
L_0070F4EB:
    /* cmp MEM32(esi + 0x2C), ebx */ /* 0x0070F4EB: cmp dword ptr [esi + 0x2c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F736; /* 0x0070F4EE: je 0x70f736 */
L_0070F4F4:
    /* cmp edx, 0x10Fu */ /* 0x0070F4F4: cmp edx, 0x10f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0070F5C7; /* 0x0070F4FA: ja 0x70f5c7 */
L_0070F500:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F554; /* 0x0070F500: je 0x70f554 */
L_0070F502:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x51u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x51u; /* 0x0070F502: sub edx, 0x51 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0070F544; /* 0x0070F505: je 0x70f544 */
L_0070F507:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xBCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0xBCu; /* 0x0070F507: sub edx, 0xbc */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0070F71D; /* 0x0070F50D: je 0x70f71d */
L_0070F513:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x0070F513: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0070F72D; /* 0x0070F514: jne 0x70f72d */
L_0070F51A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0070F51A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x0070F51C: push ecx */
    MEM16(esi + 0x40) = (uint16_t)(LO16(eax)); /* 0x0070F51D: mov word ptr [esi + 0x40], ax */
    ecx = 0x007CD0C4u; /* 0x0070F521: mov ecx, 0x7cd0c4 */
    MEM16(esi + 0x80) = (uint16_t)(LO16(eax)); /* 0x0070F526: mov word ptr [esi + 0x80], ax */
    MEM32(esi + 0xA0) = eax; /* 0x0070F52D: mov dword ptr [esi + 0xa0], eax */
    RECOMP_CALL(sub_006F0090); /* 0x0070F533: call 0x6f0090 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0070F538: add esp, 4 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x0070F53B: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x0070F53D: pop edi */
    esi = POP32_VAL(esp); /* 0x0070F53E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0070F53F: pop ebx */
    esp = ebp; /* 0x0070F540: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070F542: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070F543: ret  */
L_0070F544:
    ecx = esi; /* 0x0070F544: mov ecx, esi */
    RECOMP_CALL(sub_0070EB20); /* 0x0070F546: call 0x70eb20 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x0070F54B: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x0070F54D: pop edi */
    esi = POP32_VAL(esp); /* 0x0070F54E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0070F54F: pop ebx */
    esp = ebp; /* 0x0070F550: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070F552: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070F553: ret  */
L_0070F554:
    PUSH32(esp, eax); /* 0x0070F554: push eax */
    ebx = 1; /* 0x0070F555: mov ebx, 1 */
    RECOMP_ICALL(MEM32(0x7CC0C0)); /* 0x0070F55A: call dword ptr [0x7cc0c0] */
    RECOMP_FLAGS_IN();
    /* test MEM32(edi), 0x800u */ /* 0x0070F560: test dword ptr [edi], 0x800 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0070F566: mov dword ptr [ebp - 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0070F586; /* 0x0070F569: je 0x70f586 */
L_0070F56B:
    PUSH32(esp, 0x800u); /* 0x0070F56B: push 0x800 */
    edx = eax; /* 0x0070F570: mov edx, eax */
    ecx = esi; /* 0x0070F572: mov ecx, esi */
    RECOMP_CALL(sub_0070F040); /* 0x0070F574: call 0x70f040 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0070F579: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x0070F57C: mov ecx, esi */
    RECOMP_CALL(sub_0070F0D0); /* 0x0070F57E: call 0x70f0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0070F583: mov eax, dword ptr [ebp - 4] */
L_0070F586:
    /* test MEM8(edi), 8 */ /* 0x0070F586: test byte ptr [edi], 8 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0070F5B2; /* 0x0070F589: je 0x70f5b2 */
L_0070F58B:
    /* cmp MEM32(esi + 0x150C), 0 */ /* 0x0070F58B: cmp dword ptr [esi + 0x150c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x150C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0070F59D; /* 0x0070F592: jne 0x70f59d */
L_0070F594:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0070F594: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x80) = (uint16_t)(LO16(ecx)); /* 0x0070F596: mov word ptr [esi + 0x80], cx */
L_0070F59D:
    PUSH32(esp, 8); /* 0x0070F59D: push 8 */
    edx = eax; /* 0x0070F59F: mov edx, eax */
    ecx = esi; /* 0x0070F5A1: mov ecx, esi */
    RECOMP_CALL(sub_0070F040); /* 0x0070F5A3: call 0x70f040 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0070F5A8: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x0070F5AB: mov ecx, esi */
    RECOMP_CALL(sub_0070F130); /* 0x0070F5AD: call 0x70f130 */
    RECOMP_FLAGS_IN();
L_0070F5B2:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0070F5B2: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x0070F5B5: push dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(0x7CC0BC)); /* 0x0070F5B8: call dword ptr [0x7cc0bc] */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x0070F5BE: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x0070F5C0: pop edi */
    esi = POP32_VAL(esp); /* 0x0070F5C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x0070F5C2: pop ebx */
    esp = ebp; /* 0x0070F5C3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070F5C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070F5C6: ret  */
L_0070F5C7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x281u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x281u; /* 0x0070F5C7: sub edx, 0x281 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0070F72B; /* 0x0070F5CD: je 0x70f72b */
L_0070F5D3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x0070F5D3: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0070F72D; /* 0x0070F5D4: jne 0x70f72d */
L_0070F5DA:
    eax = MEM32(ebp + 0x8); /* 0x0070F5DA: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFDu; /* 0x0070F5DD: add eax, -3 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xBu */ /* 0x0070F5E0: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0070F71D; /* 0x0070F5E3: ja 0x70f71d */
L_0070F5E9:
    eax = (uint32_t)MEM8(eax + 0x70F754); /* 0x0070F5E9: movzx eax, byte ptr [eax + 0x70f754] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x70F740)); goto _ljump; }
L_0070F5F7:
    ecx = esi; /* 0x0070F5F7: mov ecx, esi */
    RECOMP_CALL(sub_0070EF60); /* 0x0070F5F9: call 0x70ef60 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x0070F5FE: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x0070F600: pop edi */
    esi = POP32_VAL(esp); /* 0x0070F601: pop esi */
    ebx = POP32_VAL(esp); /* 0x0070F602: pop ebx */
    esp = ebp; /* 0x0070F603: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070F605: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070F606: ret  */
L_0070F607:
    /* cmp MEM32(esi + 0x150C), ebx */ /* 0x0070F607: cmp dword ptr [esi + 0x150c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x150C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0070F72D; /* 0x0070F60D: jne 0x70f72d */
L_0070F613:
    ecx = esi; /* 0x0070F613: mov ecx, esi */
    ebx = 1; /* 0x0070F615: mov ebx, 1 */
    RECOMP_CALL(sub_0070F480); /* 0x0070F61A: call 0x70f480 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x8)); /* 0x0070F61F: mov edi, dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x0070F622: push edi */
    RECOMP_ICALL(MEM32(0x7CC0C0)); /* 0x0070F623: call dword ptr [0x7cc0c0] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x0070F629: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x0070F62C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0070F72D; /* 0x0070F62E: je 0x70f72d */
L_0070F634:
    edx = esi; /* 0x0070F634: mov edx, esi */
    ecx = eax; /* 0x0070F636: mov ecx, eax */
    RECOMP_CALL(sub_0070F2D0); /* 0x0070F638: call 0x70f2d0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0070F63D: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x0070F640: push edi */
    RECOMP_ICALL(MEM32(0x7CC0BC)); /* 0x0070F641: call dword ptr [0x7cc0bc] */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x0070F647: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x0070F649: pop edi */
    esi = POP32_VAL(esp); /* 0x0070F64A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0070F64B: pop ebx */
    esp = ebp; /* 0x0070F64C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070F64E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070F64F: ret  */
L_0070F650:
    ecx = esi; /* 0x0070F650: mov ecx, esi */
    ebx = 1; /* 0x0070F652: mov ebx, 1 */
    RECOMP_CALL(sub_0070F4A0); /* 0x0070F657: call 0x70f4a0 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x0070F65C: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x0070F65E: pop edi */
    esi = POP32_VAL(esp); /* 0x0070F65F: pop esi */
    ebx = POP32_VAL(esp); /* 0x0070F660: pop ebx */
    esp = ebp; /* 0x0070F661: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070F663: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070F664: ret  */
L_0070F665:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0070F665: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x0070F667: mov ecx, esi */
    RECOMP_CALL(sub_0070EB80); /* 0x0070F669: call 0x70eb80 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x0070F66E: mov edx, dword ptr [ebp - 8] */
    ecx = esi; /* 0x0070F671: mov ecx, esi */
    edi = eax; /* 0x0070F673: mov edi, eax */
    RECOMP_CALL(sub_0070E8F0); /* 0x0070F675: call 0x70e8f0 */
    RECOMP_FLAGS_IN();
    /* cmp edi, 0x05000404u */ /* 0x0070F67A: cmp edi, 0x5000404 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x05000404u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0070F6D4; /* 0x0070F680: ja 0x70f6d4 */
L_0070F682:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F6FF; /* 0x0070F682: je 0x70f6ff */
L_0070F684:
    /* cmp edi, 0x04020804u */ /* 0x0070F684: cmp edi, 0x4020804 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x04020804u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0070F6A7; /* 0x0070F68A: ja 0x70f6a7 */
L_0070F68C:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F6B7; /* 0x0070F68C: je 0x70f6b7 */
L_0070F68E:
    /* cmp edi, 0x04010804u */ /* 0x0070F68E: cmp edi, 0x4010804 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x04010804u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F6B7; /* 0x0070F694: je 0x70f6b7 */
L_0070F696:
    /* cmp edi, 0x04020404u */ /* 0x0070F696: cmp edi, 0x4020404 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x04020404u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F6B7; /* 0x0070F69C: je 0x70f6b7 */
L_0070F69E:
    eax = ebx; /* 0x0070F69E: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x0070F6A0: pop edi */
    esi = POP32_VAL(esp); /* 0x0070F6A1: pop esi */
    ebx = POP32_VAL(esp); /* 0x0070F6A2: pop ebx */
    esp = ebp; /* 0x0070F6A3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070F6A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070F6A6: ret  */
L_0070F6A7:
    /* cmp edi, 0x04030404u */ /* 0x0070F6A7: cmp edi, 0x4030404 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x04030404u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F6B7; /* 0x0070F6AD: je 0x70f6b7 */
L_0070F6AF:
    /* cmp edi, 0x04040404u */ /* 0x0070F6AF: cmp edi, 0x4040404 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x04040404u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0070F72D; /* 0x0070F6B5: jne 0x70f72d */
L_0070F6B7:
    eax = MEM32(ebp + (-0x4)); /* 0x0070F6B7: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax); /* 0x0070F6BA: mov eax, dword ptr [eax] */
    /* cmp eax, 1 */ /* 0x0070F6BC: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F71D; /* 0x0070F6BF: je 0x70f71d */
L_0070F6C1:
    /* cmp eax, 2 */ /* 0x0070F6C1: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0070F72D; /* 0x0070F6C4: jne 0x70f72d */
L_0070F6C6:
    ebx = 1; /* 0x0070F6C6: mov ebx, 1 */
    eax = ebx; /* 0x0070F6CB: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x0070F6CD: pop edi */
    esi = POP32_VAL(esp); /* 0x0070F6CE: pop esi */
    ebx = POP32_VAL(esp); /* 0x0070F6CF: pop ebx */
    esp = ebp; /* 0x0070F6D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070F6D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070F6D3: ret  */
L_0070F6D4:
    /* cmp edi, 0x05030804u */ /* 0x0070F6D4: cmp edi, 0x5030804 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x05030804u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0070F6F7; /* 0x0070F6DA: ja 0x70f6f7 */
L_0070F6DC:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F6FF; /* 0x0070F6DC: je 0x70f6ff */
L_0070F6DE:
    /* cmp edi, 0x05010404u */ /* 0x0070F6DE: cmp edi, 0x5010404 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x05010404u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F6FF; /* 0x0070F6E4: je 0x70f6ff */
L_0070F6E6:
    /* cmp edi, 0x05020404u */ /* 0x0070F6E6: cmp edi, 0x5020404 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x05020404u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F6FF; /* 0x0070F6EC: je 0x70f6ff */
L_0070F6EE:
    eax = ebx; /* 0x0070F6EE: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x0070F6F0: pop edi */
    esi = POP32_VAL(esp); /* 0x0070F6F1: pop esi */
    ebx = POP32_VAL(esp); /* 0x0070F6F2: pop ebx */
    esp = ebp; /* 0x0070F6F3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070F6F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070F6F6: ret  */
L_0070F6F7:
    /* cmp edi, 0x06000404u */ /* 0x0070F6F7: cmp edi, 0x6000404 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x06000404u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0070F72D; /* 0x0070F6FD: jne 0x70f72d */
L_0070F6FF:
    eax = MEM32(ebp + (-0x4)); /* 0x0070F6FF: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax); /* 0x0070F702: mov eax, dword ptr [eax] */
    /* cmp eax, 0x10u */ /* 0x0070F704: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F71D; /* 0x0070F707: je 0x70f71d */
L_0070F709:
    /* cmp eax, 0x11u */ /* 0x0070F709: cmp eax, 0x11 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F71D; /* 0x0070F70C: je 0x70f71d */
L_0070F70E:
    /* cmp eax, 0x1Au */ /* 0x0070F70E: cmp eax, 0x1a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F71D; /* 0x0070F711: je 0x70f71d */
L_0070F713:
    /* cmp eax, 0x1Bu */ /* 0x0070F713: cmp eax, 0x1b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070F71D; /* 0x0070F716: je 0x70f71d */
L_0070F718:
    /* cmp eax, 0x1Cu */ /* 0x0070F718: cmp eax, 0x1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0070F72D; /* 0x0070F71B: jne 0x70f72d */
L_0070F71D:
    ebx = 1; /* 0x0070F71D: mov ebx, 1 */
    eax = ebx; /* 0x0070F722: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x0070F724: pop edi */
    esi = POP32_VAL(esp); /* 0x0070F725: pop esi */
    ebx = POP32_VAL(esp); /* 0x0070F726: pop ebx */
    esp = ebp; /* 0x0070F727: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070F729: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070F72A: ret  */
L_0070F72B:
    MEM32(edi) = ebx; /* 0x0070F72B: mov dword ptr [edi], ebx */
L_0070F72D:
    eax = ebx; /* 0x0070F72D: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x0070F72F: pop edi */
    esi = POP32_VAL(esp); /* 0x0070F730: pop esi */
    ebx = POP32_VAL(esp); /* 0x0070F731: pop ebx */
    esp = ebp; /* 0x0070F732: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070F734: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070F735: ret  */
L_0070F736:
    edi = POP32_VAL(esp); /* 0x0070F736: pop edi */
    esi = POP32_VAL(esp); /* 0x0070F737: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0070F738: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0070F73A: pop ebx */
    esp = ebp; /* 0x0070F73B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070F73D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070F73E: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x0070F5F7u: goto L_0070F5F7;
      case 0x0070F607u: goto L_0070F607;
      case 0x0070F650u: goto L_0070F650;
      case 0x0070F665u: goto L_0070F665;
      case 0x0070F71Du: goto L_0070F71D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0070F760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0070F760u);

L_0070F760:
    PUSH32(esp, esi); /* 0x0070F760: push esi */
    esi = ecx; /* 0x0070F761: mov esi, ecx */
    MEM32(esi + 0x14C0) = 0; /* 0x0070F763: mov dword ptr [esi + 0x14c0], 0 */
    MEM32(esi + 0xA4) = 0; /* 0x0070F76D: mov dword ptr [esi + 0xa4], 0 */
    RECOMP_CALL(sub_0070F130); /* 0x0070F777: call 0x70f130 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1400u); /* 0x0070F77C: push 0x1400 */
    eax = esi + 0xA8; /* 0x0070F781: lea eax, [esi + 0xa8] */
    MEM32(esi + 0x14A8) = 0; /* 0x0070F787: mov dword ptr [esi + 0x14a8], 0 */
    PUSH32(esp, 0); /* 0x0070F791: push 0 */
    PUSH32(esp, eax); /* 0x0070F793: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x0070F794: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0070F799: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x0070F79C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070F79D: ret  */
    RECOMP_REGS_OUT();
}

void sub_0070F7A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0070F7A0u);

L_0070F7A0:
    PUSH32(esp, ebp); /* 0x0070F7A0: push ebp */
    ebp = esp; /* 0x0070F7A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0070F7A3: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(edx); /* 0x0070F7A6: mov eax, dword ptr [edx] */
    PUSH32(esp, ebx); /* 0x0070F7A8: push ebx */
    PUSH32(esp, esi); /* 0x0070F7A9: push esi */
    PUSH32(esp, edi); /* 0x0070F7AA: push edi */
    ebx = ecx; /* 0x0070F7AB: mov ebx, ecx */
    MEM32(ebp + (-0x10)) = 0; /* 0x0070F7AD: mov dword ptr [ebp - 0x10], 0 */
    ecx = ebp + (-0x10); /* 0x0070F7B4: lea ecx, [ebp - 0x10] */
    MEM32(ebp + (-0x4)) = 0; /* 0x0070F7B7: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, ecx); /* 0x0070F7BE: push ecx */
    MEM32(ebp + (-0x14)) = 0; /* 0x0070F7BF: mov dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0070F7C6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = 0; /* 0x0070F7C8: mov dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0070F7CF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x28); /* 0x0070F7D1: mov eax, dword ptr [eax + 0x28] */
    PUSH32(esp, edx); /* 0x0070F7D4: push edx */
    MEM32(ebp + (-0xC)) = edx; /* 0x0070F7D5: mov dword ptr [ebp - 0xc], edx */
    RECOMP_ICALL(eax); /* 0x0070F7D8: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x0070F7DA: mov ecx, dword ptr [ebp - 0xc] */
    edx = ebp + (-0x4); /* 0x0070F7DD: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x0070F7E0: push edx */
    PUSH32(esp, ecx); /* 0x0070F7E1: push ecx */
    eax = MEM32(ecx); /* 0x0070F7E2: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x24); /* 0x0070F7E4: mov eax, dword ptr [eax + 0x24] */
    RECOMP_ICALL(eax); /* 0x0070F7E7: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x0070F7E9: mov ecx, dword ptr [ebp - 0xc] */
    edx = ebp + (-0x14); /* 0x0070F7EC: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x0070F7EF: push edx */
    PUSH32(esp, ecx); /* 0x0070F7F0: push ecx */
    eax = MEM32(ecx); /* 0x0070F7F1: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x38); /* 0x0070F7F3: mov eax, dword ptr [eax + 0x38] */
    RECOMP_ICALL(eax); /* 0x0070F7F6: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x0070F7F8: mov eax, dword ptr [ebp - 0x10] */
    ecx = ebx; /* 0x0070F7FB: mov ecx, ebx */
    MEM32(ebx + 0x14B0) = eax; /* 0x0070F7FD: mov dword ptr [ebx + 0x14b0], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x0070F803: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0x14A8) = eax; /* 0x0070F806: mov dword ptr [ebx + 0x14a8], eax */
    MEM32(ebx + 0x14C0) = 1; /* 0x0070F80C: mov dword ptr [ebx + 0x14c0], 1 */
    MEM32(ebx + 0xA4) = 1; /* 0x0070F816: mov dword ptr [ebx + 0xa4], 1 */
    RECOMP_CALL(sub_0070F130); /* 0x0070F820: call 0x70f130 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x0070F825: mov ecx, dword ptr [ebp - 0xc] */
    edx = ebp + (-0x8); /* 0x0070F828: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x0070F82B: push edx */
    PUSH32(esp, edi); /* 0x0070F82C: push edi */
    PUSH32(esp, edi); /* 0x0070F82D: push edi */
    eax = MEM32(ecx); /* 0x0070F82E: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x0070F830: push ecx */
    eax = MEM32(eax + 0x30); /* 0x0070F831: mov eax, dword ptr [eax + 0x30] */
    RECOMP_ICALL(eax); /* 0x0070F834: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x0070F836: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x0070F839: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0070F893; /* 0x0070F83B: je 0x70f893 */
L_0070F83D:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x0070F83D: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x0070F83D: shl eax, 2 */
    PUSH32(esp, eax); /* 0x0070F840: push eax */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x0070F841: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x0070F847: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0070F849: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = edx; /* 0x0070F84C: mov dword ptr [ebp - 0x18], edx */
    /* test edx, edx */ /* 0x0070F84F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0070F893; /* 0x0070F851: je 0x70f893 */
L_0070F853:
    ecx = MEM32(ebp + (-0xC)); /* 0x0070F853: mov ecx, dword ptr [ebp - 0xc] */
    esi = ebp + (-0x8); /* 0x0070F856: lea esi, [ebp - 8] */
    PUSH32(esp, esi); /* 0x0070F859: push esi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x0070F85A: push dword ptr [ebp - 8] */
    eax = MEM32(ecx); /* 0x0070F85D: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x0070F85F: push edx */
    PUSH32(esp, ecx); /* 0x0070F860: push ecx */
    eax = MEM32(eax + 0x30); /* 0x0070F861: mov eax, dword ptr [eax + 0x30] */
    RECOMP_ICALL(eax); /* 0x0070F864: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x0070F866: mov ecx, dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + (-0x18)); /* 0x0070F869: mov edx, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x8)); /* 0x0070F86C: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0070F86F: dec eax */
    _flag_k = FK_DEC;
    esi = MEM32(edx + ecx * 4); /* 0x0070F870: mov esi, dword ptr [edx + ecx*4] */
    /* cmp ecx, eax */ /* 0x0070F873: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0070F884; /* 0x0070F875: jae 0x70f884 */
L_0070F877:
    edi = MEM32(edx + ecx * 4 + 0x4); /* 0x0070F877: mov edi, dword ptr [edx + ecx*4 + 4] */
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x0070F87B: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edi = MEM32(ebp + (-0x4)); } /* 0x0070F87E: cmovb edi, dword ptr [ebp - 4] */
    goto L_0070F887; /* 0x0070F882: jmp 0x70f887 */
L_0070F884:
    edi = MEM32(ebp + (-0x4)); /* 0x0070F884: mov edi, dword ptr [ebp - 4] */
L_0070F887:
    PUSH32(esp, edx); /* 0x0070F887: push edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x0070F888: sub edi, esi */
    _flag_k = FK_CMP;
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x0070F88A: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0070F890: add esp, 4 */
    _flag_k = FK_ADD;
L_0070F893:
    eax = 0xAu; /* 0x0070F893: mov eax, 0xa */
    /* cmp edi, eax */ /* 0x0070F898: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x1400u); /* 0x0070F89A: push 0x1400 */
    if (CMP_B(_flag_a, _flag_b)) { eax = edi; } /* 0x0070F89F: cmovb eax, edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14B0)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebx + 0x14B0) = MEM32(ebx + 0x14B0) - esi; /* 0x0070F8A2: sub dword ptr [ebx + 0x14b0], esi */
    _flag_k = FK_CMP;
    MEM32(ebx + 0x14B4) = eax; /* 0x0070F8A8: mov dword ptr [ebx + 0x14b4], eax */
    eax = ebx + 0xA8; /* 0x0070F8AE: lea eax, [ebx + 0xa8] */
    PUSH32(esp, 0); /* 0x0070F8B4: push 0 */
    PUSH32(esp, eax); /* 0x0070F8B6: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x0070F8B7: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0070F8BC: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0070F8BF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x0070F8C1: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0070F906; /* 0x0070F8C4: jae 0x70f906 */
L_0070F8C6:
    /* cmp edi, MEM32(ebx + 0x14B4) */ /* 0x0070F8C6: cmp edi, dword ptr [ebx + 0x14b4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x14B4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0070F906; /* 0x0070F8CC: jae 0x70f906 */
L_0070F8CE:
    ecx = MEM32(ebp + (-0xC)); /* 0x0070F8CE: mov ecx, dword ptr [ebp - 0xc] */
    edx = ebp + (-0x18); /* 0x0070F8D1: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x0070F8D4: push edx */
    PUSH32(esp, esi); /* 0x0070F8D5: push esi */
    PUSH32(esp, ecx); /* 0x0070F8D6: push ecx */
    eax = MEM32(ecx); /* 0x0070F8D7: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x2C); /* 0x0070F8D9: mov eax, dword ptr [eax + 0x2c] */
    RECOMP_ICALL(eax); /* 0x0070F8DC: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0070F8DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0070F8FF; /* 0x0070F8E0: js 0x70f8ff */
L_0070F8E2:
    eax = MEM32(ebp + (-0x18)); /* 0x0070F8E2: mov eax, dword ptr [ebp - 0x18] */
    /* test eax, eax */ /* 0x0070F8E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0070F8FF; /* 0x0070F8E7: je 0x70f8ff */
L_0070F8E9:
    PUSH32(esp, eax); /* 0x0070F8E9: push eax */
    edx = edi; /* 0x0070F8EA: mov edx, edi */
    ecx = ebx; /* 0x0070F8EC: mov ecx, ebx */
    RECOMP_CALL(sub_0070F240); /* 0x0070F8EE: call 0x70f240 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0070F8F3: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x0070F8F6: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x7CC6D4)); /* 0x0070F8F9: call dword ptr [0x7cc6d4] */
    RECOMP_FLAGS_IN();
L_0070F8FF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0070F8FF: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0070F900: inc edi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x0070F901: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0070F8C6; /* 0x0070F904: jb 0x70f8c6 */
L_0070F906:
    SET_LO16(eax, MEM16(ebx + 0x14EC)); /* 0x0070F906: mov ax, word ptr [ebx + 0x14ec] */
    ecx = 0x3FFu; /* 0x0070F90D: mov ecx, 0x3ff */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(ecx)); /* 0x0070F912: and ax, cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* cmp LO16(eax), 0x12u */ /* 0x0070F915: cmp ax, 0x12 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x12u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0070F925; /* 0x0070F919: jne 0x70f925 */
L_0070F91B:
    MEM32(ebx + 0x14B0) = 0xFFFFFFFFu; /* 0x0070F91B: mov dword ptr [ebx + 0x14b0], 0xffffffff */
L_0070F925:
    edi = POP32_VAL(esp); /* 0x0070F925: pop edi */
    esi = POP32_VAL(esp); /* 0x0070F926: pop esi */
    ebx = POP32_VAL(esp); /* 0x0070F927: pop ebx */
    esp = ebp; /* 0x0070F928: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070F92A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070F92B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0070F930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0070F930u);

L_0070F930:
    PUSH32(esp, ebp); /* 0x0070F930: push ebp */
    ebp = esp; /* 0x0070F931: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x0070F933: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x0070F936: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0070F939: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + 0x4) = eax; /* 0x0070F93A: mov dword ptr [ecx + 4], eax */
    ebp = POP32_VAL(esp); /* 0x0070F93D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0070F93E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0070F950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0070F950u);

L_0070F950:
    PUSH32(esp, ebp); /* 0x0070F950: push ebp */
    ebp = esp; /* 0x0070F951: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x0070F953: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x0070F956: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    ecx = MEM32(eax + 0x4); /* 0x0070F959: mov ecx, dword ptr [eax + 4] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0070F96E; /* 0x0070F95C: jne 0x70f96e */
L_0070F95E:
    PUSH32(esp, eax); /* 0x0070F95E: push eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x0070F95F: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0070F965: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0070F968: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x0070F96A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0070F96B: ret 4 */
L_0070F96E:
    eax = ecx; /* 0x0070F96E: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x0070F970: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0070F971: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0070F980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0070F980u);

L_0070F980:
    PUSH32(esp, ebp); /* 0x0070F980: push ebp */
    ebp = esp; /* 0x0070F981: mov ebp, esp */
    PUSH32(esp, esi); /* 0x0070F983: push esi */
    esi = MEM32(ebp + 0x10); /* 0x0070F984: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x0070F987: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0070F995; /* 0x0070F989: jne 0x70f995 */
L_0070F98B:
    eax = 0x80070057u; /* 0x0070F98B: mov eax, 0x80070057 */
    esi = POP32_VAL(esp); /* 0x0070F990: pop esi */
    ebp = POP32_VAL(esp); /* 0x0070F991: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0070F992: ret 0xc */
L_0070F995:
    ecx = MEM32(ebp + 0xC); /* 0x0070F995: mov ecx, dword ptr [ebp + 0xc] */
    edx = 0x007CCDE8u; /* 0x0070F998: mov edx, 0x7ccde8 */
    PUSH32(esp, 0x10u); /* 0x0070F99D: push 0x10 */
    MEM32(esi) = 0; /* 0x0070F99F: mov dword ptr [esi], 0 */
    RECOMP_CALL(sub_006F2A80); /* 0x0070F9A5: call 0x6f2a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0070F9AA: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0070F9AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0070F9C7; /* 0x0070F9AF: je 0x70f9c7 */
L_0070F9B1:
    ecx = MEM32(ebp + 0xC); /* 0x0070F9B1: mov ecx, dword ptr [ebp + 0xc] */
    edx = 0x007CCDB8u; /* 0x0070F9B4: mov edx, 0x7ccdb8 */
    PUSH32(esp, 0x10u); /* 0x0070F9B9: push 0x10 */
    RECOMP_CALL(sub_006F2A80); /* 0x0070F9BB: call 0x6f2a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0070F9C0: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0070F9C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0070F9DA; /* 0x0070F9C5: jne 0x70f9da */
L_0070F9C7:
    eax = MEM32(ebp + 0x8); /* 0x0070F9C7: mov eax, dword ptr [ebp + 8] */
    MEM32(esi) = eax; /* 0x0070F9CA: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x0070F9CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0070F9DA; /* 0x0070F9CE: je 0x70f9da */
L_0070F9D0:
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) + 1; /* 0x0070F9D0: inc dword ptr [eax + 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0070F9D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0070F9D5: pop esi */
    ebp = POP32_VAL(esp); /* 0x0070F9D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0070F9D7: ret 0xc */
L_0070F9DA:
    eax = 0x80004002u; /* 0x0070F9DA: mov eax, 0x80004002 */
    esi = POP32_VAL(esp); /* 0x0070F9DF: pop esi */
    ebp = POP32_VAL(esp); /* 0x0070F9E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0070F9E1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0070F9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0070F9F0u);

L_0070F9F0:
    PUSH32(esp, ebp); /* 0x0070F9F0: push ebp */
    ebp = esp; /* 0x0070F9F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0070F9F3: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0070F9F6: push esi */
    PUSH32(esp, edi); /* 0x0070F9F7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x0070F9F8: mov edi, dword ptr [ebp + 8] */
    edx = ebp + (-0x4); /* 0x0070F9FB: lea edx, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0; /* 0x0070F9FE: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0xC)) = 0; /* 0x0070FA05: mov dword ptr [ebp - 0xc], 0 */
    PUSH32(esp, edx); /* 0x0070FA0C: push edx */
    eax = MEM32(edi + 0x8); /* 0x0070FA0D: mov eax, dword ptr [edi + 8] */
    PUSH32(esp, 0x007CCDA8u); /* 0x0070FA10: push 0x7ccda8 */
    eax = MEM32(eax + 0x1510); /* 0x0070FA15: mov eax, dword ptr [eax + 0x1510] */
    PUSH32(esp, eax); /* 0x0070FA1B: push eax */
    ecx = MEM32(eax); /* 0x0070FA1C: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx); /* 0x0070FA1E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(eax); /* 0x0070FA20: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0070FA22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0070FA43; /* 0x0070FA24: js 0x70fa43 */
L_0070FA26:
    eax = MEM32(ebp + (-0x4)); /* 0x0070FA26: mov eax, dword ptr [ebp - 4] */
    edx = ebp + (-0xC); /* 0x0070FA29: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x0070FA2C: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0070FA2D: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x0070FA30: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x0070FA32: push eax */
    eax = MEM32(ecx + 0x18); /* 0x0070FA33: mov eax, dword ptr [ecx + 0x18] */
    RECOMP_ICALL(eax); /* 0x0070FA36: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0070FA38: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x0070FA3B: push eax */
    ecx = MEM32(eax); /* 0x0070FA3C: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x8); /* 0x0070FA3E: mov eax, dword ptr [ecx + 8] */
    RECOMP_ICALL(eax); /* 0x0070FA41: call eax */
    RECOMP_FLAGS_IN();
L_0070FA43:
    esi = MEM32(ebp + (-0xC)); /* 0x0070FA43: mov esi, dword ptr [ebp - 0xc] */
    edi = MEM32(edi + 0x8); /* 0x0070FA46: mov edi, dword ptr [edi + 8] */
    MEM32(ebp + 0x8) = 0; /* 0x0070FA49: mov dword ptr [ebp + 8], 0 */
    MEM32(ebp + (-0x8)) = 0; /* 0x0070FA50: mov dword ptr [ebp - 8], 0 */
    /* test esi, esi */ /* 0x0070FA57: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0070FA68; /* 0x0070FA59: jne 0x70fa68 */
L_0070FA5B:
    edi = POP32_VAL(esp); /* 0x0070FA5B: pop edi */
    eax = 0x80070057u; /* 0x0070FA5C: mov eax, 0x80070057 */
    esi = POP32_VAL(esp); /* 0x0070FA61: pop esi */
    esp = ebp; /* 0x0070FA62: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070FA64: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0070FA65: ret 0xc */
L_0070FA68:
    eax = MEM32(ebp + 0x10); /* 0x0070FA68: mov eax, dword ptr [ebp + 0x10] */
    ecx = ebp + 0x8; /* 0x0070FA6B: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x0070FA6E: push ecx */
    PUSH32(esp, 0x007CCDD8u); /* 0x0070FA6F: push 0x7ccdd8 */
    PUSH32(esp, esi); /* 0x0070FA74: push esi */
    MEM32(eax) = 0; /* 0x0070FA75: mov dword ptr [eax], 0 */
    eax = MEM32(esi); /* 0x0070FA7B: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x0070FA7D: mov eax, dword ptr [eax] */
    RECOMP_ICALL(eax); /* 0x0070FA7F: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0070FA81: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0070FABB; /* 0x0070FA83: js 0x70fabb */
L_0070FA85:
    eax = MEM32(ebp + 0x8); /* 0x0070FA85: mov eax, dword ptr [ebp + 8] */
    edx = ebp + 0xC; /* 0x0070FA88: lea edx, [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x0070FA8B: push edx */
    PUSH32(esp, eax); /* 0x0070FA8C: push eax */
    ecx = MEM32(eax); /* 0x0070FA8D: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x24); /* 0x0070FA8F: mov eax, dword ptr [ecx + 0x24] */
    RECOMP_ICALL(eax); /* 0x0070FA92: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0070FA94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0070FAA6; /* 0x0070FA96: js 0x70faa6 */
L_0070FA98:
    eax = MEM32(ebp + 0xC); /* 0x0070FA98: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x0070FA9B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0070FAA6; /* 0x0070FA9D: je 0x70faa6 */
L_0070FA9F:
    PUSH32(esp, eax); /* 0x0070FA9F: push eax */
    RECOMP_ICALL(MEM32(0x7CC6D4)); /* 0x0070FAA0: call dword ptr [0x7cc6d4] */
    RECOMP_FLAGS_IN();
L_0070FAA6:
    eax = MEM32(ebp + 0x8); /* 0x0070FAA6: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x0070FAA9: push eax */
    ecx = MEM32(eax); /* 0x0070FAAA: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x8); /* 0x0070FAAC: mov eax, dword ptr [ecx + 8] */
    RECOMP_ICALL(eax); /* 0x0070FAAF: call eax */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0070FAB1: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0070FAB2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0070FAB4: pop esi */
    esp = ebp; /* 0x0070FAB5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070FAB7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0070FAB8: ret 0xc */
L_0070FABB:
    eax = MEM32(esi); /* 0x0070FABB: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x8); /* 0x0070FABD: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x0070FAC0: push ecx */
    PUSH32(esp, 0x007CCDC8u); /* 0x0070FAC1: push 0x7ccdc8 */
    PUSH32(esp, esi); /* 0x0070FAC6: push esi */
    eax = MEM32(eax); /* 0x0070FAC7: mov eax, dword ptr [eax] */
    RECOMP_ICALL(eax); /* 0x0070FAC9: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0070FACB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0070FAEA; /* 0x0070FACD: js 0x70faea */
L_0070FACF:
    _flag_a = (uint32_t)(MEM32(edi + 0x14AC)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x14AC) = MEM32(edi + 0x14AC) + 1; /* 0x0070FACF: inc dword ptr [edi + 0x14ac] */
    _flag_k = FK_INC;
    ecx = edi; /* 0x0070FAD5: mov ecx, edi */
    edx = MEM32(ebp + (-0x8)); /* 0x0070FAD7: mov edx, dword ptr [ebp - 8] */
    RECOMP_CALL(sub_0070F7A0); /* 0x0070FADA: call 0x70f7a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x0070FADF: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x0070FAE2: push eax */
    ecx = MEM32(eax); /* 0x0070FAE3: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x8); /* 0x0070FAE5: mov eax, dword ptr [ecx + 8] */
    RECOMP_ICALL(eax); /* 0x0070FAE8: call eax */
    RECOMP_FLAGS_IN();
L_0070FAEA:
    edi = POP32_VAL(esp); /* 0x0070FAEA: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0070FAEB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0070FAED: pop esi */
    esp = ebp; /* 0x0070FAEE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070FAF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0070FAF1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0070FB00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0070FB00u);

L_0070FB00:
    PUSH32(esp, ebp); /* 0x0070FB00: push ebp */
    ebp = esp; /* 0x0070FB01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0070FB03: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0070FB06: push esi */
    PUSH32(esp, edi); /* 0x0070FB07: push edi */
    edi = MEM32(ebp + 0x8); /* 0x0070FB08: mov edi, dword ptr [ebp + 8] */
    edx = ebp + (-0x4); /* 0x0070FB0B: lea edx, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0; /* 0x0070FB0E: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0xC)) = 0; /* 0x0070FB15: mov dword ptr [ebp - 0xc], 0 */
    PUSH32(esp, edx); /* 0x0070FB1C: push edx */
    eax = MEM32(edi + 0x8); /* 0x0070FB1D: mov eax, dword ptr [edi + 8] */
    PUSH32(esp, 0x007CCDA8u); /* 0x0070FB20: push 0x7ccda8 */
    eax = MEM32(eax + 0x1510); /* 0x0070FB25: mov eax, dword ptr [eax + 0x1510] */
    PUSH32(esp, eax); /* 0x0070FB2B: push eax */
    ecx = MEM32(eax); /* 0x0070FB2C: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx); /* 0x0070FB2E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(eax); /* 0x0070FB30: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0070FB32: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0070FB53; /* 0x0070FB34: js 0x70fb53 */
L_0070FB36:
    eax = MEM32(ebp + (-0x4)); /* 0x0070FB36: mov eax, dword ptr [ebp - 4] */
    edx = ebp + (-0xC); /* 0x0070FB39: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x0070FB3C: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0070FB3D: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x0070FB40: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x0070FB42: push eax */
    eax = MEM32(ecx + 0x18); /* 0x0070FB43: mov eax, dword ptr [ecx + 0x18] */
    RECOMP_ICALL(eax); /* 0x0070FB46: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0070FB48: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x0070FB4B: push eax */
    ecx = MEM32(eax); /* 0x0070FB4C: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x8); /* 0x0070FB4E: mov eax, dword ptr [ecx + 8] */
    RECOMP_ICALL(eax); /* 0x0070FB51: call eax */
    RECOMP_FLAGS_IN();
L_0070FB53:
    esi = MEM32(ebp + (-0xC)); /* 0x0070FB53: mov esi, dword ptr [ebp - 0xc] */
    edi = MEM32(edi + 0x8); /* 0x0070FB56: mov edi, dword ptr [edi + 8] */
    MEM32(ebp + 0x8) = 0; /* 0x0070FB59: mov dword ptr [ebp + 8], 0 */
    MEM32(ebp + (-0x8)) = 0; /* 0x0070FB60: mov dword ptr [ebp - 8], 0 */
    /* test esi, esi */ /* 0x0070FB67: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0070FB78; /* 0x0070FB69: jne 0x70fb78 */
L_0070FB6B:
    edi = POP32_VAL(esp); /* 0x0070FB6B: pop edi */
    eax = 0x80070057u; /* 0x0070FB6C: mov eax, 0x80070057 */
    esi = POP32_VAL(esp); /* 0x0070FB71: pop esi */
    esp = ebp; /* 0x0070FB72: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070FB74: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0070FB75: ret 8 */
L_0070FB78:
    eax = MEM32(esi); /* 0x0070FB78: mov eax, dword ptr [esi] */
    ecx = ebp + 0x8; /* 0x0070FB7A: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x0070FB7D: push ecx */
    PUSH32(esp, 0x007CCDD8u); /* 0x0070FB7E: push 0x7ccdd8 */
    PUSH32(esp, esi); /* 0x0070FB83: push esi */
    eax = MEM32(eax); /* 0x0070FB84: mov eax, dword ptr [eax] */
    RECOMP_ICALL(eax); /* 0x0070FB86: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0070FB88: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0070FC03; /* 0x0070FB8A: js 0x70fc03 */
L_0070FB8C:
    eax = MEM32(ebp + 0x8); /* 0x0070FB8C: mov eax, dword ptr [ebp + 8] */
    edx = ebp + 0xC; /* 0x0070FB8F: lea edx, [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x0070FB92: push edx */
    PUSH32(esp, eax); /* 0x0070FB93: push eax */
    ecx = MEM32(eax); /* 0x0070FB94: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x24); /* 0x0070FB96: mov eax, dword ptr [ecx + 0x24] */
    RECOMP_ICALL(eax); /* 0x0070FB99: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0070FB9B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0070FBEE; /* 0x0070FB9D: js 0x70fbee */
L_0070FB9F:
    ecx = MEM32(ebp + 0xC); /* 0x0070FB9F: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x0070FBA2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0070FBEE; /* 0x0070FBA4: je 0x70fbee */
L_0070FBA6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0070FBA6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x0070FBA8: mov eax, ecx */
    PUSH32(esp, ebx); /* 0x0070FBAA: push ebx */
    ebx = edi + 0x80; /* 0x0070FBAB: lea ebx, [edi + 0x80] */
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x0070FBB1: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0070FBCA; /* 0x0070FBB4: je 0x70fbca */
L_0070FBB6:
    eax = eax + 0x2; /* 0x0070FBB6: lea eax, [eax + 2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0070FBB9: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM16(eax), 0 */ /* 0x0070FBBA: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0070FBB6; /* 0x0070FBBE: jne 0x70fbb6 */
L_0070FBC0:
    /* cmp esi, 0xFu */ /* 0x0070FBC0: cmp esi, 0xf */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0070FBCA; /* 0x0070FBC3: jb 0x70fbca */
L_0070FBC5:
    esi = 0xFu; /* 0x0070FBC5: mov esi, 0xf */
L_0070FBCA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x0070FBCA: add esi, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x0070FBCC: push esi */
    PUSH32(esp, ecx); /* 0x0070FBCD: push ecx */
    PUSH32(esp, ebx); /* 0x0070FBCE: push ebx */
    RECOMP_CALL(sub_00780838); /* 0x0070FBCF: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0070FBD4: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0070FBD7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x0070FBD9: mov ecx, edi */
    MEM16(esi + ebx) = (uint16_t)(LO16(eax)); /* 0x0070FBDB: mov word ptr [esi + ebx], ax */
    RECOMP_CALL(sub_0070F130); /* 0x0070FBDF: call 0x70f130 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0070FBE4: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC6D4)); /* 0x0070FBE7: call dword ptr [0x7cc6d4] */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x0070FBED: pop ebx */
L_0070FBEE:
    eax = MEM32(ebp + 0x8); /* 0x0070FBEE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x0070FBF1: push eax */
    ecx = MEM32(eax); /* 0x0070FBF2: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x8); /* 0x0070FBF4: mov eax, dword ptr [ecx + 8] */
    RECOMP_ICALL(eax); /* 0x0070FBF7: call eax */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0070FBF9: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0070FBFA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0070FBFC: pop esi */
    esp = ebp; /* 0x0070FBFD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070FBFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0070FC00: ret 8 */
L_0070FC03:
    eax = MEM32(esi); /* 0x0070FC03: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x8); /* 0x0070FC05: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x0070FC08: push ecx */
    PUSH32(esp, 0x007CCDC8u); /* 0x0070FC09: push 0x7ccdc8 */
    PUSH32(esp, esi); /* 0x0070FC0E: push esi */
    eax = MEM32(eax); /* 0x0070FC0F: mov eax, dword ptr [eax] */
    RECOMP_ICALL(eax); /* 0x0070FC11: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0070FC13: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0070FC2C; /* 0x0070FC15: js 0x70fc2c */
L_0070FC17:
    edx = MEM32(ebp + (-0x8)); /* 0x0070FC17: mov edx, dword ptr [ebp - 8] */
    ecx = edi; /* 0x0070FC1A: mov ecx, edi */
    RECOMP_CALL(sub_0070F7A0); /* 0x0070FC1C: call 0x70f7a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x0070FC21: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x0070FC24: push eax */
    ecx = MEM32(eax); /* 0x0070FC25: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x8); /* 0x0070FC27: mov eax, dword ptr [ecx + 8] */
    RECOMP_ICALL(eax); /* 0x0070FC2A: call eax */
    RECOMP_FLAGS_IN();
L_0070FC2C:
    edi = POP32_VAL(esp); /* 0x0070FC2C: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0070FC2D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0070FC2F: pop esi */
    esp = ebp; /* 0x0070FC30: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070FC32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0070FC33: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0070FC40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0070FC40u);

L_0070FC40:
    PUSH32(esp, ebp); /* 0x0070FC40: push ebp */
    ebp = esp; /* 0x0070FC41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0070FC43: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0070FC46: push esi */
    esi = MEM32(ebp + 0x8); /* 0x0070FC47: mov esi, dword ptr [ebp + 8] */
    edx = ebp + (-0x4); /* 0x0070FC4A: lea edx, [ebp - 4] */
    PUSH32(esp, edi); /* 0x0070FC4D: push edi */
    MEM32(ebp + (-0x4)) = 0; /* 0x0070FC4E: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x8)) = 0; /* 0x0070FC55: mov dword ptr [ebp - 8], 0 */
    eax = MEM32(esi + 0x8); /* 0x0070FC5C: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, edx); /* 0x0070FC5F: push edx */
    PUSH32(esp, 0x007CCDA8u); /* 0x0070FC60: push 0x7ccda8 */
    eax = MEM32(eax + 0x1510); /* 0x0070FC65: mov eax, dword ptr [eax + 0x1510] */
    PUSH32(esp, eax); /* 0x0070FC6B: push eax */
    ecx = MEM32(eax); /* 0x0070FC6C: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx); /* 0x0070FC6E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(eax); /* 0x0070FC70: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0070FC72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0070FC93; /* 0x0070FC74: js 0x70fc93 */
L_0070FC76:
    eax = MEM32(ebp + (-0x4)); /* 0x0070FC76: mov eax, dword ptr [ebp - 4] */
    edx = ebp + (-0x8); /* 0x0070FC79: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x0070FC7C: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0070FC7D: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x0070FC80: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x0070FC82: push eax */
    eax = MEM32(ecx + 0x18); /* 0x0070FC83: mov eax, dword ptr [ecx + 0x18] */
    RECOMP_ICALL(eax); /* 0x0070FC86: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0070FC88: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x0070FC8B: push eax */
    ecx = MEM32(eax); /* 0x0070FC8C: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x8); /* 0x0070FC8E: mov eax, dword ptr [ecx + 8] */
    RECOMP_ICALL(eax); /* 0x0070FC91: call eax */
    RECOMP_FLAGS_IN();
L_0070FC93:
    edi = MEM32(ebp + (-0x8)); /* 0x0070FC93: mov edi, dword ptr [ebp - 8] */
    esi = MEM32(esi + 0x8); /* 0x0070FC96: mov esi, dword ptr [esi + 8] */
    MEM32(ebp + 0x8) = 0; /* 0x0070FC99: mov dword ptr [ebp + 8], 0 */
    MEM32(ebp + (-0xC)) = 0; /* 0x0070FCA0: mov dword ptr [ebp - 0xc], 0 */
    /* test edi, edi */ /* 0x0070FCA7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0070FCB8; /* 0x0070FCA9: jne 0x70fcb8 */
L_0070FCAB:
    edi = POP32_VAL(esp); /* 0x0070FCAB: pop edi */
    eax = 0x80070057u; /* 0x0070FCAC: mov eax, 0x80070057 */
    esi = POP32_VAL(esp); /* 0x0070FCB1: pop esi */
    esp = ebp; /* 0x0070FCB2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070FCB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0070FCB5: ret 8 */
L_0070FCB8:
    eax = MEM32(edi); /* 0x0070FCB8: mov eax, dword ptr [edi] */
    ecx = ebp + 0x8; /* 0x0070FCBA: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x0070FCBD: push ecx */
    PUSH32(esp, 0x007CCDD8u); /* 0x0070FCBE: push 0x7ccdd8 */
    PUSH32(esp, edi); /* 0x0070FCC3: push edi */
    eax = MEM32(eax); /* 0x0070FCC4: mov eax, dword ptr [eax] */
    RECOMP_ICALL(eax); /* 0x0070FCC6: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0070FCC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0070FCE7; /* 0x0070FCCA: js 0x70fce7 */
L_0070FCCC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0070FCCC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x0070FCCE: mov ecx, esi */
    MEM16(esi + 0x80) = (uint16_t)(LO16(eax)); /* 0x0070FCD0: mov word ptr [esi + 0x80], ax */
    RECOMP_CALL(sub_0070F130); /* 0x0070FCD7: call 0x70f130 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x0070FCDC: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x0070FCDF: push eax */
    ecx = MEM32(eax); /* 0x0070FCE0: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x8); /* 0x0070FCE2: mov eax, dword ptr [ecx + 8] */
    RECOMP_ICALL(eax); /* 0x0070FCE5: call eax */
    RECOMP_FLAGS_IN();
L_0070FCE7:
    eax = MEM32(edi); /* 0x0070FCE7: mov eax, dword ptr [edi] */
    ecx = ebp + (-0xC); /* 0x0070FCE9: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x0070FCEC: push ecx */
    PUSH32(esp, 0x007CCDC8u); /* 0x0070FCED: push 0x7ccdc8 */
    PUSH32(esp, edi); /* 0x0070FCF2: push edi */
    eax = MEM32(eax); /* 0x0070FCF3: mov eax, dword ptr [eax] */
    RECOMP_ICALL(eax); /* 0x0070FCF5: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0070FCF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0070FD15; /* 0x0070FCF9: js 0x70fd15 */
L_0070FCFB:
    _flag_a = (uint32_t)(MEM32(esi + 0x14AC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14AC) = MEM32(esi + 0x14AC) - 1; /* 0x0070FCFB: dec dword ptr [esi + 0x14ac] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0070FD0A; /* 0x0070FD01: jne 0x70fd0a */
L_0070FD03:
    ecx = esi; /* 0x0070FD03: mov ecx, esi */
    RECOMP_CALL(sub_0070F760); /* 0x0070FD05: call 0x70f760 */
    RECOMP_FLAGS_IN();
L_0070FD0A:
    eax = MEM32(ebp + (-0xC)); /* 0x0070FD0A: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x0070FD0D: push eax */
    ecx = MEM32(eax); /* 0x0070FD0E: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x8); /* 0x0070FD10: mov eax, dword ptr [ecx + 8] */
    RECOMP_ICALL(eax); /* 0x0070FD13: call eax */
    RECOMP_FLAGS_IN();
L_0070FD15:
    edi = POP32_VAL(esp); /* 0x0070FD15: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0070FD16: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0070FD18: pop esi */
    esp = ebp; /* 0x0070FD19: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070FD1B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0070FD1C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0070FD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0070FD20u);

L_0070FD20:
    PUSH32(esp, ebp); /* 0x0070FD20: push ebp */
    ebp = esp; /* 0x0070FD21: mov ebp, esp */
    PUSH32(esp, esi); /* 0x0070FD23: push esi */
    esi = MEM32(ebp + 0x10); /* 0x0070FD24: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x0070FD27: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0070FD35; /* 0x0070FD29: jne 0x70fd35 */
L_0070FD2B:
    eax = 0x80070057u; /* 0x0070FD2B: mov eax, 0x80070057 */
    esi = POP32_VAL(esp); /* 0x0070FD30: pop esi */
    ebp = POP32_VAL(esp); /* 0x0070FD31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0070FD32: ret 0xc */
L_0070FD35:
    ecx = MEM32(ebp + 0xC); /* 0x0070FD35: mov ecx, dword ptr [ebp + 0xc] */
    edx = 0x007CCDE8u; /* 0x0070FD38: mov edx, 0x7ccde8 */
    PUSH32(esp, 0x10u); /* 0x0070FD3D: push 0x10 */
    MEM32(esi) = 0; /* 0x0070FD3F: mov dword ptr [esi], 0 */
    RECOMP_CALL(sub_006F2A80); /* 0x0070FD45: call 0x6f2a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0070FD4A: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0070FD4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0070FD67; /* 0x0070FD4F: je 0x70fd67 */
L_0070FD51:
    ecx = MEM32(ebp + 0xC); /* 0x0070FD51: mov ecx, dword ptr [ebp + 0xc] */
    edx = 0x007CCD88u; /* 0x0070FD54: mov edx, 0x7ccd88 */
    PUSH32(esp, 0x10u); /* 0x0070FD59: push 0x10 */
    RECOMP_CALL(sub_006F2A80); /* 0x0070FD5B: call 0x6f2a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0070FD60: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0070FD63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0070FD7A; /* 0x0070FD65: jne 0x70fd7a */
L_0070FD67:
    eax = MEM32(ebp + 0x8); /* 0x0070FD67: mov eax, dword ptr [ebp + 8] */
    MEM32(esi) = eax; /* 0x0070FD6A: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x0070FD6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0070FD7A; /* 0x0070FD6E: je 0x70fd7a */
L_0070FD70:
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) + 1; /* 0x0070FD70: inc dword ptr [eax + 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0070FD73: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0070FD75: pop esi */
    ebp = POP32_VAL(esp); /* 0x0070FD76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0070FD77: ret 0xc */
L_0070FD7A:
    eax = 0x80004002u; /* 0x0070FD7A: mov eax, 0x80004002 */
    esi = POP32_VAL(esp); /* 0x0070FD7F: pop esi */
    ebp = POP32_VAL(esp); /* 0x0070FD80: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0070FD81: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0070FD90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0070FD90u);

L_0070FD90:
    PUSH32(esp, ebp); /* 0x0070FD90: push ebp */
    ebp = esp; /* 0x0070FD91: mov ebp, esp */
    edx = MEM32(ebp + 0x1C); /* 0x0070FD93: mov edx, dword ptr [ebp + 0x1c] */
    ecx = 0x007D6560u; /* 0x0070FD96: mov ecx, 0x7d6560 */
    PUSH32(esp, ebx); /* 0x0070FD9B: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x0070FD9C: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0070FD9F: push esi */
    PUSH32(esp, edi); /* 0x0070FDA0: push edi */
    esi = 0xCu; /* 0x0070FDA1: mov esi, 0xc */
    edi = MEM32(ebx + 0x8); /* 0x0070FDA6: mov edi, dword ptr [ebx + 8] */
    esp = esp; /* 0x0070FDA9: lea esp, [esp] */
L_0070FDB0:
    eax = MEM32(ecx); /* 0x0070FDB0: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x0070FDB2: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0070FDC5; /* 0x0070FDB4: jne 0x70fdc5 */
L_0070FDB6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x0070FDB6: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x0070FDB9: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x0070FDBC: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_0070FDB0; /* 0x0070FDBF: jae 0x70fdb0 */
L_0070FDC1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0070FDC1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0070FDCA; /* 0x0070FDC3: jmp 0x70fdca */
L_0070FDC5:
    eax = 1; /* 0x0070FDC5: mov eax, 1 */
L_0070FDCA:
    ecx = MEM32(ebp + 0x18); /* 0x0070FDCA: mov ecx, dword ptr [ebp + 0x18] */
    edx = 0x007CCD58u; /* 0x0070FDCD: mov edx, 0x7ccd58 */
    MEM32(edi + 0x14B8) = eax; /* 0x0070FDD2: mov dword ptr [edi + 0x14b8], eax */
    esi = 0xCu; /* 0x0070FDD8: mov esi, 0xc */
    ecx = ecx; /* 0x0070FDDD: lea ecx, [ecx] */
L_0070FDE0:
    eax = MEM32(ecx); /* 0x0070FDE0: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x0070FDE2: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0070FDFF; /* 0x0070FDE4: jne 0x70fdff */
L_0070FDE6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x0070FDE6: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x0070FDE9: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x0070FDEC: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_0070FDE0; /* 0x0070FDEF: jae 0x70fde0 */
L_0070FDF1:
    /* test MEM8(ebp + 0x24), 1 */ /* 0x0070FDF1: test byte ptr [ebp + 0x24], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x24)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0070FDFF; /* 0x0070FDF5: je 0x70fdff */
L_0070FDF7:
    ecx = MEM32(ebx + 0x8); /* 0x0070FDF7: mov ecx, dword ptr [ebx + 8] */
    RECOMP_CALL(sub_0070EB20); /* 0x0070FDFA: call 0x70eb20 */
    RECOMP_FLAGS_IN();
L_0070FDFF:
    ecx = edi; /* 0x0070FDFF: mov ecx, edi */
    MEM32(edi + 0x14C0) = 0; /* 0x0070FE01: mov dword ptr [edi + 0x14c0], 0 */
    MEM32(edi + 0xA4) = 0; /* 0x0070FE0B: mov dword ptr [edi + 0xa4], 0 */
    RECOMP_CALL(sub_0070F130); /* 0x0070FE15: call 0x70f130 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0070FE1A: pop edi */
    esi = POP32_VAL(esp); /* 0x0070FE1B: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0070FE1C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0070FE1E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0070FE1F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x0070FE20: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_0070FF00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0070FF00u);

L_0070FF00:
    PUSH32(esp, ebp); /* 0x0070FF00: push ebp */
    ebp = esp; /* 0x0070FF01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0070FF03: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0070FF06: push ebx */
    PUSH32(esp, esi); /* 0x0070FF07: push esi */
    ebx = ecx; /* 0x0070FF08: mov ebx, ecx */
    MEM32(ebp + (-0xC)) = 0; /* 0x0070FF0A: mov dword ptr [ebp - 0xc], 0 */
    MEM32(ebp + (-0x8)) = 0; /* 0x0070FF11: mov dword ptr [ebp - 8], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0070FF18: mov dword ptr [ebp - 4], 0 */
    esi = ebx + 0x1510; /* 0x0070FF1F: lea esi, [ebx + 0x1510] */
    PUSH32(esp, esi); /* 0x0070FF25: push esi */
    PUSH32(esp, 0x007CCD78u); /* 0x0070FF26: push 0x7ccd78 */
    PUSH32(esp, 1); /* 0x0070FF2B: push 1 */
    PUSH32(esp, 0); /* 0x0070FF2D: push 0 */
    PUSH32(esp, 0x007CCD48u); /* 0x0070FF2F: push 0x7ccd48 */
    RECOMP_ICALL(MEM32(0x7CC95C)); /* 0x0070FF34: call dword ptr [0x7cc95c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0070FF3A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0070FF46; /* 0x0070FF3C: jns 0x70ff46 */
L_0070FF3E:
    esi = POP32_VAL(esp); /* 0x0070FF3E: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0070FF3F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0070FF41: pop ebx */
    esp = ebp; /* 0x0070FF42: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0070FF44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0070FF45: ret  */
L_0070FF46:
    eax = MEM32(esi); /* 0x0070FF46: mov eax, dword ptr [esi] */
    edx = ebp + (-0xC); /* 0x0070FF48: lea edx, [ebp - 0xc] */
    PUSH32(esp, 4); /* 0x0070FF4B: push 4 */
    PUSH32(esp, edx); /* 0x0070FF4D: push edx */
    PUSH32(esp, eax); /* 0x0070FF4E: push eax */
    ecx = MEM32(eax); /* 0x0070FF4F: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x38); /* 0x0070FF51: mov eax, dword ptr [ecx + 0x38] */
    RECOMP_ICALL(eax); /* 0x0070FF54: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0070FF56: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0070FF3E; /* 0x0070FF58: js 0x70ff3e */
L_0070FF5A:
    esi = MEM32(0x7CC454); /* 0x0070FF5A: mov esi, dword ptr [0x7cc454] */
    PUSH32(esp, edi); /* 0x0070FF60: push edi */
    PUSH32(esp, 0xCu); /* 0x0070FF61: push 0xc */
    RECOMP_ICALL(esi); /* 0x0070FF63: call esi */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0070FF65: mov edi, eax */
    PUSH32(esp, 0xCu); /* 0x0070FF67: push 0xc */
    MEM32(ebx + 0x1524) = edi; /* 0x0070FF69: mov dword ptr [ebx + 0x1524], edi */
    RECOMP_ICALL(esi); /* 0x0070FF6F: call esi */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x1528) = eax; /* 0x0070FF71: mov dword ptr [ebx + 0x1528], eax */
    edx = ebp + (-0x4); /* 0x0070FF77: lea edx, [ebp - 4] */
    MEM32(edi) = 0x00863508u; /* 0x0070FF7A: mov dword ptr [edi], 0x863508 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0070FF80: add esp, 8 */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x1524); /* 0x0070FF83: mov eax, dword ptr [ebx + 0x1524] */
    PUSH32(esp, edx); /* 0x0070FF89: push edx */
    MEM32(eax + 0x4) = 1; /* 0x0070FF8A: mov dword ptr [eax + 4], 1 */
    eax = MEM32(ebx + 0x1524); /* 0x0070FF91: mov eax, dword ptr [ebx + 0x1524] */
    PUSH32(esp, 0x007CCD98u); /* 0x0070FF97: push 0x7ccd98 */
    MEM32(eax + 0x8) = ebx; /* 0x0070FF9C: mov dword ptr [eax + 8], ebx */
    eax = MEM32(ebx + 0x1528); /* 0x0070FF9F: mov eax, dword ptr [ebx + 0x1528] */
    MEM32(eax) = 0x00863520u; /* 0x0070FFA5: mov dword ptr [eax], 0x863520 */
    eax = MEM32(ebx + 0x1528); /* 0x0070FFAB: mov eax, dword ptr [ebx + 0x1528] */
    MEM32(eax + 0x4) = 1; /* 0x0070FFB1: mov dword ptr [eax + 4], 1 */
    eax = MEM32(ebx + 0x1528); /* 0x0070FFB8: mov eax, dword ptr [ebx + 0x1528] */
    MEM32(eax + 0x8) = ebx; /* 0x0070FFBE: mov dword ptr [eax + 8], ebx */
    eax = MEM32(ebx + 0x1510); /* 0x0070FFC1: mov eax, dword ptr [ebx + 0x1510] */
    PUSH32(esp, eax); /* 0x0070FFC7: push eax */
    ecx = MEM32(eax); /* 0x0070FFC8: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx); /* 0x0070FFCA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(eax); /* 0x0070FFCC: call eax */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0070FFCE: pop edi */
    /* test eax, eax */ /* 0x0070FFCF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0071002B; /* 0x0070FFD1: js 0x71002b */
L_0070FFD3:
    ecx = MEM32(ebp + (-0x4)); /* 0x0070FFD3: mov ecx, dword ptr [ebp - 4] */
    eax = ebx + 0x1514; /* 0x0070FFD6: lea eax, [ebx + 0x1514] */
    PUSH32(esp, eax); /* 0x0070FFDC: push eax */
    PUSH32(esp, MEM32(ebx + 0x1524)); /* 0x0070FFDD: push dword ptr [ebx + 0x1524] */
    edx = MEM32(ecx); /* 0x0070FFE3: mov edx, dword ptr [ecx] */
    PUSH32(esp, 0x007CCDB8u); /* 0x0070FFE5: push 0x7ccdb8 */
    PUSH32(esp, ecx); /* 0x0070FFEA: push ecx */
    eax = MEM32(edx + 0xC); /* 0x0070FFEB: mov eax, dword ptr [edx + 0xc] */
    RECOMP_ICALL(eax); /* 0x0070FFEE: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0070FFF0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00710020; /* 0x0070FFF2: js 0x710020 */
L_0070FFF4:
    ecx = MEM32(ebp + (-0x4)); /* 0x0070FFF4: mov ecx, dword ptr [ebp - 4] */
    eax = ebx + 0x1518; /* 0x0070FFF7: lea eax, [ebx + 0x1518] */
    PUSH32(esp, eax); /* 0x0070FFFD: push eax */
    PUSH32(esp, MEM32(ebx + 0x1528)); /* 0x0070FFFE: push dword ptr [ebx + 0x1528] */
    edx = MEM32(ecx); /* 0x00710004: mov edx, dword ptr [ecx] */
    PUSH32(esp, 0x007CCD88u); /* 0x00710006: push 0x7ccd88 */
    PUSH32(esp, ecx); /* 0x0071000B: push ecx */
    eax = MEM32(edx + 0xC); /* 0x0071000C: mov eax, dword ptr [edx + 0xc] */
    RECOMP_ICALL(eax); /* 0x0071000F: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00710011: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 1; /* 0x00710013: mov edx, 1 */
    /* test eax, eax */ /* 0x00710018: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) { ecx = edx; } /* 0x0071001A: cmovns ecx, edx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x0071001D: mov dword ptr [ebp - 8], ecx */
L_00710020:
    ecx = MEM32(ebp + (-0x4)); /* 0x00710020: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x00710023: push ecx */
    edx = MEM32(ecx); /* 0x00710024: mov edx, dword ptr [ecx] */
    ecx = MEM32(edx + 0x8); /* 0x00710026: mov ecx, dword ptr [edx + 8] */
    RECOMP_ICALL(ecx); /* 0x00710029: call ecx */
    RECOMP_FLAGS_IN();
L_0071002B:
    eax = MEM32(ebp + (-0x8)); /* 0x0071002B: mov eax, dword ptr [ebp - 8] */
    esi = POP32_VAL(esp); /* 0x0071002E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071002F: pop ebx */
    esp = ebp; /* 0x00710030: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00710032: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710033: ret  */
    RECOMP_REGS_OUT();
}

void sub_00710040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00710040u);

L_00710040:
    PUSH32(esp, ebp); /* 0x00710040: push ebp */
    ebp = esp; /* 0x00710041: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00710043: push ecx */
    PUSH32(esp, esi); /* 0x00710044: push esi */
    esi = ecx; /* 0x00710045: mov esi, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x00710047: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(esi + 0x1510); /* 0x0071004E: mov ecx, dword ptr [esi + 0x1510] */
    /* test ecx, ecx */ /* 0x00710054: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710114; /* 0x00710056: je 0x710114 */
L_0071005C:
    eax = MEM32(ecx); /* 0x0071005C: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x0071005E: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x00710061: push edx */
    PUSH32(esp, 0x007CCD98u); /* 0x00710062: push 0x7ccd98 */
    PUSH32(esp, ecx); /* 0x00710067: push ecx */
    eax = MEM32(eax); /* 0x00710068: mov eax, dword ptr [eax] */
    RECOMP_ICALL(eax); /* 0x0071006A: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0071006C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00710114; /* 0x0071006E: js 0x710114 */
L_00710074:
    eax = MEM32(ebp + (-0x4)); /* 0x00710074: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(esi + 0x1514)); /* 0x00710077: push dword ptr [esi + 0x1514] */
    PUSH32(esp, eax); /* 0x0071007D: push eax */
    ecx = MEM32(eax); /* 0x0071007E: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x10); /* 0x00710080: mov eax, dword ptr [ecx + 0x10] */
    RECOMP_ICALL(eax); /* 0x00710083: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x00710085: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(esi + 0x1518)); /* 0x00710088: push dword ptr [esi + 0x1518] */
    PUSH32(esp, eax); /* 0x0071008E: push eax */
    ecx = MEM32(eax); /* 0x0071008F: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x10); /* 0x00710091: mov eax, dword ptr [ecx + 0x10] */
    RECOMP_ICALL(eax); /* 0x00710094: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x00710096: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x00710099: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007100AC; /* 0x0071009B: je 0x7100ac */
L_0071009D:
    eax = MEM32(ecx); /* 0x0071009D: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x0071009F: push ecx */
    eax = MEM32(eax + 0x8); /* 0x007100A0: mov eax, dword ptr [eax + 8] */
    RECOMP_ICALL(eax); /* 0x007100A3: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x007100A5: mov dword ptr [ebp - 4], 0 */
L_007100AC:
    eax = MEM32(esi + 0x1510); /* 0x007100AC: mov eax, dword ptr [esi + 0x1510] */
    PUSH32(esp, eax); /* 0x007100B2: push eax */
    ecx = MEM32(eax); /* 0x007100B3: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x10); /* 0x007100B5: mov eax, dword ptr [ecx + 0x10] */
    RECOMP_ICALL(eax); /* 0x007100B8: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1510); /* 0x007100BA: mov ecx, dword ptr [esi + 0x1510] */
    /* test ecx, ecx */ /* 0x007100C0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007100D6; /* 0x007100C2: je 0x7100d6 */
L_007100C4:
    eax = MEM32(ecx); /* 0x007100C4: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x007100C6: push ecx */
    eax = MEM32(eax + 0x8); /* 0x007100C7: mov eax, dword ptr [eax + 8] */
    RECOMP_ICALL(eax); /* 0x007100CA: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1510) = 0; /* 0x007100CC: mov dword ptr [esi + 0x1510], 0 */
L_007100D6:
    eax = MEM32(esi + 0x1524); /* 0x007100D6: mov eax, dword ptr [esi + 0x1524] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x007100DC: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007100EB; /* 0x007100DF: jne 0x7100eb */
L_007100E1:
    PUSH32(esp, eax); /* 0x007100E1: push eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x007100E2: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007100E8: add esp, 4 */
    _flag_k = FK_ADD;
L_007100EB:
    eax = MEM32(esi + 0x1528); /* 0x007100EB: mov eax, dword ptr [esi + 0x1528] */
    MEM32(esi + 0x1524) = 0; /* 0x007100F1: mov dword ptr [esi + 0x1524], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x007100FB: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0071010A; /* 0x007100FE: jne 0x71010a */
L_00710100:
    PUSH32(esp, eax); /* 0x00710100: push eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x00710101: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00710107: add esp, 4 */
    _flag_k = FK_ADD;
L_0071010A:
    MEM32(esi + 0x1528) = 0; /* 0x0071010A: mov dword ptr [esi + 0x1528], 0 */
L_00710114:
    esi = POP32_VAL(esp); /* 0x00710114: pop esi */
    esp = ebp; /* 0x00710115: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00710117: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710118: ret  */
    RECOMP_REGS_OUT();
}

void sub_00710120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00710120u);

L_00710120:
    PUSH32(esp, ebp); /* 0x00710120: push ebp */
    ebp = esp; /* 0x00710121: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20Cu; /* 0x00710123: sub esp, 0x20c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00710129: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0071012E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00710130: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x00710133: push ebx */
    ebx = ecx; /* 0x00710134: mov ebx, ecx */
    eax = ebx; /* 0x00710136: mov eax, ebx */
    PUSH32(esp, esi); /* 0x00710138: push esi */
    PUSH32(esp, edi); /* 0x00710139: push edi */
    edx = eax + 0x1; /* 0x0071013A: lea edx, [eax + 1] */
    ecx = ecx; /* 0x0071013D: lea ecx, [ecx] */
L_00710140:
    SET_LO8(ecx, MEM8(eax)); /* 0x00710140: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00710142: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x00710143: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00710140; /* 0x00710145: jne 0x710140 */
L_00710147:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00710147: sub eax, edx */
    _flag_k = FK_CMP;
    ecx = 0x00804E1Cu; /* 0x00710149: mov ecx, 0x804e1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0071014E: inc eax */
    _flag_k = FK_INC;
    edx = 0x00804E28u; /* 0x0071014F: mov edx, 0x804e28 */
    PUSH32(esp, eax); /* 0x00710154: push eax */
    PUSH32(esp, ebx); /* 0x00710155: push ebx */
    RECOMP_CALL(sub_00700DA0); /* 0x00710156: call 0x700da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071015B: add esp, 8 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x0071015E: mov esi, eax */
    PUSH32(esp, esi); /* 0x00710160: push esi */
    RECOMP_ICALL(MEM32(0x7CC108)); /* 0x00710161: call dword ptr [0x7cc108] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00710167: push esi */
    edi = eax; /* 0x00710168: mov edi, eax */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x0071016A: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00710170: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x00710173: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007101D6; /* 0x00710175: jne 0x7101d6 */
L_00710177:
    SET_LO16(eax, MEM16(0x807BC4)); /* 0x00710177: mov ax, word ptr [0x807bc4] */
    edx = ebx; /* 0x0071017D: mov edx, ebx */
    ecx = MEM32(0x807BC0); /* 0x0071017F: mov ecx, dword ptr [0x807bc0] */
    _xmm[0].u64[0] = MEM64(0x807BB8); _xmm[0].u64[1] = 0; /* 0x00710185: movq xmm0, qword ptr [0x807bb8] */
    MEM16(ebp + (-0x1FC)) = (uint16_t)(LO16(eax)); /* 0x0071018D: mov word ptr [ebp - 0x1fc], ax */
    SET_LO8(eax, MEM8(0x807BC6)); /* 0x00710194: mov al, byte ptr [0x807bc6] */
    MEM32(ebp + (-0x200)) = ecx; /* 0x00710199: mov dword ptr [ebp - 0x200], ecx */
    PUSH32(esp, ecx); /* 0x0071019F: push ecx */
    ecx = ebp + (-0x208); /* 0x007101A0: lea ecx, [ebp - 0x208] */
    MEM64(ebp + (-0x208)) = _xmm[0].u64[0]; /* 0x007101A6: movq qword ptr [ebp - 0x208], xmm0 */
    MEM8(ebp + (-0x1FA)) = (uint8_t)(LO8(eax)); /* 0x007101AE: mov byte ptr [ebp - 0x1fa], al */
    MEM8(ebp + (-0x1F9)) = (uint8_t)(0); /* 0x007101B4: mov byte ptr [ebp - 0x1f9], 0 */
    RECOMP_CALL(sub_006F2C90); /* 0x007101BB: call 0x6f2c90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007101C0: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x007101C3: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x007101C9: mov edx, eax */
    ecx = ebp + (-0x208); /* 0x007101CB: lea ecx, [ebp - 0x208] */
    RECOMP_CALL(sub_006FFE20); /* 0x007101D1: call 0x6ffe20 */
    RECOMP_FLAGS_IN();
L_007101D6:
    ecx = MEM32(ebp + (-0x4)); /* 0x007101D6: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x007101D9: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x007101DB: pop edi */
    esi = POP32_VAL(esp); /* 0x007101DC: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007101DD: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x007101DF: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x007101E0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007101E5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007101E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007101E8: ret  */
    RECOMP_REGS_OUT();
}

void sub_007101F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007101F0u);

L_007101F0:
    PUSH32(esp, ebp); /* 0x007101F0: push ebp */
    ebp = esp; /* 0x007101F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x208u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x208u; /* 0x007101F3: sub esp, 0x208 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x007101F9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007101FE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00710200: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x00710203: push esi */
    PUSH32(esp, edi); /* 0x00710204: push edi */
    edi = edx; /* 0x00710205: mov edi, edx */
    PUSH32(esp, edi); /* 0x00710207: push edi */
    PUSH32(esp, ecx); /* 0x00710208: push ecx */
    RECOMP_ICALL(MEM32(0x7CC110)); /* 0x00710209: call dword ptr [0x7cc110] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0071020F: mov esi, eax */
    /* test esi, esi */ /* 0x00710211: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00710277; /* 0x00710213: jne 0x710277 */
L_00710215:
    ecx = MEM32(0x807BC0); /* 0x00710215: mov ecx, dword ptr [0x807bc0] */
    edx = edi; /* 0x0071021B: mov edx, edi */
    _xmm[0].u64[0] = MEM64(0x807BB8); _xmm[0].u64[1] = 0; /* 0x0071021D: movq xmm0, qword ptr [0x807bb8] */
    SET_LO8(eax, MEM8(0x807BC6)); /* 0x00710225: mov al, byte ptr [0x807bc6] */
    MEM32(ebp + (-0x200)) = ecx; /* 0x0071022A: mov dword ptr [ebp - 0x200], ecx */
    SET_LO16(ecx, MEM16(0x807BC4)); /* 0x00710230: mov cx, word ptr [0x807bc4] */
    MEM16(ebp + (-0x1FC)) = (uint16_t)(LO16(ecx)); /* 0x00710237: mov word ptr [ebp - 0x1fc], cx */
    PUSH32(esp, ecx); /* 0x0071023E: push ecx */
    ecx = ebp + (-0x208); /* 0x0071023F: lea ecx, [ebp - 0x208] */
    MEM64(ebp + (-0x208)) = _xmm[0].u64[0]; /* 0x00710245: movq qword ptr [ebp - 0x208], xmm0 */
    MEM8(ebp + (-0x1FA)) = (uint8_t)(LO8(eax)); /* 0x0071024D: mov byte ptr [ebp - 0x1fa], al */
    MEM8(ebp + (-0x1F9)) = (uint8_t)(0); /* 0x00710253: mov byte ptr [ebp - 0x1f9], 0 */
    RECOMP_CALL(sub_006F2C90); /* 0x0071025A: call 0x6f2c90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071025F: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x00710262: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x00710268: mov edx, eax */
    ecx = ebp + (-0x208); /* 0x0071026A: lea ecx, [ebp - 0x208] */
    RECOMP_CALL(sub_006FFE20); /* 0x00710270: call 0x6ffe20 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x00710275: mov eax, esi */
L_00710277:
    ecx = MEM32(ebp + (-0x4)); /* 0x00710277: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x0071027A: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0071027B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0071027D: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x0071027E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00710283: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00710285: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710286: ret  */
    RECOMP_REGS_OUT();
}

void sub_00710290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00710290u);

L_00710290:
    PUSH32(esp, ebp); /* 0x00710290: push ebp */
    ebp = esp; /* 0x00710291: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00710293: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x87CC90); /* 0x00710296: mov eax, dword ptr [0x87cc90] */
    PUSH32(esp, esi); /* 0x0071029B: push esi */
    esi = ecx; /* 0x0071029C: mov esi, ecx */
    MEM32(ebp + (-0xC)) = 0x00020001u; /* 0x0071029E: mov dword ptr [ebp - 0xc], 0x20001 */
    MEM32(ebp + (-0x8)) = 0; /* 0x007102A5: mov dword ptr [ebp - 8], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x007102AC: mov dword ptr [ebp - 4], 0 */
    /* test esi, esi */ /* 0x007102B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007102C9; /* 0x007102B5: je 0x7102c9 */
L_007102B7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x007102B7: inc eax */
    _flag_k = FK_INC;
    MEM32(0x87CC90) = eax; /* 0x007102B8: mov dword ptr [0x87cc90], eax */
    /* cmp eax, 1 */ /* 0x007102BD: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_007102DE; /* 0x007102C0: jle 0x7102de */
L_007102C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007102C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x007102C4: pop esi */
    esp = ebp; /* 0x007102C5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007102C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007102C8: ret  */
L_007102C9:
    /* test eax, eax */ /* 0x007102C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007102C2; /* 0x007102CB: je 0x7102c2 */
L_007102CD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x007102CD: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x87CC90) = eax; /* 0x007102CE: mov dword ptr [0x87cc90], eax */
    /* test eax, eax */ /* 0x007102D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_007102C2; /* 0x007102D5: jg 0x7102c2 */
L_007102D7:
    MEM32(ebp + (-0x8)) = 1; /* 0x007102D7: mov dword ptr [ebp - 8], 1 */
L_007102DE:
    PUSH32(esp, 0xCu); /* 0x007102DE: push 0xc */
    PUSH32(esp, 1); /* 0x007102E0: push 1 */
    eax = ebp + (-0xC); /* 0x007102E2: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x007102E5: push eax */
    RECOMP_ICALL(MEM32(0x7CC754)); /* 0x007102E6: call dword ptr [0x7cc754] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007102EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007102C2; /* 0x007102EE: jne 0x7102c2 */
L_007102F0:
    /* test esi, esi */ /* 0x007102F0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007102C2; /* 0x007102F2: je 0x7102c2 */
L_007102F4:
    PUSH32(esp, 0x00804310u); /* 0x007102F4: push 0x804310 */
    RECOMP_CALL(sub_006EDB70); /* 0x007102F9: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007102FE: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x00710301: pop esi */
    esp = ebp; /* 0x00710302: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00710304: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710305: ret  */
    RECOMP_REGS_OUT();
}

void sub_00710310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00710310u);

L_00710310:
    PUSH32(esp, ebp); /* 0x00710310: push ebp */
    ebp = esp; /* 0x00710311: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x00710313: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00710319: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0071031E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00710320: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x00710323: push ebx */
    PUSH32(esp, esi); /* 0x00710324: push esi */
    PUSH32(esp, edi); /* 0x00710325: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00710326: mov edi, dword ptr [ebp + 8] */
    eax = ebp + (-0x70); /* 0x00710329: lea eax, [ebp - 0x70] */
    PUSH32(esp, 0x6Cu); /* 0x0071032C: push 0x6c */
    PUSH32(esp, 0); /* 0x0071032E: push 0 */
    PUSH32(esp, eax); /* 0x00710330: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x00710331: call 0x78083e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xC); /* 0x00710336: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710339: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = MEM32(edi + 0x8); /* 0x0071033C: mov esi, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x0071033F: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x68)) = eax; /* 0x00710341: mov dword ptr [ebp - 0x68], eax */
    eax = esi; /* 0x00710344: mov eax, esi */
    MEM32(ebp + (-0x6C)) = esi; /* 0x00710346: mov dword ptr [ebp - 0x6c], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x00710349: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x0071034C: sub esi, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x70)) = 0x6Cu; /* 0x0071034E: mov dword ptr [ebp - 0x70], 0x6c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x00710355: add esi, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x64)) = 0x00200001u; /* 0x00710358: mov dword ptr [ebp - 0x64], 0x200001 */
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x0071035F: shr esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 3u; /* 0x0071035F: shr esi, 3 */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(edi + 0xC)); /* 0x00710362: imul esi, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x60)) = 3; /* 0x00710366: mov dword ptr [ebp - 0x60], 3 */
    MEM32(ebp + (-0x3C)) = 0xFF000000u; /* 0x0071036D: mov dword ptr [ebp - 0x3c], 0xff000000 */
    MEM32(ebp + (-0x48)) = 0x00FF0000u; /* 0x00710374: mov dword ptr [ebp - 0x48], 0xff0000 */
    MEM32(ebp + (-0x44)) = 0xFF00u; /* 0x0071037B: mov dword ptr [ebp - 0x44], 0xff00 */
    eax = esi; /* 0x00710382: mov eax, esi */
    MEM32(ebp + (-0x40)) = 0xFFu; /* 0x00710384: mov dword ptr [ebp - 0x40], 0xff */
    RECOMP_CALL(sub_00780140); /* 0x0071038B: call 0x780140 */
    RECOMP_FLAGS_IN();
    ebx = esp; /* 0x00710390: mov ebx, esp */
    /* test ebx, ebx */ /* 0x00710392: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007103AA; /* 0x00710394: jne 0x7103aa */
L_00710396:
    PUSH32(esp, 0x00803E4Cu); /* 0x00710396: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x0071039B: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007103A0: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007103A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_007104A3; /* 0x007103A5: jmp 0x7104a3 */
L_007103AA:
    PUSH32(esp, esi); /* 0x007103AA: push esi */
    PUSH32(esp, 0xFFu); /* 0x007103AB: push 0xff */
    PUSH32(esp, ebx); /* 0x007103B0: push ebx */
    RECOMP_CALL(sub_0078083E); /* 0x007103B1: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007103B6: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x007103B9: push 0 */
    RECOMP_ICALL(MEM32(0x7CC810)); /* 0x007103BB: call dword ptr [0x7cc810] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x007103C1: mov ecx, dword ptr [ebp + 0xc] */
    esi = eax; /* 0x007103C4: mov esi, eax */
    PUSH32(esp, 0); /* 0x007103C6: push 0 */
    PUSH32(esp, 0); /* 0x007103C8: push 0 */
    eax = ebp + (-0x88); /* 0x007103CA: lea eax, [ebp - 0x88] */
    MEM32(ebp + (-0x74)) = 0; /* 0x007103D0: mov dword ptr [ebp - 0x74], 0 */
    PUSH32(esp, eax); /* 0x007103D7: push eax */
    PUSH32(esp, 0); /* 0x007103D8: push 0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x007103DA: xorps xmm0, xmm0 */
    eax = ebp + (-0x70); /* 0x007103DD: lea eax, [ebp - 0x70] */
    xmm_st(ebp + (-0x84), _xmm[0]); /* 0x007103E0: movdqu xmmword ptr [ebp - 0x84], xmm0 */
    PUSH32(esp, eax); /* 0x007103E8: push eax */
    MEM32(ebp + (-0x80)) = ecx; /* 0x007103E9: mov dword ptr [ebp - 0x80], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x007103EC: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x007103EF: push esi */
    MEM32(ebp + (-0x84)) = 0; /* 0x007103F0: mov dword ptr [ebp - 0x84], 0 */
    MEM32(ebp + (-0x7C)) = ecx; /* 0x007103FA: mov dword ptr [ebp - 0x7c], ecx */
    RECOMP_ICALL(MEM32(0x7CC048)); /* 0x007103FD: call dword ptr [0x7cc048] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x00710403: push ebx */
    PUSH32(esp, 1); /* 0x00710404: push 1 */
    PUSH32(esp, 1); /* 0x00710406: push 1 */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x00710408: push dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x74)) = eax; /* 0x0071040B: mov dword ptr [ebp - 0x74], eax */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x0071040E: push dword ptr [edi + 8] */
    RECOMP_ICALL(MEM32(0x7CC068)); /* 0x00710411: call dword ptr [0x7cc068] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00710417: push esi */
    PUSH32(esp, 0); /* 0x00710418: push 0 */
    MEM32(ebp + (-0x78)) = eax; /* 0x0071041A: mov dword ptr [ebp - 0x78], eax */
    RECOMP_ICALL(MEM32(0x7CC814)); /* 0x0071041D: call dword ptr [0x7cc814] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x00710423: mov eax, dword ptr [edi + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0xC)); /* 0x00710426: imul eax, dword ptr [edi + 0xc] */
    PUSH32(esp, eax); /* 0x0071042A: push eax */
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x0071042B: push dword ptr [edi + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x0071042E: push dword ptr [ebp - 0x88] */
    RECOMP_CALL(sub_00780838); /* 0x00710434: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710439: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0x84); /* 0x0071043C: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x00710442: push eax */
    RECOMP_ICALL(MEM32(0x7CC748)); /* 0x00710443: call dword ptr [0x7cc748] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x74))); /* 0x00710449: push dword ptr [ebp - 0x74] */
    esi = MEM32(0x7CC07C); /* 0x0071044C: mov esi, dword ptr [0x7cc07c] */
    edi = eax; /* 0x00710452: mov edi, eax */
    RECOMP_ICALL(esi); /* 0x00710454: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x78))); /* 0x00710456: push dword ptr [ebp - 0x78] */
    RECOMP_ICALL(esi); /* 0x00710459: call esi */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x0071045B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00710475; /* 0x0071045D: jne 0x710475 */
L_0071045F:
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x0071045F: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x00710465: mov edx, eax */
    ecx = 0x00807BC8u; /* 0x00710467: mov ecx, 0x807bc8 */
    RECOMP_CALL(sub_006FFE20); /* 0x0071046C: call 0x6ffe20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00710471: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_007104A3; /* 0x00710473: jmp 0x7104a3 */
L_00710475:
    PUSH32(esp, 8); /* 0x00710475: push 8 */
    PUSH32(esp, 1); /* 0x00710477: push 1 */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x00710479: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0071047F: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00710481: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x00710484: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071048D; /* 0x00710486: je 0x71048d */
L_00710488:
    MEM32(esi + 0x4) = edi; /* 0x00710488: mov dword ptr [esi + 4], edi */
    goto L_007104A1; /* 0x0071048B: jmp 0x7104a1 */
L_0071048D:
    PUSH32(esp, edi); /* 0x0071048D: push edi */
    RECOMP_ICALL(MEM32(0x7CC758)); /* 0x0071048E: call dword ptr [0x7cc758] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00803E4Cu); /* 0x00710494: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x00710499: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071049E: add esp, 4 */
    _flag_k = FK_ADD;
L_007104A1:
    eax = esi; /* 0x007104A1: mov eax, esi */
L_007104A3:
    esp = ebp + (-0x94); /* 0x007104A3: lea esp, [ebp - 0x94] */
    edi = POP32_VAL(esp); /* 0x007104A9: pop edi */
    esi = POP32_VAL(esp); /* 0x007104AA: pop esi */
    ebx = POP32_VAL(esp); /* 0x007104AB: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x007104AC: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007104AF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007104B1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007104B6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007104B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007104B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_007104C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007104C0u);

L_007104C0:
    PUSH32(esp, ebp); /* 0x007104C0: push ebp */
    ebp = esp; /* 0x007104C1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x007104C3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x007104C6: push esi */
    /* cmp eax, 0xBu */ /* 0x007104C7: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0071055B; /* 0x007104CA: ja 0x71055b */
L_007104D0:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x710560)); goto _ljump; }
L_007104D7:
    esi = 0x7F00u; /* 0x007104D7: mov esi, 0x7f00 */
    goto L_00710522; /* 0x007104DC: jmp 0x710522 */
L_007104DE:
    esi = 0x7F01u; /* 0x007104DE: mov esi, 0x7f01 */
    goto L_00710522; /* 0x007104E3: jmp 0x710522 */
L_007104E5:
    esi = 0x7F02u; /* 0x007104E5: mov esi, 0x7f02 */
    goto L_00710522; /* 0x007104EA: jmp 0x710522 */
L_007104EC:
    esi = 0x7F03u; /* 0x007104EC: mov esi, 0x7f03 */
    goto L_00710522; /* 0x007104F1: jmp 0x710522 */
L_007104F3:
    esi = 0x7F82u; /* 0x007104F3: mov esi, 0x7f82 */
    goto L_00710522; /* 0x007104F8: jmp 0x710522 */
L_007104FA:
    esi = 0x7F83u; /* 0x007104FA: mov esi, 0x7f83 */
    goto L_00710522; /* 0x007104FF: jmp 0x710522 */
L_00710501:
    esi = 0x7F84u; /* 0x00710501: mov esi, 0x7f84 */
    goto L_00710522; /* 0x00710506: jmp 0x710522 */
L_00710508:
    esi = 0x7F85u; /* 0x00710508: mov esi, 0x7f85 */
    goto L_00710522; /* 0x0071050D: jmp 0x710522 */
L_0071050F:
    esi = 0x7F86u; /* 0x0071050F: mov esi, 0x7f86 */
    goto L_00710522; /* 0x00710514: jmp 0x710522 */
L_00710516:
    esi = 0x7F88u; /* 0x00710516: mov esi, 0x7f88 */
    goto L_00710522; /* 0x0071051B: jmp 0x710522 */
L_0071051D:
    esi = 0x7F89u; /* 0x0071051D: mov esi, 0x7f89 */
L_00710522:
    PUSH32(esp, edi); /* 0x00710522: push edi */
    PUSH32(esp, 8); /* 0x00710523: push 8 */
    PUSH32(esp, 1); /* 0x00710525: push 1 */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x00710527: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0071052D: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071052F: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x00710532: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710548; /* 0x00710534: je 0x710548 */
L_00710536:
    PUSH32(esp, esi); /* 0x00710536: push esi */
    PUSH32(esp, 0); /* 0x00710537: push 0 */
    RECOMP_ICALL(MEM32(0x7CC82C)); /* 0x00710539: call dword ptr [0x7cc82c] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x0071053F: mov dword ptr [edi + 4], eax */
    eax = edi; /* 0x00710542: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x00710544: pop edi */
    esi = POP32_VAL(esp); /* 0x00710545: pop esi */
    ebp = POP32_VAL(esp); /* 0x00710546: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710547: ret  */
L_00710548:
    PUSH32(esp, 0x00803E4Cu); /* 0x00710548: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x0071054D: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00710552: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x00710555: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x00710557: pop edi */
    esi = POP32_VAL(esp); /* 0x00710558: pop esi */
    ebp = POP32_VAL(esp); /* 0x00710559: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071055A: ret  */
L_0071055B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0071055B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0071055D: pop esi */
    ebp = POP32_VAL(esp); /* 0x0071055E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071055F: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x007104D7u: goto L_007104D7;
      case 0x007104DEu: goto L_007104DE;
      case 0x007104E5u: goto L_007104E5;
      case 0x007104ECu: goto L_007104EC;
      case 0x007104F3u: goto L_007104F3;
      case 0x007104FAu: goto L_007104FA;
      case 0x00710501u: goto L_00710501;
      case 0x00710508u: goto L_00710508;
      case 0x0071050Fu: goto L_0071050F;
      case 0x00710516u: goto L_00710516;
      case 0x0071051Du: goto L_0071051D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00710590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00710590u);

L_00710590:
    PUSH32(esp, ebp); /* 0x00710590: push ebp */
    ebp = esp; /* 0x00710591: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00710593: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00710594: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x00710597: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC758)); /* 0x0071059A: call dword ptr [0x7cc758] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x007105A0: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x007105A1: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007105A7: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007105AA: pop esi */
    ebp = POP32_VAL(esp); /* 0x007105AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007105AC: ret  */
    RECOMP_REGS_OUT();
}

void sub_007105B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007105B0u);

L_007105B0:
    PUSH32(esp, ebp); /* 0x007105B0: push ebp */
    ebp = esp; /* 0x007105B1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x007105B3: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x007105B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007105BF; /* 0x007105B8: je 0x7105bf */
L_007105BA:
    eax = MEM32(eax + 0x4); /* 0x007105BA: mov eax, dword ptr [eax + 4] */
    goto L_007105C1; /* 0x007105BD: jmp 0x7105c1 */
L_007105BF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007105BF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_007105C1:
    /* cmp MEM32(0x926A0C), 0 */ /* 0x007105C1: cmp dword ptr [0x926a0c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A0C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x87CC8C) = eax; /* 0x007105C8: mov dword ptr [0x87cc8c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007105D6; /* 0x007105CD: je 0x7105d6 */
L_007105CF:
    PUSH32(esp, eax); /* 0x007105CF: push eax */
    RECOMP_ICALL(MEM32(0x7CC818)); /* 0x007105D0: call dword ptr [0x7cc818] */
    RECOMP_FLAGS_IN();
L_007105D6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007105D6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x007105D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007105D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_007105E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007105E0u);

L_007105E0:
    PUSH32(esp, ebp); /* 0x007105E0: push ebp */
    ebp = esp; /* 0x007105E1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x007105E3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007105E6: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0x90); /* 0x007105E9: mov eax, dword ptr [eax + 0x90] */
    /* cmp MEM32(eax + 0x2C), 0 */ /* 0x007105EF: cmp dword ptr [eax + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x4); /* 0x007105F3: mov ecx, dword ptr [eax + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_00710621; /* 0x007105F6: jne 0x710621 */
L_007105F8:
    /* cmp MEM8(eax + 0x30), 0 */ /* 0x007105F8: cmp byte ptr [eax + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00710621; /* 0x007105FC: jne 0x710621 */
L_007105FE:
    eax = MEM32(ebp + 0xC); /* 0x007105FE: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x00710601: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0x10); /* 0x00710604: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x00710607: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x8); /* 0x0071060A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x0071060D: push eax */
    PUSH32(esp, ecx); /* 0x0071060E: push ecx */
    RECOMP_ICALL(MEM32(0x7CC7B4)); /* 0x0071060F: call dword ptr [0x7cc7b4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x00710615: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x00710618: push dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(0x7CC750)); /* 0x0071061B: call dword ptr [0x7cc750] */
    RECOMP_FLAGS_IN();
L_00710621:
    esp = ebp; /* 0x00710621: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00710623: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710624: ret  */
    RECOMP_REGS_OUT();
}

void sub_00710630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00710630u);

L_00710630:
    PUSH32(esp, ebp); /* 0x00710630: push ebp */
    ebp = esp; /* 0x00710631: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00710633: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x00710636: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x7CC750)); /* 0x00710639: call dword ptr [0x7cc750] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0071063F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x00710641: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710642: ret  */
    RECOMP_REGS_OUT();
}

void sub_00710650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00710650u);

    goto L_00710650;
L_00710290:
    PUSH32(esp, ebp); /* 0x00710290: push ebp */
    ebp = esp; /* 0x00710291: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00710293: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x87CC90); /* 0x00710296: mov eax, dword ptr [0x87cc90] */
    PUSH32(esp, esi); /* 0x0071029B: push esi */
    esi = ecx; /* 0x0071029C: mov esi, ecx */
    MEM32(ebp + (-0xC)) = 0x00020001u; /* 0x0071029E: mov dword ptr [ebp - 0xc], 0x20001 */
    MEM32(ebp + (-0x8)) = 0; /* 0x007102A5: mov dword ptr [ebp - 8], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x007102AC: mov dword ptr [ebp - 4], 0 */
    /* test esi, esi */ /* 0x007102B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007102C9; /* 0x007102B5: je 0x7102c9 */
L_007102B7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x007102B7: inc eax */
    _flag_k = FK_INC;
    MEM32(0x87CC90) = eax; /* 0x007102B8: mov dword ptr [0x87cc90], eax */
    /* cmp eax, 1 */ /* 0x007102BD: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_007102DE; /* 0x007102C0: jle 0x7102de */
L_007102C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007102C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x007102C4: pop esi */
    esp = ebp; /* 0x007102C5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007102C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007102C8: ret  */
L_007102C9:
    /* test eax, eax */ /* 0x007102C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007102C2; /* 0x007102CB: je 0x7102c2 */
L_007102CD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x007102CD: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x87CC90) = eax; /* 0x007102CE: mov dword ptr [0x87cc90], eax */
    /* test eax, eax */ /* 0x007102D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_007102C2; /* 0x007102D5: jg 0x7102c2 */
L_007102D7:
    MEM32(ebp + (-0x8)) = 1; /* 0x007102D7: mov dword ptr [ebp - 8], 1 */
L_007102DE:
    PUSH32(esp, 0xCu); /* 0x007102DE: push 0xc */
    PUSH32(esp, 1); /* 0x007102E0: push 1 */
    eax = ebp + (-0xC); /* 0x007102E2: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x007102E5: push eax */
    RECOMP_ICALL(MEM32(0x7CC754)); /* 0x007102E6: call dword ptr [0x7cc754] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007102EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007102C2; /* 0x007102EE: jne 0x7102c2 */
L_007102F0:
    /* test esi, esi */ /* 0x007102F0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007102C2; /* 0x007102F2: je 0x7102c2 */
L_007102F4:
    PUSH32(esp, 0x00804310u); /* 0x007102F4: push 0x804310 */
    RECOMP_CALL(sub_006EDB70); /* 0x007102F9: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007102FE: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x00710301: pop esi */
    esp = ebp; /* 0x00710302: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00710304: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710305: ret  */
L_00710650:
    PUSH32(esp, ebp); /* 0x00710650: push ebp */
    ebp = esp; /* 0x00710651: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x00710653: mov ecx, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x00710656: pop ebp */
    RECOMP_BACKEDGE();
    goto L_00710290; /* 0x00710657: jmp 0x710290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00710660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00710660u);

L_00710660:
    PUSH32(esp, ebp); /* 0x00710660: push ebp */
    ebp = esp; /* 0x00710661: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00710663: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x00710666: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007106A3; /* 0x0071066A: jne 0x7106a3 */
L_0071066C:
    eax = MEM32(0x925FD0); /* 0x0071066C: mov eax, dword ptr [0x925fd0] */
    /* test eax, eax */ /* 0x00710671: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007106A3; /* 0x00710673: je 0x7106a3 */
L_00710675:
    eax = MEM32(eax + 0x90); /* 0x00710675: mov eax, dword ptr [eax + 0x90] */
    /* test eax, eax */ /* 0x0071067B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007106A3; /* 0x0071067D: je 0x7106a3 */
L_0071067F:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x0071067F: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007106A3; /* 0x00710683: je 0x7106a3 */
L_00710685:
    MEM32(ebp + (-0x10)) = 0x10u; /* 0x00710685: mov dword ptr [ebp - 0x10], 0x10 */
    MEM32(ebp + (-0xC)) = 2; /* 0x0071068C: mov dword ptr [ebp - 0xc], 2 */
    eax = MEM32(eax + 0x4); /* 0x00710693: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x00710696: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x10); /* 0x00710699: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x0071069C: push eax */
    RECOMP_ICALL(MEM32(0x7CC7CC)); /* 0x0071069D: call dword ptr [0x7cc7cc] */
    RECOMP_FLAGS_IN();
L_007106A3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x007106A3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x007106A5: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x007106A8: setne cl */
    RECOMP_CALL(sub_00710290); /* 0x007106AB: call 0x710290 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007106B0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007106B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007106B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007106C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007106C0u);

L_007106C0:
    PUSH32(esp, ebp); /* 0x007106C0: push ebp */
    ebp = esp; /* 0x007106C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x007106C3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x007106C6: push esi */
    PUSH32(esp, edi); /* 0x007106C7: push edi */
    eax = ebp + (-0x8); /* 0x007106C8: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x8)) = 0; /* 0x007106CB: mov dword ptr [ebp - 8], 0 */
    PUSH32(esp, eax); /* 0x007106D2: push eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x007106D3: mov dword ptr [ebp - 4], 0 */
    RECOMP_ICALL(MEM32(0x7CC848)); /* 0x007106DA: call dword ptr [0x7cc848] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x007106E0: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x007106E3: mov eax, dword ptr [ebp - 8] */
    esi = MEM32(0x7CC74C); /* 0x007106E6: mov esi, dword ptr [0x7cc74c] */
    PUSH32(esp, 1); /* 0x007106EC: push 1 */
    MEM32(ecx) = eax; /* 0x007106EE: mov dword ptr [ecx], eax */
    ecx = MEM32(ebp + 0xC); /* 0x007106F0: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0x4)); /* 0x007106F3: mov eax, dword ptr [ebp - 4] */
    MEM32(ecx) = eax; /* 0x007106F6: mov dword ptr [ecx], eax */
    RECOMP_ICALL(esi); /* 0x007106F8: call esi */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)LO16(eax); /* 0x007106FA: movzx edi, ax */
    if (15u) _cf = (((edi) >> 14) & 1u); /* 0x007106FD: shr edi, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((edi >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 15u; /* 0x007106FD: shr edi, 0xf */
    PUSH32(esp, 2); /* 0x00710700: push 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi & 1; /* 0x00710702: and edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(esi); /* 0x00710705: call esi */
    RECOMP_FLAGS_IN();
    if (13u) _cf = (((eax) >> 12) & 1u); /* 0x00710707: shr eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((eax >> 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 13u; /* 0x00710707: shr eax, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x0071070A: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x0071070D: push 4 */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x0071070F: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(esi); /* 0x00710711: call esi */
    RECOMP_FLAGS_IN();
    if (14u) _cf = (((eax) >> 13) & 1u); /* 0x00710713: shr eax, 0xe */
    if (14u) { _flag_a = recomp_flags_pack((eax >> 14u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 14u; /* 0x00710713: shr eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x00710716: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 5); /* 0x00710719: push 5 */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x0071071B: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(esi); /* 0x0071071D: call esi */
    RECOMP_FLAGS_IN();
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x0071071F: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x0071071F: shr eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x00710722: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 6); /* 0x00710725: push 6 */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x00710727: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(esi); /* 0x00710729: call esi */
    RECOMP_FLAGS_IN();
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x0071072B: shr eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((eax >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 11u; /* 0x0071072B: shr eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x0071072E: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x00710731: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00710733: pop edi */
    esi = POP32_VAL(esp); /* 0x00710734: pop esi */
    esp = ebp; /* 0x00710735: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00710737: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710738: ret  */
    RECOMP_REGS_OUT();
}

void sub_00710740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00710740u);

L_00710740:
    PUSH32(esp, esi); /* 0x00710740: push esi */
    PUSH32(esp, 8); /* 0x00710741: push 8 */
    PUSH32(esp, 1); /* 0x00710743: push 1 */
    MEM32(0x9269E0) = 0x00710310u; /* 0x00710745: mov dword ptr [0x9269e0], 0x710310 */
    MEM32(0x9269E4) = 0x007104C0u; /* 0x0071074F: mov dword ptr [0x9269e4], 0x7104c0 */
    MEM32(0x9269E8) = 0x007105B0u; /* 0x00710759: mov dword ptr [0x9269e8], 0x7105b0 */
    MEM32(0x9269F0) = 0x00710590u; /* 0x00710763: mov dword ptr [0x9269f0], 0x710590 */
    MEM32(0x9269F4) = 0x007105E0u; /* 0x0071076D: mov dword ptr [0x9269f4], 0x7105e0 */
    MEM32(0x9269F8) = 0x00710630u; /* 0x00710777: mov dword ptr [0x9269f8], 0x710630 */
    MEM32(0x9269FC) = 0x00710650u; /* 0x00710781: mov dword ptr [0x9269fc], 0x710650 */
    MEM32(0x926A00) = 0x00710660u; /* 0x0071078B: mov dword ptr [0x926a00], 0x710660 */
    MEM32(0x926A04) = 0x007106C0u; /* 0x00710795: mov dword ptr [0x926a04], 0x7106c0 */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x0071079F: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x007107A5: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007107A7: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x007107AA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007107C0; /* 0x007107AC: je 0x7107c0 */
L_007107AE:
    PUSH32(esp, 0x7F00u); /* 0x007107AE: push 0x7f00 */
    PUSH32(esp, 0); /* 0x007107B3: push 0 */
    RECOMP_ICALL(MEM32(0x7CC82C)); /* 0x007107B5: call dword ptr [0x7cc82c] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x007107BB: mov dword ptr [esi + 4], eax */
    goto L_007107CD; /* 0x007107BE: jmp 0x7107cd */
L_007107C0:
    PUSH32(esp, 0x00803E4Cu); /* 0x007107C0: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x007107C5: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007107CA: add esp, 4 */
    _flag_k = FK_ADD;
L_007107CD:
    /* cmp MEM32(0x926A44), 0 */ /* 0x007107CD: cmp dword ptr [0x926a44], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x926A40) = esi; /* 0x007107D4: mov dword ptr [0x926a40], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_007107E3; /* 0x007107DA: jne 0x7107e3 */
L_007107DC:
    ecx = esi; /* 0x007107DC: mov ecx, esi */
    RECOMP_CALL(sub_006F1470); /* 0x007107DE: call 0x6f1470 */
    RECOMP_FLAGS_IN();
L_007107E3:
    RECOMP_ICALL(MEM32(0x7CC744)); /* 0x007107E3: call dword ptr [0x7cc744] */
    RECOMP_FLAGS_IN();
    MEM32(0x86292C) = eax; /* 0x007107E9: mov dword ptr [0x86292c], eax */
    esi = POP32_VAL(esp); /* 0x007107EE: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007107EF: ret  */
    RECOMP_REGS_OUT();
}

void sub_00710860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00710860u);

L_00710860:
    PUSH32(esp, esi); /* 0x00710860: push esi */
    esi = edx; /* 0x00710861: mov esi, edx */
    edx = ecx; /* 0x00710863: mov edx, ecx */
    eax = edx; /* 0x00710865: mov eax, edx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00710867: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    eax = eax & 0xFFu; /* 0x0071086A: and eax, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710935; /* 0x0071086F: je 0x710935 */
L_00710875:
    /* cmp eax, 0x45u */ /* 0x00710875: cmp eax, 0x45 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00710935; /* 0x00710878: je 0x710935 */
L_0071087E:
    /* cmp eax, 0x7Fu */ /* 0x0071087E: cmp eax, 0x7f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_00710A77; /* 0x00710881: jg 0x710a77 */
L_00710887:
    ecx = MEM32(eax * 4 + 0x7D6068); /* 0x00710887: mov ecx, dword ptr [eax*4 + 0x7d6068] */
    if (24u) _cf = (((edx) >> 23) & 1u); /* 0x0071088E: shr edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 24u; /* 0x0071088E: shr edx, 0x18 */
    /* test LO8(edx), 1 */ /* 0x00710891: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007108F6; /* 0x00710894: jne 0x7108f6 */
L_00710896:
    eax = ecx + (-0x46); /* 0x00710896: lea eax, [ecx - 0x46] */
    /* cmp eax, 0xCu */ /* 0x00710899: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00710931; /* 0x0071089C: ja 0x710931 */
L_007108A2:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x710A7C)); goto _ljump; }
L_007108A9:
    eax = 0x5Fu; /* 0x007108A9: mov eax, 0x5f */
    esi = POP32_VAL(esp); /* 0x007108AE: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007108AF: ret  */
L_007108B0:
    eax = 0x60u; /* 0x007108B0: mov eax, 0x60 */
    esi = POP32_VAL(esp); /* 0x007108B5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007108B6: ret  */
L_007108B7:
    eax = 0x61u; /* 0x007108B7: mov eax, 0x61 */
    esi = POP32_VAL(esp); /* 0x007108BC: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007108BD: ret  */
L_007108BE:
    eax = 0x5Cu; /* 0x007108BE: mov eax, 0x5c */
    esi = POP32_VAL(esp); /* 0x007108C3: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007108C4: ret  */
L_007108C5:
    eax = 0x5Eu; /* 0x007108C5: mov eax, 0x5e */
    esi = POP32_VAL(esp); /* 0x007108CA: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007108CB: ret  */
L_007108CC:
    eax = 0x59u; /* 0x007108CC: mov eax, 0x59 */
    esi = POP32_VAL(esp); /* 0x007108D1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007108D2: ret  */
L_007108D3:
    eax = 0x5Au; /* 0x007108D3: mov eax, 0x5a */
    esi = POP32_VAL(esp); /* 0x007108D8: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007108D9: ret  */
L_007108DA:
    eax = 0x5Bu; /* 0x007108DA: mov eax, 0x5b */
    esi = POP32_VAL(esp); /* 0x007108DF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007108E0: ret  */
L_007108E1:
    eax = 0x62u; /* 0x007108E1: mov eax, 0x62 */
    esi = POP32_VAL(esp); /* 0x007108E6: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007108E7: ret  */
L_007108E8:
    eax = 0x63u; /* 0x007108E8: mov eax, 0x63 */
    esi = POP32_VAL(esp); /* 0x007108ED: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007108EE: ret  */
L_007108EF:
    eax = 0x55u; /* 0x007108EF: mov eax, 0x55 */
    esi = POP32_VAL(esp); /* 0x007108F4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007108F5: ret  */
L_007108F6:
    eax = ecx + (-0x28); /* 0x007108F6: lea eax, [ecx - 0x28] */
    /* cmp eax, 0xBAu */ /* 0x007108F9: cmp eax, 0xba */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00710931; /* 0x007108FE: ja 0x710931 */
L_00710900:
    eax = (uint32_t)MEM8(eax + 0x710AC8); /* 0x00710900: movzx eax, byte ptr [eax + 0x710ac8] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x710AB0)); goto _ljump; }
L_0071090E:
    eax = 0x58u; /* 0x0071090E: mov eax, 0x58 */
    esi = POP32_VAL(esp); /* 0x00710913: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710914: ret  */
L_00710915:
    eax = 0xE6u; /* 0x00710915: mov eax, 0xe6 */
    esi = POP32_VAL(esp); /* 0x0071091A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071091B: ret  */
L_0071091C:
    eax = 0xE4u; /* 0x0071091C: mov eax, 0xe4 */
    esi = POP32_VAL(esp); /* 0x00710921: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710922: ret  */
L_00710923:
    eax = 0x54u; /* 0x00710923: mov eax, 0x54 */
    esi = POP32_VAL(esp); /* 0x00710928: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710929: ret  */
L_0071092A:
    eax = 0x57u; /* 0x0071092A: mov eax, 0x57 */
    esi = POP32_VAL(esp); /* 0x0071092F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710930: ret  */
L_00710931:
    eax = ecx; /* 0x00710931: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x00710933: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710934: ret  */
L_00710935:
    eax = esi + (-0xC); /* 0x00710935: lea eax, [esi - 0xc] */
    /* cmp eax, 0xF2u */ /* 0x00710938: cmp eax, 0xf2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF2u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00710A77; /* 0x0071093D: ja 0x710a77 */
L_00710943:
    eax = (uint32_t)MEM8(eax + 0x710C30); /* 0x00710943: movzx eax, byte ptr [eax + 0x710c30] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x710B84)); goto _ljump; }
L_00710951:
    eax = 0x9Cu; /* 0x00710951: mov eax, 0x9c */
    esi = POP32_VAL(esp); /* 0x00710956: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710957: ret  */
L_00710958:
    eax = 0x101u; /* 0x00710958: mov eax, 0x101 */
    esi = POP32_VAL(esp); /* 0x0071095D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071095E: ret  */
L_0071095F:
    eax = 0x77u; /* 0x0071095F: mov eax, 0x77 */
    esi = POP32_VAL(esp); /* 0x00710964: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710965: ret  */
L_00710966:
    eax = 0x74u; /* 0x00710966: mov eax, 0x74 */
    esi = POP32_VAL(esp); /* 0x0071096B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071096C: ret  */
L_0071096D:
    eax = 0x75u; /* 0x0071096D: mov eax, 0x75 */
    esi = POP32_VAL(esp); /* 0x00710972: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710973: ret  */
L_00710974:
    eax = 0x48u; /* 0x00710974: mov eax, 0x48 */
    esi = POP32_VAL(esp); /* 0x00710979: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071097A: ret  */
L_0071097B:
    eax = 0x53u; /* 0x0071097B: mov eax, 0x53 */
    esi = POP32_VAL(esp); /* 0x00710980: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710981: ret  */
L_00710982:
    eax = 0x68u; /* 0x00710982: mov eax, 0x68 */
    esi = POP32_VAL(esp); /* 0x00710987: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710988: ret  */
L_00710989:
    eax = 0x69u; /* 0x00710989: mov eax, 0x69 */
    esi = POP32_VAL(esp); /* 0x0071098E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071098F: ret  */
L_00710990:
    eax = 0x6Au; /* 0x00710990: mov eax, 0x6a */
    esi = POP32_VAL(esp); /* 0x00710995: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710996: ret  */
L_00710997:
    eax = 0x6Bu; /* 0x00710997: mov eax, 0x6b */
    esi = POP32_VAL(esp); /* 0x0071099C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071099D: ret  */
L_0071099E:
    eax = 0x6Cu; /* 0x0071099E: mov eax, 0x6c */
    esi = POP32_VAL(esp); /* 0x007109A3: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007109A4: ret  */
L_007109A5:
    eax = 0x6Du; /* 0x007109A5: mov eax, 0x6d */
    esi = POP32_VAL(esp); /* 0x007109AA: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007109AB: ret  */
L_007109AC:
    eax = 0x6Eu; /* 0x007109AC: mov eax, 0x6e */
    esi = POP32_VAL(esp); /* 0x007109B1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007109B2: ret  */
L_007109B3:
    eax = 0x6Fu; /* 0x007109B3: mov eax, 0x6f */
    esi = POP32_VAL(esp); /* 0x007109B8: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007109B9: ret  */
L_007109BA:
    eax = 0x70u; /* 0x007109BA: mov eax, 0x70 */
    esi = POP32_VAL(esp); /* 0x007109BF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007109C0: ret  */
L_007109C1:
    eax = 0x71u; /* 0x007109C1: mov eax, 0x71 */
    esi = POP32_VAL(esp); /* 0x007109C6: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007109C7: ret  */
L_007109C8:
    eax = 0x72u; /* 0x007109C8: mov eax, 0x72 */
    esi = POP32_VAL(esp); /* 0x007109CD: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007109CE: ret  */
L_007109CF:
    eax = 0x73u; /* 0x007109CF: mov eax, 0x73 */
    esi = POP32_VAL(esp); /* 0x007109D4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007109D5: ret  */
L_007109D6:
    eax = 0x67u; /* 0x007109D6: mov eax, 0x67 */
    esi = POP32_VAL(esp); /* 0x007109DB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007109DC: ret  */
L_007109DD:
    eax = 0x10Eu; /* 0x007109DD: mov eax, 0x10e */
    esi = POP32_VAL(esp); /* 0x007109E2: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007109E3: ret  */
L_007109E4:
    eax = 0x10Fu; /* 0x007109E4: mov eax, 0x10f */
    esi = POP32_VAL(esp); /* 0x007109E9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007109EA: ret  */
L_007109EB:
    eax = 0x111u; /* 0x007109EB: mov eax, 0x111 */
    esi = POP32_VAL(esp); /* 0x007109F0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007109F1: ret  */
L_007109F2:
    eax = 0x110u; /* 0x007109F2: mov eax, 0x110 */
    esi = POP32_VAL(esp); /* 0x007109F7: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007109F8: ret  */
L_007109F9:
    eax = 0x10Cu; /* 0x007109F9: mov eax, 0x10c */
    esi = POP32_VAL(esp); /* 0x007109FE: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007109FF: ret  */
L_00710A00:
    eax = 0x112u; /* 0x00710A00: mov eax, 0x112 */
    esi = POP32_VAL(esp); /* 0x00710A05: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A06: ret  */
L_00710A07:
    eax = 0x10Du; /* 0x00710A07: mov eax, 0x10d */
    esi = POP32_VAL(esp); /* 0x00710A0C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A0D: ret  */
L_00710A0E:
    eax = 0x106u; /* 0x00710A0E: mov eax, 0x106 */
    esi = POP32_VAL(esp); /* 0x00710A13: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A14: ret  */
L_00710A15:
    eax = 0x81u; /* 0x00710A15: mov eax, 0x81 */
    esi = POP32_VAL(esp); /* 0x00710A1A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A1B: ret  */
L_00710A1C:
    eax = 0x80u; /* 0x00710A1C: mov eax, 0x80 */
    esi = POP32_VAL(esp); /* 0x00710A21: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A22: ret  */
L_00710A23:
    eax = 0x102u; /* 0x00710A23: mov eax, 0x102 */
    esi = POP32_VAL(esp); /* 0x00710A28: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A29: ret  */
L_00710A2A:
    eax = 0x103u; /* 0x00710A2A: mov eax, 0x103 */
    esi = POP32_VAL(esp); /* 0x00710A2F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A30: ret  */
L_00710A31:
    eax = 0x104u; /* 0x00710A31: mov eax, 0x104 */
    esi = POP32_VAL(esp); /* 0x00710A36: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A37: ret  */
L_00710A38:
    eax = 0x105u; /* 0x00710A38: mov eax, 0x105 */
    esi = POP32_VAL(esp); /* 0x00710A3D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A3E: ret  */
L_00710A3F:
    eax = 0x109u; /* 0x00710A3F: mov eax, 0x109 */
    esi = POP32_VAL(esp); /* 0x00710A44: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A45: ret  */
L_00710A46:
    eax = 0x107u; /* 0x00710A46: mov eax, 0x107 */
    esi = POP32_VAL(esp); /* 0x00710A4B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A4C: ret  */
L_00710A4D:
    eax = 0x64u; /* 0x00710A4D: mov eax, 0x64 */
    esi = POP32_VAL(esp); /* 0x00710A52: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A53: ret  */
L_00710A54:
    eax = 0x9Au; /* 0x00710A54: mov eax, 0x9a */
    esi = POP32_VAL(esp); /* 0x00710A59: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A5A: ret  */
L_00710A5B:
    eax = 0xA3u; /* 0x00710A5B: mov eax, 0xa3 */
    esi = POP32_VAL(esp); /* 0x00710A60: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A61: ret  */
L_00710A62:
    eax = 0xA4u; /* 0x00710A62: mov eax, 0xa4 */
    esi = POP32_VAL(esp); /* 0x00710A67: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A68: ret  */
L_00710A69:
    eax = 0x11Bu; /* 0x00710A69: mov eax, 0x11b */
    esi = POP32_VAL(esp); /* 0x00710A6E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A6F: ret  */
L_00710A70:
    eax = 0x11Cu; /* 0x00710A70: mov eax, 0x11c */
    esi = POP32_VAL(esp); /* 0x00710A75: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A76: ret  */
L_00710A77:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00710A77: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00710A79: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710A7A: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x007108A9u: goto L_007108A9;
      case 0x007108B0u: goto L_007108B0;
      case 0x007108B7u: goto L_007108B7;
      case 0x007108BEu: goto L_007108BE;
      case 0x007108C5u: goto L_007108C5;
      case 0x007108CCu: goto L_007108CC;
      case 0x007108D3u: goto L_007108D3;
      case 0x007108DAu: goto L_007108DA;
      case 0x007108E1u: goto L_007108E1;
      case 0x007108E8u: goto L_007108E8;
      case 0x007108EFu: goto L_007108EF;
      case 0x0071090Eu: goto L_0071090E;
      case 0x00710915u: goto L_00710915;
      case 0x0071091Cu: goto L_0071091C;
      case 0x00710923u: goto L_00710923;
      case 0x0071092Au: goto L_0071092A;
      case 0x00710931u: goto L_00710931;
      case 0x00710951u: goto L_00710951;
      case 0x00710958u: goto L_00710958;
      case 0x0071095Fu: goto L_0071095F;
      case 0x00710966u: goto L_00710966;
      case 0x0071096Du: goto L_0071096D;
      case 0x00710974u: goto L_00710974;
      case 0x0071097Bu: goto L_0071097B;
      case 0x00710982u: goto L_00710982;
      case 0x00710989u: goto L_00710989;
      case 0x00710990u: goto L_00710990;
      case 0x00710997u: goto L_00710997;
      case 0x0071099Eu: goto L_0071099E;
      case 0x007109A5u: goto L_007109A5;
      case 0x007109ACu: goto L_007109AC;
      case 0x007109B3u: goto L_007109B3;
      case 0x007109BAu: goto L_007109BA;
      case 0x007109C1u: goto L_007109C1;
      case 0x007109C8u: goto L_007109C8;
      case 0x007109CFu: goto L_007109CF;
      case 0x007109D6u: goto L_007109D6;
      case 0x007109DDu: goto L_007109DD;
      case 0x007109E4u: goto L_007109E4;
      case 0x007109EBu: goto L_007109EB;
      case 0x007109F2u: goto L_007109F2;
      case 0x007109F9u: goto L_007109F9;
      case 0x00710A00u: goto L_00710A00;
      case 0x00710A07u: goto L_00710A07;
      case 0x00710A0Eu: goto L_00710A0E;
      case 0x00710A15u: goto L_00710A15;
      case 0x00710A1Cu: goto L_00710A1C;
      case 0x00710A23u: goto L_00710A23;
      case 0x00710A2Au: goto L_00710A2A;
      case 0x00710A31u: goto L_00710A31;
      case 0x00710A38u: goto L_00710A38;
      case 0x00710A3Fu: goto L_00710A3F;
      case 0x00710A46u: goto L_00710A46;
      case 0x00710A4Du: goto L_00710A4D;
      case 0x00710A54u: goto L_00710A54;
      case 0x00710A5Bu: goto L_00710A5B;
      case 0x00710A62u: goto L_00710A62;
      case 0x00710A69u: goto L_00710A69;
      case 0x00710A70u: goto L_00710A70;
      case 0x00710A77u: goto L_00710A77;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00710D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00710D30u);

L_00710D30:
    PUSH32(esp, ebp); /* 0x00710D30: push ebp */
    ebp = esp; /* 0x00710D31: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00710D33: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00710D36: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x00710D37: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x00710D3A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00710D3B: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00710D3E: push edi */
    edi = edx; /* 0x00710D3F: mov edi, edx */
    edx = ecx; /* 0x00710D41: mov edx, ecx */
    ecx = (uint32_t)LO8(ebx); /* 0x00710D43: movzx ecx, bl */
    SET_LO8(eax, MEM8(esi + 0x30)); /* 0x00710D46: mov al, byte ptr [esi + 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00710D49: dec ecx */
    _flag_k = FK_DEC;
    MEM8(ebp + 0xB) = (uint8_t)(LO8(eax)); /* 0x00710D4A: mov byte ptr [ebp + 0xb], al */
    eax = 1; /* 0x00710D4D: mov eax, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x00710D52: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x00710D52: shl eax, cl */
    MEM32(ebp + (-0x4)) = edx; /* 0x00710D54: mov dword ptr [ebp - 4], edx */
    /* test MEM8(ebp + 0xB), LO8(eax) */ /* 0x00710D57: test byte ptr [ebp + 0xb], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0xB)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710D9E; /* 0x00710D5A: je 0x710d9e */
L_00710D5C:
    /* test edx, edx */ /* 0x00710D5C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00710D75; /* 0x00710D5E: jne 0x710d75 */
L_00710D60:
    SET_LO8(eax, 1); /* 0x00710D60: mov al, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x00710D62: shl al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) << ((LO8(ecx)) & 31)); /* 0x00710D62: shl al, cl */
    SET_LO8(eax, ~LO8(eax)); /* 0x00710D64: not al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0xB)) << 24;
    SET_LO8(eax, LO8(eax) & MEM8(ebp + 0xB)); /* 0x00710D66: and al, byte ptr [ebp + 0xb] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x30) = (uint8_t)(LO8(eax)); /* 0x00710D69: mov byte ptr [esi + 0x30], al */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00710D75; /* 0x00710D6C: jne 0x710d75 */
L_00710D6E:
    ecx = MEM32(esi); /* 0x00710D6E: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_006FEA80); /* 0x00710D70: call 0x6fea80 */
    RECOMP_FLAGS_IN();
L_00710D75:
    ecx = 0x00807BE0u; /* 0x00710D75: mov ecx, 0x807be0 */
    RECOMP_CALL(sub_006F5A00); /* 0x00710D7A: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00710D7F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710DD3; /* 0x00710D81: je 0x710dd3 */
L_00710D83:
    /* cmp MEM8(eax), 0x30u */ /* 0x00710D83: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00710DD3; /* 0x00710D86: je 0x710dd3 */
L_00710D88:
    PUSH32(esp, 0x007DEB8Cu); /* 0x00710D88: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x00710D8D: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x00710D8E: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00710D94: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00710D97: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710DD3; /* 0x00710D99: je 0x710dd3 */
L_00710D9B:
    edx = MEM32(ebp + (-0x4)); /* 0x00710D9B: mov edx, dword ptr [ebp - 4] */
L_00710D9E:
    /* test edx, edx */ /* 0x00710D9E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710DBE; /* 0x00710DA0: je 0x710dbe */
L_00710DA2:
    /* test edi, edi */ /* 0x00710DA2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00710DD3; /* 0x00710DA4: jne 0x710dd3 */
L_00710DA6:
    edx = MEM32(ebp + 0x10); /* 0x00710DA6: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x00710DA9: push ecx */
    ecx = MEM32(esi); /* 0x00710DAA: mov ecx, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x00710DAC: push ebx */
    PUSH32(esp, 1); /* 0x00710DAD: push 1 */
    RECOMP_CALL(sub_006F0EA0); /* 0x00710DAF: call 0x6f0ea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710DB4: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00710DB7: pop edi */
    esi = POP32_VAL(esp); /* 0x00710DB8: pop esi */
    ebx = POP32_VAL(esp); /* 0x00710DB9: pop ebx */
    esp = ebp; /* 0x00710DBA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00710DBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710DBD: ret  */
L_00710DBE:
    /* test edi, edi */ /* 0x00710DBE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710DD3; /* 0x00710DC0: je 0x710dd3 */
L_00710DC2:
    edx = MEM32(ebp + 0x10); /* 0x00710DC2: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x00710DC5: push ecx */
    ecx = MEM32(esi); /* 0x00710DC6: mov ecx, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x00710DC8: push ebx */
    PUSH32(esp, 0); /* 0x00710DC9: push 0 */
    RECOMP_CALL(sub_006F0EA0); /* 0x00710DCB: call 0x6f0ea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710DD0: add esp, 0xc */
    _flag_k = FK_ADD;
L_00710DD3:
    edi = POP32_VAL(esp); /* 0x00710DD3: pop edi */
    esi = POP32_VAL(esp); /* 0x00710DD4: pop esi */
    ebx = POP32_VAL(esp); /* 0x00710DD5: pop ebx */
    esp = ebp; /* 0x00710DD6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00710DD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710DD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_00710DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00710DE0u);

L_00710DE0:
    PUSH32(esp, ebp); /* 0x00710DE0: push ebp */
    ebp = esp; /* 0x00710DE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00710DE3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00710DE6: push ebx */
    ebx = edx; /* 0x00710DE7: mov ebx, edx */
    eax = ecx; /* 0x00710DE9: mov eax, ecx */
    PUSH32(esp, esi); /* 0x00710DEB: push esi */
    PUSH32(esp, edi); /* 0x00710DEC: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x00710DED: mov dword ptr [ebp - 4], eax */
    /* cmp eax, MEM32(ebx + 0x1C) */ /* 0x00710DF0: cmp eax, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00710E73; /* 0x00710DF3: je 0x710e73 */
L_00710DF5:
    esi = MEM32(ebp + 0x8); /* 0x00710DF5: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x00710DF8: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(0x926A28); /* 0x00710DFB: mov edi, dword ptr [0x926a28] */
    edx = edi; /* 0x00710E01: mov edx, edi */
    PUSH32(esp, esi); /* 0x00710E03: push esi */
    PUSH32(esp, 1); /* 0x00710E04: push 1 */
    PUSH32(esp, ebx); /* 0x00710E06: push ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x00710E07: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_00710D30); /* 0x00710E0A: call 0x710d30 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x00710E0F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710E12: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = edi; /* 0x00710E15: mov edx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    ecx = ecx & 0x10u; /* 0x00710E17: and ecx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    edx = edx & 2; /* 0x00710E1A: and edx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x00710E1D: push esi */
    PUSH32(esp, 2); /* 0x00710E1E: push 2 */
    PUSH32(esp, ebx); /* 0x00710E20: push ebx */
    RECOMP_CALL(sub_00710D30); /* 0x00710E21: call 0x710d30 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x00710E26: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710E29: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = edi; /* 0x00710E2C: mov edx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    ecx = ecx & 2; /* 0x00710E2E: and ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    edx = edx & 4; /* 0x00710E31: and edx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x00710E34: push esi */
    PUSH32(esp, 3); /* 0x00710E35: push 3 */
    PUSH32(esp, ebx); /* 0x00710E37: push ebx */
    RECOMP_CALL(sub_00710D30); /* 0x00710E38: call 0x710d30 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x00710E3D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710E40: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = edi; /* 0x00710E43: mov edx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    ecx = ecx & 0x20u; /* 0x00710E45: and ecx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    edx = edx & 8; /* 0x00710E48: and edx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x00710E4B: push esi */
    PUSH32(esp, 4); /* 0x00710E4C: push 4 */
    PUSH32(esp, ebx); /* 0x00710E4E: push ebx */
    RECOMP_CALL(sub_00710D30); /* 0x00710E4F: call 0x710d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710E54: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    edi = edi & 0x10u; /* 0x00710E57: and edi, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edi; /* 0x00710E5A: mov edx, edi */
    PUSH32(esp, esi); /* 0x00710E5C: push esi */
    esi = MEM32(ebp + (-0x4)); /* 0x00710E5D: mov esi, dword ptr [ebp - 4] */
    ecx = esi; /* 0x00710E60: mov ecx, esi */
    PUSH32(esp, 5); /* 0x00710E62: push 5 */
    PUSH32(esp, ebx); /* 0x00710E64: push ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    ecx = ecx & 0x40u; /* 0x00710E65: and ecx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_00710D30); /* 0x00710E68: call 0x710d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710E6D: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x1C) = esi; /* 0x00710E70: mov dword ptr [ebx + 0x1c], esi */
L_00710E73:
    edi = POP32_VAL(esp); /* 0x00710E73: pop edi */
    esi = POP32_VAL(esp); /* 0x00710E74: pop esi */
    ebx = POP32_VAL(esp); /* 0x00710E75: pop ebx */
    esp = ebp; /* 0x00710E76: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00710E78: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710E79: ret  */
    RECOMP_REGS_OUT();
}

void sub_00710E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00710E80u);

L_00710E80:
    PUSH32(esp, ebx); /* 0x00710E80: push ebx */
    PUSH32(esp, esi); /* 0x00710E81: push esi */
    esi = edx; /* 0x00710E82: mov esi, edx */
    ebx = ecx; /* 0x00710E84: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x00710E86: push edi */
    /* cmp ebx, MEM32(esi + 0x1C) */ /* 0x00710E87: cmp ebx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00710FBD; /* 0x00710E8A: je 0x710fbd */
L_00710E90:
    edi = MEM32(0x926A28); /* 0x00710E90: mov edi, dword ptr [0x926a28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x00710E96: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710EAD; /* 0x00710E99: je 0x710ead */
L_00710E9B:
    PUSH32(esp, 0); /* 0x00710E9B: push 0 */
    PUSH32(esp, 1); /* 0x00710E9D: push 1 */
    edx = edi; /* 0x00710E9F: mov edx, edi */
    PUSH32(esp, esi); /* 0x00710EA1: push esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x00710EA2: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_00710D30); /* 0x00710EA5: call 0x710d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710EAA: add esp, 0xc */
    _flag_k = FK_ADD;
L_00710EAD:
    /* test LO8(ebx), 2 */ /* 0x00710EAD: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710ECD; /* 0x00710EB0: je 0x710ecd */
L_00710EB2:
    ecx = ebx; /* 0x00710EB2: mov ecx, ebx */
    edx = edi; /* 0x00710EB4: mov edx, edi */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00710EB6: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x00710EB6: shr ecx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x00710EB8: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x00710EBB: push 0 */
    ecx = ~ecx; /* 0x00710EBD: not ecx */
    PUSH32(esp, 1); /* 0x00710EBF: push 1 */
    PUSH32(esp, esi); /* 0x00710EC1: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x00710EC2: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_00710D30); /* 0x00710EC5: call 0x710d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710ECA: add esp, 0xc */
    _flag_k = FK_ADD;
L_00710ECD:
    ecx = ebx; /* 0x00710ECD: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    ecx = ecx & 4; /* 0x00710ECF: and ecx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710EE6; /* 0x00710ED2: je 0x710ee6 */
L_00710ED4:
    PUSH32(esp, 0); /* 0x00710ED4: push 0 */
    PUSH32(esp, 3); /* 0x00710ED6: push 3 */
    edx = edi; /* 0x00710ED8: mov edx, edi */
    PUSH32(esp, esi); /* 0x00710EDA: push esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    edx = edx & 4; /* 0x00710EDB: and edx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_00710D30); /* 0x00710EDE: call 0x710d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710EE3: add esp, 0xc */
    _flag_k = FK_ADD;
L_00710EE6:
    /* test LO8(ebx), 8 */ /* 0x00710EE6: test bl, 8 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710F07; /* 0x00710EE9: je 0x710f07 */
L_00710EEB:
    ecx = ebx; /* 0x00710EEB: mov ecx, ebx */
    edx = edi; /* 0x00710EED: mov edx, edi */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x00710EEF: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x00710EEF: shr ecx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    edx = edx & 4; /* 0x00710EF2: and edx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x00710EF5: push 0 */
    ecx = ~ecx; /* 0x00710EF7: not ecx */
    PUSH32(esp, 3); /* 0x00710EF9: push 3 */
    PUSH32(esp, esi); /* 0x00710EFB: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x00710EFC: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_00710D30); /* 0x00710EFF: call 0x710d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710F04: add esp, 0xc */
    _flag_k = FK_ADD;
L_00710F07:
    ecx = ebx; /* 0x00710F07: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    ecx = ecx & 0x10u; /* 0x00710F09: and ecx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710F20; /* 0x00710F0C: je 0x710f20 */
L_00710F0E:
    PUSH32(esp, 0); /* 0x00710F0E: push 0 */
    PUSH32(esp, 2); /* 0x00710F10: push 2 */
    edx = edi; /* 0x00710F12: mov edx, edi */
    PUSH32(esp, esi); /* 0x00710F14: push esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    edx = edx & 2; /* 0x00710F15: and edx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_00710D30); /* 0x00710F18: call 0x710d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710F1D: add esp, 0xc */
    _flag_k = FK_ADD;
L_00710F20:
    /* test LO8(ebx), 0x20u */ /* 0x00710F20: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710F41; /* 0x00710F23: je 0x710f41 */
L_00710F25:
    ecx = ebx; /* 0x00710F25: mov ecx, ebx */
    edx = edi; /* 0x00710F27: mov edx, edi */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x00710F29: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x00710F29: shr ecx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    edx = edx & 2; /* 0x00710F2C: and edx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x00710F2F: push 0 */
    ecx = ~ecx; /* 0x00710F31: not ecx */
    PUSH32(esp, 2); /* 0x00710F33: push 2 */
    PUSH32(esp, esi); /* 0x00710F35: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x00710F36: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_00710D30); /* 0x00710F39: call 0x710d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710F3E: add esp, 0xc */
    _flag_k = FK_ADD;
L_00710F41:
    ecx = ebx; /* 0x00710F41: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    ecx = ecx & 0x40u; /* 0x00710F43: and ecx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710F5A; /* 0x00710F46: je 0x710f5a */
L_00710F48:
    PUSH32(esp, 0); /* 0x00710F48: push 0 */
    PUSH32(esp, 4); /* 0x00710F4A: push 4 */
    edx = edi; /* 0x00710F4C: mov edx, edi */
    PUSH32(esp, esi); /* 0x00710F4E: push esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    edx = edx & 8; /* 0x00710F4F: and edx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_00710D30); /* 0x00710F52: call 0x710d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710F57: add esp, 0xc */
    _flag_k = FK_ADD;
L_00710F5A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x00710F5A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00710F7A; /* 0x00710F5C: jns 0x710f7a */
L_00710F5E:
    ecx = ebx; /* 0x00710F5E: mov ecx, ebx */
    edx = edi; /* 0x00710F60: mov edx, edi */
    if (7u) _cf = (((ecx) >> 6) & 1u); /* 0x00710F62: shr ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 7u; /* 0x00710F62: shr ecx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    edx = edx & 8; /* 0x00710F65: and edx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x00710F68: push 0 */
    ecx = ~ecx; /* 0x00710F6A: not ecx */
    PUSH32(esp, 4); /* 0x00710F6C: push 4 */
    PUSH32(esp, esi); /* 0x00710F6E: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x00710F6F: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_00710D30); /* 0x00710F72: call 0x710d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710F77: add esp, 0xc */
    _flag_k = FK_ADD;
L_00710F7A:
    ecx = ebx; /* 0x00710F7A: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    ecx = ecx & 0x100u; /* 0x00710F7C: and ecx, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710F96; /* 0x00710F82: je 0x710f96 */
L_00710F84:
    PUSH32(esp, 0); /* 0x00710F84: push 0 */
    PUSH32(esp, 5); /* 0x00710F86: push 5 */
    edx = edi; /* 0x00710F88: mov edx, edi */
    PUSH32(esp, esi); /* 0x00710F8A: push esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    edx = edx & 0x10u; /* 0x00710F8B: and edx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_00710D30); /* 0x00710F8E: call 0x710d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710F93: add esp, 0xc */
    _flag_k = FK_ADD;
L_00710F96:
    /* test ebx, 0x200u */ /* 0x00710F96: test ebx, 0x200 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00710FBA; /* 0x00710F9C: je 0x710fba */
L_00710F9E:
    ecx = ebx; /* 0x00710F9E: mov ecx, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    edi = edi & 0x10u; /* 0x00710FA0: and edi, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (9u) _cf = (((ecx) >> 8) & 1u); /* 0x00710FA3: shr ecx, 9 */
    if (9u) { _flag_a = recomp_flags_pack((ecx >> 9u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 9u; /* 0x00710FA3: shr ecx, 9 */
    edx = edi; /* 0x00710FA6: mov edx, edi */
    PUSH32(esp, 0); /* 0x00710FA8: push 0 */
    ecx = ~ecx; /* 0x00710FAA: not ecx */
    PUSH32(esp, 5); /* 0x00710FAC: push 5 */
    PUSH32(esp, esi); /* 0x00710FAE: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x00710FAF: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_00710D30); /* 0x00710FB2: call 0x710d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00710FB7: add esp, 0xc */
    _flag_k = FK_ADD;
L_00710FBA:
    MEM32(esi + 0x1C) = ebx; /* 0x00710FBA: mov dword ptr [esi + 0x1c], ebx */
L_00710FBD:
    edi = POP32_VAL(esp); /* 0x00710FBD: pop edi */
    esi = POP32_VAL(esp); /* 0x00710FBE: pop esi */
    ebx = POP32_VAL(esp); /* 0x00710FBF: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00710FC0: ret  */
    RECOMP_REGS_OUT();
}

void sub_00710FD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00710FD0u);

L_00710FD0:
    PUSH32(esp, ebx); /* 0x00710FD0: push ebx */
    ebx = MEM32(0x926A28); /* 0x00710FD1: mov ebx, dword ptr [0x926a28] */
    PUSH32(esp, esi); /* 0x00710FD7: push esi */
    PUSH32(esp, edi); /* 0x00710FD8: push edi */
    PUSH32(esp, 1); /* 0x00710FD9: push 1 */
    esi = ecx; /* 0x00710FDB: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x7CC74C)); /* 0x00710FDD: call dword ptr [0x7cc74c] */
    RECOMP_FLAGS_IN();
    ecx = 0x8000u; /* 0x00710FE3: mov ecx, 0x8000 */
    /* test LO16(ecx), LO16(eax) */ /* 0x00710FE8: test cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00711042; /* 0x00710FEB: jne 0x711042 */
L_00710FED:
    SET_LO8(eax, MEM8(esi + 0x30)); /* 0x00710FED: mov al, byte ptr [esi + 0x30] */
    edi = ebx; /* 0x00710FF0: mov edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi & 1; /* 0x00710FF2: and edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 1 */ /* 0x00710FF5: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071102D; /* 0x00710FF7: je 0x71102d */
L_00710FF9:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFEu); /* 0x00710FF9: and al, 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x30) = (uint8_t)(LO8(eax)); /* 0x00710FFB: mov byte ptr [esi + 0x30], al */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00711007; /* 0x00710FFE: jne 0x711007 */
L_00711000:
    ecx = MEM32(esi); /* 0x00711000: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_006FEA80); /* 0x00711002: call 0x6fea80 */
    RECOMP_FLAGS_IN();
L_00711007:
    ecx = 0x00807BE0u; /* 0x00711007: mov ecx, 0x807be0 */
    RECOMP_CALL(sub_006F5A00); /* 0x0071100C: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00711011: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711042; /* 0x00711013: je 0x711042 */
L_00711015:
    /* cmp MEM8(eax), 0x30u */ /* 0x00711015: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00711042; /* 0x00711018: je 0x711042 */
L_0071101A:
    PUSH32(esp, 0x007DEB8Cu); /* 0x0071101A: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x0071101F: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x00711020: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00711026: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00711029: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711042; /* 0x0071102B: je 0x711042 */
L_0071102D:
    /* test edi, edi */ /* 0x0071102D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711042; /* 0x0071102F: je 0x711042 */
L_00711031:
    PUSH32(esp, ecx); /* 0x00711031: push ecx */
    ecx = MEM32(esi); /* 0x00711032: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711034: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x00711036: push 1 */
    PUSH32(esp, 0); /* 0x00711038: push 0 */
    RECOMP_CALL(sub_006F0EA0); /* 0x0071103A: call 0x6f0ea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0071103F: add esp, 0xc */
    _flag_k = FK_ADD;
L_00711042:
    PUSH32(esp, 2); /* 0x00711042: push 2 */
    RECOMP_ICALL(MEM32(0x7CC74C)); /* 0x00711044: call dword ptr [0x7cc74c] */
    RECOMP_FLAGS_IN();
    ecx = 0x8000u; /* 0x0071104A: mov ecx, 0x8000 */
    /* test LO16(ecx), LO16(eax) */ /* 0x0071104F: test cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007110A9; /* 0x00711052: jne 0x7110a9 */
L_00711054:
    SET_LO8(eax, MEM8(esi + 0x30)); /* 0x00711054: mov al, byte ptr [esi + 0x30] */
    edi = ebx; /* 0x00711057: mov edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    edi = edi & 4; /* 0x00711059: and edi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 4 */ /* 0x0071105C: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711094; /* 0x0071105E: je 0x711094 */
L_00711060:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFBu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFBu); /* 0x00711060: and al, 0xfb */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x30) = (uint8_t)(LO8(eax)); /* 0x00711062: mov byte ptr [esi + 0x30], al */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0071106E; /* 0x00711065: jne 0x71106e */
L_00711067:
    ecx = MEM32(esi); /* 0x00711067: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_006FEA80); /* 0x00711069: call 0x6fea80 */
    RECOMP_FLAGS_IN();
L_0071106E:
    ecx = 0x00807BE0u; /* 0x0071106E: mov ecx, 0x807be0 */
    RECOMP_CALL(sub_006F5A00); /* 0x00711073: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00711078: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007110A9; /* 0x0071107A: je 0x7110a9 */
L_0071107C:
    /* cmp MEM8(eax), 0x30u */ /* 0x0071107C: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007110A9; /* 0x0071107F: je 0x7110a9 */
L_00711081:
    PUSH32(esp, 0x007DEB8Cu); /* 0x00711081: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x00711086: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x00711087: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071108D: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00711090: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007110A9; /* 0x00711092: je 0x7110a9 */
L_00711094:
    /* test edi, edi */ /* 0x00711094: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007110A9; /* 0x00711096: je 0x7110a9 */
L_00711098:
    PUSH32(esp, ecx); /* 0x00711098: push ecx */
    ecx = MEM32(esi); /* 0x00711099: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0071109B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x0071109D: push 3 */
    PUSH32(esp, 0); /* 0x0071109F: push 0 */
    RECOMP_CALL(sub_006F0EA0); /* 0x007110A1: call 0x6f0ea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007110A6: add esp, 0xc */
    _flag_k = FK_ADD;
L_007110A9:
    PUSH32(esp, 4); /* 0x007110A9: push 4 */
    RECOMP_ICALL(MEM32(0x7CC74C)); /* 0x007110AB: call dword ptr [0x7cc74c] */
    RECOMP_FLAGS_IN();
    ecx = 0x8000u; /* 0x007110B1: mov ecx, 0x8000 */
    /* test LO16(ecx), LO16(eax) */ /* 0x007110B6: test cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00711110; /* 0x007110B9: jne 0x711110 */
L_007110BB:
    SET_LO8(eax, MEM8(esi + 0x30)); /* 0x007110BB: mov al, byte ptr [esi + 0x30] */
    edi = ebx; /* 0x007110BE: mov edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    edi = edi & 2; /* 0x007110C0: and edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 2 */ /* 0x007110C3: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_007110FB; /* 0x007110C5: je 0x7110fb */
L_007110C7:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFDu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFDu); /* 0x007110C7: and al, 0xfd */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x30) = (uint8_t)(LO8(eax)); /* 0x007110C9: mov byte ptr [esi + 0x30], al */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007110D5; /* 0x007110CC: jne 0x7110d5 */
L_007110CE:
    ecx = MEM32(esi); /* 0x007110CE: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_006FEA80); /* 0x007110D0: call 0x6fea80 */
    RECOMP_FLAGS_IN();
L_007110D5:
    ecx = 0x00807BE0u; /* 0x007110D5: mov ecx, 0x807be0 */
    RECOMP_CALL(sub_006F5A00); /* 0x007110DA: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007110DF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711110; /* 0x007110E1: je 0x711110 */
L_007110E3:
    /* cmp MEM8(eax), 0x30u */ /* 0x007110E3: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00711110; /* 0x007110E6: je 0x711110 */
L_007110E8:
    PUSH32(esp, 0x007DEB8Cu); /* 0x007110E8: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x007110ED: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x007110EE: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007110F4: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x007110F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711110; /* 0x007110F9: je 0x711110 */
L_007110FB:
    /* test edi, edi */ /* 0x007110FB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711110; /* 0x007110FD: je 0x711110 */
L_007110FF:
    PUSH32(esp, ecx); /* 0x007110FF: push ecx */
    ecx = MEM32(esi); /* 0x00711100: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711102: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x00711104: push 2 */
    PUSH32(esp, 0); /* 0x00711106: push 0 */
    RECOMP_CALL(sub_006F0EA0); /* 0x00711108: call 0x6f0ea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0071110D: add esp, 0xc */
    _flag_k = FK_ADD;
L_00711110:
    PUSH32(esp, 5); /* 0x00711110: push 5 */
    RECOMP_ICALL(MEM32(0x7CC74C)); /* 0x00711112: call dword ptr [0x7cc74c] */
    RECOMP_FLAGS_IN();
    ecx = 0x8000u; /* 0x00711118: mov ecx, 0x8000 */
    /* test LO16(ecx), LO16(eax) */ /* 0x0071111D: test cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00711177; /* 0x00711120: jne 0x711177 */
L_00711122:
    SET_LO8(eax, MEM8(esi + 0x30)); /* 0x00711122: mov al, byte ptr [esi + 0x30] */
    edi = ebx; /* 0x00711125: mov edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    edi = edi & 8; /* 0x00711127: and edi, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 8 */ /* 0x0071112A: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711162; /* 0x0071112C: je 0x711162 */
L_0071112E:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xF7u) << 24;
    SET_LO8(eax, LO8(eax) & 0xF7u); /* 0x0071112E: and al, 0xf7 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x30) = (uint8_t)(LO8(eax)); /* 0x00711130: mov byte ptr [esi + 0x30], al */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0071113C; /* 0x00711133: jne 0x71113c */
L_00711135:
    ecx = MEM32(esi); /* 0x00711135: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_006FEA80); /* 0x00711137: call 0x6fea80 */
    RECOMP_FLAGS_IN();
L_0071113C:
    ecx = 0x00807BE0u; /* 0x0071113C: mov ecx, 0x807be0 */
    RECOMP_CALL(sub_006F5A00); /* 0x00711141: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00711146: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711177; /* 0x00711148: je 0x711177 */
L_0071114A:
    /* cmp MEM8(eax), 0x30u */ /* 0x0071114A: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00711177; /* 0x0071114D: je 0x711177 */
L_0071114F:
    PUSH32(esp, 0x007DEB8Cu); /* 0x0071114F: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x00711154: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x00711155: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071115B: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0071115E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711177; /* 0x00711160: je 0x711177 */
L_00711162:
    /* test edi, edi */ /* 0x00711162: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711177; /* 0x00711164: je 0x711177 */
L_00711166:
    PUSH32(esp, ecx); /* 0x00711166: push ecx */
    ecx = MEM32(esi); /* 0x00711167: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711169: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x0071116B: push 4 */
    PUSH32(esp, 0); /* 0x0071116D: push 0 */
    RECOMP_CALL(sub_006F0EA0); /* 0x0071116F: call 0x6f0ea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00711174: add esp, 0xc */
    _flag_k = FK_ADD;
L_00711177:
    PUSH32(esp, 6); /* 0x00711177: push 6 */
    RECOMP_ICALL(MEM32(0x7CC74C)); /* 0x00711179: call dword ptr [0x7cc74c] */
    RECOMP_FLAGS_IN();
    ecx = 0x8000u; /* 0x0071117F: mov ecx, 0x8000 */
    /* test LO16(ecx), LO16(eax) */ /* 0x00711184: test cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007111DC; /* 0x00711187: jne 0x7111dc */
L_00711189:
    SET_LO8(eax, MEM8(esi + 0x30)); /* 0x00711189: mov al, byte ptr [esi + 0x30] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    ebx = ebx & 0x10u; /* 0x0071118C: and ebx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 0x10u */ /* 0x0071118F: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_007111C7; /* 0x00711191: je 0x7111c7 */
L_00711193:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xEFu) << 24;
    SET_LO8(eax, LO8(eax) & 0xEFu); /* 0x00711193: and al, 0xef */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x30) = (uint8_t)(LO8(eax)); /* 0x00711195: mov byte ptr [esi + 0x30], al */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007111A1; /* 0x00711198: jne 0x7111a1 */
L_0071119A:
    ecx = MEM32(esi); /* 0x0071119A: mov ecx, dword ptr [esi] */
    RECOMP_CALL(sub_006FEA80); /* 0x0071119C: call 0x6fea80 */
    RECOMP_FLAGS_IN();
L_007111A1:
    ecx = 0x00807BE0u; /* 0x007111A1: mov ecx, 0x807be0 */
    RECOMP_CALL(sub_006F5A00); /* 0x007111A6: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007111AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007111DC; /* 0x007111AD: je 0x7111dc */
L_007111AF:
    /* cmp MEM8(eax), 0x30u */ /* 0x007111AF: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007111DC; /* 0x007111B2: je 0x7111dc */
L_007111B4:
    PUSH32(esp, 0x007DEB8Cu); /* 0x007111B4: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x007111B9: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x007111BA: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007111C0: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x007111C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007111DC; /* 0x007111C5: je 0x7111dc */
L_007111C7:
    /* test ebx, ebx */ /* 0x007111C7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007111DC; /* 0x007111C9: je 0x7111dc */
L_007111CB:
    PUSH32(esp, ecx); /* 0x007111CB: push ecx */
    ecx = MEM32(esi); /* 0x007111CC: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x007111CE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 5); /* 0x007111D0: push 5 */
    PUSH32(esp, 0); /* 0x007111D2: push 0 */
    RECOMP_CALL(sub_006F0EA0); /* 0x007111D4: call 0x6f0ea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007111D9: add esp, 0xc */
    _flag_k = FK_ADD;
L_007111DC:
    edi = POP32_VAL(esp); /* 0x007111DC: pop edi */
    MEM32(esi + 0x1C) = 0; /* 0x007111DD: mov dword ptr [esi + 0x1c], 0 */
    esi = POP32_VAL(esp); /* 0x007111E4: pop esi */
    ebx = POP32_VAL(esp); /* 0x007111E5: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007111E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_007111F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007111F0u);

L_007111F0:
    /* cmp ecx, 0x7Fu */ /* 0x007111F0: cmp ecx, 0x7f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00711201; /* 0x007111F3: ja 0x711201 */
L_007111F5:
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x007111F5: mov byte ptr [edx], cl */
    eax = 1; /* 0x007111F7: mov eax, 1 */
    MEM8(edx + 0x1) = (uint8_t)(0); /* 0x007111FC: mov byte ptr [edx + 1], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00711200: ret  */
L_00711201:
    /* cmp ecx, 0x7FFu */ /* 0x00711201: cmp ecx, 0x7ff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00711227; /* 0x00711207: ja 0x711227 */
L_00711209:
    eax = ecx; /* 0x00711209: mov eax, ecx */
    MEM8(edx + 0x2) = (uint8_t)(0); /* 0x0071120B: mov byte ptr [edx + 2], 0 */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x0071120F: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x0071120F: shr eax, 6 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x00711212: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x1Fu); /* 0x00711215: and al, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xC0u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xC0u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xC0u); /* 0x00711217: or al, 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x00711219: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x0071121C: mov byte ptr [edx], al */
    eax = 1; /* 0x0071121E: mov eax, 1 */
    MEM8(edx + 0x1) = (uint8_t)(LO8(ecx)); /* 0x00711223: mov byte ptr [edx + 1], cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00711226: ret  */
L_00711227:
    /* cmp ecx, 0xFFFFu */ /* 0x00711227: cmp ecx, 0xffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00711259; /* 0x0071122D: ja 0x711259 */
L_0071122F:
    eax = ecx; /* 0x0071122F: mov eax, ecx */
    MEM8(edx + 0x3) = (uint8_t)(0); /* 0x00711231: mov byte ptr [edx + 3], 0 */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x00711235: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x00711235: shr eax, 0xc */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFu); /* 0x00711238: and al, 0xf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0xE0u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xE0u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xE0u); /* 0x0071123A: or al, 0xe0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x0071123C: mov byte ptr [edx], al */
    eax = ecx; /* 0x0071123E: mov eax, ecx */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x00711240: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x00711240: shr eax, 6 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x00711243: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x00711246: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x00711248: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x0071124A: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x0071124D: mov byte ptr [edx + 1], al */
    eax = 1; /* 0x00711250: mov eax, 1 */
    MEM8(edx + 0x2) = (uint8_t)(LO8(ecx)); /* 0x00711255: mov byte ptr [edx + 2], cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00711258: ret  */
L_00711259:
    /* cmp ecx, 0x0010FFFFu */ /* 0x00711259: cmp ecx, 0x10ffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x0010FFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00711295; /* 0x0071125F: ja 0x711295 */
L_00711261:
    eax = ecx; /* 0x00711261: mov eax, ecx */
    MEM8(edx + 0x4) = (uint8_t)(0); /* 0x00711263: mov byte ptr [edx + 4], 0 */
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x00711267: shr eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((eax >> 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 18u; /* 0x00711267: shr eax, 0x12 */
    _flag_a = (uint32_t)((LO8(eax) | 0xF0u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xF0u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xF0u); /* 0x0071126A: or al, 0xf0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x0071126C: mov byte ptr [edx], al */
    eax = ecx; /* 0x0071126E: mov eax, ecx */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x00711270: shr eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 12u; /* 0x00711270: shr eax, 0xc */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x00711273: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x00711275: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x00711277: mov byte ptr [edx + 1], al */
    eax = ecx; /* 0x0071127A: mov eax, ecx */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x0071127C: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x0071127C: shr eax, 6 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x3Fu); /* 0x0071127F: and cl, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x00711282: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x80u); /* 0x00711284: or al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | 0x80u)) << 24; _flag_b = (uint32_t)((LO8(ecx) | 0x80u)) << 24;
    SET_LO8(ecx, LO8(ecx) | 0x80u); /* 0x00711286: or cl, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + 0x2) = (uint8_t)(LO8(eax)); /* 0x00711289: mov byte ptr [edx + 2], al */
    eax = 1; /* 0x0071128C: mov eax, 1 */
    MEM8(edx + 0x3) = (uint8_t)(LO8(ecx)); /* 0x00711291: mov byte ptr [edx + 3], cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00711294: ret  */
L_00711295:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00711295: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00711297: ret  */
    RECOMP_REGS_OUT();
}

void sub_007112A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007112A0u);

L_007112A0:
    ecx = 0x00807C2Cu; /* 0x007112A0: mov ecx, 0x807c2c */
    RECOMP_CALL(sub_006F5A00); /* 0x007112A5: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007112AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007112D3; /* 0x007112AC: je 0x7112d3 */
L_007112AE:
    /* cmp MEM8(eax), 0x30u */ /* 0x007112AE: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007112D3; /* 0x007112B1: je 0x7112d3 */
L_007112B3:
    PUSH32(esp, 0x007DEB8Cu); /* 0x007112B3: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x007112B8: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x007112B9: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007112BF: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x007112C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007112D3; /* 0x007112C4: je 0x7112d3 */
L_007112C6:
    ecx = 1; /* 0x007112C6: mov ecx, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007112CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x007112CD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x007112CF: sete al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007112D2: ret  */
L_007112D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x007112D3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007112D5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x007112D7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x007112D9: sete al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007112DC: ret  */
    RECOMP_REGS_OUT();
}

void sub_007112E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007112E0u);

L_007112E0:
    PUSH32(esp, ebp); /* 0x007112E0: push ebp */
    ebp = esp; /* 0x007112E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x78u; /* 0x007112E3: sub esp, 0x78 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x007112E6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007112EB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x007112ED: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x14); /* 0x007112F0: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(0x925478); /* 0x007112F3: mov eax, dword ptr [0x925478] */
    MEM32(ebp + (-0x54)) = ecx; /* 0x007112F8: mov dword ptr [ebp - 0x54], ecx */
    MEM32(ebp + (-0x4C)) = ecx; /* 0x007112FB: mov dword ptr [ebp - 0x4c], ecx */
    PUSH32(esp, esi); /* 0x007112FE: push esi */
    esi = MEM32(ebp + 0x10); /* 0x007112FF: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x70)) = esi; /* 0x00711302: mov dword ptr [ebp - 0x70], esi */
    PUSH32(esp, edi); /* 0x00711305: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00711306: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x48)) = edi; /* 0x00711309: mov dword ptr [ebp - 0x48], edi */
    /* test eax, eax */ /* 0x0071130C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711315; /* 0x0071130E: je 0x711315 */
L_00711310:
    /* test MEM8(eax), 2 */ /* 0x00711310: test byte ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0071133D; /* 0x00711313: jne 0x71133d */
L_00711315:
    eax = MEM32(ebp + 0xC); /* 0x00711315: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x00711318: mov dword ptr [ebp - 0x20], ecx */
    ecx = ebp + (-0x34); /* 0x0071131B: lea ecx, [ebp - 0x34] */
    MEM16(ebp + (-0x34)) = (uint16_t)(2); /* 0x0071131E: mov word ptr [ebp - 0x34], 2 */
    MEM8(ebp + (-0x32)) = (uint8_t)(5); /* 0x00711324: mov byte ptr [ebp - 0x32], 5 */
    MEM32(ebp + (-0x30)) = 1; /* 0x00711328: mov dword ptr [ebp - 0x30], 1 */
    MEM32(ebp + (-0x2C)) = edi; /* 0x0071132F: mov dword ptr [ebp - 0x2c], edi */
    MEM32(ebp + (-0x28)) = eax; /* 0x00711332: mov dword ptr [ebp - 0x28], eax */
    MEM32(ebp + (-0x24)) = esi; /* 0x00711335: mov dword ptr [ebp - 0x24], esi */
    RECOMP_CALL(sub_006ED5F0); /* 0x00711338: call 0x6ed5f0 */
    RECOMP_FLAGS_IN();
L_0071133D:
    PUSH32(esp, 0x00806A5Cu); /* 0x0071133D: push 0x806a5c */
    PUSH32(esp, edi); /* 0x00711342: push edi */
    RECOMP_ICALL(MEM32(0x7CC738)); /* 0x00711343: call dword ptr [0x7cc738] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x00711349: mov edi, eax */
    MEM32(ebp + (-0x58)) = edi; /* 0x0071134B: mov dword ptr [ebp - 0x58], edi */
    /* test edi, edi */ /* 0x0071134E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00711361; /* 0x00711350: jne 0x711361 */
L_00711352:
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x00711352: push dword ptr [ebp - 0x54] */
    PUSH32(esp, esi); /* 0x00711355: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00711356: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x00711359: push dword ptr [ebp - 0x48] */
    goto L_007122B4; /* 0x0071135C: jmp 0x7122b4 */
L_00711361:
    PUSH32(esp, MEM32(edi + 0x3C)); /* 0x00711361: push dword ptr [edi + 0x3c] */
    edx = MEM32(ebp + 0xC); /* 0x00711364: mov edx, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4C); /* 0x00711367: lea eax, [ebp - 0x4c] */
    ecx = MEM32(ebp + (-0x48)); /* 0x0071136A: mov ecx, dword ptr [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x0071136D: push eax */
    PUSH32(esp, esi); /* 0x0071136E: push esi */
    RECOMP_CALL(sub_0070F4C0); /* 0x0071136F: call 0x70f4c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00711374: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00711377: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00711ED4; /* 0x00711379: jne 0x711ed4 */
L_0071137F:
    eax = MEM32(ebp + 0xC); /* 0x0071137F: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFu */ /* 0x00711382: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00711C2A; /* 0x00711387: ja 0x711c2a */
L_0071138D:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00711A1C; /* 0x0071138D: je 0x711a1c */
L_00711393:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFBu; /* 0x00711393: add eax, -5 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x9Cu */ /* 0x00711396: cmp eax, 0x9c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x9Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_007113BF; /* 0x0071139B: ja 0x7113bf */
L_0071139D:
    eax = (uint32_t)MEM8(eax + 0x712310); /* 0x0071139D: movzx eax, byte ptr [eax + 0x712310] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x7122D8)); goto _ljump; }
L_007113AB:
    ecx = MEM32(edi); /* 0x007113AB: mov ecx, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x007113AD: push 0 */
    PUSH32(esp, 0); /* 0x007113AF: push 0 */
    /* test esi, esi */ /* 0x007113B1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007113DF; /* 0x007113B3: je 0x7113df */
L_007113B5:
    SET_LO8(edx, 1); /* 0x007113B5: mov dl, 1 */
L_007113B7:
    RECOMP_CALL(sub_006F7C40); /* 0x007113B7: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007113BC: add esp, 8 */
    _flag_k = FK_ADD;
L_007113BF:
    ecx = MEM32(ebp + (-0x48)); /* 0x007113BF: mov ecx, dword ptr [ebp - 0x48] */
L_007113C2:
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x007113C2: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_007113C5:
    eax = MEM32(ebp + (-0x4C)); /* 0x007113C5: mov eax, dword ptr [ebp - 0x4c] */
L_007113C8:
    edi = MEM32(edi + 0x14); /* 0x007113C8: mov edi, dword ptr [edi + 0x14] */
    /* test edi, edi */ /* 0x007113CB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007122A6; /* 0x007113CD: je 0x7122a6 */
L_007113D3:
    PUSH32(esp, eax); /* 0x007113D3: push eax */
    PUSH32(esp, esi); /* 0x007113D4: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x007113D5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x007113D8: push ecx */
    PUSH32(esp, edi); /* 0x007113D9: push edi */
    goto L_007122BA; /* 0x007113DA: jmp 0x7122ba */
L_007113DF:
    SET_LO8(edx, 2); /* 0x007113DF: mov dl, 2 */
    RECOMP_BACKEDGE();
    goto L_007113B7; /* 0x007113E1: jmp 0x7113b7 */
L_007113E3:
    eax = esi; /* 0x007113E3: mov eax, esi */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x007113E5: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x007113E5: shr eax, 0x10 */
    /* test eax, eax */ /* 0x007113E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0071155D; /* 0x007113EA: jne 0x71155d */
L_007113F0:
    /* test LO16(esi), LO16(esi) */ /* 0x007113F0: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071155D; /* 0x007113F3: je 0x71155d */
L_007113F9:
    /* cmp LO16(esi), 2 */ /* 0x007113F9: cmp si, 2 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(2) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00711454; /* 0x007113FD: jne 0x711454 */
L_007113FF:
    PUSH32(esp, 1); /* 0x007113FF: push 1 */
    RECOMP_ICALL(MEM32(0x7CC74C)); /* 0x00711401: call dword ptr [0x7cc74c] */
    RECOMP_FLAGS_IN();
    /* test LO16(eax), LO16(eax) */ /* 0x00711407: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711410; /* 0x0071140A: je 0x711410 */
L_0071140C:
    _flag_a = (uint32_t)((MEM8(edi + 0x30) | 1)) << 24; _flag_b = (uint32_t)((MEM8(edi + 0x30) | 1)) << 24;
    MEM8(edi + 0x30) = (uint8_t)(MEM8(edi + 0x30) | 1); /* 0x0071140C: or byte ptr [edi + 0x30], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_00711410:
    PUSH32(esp, 2); /* 0x00711410: push 2 */
    RECOMP_ICALL(MEM32(0x7CC74C)); /* 0x00711412: call dword ptr [0x7cc74c] */
    RECOMP_FLAGS_IN();
    /* test LO16(eax), LO16(eax) */ /* 0x00711418: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711421; /* 0x0071141B: je 0x711421 */
L_0071141D:
    _flag_a = (uint32_t)((MEM8(edi + 0x30) | 4)) << 24; _flag_b = (uint32_t)((MEM8(edi + 0x30) | 4)) << 24;
    MEM8(edi + 0x30) = (uint8_t)(MEM8(edi + 0x30) | 4); /* 0x0071141D: or byte ptr [edi + 0x30], 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_00711421:
    PUSH32(esp, 4); /* 0x00711421: push 4 */
    RECOMP_ICALL(MEM32(0x7CC74C)); /* 0x00711423: call dword ptr [0x7cc74c] */
    RECOMP_FLAGS_IN();
    /* test LO16(eax), LO16(eax) */ /* 0x00711429: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711432; /* 0x0071142C: je 0x711432 */
L_0071142E:
    _flag_a = (uint32_t)((MEM8(edi + 0x30) | 2)) << 24; _flag_b = (uint32_t)((MEM8(edi + 0x30) | 2)) << 24;
    MEM8(edi + 0x30) = (uint8_t)(MEM8(edi + 0x30) | 2); /* 0x0071142E: or byte ptr [edi + 0x30], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_00711432:
    PUSH32(esp, 5); /* 0x00711432: push 5 */
    RECOMP_ICALL(MEM32(0x7CC74C)); /* 0x00711434: call dword ptr [0x7cc74c] */
    RECOMP_FLAGS_IN();
    /* test LO16(eax), LO16(eax) */ /* 0x0071143A: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711443; /* 0x0071143D: je 0x711443 */
L_0071143F:
    _flag_a = (uint32_t)((MEM8(edi + 0x30) | 8)) << 24; _flag_b = (uint32_t)((MEM8(edi + 0x30) | 8)) << 24;
    MEM8(edi + 0x30) = (uint8_t)(MEM8(edi + 0x30) | 8); /* 0x0071143F: or byte ptr [edi + 0x30], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_00711443:
    PUSH32(esp, 6); /* 0x00711443: push 6 */
    RECOMP_ICALL(MEM32(0x7CC74C)); /* 0x00711445: call dword ptr [0x7cc74c] */
    RECOMP_FLAGS_IN();
    /* test LO16(eax), LO16(eax) */ /* 0x0071144B: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711454; /* 0x0071144E: je 0x711454 */
L_00711450:
    _flag_a = (uint32_t)((MEM8(edi + 0x30) | 0x10u)) << 24; _flag_b = (uint32_t)((MEM8(edi + 0x30) | 0x10u)) << 24;
    MEM8(edi + 0x30) = (uint8_t)(MEM8(edi + 0x30) | 0x10u); /* 0x00711450: or byte ptr [edi + 0x30], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_00711454:
    ecx = MEM32(edi); /* 0x00711454: mov ecx, dword ptr [edi] */
    SET_LO8(edx, 1); /* 0x00711456: mov dl, 1 */
    PUSH32(esp, 0); /* 0x00711458: push 0 */
    PUSH32(esp, 0); /* 0x0071145A: push 0 */
    RECOMP_CALL(sub_006F7C40); /* 0x0071145C: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x00711461: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00711463: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM32(0x925FD0), ecx */ /* 0x00711466: cmp dword ptr [0x925fd0], ecx */
    _flag_a = (uint32_t)(MEM32(0x925FD0)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00711473; /* 0x0071146C: je 0x711473 */
L_0071146E:
    RECOMP_CALL(sub_006EFCE0); /* 0x0071146E: call 0x6efce0 */
    RECOMP_FLAGS_IN();
L_00711473:
    eax = ebp + (-0xC); /* 0x00711473: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x00711476: push eax */
    RECOMP_ICALL(MEM32(0x7CC848)); /* 0x00711477: call dword ptr [0x7cc848] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xC); /* 0x0071147D: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x00711480: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x00711481: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC824)); /* 0x00711484: call dword ptr [0x7cc824] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x0071148A: mov eax, dword ptr [edi] */
    ecx = MEM32(ebp + (-0x8)); /* 0x0071148C: mov ecx, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0xC)); /* 0x0071148F: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x60)) = ecx; /* 0x00711492: mov dword ptr [ebp - 0x60], ecx */
    MEM32(ebp + (-0x6C)) = edx; /* 0x00711495: mov dword ptr [ebp - 0x6c], edx */
    MEM32(ebp + (-0x54)) = eax; /* 0x00711498: mov dword ptr [ebp - 0x54], eax */
    /* test eax, eax */ /* 0x0071149B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007114B8; /* 0x0071149D: je 0x7114b8 */
L_0071149F:
    PUSH32(esp, ecx); /* 0x0071149F: push ecx */
    PUSH32(esp, ecx); /* 0x007114A0: push ecx */
    ecx = eax; /* 0x007114A1: mov ecx, eax */
    RECOMP_CALL(sub_006F0AE0); /* 0x007114A3: call 0x6f0ae0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007114A8: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x007114AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007114C8; /* 0x007114AD: je 0x7114c8 */
L_007114AF:
    eax = MEM32(ebp + (-0x54)); /* 0x007114AF: mov eax, dword ptr [ebp - 0x54] */
    ecx = MEM32(ebp + (-0x60)); /* 0x007114B2: mov ecx, dword ptr [ebp - 0x60] */
    edx = MEM32(ebp + (-0x6C)); /* 0x007114B5: mov edx, dword ptr [ebp - 0x6c] */
L_007114B8:
    PUSH32(esp, ecx); /* 0x007114B8: push ecx */
    PUSH32(esp, edx); /* 0x007114B9: push edx */
    PUSH32(esp, 0); /* 0x007114BA: push 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x007114BC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x007114BE: mov ecx, eax */
    RECOMP_CALL(sub_006F0B80); /* 0x007114C0: call 0x6f0b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007114C5: add esp, 0xc */
    _flag_k = FK_ADD;
L_007114C8:
    ecx = edi; /* 0x007114C8: mov ecx, edi */
    RECOMP_CALL(sub_00710FD0); /* 0x007114CA: call 0x710fd0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x3C); /* 0x007114CF: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ebp + (-0x50)) = eax; /* 0x007114D2: mov dword ptr [ebp - 0x50], eax */
    RECOMP_ICALL(MEM32(0x7CC79C)); /* 0x007114D5: call dword ptr [0x7cc79c] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x007114DB: mov edx, eax */
    eax = MEM32(ebp + (-0x50)); /* 0x007114DD: mov eax, dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x54)) = edx; /* 0x007114E0: mov dword ptr [ebp - 0x54], edx */
    ecx = MEM32(eax + 0x4); /* 0x007114E3: mov ecx, dword ptr [eax + 4] */
    /* cmp edx, ecx */ /* 0x007114E6: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007114FC; /* 0x007114E8: je 0x7114fc */
L_007114EA:
    /* test ecx, ecx */ /* 0x007114EA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007114F9; /* 0x007114EC: je 0x7114f9 */
L_007114EE:
    RECOMP_CALL(sub_0074AB20); /* 0x007114EE: call 0x74ab20 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x50)); /* 0x007114F3: mov eax, dword ptr [ebp - 0x50] */
    edx = MEM32(ebp + (-0x54)); /* 0x007114F6: mov edx, dword ptr [ebp - 0x54] */
L_007114F9:
    MEM32(eax + 0x4) = edx; /* 0x007114F9: mov dword ptr [eax + 4], edx */
L_007114FC:
    PUSH32(esp, 0x14u); /* 0x007114FC: push 0x14 */
    RECOMP_ICALL(MEM32(0x7CC760)); /* 0x007114FE: call dword ptr [0x7cc760] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), 1 */ /* 0x00711504: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711516; /* 0x00711506: je 0x711516 */
L_00711508:
    eax = 0x2000u; /* 0x00711508: mov eax, 0x2000 */
    _flag_a = (uint32_t)((MEM16(0x925FD4) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(0x925FD4) | LO16(eax))) << 16;
    MEM16(0x925FD4) = (uint16_t)(MEM16(0x925FD4) | LO16(eax)); /* 0x0071150D: or word ptr [0x925fd4], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    goto L_00711522; /* 0x00711514: jmp 0x711522 */
L_00711516:
    eax = 0xDFFFu; /* 0x00711516: mov eax, 0xdfff */
    _flag_a = (uint32_t)(MEM16(0x925FD4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    MEM16(0x925FD4) = (uint16_t)(MEM16(0x925FD4) & LO16(eax)); /* 0x0071151B: and word ptr [0x925fd4], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_00711522:
    PUSH32(esp, 0x90u); /* 0x00711522: push 0x90 */
    RECOMP_ICALL(MEM32(0x7CC760)); /* 0x00711527: call dword ptr [0x7cc760] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), 1 */ /* 0x0071152D: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711547; /* 0x0071152F: je 0x711547 */
L_00711531:
    ecx = MEM32(ebp + (-0x48)); /* 0x00711531: mov ecx, dword ptr [ebp - 0x48] */
    eax = 0x1000u; /* 0x00711534: mov eax, 0x1000 */
    _flag_a = (uint32_t)((MEM16(0x925FD4) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(0x925FD4) | LO16(eax))) << 16;
    MEM16(0x925FD4) = (uint16_t)(MEM16(0x925FD4) | LO16(eax)); /* 0x00711539: or word ptr [0x925fd4], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711540: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x00711542: jmp 0x7113c5 */
L_00711547:
    ecx = MEM32(ebp + (-0x48)); /* 0x00711547: mov ecx, dword ptr [ebp - 0x48] */
    eax = 0xEFFFu; /* 0x0071154A: mov eax, 0xefff */
    _flag_a = (uint32_t)(MEM16(0x925FD4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    MEM16(0x925FD4) = (uint16_t)(MEM16(0x925FD4) & LO16(eax)); /* 0x0071154F: and word ptr [0x925fd4], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711556: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x00711558: jmp 0x7113c5 */
L_0071155D:
    MEM32(edi + 0x38) = 1; /* 0x0071155D: mov dword ptr [edi + 0x38], 1 */
    eax = MEM32(0x925FD0); /* 0x00711564: mov eax, dword ptr [0x925fd0] */
    /* cmp eax, MEM32(edi) */ /* 0x00711569: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00711579; /* 0x0071156B: jne 0x711579 */
L_0071156D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0071156D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006EFCE0); /* 0x0071156F: call 0x6efce0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_0070E4C0); /* 0x00711574: call 0x70e4c0 */
    RECOMP_FLAGS_IN();
L_00711579:
    PUSH32(esp, 0); /* 0x00711579: push 0 */
    RECOMP_ICALL(MEM32(0x7CC7E0)); /* 0x0071157B: call dword ptr [0x7cc7e0] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x38) = 0; /* 0x00711581: mov dword ptr [edi + 0x38], 0 */
L_00711588:
    ecx = MEM32(ebp + (-0x48)); /* 0x00711588: mov ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0071158B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x0071158D: jmp 0x7113c5 */
L_00711592:
    RECOMP_CALL(sub_0070E400); /* 0x00711592: call 0x70e400 */
    RECOMP_FLAGS_IN();
    ecx = 0x304u; /* 0x00711597: mov ecx, 0x304 */
    RECOMP_CALL(sub_006ED570); /* 0x0071159C: call 0x6ed570 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x007115A1: mov ecx, dword ptr [ebp - 0x48] */
    edx = 1; /* 0x007115A4: mov edx, 1 */
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x007115A9: jmp 0x7113c5 */
L_007115AE:
    MEM32(edi + 0x2C) = 1; /* 0x007115AE: mov dword ptr [edi + 0x2c], 1 */
    RECOMP_BACKEDGE();
    goto L_007113BF; /* 0x007115B5: jmp 0x7113bf */
L_007115BA:
    ecx = MEM32(edi); /* 0x007115BA: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x007115BC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007115D8; /* 0x007115BE: je 0x7115d8 */
L_007115C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007115C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x80), eax */ /* 0x007115C2: cmp dword ptr [ecx + 0x80], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x80)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x007115C8: setne al */
    /* test eax, eax */ /* 0x007115CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007115D8; /* 0x007115CD: je 0x7115d8 */
L_007115CF:
    PUSH32(esp, ecx); /* 0x007115CF: push ecx */
    RECOMP_CALL(sub_00712A00); /* 0x007115D0: call 0x712a00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007115D5: add esp, 4 */
    _flag_k = FK_ADD;
L_007115D8:
    /* cmp MEM32(edi + 0x24), 0 */ /* 0x007115D8: cmp dword ptr [edi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_007113BF; /* 0x007115DC: jne 0x7113bf */
L_007115E2:
    eax = ebp + (-0x2C); /* 0x007115E2: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x007115E5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x007115E6: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC828)); /* 0x007115E9: call dword ptr [0x7cc828] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x007115EF: mov eax, dword ptr [ebp - 0x2c] */
    edx = ebp + (-0x60); /* 0x007115F2: lea edx, [ebp - 0x60] */
    ecx = MEM32(edi); /* 0x007115F5: mov ecx, dword ptr [edi] */
    MEM32(ebp + (-0x58)) = eax; /* 0x007115F7: mov dword ptr [ebp - 0x58], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x007115FA: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x8)) = eax; /* 0x007115FD: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x50); /* 0x00711600: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x00711603: push eax */
    RECOMP_CALL(sub_006EBC00); /* 0x00711604: call 0x6ebc00 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x00711609: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x6C); /* 0x0071160B: lea eax, [ebp - 0x6c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071160E: add esp, 4 */
    _flag_k = FK_ADD;
    edx = ebp + (-0x54); /* 0x00711611: lea edx, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x00711614: push eax */
    RECOMP_CALL(sub_006EBC60); /* 0x00711615: call 0x6ebc60 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x0071161A: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x78); /* 0x0071161C: lea eax, [ebp - 0x78] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071161F: add esp, 4 */
    _flag_k = FK_ADD;
    edx = ebp + (-0x74); /* 0x00711622: lea edx, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x00711625: push eax */
    RECOMP_CALL(sub_006EBCC0); /* 0x00711626: call 0x6ebcc0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x54)); /* 0x0071162B: mov eax, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071162E: add esp, 4 */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x60)); /* 0x00711631: mov edx, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x00711634: sub eax, edx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x74)); /* 0x00711636: mov ecx, dword ptr [ebp - 0x74] */
    MEM32(ebp + (-0x64)) = eax; /* 0x00711639: mov dword ptr [ebp - 0x64], eax */
    eax = MEM32(ebp + (-0x6C)); /* 0x0071163C: mov eax, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x50)); /* 0x0071163F: sub eax, dword ptr [ebp - 0x50] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x00711642: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x78)); /* 0x00711645: mov eax, dword ptr [ebp - 0x78] */
    MEM32(ebp + (-0x6C)) = ecx; /* 0x00711648: mov dword ptr [ebp - 0x6c], ecx */
    MEM32(ebp + (-0x60)) = eax; /* 0x0071164B: mov dword ptr [ebp - 0x60], eax */
    /* test ecx, ecx */ /* 0x0071164E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071166A; /* 0x00711650: je 0x71166a */
L_00711652:
    /* test eax, eax */ /* 0x00711652: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071166A; /* 0x00711654: je 0x71166a */
L_00711656:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x00711656: sub ecx, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x74)) = 1; /* 0x00711658: mov dword ptr [ebp - 0x74], 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x50)); /* 0x0071165F: sub eax, dword ptr [ebp - 0x50] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x6C)) = ecx; /* 0x00711662: mov dword ptr [ebp - 0x6c], ecx */
    MEM32(ebp + (-0x60)) = eax; /* 0x00711665: mov dword ptr [ebp - 0x60], eax */
    goto L_00711671; /* 0x00711668: jmp 0x711671 */
L_0071166A:
    MEM32(ebp + (-0x74)) = 0; /* 0x0071166A: mov dword ptr [ebp - 0x74], 0 */
L_00711671:
    eax = MEM32(ebp + (-0x50)); /* 0x00711671: mov eax, dword ptr [ebp - 0x50] */
    PUSH32(esp, 0xFFFFFFF0u); /* 0x00711674: push -0x10 */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x00711676: push dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x28)) = 0; /* 0x00711679: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x00711680: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x20)) = eax; /* 0x00711687: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x24)) = edx; /* 0x0071168A: mov dword ptr [ebp - 0x24], edx */
    RECOMP_ICALL(MEM32(0x7CC8AC)); /* 0x0071168D: call dword ptr [0x7cc8ac] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x78)) = eax; /* 0x00711693: mov dword ptr [ebp - 0x78], eax */
    /* test eax, 0x40000000u */ /* 0x00711696: test eax, 0x40000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007116A1; /* 0x0071169B: je 0x7116a1 */
L_0071169D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0071169D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_007116B0; /* 0x0071169F: jmp 0x7116b0 */
L_007116A1:
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x007116A1: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC83C)); /* 0x007116A4: call dword ptr [0x7cc83c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x007116AA: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x007116AC: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x007116AE: neg eax */
    _flag_k = FK_CMP;
L_007116B0:
    PUSH32(esp, 0); /* 0x007116B0: push 0 */
    PUSH32(esp, eax); /* 0x007116B2: push eax */
    PUSH32(esp, MEM32(ebp + (-0x78))); /* 0x007116B3: push dword ptr [ebp - 0x78] */
    eax = ebp + (-0x2C); /* 0x007116B6: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x007116B9: push eax */
    RECOMP_ICALL(MEM32(0x7CC7E4)); /* 0x007116BA: call dword ptr [0x7cc7e4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x007116C0: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x2C)); /* 0x007116C3: sub eax, dword ptr [ebp - 0x2c] */
    _flag_k = FK_CMP;
    ecx = MEM32(edi); /* 0x007116C6: mov ecx, dword ptr [edi] */
    MEM32(ebp + (-0x54)) = eax; /* 0x007116C8: mov dword ptr [ebp - 0x54], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x007116CB: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x28)); /* 0x007116CE: sub eax, dword ptr [ebp - 0x28] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x50)) = eax; /* 0x007116D1: mov dword ptr [ebp - 0x50], eax */
    RECOMP_CALL(sub_006EB810); /* 0x007116D4: call 0x6eb810 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x54)); /* 0x007116D9: mov edx, dword ptr [ebp - 0x54] */
    ecx = MEM32(ebp + (-0x4C)); /* 0x007116DC: mov ecx, dword ptr [ebp - 0x4c] */
    /* test LO8(eax), 0x20u */ /* 0x007116DF: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711718; /* 0x007116E1: je 0x711718 */
L_007116E3:
    eax = MEM32(ebp + (-0x64)); /* 0x007116E3: mov eax, dword ptr [ebp - 0x64] */
    esi = MEM32(ebp + (-0x70)); /* 0x007116E6: mov esi, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x007116E9: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x18) = eax; /* 0x007116EB: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(ebp + (-0x50)); /* 0x007116EE: mov eax, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x10)); /* 0x007116F1: add eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x74)), 0 */ /* 0x007116F4: cmp dword ptr [ebp - 0x74], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x74))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx + 0x1C) = eax; /* 0x007116F8: mov dword ptr [ecx + 0x1c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071173C; /* 0x007116FB: je 0x71173c */
L_007116FD:
    eax = MEM32(ebp + (-0x6C)); /* 0x007116FD: mov eax, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00711700: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x20) = eax; /* 0x00711702: mov dword ptr [ecx + 0x20], eax */
    eax = MEM32(ebp + (-0x50)); /* 0x00711705: mov eax, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x60)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x60)); /* 0x00711708: add eax, dword ptr [ebp - 0x60] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0071170B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x24) = eax; /* 0x0071170D: mov dword ptr [ecx + 0x24], eax */
    ecx = MEM32(ebp + (-0x48)); /* 0x00711710: mov ecx, dword ptr [ebp - 0x48] */
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x00711713: jmp 0x7113c5 */
L_00711718:
    esi = MEM32(ebp + (-0x58)); /* 0x00711718: mov esi, dword ptr [ebp - 0x58] */
    eax = MEM32(ebp + (-0x50)); /* 0x0071171B: mov eax, dword ptr [ebp - 0x50] */
    MEM32(ecx + 0x10) = esi; /* 0x0071171E: mov dword ptr [ecx + 0x10], esi */
    esi = MEM32(ebp + (-0x8)); /* 0x00711721: mov esi, dword ptr [ebp - 8] */
    MEM32(ecx + 0x14) = esi; /* 0x00711724: mov dword ptr [ecx + 0x14], esi */
    esi = MEM32(ebp + (-0x70)); /* 0x00711727: mov esi, dword ptr [ebp - 0x70] */
    MEM32(ecx + 0x8) = edx; /* 0x0071172A: mov dword ptr [ecx + 8], edx */
    MEM32(ecx + 0xC) = eax; /* 0x0071172D: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x18) = edx; /* 0x00711730: mov dword ptr [ecx + 0x18], edx */
    MEM32(ecx + 0x1C) = eax; /* 0x00711733: mov dword ptr [ecx + 0x1c], eax */
    MEM32(ecx + 0x20) = edx; /* 0x00711736: mov dword ptr [ecx + 0x20], edx */
    MEM32(ecx + 0x24) = eax; /* 0x00711739: mov dword ptr [ecx + 0x24], eax */
L_0071173C:
    ecx = MEM32(ebp + (-0x48)); /* 0x0071173C: mov ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0071173F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x00711741: jmp 0x7113c5 */
L_00711746:
    /* cmp MEM32(edi + 0x24), 0 */ /* 0x00711746: cmp dword ptr [edi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x48)); /* 0x0071174A: mov ecx, dword ptr [ebp - 0x48] */
    eax = MEM32(ebp + (-0x4C)); /* 0x0071174D: mov eax, dword ptr [ebp - 0x4c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071229E; /* 0x00711750: je 0x71229e */
L_00711756:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711756: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_007113C8; /* 0x00711758: jmp 0x7113c8 */
L_0071175D:
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x0071175D: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711761: jne 0x7113bf */
L_00711767:
    /* cmp MEM32(edi + 0x28), 0 */ /* 0x00711767: cmp dword ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_007113BF; /* 0x0071176B: jne 0x7113bf */
L_00711771:
    eax = ebp + (-0x2C); /* 0x00711771: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x00711774: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x00711775: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC830)); /* 0x00711778: call dword ptr [0x7cc830] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0071177E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711780: je 0x7113bf */
L_00711786:
    eax = ebp + (-0x2C); /* 0x00711786: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x00711789: push eax */
    RECOMP_ICALL(MEM32(0x7CC7E8)); /* 0x0071178A: call dword ptr [0x7cc7e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00711790: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711792: jne 0x7113bf */
L_00711798:
    esi = MEM32(0x7CC7B4); /* 0x00711798: mov esi, dword ptr [0x7cc7b4] */
    eax = ebp + (-0x2C); /* 0x0071179E: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x007117A1: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x007117A2: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(esi); /* 0x007117A5: call esi */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x007117A7: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x007117AA: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x007117AB: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(esi); /* 0x007117AE: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x007117B0: mov ecx, dword ptr [edi] */
    RECOMP_CALL(sub_006FEA80); /* 0x007117B2: call 0x6fea80 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x007117B7: push dword ptr [ebp - 0x28] */
    ecx = MEM32(edi); /* 0x007117BA: mov ecx, dword ptr [edi] */
    SET_LO8(edx, 4); /* 0x007117BC: mov dl, 4 */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x007117BE: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_006F7C40); /* 0x007117C1: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x007117C6: mov eax, dword ptr [ebp - 0x20] */
    SET_LO8(edx, 5); /* 0x007117C9: mov dl, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x28)); /* 0x007117CB: sub eax, dword ptr [ebp - 0x28] */
    _flag_k = FK_CMP;
    ecx = MEM32(edi); /* 0x007117CE: mov ecx, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x007117D0: push eax */
    eax = MEM32(ebp + (-0x24)); /* 0x007117D1: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x2C)); /* 0x007117D4: sub eax, dword ptr [ebp - 0x2c] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x007117D7: push eax */
    RECOMP_CALL(sub_006F7C40); /* 0x007117D8: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x007117DD: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x007117E0: push 0 */
    PUSH32(esp, 0); /* 0x007117E2: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x007117E4: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC734)); /* 0x007117E7: call dword ptr [0x7cc734] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x70)); /* 0x007117ED: mov esi, dword ptr [ebp - 0x70] */
    RECOMP_BACKEDGE();
    goto L_007113BF; /* 0x007117F0: jmp 0x7113bf */
L_007117F5:
    ecx = MEM32(edi); /* 0x007117F5: mov ecx, dword ptr [edi] */
    eax = esi; /* 0x007117F7: mov eax, esi */
    PUSH32(esp, 0); /* 0x007117F9: push 0 */
    PUSH32(esp, 0); /* 0x007117FB: push 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x007117FD: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_00711811; /* 0x007117FE: je 0x711811 */
L_00711800:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00711800: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_0071180A; /* 0x00711801: je 0x71180a */
L_00711803:
    SET_LO8(edx, 9); /* 0x00711803: mov dl, 9 */
    RECOMP_BACKEDGE();
    goto L_007113B7; /* 0x00711805: jmp 0x7113b7 */
L_0071180A:
    SET_LO8(edx, 8); /* 0x0071180A: mov dl, 8 */
    RECOMP_BACKEDGE();
    goto L_007113B7; /* 0x0071180C: jmp 0x7113b7 */
L_00711811:
    SET_LO8(edx, 7); /* 0x00711811: mov dl, 7 */
    RECOMP_BACKEDGE();
    goto L_007113B7; /* 0x00711813: jmp 0x7113b7 */
L_00711818:
    eax = MEM32(ebp + (-0x4C)); /* 0x00711818: mov eax, dword ptr [ebp - 0x4c] */
    /* cmp LO16(eax), 1 */ /* 0x0071181B: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0071183A; /* 0x0071181F: jne 0x71183a */
L_00711821:
    PUSH32(esp, MEM32(0x87CC8C)); /* 0x00711821: push dword ptr [0x87cc8c] */
    RECOMP_ICALL(MEM32(0x7CC818)); /* 0x00711827: call dword ptr [0x7cc818] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x0071182D: mov ecx, dword ptr [ebp - 0x48] */
    edx = 1; /* 0x00711830: mov edx, 1 */
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x00711835: jmp 0x7113c5 */
L_0071183A:
    /* cmp MEM32(0x863144), 0 */ /* 0x0071183A: cmp dword ptr [0x863144], 0 */
    _flag_a = (uint32_t)(MEM32(0x863144)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0071229B; /* 0x00711841: jne 0x71229b */
L_00711847:
    /* cmp MEM32(0x87CC8C), 0 */ /* 0x00711847: cmp dword ptr [0x87cc8c], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CC8C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0071229B; /* 0x0071184E: jne 0x71229b */
L_00711854:
    PUSH32(esp, 0); /* 0x00711854: push 0 */
    RECOMP_ICALL(MEM32(0x7CC818)); /* 0x00711856: call dword ptr [0x7cc818] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x0071185C: mov ecx, dword ptr [ebp - 0x48] */
    edx = 1; /* 0x0071185F: mov edx, 1 */
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x00711864: jmp 0x7113c5 */
L_00711869:
    PUSH32(esp, 0); /* 0x00711869: push 0 */
    eax = ebp + (-0x2C); /* 0x0071186B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x0071186E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x0071186F: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC730)); /* 0x00711872: call dword ptr [0x7cc730] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00711878: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711897; /* 0x0071187A: je 0x711897 */
L_0071187C:
    PUSH32(esp, 0); /* 0x0071187C: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x0071187E: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC73C)); /* 0x00711881: call dword ptr [0x7cc73c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x00711887: mov ecx, dword ptr [edi] */
    SET_LO8(edx, 3); /* 0x00711889: mov dl, 3 */
    PUSH32(esp, 0); /* 0x0071188B: push 0 */
    PUSH32(esp, 0); /* 0x0071188D: push 0 */
    RECOMP_CALL(sub_006F7C40); /* 0x0071188F: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00711894: add esp, 8 */
    _flag_k = FK_ADD;
L_00711897:
    ecx = MEM32(ebp + (-0x48)); /* 0x00711897: mov ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0071189A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x0071189C: jmp 0x7113c5 */
L_007118A1:
    eax = 1; /* 0x007118A1: mov eax, 1 */
    goto L_007122C0; /* 0x007118A6: jmp 0x7122c0 */
L_007118AB:
    ecx = MEM32(edi); /* 0x007118AB: mov ecx, dword ptr [edi] */
    SET_LO8(edx, 0xEu); /* 0x007118AD: mov dl, 0xe */
    PUSH32(esp, 0); /* 0x007118AF: push 0 */
    PUSH32(esp, 0); /* 0x007118B1: push 0 */
    RECOMP_CALL(sub_006F7C40); /* 0x007118B3: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x007118B8: mov ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007118BB: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x007118BE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x007118C0: jmp 0x7113c5 */
L_007118C5:
    eax = MEM32(edi); /* 0x007118C5: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0x8)) = eax; /* 0x007118C7: mov dword ptr [ebp - 8], eax */
    /* cmp MEM32(eax + 0x84), 0 */ /* 0x007118CA: cmp dword ptr [eax + 0x84], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x84)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007113BF; /* 0x007118D1: je 0x7113bf */
L_007118D7:
    ecx = MEM32(ebp + (-0x4C)); /* 0x007118D7: mov ecx, dword ptr [ebp - 0x4c] */
    eax = (uint32_t)LO16(ecx); /* 0x007118DA: movzx eax, cx */
    MEM32(ebp + (-0x5C)) = eax; /* 0x007118DD: mov dword ptr [ebp - 0x5c], eax */
    eax = ecx; /* 0x007118E0: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x007118E2: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x007118E2: shr eax, 0x10 */
    MEM32(ebp + (-0x58)) = eax; /* 0x007118E5: mov dword ptr [ebp - 0x58], eax */
    eax = ebp + (-0x5C); /* 0x007118E8: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x007118EB: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x007118EC: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC824)); /* 0x007118EF: call dword ptr [0x7cc824] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007118F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007113BF; /* 0x007118F7: je 0x7113bf */
L_007118FD:
    eax = MEM32(ebp + (-0x5C)); /* 0x007118FD: mov eax, dword ptr [ebp - 0x5c] */
    ecx = ebp + (-0x14); /* 0x00711900: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x14)) = eax; /* 0x00711903: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + (-0x58)); /* 0x00711906: mov eax, dword ptr [ebp - 0x58] */
    MEM32(ebp + (-0x10)) = eax; /* 0x00711909: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x0071190C: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(eax + 0x88)); /* 0x0071190F: push dword ptr [eax + 0x88] */
    PUSH32(esp, ecx); /* 0x00711915: push ecx */
    PUSH32(esp, eax); /* 0x00711916: push eax */
    eax = MEM32(eax + 0x84); /* 0x00711917: mov eax, dword ptr [eax + 0x84] */
    RECOMP_ICALL(eax); /* 0x0071191D: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0071191F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 9 */ /* 0x00711922: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711925: ja 0x7113bf */
L_0071192B:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x7123B0)); goto _ljump; }
L_00711932:
    ecx = MEM32(edi); /* 0x00711932: mov ecx, dword ptr [edi] */
    SET_LO8(edx, 0x10u); /* 0x00711934: mov dl, 0x10 */
    PUSH32(esp, 0); /* 0x00711936: push 0 */
    PUSH32(esp, 0); /* 0x00711938: push 0 */
    RECOMP_CALL(sub_006F7C40); /* 0x0071193A: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071193F: add esp, 8 */
    _flag_k = FK_ADD;
    eax = 2; /* 0x00711942: mov eax, 2 */
    goto L_007122C0; /* 0x00711947: jmp 0x7122c0 */
L_0071194C:
    ecx = MEM32(edi); /* 0x0071194C: mov ecx, dword ptr [edi] */
    SET_LO8(edx, 0x10u); /* 0x0071194E: mov dl, 0x10 */
    PUSH32(esp, 0); /* 0x00711950: push 0 */
    PUSH32(esp, 0); /* 0x00711952: push 0 */
    RECOMP_CALL(sub_006F7C40); /* 0x00711954: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00711959: add esp, 8 */
    _flag_k = FK_ADD;
    eax = 0xDu; /* 0x0071195C: mov eax, 0xd */
    goto L_007122C0; /* 0x00711961: jmp 0x7122c0 */
L_00711966:
    ecx = MEM32(edi); /* 0x00711966: mov ecx, dword ptr [edi] */
    SET_LO8(edx, 0x10u); /* 0x00711968: mov dl, 0x10 */
    PUSH32(esp, 0); /* 0x0071196A: push 0 */
    PUSH32(esp, 0); /* 0x0071196C: push 0 */
    RECOMP_CALL(sub_006F7C40); /* 0x0071196E: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00711973: add esp, 8 */
    _flag_k = FK_ADD;
    eax = 0xCu; /* 0x00711976: mov eax, 0xc */
    goto L_007122C0; /* 0x0071197B: jmp 0x7122c0 */
L_00711980:
    ecx = MEM32(edi); /* 0x00711980: mov ecx, dword ptr [edi] */
    SET_LO8(edx, 0x10u); /* 0x00711982: mov dl, 0x10 */
    PUSH32(esp, 0); /* 0x00711984: push 0 */
    PUSH32(esp, 0); /* 0x00711986: push 0 */
    RECOMP_CALL(sub_006F7C40); /* 0x00711988: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071198D: add esp, 8 */
    _flag_k = FK_ADD;
    eax = 0xEu; /* 0x00711990: mov eax, 0xe */
    goto L_007122C0; /* 0x00711995: jmp 0x7122c0 */
L_0071199A:
    ecx = MEM32(edi); /* 0x0071199A: mov ecx, dword ptr [edi] */
    SET_LO8(edx, 0x10u); /* 0x0071199C: mov dl, 0x10 */
    PUSH32(esp, 0); /* 0x0071199E: push 0 */
    PUSH32(esp, 0); /* 0x007119A0: push 0 */
    RECOMP_CALL(sub_006F7C40); /* 0x007119A2: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007119A7: add esp, 8 */
    _flag_k = FK_ADD;
    eax = 0xBu; /* 0x007119AA: mov eax, 0xb */
    goto L_007122C0; /* 0x007119AF: jmp 0x7122c0 */
L_007119B4:
    ecx = MEM32(edi); /* 0x007119B4: mov ecx, dword ptr [edi] */
    SET_LO8(edx, 0x10u); /* 0x007119B6: mov dl, 0x10 */
    PUSH32(esp, 0); /* 0x007119B8: push 0 */
    PUSH32(esp, 0); /* 0x007119BA: push 0 */
    RECOMP_CALL(sub_006F7C40); /* 0x007119BC: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007119C1: add esp, 8 */
    _flag_k = FK_ADD;
    eax = 0x11u; /* 0x007119C4: mov eax, 0x11 */
    goto L_007122C0; /* 0x007119C9: jmp 0x7122c0 */
L_007119CE:
    ecx = MEM32(edi); /* 0x007119CE: mov ecx, dword ptr [edi] */
    SET_LO8(edx, 0x10u); /* 0x007119D0: mov dl, 0x10 */
    PUSH32(esp, 0); /* 0x007119D2: push 0 */
    PUSH32(esp, 0); /* 0x007119D4: push 0 */
    RECOMP_CALL(sub_006F7C40); /* 0x007119D6: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007119DB: add esp, 8 */
    _flag_k = FK_ADD;
    eax = 0xFu; /* 0x007119DE: mov eax, 0xf */
    goto L_007122C0; /* 0x007119E3: jmp 0x7122c0 */
L_007119E8:
    ecx = MEM32(edi); /* 0x007119E8: mov ecx, dword ptr [edi] */
    SET_LO8(edx, 0x10u); /* 0x007119EA: mov dl, 0x10 */
    PUSH32(esp, 0); /* 0x007119EC: push 0 */
    PUSH32(esp, 0); /* 0x007119EE: push 0 */
    RECOMP_CALL(sub_006F7C40); /* 0x007119F0: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007119F5: add esp, 8 */
    _flag_k = FK_ADD;
    eax = 0x10u; /* 0x007119F8: mov eax, 0x10 */
    goto L_007122C0; /* 0x007119FD: jmp 0x7122c0 */
L_00711A02:
    ecx = MEM32(edi); /* 0x00711A02: mov ecx, dword ptr [edi] */
    SET_LO8(edx, 0x10u); /* 0x00711A04: mov dl, 0x10 */
    PUSH32(esp, 0); /* 0x00711A06: push 0 */
    PUSH32(esp, 0); /* 0x00711A08: push 0 */
    RECOMP_CALL(sub_006F7C40); /* 0x00711A0A: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00711A0F: add esp, 8 */
    _flag_k = FK_ADD;
    eax = 0xAu; /* 0x00711A12: mov eax, 0xa */
    goto L_007122C0; /* 0x00711A17: jmp 0x7122c0 */
L_00711A1C:
    /* cmp MEM32(0x926A2C), 0 */ /* 0x00711A1C: cmp dword ptr [0x926a2c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = 0x28u; /* 0x00711A23: mov dword ptr [ebp - 8], 0x28 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_00711A39; /* 0x00711A2A: jne 0x711a39 */
L_00711A2C:
    /* cmp MEM32(0x926A30), 0 */ /* 0x00711A2C: cmp dword ptr [0x926a30], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00711A39; /* 0x00711A33: jne 0x711a39 */
L_00711A35:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00711A35: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00711A3E; /* 0x00711A37: jmp 0x711a3e */
L_00711A39:
    ecx = 1; /* 0x00711A39: mov ecx, 1 */
L_00711A3E:
    edx = MEM32(edi); /* 0x00711A3E: mov edx, dword ptr [edi] */
    MEM32(ebp + (-0x54)) = ecx; /* 0x00711A40: mov dword ptr [ebp - 0x54], ecx */
    eax = MEM32(edx + 0x30); /* 0x00711A43: mov eax, dword ptr [edx + 0x30] */
    if (14u) _cf = (((eax) >> 13) & 1u); /* 0x00711A46: shr eax, 0xe */
    if (14u) { _flag_a = recomp_flags_pack((eax >> 14u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 14u; /* 0x00711A46: shr eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x00711A49: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x58)) = eax; /* 0x00711A4C: mov dword ptr [ebp - 0x58], eax */
    /* test ecx, ecx */ /* 0x00711A4F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711A5B; /* 0x00711A51: je 0x711a5b */
L_00711A53:
    /* cmp MEM32(0x926A0C), edx */ /* 0x00711A53: cmp dword ptr [0x926a0c], edx */
    _flag_a = (uint32_t)(MEM32(0x926A0C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00711A63; /* 0x00711A59: je 0x711a63 */
L_00711A5B:
    /* test eax, eax */ /* 0x00711A5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711A5D: je 0x7113bf */
L_00711A63:
    PUSH32(esp, 0x10u); /* 0x00711A63: push 0x10 */
    eax = ebp + (-0x8); /* 0x00711A65: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x00711A68: push eax */
    eax = ebp + (-0x44); /* 0x00711A69: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x00711A6C: push eax */
    PUSH32(esp, 0x10000003u); /* 0x00711A6D: push 0x10000003 */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x00711A72: push dword ptr [ebp - 0x4c] */
    RECOMP_ICALL(MEM32(0x7CC71C)); /* 0x00711A75: call dword ptr [0x7cc71c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x00711A7B: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711A7F: jne 0x7113bf */
L_00711A85:
    /* cmp MEM32(ebp + (-0x54)), 0 */ /* 0x00711A85: cmp dword ptr [ebp - 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00711B16; /* 0x00711A89: je 0x711b16 */
L_00711A8F:
    /* test MEM8(ebp + (-0x34)), 1 */ /* 0x00711A8F: test byte ptr [ebp - 0x34], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x34))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00711AB9; /* 0x00711A93: jne 0x711ab9 */
L_00711A95:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x00711A95: push dword ptr [ebp - 0x24] */
    ecx = MEM32(edi); /* 0x00711A98: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711A9A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x00711A9C: push dword ptr [ebp - 0x28] */
    PUSH32(esp, 1); /* 0x00711A9F: push 1 */
    RECOMP_CALL(sub_006F0B80); /* 0x00711AA1: call 0x6f0b80 */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)MEM16(ebp + (-0x30)); /* 0x00711AA6: movzx ecx, word ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00711AAA: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = edi; /* 0x00711AAD: mov edx, edi */
    RECOMP_CALL(sub_00710E80); /* 0x00711AAF: call 0x710e80 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_007113BF; /* 0x00711AB4: jmp 0x7113bf */
L_00711AB9:
    ecx = MEM32(0x927064); /* 0x00711AB9: mov ecx, dword ptr [0x927064] */
    edx = MEM32(ebp + (-0x24)); /* 0x00711ABF: mov edx, dword ptr [ebp - 0x24] */
    eax = MEM32(0x927068); /* 0x00711AC2: mov eax, dword ptr [0x927068] */
    /* test ecx, ecx */ /* 0x00711AC7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00711ADF; /* 0x00711AC9: jne 0x711adf */
L_00711ACB:
    /* test eax, eax */ /* 0x00711ACB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00711ADF; /* 0x00711ACD: jne 0x711adf */
L_00711ACF:
    ecx = MEM32(ebp + (-0x28)); /* 0x00711ACF: mov ecx, dword ptr [ebp - 0x28] */
    eax = edx; /* 0x00711AD2: mov eax, edx */
    MEM32(0x927064) = ecx; /* 0x00711AD4: mov dword ptr [0x927064], ecx */
    MEM32(0x927068) = eax; /* 0x00711ADA: mov dword ptr [0x927068], eax */
L_00711ADF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x00711ADF: sub edx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x00711AE1: mov eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, edx); /* 0x00711AE4: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00711AE5: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711AE7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi); /* 0x00711AE9: mov ecx, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x00711AEB: push eax */
    PUSH32(esp, 1); /* 0x00711AEC: push 1 */
    RECOMP_CALL(sub_006F0B80); /* 0x00711AEE: call 0x6f0b80 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x00711AF3: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00711AF6: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(ebp + (-0x30)); /* 0x00711AF9: movzx ecx, word ptr [ebp - 0x30] */
    edx = edi; /* 0x00711AFD: mov edx, edi */
    MEM32(0x927064) = eax; /* 0x00711AFF: mov dword ptr [0x927064], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x00711B04: mov eax, dword ptr [ebp - 0x24] */
    MEM32(0x927068) = eax; /* 0x00711B07: mov dword ptr [0x927068], eax */
    RECOMP_CALL(sub_00710E80); /* 0x00711B0C: call 0x710e80 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_007113BF; /* 0x00711B11: jmp 0x7113bf */
L_00711B16:
    /* cmp MEM32(ebp + (-0x58)), 0 */ /* 0x00711B16: cmp dword ptr [ebp - 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711B1A: je 0x7113bf */
L_00711B20:
    eax = ebp + (-0x68); /* 0x00711B20: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x00711B23: push eax */
    RECOMP_ICALL(MEM32(0x7CC848)); /* 0x00711B24: call dword ptr [0x7cc848] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x00711B2A: push dword ptr [ebp - 0x64] */
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x00711B2D: push dword ptr [ebp - 0x68] */
    RECOMP_ICALL(MEM32(0x7CC728)); /* 0x00711B30: call dword ptr [0x7cc728] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x00711B36: mov ecx, dword ptr [ebp - 0x48] */
    /* cmp eax, ecx */ /* 0x00711B39: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007113C2; /* 0x00711B3B: je 0x7113c2 */
L_00711B41:
    eax = ebp + (-0x68); /* 0x00711B41: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x00711B44: push eax */
    PUSH32(esp, ecx); /* 0x00711B45: push ecx */
    RECOMP_ICALL(MEM32(0x7CC824)); /* 0x00711B46: call dword ptr [0x7cc824] */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi); /* 0x00711B4C: mov esi, dword ptr [edi] */
    eax = MEM32(ebp + (-0x64)); /* 0x00711B4E: mov eax, dword ptr [ebp - 0x64] */
    ecx = MEM32(ebp + (-0x68)); /* 0x00711B51: mov ecx, dword ptr [ebp - 0x68] */
    MEM32(ebp + (-0x58)) = eax; /* 0x00711B54: mov dword ptr [ebp - 0x58], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x00711B57: mov dword ptr [ebp - 0x10], ecx */
    /* test esi, esi */ /* 0x00711B5A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711B76; /* 0x00711B5C: je 0x711b76 */
L_00711B5E:
    PUSH32(esp, ecx); /* 0x00711B5E: push ecx */
    edx = ecx; /* 0x00711B5F: mov edx, ecx */
    ecx = esi; /* 0x00711B61: mov ecx, esi */
    PUSH32(esp, eax); /* 0x00711B63: push eax */
    RECOMP_CALL(sub_006F0AE0); /* 0x00711B64: call 0x6f0ae0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00711B69: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00711B6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711B86; /* 0x00711B6E: je 0x711b86 */
L_00711B70:
    eax = MEM32(ebp + (-0x58)); /* 0x00711B70: mov eax, dword ptr [ebp - 0x58] */
    ecx = MEM32(ebp + (-0x10)); /* 0x00711B73: mov ecx, dword ptr [ebp - 0x10] */
L_00711B76:
    PUSH32(esp, eax); /* 0x00711B76: push eax */
    PUSH32(esp, ecx); /* 0x00711B77: push ecx */
    PUSH32(esp, 0); /* 0x00711B78: push 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711B7A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x00711B7C: mov ecx, esi */
    RECOMP_CALL(sub_006F0B80); /* 0x00711B7E: call 0x6f0b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00711B83: add esp, 0xc */
    _flag_k = FK_ADD;
L_00711B86:
    esi = MEM32(0x7CC74C); /* 0x00711B86: mov esi, dword ptr [0x7cc74c] */
    PUSH32(esp, 1); /* 0x00711B8C: push 1 */
    RECOMP_ICALL(esi); /* 0x00711B8E: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00711B90: push ecx */
    ecx = MEM32(edi); /* 0x00711B91: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711B93: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (15u) _cf = (((eax) >> 14) & 1u); /* 0x00711B95: shr eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 15u; /* 0x00711B95: shr eax, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x00711B98: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x58)) = (uint8_t)(LO8(eax)); /* 0x00711B9A: mov byte ptr [ebp - 0x58], al */
    PUSH32(esp, 1); /* 0x00711B9D: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x00711B9F: push dword ptr [ebp - 0x58] */
    RECOMP_CALL(sub_006F0EA0); /* 0x00711BA2: call 0x6f0ea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00711BA7: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 2); /* 0x00711BAA: push 2 */
    RECOMP_ICALL(esi); /* 0x00711BAC: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00711BAE: push ecx */
    ecx = MEM32(edi); /* 0x00711BAF: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711BB1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (15u) _cf = (((eax) >> 14) & 1u); /* 0x00711BB3: shr eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 15u; /* 0x00711BB3: shr eax, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x00711BB6: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x58)) = (uint8_t)(LO8(eax)); /* 0x00711BB8: mov byte ptr [ebp - 0x58], al */
    PUSH32(esp, 3); /* 0x00711BBB: push 3 */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x00711BBD: push dword ptr [ebp - 0x58] */
    RECOMP_CALL(sub_006F0EA0); /* 0x00711BC0: call 0x6f0ea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00711BC5: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 4); /* 0x00711BC8: push 4 */
    RECOMP_ICALL(esi); /* 0x00711BCA: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00711BCC: push ecx */
    ecx = MEM32(edi); /* 0x00711BCD: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711BCF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (15u) _cf = (((eax) >> 14) & 1u); /* 0x00711BD1: shr eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 15u; /* 0x00711BD1: shr eax, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x00711BD4: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x58)) = (uint8_t)(LO8(eax)); /* 0x00711BD6: mov byte ptr [ebp - 0x58], al */
    PUSH32(esp, 2); /* 0x00711BD9: push 2 */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x00711BDB: push dword ptr [ebp - 0x58] */
    RECOMP_CALL(sub_006F0EA0); /* 0x00711BDE: call 0x6f0ea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00711BE3: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 5); /* 0x00711BE6: push 5 */
    RECOMP_ICALL(esi); /* 0x00711BE8: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00711BEA: push ecx */
    ecx = MEM32(edi); /* 0x00711BEB: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711BED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (15u) _cf = (((eax) >> 14) & 1u); /* 0x00711BEF: shr eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 15u; /* 0x00711BEF: shr eax, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x00711BF2: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x58)) = (uint8_t)(LO8(eax)); /* 0x00711BF4: mov byte ptr [ebp - 0x58], al */
    PUSH32(esp, 4); /* 0x00711BF7: push 4 */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x00711BF9: push dword ptr [ebp - 0x58] */
    RECOMP_CALL(sub_006F0EA0); /* 0x00711BFC: call 0x6f0ea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00711C01: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 6); /* 0x00711C04: push 6 */
    RECOMP_ICALL(esi); /* 0x00711C06: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x00711C08: push ecx */
    ecx = MEM32(edi); /* 0x00711C09: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711C0B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (15u) _cf = (((eax) >> 14) & 1u); /* 0x00711C0D: shr eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 15u; /* 0x00711C0D: shr eax, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x00711C10: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x58)) = (uint8_t)(LO8(eax)); /* 0x00711C12: mov byte ptr [ebp - 0x58], al */
    PUSH32(esp, 5); /* 0x00711C15: push 5 */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x00711C17: push dword ptr [ebp - 0x58] */
    RECOMP_CALL(sub_006F0EA0); /* 0x00711C1A: call 0x6f0ea0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x70)); /* 0x00711C1F: mov esi, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00711C22: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_007113BF; /* 0x00711C25: jmp 0x7113bf */
L_00711C2A:
    /* cmp eax, 0x109u */ /* 0x00711C2A: cmp eax, 0x109 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x109u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00711D38; /* 0x00711C2F: ja 0x711d38 */
L_00711C35:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00711D00; /* 0x00711C35: je 0x711d00 */
L_00711C3B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF00u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF00u; /* 0x00711C3B: add eax, 0xffffff00 */
    _flag_k = FK_ADD;
    /* cmp eax, 5 */ /* 0x00711C40: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711C43: ja 0x7113bf */
L_00711C49:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x7123D8)); goto _ljump; }
L_00711C50:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00711C50: mov ecx, dword ptr [ebp - 0x4c] */
    edx = esi; /* 0x00711C53: mov edx, esi */
    RECOMP_CALL(sub_00710860); /* 0x00711C55: call 0x710860 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(0x9260B8), 1 */ /* 0x00711C5A: cmp byte ptr [0x9260b8], 1 */
    _flag_a = (uint32_t)(MEM8(0x9260B8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x54)) = eax; /* 0x00711C61: mov dword ptr [ebp - 0x54], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00711C6F; /* 0x00711C64: je 0x711c6f */
L_00711C66:
    /* cmp MEM8(0x9260BC), 1 */ /* 0x00711C66: cmp byte ptr [0x9260bc], 1 */
    _flag_a = (uint32_t)(MEM8(0x9260BC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00711CA3; /* 0x00711C6D: jne 0x711ca3 */
L_00711C6F:
    /* cmp eax, 0x3Du */ /* 0x00711C6F: cmp eax, 0x3d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00711CA3; /* 0x00711C72: jne 0x711ca3 */
L_00711C74:
    RECOMP_CALL(sub_007112A0); /* 0x00711C74: call 0x7112a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00711C79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711C8D; /* 0x00711C7B: je 0x711c8d */
L_00711C7D:
    ecx = MEM32(edi); /* 0x00711C7D: mov ecx, dword ptr [edi] */
    SET_LO8(edx, 0xEu); /* 0x00711C7F: mov dl, 0xe */
    PUSH32(esp, 0); /* 0x00711C81: push 0 */
    PUSH32(esp, 0); /* 0x00711C83: push 0 */
    RECOMP_CALL(sub_006F7C40); /* 0x00711C85: call 0x6f7c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00711C8A: add esp, 8 */
    _flag_k = FK_ADD;
L_00711C8D:
    eax = MEM32(ebp + (-0x54)); /* 0x00711C8D: mov eax, dword ptr [ebp - 0x54] */
    SET_LO8(ecx, 1); /* 0x00711C90: mov cl, 1 */
    edx = eax; /* 0x00711C92: mov edx, eax */
    RECOMP_CALL(sub_006EFDA0); /* 0x00711C94: call 0x6efda0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x00711C99: mov ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711C9C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x00711C9E: jmp 0x7113c5 */
L_00711CA3:
    /* test eax, eax */ /* 0x00711CA3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711588; /* 0x00711CA5: je 0x711588 */
L_00711CAB:
    edx = eax; /* 0x00711CAB: mov edx, eax */
    SET_LO8(ecx, 1); /* 0x00711CAD: mov cl, 1 */
    RECOMP_CALL(sub_006EFDA0); /* 0x00711CAF: call 0x6efda0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x00711CB4: mov ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711CB7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x00711CB9: jmp 0x7113c5 */
L_00711CBE:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00711CBE: mov ecx, dword ptr [ebp - 0x4c] */
    edx = esi; /* 0x00711CC1: mov edx, esi */
    RECOMP_CALL(sub_00710860); /* 0x00711CC3: call 0x710860 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x00711CC8: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x00711CCB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711588; /* 0x00711CCD: je 0x711588 */
L_00711CD3:
    /* cmp eax, 0x46u */ /* 0x00711CD3: cmp eax, 0x46 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00711CED; /* 0x00711CD6: jne 0x711ced */
L_00711CD8:
    /* cmp MEM8(0x92601C), 0 */ /* 0x00711CD8: cmp byte ptr [0x92601c], 0 */
    _flag_a = (uint32_t)(MEM8(0x92601C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00711CED; /* 0x00711CDF: jne 0x711ced */
L_00711CE1:
    edx = eax; /* 0x00711CE1: mov edx, eax */
    SET_LO8(ecx, 1); /* 0x00711CE3: mov cl, 1 */
    RECOMP_CALL(sub_006EFDA0); /* 0x00711CE5: call 0x6efda0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x00711CEA: mov eax, dword ptr [ebp - 8] */
L_00711CED:
    edx = eax; /* 0x00711CED: mov edx, eax */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x00711CEF: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_006EFDA0); /* 0x00711CF1: call 0x6efda0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x00711CF6: mov ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711CF9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x00711CFB: jmp 0x7113c5 */
L_00711D00:
    /* cmp esi, 0xFFFFu */ /* 0x00711D00: cmp esi, 0xffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00711D15; /* 0x00711D06: jne 0x711d15 */
L_00711D08:
    ecx = MEM32(ebp + (-0x48)); /* 0x00711D08: mov ecx, dword ptr [ebp - 0x48] */
    edx = 1; /* 0x00711D0B: mov edx, 1 */
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x00711D10: jmp 0x7113c5 */
L_00711D15:
    edx = ebp + (-0xC); /* 0x00711D15: lea edx, [ebp - 0xc] */
    ecx = esi; /* 0x00711D18: mov ecx, esi */
    RECOMP_CALL(sub_007111F0); /* 0x00711D1A: call 0x7111f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00711D1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711588; /* 0x00711D21: je 0x711588 */
L_00711D27:
    ecx = edx; /* 0x00711D27: mov ecx, edx */
    RECOMP_CALL(sub_006F0000); /* 0x00711D29: call 0x6f0000 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x00711D2E: mov ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711D31: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x00711D33: jmp 0x7113c5 */
L_00711D38:
    /* cmp eax, 0x20Eu */ /* 0x00711D38: cmp eax, 0x20e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00711F5E; /* 0x00711D3D: ja 0x711f5e */
L_00711D43:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00711EDB; /* 0x00711D43: je 0x711edb */
L_00711D49:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFEEEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFEEEu; /* 0x00711D49: add eax, 0xfffffeee */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFBu */ /* 0x00711D4E: cmp eax, 0xfb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711D53: ja 0x7113bf */
L_00711D59:
    eax = (uint32_t)MEM8(eax + 0x712404); /* 0x00711D59: movzx eax, byte ptr [eax + 0x712404] */
    ecx = MEM32(0x7CC724); /* 0x00711D60: mov ecx, dword ptr [0x7cc724] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x7123F0)); goto _ljump; }
L_00711D6D:
    /* cmp MEM32(0x926A2C), 0 */ /* 0x00711D6D: cmp dword ptr [0x926a2c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00711D7F; /* 0x00711D74: je 0x711d7f */
L_00711D76:
    /* cmp MEM32(0x926A30), 0 */ /* 0x00711D76: cmp dword ptr [0x926a30], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00711DE4; /* 0x00711D7D: je 0x711de4 */
L_00711D7F:
    RECOMP_ICALL(ecx); /* 0x00711D7F: call ecx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4C)); /* 0x00711D81: mov ecx, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF515700u);
    eax = eax & 0xFF515700u; /* 0x00711D84: and eax, 0xff515700 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF515700u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFF515700u; /* 0x00711D89: sub eax, 0xff515700 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00711D8E: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x00711D90: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00711D92: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00711D94: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x64)) = eax; /* 0x00711D95: mov dword ptr [ebp - 0x64], eax */
    eax = ecx; /* 0x00711D98: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00711D9A: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x00711D9A: shr eax, 0x10 */
    edx = (int32_t)(int16_t)LO16(eax); /* 0x00711D9D: movsx edx, ax */
    eax = MEM32(edi); /* 0x00711DA0: mov eax, dword ptr [edi] */
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x00711DA2: movsx ecx, cx */
    MEM32(ebp + (-0x58)) = edx; /* 0x00711DA5: mov dword ptr [ebp - 0x58], edx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x00711DA8: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x00711DAB: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x00711DAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711DCD; /* 0x00711DB0: je 0x711dcd */
L_00711DB2:
    PUSH32(esp, ecx); /* 0x00711DB2: push ecx */
    PUSH32(esp, edx); /* 0x00711DB3: push edx */
    edx = ecx; /* 0x00711DB4: mov edx, ecx */
    ecx = eax; /* 0x00711DB6: mov ecx, eax */
    RECOMP_CALL(sub_006F0AE0); /* 0x00711DB8: call 0x6f0ae0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00711DBD: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00711DC0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711DDE; /* 0x00711DC2: je 0x711dde */
L_00711DC4:
    eax = MEM32(ebp + (-0x8)); /* 0x00711DC4: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x58)); /* 0x00711DC7: mov edx, dword ptr [ebp - 0x58] */
    ecx = MEM32(ebp + (-0x10)); /* 0x00711DCA: mov ecx, dword ptr [ebp - 0x10] */
L_00711DCD:
    PUSH32(esp, edx); /* 0x00711DCD: push edx */
    edx = MEM32(ebp + (-0x64)); /* 0x00711DCE: mov edx, dword ptr [ebp - 0x64] */
    PUSH32(esp, ecx); /* 0x00711DD1: push ecx */
    PUSH32(esp, 0); /* 0x00711DD2: push 0 */
    ecx = eax; /* 0x00711DD4: mov ecx, eax */
    RECOMP_CALL(sub_006F0B80); /* 0x00711DD6: call 0x6f0b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00711DDB: add esp, 0xc */
    _flag_k = FK_ADD;
L_00711DDE:
    ecx = MEM32(0x7CC724); /* 0x00711DDE: mov ecx, dword ptr [0x7cc724] */
L_00711DE4:
    /* cmp MEM32(0x926A2C), 0 */ /* 0x00711DE4: cmp dword ptr [0x926a2c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00711DFA; /* 0x00711DEB: je 0x711dfa */
L_00711DED:
    /* cmp MEM32(0x926A30), 0 */ /* 0x00711DED: cmp dword ptr [0x926a30], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711DF4: je 0x7113bf */
L_00711DFA:
    RECOMP_ICALL(ecx); /* 0x00711DFA: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF515700u);
    eax = eax & 0xFF515700u; /* 0x00711DFC: and eax, 0xff515700 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edi; /* 0x00711E01: mov edx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF515700u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFF515700u; /* 0x00711E03: sub eax, 0xff515700 */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x00711E08: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00711E0A: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x00711E0C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00711E0E: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00711E10: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x00711E11: push eax */
    RECOMP_CALL(sub_00710DE0); /* 0x00711E12: call 0x710de0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00711E17: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_007113BF; /* 0x00711E1A: jmp 0x7113bf */
L_00711E1F:
    SET_LO16(ecx, MEM16(0x926BCC)); /* 0x00711E1F: mov cx, word ptr [0x926bcc] */
    eax = esi; /* 0x00711E26: mov eax, esi */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00711E28: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x00711E28: shr eax, 0x10 */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(ecx, LO16(ecx) + LO16(eax)); /* 0x00711E2B: add cx, ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(0x926BCC) = (uint16_t)(LO16(ecx)); /* 0x00711E2E: mov word ptr [0x926bcc], cx */
    /* test LO16(ecx), LO16(ecx) */ /* 0x00711E35: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00711E6E; /* 0x00711E38: jle 0x711e6e */
L_00711E3A:
    /* cmp LO16(ecx), 0x78u */ /* 0x00711E3A: cmp cx, 0x78 */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x78u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711E3E: jl 0x7113bf */
L_00711E44:
    PUSH32(esp, ecx); /* 0x00711E44: push ecx */
    ecx = MEM32(edi); /* 0x00711E45: mov ecx, dword ptr [edi] */
    PUSH32(esp, 1); /* 0x00711E47: push 1 */
    PUSH32(esp, 0); /* 0x00711E49: push 0 */
    RECOMP_CALL(sub_006F10D0); /* 0x00711E4B: call 0x6f10d0 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, MEM16(0x926BCC)); /* 0x00711E50: mov ax, word ptr [0x926bcc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00711E56: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFFF88u) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + 0xFFFFFF88u); /* 0x00711E59: add ax, -0x78 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(0x926BCC) = (uint16_t)(LO16(eax)); /* 0x00711E5D: mov word ptr [0x926bcc], ax */
    /* cmp LO16(eax), 0x78u */ /* 0x00711E63: cmp ax, 0x78 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x78u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_00711E44; /* 0x00711E67: jge 0x711e44 */
L_00711E69:
    RECOMP_BACKEDGE();
    goto L_007113BF; /* 0x00711E69: jmp 0x7113bf */
L_00711E6E:
    /* cmp LO16(ecx), 0xFFFFFF88u */ /* 0x00711E6E: cmp cx, -0x78 */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0xFFFFFF88u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711E72: jg 0x7113bf */
L_00711E78:
    PUSH32(esp, ecx); /* 0x00711E78: push ecx */
    ecx = MEM32(edi); /* 0x00711E79: mov ecx, dword ptr [edi] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00711E7B: push -1 */
    PUSH32(esp, 0); /* 0x00711E7D: push 0 */
    RECOMP_CALL(sub_006F10D0); /* 0x00711E7F: call 0x6f10d0 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, MEM16(0x926BCC)); /* 0x00711E84: mov ax, word ptr [0x926bcc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00711E8A: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x78u) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + 0x78u); /* 0x00711E8D: add ax, 0x78 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(0x926BCC) = (uint16_t)(LO16(eax)); /* 0x00711E91: mov word ptr [0x926bcc], ax */
    /* cmp LO16(eax), 0xFFFFFF88u */ /* 0x00711E97: cmp ax, -0x78 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFFF88u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_00711E78; /* 0x00711E9B: jle 0x711e78 */
L_00711E9D:
    RECOMP_BACKEDGE();
    goto L_007113BF; /* 0x00711E9D: jmp 0x7113bf */
L_00711EA2:
    eax = esi; /* 0x00711EA2: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF0u);
    eax = eax & 0xFFF0u; /* 0x00711EA4: and eax, 0xfff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xF100u */ /* 0x00711EA9: cmp eax, 0xf100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00711ED4; /* 0x00711EAE: je 0x711ed4 */
L_00711EB0:
    /* cmp eax, 0xF140u */ /* 0x00711EB0: cmp eax, 0xf140 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF140u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00711EC2; /* 0x00711EB5: je 0x711ec2 */
L_00711EB7:
    /* cmp eax, 0xF170u */ /* 0x00711EB7: cmp eax, 0xf170 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF170u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711EBC: jne 0x7113bf */
L_00711EC2:
    eax = MEM32(0x87CBCC); /* 0x00711EC2: mov eax, dword ptr [0x87cbcc] */
    /* cmp MEM32(eax + 0x104), 0 */ /* 0x00711EC7: cmp dword ptr [eax + 0x104], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x104)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711ECE: je 0x7113bf */
L_00711ED4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00711ED4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_007122C0; /* 0x00711ED6: jmp 0x7122c0 */
L_00711EDB:
    SET_LO16(ecx, MEM16(0x92706C)); /* 0x00711EDB: mov cx, word ptr [0x92706c] */
    eax = esi; /* 0x00711EE2: mov eax, esi */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00711EE4: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x00711EE4: shr eax, 0x10 */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(ecx, LO16(ecx) + LO16(eax)); /* 0x00711EE7: add cx, ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(0x92706C) = (uint16_t)(LO16(ecx)); /* 0x00711EEA: mov word ptr [0x92706c], cx */
    /* test LO16(ecx), LO16(ecx) */ /* 0x00711EF1: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00711F2A; /* 0x00711EF4: jle 0x711f2a */
L_00711EF6:
    /* cmp LO16(ecx), 0x78u */ /* 0x00711EF6: cmp cx, 0x78 */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x78u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711EFA: jl 0x7113bf */
L_00711F00:
    PUSH32(esp, ecx); /* 0x00711F00: push ecx */
    ecx = MEM32(edi); /* 0x00711F01: mov ecx, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x00711F03: push 0 */
    PUSH32(esp, 1); /* 0x00711F05: push 1 */
    RECOMP_CALL(sub_006F10D0); /* 0x00711F07: call 0x6f10d0 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, MEM16(0x92706C)); /* 0x00711F0C: mov ax, word ptr [0x92706c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00711F12: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFFF88u) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + 0xFFFFFF88u); /* 0x00711F15: add ax, -0x78 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(0x92706C) = (uint16_t)(LO16(eax)); /* 0x00711F19: mov word ptr [0x92706c], ax */
    /* cmp LO16(eax), 0x78u */ /* 0x00711F1F: cmp ax, 0x78 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x78u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_00711F00; /* 0x00711F23: jge 0x711f00 */
L_00711F25:
    RECOMP_BACKEDGE();
    goto L_007113BF; /* 0x00711F25: jmp 0x7113bf */
L_00711F2A:
    /* cmp LO16(ecx), 0xFFFFFF88u */ /* 0x00711F2A: cmp cx, -0x78 */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0xFFFFFF88u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711F2E: jg 0x7113bf */
L_00711F34:
    PUSH32(esp, ecx); /* 0x00711F34: push ecx */
    ecx = MEM32(edi); /* 0x00711F35: mov ecx, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x00711F37: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00711F39: push -1 */
    RECOMP_CALL(sub_006F10D0); /* 0x00711F3B: call 0x6f10d0 */
    RECOMP_FLAGS_IN();
    SET_LO16(eax, MEM16(0x92706C)); /* 0x00711F40: mov ax, word ptr [0x92706c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00711F46: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x78u) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + 0x78u); /* 0x00711F49: add ax, 0x78 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(0x92706C) = (uint16_t)(LO16(eax)); /* 0x00711F4D: mov word ptr [0x92706c], ax */
    /* cmp LO16(eax), 0xFFFFFF88u */ /* 0x00711F53: cmp ax, -0x78 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFFF88u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_00711F34; /* 0x00711F57: jle 0x711f34 */
L_00711F59:
    RECOMP_BACKEDGE();
    goto L_007113BF; /* 0x00711F59: jmp 0x7113bf */
L_00711F5E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFDEBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFDEBu; /* 0x00711F5E: add eax, 0xfffffdeb */
    _flag_k = FK_ADD;
    /* cmp eax, 0x8Eu */ /* 0x00711F63: cmp eax, 0x8e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_007113BF; /* 0x00711F68: ja 0x7113bf */
L_00711F6E:
    eax = (uint32_t)MEM8(eax + 0x712514); /* 0x00711F6E: movzx eax, byte ptr [eax + 0x712514] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x712500)); goto _ljump; }
L_00711F7C:
    eax = MEM32(edi); /* 0x00711F7C: mov eax, dword ptr [edi] */
    /* cmp MEM32(0x926A0C), eax */ /* 0x00711F7E: cmp dword ptr [0x926a0c], eax */
    _flag_a = (uint32_t)(MEM32(0x926A0C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00711588; /* 0x00711F84: jne 0x711588 */
L_00711F8A:
    /* cmp MEM32(0x926A2C), 0 */ /* 0x00711F8A: cmp dword ptr [0x926a2c], 0 */
    _flag_a = (uint32_t)(MEM32(0x926A2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00711588; /* 0x00711F91: jne 0x711588 */
L_00711F97:
    /* test MEM32(eax + 0x30), 0x4000u */ /* 0x00711F97: test dword ptr [eax + 0x30], 0x4000 */
    _flag_a = (uint32_t)(MEM32(eax + 0x30)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00711588; /* 0x00711F9E: jne 0x711588 */
L_00711FA4:
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x00711FA4: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC720)); /* 0x00711FA7: call dword ptr [0x7cc720] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00711FAD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00712006; /* 0x00711FAF: jne 0x712006 */
L_00711FB1:
    eax = ebp + (-0x68); /* 0x00711FB1: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x00711FB4: push eax */
    RECOMP_ICALL(MEM32(0x7CC848)); /* 0x00711FB5: call dword ptr [0x7cc848] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x68); /* 0x00711FBB: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x00711FBE: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x00711FBF: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC824)); /* 0x00711FC2: call dword ptr [0x7cc824] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x00711FC8: mov eax, dword ptr [edi] */
    ecx = MEM32(ebp + (-0x64)); /* 0x00711FCA: mov ecx, dword ptr [ebp - 0x64] */
    edx = MEM32(ebp + (-0x68)); /* 0x00711FCD: mov edx, dword ptr [ebp - 0x68] */
    MEM32(ebp + (-0x58)) = ecx; /* 0x00711FD0: mov dword ptr [ebp - 0x58], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x00711FD3: mov dword ptr [ebp - 0x10], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x00711FD6: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x00711FD9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00711FF6; /* 0x00711FDB: je 0x711ff6 */
L_00711FDD:
    PUSH32(esp, ecx); /* 0x00711FDD: push ecx */
    PUSH32(esp, ecx); /* 0x00711FDE: push ecx */
    ecx = eax; /* 0x00711FDF: mov ecx, eax */
    RECOMP_CALL(sub_006F0AE0); /* 0x00711FE1: call 0x6f0ae0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00711FE6: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00711FE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712006; /* 0x00711FEB: je 0x712006 */
L_00711FED:
    eax = MEM32(ebp + (-0x8)); /* 0x00711FED: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x58)); /* 0x00711FF0: mov ecx, dword ptr [ebp - 0x58] */
    edx = MEM32(ebp + (-0x10)); /* 0x00711FF3: mov edx, dword ptr [ebp - 0x10] */
L_00711FF6:
    PUSH32(esp, ecx); /* 0x00711FF6: push ecx */
    PUSH32(esp, edx); /* 0x00711FF7: push edx */
    PUSH32(esp, 0); /* 0x00711FF8: push 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00711FFA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x00711FFC: mov ecx, eax */
    RECOMP_CALL(sub_006F0B80); /* 0x00711FFE: call 0x6f0b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00712003: add esp, 0xc */
    _flag_k = FK_ADD;
L_00712006:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00712006: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006F0A40); /* 0x00712008: call 0x6f0a40 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x0071200D: mov ecx, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00712010: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_007113C5; /* 0x00712012: jmp 0x7113c5 */
L_00712017:
    ecx = edi; /* 0x00712017: mov ecx, edi */
    MEM32(edi + 0x2C) = 0; /* 0x00712019: mov dword ptr [edi + 0x2c], 0 */
    RECOMP_CALL(sub_00710FD0); /* 0x00712020: call 0x710fd0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_007113BF; /* 0x00712025: jmp 0x7113bf */
L_0071202A:
    eax = (uint32_t)LO16(esi); /* 0x0071202A: movzx eax, si */
    MEM32(ebp + (-0x50)) = eax; /* 0x0071202D: mov dword ptr [ebp - 0x50], eax */
    eax = eax + eax * 4; /* 0x00712030: lea eax, [eax + eax*4] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x00712033: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x00712033: shl eax, 3 */
    RECOMP_CALL(sub_00780140); /* 0x00712036: call 0x780140 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x3C); /* 0x0071203B: mov eax, dword ptr [edi + 0x3c] */
    ecx = esp; /* 0x0071203E: mov ecx, esp */
    PUSH32(esp, 0x28u); /* 0x00712040: push 0x28 */
    PUSH32(esp, ecx); /* 0x00712042: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x00712043: push dword ptr [ebp - 0x50] */
    eax = MEM32(eax + 0x10); /* 0x00712046: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x00712049: push dword ptr [ebp - 0x4c] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x0071204C: mov dword ptr [ebp - 8], ecx */
    RECOMP_ICALL(eax); /* 0x0071204F: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00712051: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007121CE; /* 0x00712053: je 0x7121ce */
L_00712059:
    eax = ebp + (-0x1C); /* 0x00712059: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x0071205C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x0071205D: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC830)); /* 0x00712060: call dword ptr [0x7cc830] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00712066: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007113BF; /* 0x00712068: je 0x7113bf */
L_0071206E:
    eax = MEM32(ebp + (-0x14)); /* 0x0071206E: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x00712071: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712082; /* 0x00712074: jne 0x712082 */
L_00712076:
    eax = MEM32(ebp + (-0x10)); /* 0x00712076: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + (-0x18)) */ /* 0x00712079: cmp eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007113BF; /* 0x0071207C: je 0x7113bf */
L_00712082:
    esi = MEM32(0x7CC7B4); /* 0x00712082: mov esi, dword ptr [0x7cc7b4] */
    eax = ebp + (-0x1C); /* 0x00712088: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x0071208B: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x0071208C: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(esi); /* 0x0071208F: call esi */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x00712091: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00712094: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x00712095: push dword ptr [ebp - 0x48] */
    RECOMP_ICALL(esi); /* 0x00712098: call esi */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x18)) * (int32_t)0x64u); /* 0x0071209A: imul eax, dword ptr [ebp - 0x18], 0x64 */
    MEM32(ebp + (-0x18)) = eax; /* 0x0071209E: mov dword ptr [ebp - 0x18], eax */
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x1C)) * (int32_t)0x64u); /* 0x007120A1: imul eax, dword ptr [ebp - 0x1c], 0x64 */
    MEM32(ebp + (-0x1C)) = eax; /* 0x007120A5: mov dword ptr [ebp - 0x1c], eax */
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x10)) * (int32_t)0x64u); /* 0x007120A8: imul eax, dword ptr [ebp - 0x10], 0x64 */
    MEM32(ebp + (-0x10)) = eax; /* 0x007120AC: mov dword ptr [ebp - 0x10], eax */
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x14)) * (int32_t)0x64u); /* 0x007120AF: imul eax, dword ptr [ebp - 0x14], 0x64 */
    /* cmp MEM32(ebp + (-0x50)), 0 */ /* 0x007120B3: cmp dword ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x007120B7: mov dword ptr [ebp - 0x14], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_007121CE; /* 0x007120BA: jbe 0x7121ce */
L_007120C0:
    esi = MEM32(ebp + (-0x8)); /* 0x007120C0: mov esi, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0x50)); /* 0x007120C3: mov edi, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x007120C6: add esi, 0x10 */
    _flag_k = FK_ADD;
    esp = esp; /* 0x007120C9: lea esp, [esp] */
L_007120D0:
    eax = MEM32(esi + (-0x8)); /* 0x007120D0: mov eax, dword ptr [esi - 8] */
    PUSH32(esp, 0); /* 0x007120D3: push 0 */
    PUSH32(esp, eax); /* 0x007120D5: push eax */
    MEM32(ebp + (-0x50)) = eax; /* 0x007120D6: mov dword ptr [ebp - 0x50], eax */
    RECOMP_CALL(sub_006F5360); /* 0x007120D9: call 0x6f5360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007120DE: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x007120E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_007121C1; /* 0x007120E3: js 0x7121c1 */
L_007120E9:
    eax = MEM32(esi + (-0x10)); /* 0x007120E9: mov eax, dword ptr [esi - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x1C)); /* 0x007120EC: sub eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x18)); /* 0x007120EF: mov ecx, dword ptr [ebp - 0x18] */
    _xmm[1].u64[0] = (uint32_t)(eax); _xmm[1].u64[1] = 0; /* 0x007120F2: movd xmm1, eax */
    eax = MEM32(ebp + (-0x14)); /* 0x007120F6: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x1C)); /* 0x007120F9: sub eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x007120FC: cvtdq2ps xmm1, xmm1 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x007120FF: movd xmm0, eax */
    eax = MEM32(esi + (-0xC)); /* 0x00712103: mov eax, dword ptr [esi - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00712106: sub eax, ecx */
    _flag_k = FK_CMP;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x00712108: cvtdq2ps xmm0, xmm0 */
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x0071210B: movd xmm2, eax */
    eax = MEM32(ebp + (-0x10)); /* 0x0071210F: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00712112: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test MEM8(esi), 2 */ /* 0x00712114: test byte ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x00712117: divss xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0071211B: movd xmm0, eax */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].f32[_k] = (float)_s.i32[_k]; } /* 0x0071211F: cvtdq2ps xmm2, xmm2 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x00712122: cvtdq2ps xmm0, xmm0 */
    MEM32(ebp + (-0x60)) = _xmm[1].u32[0]; /* 0x00712125: movss dword ptr [ebp - 0x60], xmm1 */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] / _s); } /* 0x0071212A: divss xmm2, xmm0 */
    MEM32(ebp + (-0x54)) = _xmm[2].u32[0]; /* 0x0071212E: movss dword ptr [ebp - 0x54], xmm2 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712169; /* 0x00712133: je 0x712169 */
L_00712135:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00712135: sub esp, 8 */
    _flag_k = FK_CMP;
    _xmm[3] = _xmm[1]; /* 0x00712138: movaps xmm3, xmm1 */
    ecx = 1; /* 0x0071213B: mov ecx, 1 */
    MEM32(esp + 0x4) = 0x3F800000u; /* 0x00712140: mov dword ptr [esp + 4], 0x3f800000 */
    MEM32(esp) = _xmm[2].u32[0]; /* 0x00712148: movss dword ptr [esp], xmm2 */
    PUSH32(esp, 0); /* 0x0071214D: push 0 */
    PUSH32(esp, MEM32(esi + (-0x4))); /* 0x0071214F: push dword ptr [esi - 4] */
    PUSH32(esp, 0); /* 0x00712152: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x00712154: push dword ptr [ebp - 0x50] */
    RECOMP_CALL(sub_006F5560); /* 0x00712157: call 0x6f5560 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(ebp + (-0x60)); _xmm[1].u64[1] = 0; /* 0x0071215C: movss xmm1, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x00712161: add esp, 0x18 */
    _flag_k = FK_ADD;
    _xmm[2].u64[0] = MEM32(ebp + (-0x54)); _xmm[2].u64[1] = 0; /* 0x00712164: movss xmm2, dword ptr [ebp - 0x54] */
L_00712169:
    /* test MEM8(esi), 1 */ /* 0x00712169: test byte ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071218E; /* 0x0071216C: je 0x71218e */
L_0071216E:
    PUSH32(esp, ecx); /* 0x0071216E: push ecx */
    MEM32(esp) = 0x3F800000u; /* 0x0071216F: mov dword ptr [esp], 0x3f800000 */
    _xmm[3] = _xmm[2]; /* 0x00712176: movaps xmm3, xmm2 */
    PUSH32(esp, 0); /* 0x00712179: push 0 */
    PUSH32(esp, MEM32(esi + (-0x4))); /* 0x0071217B: push dword ptr [esi - 4] */
    _xmm[2] = _xmm[1]; /* 0x0071217E: movaps xmm2, xmm1 */
    PUSH32(esp, 0); /* 0x00712181: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x00712183: push dword ptr [ebp - 0x50] */
    RECOMP_CALL(sub_006F5750); /* 0x00712186: call 0x6f5750 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x0071218B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_0071218E:
    /* test MEM8(esi), 4 */ /* 0x0071218E: test byte ptr [esi], 4 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_007121C1; /* 0x00712191: je 0x7121c1 */
L_00712193:
    _xmm[0].u64[0] = MEM32(ebp + (-0x54)); _xmm[0].u64[1] = 0; /* 0x00712193: movss xmm0, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00712198: sub esp, 8 */
    _flag_k = FK_CMP;
    _xmm[3].u64[0] = MEM32(ebp + (-0x60)); _xmm[3].u64[1] = 0; /* 0x0071219B: movss xmm3, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x007121A0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x4) = 0x3F800000u; /* 0x007121A2: mov dword ptr [esp + 4], 0x3f800000 */
    MEM32(esp) = _xmm[0].u32[0]; /* 0x007121AA: movss dword ptr [esp], xmm0 */
    PUSH32(esp, 0); /* 0x007121AF: push 0 */
    PUSH32(esp, MEM32(esi + (-0x4))); /* 0x007121B1: push dword ptr [esi - 4] */
    PUSH32(esp, 0); /* 0x007121B4: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x007121B6: push dword ptr [ebp - 0x50] */
    RECOMP_CALL(sub_006F5560); /* 0x007121B9: call 0x6f5560 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x007121BE: add esp, 0x18 */
    _flag_k = FK_ADD;
L_007121C1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x28u; /* 0x007121C1: add esi, 0x28 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x007121C4: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007120D0; /* 0x007121C5: jne 0x7120d0 */
L_007121CB:
    edi = MEM32(ebp + (-0x58)); /* 0x007121CB: mov edi, dword ptr [ebp - 0x58] */
L_007121CE:
    eax = MEM32(edi + 0x3C); /* 0x007121CE: mov eax, dword ptr [edi + 0x3c] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x007121D1: push dword ptr [ebp - 0x4c] */
    eax = MEM32(eax + 0xC); /* 0x007121D4: mov eax, dword ptr [eax + 0xc] */
    RECOMP_ICALL(eax); /* 0x007121D7: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007121D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_007122C0; /* 0x007121DB: jmp 0x7122c0 */
L_007121E0:
    PUSH32(esp, 0); /* 0x007121E0: push 0 */
    PUSH32(esp, 0); /* 0x007121E2: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007121E4: push -1 */
    PUSH32(esp, esi); /* 0x007121E6: push esi */
    RECOMP_ICALL(MEM32(0x7CC6F0)); /* 0x007121E7: call dword ptr [0x7cc6f0] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x007121ED: mov ecx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007121EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x007121F1: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x50)) = eax; /* 0x007121F4: mov dword ptr [ebp - 0x50], eax */
    /* test ecx, ecx */ /* 0x007121F7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071227F; /* 0x007121F9: je 0x71227f */
L_007121FF:
    /* nop */ /* 0x007121FF: nop  */
L_00712200:
    PUSH32(esp, 0); /* 0x00712200: push 0 */
    PUSH32(esp, 0); /* 0x00712202: push 0 */
    PUSH32(esp, eax); /* 0x00712204: push eax */
    PUSH32(esp, esi); /* 0x00712205: push esi */
    RECOMP_ICALL(MEM32(0x7CC6F0)); /* 0x00712206: call dword ptr [0x7cc6f0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0071220C: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x0071220D: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00712210: add eax, eax */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_00780140); /* 0x00712212: call 0x780140 */
    RECOMP_FLAGS_IN();
    eax = esp; /* 0x00712217: mov eax, esp */
    MEM32(ebp + (-0x58)) = eax; /* 0x00712219: mov dword ptr [ebp - 0x58], eax */
    /* test eax, eax */ /* 0x0071221C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712273; /* 0x0071221E: je 0x712273 */
L_00712220:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x00712220: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x00712223: push eax */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x00712224: push dword ptr [ebp - 0x50] */
    PUSH32(esp, esi); /* 0x00712227: push esi */
    RECOMP_ICALL(MEM32(0x7CC6F0)); /* 0x00712228: call dword ptr [0x7cc6f0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0071222E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712273; /* 0x00712230: je 0x712273 */
L_00712232:
    edx = MEM32(ebp + (-0x58)); /* 0x00712232: mov edx, dword ptr [ebp - 0x58] */
    ecx = edx; /* 0x00712235: mov ecx, edx */
    RECOMP_CALL(sub_006F2AE0); /* 0x00712237: call 0x6f2ae0 */
    RECOMP_FLAGS_IN();
    ecx = 0x00804E28u; /* 0x0071223C: mov ecx, 0x804e28 */
    eax = eax * 2 + 0x2; /* 0x00712241: lea eax, [eax*2 + 2] */
    PUSH32(esp, eax); /* 0x00712248: push eax */
    PUSH32(esp, edx); /* 0x00712249: push edx */
    edx = 0x00804E1Cu; /* 0x0071224A: mov edx, 0x804e1c */
    RECOMP_CALL(sub_00700DA0); /* 0x0071224F: call 0x700da0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x00712254: mov ecx, dword ptr [edi] */
    esi = eax; /* 0x00712256: mov esi, eax */
    PUSH32(esp, esi); /* 0x00712258: push esi */
    edx = 0x1000u; /* 0x00712259: mov edx, 0x1000 */
    RECOMP_CALL(sub_0074AB80); /* 0x0071225E: call 0x74ab80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00712263: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x00712266: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x00712267: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x70)); /* 0x0071226D: mov esi, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00712270: add esp, 4 */
    _flag_k = FK_ADD;
L_00712273:
    eax = MEM32(ebp + (-0x50)); /* 0x00712273: mov eax, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00712276: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x50)) = eax; /* 0x00712277: mov dword ptr [ebp - 0x50], eax */
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x0071227A: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00712200; /* 0x0071227D: jb 0x712200 */
L_0071227F:
    ecx = MEM32(edi); /* 0x0071227F: mov ecx, dword ptr [edi] */
    edx = 0x1003u; /* 0x00712281: mov edx, 0x1003 */
    PUSH32(esp, 0); /* 0x00712286: push 0 */
    RECOMP_CALL(sub_0074AB80); /* 0x00712288: call 0x74ab80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071228D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x00712290: push esi */
    RECOMP_ICALL(MEM32(0x7CC6EC)); /* 0x00712291: call dword ptr [0x7cc6ec] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00712297: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_007122C0; /* 0x00712299: jmp 0x7122c0 */
L_0071229B:
    ecx = MEM32(ebp + (-0x48)); /* 0x0071229B: mov ecx, dword ptr [ebp - 0x48] */
L_0071229E:
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x0071229E: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_007113C8; /* 0x007122A1: jmp 0x7113c8 */
L_007122A6:
    /* test edx, edx */ /* 0x007122A6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_007122AE; /* 0x007122A8: js 0x7122ae */
L_007122AA:
    eax = edx; /* 0x007122AA: mov eax, edx */
    goto L_007122C0; /* 0x007122AC: jmp 0x7122c0 */
L_007122AE:
    PUSH32(esp, eax); /* 0x007122AE: push eax */
    PUSH32(esp, esi); /* 0x007122AF: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x007122B0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x007122B3: push ecx */
L_007122B4:
    PUSH32(esp, MEM32(0x7CC700)); /* 0x007122B4: push dword ptr [0x7cc700] */
L_007122BA:
    RECOMP_ICALL(MEM32(0x7CC740)); /* 0x007122BA: call dword ptr [0x7cc740] */
    RECOMP_FLAGS_IN();
L_007122C0:
    esp = ebp + (-0x80); /* 0x007122C0: lea esp, [ebp - 0x80] */
    edi = POP32_VAL(esp); /* 0x007122C3: pop edi */
    esi = POP32_VAL(esp); /* 0x007122C4: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x007122C5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007122C8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007122CA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007122CF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007122D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x007122D2: ret 0x10 */
  _ljump:
    switch (_itail_tgt) {
      case 0x007113ABu: goto L_007113AB;
      case 0x007113BFu: goto L_007113BF;
      case 0x007113E3u: goto L_007113E3;
      case 0x00711592u: goto L_00711592;
      case 0x007115AEu: goto L_007115AE;
      case 0x007115BAu: goto L_007115BA;
      case 0x00711746u: goto L_00711746;
      case 0x0071175Du: goto L_0071175D;
      case 0x007117F5u: goto L_007117F5;
      case 0x00711818u: goto L_00711818;
      case 0x00711869u: goto L_00711869;
      case 0x007118A1u: goto L_007118A1;
      case 0x007118ABu: goto L_007118AB;
      case 0x007118C5u: goto L_007118C5;
      case 0x00711932u: goto L_00711932;
      case 0x0071194Cu: goto L_0071194C;
      case 0x00711966u: goto L_00711966;
      case 0x00711980u: goto L_00711980;
      case 0x0071199Au: goto L_0071199A;
      case 0x007119B4u: goto L_007119B4;
      case 0x007119CEu: goto L_007119CE;
      case 0x007119E8u: goto L_007119E8;
      case 0x00711A02u: goto L_00711A02;
      case 0x00711C50u: goto L_00711C50;
      case 0x00711CBEu: goto L_00711CBE;
      case 0x00711D15u: goto L_00711D15;
      case 0x00711D6Du: goto L_00711D6D;
      case 0x00711DE4u: goto L_00711DE4;
      case 0x00711E1Fu: goto L_00711E1F;
      case 0x00711EA2u: goto L_00711EA2;
      case 0x00711F7Cu: goto L_00711F7C;
      case 0x00712017u: goto L_00712017;
      case 0x0071202Au: goto L_0071202A;
      case 0x007121E0u: goto L_007121E0;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007125B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007125B0u);

L_007125B0:
    PUSH32(esp, ebp); /* 0x007125B0: push ebp */
    ebp = esp; /* 0x007125B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x007125B3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x007125B6: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x007125B9: push ebx */
    PUSH32(esp, esi); /* 0x007125BA: push esi */
    PUSH32(esp, edi); /* 0x007125BB: push edi */
    RECOMP_ICALL(MEM32(0x7CC0D8)); /* 0x007125BC: call dword ptr [0x7cc0d8] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x863148), 0 */ /* 0x007125C2: cmp dword ptr [0x863148], 0 */
    _flag_a = (uint32_t)(MEM32(0x863148)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = eax; /* 0x007125C9: mov edi, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712649; /* 0x007125CB: je 0x712649 */
L_007125CD:
    esi = MEM32(0x7CC874); /* 0x007125CD: mov esi, dword ptr [0x7cc874] */
    eax = esp + 0xC; /* 0x007125D3: lea eax, [esp + 0xc] */
    PUSH32(esp, 1); /* 0x007125D7: push 1 */
    PUSH32(esp, 0); /* 0x007125D9: push 0 */
    PUSH32(esp, 0); /* 0x007125DB: push 0 */
    PUSH32(esp, 0); /* 0x007125DD: push 0 */
    PUSH32(esp, eax); /* 0x007125DF: push eax */
    RECOMP_ICALL(esi); /* 0x007125E0: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007125E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712649; /* 0x007125E4: je 0x712649 */
L_007125E6:
    ebx = MEM32(0x7CC8A0); /* 0x007125E6: mov ebx, dword ptr [0x7cc8a0] */
    esp = esp; /* 0x007125EC: lea esp, [esp] */
L_007125F0:
    ecx = MEM32(0x87CCA8); /* 0x007125F0: mov ecx, dword ptr [0x87cca8] */
    /* test ecx, ecx */ /* 0x007125F6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071261A; /* 0x007125F8: je 0x71261a */
L_007125FA:
    eax = MEM32(esp + 0x18); /* 0x007125FA: mov eax, dword ptr [esp + 0x18] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x007125FE: cdq  */
    PUSH32(esp, edx); /* 0x007125FF: push edx */
    PUSH32(esp, eax); /* 0x00712600: push eax */
    PUSH32(esp, 0); /* 0x00712601: push 0 */
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x00712603: push dword ptr [esp + 0x20] */
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x00712607: push dword ptr [esp + 0x20] */
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x0071260B: push dword ptr [esp + 0x20] */
    PUSH32(esp, MEM32(0x87CCA4)); /* 0x0071260F: push dword ptr [0x87cca4] */
    RECOMP_ICALL(ecx); /* 0x00712615: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x00712617: add esp, 0x1c */
    _flag_k = FK_ADD;
L_0071261A:
    eax = esp + 0xC; /* 0x0071261A: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x0071261E: push eax */
    RECOMP_ICALL(ebx); /* 0x0071261F: call ebx */
    RECOMP_FLAGS_IN();
    eax = esp + 0xC; /* 0x00712621: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x00712625: push eax */
    RECOMP_ICALL(MEM32(0x7CC704)); /* 0x00712626: call dword ptr [0x7cc704] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x0071262C: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x1C); /* 0x0071262E: sub eax, dword ptr [esp + 0x1c] */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x00712632: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00712649; /* 0x00712634: jle 0x712649 */
L_00712636:
    PUSH32(esp, 1); /* 0x00712636: push 1 */
    PUSH32(esp, 0); /* 0x00712638: push 0 */
    PUSH32(esp, 0); /* 0x0071263A: push 0 */
    PUSH32(esp, 0); /* 0x0071263C: push 0 */
    eax = esp + 0x1C; /* 0x0071263E: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x00712642: push eax */
    RECOMP_ICALL(esi); /* 0x00712643: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00712645: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007125F0; /* 0x00712647: jne 0x7125f0 */
L_00712649:
    /* cmp MEM8(0x9260B7), 1 */ /* 0x00712649: cmp byte ptr [0x9260b7], 1 */
    _flag_a = (uint32_t)(MEM8(0x9260B7)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = 0x8000u; /* 0x00712650: mov edi, 0x8000 */
    esi = MEM32(0x7CC760); /* 0x00712655: mov esi, dword ptr [0x7cc760] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712675; /* 0x0071265B: jne 0x712675 */
L_0071265D:
    PUSH32(esp, 0xA0u); /* 0x0071265D: push 0xa0 */
    RECOMP_ICALL(esi); /* 0x00712662: call esi */
    RECOMP_FLAGS_IN();
    /* test LO16(edi), LO16(eax) */ /* 0x00712664: test di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00712675; /* 0x00712667: jne 0x712675 */
L_00712669:
    edx = 0xE1u; /* 0x00712669: mov edx, 0xe1 */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x0071266E: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_006EFDA0); /* 0x00712670: call 0x6efda0 */
    RECOMP_FLAGS_IN();
L_00712675:
    /* cmp MEM8(0x9260BB), 1 */ /* 0x00712675: cmp byte ptr [0x9260bb], 1 */
    _flag_a = (uint32_t)(MEM8(0x9260BB)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712696; /* 0x0071267C: jne 0x712696 */
L_0071267E:
    PUSH32(esp, 0xA1u); /* 0x0071267E: push 0xa1 */
    RECOMP_ICALL(esi); /* 0x00712683: call esi */
    RECOMP_FLAGS_IN();
    /* test LO16(edi), LO16(eax) */ /* 0x00712685: test di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00712696; /* 0x00712688: jne 0x712696 */
L_0071268A:
    edx = 0xE5u; /* 0x0071268A: mov edx, 0xe5 */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x0071268F: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_006EFDA0); /* 0x00712691: call 0x6efda0 */
    RECOMP_FLAGS_IN();
L_00712696:
    edi = POP32_VAL(esp); /* 0x00712696: pop edi */
    esi = POP32_VAL(esp); /* 0x00712697: pop esi */
    ebx = POP32_VAL(esp); /* 0x00712698: pop ebx */
    esp = ebp; /* 0x00712699: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071269B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071269C: ret  */
    RECOMP_REGS_OUT();
}

void sub_007126A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007126A0u);

L_007126A0:
    PUSH32(esp, ebp); /* 0x007126A0: push ebp */
    ebp = esp; /* 0x007126A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x007126A3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x240u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x240u; /* 0x007126A6: sub esp, 0x240 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x007126AC: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x007126B1: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x23C) = eax; /* 0x007126B3: mov dword ptr [esp + 0x23c], eax */
    eax = MEM32(0x87CCA0); /* 0x007126BA: mov eax, dword ptr [0x87cca0] */
    /* test eax, eax */ /* 0x007126BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007126DD; /* 0x007126C1: je 0x7126dd */
L_007126C3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x007126C3: inc eax */
    _flag_k = FK_INC;
    MEM32(0x87CCA0) = eax; /* 0x007126C4: mov dword ptr [0x87cca0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007126C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0x23C); /* 0x007126CB: mov ecx, dword ptr [esp + 0x23c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x007126D2: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007126D4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007126D9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007126DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007126DC: ret  */
L_007126DD:
    eax = MEM32(0x87CC94); /* 0x007126DD: mov eax, dword ptr [0x87cc94] */
    /* test eax, eax */ /* 0x007126E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0071273B; /* 0x007126E4: jne 0x71273b */
L_007126E6:
    PUSH32(esp, eax); /* 0x007126E6: push eax */
    MEM32(0x87CC9C) = 0x1020u; /* 0x007126E7: mov dword ptr [0x87cc9c], 0x1020 */
    RECOMP_ICALL(MEM32(0x7CC20C)); /* 0x007126F1: call dword ptr [0x7cc20c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 8); /* 0x007126F7: push 8 */
    PUSH32(esp, 0x00807C24u); /* 0x007126F9: push 0x807c24 */
    edx = 0x00804E28u; /* 0x007126FE: mov edx, 0x804e28 */
    MEM32(0x87CC98) = eax; /* 0x00712703: mov dword ptr [0x87cc98], eax */
    ecx = 0x00804E1Cu; /* 0x00712708: mov ecx, 0x804e1c */
    RECOMP_CALL(sub_00700DA0); /* 0x0071270D: call 0x700da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00712712: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(0x87CC94) = eax; /* 0x00712715: mov dword ptr [0x87cc94], eax */
    MEM32(0x87CC9C) = 0; /* 0x0071271A: mov dword ptr [0x87cc9c], 0 */
    PUSH32(esp, 0); /* 0x00712724: push 0 */
    RECOMP_ICALL(MEM32(0x7CC20C)); /* 0x00712726: call dword ptr [0x7cc20c] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0071272C: mov ecx, eax */
    eax = MEM32(0x87CC94); /* 0x0071272E: mov eax, dword ptr [0x87cc94] */
    MEM32(0x87CC98) = ecx; /* 0x00712733: mov dword ptr [0x87cc98], ecx */
    goto L_00712741; /* 0x00712739: jmp 0x712741 */
L_0071273B:
    ecx = MEM32(0x87CC98); /* 0x0071273B: mov ecx, dword ptr [0x87cc98] */
L_00712741:
    MEM32(esp + 0x28) = eax; /* 0x00712741: mov dword ptr [esp + 0x28], eax */
    eax = MEM32(0x87CC9C); /* 0x00712745: mov eax, dword ptr [0x87cc9c] */
    MEM32(esp + 0x4) = eax; /* 0x0071274A: mov dword ptr [esp + 4], eax */
    eax = esp + 0x30; /* 0x0071274E: lea eax, [esp + 0x30] */
    PUSH32(esp, 0x104u); /* 0x00712752: push 0x104 */
    PUSH32(esp, eax); /* 0x00712757: push eax */
    PUSH32(esp, ecx); /* 0x00712758: push ecx */
    MEM32(esp + 0xC) = 0x30u; /* 0x00712759: mov dword ptr [esp + 0xc], 0x30 */
    MEM32(esp + 0x28) = 0; /* 0x00712761: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x24) = 0; /* 0x00712769: mov dword ptr [esp + 0x24], 0 */
    MEM32(esp + 0x38) = 0; /* 0x00712771: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x30) = 0; /* 0x00712779: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x2C) = 0; /* 0x00712781: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x14) = 0x007112E0u; /* 0x00712789: mov dword ptr [esp + 0x14], 0x7112e0 */
    MEM32(esp + 0x20) = ecx; /* 0x00712791: mov dword ptr [esp + 0x20], ecx */
    MEM32(esp + 0x18) = 0; /* 0x00712795: mov dword ptr [esp + 0x18], 0 */
    MEM32(esp + 0x1C) = 0; /* 0x0071279D: mov dword ptr [esp + 0x1c], 0 */
    RECOMP_ICALL(MEM32(0x7CC1C0)); /* 0x007127A5: call dword ptr [0x7cc1c0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x007127AB: push 1 */
    eax = esp + 0x30; /* 0x007127AD: lea eax, [esp + 0x30] */
    PUSH32(esp, eax); /* 0x007127B1: push eax */
    eax = esp + 0x20; /* 0x007127B2: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x007127B6: push eax */
    PUSH32(esp, 0); /* 0x007127B7: push 0 */
    eax = esp + 0x40; /* 0x007127B9: lea eax, [esp + 0x40] */
    PUSH32(esp, eax); /* 0x007127BD: push eax */
    RECOMP_ICALL(MEM32(0x7CC6E8)); /* 0x007127BE: call dword ptr [0x7cc6e8] */
    RECOMP_FLAGS_IN();
    eax = esp; /* 0x007127C4: lea eax, [esp] */
    PUSH32(esp, eax); /* 0x007127C7: push eax */
    RECOMP_ICALL(MEM32(0x7CC7A8)); /* 0x007127C8: call dword ptr [0x7cc7a8] */
    RECOMP_FLAGS_IN();
    /* test LO16(eax), LO16(eax) */ /* 0x007127CE: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007127F2; /* 0x007127D1: jne 0x7127f2 */
L_007127D3:
    PUSH32(esp, 0x00807C00u); /* 0x007127D3: push 0x807c00 */
    RECOMP_CALL(sub_006EDB70); /* 0x007127D8: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007127DD: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(esp + 0x23C); /* 0x007127E0: mov ecx, dword ptr [esp + 0x23c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x007127E7: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007127E9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007127EE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007127F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007127F1: ret  */
L_007127F2:
    ecx = MEM32(esp + 0x23C); /* 0x007127F2: mov ecx, dword ptr [esp + 0x23c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007127F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x007127FB: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x87CCA0) = 1; /* 0x007127FD: mov dword ptr [0x87cca0], 1 */
    RECOMP_CALL(sub_0077F4C2); /* 0x00712807: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0071280C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071280E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071280F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00712810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00712810u);

L_00712810:
    PUSH32(esp, ebp); /* 0x00712810: push ebp */
    ebp = esp; /* 0x00712811: mov ebp, esp */
    eax = MEM32(0x87CCA0); /* 0x00712813: mov eax, dword ptr [0x87cca0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x00712818: sub esp, 0x30 */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x0071281B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712888; /* 0x0071281D: je 0x712888 */
L_0071281F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0071281F: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x87CCA0) = eax; /* 0x00712820: mov dword ptr [0x87cca0], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00712888; /* 0x00712825: jne 0x712888 */
L_00712827:
    eax = ebp + (-0x30); /* 0x00712827: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x0071282A: push eax */
    PUSH32(esp, MEM32(0x87CC94)); /* 0x0071282B: push dword ptr [0x87cc94] */
    PUSH32(esp, MEM32(0x87CC98)); /* 0x00712831: push dword ptr [0x87cc98] */
    RECOMP_ICALL(MEM32(0x7CC72C)); /* 0x00712837: call dword ptr [0x7cc72c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0071283D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071286F; /* 0x0071283F: je 0x71286f */
L_00712841:
    PUSH32(esp, MEM32(0x87CC98)); /* 0x00712841: push dword ptr [0x87cc98] */
    PUSH32(esp, MEM32(0x87CC94)); /* 0x00712847: push dword ptr [0x87cc94] */
    RECOMP_ICALL(MEM32(0x7CC7C0)); /* 0x0071284D: call dword ptr [0x7cc7c0] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x00712853: mov eax, dword ptr [ebp - 0x18] */
    /* test eax, eax */ /* 0x00712856: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712861; /* 0x00712858: je 0x712861 */
L_0071285A:
    PUSH32(esp, eax); /* 0x0071285A: push eax */
    RECOMP_ICALL(MEM32(0x7CC758)); /* 0x0071285B: call dword ptr [0x7cc758] */
    RECOMP_FLAGS_IN();
L_00712861:
    eax = MEM32(ebp + (-0x4)); /* 0x00712861: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x00712864: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071286F; /* 0x00712866: je 0x71286f */
L_00712868:
    PUSH32(esp, eax); /* 0x00712868: push eax */
    RECOMP_ICALL(MEM32(0x7CC758)); /* 0x00712869: call dword ptr [0x7cc758] */
    RECOMP_FLAGS_IN();
L_0071286F:
    PUSH32(esp, MEM32(0x87CC94)); /* 0x0071286F: push dword ptr [0x87cc94] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x00712875: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071287B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x87CC94) = 0; /* 0x0071287E: mov dword ptr [0x87cc94], 0 */
L_00712888:
    esp = ebp; /* 0x00712888: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071288A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071288B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00712890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00712890u);

L_00712890:
    PUSH32(esp, ebp); /* 0x00712890: push ebp */
    ebp = esp; /* 0x00712891: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x00712893: push ebx */
    PUSH32(esp, edi); /* 0x00712894: push edi */
    PUSH32(esp, 0x1Cu); /* 0x00712895: push 0x1c */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x00712897: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x0071289D: mov edi, dword ptr [ebp + 8] */
    ebx = eax; /* 0x007128A0: mov ebx, eax */
    PUSH32(esp, 4); /* 0x007128A2: push 4 */
    MEM32(ebx) = edi; /* 0x007128A4: mov dword ptr [ebx], edi */
    MEM32(ebx + 0xC) = 0; /* 0x007128A6: mov dword ptr [ebx + 0xc], 0 */
    MEM8(ebx + 0x10) = (uint8_t)(1); /* 0x007128AD: mov byte ptr [ebx + 0x10], 1 */
    MEM32(ebx + 0x8) = 0; /* 0x007128B1: mov dword ptr [ebx + 8], 0 */
    MEM32(ebx + 0x4) = 0; /* 0x007128B8: mov dword ptr [ebx + 4], 0 */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x007128BF: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x18) = eax; /* 0x007128C5: mov dword ptr [ebx + 0x18], eax */
    PUSH32(esp, edi); /* 0x007128C8: push edi */
    MEM32(eax) = 0; /* 0x007128C9: mov dword ptr [eax], 0 */
    MEM32(edi + 0x80) = ebx; /* 0x007128CF: mov dword ptr [edi + 0x80], ebx */
    RECOMP_CALL(sub_00712A00); /* 0x007128D5: call 0x712a00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007128DA: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x007128DD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x007128DF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { ebx = ecx; } /* 0x007128E1: cmovne ebx, ecx */
    edi = POP32_VAL(esp); /* 0x007128E4: pop edi */
    eax = ebx; /* 0x007128E5: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x007128E7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x007128E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007128E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_007128F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007128F0u);

L_007128F0:
    PUSH32(esp, ebp); /* 0x007128F0: push ebp */
    ebp = esp; /* 0x007128F1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x007128F3: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x007128F4: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x007128F7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x007128F8: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x007128FB: push edi */
    edi = MEM32(ebx); /* 0x007128FC: mov edi, dword ptr [ebx] */
    /* cmp MEM32(esi), 2 */ /* 0x007128FE: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0071293E; /* 0x00712901: jne 0x71293e */
L_00712903:
    eax = MEM32(esi + 0x10); /* 0x00712903: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(esi + 0x8); /* 0x00712906: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00712909: inc eax */
    _flag_k = FK_INC;
    edx = MEM32(esi + 0x4); /* 0x0071290A: mov edx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x0071290D: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0071290F: push eax */
    eax = MEM32(esi + 0xC); /* 0x00712910: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00712913: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00712914: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00712916: push eax */
    PUSH32(esp, ecx); /* 0x00712917: push ecx */
    PUSH32(esp, edx); /* 0x00712918: push edx */
    RECOMP_ICALL(MEM32(0x7CC044)); /* 0x00712919: call dword ptr [0x7cc044] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0071291F: mov esi, eax */
    /* test edi, edi */ /* 0x00712921: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071293C; /* 0x00712923: je 0x71293c */
L_00712925:
    PUSH32(esp, 2); /* 0x00712925: push 2 */
    PUSH32(esp, esi); /* 0x00712927: push esi */
    PUSH32(esp, edi); /* 0x00712928: push edi */
    PUSH32(esp, edi); /* 0x00712929: push edi */
    RECOMP_ICALL(MEM32(0x7CC09C)); /* 0x0071292A: call dword ptr [0x7cc09c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x00712930: push esi */
    RECOMP_ICALL(MEM32(0x7CC07C)); /* 0x00712931: call dword ptr [0x7cc07c] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x00712937: pop edi */
    esi = POP32_VAL(esp); /* 0x00712938: pop esi */
    ebx = POP32_VAL(esp); /* 0x00712939: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0071293A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071293B: ret  */
L_0071293C:
    MEM32(ebx) = esi; /* 0x0071293C: mov dword ptr [ebx], esi */
L_0071293E:
    edi = POP32_VAL(esp); /* 0x0071293E: pop edi */
    esi = POP32_VAL(esp); /* 0x0071293F: pop esi */
    ebx = POP32_VAL(esp); /* 0x00712940: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00712941: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00712942: ret  */
    RECOMP_REGS_OUT();
}

void sub_00712950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00712950u);

L_00712950:
    PUSH32(esp, ebp); /* 0x00712950: push ebp */
    ebp = esp; /* 0x00712951: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00712953: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x00712956: push ecx */
    PUSH32(esp, ebx); /* 0x00712957: push ebx */
    PUSH32(esp, esi); /* 0x00712958: push esi */
    PUSH32(esp, edi); /* 0x00712959: push edi */
    edi = MEM32(ebp + 0x8); /* 0x0071295A: mov edi, dword ptr [ebp + 8] */
    MEM32(esp + 0xC) = 0; /* 0x0071295D: mov dword ptr [esp + 0xc], 0 */
    /* test edi, edi */ /* 0x00712965: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007129E7; /* 0x00712967: je 0x7129e7 */
L_00712969:
    esi = MEM32(ebp + 0xC); /* 0x00712969: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x0071296C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007129E7; /* 0x0071296E: je 0x7129e7 */
L_00712970:
    eax = MEM32(esi + 0x4); /* 0x00712970: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(eax + 0x18), 0 */ /* 0x00712973: cmp dword ptr [eax + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712981; /* 0x00712977: jne 0x712981 */
L_00712979:
    eax = MEM32(ebp + 0x10); /* 0x00712979: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax), 3 */ /* 0x0071297C: cmp dword ptr [eax], 3 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007129E7; /* 0x0071297F: jne 0x7129e7 */
L_00712981:
    ecx = MEM32(edi); /* 0x00712981: mov ecx, dword ptr [edi] */
    eax = MEM32(esi + 0x8); /* 0x00712983: mov eax, dword ptr [esi + 8] */
    /* cmp eax, MEM32(ecx + 0x18) */ /* 0x00712986: cmp eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007129E7; /* 0x00712989: jne 0x7129e7 */
L_0071298B:
    eax = MEM32(esi + 0xC); /* 0x0071298B: mov eax, dword ptr [esi + 0xc] */
    /* cmp eax, MEM32(ecx + 0x1C) */ /* 0x0071298E: cmp eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007129E7; /* 0x00712991: jne 0x7129e7 */
L_00712993:
    ebx = MEM32(edi + 0x18); /* 0x00712993: mov ebx, dword ptr [edi + 0x18] */
    /* cmp MEM32(ebx), 0 */ /* 0x00712996: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007129A2; /* 0x00712999: je 0x7129a2 */
L_0071299B:
    ecx = ebx; /* 0x0071299B: mov ecx, ebx */
    RECOMP_CALL(sub_0074B090); /* 0x0071299D: call 0x74b090 */
    RECOMP_FLAGS_IN();
L_007129A2:
    eax = MEM32(ebp + 0x10); /* 0x007129A2: mov eax, dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x007129A5: mov ecx, esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x007129A7: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x007129AA: push dword ptr [eax] */
    RECOMP_CALL(sub_0074AFA0); /* 0x007129AC: call 0x74afa0 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x14; /* 0x007129B1: lea ecx, [esp + 0x14] */
    MEM32(ebx) = eax; /* 0x007129B5: mov dword ptr [ebx], eax */
    PUSH32(esp, ecx); /* 0x007129B7: push ecx */
    edx = 0x007128F0u; /* 0x007129B8: mov edx, 0x7128f0 */
    ecx = eax; /* 0x007129BD: mov ecx, eax */
    RECOMP_CALL(sub_0074B040); /* 0x007129BF: call 0x74b040 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x007129C4: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007129C6: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(eax + 0x90); /* 0x007129C9: mov eax, dword ptr [eax + 0x90] */
    PUSH32(esp, 1); /* 0x007129CF: push 1 */
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x007129D1: push dword ptr [esp + 0x10] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x007129D5: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x7CC718)); /* 0x007129D8: call dword ptr [0x7cc718] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007129DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x007129E0: pop edi */
    esi = POP32_VAL(esp); /* 0x007129E1: pop esi */
    ebx = POP32_VAL(esp); /* 0x007129E2: pop ebx */
    esp = ebp; /* 0x007129E3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007129E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007129E6: ret  */
L_007129E7:
    edi = POP32_VAL(esp); /* 0x007129E7: pop edi */
    esi = POP32_VAL(esp); /* 0x007129E8: pop esi */
    eax = 0xFFFFFFFEu; /* 0x007129E9: mov eax, 0xfffffffe */
    ebx = POP32_VAL(esp); /* 0x007129EE: pop ebx */
    esp = ebp; /* 0x007129EF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007129F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007129F2: ret  */
    RECOMP_REGS_OUT();
}

void sub_00712A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00712A00u);

L_00712A00:
    PUSH32(esp, ebp); /* 0x00712A00: push ebp */
    ebp = esp; /* 0x00712A01: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00712A03: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00712A04: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x00712A07: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00712A11; /* 0x00712A09: jne 0x712a11 */
L_00712A0B:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00712A0B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00712A0E: pop esi */
    ebp = POP32_VAL(esp); /* 0x00712A0F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00712A10: ret  */
L_00712A11:
    eax = MEM32(esi + 0x80); /* 0x00712A11: mov eax, dword ptr [esi + 0x80] */
    ecx = MEM32(eax + 0x18); /* 0x00712A17: mov ecx, dword ptr [eax + 0x18] */
    /* test ecx, ecx */ /* 0x00712A1A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712A0B; /* 0x00712A1C: je 0x712a0b */
L_00712A1E:
    /* cmp MEM32(ecx), 0 */ /* 0x00712A1E: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712A28; /* 0x00712A21: je 0x712a28 */
L_00712A23:
    RECOMP_CALL(sub_0074B090); /* 0x00712A23: call 0x74b090 */
    RECOMP_FLAGS_IN();
L_00712A28:
    ecx = MEM32(esi + 0x80); /* 0x00712A28: mov ecx, dword ptr [esi + 0x80] */
    /* cmp MEM32(ecx + 0x14), 1 */ /* 0x00712A2E: cmp dword ptr [ecx + 0x14], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712A5A; /* 0x00712A32: jne 0x712a5a */
L_00712A34:
    eax = MEM32(esi + 0x10); /* 0x00712A34: mov eax, dword ptr [esi + 0x10] */
    MEM32(ecx + 0x4) = eax; /* 0x00712A37: mov dword ptr [ecx + 4], eax */
    ecx = esi; /* 0x00712A3A: mov ecx, esi */
    edx = MEM32(esi + 0x80); /* 0x00712A3C: mov edx, dword ptr [esi + 0x80] */
    eax = MEM32(esi + 0x14); /* 0x00712A42: mov eax, dword ptr [esi + 0x14] */
    PUSH32(esp, 0xFFFFFC18u); /* 0x00712A45: push 0xfffffc18 */
    MEM32(edx + 0x8) = eax; /* 0x00712A4A: mov dword ptr [edx + 8], eax */
    edx = 0xFFFFFC18u; /* 0x00712A4D: mov edx, 0xfffffc18 */
    RECOMP_CALL(sub_006EBA70); /* 0x00712A52: call 0x6eba70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00712A57: add esp, 4 */
    _flag_k = FK_ADD;
L_00712A5A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00712A5A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00712A5C: pop esi */
    ebp = POP32_VAL(esp); /* 0x00712A5D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00712A5E: ret  */
    RECOMP_REGS_OUT();
}

void sub_00712A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00712A60u);

L_00712A60:
    PUSH32(esp, ebp); /* 0x00712A60: push ebp */
    ebp = esp; /* 0x00712A61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00712A63: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00712A66: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00712A69: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x00712A6A: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x00712A6D: push esi */
    PUSH32(esp, edi); /* 0x00712A6E: push edi */
    MEM32(esp + 0x10) = 0; /* 0x00712A6F: mov dword ptr [esp + 0x10], 0 */
    /* test MEM8(ebx), 2 */ /* 0x00712A77: test byte ptr [ebx], 2 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712A9C; /* 0x00712A7A: je 0x712a9c */
L_00712A7C:
    /* cmp MEM32(ebx + 0x1C), 0 */ /* 0x00712A7C: cmp dword ptr [ebx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712A91; /* 0x00712A80: jne 0x712a91 */
L_00712A82:
    edx = 1; /* 0x00712A82: mov edx, 1 */
    ecx = ebx; /* 0x00712A87: mov ecx, ebx */
    RECOMP_CALL(sub_007092B0); /* 0x00712A89: call 0x7092b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebx) | 2)); _flag_b = (uint32_t)((MEM32(ebx) | 2));
    MEM32(ebx) = MEM32(ebx) | 2; /* 0x00712A8E: or dword ptr [ebx], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00712A91:
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) + 1; /* 0x00712A91: inc dword ptr [ebx + 0x1c] */
    _flag_k = FK_INC;
    MEM32(esp + 0x10) = 1; /* 0x00712A94: mov dword ptr [esp + 0x10], 1 */
L_00712A9C:
    edi = MEM32(ebp + 0x8); /* 0x00712A9C: mov edi, dword ptr [ebp + 8] */
    MEM32(esp + 0x14) = 0; /* 0x00712A9F: mov dword ptr [esp + 0x14], 0 */
    /* test MEM8(edi), 2 */ /* 0x00712AA7: test byte ptr [edi], 2 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712ACC; /* 0x00712AAA: je 0x712acc */
L_00712AAC:
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x00712AAC: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712AC1; /* 0x00712AB0: jne 0x712ac1 */
L_00712AB2:
    edx = 1; /* 0x00712AB2: mov edx, 1 */
    ecx = edi; /* 0x00712AB7: mov ecx, edi */
    RECOMP_CALL(sub_007092B0); /* 0x00712AB9: call 0x7092b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x00712ABE: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00712AC1:
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) + 1; /* 0x00712AC1: inc dword ptr [edi + 0x1c] */
    _flag_k = FK_INC;
    MEM32(esp + 0x14) = 1; /* 0x00712AC4: mov dword ptr [esp + 0x14], 1 */
L_00712ACC:
    eax = MEM32(ebp + 0xC); /* 0x00712ACC: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x00712ACF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712B86; /* 0x00712AD1: je 0x712b86 */
L_00712AD7:
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x00712AD7: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_00712B86; /* 0x00712ADB: jle 0x712b86 */
L_00712AE1:
    /* cmp MEM32(eax + 0xC), 0 */ /* 0x00712AE1: cmp dword ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_00712B86; /* 0x00712AE5: jle 0x712b86 */
L_00712AEB:
    ebx = MEM32(edi + 0x34); /* 0x00712AEB: mov ebx, dword ptr [edi + 0x34] */
    edx = (uint32_t)MEM16(eax + 0x4); /* 0x00712AEE: movzx edx, word ptr [eax + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x00712AF2: add ebx, 0x10 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(eax); /* 0x00712AF5: movzx eax, word ptr [eax] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(edi + 0x10)); /* 0x00712AF8: imul edx, dword ptr [edi + 0x10] */
    PUSH32(esp, ebx); /* 0x00712AFC: push ebx */
    esi = MEM32(ebx + 0x28); /* 0x00712AFD: mov esi, dword ptr [ebx + 0x28] */
    ecx = (uint32_t)MEM8(esi + 0x9); /* 0x00712B00: movzx ecx, byte ptr [esi + 9] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x00712B04: imul ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00712B07: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x00712B09: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi + 0x14); /* 0x00712B0C: add edx, dword ptr [edi + 0x14] */
    _flag_k = FK_ADD;
    MEM32(ebx) = edx; /* 0x00712B0F: mov dword ptr [ebx], edx */
    eax = MEM32(ecx + 0x8); /* 0x00712B11: mov eax, dword ptr [ecx + 8] */
    MEM32(ebx + 0x4) = eax; /* 0x00712B14: mov dword ptr [ebx + 4], eax */
    eax = MEM32(ecx + 0xC); /* 0x00712B17: mov eax, dword ptr [ecx + 0xc] */
    MEM32(ebx + 0x8) = eax; /* 0x00712B1A: mov dword ptr [ebx + 8], eax */
    ecx = MEM32(edi + 0x10); /* 0x00712B1D: mov ecx, dword ptr [edi + 0x10] */
    edi = MEM32(ebx + 0x2C); /* 0x00712B20: mov edi, dword ptr [ebx + 0x2c] */
    MEM32(ebx + 0xC) = ecx; /* 0x00712B23: mov dword ptr [ebx + 0xc], ecx */
    eax = (uint32_t)MEM8(esi + 0x9); /* 0x00712B26: movzx eax, byte ptr [esi + 9] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x4)); /* 0x00712B2A: imul eax, dword ptr [ebx + 4] */
    esi = MEM32(ebp + 0x14); /* 0x00712B2E: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x00712B31: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x00712B33: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x10) = ecx; /* 0x00712B36: mov dword ptr [ebx + 0x10], ecx */
    edx = (uint32_t)MEM16(esi + 0x4); /* 0x00712B39: movzx edx, word ptr [esi + 4] */
    ecx = (uint32_t)MEM8(edi + 0x9); /* 0x00712B3D: movzx ecx, byte ptr [edi + 9] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 0x10)); /* 0x00712B41: imul edx, dword ptr [eax + 0x10] */
    eax = (uint32_t)MEM16(esi); /* 0x00712B45: movzx eax, word ptr [esi] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x00712B48: imul ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00712B4B: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x10); /* 0x00712B4D: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + 0x14); /* 0x00712B50: add edx, dword ptr [ecx + 0x14] */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x14) = edx; /* 0x00712B53: mov dword ptr [ebx + 0x14], edx */
    eax = MEM32(esi + 0x8); /* 0x00712B56: mov eax, dword ptr [esi + 8] */
    MEM32(ebx + 0x18) = eax; /* 0x00712B59: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(esi + 0xC); /* 0x00712B5C: mov eax, dword ptr [esi + 0xc] */
    MEM32(ebx + 0x1C) = eax; /* 0x00712B5F: mov dword ptr [ebx + 0x1c], eax */
    ecx = MEM32(ecx + 0x10); /* 0x00712B62: mov ecx, dword ptr [ecx + 0x10] */
    MEM32(ebx + 0x20) = ecx; /* 0x00712B65: mov dword ptr [ebx + 0x20], ecx */
    eax = (uint32_t)MEM8(edi + 0x9); /* 0x00712B68: movzx eax, byte ptr [edi + 9] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x18)); /* 0x00712B6C: imul eax, dword ptr [ebx + 0x18] */
    edi = MEM32(ebp + 0x8); /* 0x00712B70: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x00712B73: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebx + 0x24) = ecx; /* 0x00712B75: mov dword ptr [ebx + 0x24], ecx */
    eax = MEM32(edi + 0x34); /* 0x00712B78: mov eax, dword ptr [edi + 0x34] */
    eax = MEM32(eax + 0xC); /* 0x00712B7B: mov eax, dword ptr [eax + 0xc] */
    RECOMP_ICALL(eax); /* 0x00712B7E: call eax */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x10); /* 0x00712B80: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00712B83: add esp, 4 */
    _flag_k = FK_ADD;
L_00712B86:
    /* cmp MEM32(esp + 0x10), 0 */ /* 0x00712B86: cmp dword ptr [esp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712BAE; /* 0x00712B8B: je 0x712bae */
L_00712B8D:
    eax = MEM32(ebx + 0x1C); /* 0x00712B8D: mov eax, dword ptr [ebx + 0x1c] */
    /* test eax, eax */ /* 0x00712B90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712BAE; /* 0x00712B92: je 0x712bae */
L_00712B94:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00712B94: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebx + 0x1C) = eax; /* 0x00712B95: mov dword ptr [ebx + 0x1c], eax */
    /* test eax, eax */ /* 0x00712B98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00712BAE; /* 0x00712B9A: jg 0x712bae */
L_00712B9C:
    eax = MEM32(ebx); /* 0x00712B9C: mov eax, dword ptr [ebx] */
    /* test LO8(eax), 2 */ /* 0x00712B9E: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712BAE; /* 0x00712BA0: je 0x712bae */
L_00712BA2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x00712BA2: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x00712BA5: mov ecx, ebx */
    MEM32(ebx) = eax; /* 0x00712BA7: mov dword ptr [ebx], eax */
    RECOMP_CALL(sub_007090D0); /* 0x00712BA9: call 0x7090d0 */
    RECOMP_FLAGS_IN();
L_00712BAE:
    /* cmp MEM32(esp + 0x14), 0 */ /* 0x00712BAE: cmp dword ptr [esp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712BD6; /* 0x00712BB3: je 0x712bd6 */
L_00712BB5:
    eax = MEM32(edi + 0x1C); /* 0x00712BB5: mov eax, dword ptr [edi + 0x1c] */
    /* test eax, eax */ /* 0x00712BB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712BD6; /* 0x00712BBA: je 0x712bd6 */
L_00712BBC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00712BBC: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi + 0x1C) = eax; /* 0x00712BBD: mov dword ptr [edi + 0x1c], eax */
    /* test eax, eax */ /* 0x00712BC0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00712BD6; /* 0x00712BC2: jg 0x712bd6 */
L_00712BC4:
    eax = MEM32(edi); /* 0x00712BC4: mov eax, dword ptr [edi] */
    /* test LO8(eax), 2 */ /* 0x00712BC6: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712BD6; /* 0x00712BC8: je 0x712bd6 */
L_00712BCA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x00712BCA: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x00712BCD: mov ecx, edi */
    MEM32(edi) = eax; /* 0x00712BCF: mov dword ptr [edi], eax */
    RECOMP_CALL(sub_007090D0); /* 0x00712BD1: call 0x7090d0 */
    RECOMP_FLAGS_IN();
L_00712BD6:
    edi = POP32_VAL(esp); /* 0x00712BD6: pop edi */
    esi = POP32_VAL(esp); /* 0x00712BD7: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00712BD8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00712BDA: pop ebx */
    esp = ebp; /* 0x00712BDB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00712BDD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00712BDE: ret  */
    RECOMP_REGS_OUT();
}

void sub_00712BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00712BE0u);

L_00712BE0:
    PUSH32(esp, ebp); /* 0x00712BE0: push ebp */
    ebp = esp; /* 0x00712BE1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00712BE3: sub esp, 8 */
    _flag_k = FK_CMP;
    /* cmp MEM32(0x863530), 0xFFFFFFFFu */ /* 0x00712BE6: cmp dword ptr [0x863530], -1 */
    _flag_a = (uint32_t)(MEM32(0x863530)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edx; /* 0x00712BED: mov eax, edx */
    PUSH32(esp, ebx); /* 0x00712BEF: push ebx */
    PUSH32(esp, esi); /* 0x00712BF0: push esi */
    ebx = ecx; /* 0x00712BF1: mov ebx, ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x00712BF3: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, edi); /* 0x00712BF6: push edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x00712BF7: mov dword ptr [ebp - 4], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712C80; /* 0x00712BFA: jne 0x712c80 */
L_00712C00:
    ecx = 0x00807C6Cu; /* 0x00712C00: mov ecx, 0x807c6c */
    RECOMP_CALL(sub_006FBC10); /* 0x00712C05: call 0x6fbc10 */
    RECOMP_FLAGS_IN();
    MEM32(0x863530) = 0; /* 0x00712C0A: mov dword ptr [0x863530], 0 */
    /* test eax, eax */ /* 0x00712C14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712C2D; /* 0x00712C16: je 0x712c2d */
L_00712C18:
    PUSH32(esp, 0x00863530u); /* 0x00712C18: push 0x863530 */
    PUSH32(esp, 0x007E1DECu); /* 0x00712C1D: push 0x7e1dec */
    PUSH32(esp, eax); /* 0x00712C22: push eax */
    RECOMP_CALL(sub_006F2E20); /* 0x00712C23: call 0x6f2e20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00712C28: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_00712C7D; /* 0x00712C2B: jmp 0x712c7d */
L_00712C2D:
    RECOMP_CALL(sub_006F3BD0); /* 0x00712C2D: call 0x6f3bd0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), 4 */ /* 0x00712C32: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712C3D; /* 0x00712C34: je 0x712c3d */
L_00712C36:
    _flag_a = (uint32_t)((MEM32(0x863530) | 1)); _flag_b = (uint32_t)((MEM32(0x863530) | 1));
    MEM32(0x863530) = MEM32(0x863530) | 1; /* 0x00712C36: or dword ptr [0x863530], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00712C3D:
    RECOMP_CALL(sub_006F3BD0); /* 0x00712C3D: call 0x6f3bd0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), 8 */ /* 0x00712C42: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712C4D; /* 0x00712C44: je 0x712c4d */
L_00712C46:
    _flag_a = (uint32_t)((MEM32(0x863530) | 2)); _flag_b = (uint32_t)((MEM32(0x863530) | 2));
    MEM32(0x863530) = MEM32(0x863530) | 2; /* 0x00712C46: or dword ptr [0x863530], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00712C4D:
    RECOMP_CALL(sub_006F3BD0); /* 0x00712C4D: call 0x6f3bd0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), 0x10u */ /* 0x00712C52: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712C5D; /* 0x00712C54: je 0x712c5d */
L_00712C56:
    _flag_a = (uint32_t)((MEM32(0x863530) | 4)); _flag_b = (uint32_t)((MEM32(0x863530) | 4));
    MEM32(0x863530) = MEM32(0x863530) | 4; /* 0x00712C56: or dword ptr [0x863530], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00712C5D:
    RECOMP_CALL(sub_006F3BD0); /* 0x00712C5D: call 0x6f3bd0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), 0x20u */ /* 0x00712C62: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712C6D; /* 0x00712C64: je 0x712c6d */
L_00712C66:
    _flag_a = (uint32_t)((MEM32(0x863530) | 8)); _flag_b = (uint32_t)((MEM32(0x863530) | 8));
    MEM32(0x863530) = MEM32(0x863530) | 8; /* 0x00712C66: or dword ptr [0x863530], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00712C6D:
    RECOMP_CALL(sub_006F3BD0); /* 0x00712C6D: call 0x6f3bd0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), 2 */ /* 0x00712C72: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712C7D; /* 0x00712C74: je 0x712c7d */
L_00712C76:
    _flag_a = (uint32_t)((MEM32(0x863530) | 0x10u)); _flag_b = (uint32_t)((MEM32(0x863530) | 0x10u));
    MEM32(0x863530) = MEM32(0x863530) | 0x10u; /* 0x00712C76: or dword ptr [0x863530], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00712C7D:
    eax = MEM32(ebp + (-0x8)); /* 0x00712C7D: mov eax, dword ptr [ebp - 8] */
L_00712C80:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00712C80: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x864020), esi */ /* 0x00712C82: cmp dword ptr [0x864020], esi */
    _flag_a = (uint32_t)(MEM32(0x864020)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712D1E; /* 0x00712C88: je 0x712d1e */
L_00712C8E:
    ecx = MEM32(ebp + 0x8); /* 0x00712C8E: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00712C91: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_00712C93:
    /* cmp ebx, MEM32(edx + 0x864010) */ /* 0x00712C93: cmp ebx, dword ptr [edx + 0x864010] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edx + 0x864010));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712CF8; /* 0x00712C99: jne 0x712cf8 */
L_00712C9B:
    /* cmp eax, MEM32(edx + 0x864014) */ /* 0x00712C9B: cmp eax, dword ptr [edx + 0x864014] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x864014));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712CF8; /* 0x00712CA1: jne 0x712cf8 */
L_00712CA3:
    ebx = MEM32(edx + 0x864018); /* 0x00712CA3: mov ebx, dword ptr [edx + 0x864018] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x00712CA9: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x00712CAC: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x00712CAE: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x00712CB0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x00712CB2: mov ecx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712CF5; /* 0x00712CB5: jne 0x712cf5 */
L_00712CB7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    ecx = ecx & 0x70u; /* 0x00712CB7: and ecx, 0x70 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x00712CBA: mov edi, ebx */
    eax = ebx; /* 0x00712CBC: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x00712CBE: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x00712CC0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x00712CC2: mov ecx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712CF5; /* 0x00712CC5: jne 0x712cf5 */
L_00712CC7:
    eax = ecx; /* 0x00712CC7: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    eax = eax & 0x100u; /* 0x00712CC9: and eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    ebx = ebx & eax; /* 0x00712CCE: and ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, eax */ /* 0x00712CD0: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712CF5; /* 0x00712CD2: jne 0x712cf5 */
L_00712CD4:
    eax = ecx; /* 0x00712CD4: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    eax = eax & 0x200u; /* 0x00712CD6: and eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x00712CDB: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, eax */ /* 0x00712CDD: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712CF5; /* 0x00712CDF: jne 0x712cf5 */
L_00712CE1:
    ecx = MEM32(edx + 0x86401C); /* 0x00712CE1: mov ecx, dword ptr [edx + 0x86401c] */
    eax = MEM32(0x863530); /* 0x00712CE7: mov eax, dword ptr [0x863530] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x00712CEC: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x00712CEE: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712D0D; /* 0x00712CF0: je 0x712d0d */
L_00712CF2:
    ecx = MEM32(ebp + 0x8); /* 0x00712CF2: mov ecx, dword ptr [ebp + 8] */
L_00712CF5:
    ebx = MEM32(ebp + (-0x4)); /* 0x00712CF5: mov ebx, dword ptr [ebp - 4] */
L_00712CF8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00712CF8: inc esi */
    _flag_k = FK_INC;
    edx = esi + esi * 4; /* 0x00712CF9: lea edx, [esi + esi*4] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x00712CFC: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x00712CFC: shl edx, 2 */
    /* cmp MEM32(edx + 0x864020), 0 */ /* 0x00712CFF: cmp dword ptr [edx + 0x864020], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x864020)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712D1E; /* 0x00712D06: je 0x712d1e */
L_00712D08:
    eax = MEM32(ebp + (-0x8)); /* 0x00712D08: mov eax, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_00712C93; /* 0x00712D0B: jmp 0x712c93 */
L_00712D0D:
    edi = POP32_VAL(esp); /* 0x00712D0D: pop edi */
    eax = esi + esi * 4; /* 0x00712D0E: lea eax, [esi + esi*4] */
    eax = MEM32(eax * 4 + 0x864020); /* 0x00712D11: mov eax, dword ptr [eax*4 + 0x864020] */
    esi = POP32_VAL(esp); /* 0x00712D18: pop esi */
    ebx = POP32_VAL(esp); /* 0x00712D19: pop ebx */
    esp = ebp; /* 0x00712D1A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00712D1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00712D1D: ret  */
L_00712D1E:
    edi = POP32_VAL(esp); /* 0x00712D1E: pop edi */
    esi = POP32_VAL(esp); /* 0x00712D1F: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00712D20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00712D22: pop ebx */
    esp = ebp; /* 0x00712D23: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00712D25: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00712D26: ret  */
    RECOMP_REGS_OUT();
}

void sub_00712D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00712D30u);

L_00712D30:
    PUSH32(esp, ebx); /* 0x00712D30: push ebx */
    PUSH32(esp, esi); /* 0x00712D31: push esi */
    esi = ecx; /* 0x00712D32: mov esi, ecx */
    PUSH32(esp, edi); /* 0x00712D34: push edi */
    /* test MEM8(esi), 2 */ /* 0x00712D35: test byte ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(esi + 0x34); /* 0x00712D38: mov edi, dword ptr [esi + 0x34] */
    ebx = MEM32(edi); /* 0x00712D3B: mov ebx, dword ptr [edi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712D49; /* 0x00712D3D: je 0x712d49 */
L_00712D3F:
    edx = 1; /* 0x00712D3F: mov edx, 1 */
    RECOMP_CALL(sub_007092B0); /* 0x00712D44: call 0x7092b0 */
    RECOMP_FLAGS_IN();
L_00712D49:
    /* test MEM32(edi + 0x44), 0x1000u */ /* 0x00712D49: test dword ptr [edi + 0x44], 0x1000 */
    _flag_a = (uint32_t)(MEM32(edi + 0x44)); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x8) = 0x00712A60u; /* 0x00712D50: mov dword ptr [edi + 8], 0x712a60 */
    eax = MEM32(esi + 0x4); /* 0x00712D57: mov eax, dword ptr [esi + 4] */
    MEM32(edi + 0x38) = eax; /* 0x00712D5A: mov dword ptr [edi + 0x38], eax */
    eax = MEM32(esi + 0x10); /* 0x00712D5D: mov eax, dword ptr [esi + 0x10] */
    MEM32(edi + 0x1C) = eax; /* 0x00712D60: mov dword ptr [edi + 0x1c], eax */
    eax = MEM32(ebx + 0x4); /* 0x00712D63: mov eax, dword ptr [ebx + 4] */
    MEM32(edi + 0x3C) = eax; /* 0x00712D66: mov dword ptr [edi + 0x3c], eax */
    eax = MEM32(ebx + 0x10); /* 0x00712D69: mov eax, dword ptr [ebx + 0x10] */
    MEM32(edi + 0x30) = eax; /* 0x00712D6C: mov dword ptr [edi + 0x30], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712D80; /* 0x00712D6F: je 0x712d80 */
L_00712D71:
    ecx = esi; /* 0x00712D71: mov ecx, esi */
    RECOMP_CALL(sub_007090D0); /* 0x00712D73: call 0x7090d0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00712D78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712EEE; /* 0x00712D7A: je 0x712eee */
L_00712D80:
    /* cmp MEM32(edi + 0x4), 0 */ /* 0x00712D80: cmp dword ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712D99; /* 0x00712D84: je 0x712d99 */
L_00712D86:
    /* test MEM32(edi + 0x44), 0xFFFFEFFFu */ /* 0x00712D86: test dword ptr [edi + 0x44], 0xffffefff */
    _flag_a = (uint32_t)(MEM32(edi + 0x44)); _flag_b = (uint32_t)(0xFFFFEFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00712D99; /* 0x00712D8D: jne 0x712d99 */
L_00712D8F:
    ecx = 0x0074B1F0u; /* 0x00712D8F: mov ecx, 0x74b1f0 */
    goto L_00712E22; /* 0x00712D94: jmp 0x712e22 */
L_00712D99:
    edx = MEM32(esi + 0x4); /* 0x00712D99: mov edx, dword ptr [esi + 4] */
    /* cmp MEM8(edx + 0x8), 8 */ /* 0x00712D9C: cmp byte ptr [edx + 8], 8 */
    _flag_a = (uint32_t)(MEM8(edx + 0x8)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_00712DD4; /* 0x00712DA0: jae 0x712dd4 */
L_00712DA2:
    ecx = MEM32(edx); /* 0x00712DA2: mov ecx, dword ptr [edx] */
    /* test ecx, ecx */ /* 0x00712DA4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712DB6; /* 0x00712DA6: je 0x712db6 */
L_00712DA8:
    eax = ecx; /* 0x00712DA8: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x00712DAA: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x00712DAF: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712DD4; /* 0x00712DB4: jne 0x712dd4 */
L_00712DB6:
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x00712DB6: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x00712DB6: shr ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x00712DB9: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 1 */ /* 0x00712DBC: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712DCB; /* 0x00712DBF: je 0x712dcb */
L_00712DC1:
    /* cmp ecx, 2 */ /* 0x00712DC1: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712DCB; /* 0x00712DC4: je 0x712dcb */
L_00712DC6:
    /* cmp ecx, 3 */ /* 0x00712DC6: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712DD4; /* 0x00712DC9: jne 0x712dd4 */
L_00712DCB:
    ecx = esi; /* 0x00712DCB: mov ecx, esi */
    RECOMP_CALL(sub_00754BB0); /* 0x00712DCD: call 0x754bb0 */
    RECOMP_FLAGS_IN();
    goto L_00712E20; /* 0x00712DD2: jmp 0x712e20 */
L_00712DD4:
    /* cmp MEM8(edx + 0x9), 1 */ /* 0x00712DD4: cmp byte ptr [edx + 9], 1 */
    _flag_a = (uint32_t)(MEM8(edx + 0x9)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712E0C; /* 0x00712DD8: jne 0x712e0c */
L_00712DDA:
    ecx = MEM32(edx); /* 0x00712DDA: mov ecx, dword ptr [edx] */
    /* test ecx, ecx */ /* 0x00712DDC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712DEE; /* 0x00712DDE: je 0x712dee */
L_00712DE0:
    eax = ecx; /* 0x00712DE0: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x00712DE2: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x00712DE7: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712E0C; /* 0x00712DEC: jne 0x712e0c */
L_00712DEE:
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x00712DEE: shr ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 24u; /* 0x00712DEE: shr ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x00712DF1: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 1 */ /* 0x00712DF4: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712E03; /* 0x00712DF7: je 0x712e03 */
L_00712DF9:
    /* cmp ecx, 2 */ /* 0x00712DF9: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712E03; /* 0x00712DFC: je 0x712e03 */
L_00712DFE:
    /* cmp ecx, 3 */ /* 0x00712DFE: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712E0C; /* 0x00712E01: jne 0x712e0c */
L_00712E03:
    ecx = esi; /* 0x00712E03: mov ecx, esi */
    RECOMP_CALL(sub_007578A0); /* 0x00712E05: call 0x7578a0 */
    RECOMP_FLAGS_IN();
    goto L_00712E20; /* 0x00712E0A: jmp 0x712e20 */
L_00712E0C:
    /* test MEM8(edi + 0x44), 0x10u */ /* 0x00712E0C: test byte ptr [edi + 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM8(edi + 0x44)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = esi; /* 0x00712E10: mov ecx, esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712E1B; /* 0x00712E12: je 0x712e1b */
L_00712E14:
    RECOMP_CALL(sub_0075EE80); /* 0x00712E14: call 0x75ee80 */
    RECOMP_FLAGS_IN();
    goto L_00712E20; /* 0x00712E19: jmp 0x712e20 */
L_00712E1B:
    RECOMP_CALL(sub_00753C80); /* 0x00712E1B: call 0x753c80 */
    RECOMP_FLAGS_IN();
L_00712E20:
    ecx = eax; /* 0x00712E20: mov ecx, eax */
L_00712E22:
    /* test ecx, ecx */ /* 0x00712E22: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00712ECF; /* 0x00712E24: jne 0x712ecf */
L_00712E2A:
    eax = MEM32(esi + 0x4); /* 0x00712E2A: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax); /* 0x00712E2D: mov ecx, dword ptr [eax] */
    eax = MEM32(ebx + 0x4); /* 0x00712E2F: mov eax, dword ptr [ebx + 4] */
    PUSH32(esp, ecx); /* 0x00712E32: push ecx */
    PUSH32(esp, MEM32(edi + 0x44)); /* 0x00712E33: push dword ptr [edi + 0x44] */
    edx = MEM32(eax); /* 0x00712E36: mov edx, dword ptr [eax] */
    RECOMP_CALL(sub_00712BE0); /* 0x00712E38: call 0x712be0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00712E3D: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00712E3F: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x00712E42: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00712ECF; /* 0x00712E44: jne 0x712ecf */
L_00712E4A:
    eax = MEM32(esi + 0x4); /* 0x00712E4A: mov eax, dword ptr [esi + 4] */
    esi = MEM32(eax); /* 0x00712E4D: mov esi, dword ptr [eax] */
    eax = MEM32(ebx + 0x4); /* 0x00712E4F: mov eax, dword ptr [ebx + 4] */
    edx = MEM32(eax); /* 0x00712E52: mov edx, dword ptr [eax] */
    /* test esi, esi */ /* 0x00712E54: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712E66; /* 0x00712E56: je 0x712e66 */
L_00712E58:
    eax = esi; /* 0x00712E58: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x00712E5A: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x00712E5F: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712E7D; /* 0x00712E64: jne 0x712e7d */
L_00712E66:
    eax = esi; /* 0x00712E66: mov eax, esi */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x00712E68: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x00712E68: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x00712E6B: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x00712E6E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712ECF; /* 0x00712E71: je 0x712ecf */
L_00712E73:
    /* cmp eax, 2 */ /* 0x00712E73: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712ECF; /* 0x00712E76: je 0x712ecf */
L_00712E78:
    /* cmp eax, 3 */ /* 0x00712E78: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712ECF; /* 0x00712E7B: je 0x712ecf */
L_00712E7D:
    /* test esi, esi */ /* 0x00712E7D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712E8F; /* 0x00712E7F: je 0x712e8f */
L_00712E81:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xF0000000u);
    esi = esi & 0xF0000000u; /* 0x00712E81: and esi, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 0x10000000u */ /* 0x00712E87: cmp esi, 0x10000000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712ECF; /* 0x00712E8D: jne 0x712ecf */
L_00712E8F:
    /* test edx, edx */ /* 0x00712E8F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712EA1; /* 0x00712E91: je 0x712ea1 */
L_00712E93:
    eax = edx; /* 0x00712E93: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0000000u);
    eax = eax & 0xF0000000u; /* 0x00712E95: and eax, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x10000000u */ /* 0x00712E9A: cmp eax, 0x10000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712EB8; /* 0x00712E9F: jne 0x712eb8 */
L_00712EA1:
    eax = edx; /* 0x00712EA1: mov eax, edx */
    if (24u) _cf = (((eax) >> 23) & 1u); /* 0x00712EA3: shr eax, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((eax >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 24u; /* 0x00712EA3: shr eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x00712EA6: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x00712EA9: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712ECF; /* 0x00712EAC: je 0x712ecf */
L_00712EAE:
    /* cmp eax, 2 */ /* 0x00712EAE: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712ECF; /* 0x00712EB1: je 0x712ecf */
L_00712EB3:
    /* cmp eax, 3 */ /* 0x00712EB3: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00712ECF; /* 0x00712EB6: je 0x712ecf */
L_00712EB8:
    /* test edx, edx */ /* 0x00712EB8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712ECA; /* 0x00712EBA: je 0x712eca */
L_00712EBC:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xF0000000u);
    edx = edx & 0xF0000000u; /* 0x00712EBC: and edx, 0xf0000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x10000000u */ /* 0x00712EC2: cmp edx, 0x10000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712ECF; /* 0x00712EC8: jne 0x712ecf */
L_00712ECA:
    ecx = 0x00757910u; /* 0x00712ECA: mov ecx, 0x757910 */
L_00712ECF:
    MEM32(edi + 0xC) = ecx; /* 0x00712ECF: mov dword ptr [edi + 0xc], ecx */
    /* test ecx, ecx */ /* 0x00712ED2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00712EEE; /* 0x00712ED4: jne 0x712eee */
L_00712ED6:
    ecx = edi; /* 0x00712ED6: mov ecx, edi */
    RECOMP_CALL(sub_006FB030); /* 0x00712ED8: call 0x6fb030 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00807C4Cu); /* 0x00712EDD: push 0x807c4c */
    RECOMP_CALL(sub_006EDB70); /* 0x00712EE2: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00712EE7: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00712EEA: pop edi */
    esi = POP32_VAL(esp); /* 0x00712EEB: pop esi */
    ebx = POP32_VAL(esp); /* 0x00712EEC: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00712EED: ret  */
L_00712EEE:
    edi = POP32_VAL(esp); /* 0x00712EEE: pop edi */
    esi = POP32_VAL(esp); /* 0x00712EEF: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00712EF0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00712EF2: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00712EF3: ret  */
    RECOMP_REGS_OUT();
}

void sub_00712F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00712F00u);

L_00712F00:
    PUSH32(esp, ebp); /* 0x00712F00: push ebp */
    ebp = esp; /* 0x00712F01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x00712F03: sub esp, 0x1c */
    _flag_k = FK_CMP;
    edx = 0x00807CE0u; /* 0x00712F06: mov edx, 0x807ce0 */
    PUSH32(esp, ebx); /* 0x00712F0B: push ebx */
    PUSH32(esp, esi); /* 0x00712F0C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x00712F0D: mov esi, dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x00712F10: mov ecx, esi */
    PUSH32(esp, edi); /* 0x00712F12: push edi */
    RECOMP_CALL(sub_006EB9B0); /* 0x00712F13: call 0x6eb9b0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x00712F18: mov ecx, eax */
    RECOMP_CALL(sub_006F7460); /* 0x00712F1A: call 0x6f7460 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xC); /* 0x00712F1F: lea eax, [ebp - 0xc] */
    ecx = 0x16161804u; /* 0x00712F22: mov ecx, 0x16161804 */
    PUSH32(esp, eax); /* 0x00712F27: push eax */
    eax = ebp + (-0x10); /* 0x00712F28: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00712F2B: push eax */
    eax = ebp + (-0x14); /* 0x00712F2C: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00712F2F: push eax */
    eax = ebp + (-0x18); /* 0x00712F30: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x00712F33: push eax */
    edx = ebp + (-0x1C); /* 0x00712F34: lea edx, [ebp - 0x1c] */
    RECOMP_CALL(sub_006F9E10); /* 0x00712F37: call 0x6f9e10 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x87CBCC); /* 0x00712F3C: mov eax, dword ptr [0x87cbcc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x00712F41: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00712F44: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00712F4F; /* 0x00712F46: jne 0x712f4f */
L_00712F48:
    PUSH32(esp, 0x00803F6Cu); /* 0x00712F48: push 0x803f6c */
    goto L_00712F69; /* 0x00712F4D: jmp 0x712f69 */
L_00712F4F:
    /* test esi, esi */ /* 0x00712F4F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00712F64; /* 0x00712F51: je 0x712f64 */
L_00712F53:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x00712F53: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), eax */ /* 0x00712F58: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00712F64; /* 0x00712F5A: jne 0x712f64 */
L_00712F5C:
    ebx = MEM32(esi + 0x18); /* 0x00712F5C: mov ebx, dword ptr [esi + 0x18] */
    edi = MEM32(esi + 0x1C); /* 0x00712F5F: mov edi, dword ptr [esi + 0x1c] */
    goto L_00712F77; /* 0x00712F62: jmp 0x712f77 */
L_00712F64:
    PUSH32(esp, 0x00804020u); /* 0x00712F64: push 0x804020 */
L_00712F69:
    RECOMP_CALL(sub_006EDB70); /* 0x00712F69: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x8)); /* 0x00712F6E: mov ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00712F71: add esp, 4 */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x4)); /* 0x00712F74: mov edi, dword ptr [ebp - 4] */
L_00712F77:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x00712F77: push dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x00712F7A: mov ecx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x00712F7D: push dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x18)); /* 0x00712F80: mov edx, dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x00712F83: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_006FA0F0); /* 0x00712F86: call 0x6fa0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00712F8B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00712F8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00712FA9; /* 0x00712F90: jne 0x712fa9 */
L_00712F92:
    PUSH32(esp, 0x0080618Cu); /* 0x00712F92: push 0x80618c */
    RECOMP_CALL(sub_006EDB70); /* 0x00712F97: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00712F9C: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00712F9F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00712FA2: pop edi */
    esi = POP32_VAL(esp); /* 0x00712FA3: pop esi */
    ebx = POP32_VAL(esp); /* 0x00712FA4: pop ebx */
    esp = ebp; /* 0x00712FA5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00712FA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00712FA8: ret  */
L_00712FA9:
    PUSH32(esp, eax); /* 0x00712FA9: push eax */
    PUSH32(esp, ecx); /* 0x00712FAA: push ecx */
    PUSH32(esp, edi); /* 0x00712FAB: push edi */
    edx = ebx; /* 0x00712FAC: mov edx, ebx */
    RECOMP_CALL(sub_006F5D00); /* 0x00712FAE: call 0x6f5d00 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x00712FB3: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00712FB5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x00712FB8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00712FC6; /* 0x00712FBA: jne 0x712fc6 */
L_00712FBC:
    edi = POP32_VAL(esp); /* 0x00712FBC: pop edi */
    esi = POP32_VAL(esp); /* 0x00712FBD: pop esi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00712FBE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00712FC1: pop ebx */
    esp = ebp; /* 0x00712FC2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00712FC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00712FC5: ret  */
L_00712FC6:
    PUSH32(esp, edi); /* 0x00712FC6: push edi */
    edx = 0x00807CE0u; /* 0x00712FC7: mov edx, 0x807ce0 */
    ecx = esi; /* 0x00712FCC: mov ecx, esi */
    RECOMP_CALL(sub_006EB850); /* 0x00712FCE: call 0x6eb850 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x00712FD3: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00712FD6: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x16161804u; /* 0x00712FD9: mov dword ptr [eax], 0x16161804 */
    eax = MEM32(ebp + 0x14); /* 0x00712FDF: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(edi + 0x14); /* 0x00712FE2: mov ecx, dword ptr [edi + 0x14] */
    MEM32(eax) = ecx; /* 0x00712FE5: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + 0x18); /* 0x00712FE7: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(edi + 0x10); /* 0x00712FEA: mov ecx, dword ptr [edi + 0x10] */
    edi = POP32_VAL(esp); /* 0x00712FED: pop edi */
    esi = POP32_VAL(esp); /* 0x00712FEE: pop esi */
    MEM32(eax) = ecx; /* 0x00712FEF: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00712FF1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00712FF3: pop ebx */
    esp = ebp; /* 0x00712FF4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00712FF6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00712FF7: ret  */
    RECOMP_REGS_OUT();
}

void sub_00713000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00713000u);

L_00713000:
    PUSH32(esp, ebp); /* 0x00713000: push ebp */
    ebp = esp; /* 0x00713001: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x84u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x84u; /* 0x00713003: sub esp, 0x84 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00713009: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0071300E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00713010: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x00713013: push esi */
    esi = MEM32(ebp + 0xC); /* 0x00713014: mov esi, dword ptr [ebp + 0xc] */
    edx = 0x00807CE0u; /* 0x00713017: mov edx, 0x807ce0 */
    PUSH32(esp, edi); /* 0x0071301C: push edi */
    ecx = esi; /* 0x0071301D: mov ecx, esi */
    RECOMP_CALL(sub_006EB9B0); /* 0x0071301F: call 0x6eb9b0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x00713024: mov edi, eax */
    /* test edi, edi */ /* 0x00713026: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00713047; /* 0x00713028: jne 0x713047 */
L_0071302A:
    PUSH32(esp, 0x00807CB8u); /* 0x0071302A: push 0x807cb8 */
    RECOMP_CALL(sub_006EDB70); /* 0x0071302F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00713034: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00713037: pop edi */
    esi = POP32_VAL(esp); /* 0x00713038: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x00713039: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0071303C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0071303E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00713043: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00713045: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713046: ret  */
L_00713047:
    ecx = 0x00807C9Cu; /* 0x00713047: mov ecx, 0x807c9c */
    RECOMP_CALL(sub_006FBC10); /* 0x0071304C: call 0x6fbc10 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00713051: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071309E; /* 0x00713053: je 0x71309e */
L_00713055:
    eax = MEM32(0x927070); /* 0x00713055: mov eax, dword ptr [0x927070] */
    ecx = esi; /* 0x0071305A: mov ecx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0071305C: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x0071305D: push eax */
    MEM32(0x927070) = eax; /* 0x0071305E: mov dword ptr [0x927070], eax */
    RECOMP_CALL(sub_006EB7A0); /* 0x00713063: call 0x6eb7a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x00713068: push eax */
    PUSH32(esp, 0x00807C84u); /* 0x00713069: push 0x807c84 */
    eax = ebp + (-0x84); /* 0x0071306E: lea eax, [ebp - 0x84] */
    PUSH32(esp, 0x80u); /* 0x00713074: push 0x80 */
    PUSH32(esp, eax); /* 0x00713079: push eax */
    RECOMP_CALL(sub_006F2E40); /* 0x0071307A: call 0x6f2e40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0071307F: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x84); /* 0x00713082: lea ecx, [ebp - 0x84] */
    edx = 0x007F8FCCu; /* 0x00713088: mov edx, 0x7f8fcc */
    RECOMP_CALL(sub_006F08C0); /* 0x0071308D: call 0x6f08c0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x00713092: mov edx, eax */
    ecx = edi; /* 0x00713094: mov ecx, edi */
    RECOMP_CALL(sub_0076C730); /* 0x00713096: call 0x76c730 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071309B: add esp, 4 */
    _flag_k = FK_ADD;
L_0071309E:
    ecx = MEM32(ebp + (-0x4)); /* 0x0071309E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007130A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x007130A3: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007130A4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x007130A6: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x007130A7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007130AC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007130AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007130AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_007130B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007130B0u);

    goto L_007130B0;
L_006F7460:
    PUSH32(esp, ebp); /* 0x006F7460: push ebp */
    ebp = esp; /* 0x006F7461: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006F7463: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x006F7466: push ecx */
    PUSH32(esp, ebx); /* 0x006F7467: push ebx */
    PUSH32(esp, esi); /* 0x006F7468: push esi */
    esi = ecx; /* 0x006F7469: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006F746B: push edi */
    /* test esi, esi */ /* 0x006F746C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7517; /* 0x006F746E: je 0x6f7517 */
L_006F7474:
    /* test MEM8(esi), 4 */ /* 0x006F7474: test byte ptr [esi], 4 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7517; /* 0x006F7477: jne 0x6f7517 */
L_006F747D:
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) - 1; /* 0x006F747D: dec dword ptr [esi + 0x38] */
    _flag_k = FK_DEC;
    /* cmp MEM32(esi + 0x38), 0 */ /* 0x006F7480: cmp dword ptr [esi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006F7517; /* 0x006F7484: jg 0x6f7517 */
L_006F748A:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x006F748A: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006F74B7; /* 0x006F748E: jle 0x6f74b7 */
L_006F7490:
    eax = MEM32(esi + 0x1C); /* 0x006F7490: mov eax, dword ptr [esi + 0x1c] */
    /* test eax, eax */ /* 0x006F7493: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F74B1; /* 0x006F7495: je 0x6f74b1 */
L_006F7497:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006F7497: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi + 0x1C) = eax; /* 0x006F7498: mov dword ptr [esi + 0x1c], eax */
    /* test eax, eax */ /* 0x006F749B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006F74B1; /* 0x006F749D: jg 0x6f74b1 */
L_006F749F:
    eax = MEM32(esi); /* 0x006F749F: mov eax, dword ptr [esi] */
    /* test LO8(eax), 2 */ /* 0x006F74A1: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F74B1; /* 0x006F74A3: je 0x6f74b1 */
L_006F74A5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x006F74A5: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x006F74A8: mov ecx, esi */
    MEM32(esi) = eax; /* 0x006F74AA: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_007090D0); /* 0x006F74AC: call 0x7090d0 */
    RECOMP_FLAGS_IN();
L_006F74B1:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x006F74B1: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_006F7490; /* 0x006F74B5: jg 0x6f7490 */
L_006F74B7:
    /* test MEM8(esi), 2 */ /* 0x006F74B7: test byte ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F74C5; /* 0x006F74BA: je 0x6f74c5 */
L_006F74BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F74BC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x006F74BE: mov ecx, esi */
    RECOMP_CALL(sub_007092B0); /* 0x006F74C0: call 0x7092b0 */
    RECOMP_FLAGS_IN();
L_006F74C5:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x006F74C5: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006F74E3; /* 0x006F74C9: je 0x6f74e3 */
L_006F74CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006F74CB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x006F74CD: mov ecx, esi */
    RECOMP_CALL(sub_006F5F60); /* 0x006F74CF: call 0x6f5f60 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x006F74D4: mov ecx, dword ptr [esi + 4] */
    RECOMP_CALL(sub_006FA710); /* 0x006F74D7: call 0x6fa710 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = 0; /* 0x006F74DC: mov dword ptr [esi + 4], 0 */
L_006F74E3:
    ebx = MEM32(esi + 0x34); /* 0x006F74E3: mov ebx, dword ptr [esi + 0x34] */
    edi = MEM32(0x7CC44C); /* 0x006F74E6: mov edi, dword ptr [0x7cc44c] */
    /* test ebx, ebx */ /* 0x006F74EC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006F7504; /* 0x006F74EE: je 0x6f7504 */
L_006F74F0:
    ecx = ebx; /* 0x006F74F0: mov ecx, ebx */
    RECOMP_CALL(sub_006FB030); /* 0x006F74F2: call 0x6fb030 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x006F74F7: push ebx */
    RECOMP_ICALL(edi); /* 0x006F74F8: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F74FA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x34) = 0; /* 0x006F74FD: mov dword ptr [esi + 0x34], 0 */
L_006F7504:
    /* test MEM8(esi), 1 */ /* 0x006F7504: test byte ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006F7511; /* 0x006F7507: jne 0x6f7511 */
L_006F7509:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x006F7509: push dword ptr [esi + 0x14] */
    RECOMP_ICALL(edi); /* 0x006F750C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F750E: add esp, 4 */
    _flag_k = FK_ADD;
L_006F7511:
    PUSH32(esp, esi); /* 0x006F7511: push esi */
    RECOMP_ICALL(edi); /* 0x006F7512: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006F7514: add esp, 4 */
    _flag_k = FK_ADD;
L_006F7517:
    edi = POP32_VAL(esp); /* 0x006F7517: pop edi */
    esi = POP32_VAL(esp); /* 0x006F7518: pop esi */
    ebx = POP32_VAL(esp); /* 0x006F7519: pop ebx */
    esp = ebp; /* 0x006F751A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006F751C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006F751D: ret  */
L_007130B0:
    PUSH32(esp, ebp); /* 0x007130B0: push ebp */
    ebp = esp; /* 0x007130B1: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x007130B3: mov ecx, dword ptr [ebp + 0xc] */
    edx = 0x00807CE0u; /* 0x007130B6: mov edx, 0x807ce0 */
    PUSH32(esp, 0); /* 0x007130BB: push 0 */
    RECOMP_CALL(sub_006EB850); /* 0x007130BD: call 0x6eb850 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007130C2: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x007130C5: mov ecx, eax */
    ebp = POP32_VAL(esp); /* 0x007130C7: pop ebp */
    RECOMP_BACKEDGE();
    goto L_006F7460; /* 0x007130C8: jmp 0x6f7460 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007130D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007130D0u);

L_007130D0:
    PUSH32(esp, ebp); /* 0x007130D0: push ebp */
    ebp = esp; /* 0x007130D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x007130D3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB4u; /* 0x007130D6: sub esp, 0xb4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x007130DC: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x007130E1: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xB0) = eax; /* 0x007130E3: mov dword ptr [esp + 0xb0], eax */
    /* cmp MEM32(0x863374), 0 */ /* 0x007130EA: cmp dword ptr [0x863374], 0 */
    _flag_a = (uint32_t)(MEM32(0x863374)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ecx; /* 0x007130F1: mov eax, ecx */
    PUSH32(esp, ebx); /* 0x007130F3: push ebx */
    PUSH32(esp, esi); /* 0x007130F4: push esi */
    PUSH32(esp, edi); /* 0x007130F5: push edi */
    MEM32(esp + 0xC) = eax; /* 0x007130F6: mov dword ptr [esp + 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00713198; /* 0x007130FA: je 0x713198 */
L_00713100:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00713100: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_00713102:
    edx = eax; /* 0x00713102: mov edx, eax */
    esi = 0xCu; /* 0x00713104: mov esi, 0xc */
    eax = MEM32(edi + 0x7D6570); /* 0x00713109: mov eax, dword ptr [edi + 0x7d6570] */
    /* nop */ /* 0x0071310F: nop  */
L_00713110:
    ecx = MEM32(edx); /* 0x00713110: mov ecx, dword ptr [edx] */
    /* cmp ecx, MEM32(eax) */ /* 0x00713112: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0071313B; /* 0x00713114: jne 0x71313b */
L_00713116:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00713116: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x00713119: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x0071311C: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00713110; /* 0x0071311F: jae 0x713110 */
L_00713121:
    eax = 1; /* 0x00713121: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x00713126: pop edi */
    esi = POP32_VAL(esp); /* 0x00713127: pop esi */
    ebx = POP32_VAL(esp); /* 0x00713128: pop ebx */
    ecx = MEM32(esp + 0xB0); /* 0x00713129: mov ecx, dword ptr [esp + 0xb0] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x00713130: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00713132: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00713137: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00713139: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071313A: ret  */
L_0071313B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x0071313B: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, 0x24u */ /* 0x0071313E: cmp edi, 0x24 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00713149; /* 0x00713141: jae 0x713149 */
L_00713143:
    eax = MEM32(esp + 0xC); /* 0x00713143: mov eax, dword ptr [esp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_00713102; /* 0x00713147: jmp 0x713102 */
L_00713149:
    /* cmp MEM32(0x87CCB4), 0 */ /* 0x00713149: cmp dword ptr [0x87ccb4], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CCB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007131EE; /* 0x00713150: jne 0x7131ee */
L_00713156:
    esi = MEM32(0x7CC714); /* 0x00713156: mov esi, dword ptr [0x7cc714] */
    PUSH32(esp, 8); /* 0x0071315C: push 8 */
    PUSH32(esp, 0x0087CCACu); /* 0x0071315E: push 0x87ccac */
    PUSH32(esp, 0); /* 0x00713163: push 0 */
    RECOMP_ICALL(esi); /* 0x00713165: call esi */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x00713167: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00713198; /* 0x0071316A: je 0x713198 */
L_0071316C:
    eax = MEM32(0x87CCAC); /* 0x0071316C: mov eax, dword ptr [0x87ccac] */
    /* test eax, eax */ /* 0x00713171: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00713198; /* 0x00713173: je 0x713198 */
L_00713175:
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x00713175: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x00713175: shl eax, 3 */
    PUSH32(esp, eax); /* 0x00713178: push eax */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x00713179: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071317F: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x87CCB4) = eax; /* 0x00713182: mov dword ptr [0x87ccb4], eax */
    /* test eax, eax */ /* 0x00713187: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007131AF; /* 0x00713189: jne 0x7131af */
L_0071318B:
    PUSH32(esp, 0x00803E4Cu); /* 0x0071318B: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x00713190: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00713195: add esp, 4 */
    _flag_k = FK_ADD;
L_00713198:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00713198: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0071319A: pop edi */
    esi = POP32_VAL(esp); /* 0x0071319B: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071319C: pop ebx */
    ecx = MEM32(esp + 0xB0); /* 0x0071319D: mov ecx, dword ptr [esp + 0xb0] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x007131A4: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007131A6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007131AB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007131AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007131AE: ret  */
L_007131AF:
    PUSH32(esp, 8); /* 0x007131AF: push 8 */
    PUSH32(esp, 0x0087CCACu); /* 0x007131B1: push 0x87ccac */
    PUSH32(esp, eax); /* 0x007131B6: push eax */
    RECOMP_ICALL(esi); /* 0x007131B7: call esi */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x007131B9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007131EE; /* 0x007131BC: jne 0x7131ee */
L_007131BE:
    PUSH32(esp, MEM32(0x87CCB4)); /* 0x007131BE: push dword ptr [0x87ccb4] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x007131C4: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007131CA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(0x87CCB4) = 0; /* 0x007131CD: mov dword ptr [0x87ccb4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007131D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x007131D9: pop edi */
    esi = POP32_VAL(esp); /* 0x007131DA: pop esi */
    ebx = POP32_VAL(esp); /* 0x007131DB: pop ebx */
    ecx = MEM32(esp + 0xB0); /* 0x007131DC: mov ecx, dword ptr [esp + 0xb0] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x007131E3: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007131E5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007131EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007131EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007131ED: ret  */
L_007131EE:
    ecx = MEM32(0x87CCAC); /* 0x007131EE: mov ecx, dword ptr [0x87ccac] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x007131F4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x007131F6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_00713198; /* 0x007131F8: je 0x713198 */
L_007131FA:
    edi = MEM32(0x7CC710); /* 0x007131FA: mov edi, dword ptr [0x7cc710] */
    ebx = MEM32(0x7CC4D8); /* 0x00713200: mov ebx, dword ptr [0x7cc4d8] */
    goto L_00713210; /* 0x00713206: jmp 0x713210 */
L_00713210:
    eax = MEM32(0x87CCB4); /* 0x00713210: mov eax, dword ptr [0x87ccb4] */
    MEM32(esp + 0x14) = 0x20u; /* 0x00713215: mov dword ptr [esp + 0x14], 0x20 */
    MEM32(esp + 0x10) = 0x80u; /* 0x0071321D: mov dword ptr [esp + 0x10], 0x80 */
    MEM32(esp + 0x18) = 0x20u; /* 0x00713225: mov dword ptr [esp + 0x18], 0x20 */
    /* cmp MEM32(eax + esi * 8 + 0x4), 2 */ /* 0x0071322D: cmp dword ptr [eax + esi*8 + 4], 2 */
    _flag_a = (uint32_t)(MEM32(eax + esi * 8 + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0071329F; /* 0x00713232: jne 0x71329f */
L_00713234:
    ecx = esp + 0x14; /* 0x00713234: lea ecx, [esp + 0x14] */
    PUSH32(esp, ecx); /* 0x00713238: push ecx */
    ecx = esp + 0x1C; /* 0x00713239: lea ecx, [esp + 0x1c] */
    PUSH32(esp, ecx); /* 0x0071323D: push ecx */
    PUSH32(esp, 0x2000000Bu); /* 0x0071323E: push 0x2000000b */
    PUSH32(esp, MEM32(eax + esi * 8)); /* 0x00713243: push dword ptr [eax + esi*8] */
    RECOMP_ICALL(edi); /* 0x00713246: call edi */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x00713248: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00713299; /* 0x0071324B: je 0x713299 */
L_0071324D:
    ecx = (uint32_t)MEM16(esp + 0x24); /* 0x0071324D: movzx ecx, word ptr [esp + 0x24] */
    eax = (uint32_t)MEM16(esp + 0x20); /* 0x00713252: movzx eax, word ptr [esp + 0x20] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x00713257: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x00713257: shl ecx, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x0071325A: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0xC); /* 0x0071325C: mov eax, dword ptr [esp + 0xc] */
    /* cmp ecx, MEM32(eax) */ /* 0x00713260: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00713299; /* 0x00713262: jne 0x713299 */
L_00713264:
    eax = esp + 0x10; /* 0x00713264: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x00713268: push eax */
    eax = esp + 0x3C; /* 0x00713269: lea eax, [esp + 0x3c] */
    PUSH32(esp, eax); /* 0x0071326D: push eax */
    eax = MEM32(0x87CCB4); /* 0x0071326E: mov eax, dword ptr [0x87ccb4] */
    PUSH32(esp, 0x20000007u); /* 0x00713273: push 0x20000007 */
    PUSH32(esp, MEM32(eax + esi * 8)); /* 0x00713278: push dword ptr [eax + esi*8] */
    RECOMP_ICALL(edi); /* 0x0071327B: call edi */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0071327D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00713299; /* 0x00713280: je 0x713299 */
L_00713282:
    eax = esp + 0x38; /* 0x00713282: lea eax, [esp + 0x38] */
    PUSH32(esp, 0x00807E3Cu); /* 0x00713286: push 0x807e3c */
    PUSH32(esp, eax); /* 0x0071328B: push eax */
    RECOMP_ICALL(ebx); /* 0x0071328C: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071328E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00713291: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00713121; /* 0x00713293: jne 0x713121 */
L_00713299:
    ecx = MEM32(0x87CCAC); /* 0x00713299: mov ecx, dword ptr [0x87ccac] */
L_0071329F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0071329F: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ecx */ /* 0x007132A0: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00713210; /* 0x007132A2: jb 0x713210 */
L_007132A8:
    ecx = MEM32(esp + 0xBC); /* 0x007132A8: mov ecx, dword ptr [esp + 0xbc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007132AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x007132B1: pop edi */
    esi = POP32_VAL(esp); /* 0x007132B2: pop esi */
    ebx = POP32_VAL(esp); /* 0x007132B3: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x007132B4: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007132B6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007132BB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007132BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007132BE: ret  */
    RECOMP_REGS_OUT();
}

void sub_007132C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007132C0u);

L_007132C0:
    PUSH32(esp, ecx); /* 0x007132C0: push ecx */
    PUSH32(esp, 2); /* 0x007132C1: push 2 */
    PUSH32(esp, 0); /* 0x007132C3: push 0 */
    RECOMP_ICALL(MEM32(0x7CC960)); /* 0x007132C5: call dword ptr [0x7cc960] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x80010106u */ /* 0x007132CB: cmp eax, 0x80010106 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80010106u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007132DC; /* 0x007132D0: jne 0x7132dc */
L_007132D2:
    PUSH32(esp, 0); /* 0x007132D2: push 0 */
    PUSH32(esp, 0); /* 0x007132D4: push 0 */
    RECOMP_ICALL(MEM32(0x7CC960)); /* 0x007132D6: call dword ptr [0x7cc960] */
    RECOMP_FLAGS_IN();
L_007132DC:
    /* cmp eax, 1 */ /* 0x007132DC: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007132FA; /* 0x007132DF: je 0x7132fa */
L_007132E1:
    /* test eax, eax */ /* 0x007132E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_007132FA; /* 0x007132E3: jns 0x7132fa */
L_007132E5:
    PUSH32(esp, eax); /* 0x007132E5: push eax */
    PUSH32(esp, 0x00807E2Cu); /* 0x007132E6: push 0x807e2c */
    PUSH32(esp, 0x00807E40u); /* 0x007132EB: push 0x807e40 */
    RECOMP_CALL(sub_006EDB70); /* 0x007132F0: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007132F5: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x007132F8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007132F9: ret  */
L_007132FA:
    PUSH32(esp, 0x0087CCB0u); /* 0x007132FA: push 0x87ccb0 */
    PUSH32(esp, 0x00806D84u); /* 0x007132FF: push 0x806d84 */
    PUSH32(esp, 1); /* 0x00713304: push 1 */
    PUSH32(esp, 0); /* 0x00713306: push 0 */
    PUSH32(esp, 0x00806DA4u); /* 0x00713308: push 0x806da4 */
    MEM32(0x87CCB8) = 1; /* 0x0071330D: mov dword ptr [0x87ccb8], 1 */
    RECOMP_ICALL(MEM32(0x7CC95C)); /* 0x00713317: call dword ptr [0x7cc95c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0071331D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00713336; /* 0x0071331F: jns 0x713336 */
L_00713321:
    PUSH32(esp, eax); /* 0x00713321: push eax */
    PUSH32(esp, 0x00807E18u); /* 0x00713322: push 0x807e18 */
    PUSH32(esp, 0x00807E40u); /* 0x00713327: push 0x807e40 */
    RECOMP_CALL(sub_006EDB70); /* 0x0071332C: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00713331: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x00713334: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713335: ret  */
L_00713336:
    PUSH32(esp, 0); /* 0x00713336: push 0 */
    RECOMP_ICALL(MEM32(0x7CC20C)); /* 0x00713338: call dword ptr [0x7cc20c] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x0071333E: mov edx, eax */
    /* test edx, edx */ /* 0x00713340: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0071335A; /* 0x00713342: jne 0x71335a */
L_00713344:
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x00713344: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x0071334A: push eax */
    PUSH32(esp, 0x00807D50u); /* 0x0071334B: push 0x807d50 */
    RECOMP_CALL(sub_006EDB70); /* 0x00713350: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00713355: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x00713358: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713359: ret  */
L_0071335A:
    eax = MEM32(0x87CCB0); /* 0x0071335A: mov eax, dword ptr [0x87ccb0] */
    PUSH32(esp, 0x800u); /* 0x0071335F: push 0x800 */
    PUSH32(esp, edx); /* 0x00713364: push edx */
    PUSH32(esp, eax); /* 0x00713365: push eax */
    ecx = MEM32(eax); /* 0x00713366: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x1C); /* 0x00713368: mov eax, dword ptr [ecx + 0x1c] */
    RECOMP_ICALL(eax); /* 0x0071336B: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0071336D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00713386; /* 0x0071336F: jns 0x713386 */
L_00713371:
    PUSH32(esp, eax); /* 0x00713371: push eax */
    PUSH32(esp, 0x00807D34u); /* 0x00713372: push 0x807d34 */
    PUSH32(esp, 0x00807E40u); /* 0x00713377: push 0x807e40 */
    RECOMP_CALL(sub_006EDB70); /* 0x0071337C: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00713381: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x00713384: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713385: ret  */
L_00713386:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00713386: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x00713388: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713389: ret  */
    RECOMP_REGS_OUT();
}

void sub_00713390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00713390u);

L_00713390:
    PUSH32(esp, ebp); /* 0x00713390: push ebp */
    ebp = esp; /* 0x00713391: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00713393: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00713396: push ebx */
    PUSH32(esp, edi); /* 0x00713397: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00713398: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0071339B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(edi + 0x24), 0x1Cu */ /* 0x0071339D: cmp byte ptr [edi + 0x24], 0x1c */
    _flag_a = (uint32_t)(MEM8(edi + 0x24)) << 24; _flag_b = (uint32_t)(0x1Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007134E7; /* 0x007133A1: je 0x7134e7 */
L_007133A7:
    ecx = edi + 0x14; /* 0x007133A7: lea ecx, [edi + 0x14] */
    RECOMP_CALL(sub_007130D0); /* 0x007133AA: call 0x7130d0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007133AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007134E7; /* 0x007133B1: jne 0x7134e7 */
L_007133B7:
    eax = MEM32(ebp + 0xC); /* 0x007133B7: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x007133BA: push esi */
    eax = MEM32(eax); /* 0x007133BB: mov eax, dword ptr [eax] */
    esi = eax; /* 0x007133BD: mov esi, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x007133BF: mov dword ptr [ebp - 8], eax */
    /* test esi, esi */ /* 0x007133C2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00713446; /* 0x007133C4: je 0x713446 */
L_007133CA:
    eax = edi + 0x4; /* 0x007133CA: lea eax, [edi + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x007133CD: mov dword ptr [ebp - 4], eax */
L_007133D0:
    ecx = esi + 0x28; /* 0x007133D0: lea ecx, [esi + 0x28] */
    edx = eax; /* 0x007133D3: mov edx, eax */
    edi = 0xCu; /* 0x007133D5: mov edi, 0xc */
    ebx = ebx; /* 0x007133DA: lea ebx, [ebx] */
L_007133E0:
    eax = MEM32(ecx); /* 0x007133E0: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x007133E2: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00713403; /* 0x007133E4: jne 0x713403 */
L_007133E6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007133E6: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x007133E9: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x007133EC: sub edi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_007133E0; /* 0x007133EF: jae 0x7133e0 */
L_007133F1:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x007133F1: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00713414; /* 0x007133F4: jne 0x713414 */
L_007133F6:
    ecx = MEM32(ebp + 0xC); /* 0x007133F6: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(esi + 0x470); /* 0x007133F9: mov eax, dword ptr [esi + 0x470] */
    MEM32(ecx) = eax; /* 0x007133FF: mov dword ptr [ecx], eax */
    goto L_00713424; /* 0x00713401: jmp 0x713424 */
L_00713403:
    ebx = esi; /* 0x00713403: mov ebx, esi */
    esi = MEM32(esi + 0x470); /* 0x00713405: mov esi, dword ptr [esi + 0x470] */
    /* test esi, esi */ /* 0x0071340B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00713443; /* 0x0071340D: je 0x713443 */
L_0071340F:
    eax = MEM32(ebp + (-0x4)); /* 0x0071340F: mov eax, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_007133D0; /* 0x00713412: jmp 0x7133d0 */
L_00713414:
    /* test ebx, ebx */ /* 0x00713414: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00713424; /* 0x00713416: je 0x713424 */
L_00713418:
    eax = MEM32(esi + 0x470); /* 0x00713418: mov eax, dword ptr [esi + 0x470] */
    MEM32(ebx + 0x470) = eax; /* 0x0071341E: mov dword ptr [ebx + 0x470], eax */
L_00713424:
    eax = MEM32(0x92C614); /* 0x00713424: mov eax, dword ptr [0x92c614] */
    MEM32(esi + 0x470) = eax; /* 0x00713429: mov dword ptr [esi + 0x470], eax */
    eax = 1; /* 0x0071342F: mov eax, 1 */
    MEM32(0x92C614) = esi; /* 0x00713434: mov dword ptr [0x92c614], esi */
    esi = POP32_VAL(esp); /* 0x0071343A: pop esi */
    edi = POP32_VAL(esp); /* 0x0071343B: pop edi */
    ebx = POP32_VAL(esp); /* 0x0071343C: pop ebx */
    esp = ebp; /* 0x0071343D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071343F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00713440: ret 8 */
L_00713443:
    edi = MEM32(ebp + 0x8); /* 0x00713443: mov edi, dword ptr [ebp + 8] */
L_00713446:
    PUSH32(esp, 0x474u); /* 0x00713446: push 0x474 */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x0071344B: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00713451: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00713453: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x00713456: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007134E6; /* 0x00713458: je 0x7134e6 */
L_0071345E:
    PUSH32(esp, 0x474u); /* 0x0071345E: push 0x474 */
    PUSH32(esp, 0); /* 0x00713463: push 0 */
    PUSH32(esp, esi); /* 0x00713465: push esi */
    RECOMP_CALL(sub_0078083E); /* 0x00713466: call 0x78083e */
    RECOMP_FLAGS_IN();
    edx = edi + 0x230; /* 0x0071346B: lea edx, [edi + 0x230] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00713471: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x00713473: mov eax, edx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00713475: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x00713478: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071348A; /* 0x0071347B: je 0x71348a */
L_0071347D:
    ecx = ecx; /* 0x0071347D: lea ecx, [ecx] */
L_00713480:
    eax = eax + 0x2; /* 0x00713480: lea eax, [eax + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00713483: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM16(eax), 0 */ /* 0x00713484: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00713480; /* 0x00713488: jne 0x713480 */
L_0071348A:
    eax = ecx * 2 + 0x2; /* 0x0071348A: lea eax, [ecx*2 + 2] */
    ecx = 0x00804E28u; /* 0x00713491: mov ecx, 0x804e28 */
    PUSH32(esp, eax); /* 0x00713496: push eax */
    PUSH32(esp, edx); /* 0x00713497: push edx */
    edx = 0x00804E1Cu; /* 0x00713498: mov edx, 0x804e1c */
    RECOMP_CALL(sub_00700DA0); /* 0x0071349D: call 0x700da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007134A2: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = eax; /* 0x007134A5: mov dword ptr [esi + 0x10], eax */
    /* test eax, eax */ /* 0x007134A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007134C4; /* 0x007134AA: jne 0x7134c4 */
L_007134AC:
    PUSH32(esp, esi); /* 0x007134AC: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x007134AD: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007134B3: add esp, 4 */
    _flag_k = FK_ADD;
    eax = 1; /* 0x007134B6: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x007134BB: pop esi */
    edi = POP32_VAL(esp); /* 0x007134BC: pop edi */
    ebx = POP32_VAL(esp); /* 0x007134BD: pop ebx */
    esp = ebp; /* 0x007134BE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007134C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x007134C1: ret 8 */
L_007134C4:
    PUSH32(esp, 0x44Cu); /* 0x007134C4: push 0x44c */
    eax = esi + 0x24; /* 0x007134C9: lea eax, [esi + 0x24] */
    PUSH32(esp, edi); /* 0x007134CC: push edi */
    PUSH32(esp, eax); /* 0x007134CD: push eax */
    RECOMP_CALL(sub_00780838); /* 0x007134CE: call 0x780838 */
    RECOMP_FLAGS_IN();
    _xmm[0] = xmm_ld(edi + 0x14); /* 0x007134D3: movdqu xmm0, xmmword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007134D8: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x007134DB: mov ecx, esi */
    xmm_st(esi, _xmm[0]); /* 0x007134DD: movdqu xmmword ptr [esi], xmm0 */
    RECOMP_CALL(sub_006FF470); /* 0x007134E1: call 0x6ff470 */
    RECOMP_FLAGS_IN();
L_007134E6:
    esi = POP32_VAL(esp); /* 0x007134E6: pop esi */
L_007134E7:
    edi = POP32_VAL(esp); /* 0x007134E7: pop edi */
    eax = 1; /* 0x007134E8: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x007134ED: pop ebx */
    esp = ebp; /* 0x007134EE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007134F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x007134F1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00713500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00713500u);

L_00713500:
    PUSH32(esp, ebp); /* 0x00713500: push ebp */
    ebp = esp; /* 0x00713501: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x00713503: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00713506: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0071350B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0071350D: mov dword ptr [ebp - 4], eax */
    edx = MEM32(ebp + 0x8); /* 0x00713510: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x00713513: push ebx */
    PUSH32(esp, esi); /* 0x00713514: push esi */
    PUSH32(esp, edi); /* 0x00713515: push edi */
    edi = MEM32(ebp + 0xC); /* 0x00713516: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x34)) = edx; /* 0x00713519: mov dword ptr [ebp - 0x34], edx */
    ecx = MEM32(edi + 0x2C); /* 0x0071351C: mov ecx, dword ptr [edi + 0x2c] */
    eax = MEM32(ecx + 0xC4C); /* 0x0071351F: mov eax, dword ptr [ecx + 0xc4c] */
    eax = eax + eax * 2; /* 0x00713525: lea eax, [eax + eax*2] */
    esi = ecx + eax * 4; /* 0x00713528: lea esi, [ecx + eax*4] */
    eax = MEM32(edx + 0x18); /* 0x0071352B: mov eax, dword ptr [edx + 0x18] */
    /* test LO8(eax), 0xCu */ /* 0x0071352E: test al, 0xc */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xCu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00713550; /* 0x00713530: je 0x713550 */
L_00713532:
    MEM32(esi + 0x50) = 0; /* 0x00713532: mov dword ptr [esi + 0x50], 0 */
    SET_LO8(eax, MEM8(edi + 0x24)); /* 0x00713539: mov al, byte ptr [edi + 0x24] */
    MEM8(esi + 0x54) = (uint8_t)(LO8(eax)); /* 0x0071353C: mov byte ptr [esi + 0x54], al */
    eax = (uint32_t)LO8(eax); /* 0x0071353F: movzx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x00713542: add eax, 0x30 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4C) = eax; /* 0x00713545: mov dword ptr [esi + 0x4c], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x24) = MEM32(edi + 0x24) + 1; /* 0x00713548: inc dword ptr [edi + 0x24] */
    _flag_k = FK_INC;
    goto L_007136FD; /* 0x0071354B: jmp 0x7136fd */
L_00713550:
    /* test LO8(eax), 0x10u */ /* 0x00713550: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00713576; /* 0x00713552: je 0x713576 */
L_00713554:
    MEM32(esi + 0x50) = 2; /* 0x00713554: mov dword ptr [esi + 0x50], 2 */
    SET_LO8(eax, MEM8(edi + 0x14)); /* 0x0071355B: mov al, byte ptr [edi + 0x14] */
    MEM8(esi + 0x54) = (uint8_t)(LO8(eax)); /* 0x0071355E: mov byte ptr [esi + 0x54], al */
    eax = (uint32_t)LO8(eax); /* 0x00713561: movzx eax, al */
    eax = eax * 4 + 0x20; /* 0x00713564: lea eax, [eax*4 + 0x20] */
    MEM32(esi + 0x4C) = eax; /* 0x0071356B: mov dword ptr [esi + 0x4c], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x14) = MEM32(edi + 0x14) + 1; /* 0x0071356E: inc dword ptr [edi + 0x14] */
    _flag_k = FK_INC;
    goto L_007136FD; /* 0x00713571: jmp 0x7136fd */
L_00713576:
    /* test LO8(eax), 3 */ /* 0x00713576: test al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071372B; /* 0x00713578: je 0x71372b */
L_0071357E:
    ebx = edx + 0x4; /* 0x0071357E: lea ebx, [edx + 4] */
    MEM32(esi + 0x50) = 1; /* 0x00713581: mov dword ptr [esi + 0x50], 1 */
    SET_LO8(eax, MEM8(edi + 0x8)); /* 0x00713588: mov al, byte ptr [edi + 8] */
    edx = 0x00806E24u; /* 0x0071358B: mov edx, 0x806e24 */
    PUSH32(esp, 0x10u); /* 0x00713590: push 0x10 */
    ecx = ebx; /* 0x00713592: mov ecx, ebx */
    MEM8(esi + 0x54) = (uint8_t)(LO8(eax)); /* 0x00713594: mov byte ptr [esi + 0x54], al */
    RECOMP_CALL(sub_006F2A80); /* 0x00713597: call 0x6f2a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071359C: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0071359F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007135AB; /* 0x007135A1: jne 0x7135ab */
L_007135A3:
    MEM32(esi + 0x4C) = eax; /* 0x007135A3: mov dword ptr [esi + 0x4c], eax */
    goto L_0071367C; /* 0x007135A6: jmp 0x71367c */
L_007135AB:
    PUSH32(esp, 0x10u); /* 0x007135AB: push 0x10 */
    edx = 0x00806E34u; /* 0x007135AD: mov edx, 0x806e34 */
    ecx = ebx; /* 0x007135B2: mov ecx, ebx */
    RECOMP_CALL(sub_006F2A80); /* 0x007135B4: call 0x6f2a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007135B9: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x007135BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007135CC; /* 0x007135BE: jne 0x7135cc */
L_007135C0:
    MEM32(esi + 0x4C) = 4; /* 0x007135C0: mov dword ptr [esi + 0x4c], 4 */
    goto L_0071367C; /* 0x007135C7: jmp 0x71367c */
L_007135CC:
    PUSH32(esp, 0x10u); /* 0x007135CC: push 0x10 */
    edx = 0x00806D54u; /* 0x007135CE: mov edx, 0x806d54 */
    ecx = ebx; /* 0x007135D3: mov ecx, ebx */
    RECOMP_CALL(sub_006F2A80); /* 0x007135D5: call 0x6f2a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007135DA: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x007135DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007135ED; /* 0x007135DF: jne 0x7135ed */
L_007135E1:
    MEM32(esi + 0x4C) = 8; /* 0x007135E1: mov dword ptr [esi + 0x4c], 8 */
    goto L_0071367C; /* 0x007135E8: jmp 0x71367c */
L_007135ED:
    PUSH32(esp, 0x10u); /* 0x007135ED: push 0x10 */
    edx = 0x00806E04u; /* 0x007135EF: mov edx, 0x806e04 */
    ecx = ebx; /* 0x007135F4: mov ecx, ebx */
    RECOMP_CALL(sub_006F2A80); /* 0x007135F6: call 0x6f2a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007135FB: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x007135FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0071360B; /* 0x00713600: jne 0x71360b */
L_00713602:
    MEM32(esi + 0x4C) = 0xCu; /* 0x00713602: mov dword ptr [esi + 0x4c], 0xc */
    goto L_0071367C; /* 0x00713609: jmp 0x71367c */
L_0071360B:
    PUSH32(esp, 0x10u); /* 0x0071360B: push 0x10 */
    edx = 0x00806E44u; /* 0x0071360D: mov edx, 0x806e44 */
    ecx = ebx; /* 0x00713612: mov ecx, ebx */
    RECOMP_CALL(sub_006F2A80); /* 0x00713614: call 0x6f2a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00713619: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0071361C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00713629; /* 0x0071361E: jne 0x713629 */
L_00713620:
    MEM32(esi + 0x4C) = 0x10u; /* 0x00713620: mov dword ptr [esi + 0x4c], 0x10 */
    goto L_0071367C; /* 0x00713627: jmp 0x71367c */
L_00713629:
    PUSH32(esp, 0x10u); /* 0x00713629: push 0x10 */
    edx = 0x00806DB4u; /* 0x0071362B: mov edx, 0x806db4 */
    ecx = ebx; /* 0x00713630: mov ecx, ebx */
    RECOMP_CALL(sub_006F2A80); /* 0x00713632: call 0x6f2a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00713637: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0071363A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00713647; /* 0x0071363C: jne 0x713647 */
L_0071363E:
    MEM32(esi + 0x4C) = 0x14u; /* 0x0071363E: mov dword ptr [esi + 0x4c], 0x14 */
    goto L_0071367C; /* 0x00713645: jmp 0x71367c */
L_00713647:
    PUSH32(esp, 0x10u); /* 0x00713647: push 0x10 */
    edx = 0x00806E14u; /* 0x00713649: mov edx, 0x806e14 */
    ecx = ebx; /* 0x0071364E: mov ecx, ebx */
    RECOMP_CALL(sub_006F2A80); /* 0x00713650: call 0x6f2a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00713655: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00713658: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0071372B; /* 0x0071365A: jne 0x71372b */
L_00713660:
    eax = MEM32(edi + 0x2C); /* 0x00713660: mov eax, dword ptr [edi + 0x2c] */
    eax = MEM32(eax + 0xC50); /* 0x00713663: mov eax, dword ptr [eax + 0xc50] */
    eax = eax * 4 + 0x18; /* 0x00713669: lea eax, [eax*4 + 0x18] */
    MEM32(esi + 0x4C) = eax; /* 0x00713670: mov dword ptr [esi + 0x4c], eax */
    eax = MEM32(edi + 0x2C); /* 0x00713673: mov eax, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax + 0xC50)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xC50) = MEM32(eax + 0xC50) + 1; /* 0x00713676: inc dword ptr [eax + 0xc50] */
    _flag_k = FK_INC;
L_0071367C:
    esi = MEM32(ebp + (-0x34)); /* 0x0071367C: mov esi, dword ptr [ebp - 0x34] */
    edx = ebp + (-0x30); /* 0x0071367F: lea edx, [ebp - 0x30] */
    MEM32(ebp + (-0x30)) = 0x18u; /* 0x00713682: mov dword ptr [ebp - 0x30], 0x18 */
    MEM32(ebp + (-0x2C)) = 0x10u; /* 0x00713689: mov dword ptr [ebp - 0x2c], 0x10 */
    MEM32(ebp + (-0x24)) = 2; /* 0x00713690: mov dword ptr [ebp - 0x24], 2 */
    eax = MEM32(esi + 0x18); /* 0x00713697: mov eax, dword ptr [esi + 0x18] */
    MEM32(ebp + (-0x28)) = eax; /* 0x0071369A: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(edi + 0x2C); /* 0x0071369D: mov eax, dword ptr [edi + 0x2c] */
    MEM32(ebp + (-0x20)) = 0xFFFF8000u; /* 0x007136A0: mov dword ptr [ebp - 0x20], 0xffff8000 */
    MEM32(ebp + (-0x1C)) = 0x7FFFu; /* 0x007136A7: mov dword ptr [ebp - 0x1c], 0x7fff */
    PUSH32(esp, edx); /* 0x007136AE: push edx */
    eax = MEM32(eax + 0x18); /* 0x007136AF: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, 4); /* 0x007136B2: push 4 */
    PUSH32(esp, eax); /* 0x007136B4: push eax */
    ecx = MEM32(eax); /* 0x007136B5: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x18); /* 0x007136B7: mov eax, dword ptr [ecx + 0x18] */
    RECOMP_ICALL(eax); /* 0x007136BA: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007136BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0071372B; /* 0x007136BE: js 0x71372b */
L_007136C0:
    eax = MEM32(esi + 0x18); /* 0x007136C0: mov eax, dword ptr [esi + 0x18] */
    edx = ebp + (-0x18); /* 0x007136C3: lea edx, [ebp - 0x18] */
    MEM32(ebp + (-0x10)) = eax; /* 0x007136C6: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(edi + 0x2C); /* 0x007136C9: mov eax, dword ptr [edi + 0x2c] */
    MEM32(ebp + (-0x18)) = 0x14u; /* 0x007136CC: mov dword ptr [ebp - 0x18], 0x14 */
    MEM32(ebp + (-0x14)) = 0x10u; /* 0x007136D3: mov dword ptr [ebp - 0x14], 0x10 */
    MEM32(ebp + (-0xC)) = 2; /* 0x007136DA: mov dword ptr [ebp - 0xc], 2 */
    MEM32(ebp + (-0x8)) = 0; /* 0x007136E1: mov dword ptr [ebp - 8], 0 */
    eax = MEM32(eax + 0x18); /* 0x007136E8: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, edx); /* 0x007136EB: push edx */
    PUSH32(esp, 5); /* 0x007136EC: push 5 */
    PUSH32(esp, eax); /* 0x007136EE: push eax */
    ecx = MEM32(eax); /* 0x007136EF: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x18); /* 0x007136F1: mov eax, dword ptr [ecx + 0x18] */
    RECOMP_ICALL(eax); /* 0x007136F4: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007136F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0071372B; /* 0x007136F8: js 0x71372b */
L_007136FA:
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + 1; /* 0x007136FA: inc dword ptr [edi + 8] */
    _flag_k = FK_INC;
L_007136FD:
    eax = MEM32(edi + 0x2C); /* 0x007136FD: mov eax, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax + 0xC4C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xC4C) = MEM32(eax + 0xC4C) + 1; /* 0x00713700: inc dword ptr [eax + 0xc4c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00713706: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x2C); /* 0x00713708: mov ecx, dword ptr [edi + 0x2c] */
    /* cmp MEM32(ecx + 0xC4C), 0x100u */ /* 0x0071370B: cmp dword ptr [ecx + 0xc4c], 0x100 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC4C)); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x00713715: setne al */
    edi = POP32_VAL(esp); /* 0x00713718: pop edi */
    esi = POP32_VAL(esp); /* 0x00713719: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071371A: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0071371B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0071371E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00713720: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00713725: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00713727: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00713728: ret 8 */
L_0071372B:
    ecx = MEM32(ebp + (-0x4)); /* 0x0071372B: mov ecx, dword ptr [ebp - 4] */
    eax = 1; /* 0x0071372E: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x00713733: pop edi */
    esi = POP32_VAL(esp); /* 0x00713734: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00713735: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00713737: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x00713738: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0071373D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071373F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00713740: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00713750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00713750u);

L_00713750:
    PUSH32(esp, ebp); /* 0x00713750: push ebp */
    ebp = esp; /* 0x00713751: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00713753: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00713756: push ebx */
    PUSH32(esp, esi); /* 0x00713757: push esi */
    esi = ecx; /* 0x00713758: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0071375A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x0071375C: push edi */
    PUSH32(esp, 0x006E33F0u); /* 0x0071375D: push 0x6e33f0 */
    PUSH32(esp, 0xCu); /* 0x00713762: push 0xc */
    eax = MEM32(esi + 0x2C); /* 0x00713764: mov eax, dword ptr [esi + 0x2c] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x00713767: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x0071376A: mov dword ptr [ebp - 8], ebx */
    PUSH32(esp, MEM32(eax + 0xC4C)); /* 0x0071376D: push dword ptr [eax + 0xc4c] */
    edi = eax + 0x4C; /* 0x00713773: lea edi, [eax + 0x4c] */
    PUSH32(esp, edi); /* 0x00713776: push edi */
    RECOMP_ICALL(MEM32(0x7CC4C0)); /* 0x00713777: call dword ptr [0x7cc4c0] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x2C); /* 0x0071377D: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00713780: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x00713782: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0xC4C), edx */ /* 0x00713785: cmp dword ptr [eax + 0xc4c], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC4C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_007137C6; /* 0x0071378B: jle 0x7137c6 */
L_0071378D:
    ecx = edi + 0x8; /* 0x0071378D: lea ecx, [edi + 8] */
L_00713790:
    eax = MEM32(ecx + (-0x4)); /* 0x00713790: mov eax, dword ptr [ecx - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x00713793: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_007137B4; /* 0x00713796: je 0x7137b4 */
L_00713798:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00713798: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_007137A9; /* 0x00713799: je 0x7137a9 */
L_0071379B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0071379B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007137B7; /* 0x0071379C: jne 0x7137b7 */
L_0071379E:
    eax = MEM32(ebp + (-0x4)); /* 0x0071379E: mov eax, dword ptr [ebp - 4] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x007137A1: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x007137A3: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x007137A4: mov dword ptr [ebp - 4], eax */
    goto L_007137B7; /* 0x007137A7: jmp 0x7137b7 */
L_007137A9:
    eax = MEM32(ebp + (-0x8)); /* 0x007137A9: mov eax, dword ptr [ebp - 8] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x007137AC: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x007137AE: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x007137AF: mov dword ptr [ebp - 8], eax */
    goto L_007137B7; /* 0x007137B2: jmp 0x7137b7 */
L_007137B4:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x007137B4: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x007137B6: inc ebx */
    _flag_k = FK_INC;
L_007137B7:
    eax = MEM32(esi + 0x2C); /* 0x007137B7: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x007137BA: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x007137BB: add ecx, 0xc */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(eax + 0xC4C) */ /* 0x007137BE: cmp edx, dword ptr [eax + 0xc4c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0xC4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_00713790; /* 0x007137C4: jl 0x713790 */
L_007137C6:
    edi = POP32_VAL(esp); /* 0x007137C6: pop edi */
    esi = POP32_VAL(esp); /* 0x007137C7: pop esi */
    ebx = POP32_VAL(esp); /* 0x007137C8: pop ebx */
    esp = ebp; /* 0x007137C9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007137CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007137CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_007137D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007137D0u);

L_007137D0:
    PUSH32(esp, ebp); /* 0x007137D0: push ebp */
    ebp = esp; /* 0x007137D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x007137D3: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x007137D6: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x007137DB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x007137DD: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x007137E0: push esi */
    PUSH32(esp, edi); /* 0x007137E1: push edi */
    edi = ecx; /* 0x007137E2: mov edi, ecx */
    esi = edx; /* 0x007137E4: mov esi, edx */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x007137E6: xorps xmm0, xmm0 */
    PUSH32(esp, 0); /* 0x007137E9: push 0 */
    eax = MEM32(edi + 0x2C); /* 0x007137EB: mov eax, dword ptr [edi + 0x2c] */
    MEM32(eax + 0x48) = 1; /* 0x007137EE: mov dword ptr [eax + 0x48], 1 */
    eax = MEM32(edi + 0x2C); /* 0x007137F5: mov eax, dword ptr [edi + 0x2c] */
    MEM32(eax + 0x1C) = 0x2Cu; /* 0x007137F8: mov dword ptr [eax + 0x1c], 0x2c */
    eax = ebp + (-0x1C); /* 0x007137FF: lea eax, [ebp - 0x1c] */
    ecx = MEM32(0x87CCB0); /* 0x00713802: mov ecx, dword ptr [0x87ccb0] */
    xmm_st(ebp + (-0x18), _xmm[0]); /* 0x00713808: movdqu xmmword ptr [ebp - 0x18], xmm0 */
    PUSH32(esp, eax); /* 0x0071380D: push eax */
    MEM32(ebp + (-0x8)) = 0; /* 0x0071380E: mov dword ptr [ebp - 8], 0 */
    eax = esi + 0x28; /* 0x00713815: lea eax, [esi + 0x28] */
    MEM32(ebp + (-0x18)) = 0x14u; /* 0x00713818: mov dword ptr [ebp - 0x18], 0x14 */
    MEM32(ebp + (-0x14)) = 0x10u; /* 0x0071381F: mov dword ptr [ebp - 0x14], 0x10 */
    edx = MEM32(ecx); /* 0x00713826: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x00713828: push eax */
    PUSH32(esp, ecx); /* 0x00713829: push ecx */
    eax = MEM32(edx + 0xC); /* 0x0071382A: mov eax, dword ptr [edx + 0xc] */
    RECOMP_ICALL(eax); /* 0x0071382D: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0071382F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00713856; /* 0x00713831: jns 0x713856 */
L_00713833:
    PUSH32(esp, eax); /* 0x00713833: push eax */
    PUSH32(esp, 0x00807D18u); /* 0x00713834: push 0x807d18 */
    PUSH32(esp, 0x00807E40u); /* 0x00713839: push 0x807e40 */
    RECOMP_CALL(sub_006EDB70); /* 0x0071383E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00713843: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00713846: pop edi */
    esi = POP32_VAL(esp); /* 0x00713847: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x00713848: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0071384B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0071384D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00713852: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00713854: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713855: ret  */
L_00713856:
    ecx = MEM32(ebp + (-0x1C)); /* 0x00713856: mov ecx, dword ptr [ebp - 0x1c] */
    eax = MEM32(edi + 0x2C); /* 0x00713859: mov eax, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x0071385C: add eax, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0071385F: push eax */
    edx = MEM32(ecx); /* 0x00713860: mov edx, dword ptr [ecx] */
    PUSH32(esp, 0x00806CF4u); /* 0x00713862: push 0x806cf4 */
    PUSH32(esp, ecx); /* 0x00713867: push ecx */
    eax = MEM32(edx); /* 0x00713868: mov eax, dword ptr [edx] */
    RECOMP_ICALL(eax); /* 0x0071386A: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1C)); /* 0x0071386C: mov ecx, dword ptr [ebp - 0x1c] */
    esi = eax; /* 0x0071386F: mov esi, eax */
    PUSH32(esp, ecx); /* 0x00713871: push ecx */
    edx = MEM32(ecx); /* 0x00713872: mov edx, dword ptr [ecx] */
    ecx = MEM32(edx + 0x8); /* 0x00713874: mov ecx, dword ptr [edx + 8] */
    RECOMP_ICALL(ecx); /* 0x00713877: call ecx */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x00713879: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_007138A0; /* 0x0071387B: jns 0x7138a0 */
L_0071387D:
    PUSH32(esp, esi); /* 0x0071387D: push esi */
    PUSH32(esp, 0x00807CF4u); /* 0x0071387E: push 0x807cf4 */
    PUSH32(esp, 0x00807E40u); /* 0x00713883: push 0x807e40 */
    RECOMP_CALL(sub_006EDB70); /* 0x00713888: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0071388D: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00713890: pop edi */
    esi = POP32_VAL(esp); /* 0x00713891: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x00713892: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00713895: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00713897: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0071389C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071389E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071389F: ret  */
L_007138A0:
    eax = MEM32(edi + 0x2C); /* 0x007138A0: mov eax, dword ptr [edi + 0x2c] */
    PUSH32(esp, 9); /* 0x007138A3: push 9 */
    PUSH32(esp, MEM32(0x87CC34)); /* 0x007138A5: push dword ptr [0x87cc34] */
    eax = MEM32(eax + 0x18); /* 0x007138AB: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x007138AE: push eax */
    ecx = MEM32(eax); /* 0x007138AF: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x34); /* 0x007138B1: mov eax, dword ptr [ecx + 0x34] */
    RECOMP_ICALL(eax); /* 0x007138B4: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007138B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_007138DD; /* 0x007138B8: jns 0x7138dd */
L_007138BA:
    PUSH32(esp, eax); /* 0x007138BA: push eax */
    PUSH32(esp, 0x00807DECu); /* 0x007138BB: push 0x807dec */
    PUSH32(esp, 0x00807E40u); /* 0x007138C0: push 0x807e40 */
    RECOMP_CALL(sub_006EDB70); /* 0x007138C5: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007138CA: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x007138CD: pop edi */
    esi = POP32_VAL(esp); /* 0x007138CE: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x007138CF: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007138D2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007138D4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007138D9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007138DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007138DC: ret  */
L_007138DD:
    eax = MEM32(edi + 0x2C); /* 0x007138DD: mov eax, dword ptr [edi + 0x2c] */
    PUSH32(esp, 0x007D6034u); /* 0x007138E0: push 0x7d6034 */
    eax = MEM32(eax + 0x18); /* 0x007138E5: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x007138E8: push eax */
    ecx = MEM32(eax); /* 0x007138E9: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x2C); /* 0x007138EB: mov eax, dword ptr [ecx + 0x2c] */
    RECOMP_ICALL(eax); /* 0x007138EE: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007138F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00713917; /* 0x007138F2: jns 0x713917 */
L_007138F4:
    PUSH32(esp, eax); /* 0x007138F4: push eax */
    PUSH32(esp, 0x00807DC8u); /* 0x007138F5: push 0x807dc8 */
    PUSH32(esp, 0x00807E40u); /* 0x007138FA: push 0x807e40 */
    RECOMP_CALL(sub_006EDB70); /* 0x007138FF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00713904: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00713907: pop edi */
    esi = POP32_VAL(esp); /* 0x00713908: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x00713909: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0071390C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0071390E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00713913: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00713915: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713916: ret  */
L_00713917:
    eax = MEM32(edi + 0x2C); /* 0x00713917: mov eax, dword ptr [edi + 0x2c] */
    ecx = MEM32(eax + 0x18); /* 0x0071391A: mov ecx, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x0071391D: add eax, 0x1c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00713920: push eax */
    PUSH32(esp, ecx); /* 0x00713921: push ecx */
    edx = MEM32(ecx); /* 0x00713922: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0xC); /* 0x00713924: mov eax, dword ptr [edx + 0xc] */
    RECOMP_ICALL(eax); /* 0x00713927: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00713929: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00713950; /* 0x0071392B: jns 0x713950 */
L_0071392D:
    PUSH32(esp, eax); /* 0x0071392D: push eax */
    PUSH32(esp, 0x00807DA0u); /* 0x0071392E: push 0x807da0 */
    PUSH32(esp, 0x00807E40u); /* 0x00713933: push 0x807e40 */
    RECOMP_CALL(sub_006EDB70); /* 0x00713938: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0071393D: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00713940: pop edi */
    esi = POP32_VAL(esp); /* 0x00713941: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x00713942: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00713945: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00713947: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0071394C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071394E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071394F: ret  */
L_00713950:
    eax = MEM32(edi + 0x2C); /* 0x00713950: mov eax, dword ptr [edi + 0x2c] */
    /* test MEM32(eax + 0x20), 0x100u */ /* 0x00713953: test dword ptr [eax + 0x20], 0x100 */
    _flag_a = (uint32_t)(MEM32(eax + 0x20)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00713A00; /* 0x0071395A: je 0x713a00 */
L_00713960:
    eax = MEM32(eax + 0x18); /* 0x00713960: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x00713963: push eax */
    ecx = MEM32(eax); /* 0x00713964: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x1C); /* 0x00713966: mov eax, dword ptr [ecx + 0x1c] */
    RECOMP_ICALL(eax); /* 0x00713969: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0071396B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00713992; /* 0x0071396D: jns 0x713992 */
L_0071396F:
    PUSH32(esp, eax); /* 0x0071396F: push eax */
    PUSH32(esp, 0x00807D80u); /* 0x00713970: push 0x807d80 */
    PUSH32(esp, 0x00807E40u); /* 0x00713975: push 0x807e40 */
    RECOMP_CALL(sub_006EDB70); /* 0x0071397A: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0071397F: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00713982: pop edi */
    esi = POP32_VAL(esp); /* 0x00713983: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x00713984: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00713987: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00713989: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0071398E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00713990: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713991: ret  */
L_00713992:
    eax = MEM32(edi + 0x2C); /* 0x00713992: mov eax, dword ptr [edi + 0x2c] */
    PUSH32(esp, 1); /* 0x00713995: push 1 */
    eax = MEM32(eax + 0x18); /* 0x00713997: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x0071399A: push eax */
    ecx = MEM32(eax); /* 0x0071399B: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x58); /* 0x0071399D: mov eax, dword ptr [ecx + 0x58] */
    RECOMP_ICALL(eax); /* 0x007139A0: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x2C); /* 0x007139A2: mov eax, dword ptr [edi + 0x2c] */
    eax = MEM32(eax + 0x18); /* 0x007139A5: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x007139A8: push eax */
    ecx = MEM32(eax); /* 0x007139A9: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x20); /* 0x007139AB: mov eax, dword ptr [ecx + 0x20] */
    RECOMP_ICALL(eax); /* 0x007139AE: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007139B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_007139D7; /* 0x007139B2: jns 0x7139d7 */
L_007139B4:
    PUSH32(esp, eax); /* 0x007139B4: push eax */
    PUSH32(esp, 0x00807E80u); /* 0x007139B5: push 0x807e80 */
    PUSH32(esp, 0x00807E40u); /* 0x007139BA: push 0x807e40 */
    RECOMP_CALL(sub_006EDB70); /* 0x007139BF: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007139C4: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x007139C7: pop edi */
    esi = POP32_VAL(esp); /* 0x007139C8: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x007139C9: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007139CC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007139CE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007139D3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007139D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007139D6: ret  */
L_007139D7:
    eax = MEM32(edi + 0x2C); /* 0x007139D7: mov eax, dword ptr [edi + 0x2c] */
    edx = ebp + (-0x18); /* 0x007139DA: lea edx, [ebp - 0x18] */
    MEM32(ebp + (-0x10)) = 0; /* 0x007139DD: mov dword ptr [ebp - 0x10], 0 */
    MEM32(ebp + (-0xC)) = 0; /* 0x007139E4: mov dword ptr [ebp - 0xc], 0 */
    MEM32(ebp + (-0x8)) = 1; /* 0x007139EB: mov dword ptr [ebp - 8], 1 */
    eax = MEM32(eax + 0x18); /* 0x007139F2: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, edx); /* 0x007139F5: push edx */
    PUSH32(esp, 9); /* 0x007139F6: push 9 */
    PUSH32(esp, eax); /* 0x007139F8: push eax */
    ecx = MEM32(eax); /* 0x007139F9: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x18); /* 0x007139FB: mov eax, dword ptr [ecx + 0x18] */
    RECOMP_ICALL(eax); /* 0x007139FE: call eax */
    RECOMP_FLAGS_IN();
L_00713A00:
    eax = MEM32(edi + 0x2C); /* 0x00713A00: mov eax, dword ptr [edi + 0x2c] */
    PUSH32(esp, 0x1Fu); /* 0x00713A03: push 0x1f */
    PUSH32(esp, edi); /* 0x00713A05: push edi */
    PUSH32(esp, 0x00713500u); /* 0x00713A06: push 0x713500 */
    eax = MEM32(eax + 0x18); /* 0x00713A0B: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x00713A0E: push eax */
    ecx = MEM32(eax); /* 0x00713A0F: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x10); /* 0x00713A11: mov eax, dword ptr [ecx + 0x10] */
    RECOMP_ICALL(eax); /* 0x00713A14: call eax */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x00713A16: mov ecx, edi */
    RECOMP_CALL(sub_00713750); /* 0x00713A18: call 0x713750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x2C); /* 0x00713A1D: mov eax, dword ptr [edi + 0x2c] */
    edx = ebp + (-0x18); /* 0x00713A20: lea edx, [ebp - 0x18] */
    MEM32(ebp + (-0x10)) = 0; /* 0x00713A23: mov dword ptr [ebp - 0x10], 0 */
    MEM32(ebp + (-0xC)) = 0; /* 0x00713A2A: mov dword ptr [ebp - 0xc], 0 */
    MEM32(ebp + (-0x8)) = 0x20u; /* 0x00713A31: mov dword ptr [ebp - 8], 0x20 */
    eax = MEM32(eax + 0x18); /* 0x00713A38: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, edx); /* 0x00713A3B: push edx */
    PUSH32(esp, 1); /* 0x00713A3C: push 1 */
    PUSH32(esp, eax); /* 0x00713A3E: push eax */
    ecx = MEM32(eax); /* 0x00713A3F: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x18); /* 0x00713A41: mov eax, dword ptr [ecx + 0x18] */
    RECOMP_ICALL(eax); /* 0x00713A44: call eax */
    RECOMP_FLAGS_IN();
    /* cmp eax, 2 */ /* 0x00713A46: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00713A67; /* 0x00713A49: jne 0x713a67 */
L_00713A4B:
    eax = MEM32(edi + 0x2C); /* 0x00713A4B: mov eax, dword ptr [edi + 0x2c] */
    MEM32(eax + 0x48) = 0; /* 0x00713A4E: mov dword ptr [eax + 0x48], 0 */
L_00713A55:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00713A55: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00713A57: pop edi */
    esi = POP32_VAL(esp); /* 0x00713A58: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x00713A59: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00713A5C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00713A5E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00713A63: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00713A65: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713A66: ret  */
L_00713A67:
    /* test eax, eax */ /* 0x00713A67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00713A55; /* 0x00713A69: jns 0x713a55 */
L_00713A6B:
    PUSH32(esp, eax); /* 0x00713A6B: push eax */
    PUSH32(esp, 0x00807E5Cu); /* 0x00713A6C: push 0x807e5c */
    PUSH32(esp, 0x00807E40u); /* 0x00713A71: push 0x807e40 */
    RECOMP_CALL(sub_006EDB70); /* 0x00713A76: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x00713A7B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00713A7E: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00713A81: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00713A83: pop edi */
    esi = POP32_VAL(esp); /* 0x00713A84: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x00713A85: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00713A8A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00713A8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713A8D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00713A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00713A90u);

L_00713A90:
    PUSH32(esp, ebp); /* 0x00713A90: push ebp */
    ebp = esp; /* 0x00713A91: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x00713A93: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00713A96: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00713A9B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00713A9D: mov dword ptr [ebp - 4], eax */
    _xmm[0] = xmm_ld(0x809A70); /* 0x00713AA0: movdqa xmm0, xmmword ptr [0x809a70] */
    eax = 0xFFFFu; /* 0x00713AA8: mov eax, 0xffff */
    PUSH32(esp, esi); /* 0x00713AAD: push esi */
    esi = ecx; /* 0x00713AAE: mov esi, ecx */
    xmm_st(ebp + (-0x24), _xmm[0]); /* 0x00713AB0: movdqu xmmword ptr [ebp - 0x24], xmm0 */
    _xmm[0] = xmm_ld(0x809A90); /* 0x00713AB5: movdqa xmm0, xmmword ptr [0x809a90] */
    xmm_st(ebp + (-0x14), _xmm[0]); /* 0x00713ABD: movdqu xmmword ptr [ebp - 0x14], xmm0 */
    /* cmp LO16(esi), LO16(eax) */ /* 0x00713AC2: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00713AD8; /* 0x00713AC5: jne 0x713ad8 */
L_00713AC7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00713AC7: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x00713AC9: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x00713ACA: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00713ACD: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00713ACF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00713AD4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00713AD6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713AD7: ret  */
L_00713AD8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x8CAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x8CAu; /* 0x00713AD8: add esi, 0x8ca */
    _flag_k = FK_ADD;
    eax = 0xE90452D5u; /* 0x00713ADE: mov eax, 0xe90452d5 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x00713AE3: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    eax = 0xE90452D5u; /* 0x00713AE5: mov eax, 0xe90452d5 */
    if (15u) _cf = (((edx) >> 14) & 1u); /* 0x00713AEA: shr edx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((edx >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 15u; /* 0x00713AEA: shr edx, 0xf */
    ecx = (uint32_t)((int32_t)edx * (int32_t)0x8CA0u); /* 0x00713AED: imul ecx, edx, 0x8ca0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x00713AF3: sub esi, ecx */
    _flag_k = FK_CMP;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x00713AF5: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (12u) _cf = (((edx) >> 11) & 1u); /* 0x00713AF7: shr edx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((edx >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 12u; /* 0x00713AF7: shr edx, 0xc */
    /* cmp edx, 8 */ /* 0x00713AFA: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_00713AC7; /* 0x00713AFD: jae 0x713ac7 */
L_00713AFF:
    ecx = MEM32(ebp + (-0x4)); /* 0x00713AFF: mov ecx, dword ptr [ebp - 4] */
    SET_LO8(eax, MEM8(ebp + edx * 4 + (-0x24))); /* 0x00713B02: mov al, byte ptr [ebp + edx*4 - 0x24] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00713B06: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00713B08: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x00713B09: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00713B0E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00713B10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713B11: ret  */
    RECOMP_REGS_OUT();
}

void sub_00713F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00713F90u);

    goto L_00713F90;
L_00713B20:
    PUSH32(esp, ebp); /* 0x00713B20: push ebp */
    ebp = esp; /* 0x00713B21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2BCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2BCu; /* 0x00713B23: sub esp, 0x2bc */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00713B29: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00713B2E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00713B30: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x00713B33: push ebx */
    PUSH32(esp, esi); /* 0x00713B34: push esi */
    PUSH32(esp, edi); /* 0x00713B35: push edi */
    edi = ecx; /* 0x00713B36: mov edi, ecx */
    MEM32(ebp + (-0x2B0)) = 0x20u; /* 0x00713B38: mov dword ptr [ebp - 0x2b0], 0x20 */
    PUSH32(esp, 0); /* 0x00713B42: push 0 */
    ecx = ebp + (-0x2B0); /* 0x00713B44: lea ecx, [ebp - 0x2b0] */
    PUSH32(esp, ecx); /* 0x00713B4A: push ecx */
    eax = MEM32(edi + 0x2C); /* 0x00713B4B: mov eax, dword ptr [edi + 0x2c] */
    ecx = ebp + (-0x2A8); /* 0x00713B4E: lea ecx, [ebp - 0x2a8] */
    PUSH32(esp, ecx); /* 0x00713B54: push ecx */
    PUSH32(esp, 0x14u); /* 0x00713B55: push 0x14 */
    eax = MEM32(eax + 0x18); /* 0x00713B57: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x00713B5A: push eax */
    edx = MEM32(eax); /* 0x00713B5B: mov edx, dword ptr [eax] */
    eax = MEM32(edx + 0x28); /* 0x00713B5D: mov eax, dword ptr [edx + 0x28] */
    RECOMP_ICALL(eax); /* 0x00713B60: call eax */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x8007001Eu */ /* 0x00713B62: cmp eax, 0x8007001e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8007001Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00713B70; /* 0x00713B67: je 0x713b70 */
L_00713B69:
    /* cmp eax, 0x8007000Cu */ /* 0x00713B69: cmp eax, 0x8007000c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8007000Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00713B9E; /* 0x00713B6E: jne 0x713b9e */
L_00713B70:
    eax = MEM32(edi + 0x2C); /* 0x00713B70: mov eax, dword ptr [edi + 0x2c] */
    eax = MEM32(eax + 0x18); /* 0x00713B73: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x00713B76: push eax */
    ecx = MEM32(eax); /* 0x00713B77: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x1C); /* 0x00713B79: mov eax, dword ptr [ecx + 0x1c] */
    RECOMP_ICALL(eax); /* 0x00713B7C: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x2C); /* 0x00713B7E: mov eax, dword ptr [edi + 0x2c] */
    edx = ebp + (-0x2B0); /* 0x00713B81: lea edx, [ebp - 0x2b0] */
    PUSH32(esp, 0); /* 0x00713B87: push 0 */
    PUSH32(esp, edx); /* 0x00713B89: push edx */
    edx = ebp + (-0x2A8); /* 0x00713B8A: lea edx, [ebp - 0x2a8] */
    eax = MEM32(eax + 0x18); /* 0x00713B90: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, edx); /* 0x00713B93: push edx */
    PUSH32(esp, 0x14u); /* 0x00713B94: push 0x14 */
    PUSH32(esp, eax); /* 0x00713B96: push eax */
    ecx = MEM32(eax); /* 0x00713B97: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x28); /* 0x00713B99: mov eax, dword ptr [ecx + 0x28] */
    RECOMP_ICALL(eax); /* 0x00713B9C: call eax */
    RECOMP_FLAGS_IN();
L_00713B9E:
    /* test eax, eax */ /* 0x00713B9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00713BC7; /* 0x00713BA0: jns 0x713bc7 */
L_00713BA2:
    eax = MEM32(edi + 0x2C); /* 0x00713BA2: mov eax, dword ptr [edi + 0x2c] */
    MEM32(eax + 0x14) = 1; /* 0x00713BA5: mov dword ptr [eax + 0x14], 1 */
    eax = MEM32(edi + 0x2C); /* 0x00713BAC: mov eax, dword ptr [edi + 0x2c] */
    MEM32(eax + 0x10) = 1; /* 0x00713BAF: mov dword ptr [eax + 0x10], 1 */
    edi = POP32_VAL(esp); /* 0x00713BB6: pop edi */
    esi = POP32_VAL(esp); /* 0x00713BB7: pop esi */
    ebx = POP32_VAL(esp); /* 0x00713BB8: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00713BB9: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00713BBC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00713BBE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00713BC3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00713BC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713BC6: ret  */
L_00713BC7:
    eax = MEM32(ebp + (-0x2B0)); /* 0x00713BC7: mov eax, dword ptr [ebp - 0x2b0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00713BCD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2BC)) = edx; /* 0x00713BCF: mov dword ptr [ebp - 0x2bc], edx */
    /* test eax, eax */ /* 0x00713BD5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00713D1E; /* 0x00713BD7: jle 0x713d1e */
L_00713BDD:
    ebx = ebp + (-0x2A4); /* 0x00713BDD: lea ebx, [ebp - 0x2a4] */
L_00713BE3:
    ecx = MEM32(edi + 0x2C); /* 0x00713BE3: mov ecx, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00713BE6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2B8)) = esi; /* 0x00713BE8: mov dword ptr [ebp - 0x2b8], esi */
    /* cmp MEM32(ecx + 0xC4C), esi */ /* 0x00713BEE: cmp dword ptr [ecx + 0xc4c], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC4C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_00713D0C; /* 0x00713BF4: jle 0x713d0c */
L_00713BFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00713BFA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2AC)) = edx; /* 0x00713BFC: mov dword ptr [ebp - 0x2ac], edx */
L_00713C02:
    eax = MEM32(ebx + (-0x4)); /* 0x00713C02: mov eax, dword ptr [ebx - 4] */
    /* cmp eax, MEM32(edx + ecx + 0x4C) */ /* 0x00713C05: cmp eax, dword ptr [edx + ecx + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + ecx + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00713CE1; /* 0x00713C09: jne 0x713ce1 */
L_00713C0F:
    eax = MEM32(edx + ecx + 0x50); /* 0x00713C0F: mov eax, dword ptr [edx + ecx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x00713C13: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_00713CC3; /* 0x00713C16: je 0x713cc3 */
L_00713C1C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00713C1C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_00713CB2; /* 0x00713C1D: je 0x713cb2 */
L_00713C23:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00713C23: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00713CE1; /* 0x00713C24: jne 0x713ce1 */
L_00713C2A:
    _xmm[0] = xmm_ld(0x809A70); /* 0x00713C2A: movdqa xmm0, xmmword ptr [0x809a70] */
    eax = 0xFFFFu; /* 0x00713C32: mov eax, 0xffff */
    esi = MEM32(ebx); /* 0x00713C37: mov esi, dword ptr [ebx] */
    xmm_st(ebp + (-0x24), _xmm[0]); /* 0x00713C39: movdqu xmmword ptr [ebp - 0x24], xmm0 */
    _xmm[0] = xmm_ld(0x809A90); /* 0x00713C3E: movdqa xmm0, xmmword ptr [0x809a90] */
    xmm_st(ebp + (-0x14), _xmm[0]); /* 0x00713C46: movdqu xmmword ptr [ebp - 0x14], xmm0 */
    /* cmp LO16(esi), LO16(eax) */ /* 0x00713C4B: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00713C59; /* 0x00713C4E: jne 0x713c59 */
L_00713C50:
    MEM8(ebp + (-0x2B4)) = (uint8_t)(0); /* 0x00713C50: mov byte ptr [ebp - 0x2b4], 0 */
    goto L_00713C99; /* 0x00713C57: jmp 0x713c99 */
L_00713C59:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x8CAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x8CAu; /* 0x00713C59: add esi, 0x8ca */
    _flag_k = FK_ADD;
    eax = 0xE90452D5u; /* 0x00713C5F: mov eax, 0xe90452d5 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x00713C64: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (15u) _cf = (((edx) >> 14) & 1u); /* 0x00713C66: shr edx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((edx >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 15u; /* 0x00713C66: shr edx, 0xf */
    eax = (uint32_t)((int32_t)edx * (int32_t)0x8CA0u); /* 0x00713C69: imul eax, edx, 0x8ca0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x00713C6F: sub esi, eax */
    _flag_k = FK_CMP;
    eax = 0xE90452D5u; /* 0x00713C71: mov eax, 0xe90452d5 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x00713C76: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (12u) _cf = (((edx) >> 11) & 1u); /* 0x00713C78: shr edx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((edx >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 12u; /* 0x00713C78: shr edx, 0xc */
    /* cmp edx, 8 */ /* 0x00713C7B: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00713C89; /* 0x00713C7E: jb 0x713c89 */
L_00713C80:
    MEM8(ebp + (-0x2B4)) = (uint8_t)(0); /* 0x00713C80: mov byte ptr [ebp - 0x2b4], 0 */
    goto L_00713C93; /* 0x00713C87: jmp 0x713c93 */
L_00713C89:
    SET_LO8(eax, MEM8(ebp + edx * 4 + (-0x24))); /* 0x00713C89: mov al, byte ptr [ebp + edx*4 - 0x24] */
    MEM8(ebp + (-0x2B4)) = (uint8_t)(LO8(eax)); /* 0x00713C8D: mov byte ptr [ebp - 0x2b4], al */
L_00713C93:
    edx = MEM32(ebp + (-0x2AC)); /* 0x00713C93: mov edx, dword ptr [ebp - 0x2ac] */
L_00713C99:
    SET_LO8(edx, MEM8(edx + ecx + 0x54)); /* 0x00713C99: mov dl, byte ptr [edx + ecx + 0x54] */
    ecx = edi; /* 0x00713C9D: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + (-0x2B4))); /* 0x00713C9F: push dword ptr [ebp - 0x2b4] */
    RECOMP_CALL(sub_006EED60); /* 0x00713CA5: call 0x6eed60 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x2B8)); /* 0x00713CAA: mov esi, dword ptr [ebp - 0x2b8] */
    goto L_00713CD8; /* 0x00713CB0: jmp 0x713cd8 */
L_00713CB2:
    eax = (uint32_t)MEM16(ebx); /* 0x00713CB2: movzx eax, word ptr [ebx] */
    SET_LO8(edx, MEM8(edx + ecx + 0x54)); /* 0x00713CB5: mov dl, byte ptr [edx + ecx + 0x54] */
    ecx = edi; /* 0x00713CB9: mov ecx, edi */
    PUSH32(esp, eax); /* 0x00713CBB: push eax */
    RECOMP_CALL(sub_006EEC80); /* 0x00713CBC: call 0x6eec80 */
    RECOMP_FLAGS_IN();
    goto L_00713CD8; /* 0x00713CC1: jmp 0x713cd8 */
L_00713CC3:
    /* cmp MEM32(ebx), 0 */ /* 0x00713CC3: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, MEM8(edx + ecx + 0x54)); /* 0x00713CC6: mov dl, byte ptr [edx + ecx + 0x54] */
    ecx = edi; /* 0x00713CCA: mov ecx, edi */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x00713CCC: setne al */
    eax = (uint32_t)LO8(eax); /* 0x00713CCF: movzx eax, al */
    PUSH32(esp, eax); /* 0x00713CD2: push eax */
    RECOMP_CALL(sub_006EEE10); /* 0x00713CD3: call 0x6eee10 */
    RECOMP_FLAGS_IN();
L_00713CD8:
    edx = MEM32(ebp + (-0x2AC)); /* 0x00713CD8: mov edx, dword ptr [ebp - 0x2ac] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00713CDE: add esp, 4 */
    _flag_k = FK_ADD;
L_00713CE1:
    ecx = MEM32(edi + 0x2C); /* 0x00713CE1: mov ecx, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00713CE4: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x00713CE5: add edx, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2B8)) = esi; /* 0x00713CE8: mov dword ptr [ebp - 0x2b8], esi */
    MEM32(ebp + (-0x2AC)) = edx; /* 0x00713CEE: mov dword ptr [ebp - 0x2ac], edx */
    /* cmp esi, MEM32(ecx + 0xC4C) */ /* 0x00713CF4: cmp esi, dword ptr [ecx + 0xc4c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0xC4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_00713C02; /* 0x00713CFA: jl 0x713c02 */
L_00713D00:
    eax = MEM32(ebp + (-0x2B0)); /* 0x00713D00: mov eax, dword ptr [ebp - 0x2b0] */
    edx = MEM32(ebp + (-0x2BC)); /* 0x00713D06: mov edx, dword ptr [ebp - 0x2bc] */
L_00713D0C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x00713D0C: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x14u; /* 0x00713D0D: add ebx, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2BC)) = edx; /* 0x00713D10: mov dword ptr [ebp - 0x2bc], edx */
    /* cmp edx, eax */ /* 0x00713D16: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_00713BE3; /* 0x00713D18: jl 0x713be3 */
L_00713D1E:
    ecx = MEM32(ebp + (-0x4)); /* 0x00713D1E: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x00713D21: pop edi */
    esi = POP32_VAL(esp); /* 0x00713D22: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00713D23: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00713D25: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x00713D26: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00713D2B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00713D2D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713D2E: ret  */
L_00713D30:
    PUSH32(esp, ebp); /* 0x00713D30: push ebp */
    ebp = esp; /* 0x00713D31: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x11Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x11Cu; /* 0x00713D33: sub esp, 0x11c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00713D39: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00713D3E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00713D40: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x00713D43: push ebx */
    PUSH32(esp, esi); /* 0x00713D44: push esi */
    esi = ecx; /* 0x00713D45: mov esi, ecx */
    ecx = ebp + (-0x118); /* 0x00713D47: lea ecx, [ebp - 0x118] */
    PUSH32(esp, edi); /* 0x00713D4D: push edi */
    PUSH32(esp, ecx); /* 0x00713D4E: push ecx */
    PUSH32(esp, 0x110u); /* 0x00713D4F: push 0x110 */
    eax = MEM32(esi + 0x2C); /* 0x00713D54: mov eax, dword ptr [esi + 0x2c] */
    eax = MEM32(eax + 0x18); /* 0x00713D57: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x00713D5A: push eax */
    edx = MEM32(eax); /* 0x00713D5B: mov edx, dword ptr [eax] */
    eax = MEM32(edx + 0x24); /* 0x00713D5D: mov eax, dword ptr [edx + 0x24] */
    RECOMP_ICALL(eax); /* 0x00713D60: call eax */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x8007001Eu */ /* 0x00713D62: cmp eax, 0x8007001e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8007001Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00713D70; /* 0x00713D67: je 0x713d70 */
L_00713D69:
    /* cmp eax, 0x8007000Cu */ /* 0x00713D69: cmp eax, 0x8007000c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8007000Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00713D98; /* 0x00713D6E: jne 0x713d98 */
L_00713D70:
    eax = MEM32(esi + 0x2C); /* 0x00713D70: mov eax, dword ptr [esi + 0x2c] */
    eax = MEM32(eax + 0x18); /* 0x00713D73: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x00713D76: push eax */
    ecx = MEM32(eax); /* 0x00713D77: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x1C); /* 0x00713D79: mov eax, dword ptr [ecx + 0x1c] */
    RECOMP_ICALL(eax); /* 0x00713D7C: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x2C); /* 0x00713D7E: mov eax, dword ptr [esi + 0x2c] */
    edx = ebp + (-0x118); /* 0x00713D81: lea edx, [ebp - 0x118] */
    PUSH32(esp, edx); /* 0x00713D87: push edx */
    PUSH32(esp, 0x110u); /* 0x00713D88: push 0x110 */
    eax = MEM32(eax + 0x18); /* 0x00713D8D: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x00713D90: push eax */
    ecx = MEM32(eax); /* 0x00713D91: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x24); /* 0x00713D93: mov eax, dword ptr [ecx + 0x24] */
    RECOMP_ICALL(eax); /* 0x00713D96: call eax */
    RECOMP_FLAGS_IN();
L_00713D98:
    /* test eax, eax */ /* 0x00713D98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00713DC1; /* 0x00713D9A: je 0x713dc1 */
L_00713D9C:
    eax = MEM32(esi + 0x2C); /* 0x00713D9C: mov eax, dword ptr [esi + 0x2c] */
    MEM32(eax + 0x14) = 1; /* 0x00713D9F: mov dword ptr [eax + 0x14], 1 */
    eax = MEM32(esi + 0x2C); /* 0x00713DA6: mov eax, dword ptr [esi + 0x2c] */
    MEM32(eax + 0x10) = 1; /* 0x00713DA9: mov dword ptr [eax + 0x10], 1 */
    edi = POP32_VAL(esp); /* 0x00713DB0: pop edi */
    esi = POP32_VAL(esp); /* 0x00713DB1: pop esi */
    ebx = POP32_VAL(esp); /* 0x00713DB2: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00713DB3: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00713DB6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00713DB8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00713DBD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00713DBF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713DC0: ret  */
L_00713DC1:
    edi = MEM32(esi + 0x2C); /* 0x00713DC1: mov edi, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00713DC4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0xC4C), ebx */ /* 0x00713DC6: cmp dword ptr [edi + 0xc4c], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0xC4C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_00713F2F; /* 0x00713DCC: jle 0x713f2f */
L_00713DD2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00713DD2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x11C)) = eax; /* 0x00713DD4: mov dword ptr [ebp - 0x11c], eax */
    ebx = ebx; /* 0x00713DDA: lea ebx, [ebx] */
L_00713DE0:
    eax = MEM32(eax + edi + 0x50); /* 0x00713DE0: mov eax, dword ptr [eax + edi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x00713DE4: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_00713EE9; /* 0x00713DE7: je 0x713ee9 */
L_00713DED:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00713DED: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_00713E27; /* 0x00713DEE: je 0x713e27 */
L_00713DF0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00713DF0: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00713F10; /* 0x00713DF1: jne 0x713f10 */
L_00713DF7:
    ecx = MEM32(ebp + (-0x11C)); /* 0x00713DF7: mov ecx, dword ptr [ebp - 0x11c] */
    ecx = MEM32(ecx + edi + 0x4C); /* 0x00713DFD: mov ecx, dword ptr [ecx + edi + 0x4c] */
    ecx = MEM32(ebp + ecx * 4 + (-0x178)); /* 0x00713E01: mov ecx, dword ptr [ebp + ecx*4 - 0x178] */
    RECOMP_CALL(sub_00713A90); /* 0x00713E08: call 0x713a90 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x00713E0D: movzx eax, al */
    ecx = esi; /* 0x00713E10: mov ecx, esi */
    PUSH32(esp, eax); /* 0x00713E12: push eax */
    eax = MEM32(ebp + (-0x11C)); /* 0x00713E13: mov eax, dword ptr [ebp - 0x11c] */
    SET_LO8(edx, MEM8(eax + edi + 0x54)); /* 0x00713E19: mov dl, byte ptr [eax + edi + 0x54] */
    RECOMP_CALL(sub_006EED60); /* 0x00713E1D: call 0x6eed60 */
    RECOMP_FLAGS_IN();
    goto L_00713F0D; /* 0x00713E22: jmp 0x713f0d */
L_00713E27:
    ecx = MEM32(ebp + (-0x11C)); /* 0x00713E27: mov ecx, dword ptr [ebp - 0x11c] */
    eax = MEM32(ecx + edi + 0x4C); /* 0x00713E2D: mov eax, dword ptr [ecx + edi + 0x4c] */
    /* cmp eax, 0x1Cu */ /* 0x00713E31: cmp eax, 0x1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00713F10; /* 0x00713E34: ja 0x713f10 */
L_00713E3A:
    eax = (uint32_t)MEM8(eax + 0x713F64); /* 0x00713E3A: movzx eax, byte ptr [eax + 0x713f64] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x713F40)); goto _ljump; }
L_00713E48:
    SET_LO8(edx, MEM8(ecx + edi + 0x54)); /* 0x00713E48: mov dl, byte ptr [ecx + edi + 0x54] */
    ecx = esi; /* 0x00713E4C: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x118))); /* 0x00713E4E: push dword ptr [ebp - 0x118] */
    RECOMP_CALL(sub_006EEC80); /* 0x00713E54: call 0x6eec80 */
    RECOMP_FLAGS_IN();
    goto L_00713F0D; /* 0x00713E59: jmp 0x713f0d */
L_00713E5E:
    SET_LO8(edx, MEM8(ecx + edi + 0x54)); /* 0x00713E5E: mov dl, byte ptr [ecx + edi + 0x54] */
    ecx = esi; /* 0x00713E62: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x114))); /* 0x00713E64: push dword ptr [ebp - 0x114] */
    RECOMP_CALL(sub_006EEC80); /* 0x00713E6A: call 0x6eec80 */
    RECOMP_FLAGS_IN();
    goto L_00713F0D; /* 0x00713E6F: jmp 0x713f0d */
L_00713E74:
    SET_LO8(edx, MEM8(ecx + edi + 0x54)); /* 0x00713E74: mov dl, byte ptr [ecx + edi + 0x54] */
    ecx = esi; /* 0x00713E78: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x00713E7A: push dword ptr [ebp - 0x110] */
    RECOMP_CALL(sub_006EEC80); /* 0x00713E80: call 0x6eec80 */
    RECOMP_FLAGS_IN();
    goto L_00713F0D; /* 0x00713E85: jmp 0x713f0d */
L_00713E8A:
    SET_LO8(edx, MEM8(ecx + edi + 0x54)); /* 0x00713E8A: mov dl, byte ptr [ecx + edi + 0x54] */
    ecx = esi; /* 0x00713E8E: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x00713E90: push dword ptr [ebp - 0x10c] */
    RECOMP_CALL(sub_006EEC80); /* 0x00713E96: call 0x6eec80 */
    RECOMP_FLAGS_IN();
    goto L_00713F0D; /* 0x00713E9B: jmp 0x713f0d */
L_00713E9D:
    SET_LO8(edx, MEM8(ecx + edi + 0x54)); /* 0x00713E9D: mov dl, byte ptr [ecx + edi + 0x54] */
    ecx = esi; /* 0x00713EA1: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x108))); /* 0x00713EA3: push dword ptr [ebp - 0x108] */
    RECOMP_CALL(sub_006EEC80); /* 0x00713EA9: call 0x6eec80 */
    RECOMP_FLAGS_IN();
    goto L_00713F0D; /* 0x00713EAE: jmp 0x713f0d */
L_00713EB0:
    SET_LO8(edx, MEM8(ecx + edi + 0x54)); /* 0x00713EB0: mov dl, byte ptr [ecx + edi + 0x54] */
    ecx = esi; /* 0x00713EB4: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x104))); /* 0x00713EB6: push dword ptr [ebp - 0x104] */
    RECOMP_CALL(sub_006EEC80); /* 0x00713EBC: call 0x6eec80 */
    RECOMP_FLAGS_IN();
    goto L_00713F0D; /* 0x00713EC1: jmp 0x713f0d */
L_00713EC3:
    SET_LO8(edx, MEM8(ecx + edi + 0x54)); /* 0x00713EC3: mov dl, byte ptr [ecx + edi + 0x54] */
    ecx = esi; /* 0x00713EC7: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x100))); /* 0x00713EC9: push dword ptr [ebp - 0x100] */
    RECOMP_CALL(sub_006EEC80); /* 0x00713ECF: call 0x6eec80 */
    RECOMP_FLAGS_IN();
    goto L_00713F0D; /* 0x00713ED4: jmp 0x713f0d */
L_00713ED6:
    SET_LO8(edx, MEM8(ecx + edi + 0x54)); /* 0x00713ED6: mov dl, byte ptr [ecx + edi + 0x54] */
    ecx = esi; /* 0x00713EDA: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0xFC))); /* 0x00713EDC: push dword ptr [ebp - 0xfc] */
    RECOMP_CALL(sub_006EEC80); /* 0x00713EE2: call 0x6eec80 */
    RECOMP_FLAGS_IN();
    goto L_00713F0D; /* 0x00713EE7: jmp 0x713f0d */
L_00713EE9:
    ecx = MEM32(ebp + (-0x11C)); /* 0x00713EE9: mov ecx, dword ptr [ebp - 0x11c] */
    eax = MEM32(ecx + edi + 0x4C); /* 0x00713EEF: mov eax, dword ptr [ecx + edi + 0x4c] */
    SET_LO8(edx, MEM8(ecx + edi + 0x54)); /* 0x00713EF3: mov dl, byte ptr [ecx + edi + 0x54] */
    ecx = esi; /* 0x00713EF7: mov ecx, esi */
    /* cmp MEM8(ebp + eax + (-0x118)), 0 */ /* 0x00713EF9: cmp byte ptr [ebp + eax - 0x118], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0x118))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x00713F01: setne al */
    eax = (uint32_t)LO8(eax); /* 0x00713F04: movzx eax, al */
    PUSH32(esp, eax); /* 0x00713F07: push eax */
    RECOMP_CALL(sub_006EEE10); /* 0x00713F08: call 0x6eee10 */
    RECOMP_FLAGS_IN();
L_00713F0D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00713F0D: add esp, 4 */
    _flag_k = FK_ADD;
L_00713F10:
    edi = MEM32(esi + 0x2C); /* 0x00713F10: mov edi, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x00713F13: inc ebx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x11C)); /* 0x00713F14: mov eax, dword ptr [ebp - 0x11c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x00713F1A: add eax, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x11C)) = eax; /* 0x00713F1D: mov dword ptr [ebp - 0x11c], eax */
    /* cmp ebx, MEM32(edi + 0xC4C) */ /* 0x00713F23: cmp ebx, dword ptr [edi + 0xc4c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0xC4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_00713DE0; /* 0x00713F29: jl 0x713de0 */
L_00713F2F:
    ecx = MEM32(ebp + (-0x4)); /* 0x00713F2F: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x00713F32: pop edi */
    esi = POP32_VAL(esp); /* 0x00713F33: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00713F34: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00713F36: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x00713F37: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00713F3C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00713F3E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00713F3F: ret  */
L_00713F90:
    PUSH32(esp, esi); /* 0x00713F90: push esi */
    esi = ecx; /* 0x00713F91: mov esi, ecx */
    eax = MEM32(esi + 0x2C); /* 0x00713F93: mov eax, dword ptr [esi + 0x2c] */
    eax = MEM32(eax + 0x18); /* 0x00713F96: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x00713F99: push eax */
    edx = MEM32(eax); /* 0x00713F9A: mov edx, dword ptr [eax] */
    eax = MEM32(edx + 0x64); /* 0x00713F9C: mov eax, dword ptr [edx + 0x64] */
    RECOMP_ICALL(eax); /* 0x00713F9F: call eax */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x8007001Eu */ /* 0x00713FA1: cmp eax, 0x8007001e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8007001Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00713FAF; /* 0x00713FA6: je 0x713faf */
L_00713FA8:
    /* cmp eax, 0x8007000Cu */ /* 0x00713FA8: cmp eax, 0x8007000c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8007000Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00713FCB; /* 0x00713FAD: jne 0x713fcb */
L_00713FAF:
    eax = MEM32(esi + 0x2C); /* 0x00713FAF: mov eax, dword ptr [esi + 0x2c] */
    eax = MEM32(eax + 0x18); /* 0x00713FB2: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x00713FB5: push eax */
    ecx = MEM32(eax); /* 0x00713FB6: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x1C); /* 0x00713FB8: mov eax, dword ptr [ecx + 0x1c] */
    RECOMP_ICALL(eax); /* 0x00713FBB: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x2C); /* 0x00713FBD: mov eax, dword ptr [esi + 0x2c] */
    eax = MEM32(eax + 0x18); /* 0x00713FC0: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x00713FC3: push eax */
    ecx = MEM32(eax); /* 0x00713FC4: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x64); /* 0x00713FC6: mov eax, dword ptr [ecx + 0x64] */
    RECOMP_ICALL(eax); /* 0x00713FC9: call eax */
    RECOMP_FLAGS_IN();
L_00713FCB:
    eax = MEM32(esi + 0x2C); /* 0x00713FCB: mov eax, dword ptr [esi + 0x2c] */
    ecx = esi; /* 0x00713FCE: mov ecx, esi */
    /* cmp MEM32(eax + 0x48), 0 */ /* 0x00713FD0: cmp dword ptr [eax + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00713FDC; /* 0x00713FD4: je 0x713fdc */
L_00713FD6:
    esi = POP32_VAL(esp); /* 0x00713FD6: pop esi */
    RECOMP_BACKEDGE();
    goto L_00713B20; /* 0x00713FD7: jmp 0x713b20 */
L_00713FDC:
    esi = POP32_VAL(esp); /* 0x00713FDC: pop esi */
    RECOMP_BACKEDGE();
    goto L_00713D30; /* 0x00713FDD: jmp 0x713d30 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x00713E48u: goto L_00713E48;
      case 0x00713E5Eu: goto L_00713E5E;
      case 0x00713E74u: goto L_00713E74;
      case 0x00713E8Au: goto L_00713E8A;
      case 0x00713E9Du: goto L_00713E9D;
      case 0x00713EB0u: goto L_00713EB0;
      case 0x00713EC3u: goto L_00713EC3;
      case 0x00713ED6u: goto L_00713ED6;
      case 0x00713F10u: goto L_00713F10;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00713FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00713FF0u);

L_00713FF0:
    PUSH32(esp, esi); /* 0x00713FF0: push esi */
    ecx = 0x00806FFCu; /* 0x00713FF1: mov ecx, 0x806ffc */
    RECOMP_CALL(sub_006F5A00); /* 0x00713FF6: call 0x6f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00713FFB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071401E; /* 0x00713FFD: je 0x71401e */
L_00713FFF:
    /* cmp MEM8(eax), 0x30u */ /* 0x00713FFF: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00714017; /* 0x00714002: je 0x714017 */
L_00714004:
    PUSH32(esp, 0x007DEB8Cu); /* 0x00714004: push 0x7deb8c */
    PUSH32(esp, eax); /* 0x00714009: push eax */
    RECOMP_ICALL(MEM32(0x7CC580)); /* 0x0071400A: call dword ptr [0x7cc580] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00714010: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00714013: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0071401E; /* 0x00714015: jne 0x71401e */
L_00714017:
    eax = MEM32(0x87CCBC); /* 0x00714017: mov eax, dword ptr [0x87ccbc] */
    goto L_0071402D; /* 0x0071401C: jmp 0x71402d */
L_0071401E:
    RECOMP_CALL(sub_00716080); /* 0x0071401E: call 0x716080 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00714023: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x00714025: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x00714027: inc eax */
    _flag_k = FK_INC;
    MEM32(0x87CCBC) = eax; /* 0x00714028: mov dword ptr [0x87ccbc], eax */
L_0071402D:
    /* test eax, eax */ /* 0x0071402D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00714040; /* 0x0071402F: je 0x714040 */
L_00714031:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00714031: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_00714033:
    ecx = esi; /* 0x00714033: mov ecx, esi */
    RECOMP_CALL(sub_00714050); /* 0x00714035: call 0x714050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0071403A: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 4 */ /* 0x0071403B: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00714033; /* 0x0071403E: jb 0x714033 */
L_00714040:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00714040: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00714042: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714043: ret  */
    RECOMP_REGS_OUT();
}

void sub_00714050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00714050u);

L_00714050:
    PUSH32(esp, ebp); /* 0x00714050: push ebp */
    ebp = esp; /* 0x00714051: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x00714053: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00714056: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0071405B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0071405D: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(0x87CCBC), 0 */ /* 0x00714060: cmp dword ptr [0x87ccbc], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CCBC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00714067: push ebx */
    PUSH32(esp, esi); /* 0x00714068: push esi */
    ebx = ecx; /* 0x00714069: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00714129; /* 0x0071406B: je 0x714129 */
L_00714071:
    /* cmp ebx, 4 */ /* 0x00714071: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00714129; /* 0x00714074: jae 0x714129 */
L_0071407A:
    eax = MEM32(0x87CC60); /* 0x0071407A: mov eax, dword ptr [0x87cc60] */
    /* test eax, eax */ /* 0x0071407F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007140A2; /* 0x00714081: je 0x7140a2 */
L_00714083:
    /* cmp MEM32(eax + 0x480), 0 */ /* 0x00714083: cmp dword ptr [eax + 0x480], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x480)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00714098; /* 0x0071408A: je 0x714098 */
L_0071408C:
    /* cmp MEM8(eax + 0x484), LO8(ebx) */ /* 0x0071408C: cmp byte ptr [eax + 0x484], bl */
    _flag_a = (uint32_t)(MEM8(eax + 0x484)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00714129; /* 0x00714092: je 0x714129 */
L_00714098:
    eax = MEM32(eax + 0x488); /* 0x00714098: mov eax, dword ptr [eax + 0x488] */
    /* test eax, eax */ /* 0x0071409E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00714083; /* 0x007140A0: jne 0x714083 */
L_007140A2:
    eax = ebp + (-0x4C); /* 0x007140A2: lea eax, [ebp - 0x4c] */
    MEM32(ebp + (-0x4C)) = 0; /* 0x007140A5: mov dword ptr [ebp - 0x4c], 0 */
    PUSH32(esp, eax); /* 0x007140AC: push eax */
    PUSH32(esp, ebx); /* 0x007140AD: push ebx */
    RECOMP_ICALL(MEM32(0x87CCCC)); /* 0x007140AE: call dword ptr [0x87cccc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007140B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00714129; /* 0x007140B6: jne 0x714129 */
L_007140B8:
    PUSH32(esp, 0x48Cu); /* 0x007140B8: push 0x48c */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x007140BD: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x007140C3: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007140C5: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x007140C8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007140E9; /* 0x007140CA: jne 0x7140e9 */
L_007140CC:
    PUSH32(esp, 0x00803E4Cu); /* 0x007140CC: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x007140D1: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007140D6: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x007140D9: pop esi */
    ebx = POP32_VAL(esp); /* 0x007140DA: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x007140DB: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007140DE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007140E0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007140E5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007140E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007140E8: ret  */
L_007140E9:
    PUSH32(esp, 0x48Cu); /* 0x007140E9: push 0x48c */
    PUSH32(esp, 0); /* 0x007140EE: push 0 */
    PUSH32(esp, esi); /* 0x007140F0: push esi */
    RECOMP_CALL(sub_0078083E); /* 0x007140F1: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007140F6: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO8(ebx); /* 0x007140F9: movzx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x007140FC: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x007140FD: push eax */
    PUSH32(esp, 0x008070D4u); /* 0x007140FE: push 0x8070d4 */
    eax = ebp + (-0x48); /* 0x00714103: lea eax, [ebp - 0x48] */
    PUSH32(esp, 0x40u); /* 0x00714106: push 0x40 */
    PUSH32(esp, eax); /* 0x00714108: push eax */
    RECOMP_CALL(sub_006F2E40); /* 0x00714109: call 0x6f2e40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0071410E: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x48); /* 0x00714111: lea ecx, [ebp - 0x48] */
    RECOMP_CALL(sub_006F2D10); /* 0x00714114: call 0x6f2d10 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x00714119: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x0071411B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0071413C; /* 0x0071411D: jne 0x71413c */
L_0071411F:
    PUSH32(esp, esi); /* 0x0071411F: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x00714120: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714126: add esp, 4 */
    _flag_k = FK_ADD;
L_00714129:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00714129: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0071412C: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071412D: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0071412E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00714131: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00714133: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00714138: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071413A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071413B: ret  */
L_0071413C:
    ecx = esi; /* 0x0071413C: mov ecx, esi */
    MEM32(esi + 0x480) = 1; /* 0x0071413E: mov dword ptr [esi + 0x480], 1 */
    MEM8(esi + 0x484) = (uint8_t)(LO8(ebx)); /* 0x00714148: mov byte ptr [esi + 0x484], bl */
    RECOMP_CALL(sub_006FFA90); /* 0x0071414E: call 0x6ffa90 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x00714153: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x00714156: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00714157: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00714159: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x0071415A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0071415F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00714161: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714162: ret  */
    RECOMP_REGS_OUT();
}

void sub_00714170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00714170u);

L_00714170:
    PUSH32(esp, ebp); /* 0x00714170: push ebp */
    ebp = esp; /* 0x00714171: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00714173: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x00714176: push ecx */
    PUSH32(esp, ebx); /* 0x00714177: push ebx */
    ebx = MEM32(0x7CC100); /* 0x00714178: mov ebx, dword ptr [0x7cc100] */
    PUSH32(esp, esi); /* 0x0071417E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x0071417F: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00714182: push edi */
    edi = esi + 0x24; /* 0x00714183: lea edi, [esi + 0x24] */
L_00714186:
    ecx = MEM32(edi); /* 0x00714186: mov ecx, dword ptr [edi] */
    edx = ecx; /* 0x00714188: mov edx, ecx */
    eax = ecx; /* 0x0071418A: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = edx; } else { eax = _d; } } /* 0x0071418C: lock cmpxchg dword ptr [edi], edx */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x00714190: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714186; /* 0x00714192: jne 0x714186 */
L_00714194:
    /* test ecx, ecx */ /* 0x00714194: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00714271; /* 0x00714196: jne 0x714271 */
L_0071419C:
    /* cmp MEM32(0x87CBE4), ecx */ /* 0x0071419C: cmp dword ptr [0x87cbe4], ecx */
    _flag_a = (uint32_t)(MEM32(0x87CBE4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007141F4; /* 0x007141A2: jne 0x7141f4 */
L_007141A4:
    PUSH32(esp, ecx); /* 0x007141A4: push ecx */
    edx = 0x006EDF40u; /* 0x007141A5: mov edx, 0x6edf40 */
    MEM32(0x87CBE4) = 1; /* 0x007141AA: mov dword ptr [0x87cbe4], 1 */
    ecx = 0x0080434Cu; /* 0x007141B4: mov ecx, 0x80434c */
    RECOMP_CALL(sub_006F5AB0); /* 0x007141B9: call 0x6f5ab0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007141BE: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x00925C98u); /* 0x007141C1: push 0x925c98 */
    RECOMP_ICALL(MEM32(0x7CC104)); /* 0x007141C6: call dword ptr [0x7cc104] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x007141CC: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007141DF; /* 0x007141CF: jne 0x7141df */
L_007141D1:
    PUSH32(esp, 0x00925C90u); /* 0x007141D1: push 0x925c90 */
    MEM32(0x925CA0) = eax; /* 0x007141D6: mov dword ptr [0x925ca0], eax */
    RECOMP_ICALL(ebx); /* 0x007141DB: call ebx */
    RECOMP_FLAGS_IN();
    goto L_007141F4; /* 0x007141DD: jmp 0x7141f4 */
L_007141DF:
    MEM32(0x925CA0) = 0; /* 0x007141DF: mov dword ptr [0x925ca0], 0 */
    RECOMP_ICALL(MEM32(0x7CC8F8)); /* 0x007141E9: call dword ptr [0x7cc8f8] */
    RECOMP_FLAGS_IN();
    MEM32(0x87CBE0) = eax; /* 0x007141EF: mov dword ptr [0x87cbe0], eax */
L_007141F4:
    PUSH32(esp, 0x32u); /* 0x007141F4: push 0x32 */
    RECOMP_ICALL(MEM32(0x7CC134)); /* 0x007141F6: call dword ptr [0x7cc134] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1C); /* 0x007141FC: mov eax, dword ptr [esi + 0x1c] */
    /* test eax, eax */ /* 0x007141FF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00714212; /* 0x00714201: jne 0x714212 */
L_00714203:
    PUSH32(esp, 0x00806748u); /* 0x00714203: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x00714208: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071420D: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_00714219; /* 0x00714210: jmp 0x714219 */
L_00714212:
    PUSH32(esp, eax); /* 0x00714212: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x00714213: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_00714219:
    eax = MEM32(esi + 0x20); /* 0x00714219: mov eax, dword ptr [esi + 0x20] */
    /* test eax, eax */ /* 0x0071421C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071424C; /* 0x0071421E: je 0x71424c */
L_00714220:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x00714220: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071424C; /* 0x00714223: je 0x71424c */
L_00714225:
    RECOMP_CALL(sub_006EE000); /* 0x00714225: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x20); /* 0x0071422A: mov ecx, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x0071422D: sub ecx, eax */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x0071422F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0071424C; /* 0x00714231: jg 0x71424c */
L_00714233:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00714233: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xC) = eax; /* 0x00714235: mov dword ptr [esp + 0xc], eax */
    MEM32(esi + 0x20) = eax; /* 0x00714239: mov dword ptr [esi + 0x20], eax */
    eax = esp + 0xC; /* 0x0071423C: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x00714240: push eax */
    eax = (uint32_t)MEM8(esi + 0x15); /* 0x00714241: movzx eax, byte ptr [esi + 0x15] */
    PUSH32(esp, eax); /* 0x00714245: push eax */
    RECOMP_ICALL(MEM32(0x87CCCC)); /* 0x00714246: call dword ptr [0x87cccc] */
    RECOMP_FLAGS_IN();
L_0071424C:
    eax = MEM32(esi + 0x1C); /* 0x0071424C: mov eax, dword ptr [esi + 0x1c] */
    /* test eax, eax */ /* 0x0071424F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00714265; /* 0x00714251: jne 0x714265 */
L_00714253:
    PUSH32(esp, 0x00806748u); /* 0x00714253: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x00714258: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071425D: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_00714186; /* 0x00714260: jmp 0x714186 */
L_00714265:
    PUSH32(esp, eax); /* 0x00714265: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x00714266: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_00714186; /* 0x0071426C: jmp 0x714186 */
L_00714271:
    edi = POP32_VAL(esp); /* 0x00714271: pop edi */
    esi = POP32_VAL(esp); /* 0x00714272: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00714273: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00714275: pop ebx */
    esp = ebp; /* 0x00714276: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00714278: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714279: ret  */
    RECOMP_REGS_OUT();
}

void sub_00714280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00714280u);

L_00714280:
    PUSH32(esp, ebp); /* 0x00714280: push ebp */
    ebp = esp; /* 0x00714281: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x00714283: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00714286: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0071428B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0071428D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x00714290: push ebx */
    PUSH32(esp, esi); /* 0x00714291: push esi */
    esi = MEM32(0x87CC60); /* 0x00714292: mov esi, dword ptr [0x87cc60] */
    ebx = edx; /* 0x00714298: mov ebx, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0071429A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x0071429C: push edi */
    edi = ecx; /* 0x0071429D: mov edi, ecx */
    /* test esi, esi */ /* 0x0071429F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007142C8; /* 0x007142A1: je 0x7142c8 */
L_007142A3:
    /* cmp MEM32(esi + 0x480), 0 */ /* 0x007142A3: cmp dword ptr [esi + 0x480], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x480)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007142BD; /* 0x007142AA: je 0x7142bd */
L_007142AC:
    ecx = MEM32(ebx + 0x2C); /* 0x007142AC: mov ecx, dword ptr [ebx + 0x2c] */
    SET_LO8(eax, MEM8(esi + 0x484)); /* 0x007142AF: mov al, byte ptr [esi + 0x484] */
    /* cmp LO8(eax), MEM8(ecx + 0xC5C) */ /* 0x007142B5: cmp al, byte ptr [ecx + 0xc5c] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0xC5C)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007142E9; /* 0x007142BB: je 0x7142e9 */
L_007142BD:
    esi = MEM32(esi + 0x488); /* 0x007142BD: mov esi, dword ptr [esi + 0x488] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x007142C3: inc edx */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x007142C4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007142A3; /* 0x007142C6: jne 0x7142a3 */
L_007142C8:
    PUSH32(esp, 0x00807ED4u); /* 0x007142C8: push 0x807ed4 */
    RECOMP_CALL(sub_006EDB70); /* 0x007142CD: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007142D2: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x007142D5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x007142D8: pop edi */
    esi = POP32_VAL(esp); /* 0x007142D9: pop esi */
    ebx = POP32_VAL(esp); /* 0x007142DA: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x007142DB: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007142DE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007142E0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007142E5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007142E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007142E8: ret  */
L_007142E9:
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x007142E9: mov byte ptr [edi], dl */
    ecx = ebp + (-0x28); /* 0x007142EB: lea ecx, [ebp - 0x28] */
    eax = MEM32(ebx + 0x2C); /* 0x007142EE: mov eax, dword ptr [ebx + 0x2c] */
    PUSH32(esp, ecx); /* 0x007142F1: push ecx */
    SET_LO8(ebx, MEM8(eax + 0xC5C)); /* 0x007142F2: mov bl, byte ptr [eax + 0xc5c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007142F8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x007142FA: mov dword ptr [ebp - 0x28], eax */
    eax = (uint32_t)LO8(ebx); /* 0x007142FD: movzx eax, bl */
    PUSH32(esp, eax); /* 0x00714300: push eax */
    MEM32(ebp + (-0x2C)) = eax; /* 0x00714301: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_ICALL(MEM32(0x87CCCC)); /* 0x00714304: call dword ptr [0x87cccc] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x7CC454); /* 0x0071430A: mov esi, dword ptr [0x7cc454] */
    PUSH32(esp, 0x48u); /* 0x00714310: push 0x48 */
    MEM32(edi + 0x10) = 4; /* 0x00714312: mov dword ptr [edi + 0x10], 4 */
    MEM32(edi + 0x8) = 1; /* 0x00714319: mov dword ptr [edi + 8], 1 */
    MEM32(edi + 0xC) = 1; /* 0x00714320: mov dword ptr [edi + 0xc], 1 */
    RECOMP_ICALL(esi); /* 0x00714327: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714329: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x0071432C: mov dword ptr [edi + 4], eax */
    /* test eax, eax */ /* 0x0071432F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00714361; /* 0x00714331: je 0x714361 */
L_00714333:
    PUSH32(esp, 0x48u); /* 0x00714333: push 0x48 */
    PUSH32(esp, 0); /* 0x00714335: push 0 */
    PUSH32(esp, eax); /* 0x00714337: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x00714338: call 0x78083e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0071433D: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x28u); /* 0x00714340: push 0x28 */
    RECOMP_ICALL(esi); /* 0x00714342: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714344: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x00714347: mov dword ptr [edi + 0x18], eax */
    /* test eax, eax */ /* 0x0071434A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0071437F; /* 0x0071434C: jne 0x71437f */
L_0071434E:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x0071434E: push dword ptr [edi + 4] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x00714351: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714357: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = 0; /* 0x0071435A: mov dword ptr [edi + 4], 0 */
L_00714361:
    PUSH32(esp, 0x00803E4Cu); /* 0x00714361: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x00714366: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071436B: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x0071436E: pop edi */
    esi = POP32_VAL(esp); /* 0x0071436F: pop esi */
    ebx = POP32_VAL(esp); /* 0x00714370: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00714371: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00714374: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00714376: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0071437B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071437D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071437E: ret  */
L_0071437F:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0071437F: xorps xmm0, xmm0 */
    xmm_st(eax, _xmm[0]); /* 0x00714382: movdqu xmmword ptr [eax], xmm0 */
    PUSH32(esp, 0x18u); /* 0x00714386: push 0x18 */
    xmm_st(eax + 0x10, _xmm[0]); /* 0x00714388: movdqu xmmword ptr [eax + 0x10], xmm0 */
    MEM64(eax + 0x20) = _xmm[0].u64[0]; /* 0x0071438D: movq qword ptr [eax + 0x20], xmm0 */
    eax = MEM32(edi + 0x18); /* 0x00714392: mov eax, dword ptr [edi + 0x18] */
    MEM8(eax + 0x14) = (uint8_t)(1); /* 0x00714395: mov byte ptr [eax + 0x14], 1 */
    eax = MEM32(edi + 0x18); /* 0x00714399: mov eax, dword ptr [edi + 0x18] */
    MEM8(eax + 0x15) = (uint8_t)(LO8(ebx)); /* 0x0071439C: mov byte ptr [eax + 0x15], bl */
    RECOMP_ICALL(esi); /* 0x0071439F: call esi */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x007143A1: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007143A3: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x007143A6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007143B8; /* 0x007143A8: je 0x7143b8 */
L_007143AA:
    PUSH32(esp, 0x7D0u); /* 0x007143AA: push 0x7d0 */
    PUSH32(esp, esi); /* 0x007143AF: push esi */
    RECOMP_ICALL(MEM32(0x7CC150)); /* 0x007143B0: call dword ptr [0x7cc150] */
    RECOMP_FLAGS_IN();
    goto L_007143C5; /* 0x007143B6: jmp 0x7143c5 */
L_007143B8:
    PUSH32(esp, 0x00803E4Cu); /* 0x007143B8: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x007143BD: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007143C2: add esp, 4 */
    _flag_k = FK_ADD;
L_007143C5:
    eax = MEM32(edi + 0x18); /* 0x007143C5: mov eax, dword ptr [edi + 0x18] */
    MEM32(eax + 0x1C) = esi; /* 0x007143C8: mov dword ptr [eax + 0x1c], esi */
    eax = MEM32(edi + 0x18); /* 0x007143CB: mov eax, dword ptr [edi + 0x18] */
    /* cmp MEM32(eax + 0x1C), 0 */ /* 0x007143CE: cmp dword ptr [eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0071440F; /* 0x007143D2: jne 0x71440f */
L_007143D4:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x007143D4: push dword ptr [edi + 4] */
    esi = MEM32(0x7CC44C); /* 0x007143D7: mov esi, dword ptr [0x7cc44c] */
    RECOMP_ICALL(esi); /* 0x007143DD: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007143DF: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x007143E2: push dword ptr [edi + 0x18] */
    RECOMP_ICALL(esi); /* 0x007143E5: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007143E7: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = 0; /* 0x007143EA: mov dword ptr [edi + 4], 0 */
    PUSH32(esp, 0x00807EB0u); /* 0x007143F1: push 0x807eb0 */
    RECOMP_CALL(sub_006EDB70); /* 0x007143F6: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007143FB: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x007143FE: pop edi */
    esi = POP32_VAL(esp); /* 0x007143FF: pop esi */
    ebx = POP32_VAL(esp); /* 0x00714400: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00714401: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00714404: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00714406: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0071440B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071440D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071440E: ret  */
L_0071440F:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x0071440F: push dword ptr [ebp - 0x2c] */
    eax = ebp + (-0x24); /* 0x00714412: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0x00807EA0u); /* 0x00714415: push 0x807ea0 */
    PUSH32(esp, 0x20u); /* 0x0071441A: push 0x20 */
    PUSH32(esp, eax); /* 0x0071441C: push eax */
    RECOMP_CALL(sub_006F2E40); /* 0x0071441D: call 0x6f2e40 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x00714422: push dword ptr [edi + 0x18] */
    edx = ebp + (-0x24); /* 0x00714425: lea edx, [ebp - 0x24] */
    ecx = 0x00714170u; /* 0x00714428: mov ecx, 0x714170 */
    PUSH32(esp, 0x00010000u); /* 0x0071442D: push 0x10000 */
    RECOMP_CALL(sub_006EE580); /* 0x00714432: call 0x6ee580 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x18); /* 0x00714437: mov ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x0071443A: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x18) = eax; /* 0x0071443D: mov dword ptr [ecx + 0x18], eax */
    esi = MEM32(edi + 0x18); /* 0x00714440: mov esi, dword ptr [edi + 0x18] */
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x00714443: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714498; /* 0x00714447: jne 0x714498 */
L_00714449:
    esi = MEM32(esi + 0x1C); /* 0x00714449: mov esi, dword ptr [esi + 0x1c] */
    ebx = MEM32(0x7CC44C); /* 0x0071444C: mov ebx, dword ptr [0x7cc44c] */
    /* test esi, esi */ /* 0x00714452: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00714463; /* 0x00714454: je 0x714463 */
L_00714456:
    PUSH32(esp, esi); /* 0x00714456: push esi */
    RECOMP_ICALL(MEM32(0x7CC15C)); /* 0x00714457: call dword ptr [0x7cc15c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0071445D: push esi */
    RECOMP_ICALL(ebx); /* 0x0071445E: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714460: add esp, 4 */
    _flag_k = FK_ADD;
L_00714463:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x00714463: push dword ptr [edi + 4] */
    RECOMP_ICALL(ebx); /* 0x00714466: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714468: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x0071446B: push dword ptr [edi + 0x18] */
    RECOMP_ICALL(ebx); /* 0x0071446E: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714470: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = 0; /* 0x00714473: mov dword ptr [edi + 4], 0 */
    PUSH32(esp, 0x00807F04u); /* 0x0071447A: push 0x807f04 */
    RECOMP_CALL(sub_006EDB70); /* 0x0071447F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714484: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00714487: pop edi */
    esi = POP32_VAL(esp); /* 0x00714488: pop esi */
    ebx = POP32_VAL(esp); /* 0x00714489: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x0071448A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0071448D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0071448F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00714494: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00714496: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714497: ret  */
L_00714498:
    ecx = MEM32(ebp + (-0x4)); /* 0x00714498: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0071449B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0071449D: pop edi */
    esi = POP32_VAL(esp); /* 0x0071449E: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0071449F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x007144A1: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x007144A2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007144A7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007144A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007144AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_007144B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007144B0u);

L_007144B0:
    PUSH32(esp, ebx); /* 0x007144B0: push ebx */
    ebx = ecx; /* 0x007144B1: mov ebx, ecx */
    edx = 1; /* 0x007144B3: mov edx, 1 */
    PUSH32(esp, esi); /* 0x007144B8: push esi */
    PUSH32(esp, edi); /* 0x007144B9: push edi */
    eax = MEM32(ebx + 0x18); /* 0x007144BA: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x24u; /* 0x007144BD: add eax, 0x24 */
    _flag_k = FK_ADD;
    { uint32_t _tmp = MEM32(eax); /* 0x007144C0: xchg dword ptr [eax], edx */
      MEM32(eax) = edx;
      edx = _tmp; }
    eax = MEM32(ebx + 0x18); /* 0x007144C2: mov eax, dword ptr [ebx + 0x18] */
    edi = MEM32(0x7CC44C); /* 0x007144C5: mov edi, dword ptr [0x7cc44c] */
    esi = MEM32(eax + 0x18); /* 0x007144CB: mov esi, dword ptr [eax + 0x18] */
    /* test esi, esi */ /* 0x007144CE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007144FE; /* 0x007144D0: je 0x7144fe */
L_007144D2:
    PUSH32(esp, 0); /* 0x007144D2: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x007144D4: push -1 */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x007144D6: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC194)); /* 0x007144D9: call dword ptr [0x7cc194] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x007144DF: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x7CC0F8)); /* 0x007144E2: call dword ptr [0x7cc0f8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x318); /* 0x007144E8: mov eax, dword ptr [esi + 0x318] */
    /* test eax, eax */ /* 0x007144EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007144F8; /* 0x007144F0: je 0x7144f8 */
L_007144F2:
    PUSH32(esp, eax); /* 0x007144F2: push eax */
    RECOMP_ICALL(edi); /* 0x007144F3: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007144F5: add esp, 4 */
    _flag_k = FK_ADD;
L_007144F8:
    PUSH32(esp, esi); /* 0x007144F8: push esi */
    RECOMP_ICALL(edi); /* 0x007144F9: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007144FB: add esp, 4 */
    _flag_k = FK_ADD;
L_007144FE:
    eax = MEM32(ebx + 0x18); /* 0x007144FE: mov eax, dword ptr [ebx + 0x18] */
    esi = MEM32(eax + 0x1C); /* 0x00714501: mov esi, dword ptr [eax + 0x1c] */
    /* test esi, esi */ /* 0x00714504: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00714515; /* 0x00714506: je 0x714515 */
L_00714508:
    PUSH32(esp, esi); /* 0x00714508: push esi */
    RECOMP_ICALL(MEM32(0x7CC15C)); /* 0x00714509: call dword ptr [0x7cc15c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x0071450F: push esi */
    RECOMP_ICALL(edi); /* 0x00714510: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714512: add esp, 4 */
    _flag_k = FK_ADD;
L_00714515:
    edi = POP32_VAL(esp); /* 0x00714515: pop edi */
    esi = POP32_VAL(esp); /* 0x00714516: pop esi */
    ebx = POP32_VAL(esp); /* 0x00714517: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714518: ret  */
    RECOMP_REGS_OUT();
}

void sub_00714520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00714520u);

L_00714520:
    PUSH32(esp, ebp); /* 0x00714520: push ebp */
    ebp = esp; /* 0x00714521: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00714523: push esi */
    PUSH32(esp, edi); /* 0x00714524: push edi */
    edi = MEM32(edx + 0x44); /* 0x00714525: mov edi, dword ptr [edx + 0x44] */
    esi = ecx; /* 0x00714528: mov esi, ecx */
    edx = MEM32(ebp + 0x8); /* 0x0071452A: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x3Cu; /* 0x0071452D: add edi, 0x3c */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(edx + 0x8); /* 0x00714530: movzx eax, word ptr [edx + 8] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x00714534: mov word ptr [edi], ax */
    eax = (uint32_t)MEM16(edx + 0xA); /* 0x00714537: movzx eax, word ptr [edx + 0xa] */
    MEM16(edi + 0x2) = (uint16_t)(LO16(eax)); /* 0x0071453B: mov word ptr [edi + 2], ax */
    eax = MEM32(esi + 0x18); /* 0x0071453F: mov eax, dword ptr [esi + 0x18] */
    eax = MEM32(eax + 0x1C); /* 0x00714542: mov eax, dword ptr [eax + 0x1c] */
    /* test eax, eax */ /* 0x00714545: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00714558; /* 0x00714547: jne 0x714558 */
L_00714549:
    PUSH32(esp, 0x00806748u); /* 0x00714549: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x0071454E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714553: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_0071455F; /* 0x00714556: jmp 0x71455f */
L_00714558:
    PUSH32(esp, eax); /* 0x00714558: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x00714559: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_0071455F:
    eax = MEM32(esi + 0x18); /* 0x0071455F: mov eax, dword ptr [esi + 0x18] */
    /* cmp MEM32(eax + 0x20), 0 */ /* 0x00714562: cmp dword ptr [eax + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00714574; /* 0x00714566: je 0x714574 */
L_00714568:
    eax = (uint32_t)MEM8(eax + 0x15); /* 0x00714568: movzx eax, byte ptr [eax + 0x15] */
    PUSH32(esp, edi); /* 0x0071456C: push edi */
    PUSH32(esp, eax); /* 0x0071456D: push eax */
    RECOMP_ICALL(MEM32(0x87CCCC)); /* 0x0071456E: call dword ptr [0x87cccc] */
    RECOMP_FLAGS_IN();
L_00714574:
    eax = MEM32(esi + 0x18); /* 0x00714574: mov eax, dword ptr [esi + 0x18] */
    edi = POP32_VAL(esp); /* 0x00714577: pop edi */
    esi = POP32_VAL(esp); /* 0x00714578: pop esi */
    eax = MEM32(eax + 0x1C); /* 0x00714579: mov eax, dword ptr [eax + 0x1c] */
    /* test eax, eax */ /* 0x0071457C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00714591; /* 0x0071457E: jne 0x714591 */
L_00714580:
    PUSH32(esp, 0x00806748u); /* 0x00714580: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x00714585: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071458A: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0071458D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x0071458F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714590: ret  */
L_00714591:
    PUSH32(esp, eax); /* 0x00714591: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x00714592: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00714598: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x0071459A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071459B: ret  */
    RECOMP_REGS_OUT();
}

void sub_00714640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00714640u);

L_00714640:
    PUSH32(esp, ebp); /* 0x00714640: push ebp */
    ebp = esp; /* 0x00714641: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00714643: push ecx */
    PUSH32(esp, esi); /* 0x00714644: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00714645: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x00714647: mov esi, ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x00714649: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x18); /* 0x0071464C: mov eax, dword ptr [esi + 0x18] */
    eax = MEM32(eax + 0x1C); /* 0x0071464F: mov eax, dword ptr [eax + 0x1c] */
    /* test eax, eax */ /* 0x00714652: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00714665; /* 0x00714654: jne 0x714665 */
L_00714656:
    PUSH32(esp, 0x00806748u); /* 0x00714656: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x0071465B: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714660: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_0071466C; /* 0x00714663: jmp 0x71466c */
L_00714665:
    PUSH32(esp, eax); /* 0x00714665: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x00714666: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_0071466C:
    eax = MEM32(esi + 0x18); /* 0x0071466C: mov eax, dword ptr [esi + 0x18] */
    MEM32(eax + 0x20) = 0; /* 0x0071466F: mov dword ptr [eax + 0x20], 0 */
    eax = MEM32(esi + 0x18); /* 0x00714676: mov eax, dword ptr [esi + 0x18] */
    eax = MEM32(eax + 0x1C); /* 0x00714679: mov eax, dword ptr [eax + 0x1c] */
    /* test eax, eax */ /* 0x0071467C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0071468F; /* 0x0071467E: jne 0x71468f */
L_00714680:
    PUSH32(esp, 0x00806748u); /* 0x00714680: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x00714685: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071468A: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_00714696; /* 0x0071468D: jmp 0x714696 */
L_0071468F:
    PUSH32(esp, eax); /* 0x0071468F: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x00714690: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_00714696:
    eax = ebp + (-0x4); /* 0x00714696: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x00714699: push eax */
    eax = MEM32(esi + 0x18); /* 0x0071469A: mov eax, dword ptr [esi + 0x18] */
    eax = (uint32_t)MEM8(eax + 0x15); /* 0x0071469D: movzx eax, byte ptr [eax + 0x15] */
    PUSH32(esp, eax); /* 0x007146A1: push eax */
    RECOMP_ICALL(MEM32(0x87CCCC)); /* 0x007146A2: call dword ptr [0x87cccc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x007146A8: neg eax */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x007146AA: pop esi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x007146AB: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esp = ebp; /* 0x007146AD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007146AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007146B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_007146C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007146C0u);

L_007146C0:
    PUSH32(esp, esi); /* 0x007146C0: push esi */
    esi = 0xCu; /* 0x007146C1: mov esi, 0xc */
L_007146C6:
    eax = MEM32(ecx); /* 0x007146C6: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x007146C8: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007146DE; /* 0x007146CA: jne 0x7146de */
L_007146CC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007146CC: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x007146CF: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x007146D2: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_007146C6; /* 0x007146D5: jae 0x7146c6 */
L_007146D7:
    eax = 1; /* 0x007146D7: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x007146DC: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007146DD: ret  */
L_007146DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007146DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x007146E0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007146E1: ret  */
    RECOMP_REGS_OUT();
}

void sub_007146F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007146F0u);

L_007146F0:
    PUSH32(esp, ebp); /* 0x007146F0: push ebp */
    ebp = esp; /* 0x007146F1: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x007146F3: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00714840); /* 0x007146F6: call 0x714840 */
    RECOMP_FLAGS_IN();
    eax = 1; /* 0x007146FB: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x00714700: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00714701: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00714710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00714710u);

L_00714710:
    PUSH32(esp, ecx); /* 0x00714710: push ecx */
    /* cmp MEM32(0x87CCC0), 0 */ /* 0x00714711: cmp dword ptr [0x87ccc0], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CCC0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00714729; /* 0x00714718: je 0x714729 */
L_0071471A:
    PUSH32(esp, 0x00808010u); /* 0x0071471A: push 0x808010 */
    RECOMP_CALL(sub_006EDB70); /* 0x0071471F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714724: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x00714727: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714728: ret  */
L_00714729:
    PUSH32(esp, 2); /* 0x00714729: push 2 */
    PUSH32(esp, 0); /* 0x0071472B: push 0 */
    RECOMP_ICALL(MEM32(0x7CC960)); /* 0x0071472D: call dword ptr [0x7cc960] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x80010106u */ /* 0x00714733: cmp eax, 0x80010106 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80010106u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714744; /* 0x00714738: jne 0x714744 */
L_0071473A:
    PUSH32(esp, 0); /* 0x0071473A: push 0 */
    PUSH32(esp, 0); /* 0x0071473C: push 0 */
    RECOMP_ICALL(MEM32(0x7CC960)); /* 0x0071473E: call dword ptr [0x7cc960] */
    RECOMP_FLAGS_IN();
L_00714744:
    /* cmp eax, 1 */ /* 0x00714744: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00714761; /* 0x00714747: je 0x714761 */
L_00714749:
    /* test eax, eax */ /* 0x00714749: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00714761; /* 0x0071474B: jns 0x714761 */
L_0071474D:
    PUSH32(esp, 0x00808000u); /* 0x0071474D: push 0x808000 */
    PUSH32(esp, 0x00808030u); /* 0x00714752: push 0x808030 */
    RECOMP_CALL(sub_006EDB70); /* 0x00714757: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071475C: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x0071475F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714760: ret  */
L_00714761:
    PUSH32(esp, 0x0087CCC0u); /* 0x00714761: push 0x87ccc0 */
    PUSH32(esp, 0x00806D84u); /* 0x00714766: push 0x806d84 */
    PUSH32(esp, 1); /* 0x0071476B: push 1 */
    PUSH32(esp, 0); /* 0x0071476D: push 0 */
    PUSH32(esp, 0x00806DA4u); /* 0x0071476F: push 0x806da4 */
    MEM32(0x87CCC4) = 1; /* 0x00714774: mov dword ptr [0x87ccc4], 1 */
    RECOMP_ICALL(MEM32(0x7CC95C)); /* 0x0071477E: call dword ptr [0x7cc95c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00714784: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_007147A1; /* 0x00714786: jns 0x7147a1 */
L_00714788:
    RECOMP_CALL(sub_006FFB90); /* 0x00714788: call 0x6ffb90 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00807E18u); /* 0x0071478D: push 0x807e18 */
    PUSH32(esp, 0x00808030u); /* 0x00714792: push 0x808030 */
    RECOMP_CALL(sub_006EDB70); /* 0x00714797: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071479C: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x0071479F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007147A0: ret  */
L_007147A1:
    PUSH32(esp, 0); /* 0x007147A1: push 0 */
    RECOMP_ICALL(MEM32(0x7CC20C)); /* 0x007147A3: call dword ptr [0x7cc20c] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x007147A9: mov edx, eax */
    /* test edx, edx */ /* 0x007147AB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007147CA; /* 0x007147AD: jne 0x7147ca */
L_007147AF:
    RECOMP_CALL(sub_006FFB90); /* 0x007147AF: call 0x6ffb90 */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(0x7CC0F0)); /* 0x007147B4: call dword ptr [0x7cc0f0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x007147BA: push eax */
    PUSH32(esp, 0x00807D50u); /* 0x007147BB: push 0x807d50 */
    RECOMP_CALL(sub_006EDB70); /* 0x007147C0: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007147C5: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x007147C8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007147C9: ret  */
L_007147CA:
    eax = MEM32(0x87CCC0); /* 0x007147CA: mov eax, dword ptr [0x87ccc0] */
    PUSH32(esp, 0x800u); /* 0x007147CF: push 0x800 */
    PUSH32(esp, edx); /* 0x007147D4: push edx */
    PUSH32(esp, eax); /* 0x007147D5: push eax */
    ecx = MEM32(eax); /* 0x007147D6: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x1C); /* 0x007147D8: mov eax, dword ptr [ecx + 0x1c] */
    RECOMP_ICALL(eax); /* 0x007147DB: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007147DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_007147FA; /* 0x007147DF: jns 0x7147fa */
L_007147E1:
    RECOMP_CALL(sub_006FFB90); /* 0x007147E1: call 0x6ffb90 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00807FE0u); /* 0x007147E6: push 0x807fe0 */
    PUSH32(esp, 0x00808030u); /* 0x007147EB: push 0x808030 */
    RECOMP_CALL(sub_006EDB70); /* 0x007147F0: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007147F5: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x007147F8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007147F9: ret  */
L_007147FA:
    eax = MEM32(0x87CCC0); /* 0x007147FA: mov eax, dword ptr [0x87ccc0] */
    PUSH32(esp, 0x101u); /* 0x007147FF: push 0x101 */
    PUSH32(esp, 0); /* 0x00714804: push 0 */
    PUSH32(esp, 0x007146F0u); /* 0x00714806: push 0x7146f0 */
    ecx = MEM32(eax); /* 0x0071480B: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x0071480D: push 0 */
    PUSH32(esp, eax); /* 0x0071480F: push eax */
    eax = MEM32(ecx + 0x10); /* 0x00714810: mov eax, dword ptr [ecx + 0x10] */
    RECOMP_ICALL(eax); /* 0x00714813: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00714815: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00714832; /* 0x00714817: jns 0x714832 */
L_00714819:
    RECOMP_CALL(sub_006FFB90); /* 0x00714819: call 0x6ffb90 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00808040u); /* 0x0071481E: push 0x808040 */
    PUSH32(esp, 0x00808030u); /* 0x00714823: push 0x808030 */
    RECOMP_CALL(sub_006EDB70); /* 0x00714828: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071482D: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x00714830: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714831: ret  */
L_00714832:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00714832: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x00714834: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714835: ret  */
    RECOMP_REGS_OUT();
}

void sub_00714840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00714840u);

L_00714840:
    PUSH32(esp, ebp); /* 0x00714840: push ebp */
    ebp = esp; /* 0x00714841: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x00714843: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00714846: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0071484B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0071484D: mov dword ptr [ebp - 4], eax */
    edx = MEM32(0x87CCC0); /* 0x00714850: mov edx, dword ptr [0x87ccc0] */
    PUSH32(esp, ebx); /* 0x00714856: push ebx */
    ebx = ecx; /* 0x00714857: mov ebx, ecx */
    /* test edx, edx */ /* 0x00714859: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0071486F; /* 0x0071485B: jne 0x71486f */
L_0071485D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0071485D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00714860: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00714861: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00714864: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00714866: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0071486B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071486D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071486E: ret  */
L_0071486F:
    PUSH32(esp, esi); /* 0x0071486F: push esi */
    PUSH32(esp, edi); /* 0x00714870: push edi */
    edi = MEM32(0x87CC60); /* 0x00714871: mov edi, dword ptr [0x87cc60] */
    /* test edi, edi */ /* 0x00714877: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007148C8; /* 0x00714879: je 0x7148c8 */
L_0071487B:
    goto L_00714880; /* 0x0071487B: jmp 0x714880 */
L_00714880:
    /* cmp MEM32(edi + 0x480), 0 */ /* 0x00714880: cmp dword ptr [edi + 0x480], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x480)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007148B8; /* 0x00714887: jne 0x7148b8 */
L_00714889:
    edx = edi + 0x8; /* 0x00714889: lea edx, [edi + 8] */
    eax = ebx; /* 0x0071488C: mov eax, ebx */
    esi = 0x448u; /* 0x0071488E: mov esi, 0x448 */
L_00714893:
    ecx = MEM32(edx); /* 0x00714893: mov ecx, dword ptr [edx] */
    /* cmp ecx, MEM32(eax) */ /* 0x00714895: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007148B8; /* 0x00714897: jne 0x7148b8 */
L_00714899:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714899: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x0071489C: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x0071489F: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714893; /* 0x007148A2: jae 0x714893 */
L_007148A4:
    edi = POP32_VAL(esp); /* 0x007148A4: pop edi */
    esi = POP32_VAL(esp); /* 0x007148A5: pop esi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x007148A6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x007148A9: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x007148AA: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007148AD: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007148AF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007148B4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007148B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007148B7: ret  */
L_007148B8:
    edi = MEM32(edi + 0x488); /* 0x007148B8: mov edi, dword ptr [edi + 0x488] */
    /* test edi, edi */ /* 0x007148BE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00714880; /* 0x007148C0: jne 0x714880 */
L_007148C2:
    edx = MEM32(0x87CCC0); /* 0x007148C2: mov edx, dword ptr [0x87ccc0] */
L_007148C8:
    ecx = MEM32(edx); /* 0x007148C8: mov ecx, dword ptr [edx] */
    eax = ebp + (-0x34); /* 0x007148CA: lea eax, [ebp - 0x34] */
    PUSH32(esp, 0); /* 0x007148CD: push 0 */
    PUSH32(esp, eax); /* 0x007148CF: push eax */
    eax = ebx + 0x4; /* 0x007148D0: lea eax, [ebx + 4] */
    PUSH32(esp, eax); /* 0x007148D3: push eax */
    eax = MEM32(ecx + 0xC); /* 0x007148D4: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, edx); /* 0x007148D7: push edx */
    RECOMP_ICALL(eax); /* 0x007148D8: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x007148DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_007149A5; /* 0x007148DC: js 0x7149a5 */
L_007148E2:
    PUSH32(esp, 0x2Cu); /* 0x007148E2: push 0x2c */
    eax = ebp + (-0x30); /* 0x007148E4: lea eax, [ebp - 0x30] */
    PUSH32(esp, 0); /* 0x007148E7: push 0 */
    PUSH32(esp, eax); /* 0x007148E9: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x007148EA: call 0x78083e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x34)); /* 0x007148EF: mov eax, dword ptr [ebp - 0x34] */
    edx = ebp + (-0x30); /* 0x007148F2: lea edx, [ebp - 0x30] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007148F5: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = 0x2Cu; /* 0x007148F8: mov dword ptr [ebp - 0x30], 0x2c */
    ecx = MEM32(eax); /* 0x007148FF: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x00714901: push edx */
    PUSH32(esp, eax); /* 0x00714902: push eax */
    eax = MEM32(ecx + 0xC); /* 0x00714903: mov eax, dword ptr [ecx + 0xc] */
    RECOMP_ICALL(eax); /* 0x00714906: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x34)); /* 0x00714908: mov ecx, dword ptr [ebp - 0x34] */
    esi = eax; /* 0x0071490B: mov esi, eax */
    PUSH32(esp, ecx); /* 0x0071490D: push ecx */
    edx = MEM32(ecx); /* 0x0071490E: mov edx, dword ptr [ecx] */
    ecx = MEM32(edx + 0x8); /* 0x00714910: mov ecx, dword ptr [edx + 8] */
    RECOMP_ICALL(ecx); /* 0x00714913: call ecx */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x00714915: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_007149A5; /* 0x00714917: js 0x7149a5 */
L_0071491D:
    eax = MEM32(ebp + (-0x2C)); /* 0x0071491D: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x101u);
    eax = eax & 0x101u; /* 0x00714920: and eax, 0x101 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x101u */ /* 0x00714925: cmp eax, 0x101 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x101u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007149A5; /* 0x0071492A: jne 0x7149a5 */
L_0071492C:
    PUSH32(esp, 0x48Cu); /* 0x0071492C: push 0x48c */
    PUSH32(esp, 1); /* 0x00714931: push 1 */
    RECOMP_ICALL(MEM32(0x7CC5E0)); /* 0x00714933: call dword ptr [0x7cc5e0] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00714939: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071493B: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x0071493E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00714960; /* 0x00714940: jne 0x714960 */
L_00714942:
    PUSH32(esp, 0x00803E4Cu); /* 0x00714942: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x00714947: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071494C: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x0071494F: pop edi */
    esi = POP32_VAL(esp); /* 0x00714950: pop esi */
    ebx = POP32_VAL(esp); /* 0x00714951: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00714952: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00714955: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00714957: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0071495C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071495E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071495F: ret  */
L_00714960:
    edx = ebx + 0x230; /* 0x00714960: lea edx, [ebx + 0x230] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00714966: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x00714968: mov eax, edx */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x0071496A: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071497A; /* 0x0071496D: je 0x71497a */
L_0071496F:
    /* nop */ /* 0x0071496F: nop  */
L_00714970:
    eax = eax + 0x2; /* 0x00714970: lea eax, [eax + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00714973: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM16(eax), 0 */ /* 0x00714974: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714970; /* 0x00714978: jne 0x714970 */
L_0071497A:
    eax = ecx * 2 + 0x2; /* 0x0071497A: lea eax, [ecx*2 + 2] */
    ecx = 0x00804E28u; /* 0x00714981: mov ecx, 0x804e28 */
    PUSH32(esp, eax); /* 0x00714986: push eax */
    PUSH32(esp, edx); /* 0x00714987: push edx */
    edx = 0x00804E1Cu; /* 0x00714988: mov edx, 0x804e1c */
    RECOMP_CALL(sub_00700DA0); /* 0x0071498D: call 0x700da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00714992: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x00714995: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x00714997: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007149B9; /* 0x00714999: jne 0x7149b9 */
L_0071499B:
    PUSH32(esp, esi); /* 0x0071499B: push esi */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x0071499C: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007149A2: add esp, 4 */
    _flag_k = FK_ADD;
L_007149A5:
    edi = POP32_VAL(esp); /* 0x007149A5: pop edi */
    esi = POP32_VAL(esp); /* 0x007149A6: pop esi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x007149A7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x007149AA: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x007149AB: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007149AE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007149B0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007149B5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007149B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007149B8: ret  */
L_007149B9:
    PUSH32(esp, 0x44Cu); /* 0x007149B9: push 0x44c */
    eax = esi + 0x8; /* 0x007149BE: lea eax, [esi + 8] */
    PUSH32(esp, ebx); /* 0x007149C1: push ebx */
    PUSH32(esp, eax); /* 0x007149C2: push eax */
    RECOMP_CALL(sub_00780838); /* 0x007149C3: call 0x780838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Cu); /* 0x007149C8: push 0x2c */
    eax = ebp + (-0x30); /* 0x007149CA: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x007149CD: push eax */
    eax = esi + 0x454; /* 0x007149CE: lea eax, [esi + 0x454] */
    PUSH32(esp, eax); /* 0x007149D4: push eax */
    RECOMP_CALL(sub_00780838); /* 0x007149D5: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x007149DA: add esp, 0x18 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x007149DD: mov ecx, esi */
    RECOMP_CALL(sub_006FFA90); /* 0x007149DF: call 0x6ffa90 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x007149E4: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x007149E7: pop edi */
    esi = POP32_VAL(esp); /* 0x007149E8: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007149E9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x007149EB: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x007149EC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007149F1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007149F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007149F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_00714A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00714A00u);

L_00714A00:
    PUSH32(esp, ebp); /* 0x00714A00: push ebp */
    ebp = esp; /* 0x00714A01: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00714A03: push ecx */
    PUSH32(esp, ebx); /* 0x00714A04: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00714A05: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x00714A07: mov eax, ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x00714A09: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(0x87CCC0), ebx */ /* 0x00714A0C: cmp dword ptr [0x87ccc0], ebx */
    _flag_a = (uint32_t)(MEM32(0x87CCC0)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714A1C; /* 0x00714A12: jne 0x714a1c */
L_00714A14:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00714A14: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00714A17: pop ebx */
    esp = ebp; /* 0x00714A18: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00714A1A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714A1B: ret  */
L_00714A1C:
    PUSH32(esp, esi); /* 0x00714A1C: push esi */
    PUSH32(esp, edi); /* 0x00714A1D: push edi */
    edi = MEM32(0x87CC60); /* 0x00714A1E: mov edi, dword ptr [0x87cc60] */
    /* test edi, edi */ /* 0x00714A24: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00714A71; /* 0x00714A26: je 0x714a71 */
L_00714A28:
    goto L_00714A30; /* 0x00714A28: jmp 0x714a30 */
L_00714A30:
    /* cmp MEM32(edi + 0x480), 0 */ /* 0x00714A30: cmp dword ptr [edi + 0x480], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x480)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714A65; /* 0x00714A37: jne 0x714a65 */
L_00714A39:
    edx = edi + 0x8; /* 0x00714A39: lea edx, [edi + 8] */
    esi = 0x448u; /* 0x00714A3C: mov esi, 0x448 */
L_00714A41:
    ecx = MEM32(edx); /* 0x00714A41: mov ecx, dword ptr [edx] */
    /* cmp ecx, MEM32(eax) */ /* 0x00714A43: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714A62; /* 0x00714A45: jne 0x714a62 */
L_00714A47:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714A47: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x00714A4A: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x00714A4D: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714A41; /* 0x00714A50: jae 0x714a41 */
L_00714A52:
    edx = edi; /* 0x00714A52: mov edx, edi */
    ecx = ebx; /* 0x00714A54: mov ecx, ebx */
    RECOMP_CALL(sub_006FFAD0); /* 0x00714A56: call 0x6ffad0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x00714A5B: pop edi */
    esi = POP32_VAL(esp); /* 0x00714A5C: pop esi */
    ebx = POP32_VAL(esp); /* 0x00714A5D: pop ebx */
    esp = ebp; /* 0x00714A5E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00714A60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714A61: ret  */
L_00714A62:
    eax = MEM32(ebp + (-0x4)); /* 0x00714A62: mov eax, dword ptr [ebp - 4] */
L_00714A65:
    ebx = edi; /* 0x00714A65: mov ebx, edi */
    edi = MEM32(edi + 0x488); /* 0x00714A67: mov edi, dword ptr [edi + 0x488] */
    /* test edi, edi */ /* 0x00714A6D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00714A30; /* 0x00714A6F: jne 0x714a30 */
L_00714A71:
    edi = POP32_VAL(esp); /* 0x00714A71: pop edi */
    esi = POP32_VAL(esp); /* 0x00714A72: pop esi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00714A73: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00714A76: pop ebx */
    esp = ebp; /* 0x00714A77: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00714A79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714A7A: ret  */
    RECOMP_REGS_OUT();
}

void sub_00714A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00714A80u);

L_00714A80:
    PUSH32(esp, ebp); /* 0x00714A80: push ebp */
    ebp = esp; /* 0x00714A81: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00714A83: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00714A86: push esi */
    PUSH32(esp, edi); /* 0x00714A87: push edi */
    /* test MEM8(eax + 0x18), 3 */ /* 0x00714A88: test byte ptr [eax + 0x18], 3 */
    _flag_a = (uint32_t)(MEM8(eax + 0x18)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00714B71; /* 0x00714A8C: je 0x714b71 */
L_00714A92:
    /* test MEM8(eax + 0x1C), 1 */ /* 0x00714A92: test byte ptr [eax + 0x1c], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00714B71; /* 0x00714A96: je 0x714b71 */
L_00714A9C:
    edi = eax + 0x4; /* 0x00714A9C: lea edi, [eax + 4] */
    edx = 0x00806E24u; /* 0x00714A9F: mov edx, 0x806e24 */
    ecx = edi; /* 0x00714AA4: mov ecx, edi */
    esi = 0xCu; /* 0x00714AA6: mov esi, 0xc */
    goto L_00714AB0; /* 0x00714AAB: jmp 0x714ab0 */
L_00714AB0:
    eax = MEM32(ecx); /* 0x00714AB0: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x00714AB2: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714AC8; /* 0x00714AB4: jne 0x714ac8 */
L_00714AB6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00714AB6: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714AB9: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x00714ABC: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714AB0; /* 0x00714ABF: jae 0x714ab0 */
L_00714AC1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00714AC1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00714B53; /* 0x00714AC3: jmp 0x714b53 */
L_00714AC8:
    ecx = edi; /* 0x00714AC8: mov ecx, edi */
    edx = 0x00806E34u; /* 0x00714ACA: mov edx, 0x806e34 */
    esi = 0xCu; /* 0x00714ACF: mov esi, 0xc */
L_00714AD4:
    eax = MEM32(ecx); /* 0x00714AD4: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x00714AD6: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714AEC; /* 0x00714AD8: jne 0x714aec */
L_00714ADA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00714ADA: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714ADD: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x00714AE0: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714AD4; /* 0x00714AE3: jae 0x714ad4 */
L_00714AE5:
    esi = 4; /* 0x00714AE5: mov esi, 4 */
    goto L_00714B53; /* 0x00714AEA: jmp 0x714b53 */
L_00714AEC:
    ecx = edi; /* 0x00714AEC: mov ecx, edi */
    edx = 0x00806D54u; /* 0x00714AEE: mov edx, 0x806d54 */
    esi = 0xCu; /* 0x00714AF3: mov esi, 0xc */
L_00714AF8:
    eax = MEM32(ecx); /* 0x00714AF8: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x00714AFA: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714B10; /* 0x00714AFC: jne 0x714b10 */
L_00714AFE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00714AFE: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714B01: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x00714B04: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714AF8; /* 0x00714B07: jae 0x714af8 */
L_00714B09:
    esi = 8; /* 0x00714B09: mov esi, 8 */
    goto L_00714B53; /* 0x00714B0E: jmp 0x714b53 */
L_00714B10:
    edx = 0x00806E04u; /* 0x00714B10: mov edx, 0x806e04 */
    ecx = edi; /* 0x00714B15: mov ecx, edi */
    RECOMP_CALL(sub_007146C0); /* 0x00714B17: call 0x7146c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00714B1C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00714B27; /* 0x00714B1E: je 0x714b27 */
L_00714B20:
    esi = 0xCu; /* 0x00714B20: mov esi, 0xc */
    goto L_00714B53; /* 0x00714B25: jmp 0x714b53 */
L_00714B27:
    edx = 0x00806E44u; /* 0x00714B27: mov edx, 0x806e44 */
    ecx = edi; /* 0x00714B2C: mov ecx, edi */
    RECOMP_CALL(sub_007146C0); /* 0x00714B2E: call 0x7146c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00714B33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00714B3E; /* 0x00714B35: je 0x714b3e */
L_00714B37:
    esi = 0x10u; /* 0x00714B37: mov esi, 0x10 */
    goto L_00714B53; /* 0x00714B3C: jmp 0x714b53 */
L_00714B3E:
    edx = 0x00806DB4u; /* 0x00714B3E: mov edx, 0x806db4 */
    ecx = edi; /* 0x00714B43: mov ecx, edi */
    RECOMP_CALL(sub_007146C0); /* 0x00714B45: call 0x7146c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00714B4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00714B71; /* 0x00714B4C: je 0x714b71 */
L_00714B4E:
    esi = 0x14u; /* 0x00714B4E: mov esi, 0x14 */
L_00714B53:
    edx = MEM32(ebp + 0xC); /* 0x00714B53: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(edx + 0x14); /* 0x00714B56: mov ecx, dword ptr [edx + 0x14] */
    eax = MEM32(edx + 0x18); /* 0x00714B59: mov eax, dword ptr [edx + 0x18] */
    MEM32(eax + ecx * 4 + 0x4) = esi; /* 0x00714B5C: mov dword ptr [eax + ecx*4 + 4], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x14) = MEM32(edx + 0x14) + 1; /* 0x00714B60: inc dword ptr [edx + 0x14] */
    _flag_k = FK_INC;
    /* cmp MEM32(edx + 0x14), 3 */ /* 0x00714B63: cmp dword ptr [edx + 0x14], 3 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00714B71; /* 0x00714B67: jl 0x714b71 */
L_00714B69:
    edi = POP32_VAL(esp); /* 0x00714B69: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00714B6A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00714B6C: pop esi */
    ebp = POP32_VAL(esp); /* 0x00714B6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00714B6E: ret 8 */
L_00714B71:
    edi = POP32_VAL(esp); /* 0x00714B71: pop edi */
    eax = 1; /* 0x00714B72: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x00714B77: pop esi */
    ebp = POP32_VAL(esp); /* 0x00714B78: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00714B79: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00714B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00714B80u);

L_00714B80:
    PUSH32(esp, ebp); /* 0x00714B80: push ebp */
    ebp = esp; /* 0x00714B81: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x00714B83: push ebx */
    PUSH32(esp, esi); /* 0x00714B84: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00714B85: mov esi, dword ptr [ebp + 8] */
    ebx = 0xCu; /* 0x00714B88: mov ebx, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x00714B8D: add esi, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x00714B90: push edi */
    edx = esi; /* 0x00714B91: mov edx, esi */
    edi = 0x00806D34u; /* 0x00714B93: mov edi, 0x806d34 */
L_00714B98:
    eax = MEM32(edx); /* 0x00714B98: mov eax, dword ptr [edx] */
    ecx = MEM32(ebp + 0xC); /* 0x00714B9A: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(edi) */ /* 0x00714B9D: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714BB3; /* 0x00714B9F: jne 0x714bb3 */
L_00714BA1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714BA1: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x00714BA4: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x00714BA7: sub ebx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714B98; /* 0x00714BAA: jae 0x714b98 */
L_00714BAC:
    _flag_a = (uint32_t)((MEM32(ecx + 0x10) | 0x80u)); _flag_b = (uint32_t)((MEM32(ecx + 0x10) | 0x80u));
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | 0x80u; /* 0x00714BAC: or dword ptr [ecx + 0x10], 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00714BB3:
    edx = esi; /* 0x00714BB3: mov edx, esi */
    edi = 0x00806D64u; /* 0x00714BB5: mov edi, 0x806d64 */
    ebx = 0xCu; /* 0x00714BBA: mov ebx, 0xc */
    /* nop */ /* 0x00714BBF: nop  */
L_00714BC0:
    eax = MEM32(edx); /* 0x00714BC0: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(edi) */ /* 0x00714BC2: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714BD8; /* 0x00714BC4: jne 0x714bd8 */
L_00714BC6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714BC6: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x00714BC9: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x00714BCC: sub ebx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714BC0; /* 0x00714BCF: jae 0x714bc0 */
L_00714BD1:
    _flag_a = (uint32_t)((MEM32(ecx + 0x10) | 0x100u)); _flag_b = (uint32_t)((MEM32(ecx + 0x10) | 0x100u));
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | 0x100u; /* 0x00714BD1: or dword ptr [ecx + 0x10], 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00714BD8:
    edx = esi; /* 0x00714BD8: mov edx, esi */
    edi = 0x00806D44u; /* 0x00714BDA: mov edi, 0x806d44 */
    ebx = 0xCu; /* 0x00714BDF: mov ebx, 0xc */
L_00714BE4:
    eax = MEM32(edx); /* 0x00714BE4: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(edi) */ /* 0x00714BE6: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714BFC; /* 0x00714BE8: jne 0x714bfc */
L_00714BEA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714BEA: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x00714BED: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x00714BF0: sub ebx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714BE4; /* 0x00714BF3: jae 0x714be4 */
L_00714BF5:
    _flag_a = (uint32_t)((MEM32(ecx + 0x10) | 0x200u)); _flag_b = (uint32_t)((MEM32(ecx + 0x10) | 0x200u));
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | 0x200u; /* 0x00714BF5: or dword ptr [ecx + 0x10], 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00714BFC:
    edx = esi; /* 0x00714BFC: mov edx, esi */
    edi = 0x00806D74u; /* 0x00714BFE: mov edi, 0x806d74 */
    ebx = 0xCu; /* 0x00714C03: mov ebx, 0xc */
L_00714C08:
    eax = MEM32(edx); /* 0x00714C08: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(edi) */ /* 0x00714C0A: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714C20; /* 0x00714C0C: jne 0x714c20 */
L_00714C0E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714C0E: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x00714C11: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x00714C14: sub ebx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714C08; /* 0x00714C17: jae 0x714c08 */
L_00714C19:
    _flag_a = (uint32_t)((MEM32(ecx + 0x10) | 0x400u)); _flag_b = (uint32_t)((MEM32(ecx + 0x10) | 0x400u));
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | 0x400u; /* 0x00714C19: or dword ptr [ecx + 0x10], 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00714C20:
    edx = esi; /* 0x00714C20: mov edx, esi */
    edi = 0x00806D24u; /* 0x00714C22: mov edi, 0x806d24 */
    ebx = 0xCu; /* 0x00714C27: mov ebx, 0xc */
    esp = esp; /* 0x00714C2C: lea esp, [esp] */
L_00714C30:
    eax = MEM32(edx); /* 0x00714C30: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(edi) */ /* 0x00714C32: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714C45; /* 0x00714C34: jne 0x714c45 */
L_00714C36:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714C36: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x00714C39: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x00714C3C: sub ebx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714C30; /* 0x00714C3F: jae 0x714c30 */
L_00714C41:
    _flag_a = (uint32_t)((MEM32(ecx + 0x10) | 1)); _flag_b = (uint32_t)((MEM32(ecx + 0x10) | 1));
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | 1; /* 0x00714C41: or dword ptr [ecx + 0x10], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00714C45:
    edx = esi; /* 0x00714C45: mov edx, esi */
    edi = 0x00806D94u; /* 0x00714C47: mov edi, 0x806d94 */
    ebx = 0xCu; /* 0x00714C4C: mov ebx, 0xc */
L_00714C51:
    eax = MEM32(edx); /* 0x00714C51: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(edi) */ /* 0x00714C53: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714C69; /* 0x00714C55: jne 0x714c69 */
L_00714C57:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714C57: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x00714C5A: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x00714C5D: sub ebx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714C51; /* 0x00714C60: jae 0x714c51 */
L_00714C62:
    _flag_a = (uint32_t)((MEM32(ecx + 0x10) | 0x800u)); _flag_b = (uint32_t)((MEM32(ecx + 0x10) | 0x800u));
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | 0x800u; /* 0x00714C62: or dword ptr [ecx + 0x10], 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00714C69:
    edx = esi; /* 0x00714C69: mov edx, esi */
    edi = 0x00806DF4u; /* 0x00714C6B: mov edi, 0x806df4 */
    ebx = 0xCu; /* 0x00714C70: mov ebx, 0xc */
L_00714C75:
    eax = MEM32(edx); /* 0x00714C75: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(edi) */ /* 0x00714C77: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714C8A; /* 0x00714C79: jne 0x714c8a */
L_00714C7B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714C7B: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x00714C7E: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x00714C81: sub ebx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714C75; /* 0x00714C84: jae 0x714c75 */
L_00714C86:
    _flag_a = (uint32_t)((MEM32(ecx + 0x10) | 2)); _flag_b = (uint32_t)((MEM32(ecx + 0x10) | 2));
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | 2; /* 0x00714C86: or dword ptr [ecx + 0x10], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00714C8A:
    edx = esi; /* 0x00714C8A: mov edx, esi */
    edi = 0x00806D14u; /* 0x00714C8C: mov edi, 0x806d14 */
    ebx = 0xCu; /* 0x00714C91: mov ebx, 0xc */
L_00714C96:
    eax = MEM32(edx); /* 0x00714C96: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(edi) */ /* 0x00714C98: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714CAB; /* 0x00714C9A: jne 0x714cab */
L_00714C9C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714C9C: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x00714C9F: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x00714CA2: sub ebx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714C96; /* 0x00714CA5: jae 0x714c96 */
L_00714CA7:
    _flag_a = (uint32_t)((MEM32(ecx + 0x10) | 8)); _flag_b = (uint32_t)((MEM32(ecx + 0x10) | 8));
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | 8; /* 0x00714CA7: or dword ptr [ecx + 0x10], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00714CAB:
    edx = esi; /* 0x00714CAB: mov edx, esi */
    edi = 0x00806D04u; /* 0x00714CAD: mov edi, 0x806d04 */
    ebx = 0xCu; /* 0x00714CB2: mov ebx, 0xc */
L_00714CB7:
    eax = MEM32(edx); /* 0x00714CB7: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(edi) */ /* 0x00714CB9: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714CCC; /* 0x00714CBB: jne 0x714ccc */
L_00714CBD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714CBD: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x00714CC0: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x00714CC3: sub ebx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714CB7; /* 0x00714CC6: jae 0x714cb7 */
L_00714CC8:
    _flag_a = (uint32_t)((MEM32(ecx + 0x10) | 0x10u)); _flag_b = (uint32_t)((MEM32(ecx + 0x10) | 0x10u));
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | 0x10u; /* 0x00714CC8: or dword ptr [ecx + 0x10], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00714CCC:
    edx = esi; /* 0x00714CCC: mov edx, esi */
    edi = 0x00806DC4u; /* 0x00714CCE: mov edi, 0x806dc4 */
    ebx = 0xCu; /* 0x00714CD3: mov ebx, 0xc */
L_00714CD8:
    eax = MEM32(edx); /* 0x00714CD8: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(edi) */ /* 0x00714CDA: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714CED; /* 0x00714CDC: jne 0x714ced */
L_00714CDE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714CDE: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x00714CE1: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x00714CE4: sub ebx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714CD8; /* 0x00714CE7: jae 0x714cd8 */
L_00714CE9:
    _flag_a = (uint32_t)((MEM32(ecx + 0x10) | 0x20u)); _flag_b = (uint32_t)((MEM32(ecx + 0x10) | 0x20u));
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | 0x20u; /* 0x00714CE9: or dword ptr [ecx + 0x10], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00714CED:
    edx = 0x00806DE4u; /* 0x00714CED: mov edx, 0x806de4 */
    edi = 0xCu; /* 0x00714CF2: mov edi, 0xc */
L_00714CF7:
    eax = MEM32(esi); /* 0x00714CF7: mov eax, dword ptr [esi] */
    /* cmp eax, MEM32(edx) */ /* 0x00714CF9: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714D0C; /* 0x00714CFB: jne 0x714d0c */
L_00714CFD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x00714CFD: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714D00: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x00714D03: sub edi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714CF7; /* 0x00714D06: jae 0x714cf7 */
L_00714D08:
    _flag_a = (uint32_t)((MEM32(ecx + 0x10) | 0x40u)); _flag_b = (uint32_t)((MEM32(ecx + 0x10) | 0x40u));
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) | 0x40u; /* 0x00714D08: or dword ptr [ecx + 0x10], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00714D0C:
    edi = POP32_VAL(esp); /* 0x00714D0C: pop edi */
    esi = POP32_VAL(esp); /* 0x00714D0D: pop esi */
    eax = 1; /* 0x00714D0E: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x00714D13: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00714D14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00714D15: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00714D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00714D20u);

L_00714D20:
    PUSH32(esp, ebp); /* 0x00714D20: push ebp */
    ebp = esp; /* 0x00714D21: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x00714D23: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00714D26: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00714D2B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00714D2D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x00714D30: push ebx */
    PUSH32(esp, esi); /* 0x00714D31: push esi */
    PUSH32(esp, 0x28u); /* 0x00714D32: push 0x28 */
    ebx = edx; /* 0x00714D34: mov ebx, edx */
    esi = ecx; /* 0x00714D36: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x00714D38: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714D3E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x18) = eax; /* 0x00714D41: mov dword ptr [esi + 0x18], eax */
    /* test eax, eax */ /* 0x00714D44: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00714D65; /* 0x00714D46: jne 0x714d65 */
L_00714D48:
    PUSH32(esp, 0x00803E4Cu); /* 0x00714D48: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x00714D4D: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714D52: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x00714D55: pop esi */
    ebx = POP32_VAL(esp); /* 0x00714D56: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00714D57: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00714D5A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00714D5C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00714D61: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00714D63: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714D64: ret  */
L_00714D65:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00714D65: xorps xmm0, xmm0 */
    xmm_st(eax, _xmm[0]); /* 0x00714D68: movdqu xmmword ptr [eax], xmm0 */
    PUSH32(esp, 3); /* 0x00714D6C: push 3 */
    xmm_st(eax + 0x10, _xmm[0]); /* 0x00714D6E: movdqu xmmword ptr [eax + 0x10], xmm0 */
    PUSH32(esp, esi); /* 0x00714D73: push esi */
    MEM64(eax + 0x20) = _xmm[0].u64[0]; /* 0x00714D74: movq qword ptr [eax + 0x20], xmm0 */
    eax = MEM32(esi + 0x18); /* 0x00714D79: mov eax, dword ptr [esi + 0x18] */
    PUSH32(esp, 0x00714A80u); /* 0x00714D7C: push 0x714a80 */
    MEM32(eax) = ebx; /* 0x00714D81: mov dword ptr [eax], ebx */
    eax = MEM32(esi + 0x18); /* 0x00714D83: mov eax, dword ptr [esi + 0x18] */
    MEM32(eax + 0x10) = 1; /* 0x00714D86: mov dword ptr [eax + 0x10], 1 */
    eax = MEM32(esi + 0x18); /* 0x00714D8D: mov eax, dword ptr [esi + 0x18] */
    eax = MEM32(eax); /* 0x00714D90: mov eax, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x00714D92: push eax */
    ecx = MEM32(eax); /* 0x00714D93: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x10); /* 0x00714D95: mov eax, dword ptr [ecx + 0x10] */
    RECOMP_ICALL(eax); /* 0x00714D98: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00714D9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00714DB5; /* 0x00714D9C: jns 0x714db5 */
L_00714D9E:
    PUSH32(esp, 0x00807F74u); /* 0x00714D9E: push 0x807f74 */
    PUSH32(esp, 0x00808030u); /* 0x00714DA3: push 0x808030 */
    RECOMP_CALL(sub_006EDB70); /* 0x00714DA8: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00714DAD: add esp, 8 */
    _flag_k = FK_ADD;
    goto L_00714EF4; /* 0x00714DB0: jmp 0x714ef4 */
L_00714DB5:
    eax = MEM32(esi + 0x18); /* 0x00714DB5: mov eax, dword ptr [esi + 0x18] */
    PUSH32(esp, 1); /* 0x00714DB8: push 1 */
    eax = MEM32(eax); /* 0x00714DBA: mov eax, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x00714DBC: push eax */
    ecx = MEM32(eax); /* 0x00714DBD: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x58); /* 0x00714DBF: mov eax, dword ptr [ecx + 0x58] */
    RECOMP_ICALL(eax); /* 0x00714DC2: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00714DC4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00714DDF; /* 0x00714DC6: jns 0x714ddf */
L_00714DC8:
    PUSH32(esp, 0x00807F60u); /* 0x00714DC8: push 0x807f60 */
    PUSH32(esp, 0x00808030u); /* 0x00714DCD: push 0x808030 */
    RECOMP_CALL(sub_006EDB70); /* 0x00714DD2: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00714DD7: add esp, 8 */
    _flag_k = FK_ADD;
    goto L_00714EF4; /* 0x00714DDA: jmp 0x714ef4 */
L_00714DDF:
    eax = MEM32(esi + 0x18); /* 0x00714DDF: mov eax, dword ptr [esi + 0x18] */
    PUSH32(esp, 0x10u); /* 0x00714DE2: push 0x10 */
    eax = MEM32(eax); /* 0x00714DE4: mov eax, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x00714DE6: push eax */
    ecx = MEM32(eax); /* 0x00714DE7: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x58); /* 0x00714DE9: mov eax, dword ptr [ecx + 0x58] */
    RECOMP_ICALL(eax); /* 0x00714DEC: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00714DEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00714E09; /* 0x00714DF0: jns 0x714e09 */
L_00714DF2:
    PUSH32(esp, 0x00807F4Cu); /* 0x00714DF2: push 0x807f4c */
    PUSH32(esp, 0x00808030u); /* 0x00714DF7: push 0x808030 */
    RECOMP_CALL(sub_006EDB70); /* 0x00714DFC: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00714E01: add esp, 8 */
    _flag_k = FK_ADD;
    goto L_00714EF4; /* 0x00714E04: jmp 0x714ef4 */
L_00714E09:
    eax = MEM32(esi + 0x18); /* 0x00714E09: mov eax, dword ptr [esi + 0x18] */
    PUSH32(esp, 0); /* 0x00714E0C: push 0 */
    PUSH32(esp, esi); /* 0x00714E0E: push esi */
    PUSH32(esp, 0x00714B80u); /* 0x00714E0F: push 0x714b80 */
    eax = MEM32(eax); /* 0x00714E14: mov eax, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x00714E16: push eax */
    ecx = MEM32(eax); /* 0x00714E17: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x4C); /* 0x00714E19: mov eax, dword ptr [ecx + 0x4c] */
    RECOMP_ICALL(eax); /* 0x00714E1C: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00714E1E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00714E39; /* 0x00714E20: jns 0x714e39 */
L_00714E22:
    PUSH32(esp, 0x00807F2Cu); /* 0x00714E22: push 0x807f2c */
    PUSH32(esp, 0x00808030u); /* 0x00714E27: push 0x808030 */
    RECOMP_CALL(sub_006EDB70); /* 0x00714E2C: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00714E31: add esp, 8 */
    _flag_k = FK_ADD;
    goto L_00714EF4; /* 0x00714E34: jmp 0x714ef4 */
L_00714E39:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x00714E39: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714E49; /* 0x00714E3D: jne 0x714e49 */
L_00714E3F:
    PUSH32(esp, 0x00807FA8u); /* 0x00714E3F: push 0x807fa8 */
    goto L_00714EEC; /* 0x00714E44: jmp 0x714eec */
L_00714E49:
    eax = MEM32(esi + 0x18); /* 0x00714E49: mov eax, dword ptr [esi + 0x18] */
    edx = ebp + (-0x18); /* 0x00714E4C: lea edx, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = 0x14u; /* 0x00714E4F: mov dword ptr [ebp - 0x18], 0x14 */
    MEM32(ebp + (-0x14)) = 0x10u; /* 0x00714E56: mov dword ptr [ebp - 0x14], 0x10 */
    MEM32(ebp + (-0x10)) = 0; /* 0x00714E5D: mov dword ptr [ebp - 0x10], 0 */
    MEM32(ebp + (-0xC)) = 0; /* 0x00714E64: mov dword ptr [ebp - 0xc], 0 */
    MEM32(ebp + (-0x8)) = 0x2710u; /* 0x00714E6B: mov dword ptr [ebp - 8], 0x2710 */
    eax = MEM32(eax); /* 0x00714E72: mov eax, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x00714E74: push edx */
    PUSH32(esp, 7); /* 0x00714E75: push 7 */
    PUSH32(esp, eax); /* 0x00714E77: push eax */
    ecx = MEM32(eax); /* 0x00714E78: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x18); /* 0x00714E7A: mov eax, dword ptr [ecx + 0x18] */
    RECOMP_ICALL(eax); /* 0x00714E7D: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00714E7F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00714E8A; /* 0x00714E81: js 0x714e8a */
L_00714E83:
    _flag_a = (uint32_t)((MEM32(esi + 0x10) | 0x1000u)); _flag_b = (uint32_t)((MEM32(esi + 0x10) | 0x1000u));
    MEM32(esi + 0x10) = MEM32(esi + 0x10) | 0x1000u; /* 0x00714E83: or dword ptr [esi + 0x10], 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00714E8A:
    eax = MEM32(esi + 0x18); /* 0x00714E8A: mov eax, dword ptr [esi + 0x18] */
    edx = ebp + (-0x18); /* 0x00714E8D: lea edx, [ebp - 0x18] */
    MEM32(ebp + (-0x10)) = 0; /* 0x00714E90: mov dword ptr [ebp - 0x10], 0 */
    MEM32(ebp + (-0xC)) = 0; /* 0x00714E97: mov dword ptr [ebp - 0xc], 0 */
    MEM32(ebp + (-0x8)) = 0; /* 0x00714E9E: mov dword ptr [ebp - 8], 0 */
    eax = MEM32(eax); /* 0x00714EA5: mov eax, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x00714EA7: push edx */
    PUSH32(esp, 9); /* 0x00714EA8: push 9 */
    PUSH32(esp, eax); /* 0x00714EAA: push eax */
    ecx = MEM32(eax); /* 0x00714EAB: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x18); /* 0x00714EAD: mov eax, dword ptr [ecx + 0x18] */
    RECOMP_ICALL(eax); /* 0x00714EB0: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00714EB2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00714EBD; /* 0x00714EB4: js 0x714ebd */
L_00714EB6:
    _flag_a = (uint32_t)((MEM32(esi + 0x10) | 0x2000u)); _flag_b = (uint32_t)((MEM32(esi + 0x10) | 0x2000u));
    MEM32(esi + 0x10) = MEM32(esi + 0x10) | 0x2000u; /* 0x00714EB6: or dword ptr [esi + 0x10], 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00714EBD:
    _flag_a = (uint32_t)((MEM32(esi + 0x10) | 0xC000u)); _flag_b = (uint32_t)((MEM32(esi + 0x10) | 0xC000u));
    MEM32(esi + 0x10) = MEM32(esi + 0x10) | 0xC000u; /* 0x00714EBD: or dword ptr [esi + 0x10], 0xc000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x2400u); /* 0x00714EC4: push 0x2400 */
    MEM32(esi + 0x8) = 0x80u; /* 0x00714EC9: mov dword ptr [esi + 8], 0x80 */
    MEM32(esi + 0xC) = 0x80u; /* 0x00714ED0: mov dword ptr [esi + 0xc], 0x80 */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x00714ED7: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714EDD: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x00714EE0: mov dword ptr [esi + 4], eax */
    /* test eax, eax */ /* 0x00714EE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00714F14; /* 0x00714EE5: jne 0x714f14 */
L_00714EE7:
    PUSH32(esp, 0x00803E4Cu); /* 0x00714EE7: push 0x803e4c */
L_00714EEC:
    RECOMP_CALL(sub_006EDB70); /* 0x00714EEC: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00714EF1: add esp, 4 */
    _flag_k = FK_ADD;
L_00714EF4:
    eax = MEM32(esi + 0x18); /* 0x00714EF4: mov eax, dword ptr [esi + 0x18] */
    eax = MEM32(eax); /* 0x00714EF7: mov eax, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x00714EF9: push eax */
    ecx = MEM32(eax); /* 0x00714EFA: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x20); /* 0x00714EFC: mov eax, dword ptr [ecx + 0x20] */
    RECOMP_ICALL(eax); /* 0x00714EFF: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00714F01: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00714F04: pop esi */
    ebx = POP32_VAL(esp); /* 0x00714F05: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00714F06: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00714F09: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00714F0B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00714F10: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00714F12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714F13: ret  */
L_00714F14:
    PUSH32(esp, 0x2400u); /* 0x00714F14: push 0x2400 */
    PUSH32(esp, 0); /* 0x00714F19: push 0 */
    PUSH32(esp, eax); /* 0x00714F1B: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x00714F1C: call 0x78083e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x00714F21: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00714F24: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00714F27: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00714F29: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00714F2B: pop esi */
    ebx = POP32_VAL(esp); /* 0x00714F2C: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x00714F2D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00714F32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00714F34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714F35: ret  */
    RECOMP_REGS_OUT();
}

void sub_00714F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00714F40u);

L_00714F40:
    PUSH32(esp, ebp); /* 0x00714F40: push ebp */
    ebp = esp; /* 0x00714F41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x89Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x89Cu; /* 0x00714F43: sub esp, 0x89c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00714F49: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00714F4E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00714F50: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx + 0x18); /* 0x00714F53: mov eax, dword ptr [ecx + 0x18] */
    MEM32(ebp + (-0x450)) = 0x44Cu; /* 0x00714F56: mov dword ptr [ebp - 0x450], 0x44c */
    MEM32(ebp + (-0x89C)) = 0x44Cu; /* 0x00714F60: mov dword ptr [ebp - 0x89c], 0x44c */
    PUSH32(esp, esi); /* 0x00714F6A: push esi */
    eax = MEM32(eax); /* 0x00714F6B: mov eax, dword ptr [eax] */
    esi = edx; /* 0x00714F6D: mov esi, edx */
    edx = ebp + (-0x450); /* 0x00714F6F: lea edx, [ebp - 0x450] */
    PUSH32(esp, edx); /* 0x00714F75: push edx */
    PUSH32(esp, eax); /* 0x00714F76: push eax */
    ecx = MEM32(eax); /* 0x00714F77: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x3C); /* 0x00714F79: mov eax, dword ptr [ecx + 0x3c] */
    RECOMP_ICALL(eax); /* 0x00714F7C: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00714F7E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00714FD5; /* 0x00714F80: js 0x714fd5 */
L_00714F82:
    eax = MEM32(esi + 0x2C); /* 0x00714F82: mov eax, dword ptr [esi + 0x2c] */
    edx = ebp + (-0x89C); /* 0x00714F85: lea edx, [ebp - 0x89c] */
    PUSH32(esp, edx); /* 0x00714F8B: push edx */
    eax = MEM32(eax + 0x18); /* 0x00714F8C: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x00714F8F: push eax */
    ecx = MEM32(eax); /* 0x00714F90: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x3C); /* 0x00714F92: mov eax, dword ptr [ecx + 0x3c] */
    RECOMP_ICALL(eax); /* 0x00714F95: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00714F97: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00714FD5; /* 0x00714F99: js 0x714fd5 */
L_00714F9B:
    ecx = ebp + (-0x44C); /* 0x00714F9B: lea ecx, [ebp - 0x44c] */
    esi = 0xCu; /* 0x00714FA1: mov esi, 0xc */
    edx = ebp + (-0x898); /* 0x00714FA6: lea edx, [ebp - 0x898] */
    esp = esp; /* 0x00714FAC: lea esp, [esp] */
L_00714FB0:
    eax = MEM32(ecx); /* 0x00714FB0: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x00714FB2: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00714FD5; /* 0x00714FB4: jne 0x714fd5 */
L_00714FB6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00714FB6: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00714FB9: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x00714FBC: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00714FB0; /* 0x00714FBF: jae 0x714fb0 */
L_00714FC1:
    eax = 1; /* 0x00714FC1: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x00714FC6: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x00714FC7: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00714FCA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00714FCC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00714FD1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00714FD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714FD4: ret  */
L_00714FD5:
    ecx = MEM32(ebp + (-0x4)); /* 0x00714FD5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00714FD8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00714FDA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00714FDC: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x00714FDD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00714FE2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00714FE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00714FE5: ret  */
    RECOMP_REGS_OUT();
}

void sub_00714FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00714FF0u);

L_00714FF0:
    PUSH32(esp, ebp); /* 0x00714FF0: push ebp */
    ebp = esp; /* 0x00714FF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x464u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x464u; /* 0x00714FF3: sub esp, 0x464 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00714FF9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00714FFE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x00715000: mov dword ptr [ebp - 4], eax */
    eax = edx; /* 0x00715003: mov eax, edx */
    MEM32(ebp + (-0x458)) = 0x44Cu; /* 0x00715005: mov dword ptr [ebp - 0x458], 0x44c */
    MEM32(ebp + (-0x45C)) = eax; /* 0x0071500F: mov dword ptr [ebp - 0x45c], eax */
    edx = ebp + (-0x458); /* 0x00715015: lea edx, [ebp - 0x458] */
    PUSH32(esp, ebx); /* 0x0071501B: push ebx */
    PUSH32(esp, esi); /* 0x0071501C: push esi */
    eax = MEM32(eax + 0x2C); /* 0x0071501D: mov eax, dword ptr [eax + 0x2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00715020: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x00715022: push edi */
    MEM32(ebp + (-0x460)) = ecx; /* 0x00715023: mov dword ptr [ebp - 0x460], ecx */
    PUSH32(esp, edx); /* 0x00715029: push edx */
    eax = MEM32(eax + 0x18); /* 0x0071502A: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, eax); /* 0x0071502D: push eax */
    ecx = MEM32(eax); /* 0x0071502E: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x3C); /* 0x00715030: mov eax, dword ptr [ecx + 0x3c] */
    RECOMP_ICALL(eax); /* 0x00715033: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00715035: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_007150B9; /* 0x00715037: js 0x7150b9 */
L_0071503D:
    edi = MEM32(0x87CC60); /* 0x0071503D: mov edi, dword ptr [0x87cc60] */
    /* test edi, edi */ /* 0x00715043: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007150AC; /* 0x00715045: je 0x7150ac */
L_00715047:
    /* cmp MEM32(edi + 0x480), 0 */ /* 0x00715047: cmp dword ptr [edi + 0x480], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x480)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007150A1; /* 0x0071504E: jne 0x7150a1 */
L_00715050:
    edx = edi + 0xC; /* 0x00715050: lea edx, [edi + 0xc] */
    esi = 0xCu; /* 0x00715053: mov esi, 0xc */
    eax = ebp + (-0x454); /* 0x00715058: lea eax, [ebp - 0x454] */
    edi = edi; /* 0x0071505E: mov edi, edi */
L_00715060:
    ecx = MEM32(edx); /* 0x00715060: mov ecx, dword ptr [edx] */
    /* cmp ecx, MEM32(eax) */ /* 0x00715062: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_007150A1; /* 0x00715064: jne 0x7150a1 */
L_00715066:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x00715066: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x00715069: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x0071506C: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_00715060; /* 0x0071506F: jae 0x715060 */
L_00715071:
    eax = MEM32(ebp + (-0x460)); /* 0x00715071: mov eax, dword ptr [ebp - 0x460] */
    edx = MEM32(ebp + (-0x45C)); /* 0x00715077: mov edx, dword ptr [ebp - 0x45c] */
    PUSH32(esp, ecx); /* 0x0071507D: push ecx */
    ecx = eax; /* 0x0071507E: mov ecx, eax */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x00715080: mov byte ptr [eax], bl */
    edx = MEM32(edx + 0x2C); /* 0x00715082: mov edx, dword ptr [edx + 0x2c] */
    edx = MEM32(edx + 0x18); /* 0x00715085: mov edx, dword ptr [edx + 0x18] */
    RECOMP_CALL(sub_00714D20); /* 0x00715088: call 0x714d20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071508D: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00715090: pop edi */
    esi = POP32_VAL(esp); /* 0x00715091: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715092: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x00715093: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00715096: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00715098: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0071509D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071509F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007150A0: ret  */
L_007150A1:
    edi = MEM32(edi + 0x488); /* 0x007150A1: mov edi, dword ptr [edi + 0x488] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x007150A7: inc ebx */
    _flag_k = FK_INC;
    /* test edi, edi */ /* 0x007150A8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00715047; /* 0x007150AA: jne 0x715047 */
L_007150AC:
    PUSH32(esp, 0x00807ED4u); /* 0x007150AC: push 0x807ed4 */
    RECOMP_CALL(sub_006EDB70); /* 0x007150B1: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007150B6: add esp, 4 */
    _flag_k = FK_ADD;
L_007150B9:
    ecx = MEM32(ebp + (-0x4)); /* 0x007150B9: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x007150BC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x007150BF: pop edi */
    esi = POP32_VAL(esp); /* 0x007150C0: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x007150C1: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x007150C3: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x007150C4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x007150C9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007150CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007150CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_007150D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007150D0u);

L_007150D0:
    PUSH32(esp, ebp); /* 0x007150D0: push ebp */
    ebp = esp; /* 0x007150D1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007150D3: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x007150D4: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x007150D7: push ebx */
    ebx = edx; /* 0x007150D8: mov ebx, edx */
    PUSH32(esp, esi); /* 0x007150DA: push esi */
    esi = ecx; /* 0x007150DB: mov esi, ecx */
    PUSH32(esp, edi); /* 0x007150DD: push edi */
    /* test eax, eax */ /* 0x007150DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007150F0; /* 0x007150E0: jne 0x7150f0 */
L_007150E2:
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0x40u)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0x40u));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0x40u; /* 0x007150E2: or dword ptr [esi + 4], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x24) = eax; /* 0x007150E6: mov dword ptr [esi + 0x24], eax */
    edi = POP32_VAL(esp); /* 0x007150E9: pop edi */
    esi = POP32_VAL(esp); /* 0x007150EA: pop esi */
    ebx = POP32_VAL(esp); /* 0x007150EB: pop ebx */
    esp = ebp; /* 0x007150EC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007150EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007150EF: ret  */
L_007150F0:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x007150F0: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x007150F0: shl eax, 2 */
    PUSH32(esp, eax); /* 0x007150F3: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x007150F4: mov dword ptr [ebp - 4], eax */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x007150F7: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x007150FD: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007150FF: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x00715102: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0071511A; /* 0x00715104: jne 0x71511a */
L_00715106:
    PUSH32(esp, 0x00803E4Cu); /* 0x00715106: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x0071510B: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715110: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00715113: pop edi */
    esi = POP32_VAL(esp); /* 0x00715114: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715115: pop ebx */
    esp = ebp; /* 0x00715116: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715118: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715119: ret  */
L_0071511A:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x0071511A: push dword ptr [ebp - 4] */
    PUSH32(esp, 0); /* 0x0071511D: push 0 */
    PUSH32(esp, edi); /* 0x0071511F: push edi */
    RECOMP_CALL(sub_0078083E); /* 0x00715120: call 0x78083e */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x24) = edi; /* 0x00715125: mov dword ptr [esi + 0x24], edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00715128: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebx); /* 0x0071512B: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x0071512E: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0071517E; /* 0x00715131: je 0x71517e */
L_00715133:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00715133: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_00715178; /* 0x00715134: je 0x715178 */
L_00715136:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00715136: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_0071514D; /* 0x00715137: je 0x71514d */
L_00715139:
    PUSH32(esp, 0x00807F88u); /* 0x00715139: push 0x807f88 */
    RECOMP_CALL(sub_006EDB70); /* 0x0071513E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715143: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00715146: pop edi */
    esi = POP32_VAL(esp); /* 0x00715147: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715148: pop ebx */
    esp = ebp; /* 0x00715149: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071514B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071514C: ret  */
L_0071514D:
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0x40u)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0x40u));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0x40u; /* 0x0071514D: or dword ptr [esi + 4], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00715151:
    ecx = MEM32(ebp + 0x8); /* 0x00715151: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x4); /* 0x00715154: mov eax, dword ptr [ebx + 4] */
    MEM32(edi) = eax; /* 0x00715157: mov dword ptr [edi], eax */
    /* cmp ecx, 1 */ /* 0x00715159: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_00715164; /* 0x0071515C: jle 0x715164 */
L_0071515E:
    eax = MEM32(ebx + 0x8); /* 0x0071515E: mov eax, dword ptr [ebx + 8] */
    MEM32(edi + 0x4) = eax; /* 0x00715161: mov dword ptr [edi + 4], eax */
L_00715164:
    /* cmp ecx, 2 */ /* 0x00715164: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_00715187; /* 0x00715167: jle 0x715187 */
L_00715169:
    eax = MEM32(ebx + 0xC); /* 0x00715169: mov eax, dword ptr [ebx + 0xc] */
    MEM32(edi + 0x8) = eax; /* 0x0071516C: mov dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0071516F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00715171: pop edi */
    esi = POP32_VAL(esp); /* 0x00715172: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715173: pop ebx */
    esp = ebp; /* 0x00715174: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715176: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715177: ret  */
L_00715178:
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0x10u)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0x10u));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0x10u; /* 0x00715178: or dword ptr [esi + 4], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_00715151; /* 0x0071517C: jmp 0x715151 */
L_0071517E:
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0x20u));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0x20u; /* 0x0071517E: or dword ptr [esi + 4], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x4); /* 0x00715182: mov eax, dword ptr [ebx + 4] */
    MEM32(edi) = eax; /* 0x00715185: mov dword ptr [edi], eax */
L_00715187:
    edi = POP32_VAL(esp); /* 0x00715187: pop edi */
    esi = POP32_VAL(esp); /* 0x00715188: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00715189: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x0071518B: pop ebx */
    esp = ebp; /* 0x0071518C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071518E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071518F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00715190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00715190u);

L_00715190:
    PUSH32(esp, ebp); /* 0x00715190: push ebp */
    ebp = esp; /* 0x00715191: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00715193: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00715196: push ebx */
    PUSH32(esp, esi); /* 0x00715197: push esi */
    PUSH32(esp, edi); /* 0x00715198: push edi */
    PUSH32(esp, 0x38u); /* 0x00715199: push 0x38 */
    edi = edx; /* 0x0071519B: mov edi, edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x0071519D: mov dword ptr [ebp - 4], ecx */
    PUSH32(esp, 0); /* 0x007151A0: push 0 */
    PUSH32(esp, edi); /* 0x007151A2: push edi */
    MEM32(ebp + (-0xC)) = edi; /* 0x007151A3: mov dword ptr [ebp - 0xc], edi */
    RECOMP_CALL(sub_0078083E); /* 0x007151A6: call 0x78083e */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x7CC454); /* 0x007151AB: mov esi, dword ptr [0x7cc454] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x007151B1: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi) = 0x38u; /* 0x007151B4: mov dword ptr [edi], 0x38 */
    MEM32(edi + 0xC) = 0; /* 0x007151BA: mov dword ptr [edi + 0xc], 0 */
    MEM32(edi + 0x10) = 0x2710u; /* 0x007151C1: mov dword ptr [edi + 0x10], 0x2710 */
    PUSH32(esp, 0x14u); /* 0x007151C8: push 0x14 */
    MEM32(edi + 0x4) = 2; /* 0x007151CA: mov dword ptr [edi + 4], 2 */
    RECOMP_ICALL(esi); /* 0x007151D1: call esi */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x007151D3: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007151D5: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ebx; /* 0x007151D8: mov dword ptr [ebp - 0x10], ebx */
    /* test ebx, ebx */ /* 0x007151DB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007151F3; /* 0x007151DD: jne 0x7151f3 */
L_007151DF:
    PUSH32(esp, 0x00803E4Cu); /* 0x007151DF: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x007151E4: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007151E9: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x007151EC: pop edi */
    esi = POP32_VAL(esp); /* 0x007151ED: pop esi */
    ebx = POP32_VAL(esp); /* 0x007151EE: pop ebx */
    esp = ebp; /* 0x007151EF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007151F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007151F2: ret  */
L_007151F3:
    eax = MEM32(ebp + (-0x4)); /* 0x007151F3: mov eax, dword ptr [ebp - 4] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x007151F6: xorps xmm0, xmm0 */
    xmm_st(ebx, _xmm[0]); /* 0x007151F9: movdqu xmmword ptr [ebx], xmm0 */
    MEM32(ebx + 0x10) = 0; /* 0x007151FD: mov dword ptr [ebx + 0x10], 0 */
    MEM32(edi + 0x28) = ebx; /* 0x00715204: mov dword ptr [edi + 0x28], ebx */
    MEM32(ebx) = 0x14u; /* 0x00715207: mov dword ptr [ebx], 0x14 */
    eax = MEM32(eax + 0x14); /* 0x0071520D: mov eax, dword ptr [eax + 0x14] */
    MEM32(edi + 0x1C) = eax; /* 0x00715210: mov dword ptr [edi + 0x1c], eax */
    /* test eax, eax */ /* 0x00715213: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00715252; /* 0x00715215: je 0x715252 */
L_00715217:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x00715217: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x00715217: shl eax, 2 */
    PUSH32(esp, eax); /* 0x0071521A: push eax */
    RECOMP_ICALL(esi); /* 0x0071521B: call esi */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x0071521D: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071521F: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x00715222: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007151DF; /* 0x00715224: je 0x7151df */
L_00715226:
    edx = MEM32(ebp + (-0x4)); /* 0x00715226: mov edx, dword ptr [ebp - 4] */
    eax = MEM32(edx + 0x18); /* 0x00715229: mov eax, dword ptr [edx + 0x18] */
    eax = MEM32(eax + 0x4); /* 0x0071522C: mov eax, dword ptr [eax + 4] */
    MEM32(ecx) = eax; /* 0x0071522F: mov dword ptr [ecx], eax */
    /* cmp MEM32(edi + 0x1C), 1 */ /* 0x00715231: cmp dword ptr [edi + 0x1c], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_00715240; /* 0x00715235: jbe 0x715240 */
L_00715237:
    eax = MEM32(edx + 0x18); /* 0x00715237: mov eax, dword ptr [edx + 0x18] */
    eax = MEM32(eax + 0x8); /* 0x0071523A: mov eax, dword ptr [eax + 8] */
    MEM32(ecx + 0x4) = eax; /* 0x0071523D: mov dword ptr [ecx + 4], eax */
L_00715240:
    /* cmp MEM32(edi + 0x1C), 2 */ /* 0x00715240: cmp dword ptr [edi + 0x1c], 2 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0071524F; /* 0x00715244: jbe 0x71524f */
L_00715246:
    eax = MEM32(edx + 0x18); /* 0x00715246: mov eax, dword ptr [edx + 0x18] */
    eax = MEM32(eax + 0xC); /* 0x00715249: mov eax, dword ptr [eax + 0xc] */
    MEM32(ecx + 0x8) = eax; /* 0x0071524C: mov dword ptr [ecx + 8], eax */
L_0071524F:
    MEM32(edi + 0x20) = ecx; /* 0x0071524F: mov dword ptr [edi + 0x20], ecx */
L_00715252:
    esi = MEM32(ebp + 0x8); /* 0x00715252: mov esi, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(esi); /* 0x00715255: movzx eax, word ptr [esi] */
    /* cmp eax, 0x40u */ /* 0x00715258: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_00715670; /* 0x0071525B: jg 0x715670 */
L_00715261:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00715529; /* 0x00715261: je 0x715529 */
L_00715267:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00715267: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0x1Fu */ /* 0x00715268: cmp eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00715770; /* 0x0071526B: ja 0x715770 */
L_00715271:
    eax = (uint32_t)MEM8(eax + 0x715A54); /* 0x00715271: movzx eax, byte ptr [eax + 0x715a54] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x715A48)); goto _ljump; }
L_0071527F:
    eax = MEM32(0x7CC454); /* 0x0071527F: mov eax, dword ptr [0x7cc454] */
    PUSH32(esp, 4); /* 0x00715284: push 4 */
    RECOMP_ICALL(eax); /* 0x00715286: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715288: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x0071528B: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x0071528E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007151DF; /* 0x00715290: je 0x7151df */
L_00715296:
    MEM32(eax) = 0; /* 0x00715296: mov dword ptr [eax], 0 */
    eax = (int32_t)(int16_t)MEM16(esi + 0x1E); /* 0x0071529C: movsx eax, word ptr [esi + 0x1e] */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x007152A0: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x007152A6: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x007152AB: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x007152AD: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x8)); /* 0x007152AF: mov ecx, dword ptr [ebp - 8] */
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x007152B2: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x007152B5: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x007152B7: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x007152B7: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x007152BA: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x007152BC: mov dword ptr [ecx], eax */
    MEM32(edi + 0x2C) = 4; /* 0x007152BE: mov dword ptr [edi + 0x2c], 4 */
    MEM32(edi + 0x30) = ecx; /* 0x007152C5: mov dword ptr [edi + 0x30], ecx */
    eax = (uint32_t)((int32_t)MEM32(esi + 0x14) * (int32_t)0x3E8u); /* 0x007152C8: imul eax, dword ptr [esi + 0x14], 0x3e8 */
    MEM32(edi + 0x8) = eax; /* 0x007152CF: mov dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x007152D2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)MEM16(esi + 0x1A); /* 0x007152D5: movzx ecx, word ptr [esi + 0x1a] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x007152D9: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_007152E1; /* 0x007152DC: je 0x7152e1 */
L_007152DE:
    eax = ecx + 0x2F; /* 0x007152DE: lea eax, [ecx + 0x2f] */
L_007152E1:
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x007152E1: push dword ptr [edi + 0x1c] */
    MEM32(edi + 0x14) = eax; /* 0x007152E4: mov dword ptr [edi + 0x14], eax */
    edx = esi + 0x4; /* 0x007152E7: lea edx, [esi + 4] */
    eax = (uint32_t)MEM16(esi + 0x1C); /* 0x007152EA: movzx eax, word ptr [esi + 0x1c] */
    ecx = edi; /* 0x007152EE: mov ecx, edi */
    MEM32(edi + 0x18) = eax; /* 0x007152F0: mov dword ptr [edi + 0x18], eax */
    eax = (uint32_t)MEM16(esi + 0x18); /* 0x007152F3: movzx eax, word ptr [esi + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x007152F7: imul eax, eax, 0x3e8 */
    MEM32(edi + 0x34) = eax; /* 0x007152FD: mov dword ptr [edi + 0x34], eax */
    RECOMP_CALL(sub_007150D0); /* 0x00715300: call 0x7150d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715305: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00715308: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00715316; /* 0x0071530A: jns 0x715316 */
L_0071530C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x0071530C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x0071530F: pop edi */
    esi = POP32_VAL(esp); /* 0x00715310: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715311: pop ebx */
    esp = ebp; /* 0x00715312: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715314: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715315: ret  */
L_00715316:
    /* cmp MEM16(esi + 0x20), 0 */ /* 0x00715316: cmp word ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM16(esi + 0x20)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_00715328; /* 0x0071531B: jne 0x715328 */
L_0071531D:
    /* cmp MEM16(esi + 0x24), 0 */ /* 0x0071531D: cmp word ptr [esi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM16(esi + 0x24)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00715A2C; /* 0x00715322: je 0x715a2c */
L_00715328:
    eax = (uint32_t)MEM16(esi + 0x22); /* 0x00715328: movzx eax, word ptr [esi + 0x22] */
    edi = 0x7FFFu; /* 0x0071532C: mov edi, 0x7fff */
    /* cmp LO16(eax), LO16(edi) */ /* 0x00715331: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_0071533D; /* 0x00715334: jbe 0x71533d */
L_00715336:
    eax = 0x2710u; /* 0x00715336: mov eax, 0x2710 */
    goto L_00715356; /* 0x0071533B: jmp 0x715356 */
L_0071533D:
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x0071533D: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x00715343: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00715348: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0071534A: add edx, ecx */
    _flag_k = FK_ADD;
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x0071534C: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x0071534F: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00715351: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00715351: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00715354: add eax, edx */
    _flag_k = FK_ADD;
L_00715356:
    MEM32(ebx + 0x4) = eax; /* 0x00715356: mov dword ptr [ebx + 4], eax */
    eax = (uint32_t)MEM16(esi + 0x20); /* 0x00715359: movzx eax, word ptr [esi + 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x0071535D: imul eax, eax, 0x3e8 */
    MEM32(ebx + 0x8) = eax; /* 0x00715363: mov dword ptr [ebx + 8], eax */
    eax = (uint32_t)MEM16(esi + 0x26); /* 0x00715366: movzx eax, word ptr [esi + 0x26] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x0071536A: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_00715376; /* 0x0071536D: jbe 0x715376 */
L_0071536F:
    eax = 0x2710u; /* 0x0071536F: mov eax, 0x2710 */
    goto L_00715391; /* 0x00715374: jmp 0x715391 */
L_00715376:
    ecx = eax; /* 0x00715376: mov ecx, eax */
    eax = 0x80010003u; /* 0x00715378: mov eax, 0x80010003 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2710u); /* 0x0071537D: imul ecx, ecx, 0x2710 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00715383: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00715385: add edx, ecx */
    _flag_k = FK_ADD;
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x00715387: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x0071538A: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0071538C: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0071538C: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0071538F: add eax, edx */
    _flag_k = FK_ADD;
L_00715391:
    MEM32(ebx + 0xC) = eax; /* 0x00715391: mov dword ptr [ebx + 0xc], eax */
    eax = (uint32_t)MEM16(esi + 0x24); /* 0x00715394: movzx eax, word ptr [esi + 0x24] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x00715398: imul eax, eax, 0x3e8 */
    MEM32(ebx + 0x10) = eax; /* 0x0071539E: mov dword ptr [ebx + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007153A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x007153A3: pop edi */
    esi = POP32_VAL(esp); /* 0x007153A4: pop esi */
    ebx = POP32_VAL(esp); /* 0x007153A5: pop ebx */
    esp = ebp; /* 0x007153A6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007153A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007153A9: ret  */
L_007153AA:
    eax = MEM32(0x7CC454); /* 0x007153AA: mov eax, dword ptr [0x7cc454] */
    PUSH32(esp, 0x10u); /* 0x007153AF: push 0x10 */
    RECOMP_ICALL(eax); /* 0x007153B1: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007153B3: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x007153B6: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x007153B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007151DF; /* 0x007153BB: je 0x7151df */
L_007153C1:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x007153C1: xorps xmm0, xmm0 */
    xmm_st(eax, _xmm[0]); /* 0x007153C4: movdqu xmmword ptr [eax], xmm0 */
    eax = (int32_t)(int16_t)MEM16(esi + 0x20); /* 0x007153C8: movsx eax, word ptr [esi + 0x20] */
    PUSH32(esp, eax); /* 0x007153CC: push eax */
    RECOMP_CALL(sub_0077F300); /* 0x007153CD: call 0x77f300 */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x007153D2: imul ecx, eax, 0x2710 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007153D8: add esp, 4 */
    _flag_k = FK_ADD;
    eax = 0x80010003u; /* 0x007153DB: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x007153E0: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x007153E2: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x4)); /* 0x007153E4: mov ecx, dword ptr [ebp - 4] */
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x007153E7: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x007153EA: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x007153EC: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x007153EC: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x007153EF: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x007153F1: mov dword ptr [ecx], eax */
    eax = (int32_t)(int16_t)MEM16(esi + 0x22); /* 0x007153F3: movsx eax, word ptr [esi + 0x22] */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x007153F7: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x007153FD: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00715402: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00715404: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x4)); /* 0x00715406: mov ecx, dword ptr [ebp - 4] */
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x00715409: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x0071540C: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0071540E: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0071540E: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00715411: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x4) = eax; /* 0x00715413: mov dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00715416: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x20), LO16(eax) */ /* 0x00715418: cmp word ptr [esi + 0x20], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x20)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = 0x4650u; /* 0x0071541C: mov ecx, 0x4650 */
    if (CMP_L(_flag_a, _flag_b)) { eax = ecx; } /* 0x00715421: cmovl eax, ecx */
    ecx = (uint32_t)MEM16(esi + 0x24); /* 0x00715424: movzx ecx, word ptr [esi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x00715428: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = 0x8CA0u; /* 0x0071542A: mov ecx, 0x8ca0 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0071542F: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x00715430: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ebp + (-0x4)); /* 0x00715432: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x8) = edx; /* 0x00715435: mov dword ptr [ecx + 8], edx */
    eax = (uint32_t)MEM16(esi + 0x1E); /* 0x00715438: movzx eax, word ptr [esi + 0x1e] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x0071543C: imul eax, eax, 0x3e8 */
    MEM32(ecx + 0xC) = eax; /* 0x00715442: mov dword ptr [ecx + 0xc], eax */
    MEM32(edi + 0x2C) = 0x10u; /* 0x00715445: mov dword ptr [edi + 0x2c], 0x10 */
    MEM32(edi + 0x30) = ecx; /* 0x0071544C: mov dword ptr [edi + 0x30], ecx */
    eax = (uint32_t)((int32_t)MEM32(esi + 0x14) * (int32_t)0x3E8u); /* 0x0071544F: imul eax, dword ptr [esi + 0x14], 0x3e8 */
    MEM32(edi + 0x8) = eax; /* 0x00715456: mov dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00715459: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)MEM16(esi + 0x1A); /* 0x0071545C: movzx ecx, word ptr [esi + 0x1a] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x00715460: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00715468; /* 0x00715463: je 0x715468 */
L_00715465:
    eax = ecx + 0x2F; /* 0x00715465: lea eax, [ecx + 0x2f] */
L_00715468:
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x00715468: push dword ptr [edi + 0x1c] */
    MEM32(edi + 0x14) = eax; /* 0x0071546B: mov dword ptr [edi + 0x14], eax */
    edx = esi + 0x4; /* 0x0071546E: lea edx, [esi + 4] */
    eax = (uint32_t)MEM16(esi + 0x1C); /* 0x00715471: movzx eax, word ptr [esi + 0x1c] */
    ecx = edi; /* 0x00715475: mov ecx, edi */
    MEM32(edi + 0x18) = eax; /* 0x00715477: mov dword ptr [edi + 0x18], eax */
    eax = (uint32_t)MEM16(esi + 0x18); /* 0x0071547A: movzx eax, word ptr [esi + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x0071547E: imul eax, eax, 0x3e8 */
    MEM32(edi + 0x34) = eax; /* 0x00715484: mov dword ptr [edi + 0x34], eax */
    RECOMP_CALL(sub_007150D0); /* 0x00715487: call 0x7150d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071548C: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0071548F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0071530C; /* 0x00715491: js 0x71530c */
L_00715497:
    /* cmp MEM16(esi + 0x26), 0 */ /* 0x00715497: cmp word ptr [esi + 0x26], 0 */
    _flag_a = (uint32_t)(MEM16(esi + 0x26)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_007154A9; /* 0x0071549C: jne 0x7154a9 */
L_0071549E:
    /* cmp MEM16(esi + 0x2A), 0 */ /* 0x0071549E: cmp word ptr [esi + 0x2a], 0 */
    _flag_a = (uint32_t)(MEM16(esi + 0x2A)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00715A2C; /* 0x007154A3: je 0x715a2c */
L_007154A9:
    eax = (uint32_t)MEM16(esi + 0x28); /* 0x007154A9: movzx eax, word ptr [esi + 0x28] */
    edi = 0x7FFFu; /* 0x007154AD: mov edi, 0x7fff */
    /* cmp LO16(eax), LO16(edi) */ /* 0x007154B2: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_007154BE; /* 0x007154B5: jbe 0x7154be */
L_007154B7:
    eax = 0x2710u; /* 0x007154B7: mov eax, 0x2710 */
    goto L_007154D7; /* 0x007154BC: jmp 0x7154d7 */
L_007154BE:
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x007154BE: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x007154C4: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x007154C9: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x007154CB: add edx, ecx */
    _flag_k = FK_ADD;
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x007154CD: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x007154D0: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x007154D2: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x007154D2: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x007154D5: add eax, edx */
    _flag_k = FK_ADD;
L_007154D7:
    MEM32(ebx + 0x4) = eax; /* 0x007154D7: mov dword ptr [ebx + 4], eax */
    eax = (uint32_t)MEM16(esi + 0x26); /* 0x007154DA: movzx eax, word ptr [esi + 0x26] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x007154DE: imul eax, eax, 0x3e8 */
    MEM32(ebx + 0x8) = eax; /* 0x007154E4: mov dword ptr [ebx + 8], eax */
    eax = (uint32_t)MEM16(esi + 0x2C); /* 0x007154E7: movzx eax, word ptr [esi + 0x2c] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x007154EB: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_007154F7; /* 0x007154EE: jbe 0x7154f7 */
L_007154F0:
    eax = 0x2710u; /* 0x007154F0: mov eax, 0x2710 */
    goto L_00715510; /* 0x007154F5: jmp 0x715510 */
L_007154F7:
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x007154F7: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x007154FD: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00715502: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00715504: add edx, ecx */
    _flag_k = FK_ADD;
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x00715506: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x00715509: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0071550B: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0071550B: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0071550E: add eax, edx */
    _flag_k = FK_ADD;
L_00715510:
    MEM32(ebx + 0xC) = eax; /* 0x00715510: mov dword ptr [ebx + 0xc], eax */
    eax = (uint32_t)MEM16(esi + 0x2A); /* 0x00715513: movzx eax, word ptr [esi + 0x2a] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x00715517: imul eax, eax, 0x3e8 */
    MEM32(ebx + 0x10) = eax; /* 0x0071551D: mov dword ptr [ebx + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00715520: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00715522: pop edi */
    esi = POP32_VAL(esp); /* 0x00715523: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715524: pop ebx */
    esp = ebp; /* 0x00715525: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715527: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715528: ret  */
L_00715529:
    eax = MEM32(0x7CC454); /* 0x00715529: mov eax, dword ptr [0x7cc454] */
    PUSH32(esp, 8); /* 0x0071552E: push 8 */
    RECOMP_ICALL(eax); /* 0x00715530: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715532: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x00715535: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x00715538: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007151DF; /* 0x0071553A: je 0x7151df */
L_00715540:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00715540: xorps xmm0, xmm0 */
    MEM64(eax) = _xmm[0].u64[0]; /* 0x00715543: movq qword ptr [eax], xmm0 */
    eax = (int32_t)(int16_t)MEM16(esi + 0x1E); /* 0x00715547: movsx eax, word ptr [esi + 0x1e] */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x0071554B: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x00715551: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00715556: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00715558: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x4)); /* 0x0071555A: mov ecx, dword ptr [ebp - 4] */
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x0071555D: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x00715560: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00715562: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00715562: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00715565: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x00715567: mov dword ptr [ecx], eax */
    eax = (int32_t)(int16_t)MEM16(esi + 0x20); /* 0x00715569: movsx eax, word ptr [esi + 0x20] */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x0071556D: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x00715573: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00715578: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0071557A: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x4)); /* 0x0071557C: mov ecx, dword ptr [ebp - 4] */
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x0071557F: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x00715582: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00715584: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00715584: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00715587: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x4) = eax; /* 0x00715589: mov dword ptr [ecx + 4], eax */
    MEM32(edi + 0x2C) = 8; /* 0x0071558C: mov dword ptr [edi + 0x2c], 8 */
    MEM32(edi + 0x30) = ecx; /* 0x00715593: mov dword ptr [edi + 0x30], ecx */
    eax = (uint32_t)((int32_t)MEM32(esi + 0x14) * (int32_t)0x3E8u); /* 0x00715596: imul eax, dword ptr [esi + 0x14], 0x3e8 */
    MEM32(edi + 0x8) = eax; /* 0x0071559D: mov dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x007155A0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)MEM16(esi + 0x1A); /* 0x007155A3: movzx ecx, word ptr [esi + 0x1a] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x007155A7: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_007155AF; /* 0x007155AA: je 0x7155af */
L_007155AC:
    eax = ecx + 0x2F; /* 0x007155AC: lea eax, [ecx + 0x2f] */
L_007155AF:
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x007155AF: push dword ptr [edi + 0x1c] */
    MEM32(edi + 0x14) = eax; /* 0x007155B2: mov dword ptr [edi + 0x14], eax */
    edx = esi + 0x4; /* 0x007155B5: lea edx, [esi + 4] */
    eax = (uint32_t)MEM16(esi + 0x1C); /* 0x007155B8: movzx eax, word ptr [esi + 0x1c] */
    ecx = edi; /* 0x007155BC: mov ecx, edi */
    MEM32(edi + 0x18) = eax; /* 0x007155BE: mov dword ptr [edi + 0x18], eax */
    eax = (uint32_t)MEM16(esi + 0x18); /* 0x007155C1: movzx eax, word ptr [esi + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x007155C5: imul eax, eax, 0x3e8 */
    MEM32(edi + 0x34) = eax; /* 0x007155CB: mov dword ptr [edi + 0x34], eax */
    RECOMP_CALL(sub_007150D0); /* 0x007155CE: call 0x7150d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007155D3: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x007155D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0071530C; /* 0x007155D8: js 0x71530c */
L_007155DE:
    /* cmp MEM16(esi + 0x22), 0 */ /* 0x007155DE: cmp word ptr [esi + 0x22], 0 */
    _flag_a = (uint32_t)(MEM16(esi + 0x22)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_007155F0; /* 0x007155E3: jne 0x7155f0 */
L_007155E5:
    /* cmp MEM16(esi + 0x26), 0 */ /* 0x007155E5: cmp word ptr [esi + 0x26], 0 */
    _flag_a = (uint32_t)(MEM16(esi + 0x26)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00715A2C; /* 0x007155EA: je 0x715a2c */
L_007155F0:
    eax = (uint32_t)MEM16(esi + 0x24); /* 0x007155F0: movzx eax, word ptr [esi + 0x24] */
    edi = 0x7FFFu; /* 0x007155F4: mov edi, 0x7fff */
    /* cmp LO16(eax), LO16(edi) */ /* 0x007155F9: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_00715605; /* 0x007155FC: jbe 0x715605 */
L_007155FE:
    eax = 0x2710u; /* 0x007155FE: mov eax, 0x2710 */
    goto L_0071561E; /* 0x00715603: jmp 0x71561e */
L_00715605:
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x00715605: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x0071560B: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00715610: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00715612: add edx, ecx */
    _flag_k = FK_ADD;
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x00715614: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x00715617: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00715619: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00715619: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0071561C: add eax, edx */
    _flag_k = FK_ADD;
L_0071561E:
    MEM32(ebx + 0x4) = eax; /* 0x0071561E: mov dword ptr [ebx + 4], eax */
    eax = (uint32_t)MEM16(esi + 0x22); /* 0x00715621: movzx eax, word ptr [esi + 0x22] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x00715625: imul eax, eax, 0x3e8 */
    MEM32(ebx + 0x8) = eax; /* 0x0071562B: mov dword ptr [ebx + 8], eax */
    eax = (uint32_t)MEM16(esi + 0x28); /* 0x0071562E: movzx eax, word ptr [esi + 0x28] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x00715632: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_0071563E; /* 0x00715635: jbe 0x71563e */
L_00715637:
    eax = 0x2710u; /* 0x00715637: mov eax, 0x2710 */
    goto L_00715657; /* 0x0071563C: jmp 0x715657 */
L_0071563E:
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x0071563E: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x00715644: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00715649: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0071564B: add edx, ecx */
    _flag_k = FK_ADD;
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x0071564D: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x00715650: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00715652: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00715652: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00715655: add eax, edx */
    _flag_k = FK_ADD;
L_00715657:
    MEM32(ebx + 0xC) = eax; /* 0x00715657: mov dword ptr [ebx + 0xc], eax */
    eax = (uint32_t)MEM16(esi + 0x26); /* 0x0071565A: movzx eax, word ptr [esi + 0x26] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x0071565E: imul eax, eax, 0x3e8 */
    MEM32(ebx + 0x10) = eax; /* 0x00715664: mov dword ptr [ebx + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00715667: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00715669: pop edi */
    esi = POP32_VAL(esp); /* 0x0071566A: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071566B: pop ebx */
    esp = ebp; /* 0x0071566C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071566E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071566F: ret  */
L_00715670:
    /* cmp eax, 0x200u */ /* 0x00715670: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_0071575E; /* 0x00715675: jg 0x71575e */
L_0071567B:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071568F; /* 0x0071567B: je 0x71568f */
L_0071567D:
    /* cmp eax, 0x80u */ /* 0x0071567D: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071568F; /* 0x00715682: je 0x71568f */
L_00715684:
    /* cmp eax, 0x100u */ /* 0x00715684: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00715770; /* 0x00715689: jne 0x715770 */
L_0071568F:
    eax = MEM32(edi + 0x1C); /* 0x0071568F: mov eax, dword ptr [edi + 0x1c] */
    eax = eax + eax * 2; /* 0x00715692: lea eax, [eax + eax*2] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x00715695: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x00715695: shl eax, 3 */
    PUSH32(esp, eax); /* 0x00715698: push eax */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x00715699: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071569F: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x007156A2: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x007156A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007151DF; /* 0x007156A7: je 0x7151df */
L_007156AD:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x007156AD: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x8)) = 0; /* 0x007156B0: mov dword ptr [ebp - 8], 0 */
    xmm_st(eax, _xmm[0]); /* 0x007156B7: movdqu xmmword ptr [eax], xmm0 */
    MEM64(eax + 0x10) = _xmm[0].u64[0]; /* 0x007156BB: movq qword ptr [eax + 0x10], xmm0 */
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x007156C0: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_007159D2; /* 0x007156C4: jle 0x7159d2 */
L_007156CA:
    ebx = eax + 0x8; /* 0x007156CA: lea ebx, [eax + 8] */
    eax = esi + 0x2A; /* 0x007156CD: lea eax, [esi + 0x2a] */
    esi = eax; /* 0x007156D0: mov esi, eax */
    goto L_007156E0; /* 0x007156D2: jmp 0x7156e0 */
L_007156E0:
    eax = (int32_t)(int16_t)MEM16(esi + 0x12); /* 0x007156E0: movsx eax, word ptr [esi + 0x12] */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x007156E4: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x007156EA: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x007156EF: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x007156F1: add edx, ecx */
    _flag_k = FK_ADD;
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x007156F3: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x007156F6: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x007156F8: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x007156F8: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x007156FB: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebx + (-0x8)) = eax; /* 0x007156FD: mov dword ptr [ebx - 8], eax */
    eax = (int32_t)(int16_t)MEM16(esi); /* 0x00715700: movsx eax, word ptr [esi] */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x00715703: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x00715709: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0071570E: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00715710: add edx, ecx */
    _flag_k = FK_ADD;
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x00715712: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x00715715: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00715717: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00715717: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0071571A: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebx + (-0x4)) = eax; /* 0x0071571C: mov dword ptr [ebx - 4], eax */
    eax = (int32_t)(int16_t)MEM16(esi + 0x6); /* 0x0071571F: movsx eax, word ptr [esi + 6] */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x00715723: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x00715729: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0071572E: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00715730: add edx, ecx */
    _flag_k = FK_ADD;
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x00715732: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x00715735: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00715737: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00715737: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0071573A: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x0071573C: mov dword ptr [ebx], eax */
    ecx = (uint32_t)MEM16(esi + (-0xC)); /* 0x0071573E: movzx ecx, word ptr [esi - 0xc] */
    eax = ecx; /* 0x00715742: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEu);
    eax = eax & 0xFFFEu; /* 0x00715744: and eax, 0xfffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFEu */ /* 0x00715749: cmp eax, 0xfffe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_00715927; /* 0x0071574E: jbe 0x715927 */
L_00715754:
    eax = 0x2710u; /* 0x00715754: mov eax, 0x2710 */
    goto L_00715944; /* 0x00715759: jmp 0x715944 */
L_0071575E:
    /* cmp eax, 0x400u */ /* 0x0071575E: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071568F; /* 0x00715763: je 0x71568f */
L_00715769:
    /* cmp eax, 0x800u */ /* 0x00715769: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00715784; /* 0x0071576E: je 0x715784 */
L_00715770:
    PUSH32(esp, 0x008080A4u); /* 0x00715770: push 0x8080a4 */
    RECOMP_CALL(sub_006EDB70); /* 0x00715775: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071577A: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x0071577D: pop edi */
    esi = POP32_VAL(esp); /* 0x0071577E: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071577F: pop ebx */
    esp = ebp; /* 0x00715780: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715782: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715783: ret  */
L_00715784:
    eax = MEM32(0x7CC454); /* 0x00715784: mov eax, dword ptr [0x7cc454] */
    PUSH32(esp, 0x10u); /* 0x00715789: push 0x10 */
    RECOMP_ICALL(eax); /* 0x0071578B: call eax */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x0071578D: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071578F: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edx; /* 0x00715792: mov dword ptr [ebp - 4], edx */
    /* test edx, edx */ /* 0x00715795: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_007151DF; /* 0x00715797: je 0x7151df */
L_0071579D:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0071579D: xorps xmm0, xmm0 */
    xmm_st(edx, _xmm[0]); /* 0x007157A0: movdqu xmmword ptr [edx], xmm0 */
    eax = (uint32_t)MEM8(esi + 0x1E); /* 0x007157A4: movzx eax, byte ptr [esi + 0x1e] */
    MEM32(edx) = eax; /* 0x007157A8: mov dword ptr [edx], eax */
    eax = (uint32_t)MEM16(esi + 0x20); /* 0x007157AA: movzx eax, word ptr [esi + 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x007157AE: imul eax, eax, 0x3e8 */
    MEM32(edx + 0x4) = eax; /* 0x007157B4: mov dword ptr [edx + 4], eax */
    ecx = (uint32_t)MEM16(esi + 0x22); /* 0x007157B7: movzx ecx, word ptr [esi + 0x22] */
    eax = MEM32(edx); /* 0x007157BB: mov eax, dword ptr [edx] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x007157BD: imul eax, ecx */
    MEM32(edx + 0x8) = ecx; /* 0x007157C0: mov dword ptr [edx + 8], ecx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x007157C3: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x007157C3: shl eax, 2 */
    PUSH32(esp, eax); /* 0x007157C6: push eax */
    RECOMP_ICALL(MEM32(0x7CC454)); /* 0x007157C7: call dword ptr [0x7cc454] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x007157CD: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x007157D0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x007157D2: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = edx; /* 0x007157D5: mov dword ptr [ebp - 8], edx */
    MEM32(ecx + 0xC) = eax; /* 0x007157D8: mov dword ptr [ecx + 0xc], eax */
    ecx = (uint32_t)MEM8(esi + 0x1E); /* 0x007157DB: movzx ecx, byte ptr [esi + 0x1e] */
    eax = (uint32_t)MEM16(esi + 0x22); /* 0x007157DF: movzx eax, word ptr [esi + 0x22] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x007157E3: imul ecx, eax */
    /* test ecx, ecx */ /* 0x007157E6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00715840; /* 0x007157E8: jle 0x715840 */
L_007157EA:
    edi = MEM32(ebp + (-0x4)); /* 0x007157EA: mov edi, dword ptr [ebp - 4] */
    ebx = 0x7FFFu; /* 0x007157ED: mov ebx, 0x7fff */
L_007157F2:
    eax = MEM32(esi + 0x24); /* 0x007157F2: mov eax, dword ptr [esi + 0x24] */
    eax = (uint32_t)MEM16(eax + edx * 2); /* 0x007157F5: movzx eax, word ptr [eax + edx*2] */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x007157F9: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_00715805; /* 0x007157FC: jbe 0x715805 */
L_007157FE:
    ecx = 0x2710u; /* 0x007157FE: mov ecx, 0x2710 */
    goto L_00715821; /* 0x00715803: jmp 0x715821 */
L_00715805:
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x00715805: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x0071580B: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00715810: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00715812: add edx, ecx */
    _flag_k = FK_ADD;
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x00715814: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    ecx = edx; /* 0x00715817: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x00715819: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x00715819: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x0071581C: add ecx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x8)); /* 0x0071581E: mov edx, dword ptr [ebp - 8] */
L_00715821:
    eax = MEM32(edi + 0xC); /* 0x00715821: mov eax, dword ptr [edi + 0xc] */
    MEM32(eax + edx * 4) = ecx; /* 0x00715824: mov dword ptr [eax + edx*4], ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x00715827: inc edx */
    _flag_k = FK_INC;
    ecx = (uint32_t)MEM8(esi + 0x1E); /* 0x00715828: movzx ecx, byte ptr [esi + 0x1e] */
    eax = (uint32_t)MEM16(esi + 0x22); /* 0x0071582C: movzx eax, word ptr [esi + 0x22] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x00715830: imul ecx, eax */
    MEM32(ebp + (-0x8)) = edx; /* 0x00715833: mov dword ptr [ebp - 8], edx */
    /* cmp edx, ecx */ /* 0x00715836: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_007157F2; /* 0x00715838: jl 0x7157f2 */
L_0071583A:
    edi = MEM32(ebp + (-0xC)); /* 0x0071583A: mov edi, dword ptr [ebp - 0xc] */
    ebx = MEM32(ebp + (-0x10)); /* 0x0071583D: mov ebx, dword ptr [ebp - 0x10] */
L_00715840:
    eax = MEM32(ebp + (-0x4)); /* 0x00715840: mov eax, dword ptr [ebp - 4] */
    MEM32(edi + 0x30) = eax; /* 0x00715843: mov dword ptr [edi + 0x30], eax */
    MEM32(edi + 0x2C) = 0x10u; /* 0x00715846: mov dword ptr [edi + 0x2c], 0x10 */
    eax = (uint32_t)((int32_t)MEM32(esi + 0x14) * (int32_t)0x3E8u); /* 0x0071584D: imul eax, dword ptr [esi + 0x14], 0x3e8 */
    MEM32(edi + 0x8) = eax; /* 0x00715854: mov dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00715857: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)MEM16(esi + 0x1A); /* 0x0071585A: movzx ecx, word ptr [esi + 0x1a] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x0071585E: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00715866; /* 0x00715861: je 0x715866 */
L_00715863:
    eax = ecx + 0x2F; /* 0x00715863: lea eax, [ecx + 0x2f] */
L_00715866:
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x00715866: push dword ptr [edi + 0x1c] */
    MEM32(edi + 0x14) = eax; /* 0x00715869: mov dword ptr [edi + 0x14], eax */
    edx = esi + 0x4; /* 0x0071586C: lea edx, [esi + 4] */
    eax = (uint32_t)MEM16(esi + 0x1C); /* 0x0071586F: movzx eax, word ptr [esi + 0x1c] */
    ecx = edi; /* 0x00715873: mov ecx, edi */
    MEM32(edi + 0x18) = eax; /* 0x00715875: mov dword ptr [edi + 0x18], eax */
    eax = (uint32_t)MEM16(esi + 0x18); /* 0x00715878: movzx eax, word ptr [esi + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x0071587C: imul eax, eax, 0x3e8 */
    MEM32(edi + 0x34) = eax; /* 0x00715882: mov dword ptr [edi + 0x34], eax */
    RECOMP_CALL(sub_007150D0); /* 0x00715885: call 0x7150d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071588A: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0071588D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0071530C; /* 0x0071588F: js 0x71530c */
L_00715895:
    /* cmp MEM16(esi + 0x28), 0 */ /* 0x00715895: cmp word ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM16(esi + 0x28)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_007158A7; /* 0x0071589A: jne 0x7158a7 */
L_0071589C:
    /* cmp MEM16(esi + 0x2C), 0 */ /* 0x0071589C: cmp word ptr [esi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM16(esi + 0x2C)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00715A2C; /* 0x007158A1: je 0x715a2c */
L_007158A7:
    eax = (uint32_t)MEM16(esi + 0x2A); /* 0x007158A7: movzx eax, word ptr [esi + 0x2a] */
    edi = 0x7FFFu; /* 0x007158AB: mov edi, 0x7fff */
    /* cmp LO16(eax), LO16(edi) */ /* 0x007158B0: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_007158BC; /* 0x007158B3: jbe 0x7158bc */
L_007158B5:
    eax = 0x2710u; /* 0x007158B5: mov eax, 0x2710 */
    goto L_007158D5; /* 0x007158BA: jmp 0x7158d5 */
L_007158BC:
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x007158BC: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x007158C2: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x007158C7: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x007158C9: add edx, ecx */
    _flag_k = FK_ADD;
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x007158CB: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x007158CE: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x007158D0: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x007158D0: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x007158D3: add eax, edx */
    _flag_k = FK_ADD;
L_007158D5:
    MEM32(ebx + 0x4) = eax; /* 0x007158D5: mov dword ptr [ebx + 4], eax */
    eax = (uint32_t)MEM16(esi + 0x28); /* 0x007158D8: movzx eax, word ptr [esi + 0x28] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x007158DC: imul eax, eax, 0x3e8 */
    MEM32(ebx + 0x8) = eax; /* 0x007158E2: mov dword ptr [ebx + 8], eax */
    eax = (uint32_t)MEM16(esi + 0x2E); /* 0x007158E5: movzx eax, word ptr [esi + 0x2e] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x007158E9: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_007158F5; /* 0x007158EC: jbe 0x7158f5 */
L_007158EE:
    eax = 0x2710u; /* 0x007158EE: mov eax, 0x2710 */
    goto L_0071590E; /* 0x007158F3: jmp 0x71590e */
L_007158F5:
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x007158F5: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x007158FB: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00715900: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00715902: add edx, ecx */
    _flag_k = FK_ADD;
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x00715904: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x00715907: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00715909: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00715909: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0071590C: add eax, edx */
    _flag_k = FK_ADD;
L_0071590E:
    MEM32(ebx + 0xC) = eax; /* 0x0071590E: mov dword ptr [ebx + 0xc], eax */
    eax = (uint32_t)MEM16(esi + 0x2C); /* 0x00715911: movzx eax, word ptr [esi + 0x2c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x00715915: imul eax, eax, 0x3e8 */
    MEM32(ebx + 0x10) = eax; /* 0x0071591B: mov dword ptr [ebx + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0071591E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00715920: pop edi */
    esi = POP32_VAL(esp); /* 0x00715921: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715922: pop ebx */
    esp = ebp; /* 0x00715923: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715925: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715926: ret  */
L_00715927:
    eax = ecx; /* 0x00715927: mov eax, ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00715929: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x00715929: shr eax, 1 */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x0071592B: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x00715931: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00715936: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00715938: add edx, ecx */
    _flag_k = FK_ADD;
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x0071593A: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x0071593D: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0071593F: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0071593F: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00715942: add eax, edx */
    _flag_k = FK_ADD;
L_00715944:
    MEM32(ebx + 0x4) = eax; /* 0x00715944: mov dword ptr [ebx + 4], eax */
    ecx = (uint32_t)MEM16(esi + (-0x6)); /* 0x00715947: movzx ecx, word ptr [esi - 6] */
    eax = ecx; /* 0x0071594B: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEu);
    eax = eax & 0xFFFEu; /* 0x0071594D: and eax, 0xfffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFEu */ /* 0x00715952: cmp eax, 0xfffe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_00715960; /* 0x00715957: jbe 0x715960 */
L_00715959:
    eax = 0x2710u; /* 0x00715959: mov eax, 0x2710 */
    goto L_0071597D; /* 0x0071595E: jmp 0x71597d */
L_00715960:
    eax = ecx; /* 0x00715960: mov eax, ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x00715962: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x00715962: shr eax, 1 */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x00715964: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x0071596A: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0071596F: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00715971: add edx, ecx */
    _flag_k = FK_ADD;
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x00715973: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x00715976: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00715978: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00715978: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0071597B: add eax, edx */
    _flag_k = FK_ADD;
L_0071597D:
    MEM32(ebx + 0x8) = eax; /* 0x0071597D: mov dword ptr [ebx + 8], eax */
    ecx = (uint32_t)MEM16(esi + 0xC); /* 0x00715980: movzx ecx, word ptr [esi + 0xc] */
    eax = ecx; /* 0x00715984: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEu);
    eax = eax & 0xFFFEu; /* 0x00715986: and eax, 0xfffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFEu */ /* 0x0071598B: cmp eax, 0xfffe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_00715999; /* 0x00715990: jbe 0x715999 */
L_00715992:
    eax = 0x2710u; /* 0x00715992: mov eax, 0x2710 */
    goto L_007159B6; /* 0x00715997: jmp 0x7159b6 */
L_00715999:
    eax = ecx; /* 0x00715999: mov eax, ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0071599B: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x0071599B: shr eax, 1 */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x2710u); /* 0x0071599D: imul ecx, eax, 0x2710 */
    eax = 0x80010003u; /* 0x007159A3: mov eax, 0x80010003 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x007159A8: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x007159AA: add edx, ecx */
    _flag_k = FK_ADD;
    if (14u) _cf = (((edx) >> 13) & 1u); /* 0x007159AC: sar edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 14u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 14u);
    eax = edx; /* 0x007159AF: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x007159B1: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x007159B1: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x007159B4: add eax, edx */
    _flag_k = FK_ADD;
L_007159B6:
    MEM32(ebx + 0xC) = eax; /* 0x007159B6: mov dword ptr [ebx + 0xc], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x007159B9: add esi, 2 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x007159BC: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x18u; /* 0x007159BF: add ebx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x007159C2: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x007159C3: mov dword ptr [ebp - 8], eax */
    /* cmp eax, MEM32(edi + 0x1C) */ /* 0x007159C6: cmp eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_007156E0; /* 0x007159C9: jl 0x7156e0 */
L_007159CF:
    esi = MEM32(ebp + 0x8); /* 0x007159CF: mov esi, dword ptr [ebp + 8] */
L_007159D2:
    eax = MEM32(edi + 0x1C); /* 0x007159D2: mov eax, dword ptr [edi + 0x1c] */
    eax = eax + eax * 2; /* 0x007159D5: lea eax, [eax + eax*2] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x007159D8: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x007159D8: shl eax, 3 */
    MEM32(edi + 0x2C) = eax; /* 0x007159DB: mov dword ptr [edi + 0x2c], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x007159DE: mov eax, dword ptr [ebp - 0xc] */
    MEM32(edi + 0x30) = eax; /* 0x007159E1: mov dword ptr [edi + 0x30], eax */
    eax = (uint32_t)((int32_t)MEM32(esi + 0x14) * (int32_t)0x3E8u); /* 0x007159E4: imul eax, dword ptr [esi + 0x14], 0x3e8 */
    MEM32(edi + 0x8) = eax; /* 0x007159EB: mov dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x007159EE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)MEM16(esi + 0x1A); /* 0x007159F1: movzx ecx, word ptr [esi + 0x1a] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x007159F5: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_007159FD; /* 0x007159F8: je 0x7159fd */
L_007159FA:
    eax = ecx + 0x2F; /* 0x007159FA: lea eax, [ecx + 0x2f] */
L_007159FD:
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x007159FD: push dword ptr [edi + 0x1c] */
    MEM32(edi + 0x14) = eax; /* 0x00715A00: mov dword ptr [edi + 0x14], eax */
    edx = esi + 0x4; /* 0x00715A03: lea edx, [esi + 4] */
    eax = (uint32_t)MEM16(esi + 0x1C); /* 0x00715A06: movzx eax, word ptr [esi + 0x1c] */
    ecx = edi; /* 0x00715A0A: mov ecx, edi */
    MEM32(edi + 0x18) = eax; /* 0x00715A0C: mov dword ptr [edi + 0x18], eax */
    eax = (uint32_t)MEM16(esi + 0x18); /* 0x00715A0F: movzx eax, word ptr [esi + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x00715A13: imul eax, eax, 0x3e8 */
    MEM32(edi + 0x34) = eax; /* 0x00715A19: mov dword ptr [edi + 0x34], eax */
    RECOMP_CALL(sub_007150D0); /* 0x00715A1C: call 0x7150d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715A21: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00715A24: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_0071530C; /* 0x00715A26: js 0x71530c */
L_00715A2C:
    PUSH32(esp, MEM32(edi + 0x28)); /* 0x00715A2C: push dword ptr [edi + 0x28] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x00715A2F: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715A35: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x28) = 0; /* 0x00715A38: mov dword ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00715A3F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00715A41: pop edi */
    esi = POP32_VAL(esp); /* 0x00715A42: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715A43: pop ebx */
    esp = ebp; /* 0x00715A44: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715A46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715A47: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x0071527Fu: goto L_0071527F;
      case 0x007153AAu: goto L_007153AA;
      case 0x00715770u: goto L_00715770;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00715A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00715A80u);

L_00715A80:
    PUSH32(esp, ebp); /* 0x00715A80: push ebp */
    ebp = esp; /* 0x00715A81: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00715A83: push ecx */
    PUSH32(esp, ebx); /* 0x00715A84: push ebx */
    PUSH32(esp, esi); /* 0x00715A85: push esi */
    esi = ecx; /* 0x00715A86: mov esi, ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x00715A88: mov dword ptr [ebp - 4], edx */
    PUSH32(esp, edi); /* 0x00715A8B: push edi */
    edi = MEM32(0x7CC44C); /* 0x00715A8C: mov edi, dword ptr [0x7cc44c] */
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x00715A92: push dword ptr [esi + 0x28] */
    RECOMP_ICALL(edi); /* 0x00715A95: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x00715A97: push dword ptr [esi + 0x20] */
    MEM32(esi + 0x28) = 0; /* 0x00715A9A: mov dword ptr [esi + 0x28], 0 */
    RECOMP_ICALL(edi); /* 0x00715AA1: call edi */
    RECOMP_FLAGS_IN();
    ebx = MEM32(esi + 0x30); /* 0x00715AA3: mov ebx, dword ptr [esi + 0x30] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00715AA6: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x20) = 0; /* 0x00715AA9: mov dword ptr [esi + 0x20], 0 */
    /* test ebx, ebx */ /* 0x00715AB0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00715ADB; /* 0x00715AB2: je 0x715adb */
L_00715AB4:
    /* cmp MEM32(ebp + (-0x4)), 0x800u */ /* 0x00715AB4: cmp dword ptr [ebp - 4], 0x800 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00715ACC; /* 0x00715ABB: jne 0x715acc */
L_00715ABD:
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x00715ABD: push dword ptr [ebx + 0xc] */
    RECOMP_ICALL(edi); /* 0x00715AC0: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715AC2: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0xC) = 0; /* 0x00715AC5: mov dword ptr [ebx + 0xc], 0 */
L_00715ACC:
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x00715ACC: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(edi); /* 0x00715ACF: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715AD1: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x30) = 0; /* 0x00715AD4: mov dword ptr [esi + 0x30], 0 */
L_00715ADB:
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x00715ADB: push dword ptr [esi + 0x24] */
    RECOMP_ICALL(edi); /* 0x00715ADE: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715AE0: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x24) = 0; /* 0x00715AE3: mov dword ptr [esi + 0x24], 0 */
    edi = POP32_VAL(esp); /* 0x00715AEA: pop edi */
    esi = POP32_VAL(esp); /* 0x00715AEB: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715AEC: pop ebx */
    esp = ebp; /* 0x00715AED: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715AEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715AF0: ret  */
    RECOMP_REGS_OUT();
}

void sub_00715B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00715B00u);

L_00715B00:
    eax = (uint32_t)MEM16(ecx); /* 0x00715B00: movzx eax, word ptr [ecx] */
    /* cmp eax, 0x40u */ /* 0x00715B03: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_00715B42; /* 0x00715B06: jg 0x715b42 */
L_00715B08:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00715B3C; /* 0x00715B08: je 0x715b3c */
L_00715B0A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00715B0A: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0x1Fu */ /* 0x00715B0B: cmp eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00715B79; /* 0x00715B0E: ja 0x715b79 */
L_00715B10:
    eax = (uint32_t)MEM8(eax + 0x715BA0); /* 0x00715B10: movzx eax, byte ptr [eax + 0x715ba0] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x715B88)); goto _ljump; }
L_00715B1E:
    eax = 0x00806D24u; /* 0x00715B1E: mov eax, 0x806d24 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715B23: ret  */
L_00715B24:
    eax = 0x00806DF4u; /* 0x00715B24: mov eax, 0x806df4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715B29: ret  */
L_00715B2A:
    eax = 0x00806D14u; /* 0x00715B2A: mov eax, 0x806d14 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715B2F: ret  */
L_00715B30:
    eax = 0x00806D04u; /* 0x00715B30: mov eax, 0x806d04 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715B35: ret  */
L_00715B36:
    eax = 0x00806DC4u; /* 0x00715B36: mov eax, 0x806dc4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715B3B: ret  */
L_00715B3C:
    eax = 0x00806DE4u; /* 0x00715B3C: mov eax, 0x806de4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715B41: ret  */
L_00715B42:
    /* cmp eax, 0x200u */ /* 0x00715B42: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_00715B6B; /* 0x00715B47: jg 0x715b6b */
L_00715B49:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00715B65; /* 0x00715B49: je 0x715b65 */
L_00715B4B:
    /* cmp eax, 0x80u */ /* 0x00715B4B: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00715B5F; /* 0x00715B50: je 0x715b5f */
L_00715B52:
    /* cmp eax, 0x100u */ /* 0x00715B52: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00715B79; /* 0x00715B57: jne 0x715b79 */
L_00715B59:
    eax = 0x00806D64u; /* 0x00715B59: mov eax, 0x806d64 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715B5E: ret  */
L_00715B5F:
    eax = 0x00806D34u; /* 0x00715B5F: mov eax, 0x806d34 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715B64: ret  */
L_00715B65:
    eax = 0x00806D44u; /* 0x00715B65: mov eax, 0x806d44 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715B6A: ret  */
L_00715B6B:
    /* cmp eax, 0x400u */ /* 0x00715B6B: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00715B82; /* 0x00715B70: je 0x715b82 */
L_00715B72:
    /* cmp eax, 0x800u */ /* 0x00715B72: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00715B7C; /* 0x00715B77: je 0x715b7c */
L_00715B79:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00715B79: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715B7B: ret  */
L_00715B7C:
    eax = 0x00806D94u; /* 0x00715B7C: mov eax, 0x806d94 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715B81: ret  */
L_00715B82:
    eax = 0x00806D74u; /* 0x00715B82: mov eax, 0x806d74 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715B87: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x00715B1Eu: goto L_00715B1E;
      case 0x00715B24u: goto L_00715B24;
      case 0x00715B2Au: goto L_00715B2A;
      case 0x00715B30u: goto L_00715B30;
      case 0x00715B36u: goto L_00715B36;
      case 0x00715B79u: goto L_00715B79;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00715BC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00715BC0u);

L_00715BC0:
    PUSH32(esp, ebp); /* 0x00715BC0: push ebp */
    ebp = esp; /* 0x00715BC1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00715BC3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00715BC6: push ebx */
    PUSH32(esp, esi); /* 0x00715BC7: push esi */
    PUSH32(esp, edi); /* 0x00715BC8: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00715BC9: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x00715BCC: mov esi, ecx */
    ecx = edi; /* 0x00715BCE: mov ecx, edi */
    ebx = edx; /* 0x00715BD0: mov ebx, edx */
    RECOMP_CALL(sub_00715B00); /* 0x00715BD2: call 0x715b00 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x00715BD7: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x00715BDA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00715BF5; /* 0x00715BDC: jne 0x715bf5 */
L_00715BDE:
    PUSH32(esp, 0x008080A4u); /* 0x00715BDE: push 0x8080a4 */
    RECOMP_CALL(sub_006EDB70); /* 0x00715BE3: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715BE8: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00715BEB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00715BEE: pop edi */
    esi = POP32_VAL(esp); /* 0x00715BEF: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715BF0: pop ebx */
    esp = ebp; /* 0x00715BF1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715BF3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715BF4: ret  */
L_00715BF5:
    edx = MEM32(ebx + 0x44); /* 0x00715BF5: mov edx, dword ptr [ebx + 0x44] */
    ecx = esi; /* 0x00715BF8: mov ecx, esi */
    PUSH32(esp, edi); /* 0x00715BFA: push edi */
    RECOMP_CALL(sub_00715190); /* 0x00715BFB: call 0x715190 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715C00: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00715C03: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00715C37; /* 0x00715C05: js 0x715c37 */
L_00715C07:
    eax = MEM32(esi + 0x18); /* 0x00715C07: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(ebx + 0x44); /* 0x00715C0A: mov ecx, dword ptr [ebx + 0x44] */
    PUSH32(esp, 0); /* 0x00715C0D: push 0 */
    esi = MEM32(eax); /* 0x00715C0F: mov esi, dword ptr [eax] */
    eax = ecx + 0x38; /* 0x00715C11: lea eax, [ecx + 0x38] */
    PUSH32(esp, eax); /* 0x00715C14: push eax */
    PUSH32(esp, ecx); /* 0x00715C15: push ecx */
    edx = MEM32(esi); /* 0x00715C16: mov edx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x00715C18: push dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x00715C1B: push esi */
    eax = MEM32(edx + 0x48); /* 0x00715C1C: mov eax, dword ptr [edx + 0x48] */
    RECOMP_ICALL(eax); /* 0x00715C1F: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00715C21: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00715C4C; /* 0x00715C23: jns 0x715c4c */
L_00715C25:
    PUSH32(esp, 0x0080808Cu); /* 0x00715C25: push 0x80808c */
    PUSH32(esp, 0x00808030u); /* 0x00715C2A: push 0x808030 */
    RECOMP_CALL(sub_006EDB70); /* 0x00715C2F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00715C34: add esp, 8 */
    _flag_k = FK_ADD;
L_00715C37:
    edx = (uint32_t)MEM16(edi); /* 0x00715C37: movzx edx, word ptr [edi] */
    ecx = MEM32(ebx + 0x44); /* 0x00715C3A: mov ecx, dword ptr [ebx + 0x44] */
    RECOMP_CALL(sub_00715A80); /* 0x00715C3D: call 0x715a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00715C42: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00715C45: pop edi */
    esi = POP32_VAL(esp); /* 0x00715C46: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715C47: pop ebx */
    esp = ebp; /* 0x00715C48: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715C4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715C4B: ret  */
L_00715C4C:
    edi = POP32_VAL(esp); /* 0x00715C4C: pop edi */
    esi = POP32_VAL(esp); /* 0x00715C4D: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00715C4E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00715C50: pop ebx */
    esp = ebp; /* 0x00715C51: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715C53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715C54: ret  */
    RECOMP_REGS_OUT();
}

void sub_00715C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00715C60u);

L_00715C60:
    PUSH32(esp, ebp); /* 0x00715C60: push ebp */
    ebp = esp; /* 0x00715C61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00715C63: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x00715C66: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = esp + 0x4; /* 0x00715C69: lea eax, [esp + 4] */
    PUSH32(esp, ebx); /* 0x00715C6D: push ebx */
    PUSH32(esp, esi); /* 0x00715C6E: push esi */
    PUSH32(esp, edi); /* 0x00715C6F: push edi */
    PUSH32(esp, 0x38u); /* 0x00715C70: push 0x38 */
    PUSH32(esp, 0); /* 0x00715C72: push 0 */
    PUSH32(esp, eax); /* 0x00715C74: push eax */
    ebx = edx; /* 0x00715C75: mov ebx, edx */
    esi = ecx; /* 0x00715C77: mov esi, ecx */
    RECOMP_CALL(sub_0078083E); /* 0x00715C79: call 0x78083e */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x00715C7E: mov edi, dword ptr [ebp + 8] */
    edx = esp + 0x1C; /* 0x00715C81: lea edx, [esp + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00715C85: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x00715C88: mov ecx, esi */
    PUSH32(esp, edi); /* 0x00715C8A: push edi */
    RECOMP_CALL(sub_00715190); /* 0x00715C8B: call 0x715190 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715C90: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00715C93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00715CC5; /* 0x00715C95: js 0x715cc5 */
L_00715C97:
    eax = MEM32(ebx + 0x44); /* 0x00715C97: mov eax, dword ptr [ebx + 0x44] */
    edx = esp + 0x10; /* 0x00715C9A: lea edx, [esp + 0x10] */
    PUSH32(esp, 0x3D9u); /* 0x00715C9E: push 0x3d9 */
    PUSH32(esp, edx); /* 0x00715CA3: push edx */
    eax = MEM32(eax + 0x38); /* 0x00715CA4: mov eax, dword ptr [eax + 0x38] */
    PUSH32(esp, eax); /* 0x00715CA7: push eax */
    ecx = MEM32(eax); /* 0x00715CA8: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + 0x18); /* 0x00715CAA: mov eax, dword ptr [ecx + 0x18] */
    RECOMP_ICALL(eax); /* 0x00715CAD: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00715CAF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00715CDB; /* 0x00715CB1: jns 0x715cdb */
L_00715CB3:
    PUSH32(esp, 0x00808074u); /* 0x00715CB3: push 0x808074 */
    PUSH32(esp, 0x00808030u); /* 0x00715CB8: push 0x808030 */
    RECOMP_CALL(sub_006EDB70); /* 0x00715CBD: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00715CC2: add esp, 8 */
    _flag_k = FK_ADD;
L_00715CC5:
    edx = (uint32_t)MEM16(edi); /* 0x00715CC5: movzx edx, word ptr [edi] */
    ecx = esp + 0x10; /* 0x00715CC8: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_00715A80); /* 0x00715CCC: call 0x715a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00715CD1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00715CD4: pop edi */
    esi = POP32_VAL(esp); /* 0x00715CD5: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715CD6: pop ebx */
    esp = ebp; /* 0x00715CD7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715CD9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715CDA: ret  */
L_00715CDB:
    edx = (uint32_t)MEM16(edi); /* 0x00715CDB: movzx edx, word ptr [edi] */
    ecx = MEM32(ebx + 0x44); /* 0x00715CDE: mov ecx, dword ptr [ebx + 0x44] */
    RECOMP_CALL(sub_00715A80); /* 0x00715CE1: call 0x715a80 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x38u); /* 0x00715CE6: push 0x38 */
    eax = esp + 0x14; /* 0x00715CE8: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x00715CEC: push eax */
    PUSH32(esp, MEM32(ebx + 0x44)); /* 0x00715CED: push dword ptr [ebx + 0x44] */
    RECOMP_CALL(sub_00780838); /* 0x00715CF0: call 0x780838 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00715CF5: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00715CF8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00715CFA: pop edi */
    esi = POP32_VAL(esp); /* 0x00715CFB: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715CFC: pop ebx */
    esp = ebp; /* 0x00715CFD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715CFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715D00: ret  */
    RECOMP_REGS_OUT();
}

void sub_00715D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00715D10u);

L_00715D10:
    PUSH32(esp, ecx); /* 0x00715D10: push ecx */
    PUSH32(esp, esi); /* 0x00715D11: push esi */
    PUSH32(esp, edi); /* 0x00715D12: push edi */
    edi = MEM32(0x7CC454); /* 0x00715D13: mov edi, dword ptr [0x7cc454] */
    PUSH32(esp, 0x14u); /* 0x00715D19: push 0x14 */
    RECOMP_ICALL(edi); /* 0x00715D1B: call edi */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x00715D1D: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715D1F: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x00715D22: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00715D8A; /* 0x00715D24: je 0x715d8a */
L_00715D26:
    PUSH32(esp, 0x18u); /* 0x00715D26: push 0x18 */
    RECOMP_ICALL(edi); /* 0x00715D28: call edi */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x00715D2A: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715D2C: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x00715D2F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00715D41; /* 0x00715D31: je 0x715d41 */
L_00715D33:
    PUSH32(esp, 0x7D0u); /* 0x00715D33: push 0x7d0 */
    PUSH32(esp, edi); /* 0x00715D38: push edi */
    RECOMP_ICALL(MEM32(0x7CC150)); /* 0x00715D39: call dword ptr [0x7cc150] */
    RECOMP_FLAGS_IN();
    goto L_00715D4E; /* 0x00715D3F: jmp 0x715d4e */
L_00715D41:
    PUSH32(esp, 0x00803E4Cu); /* 0x00715D41: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x00715D46: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715D4B: add esp, 4 */
    _flag_k = FK_ADD;
L_00715D4E:
    MEM32(esi) = edi; /* 0x00715D4E: mov dword ptr [esi], edi */
    RECOMP_CALL(sub_006FEC50); /* 0x00715D50: call 0x6fec50 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x00715D55: mov dword ptr [esi + 0xc], eax */
    RECOMP_CALL(sub_006FEC50); /* 0x00715D58: call 0x6fec50 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi), 0 */ /* 0x00715D5D: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = eax; /* 0x00715D60: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x8) = 0; /* 0x00715D63: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0x4) = 0; /* 0x00715D6A: mov dword ptr [esi + 4], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00715D7D; /* 0x00715D71: je 0x715d7d */
L_00715D73:
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x00715D73: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00715D7D; /* 0x00715D77: je 0x715d7d */
L_00715D79:
    /* test eax, eax */ /* 0x00715D79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00715D97; /* 0x00715D7B: jne 0x715d97 */
L_00715D7D:
    ecx = esi; /* 0x00715D7D: mov ecx, esi */
    RECOMP_CALL(sub_00715DA0); /* 0x00715D7F: call 0x715da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00715D84: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00715D86: pop edi */
    esi = POP32_VAL(esp); /* 0x00715D87: pop esi */
    ecx = POP32_VAL(esp); /* 0x00715D88: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715D89: ret  */
L_00715D8A:
    PUSH32(esp, 0x00803E4Cu); /* 0x00715D8A: push 0x803e4c */
    RECOMP_CALL(sub_006EDB70); /* 0x00715D8F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715D94: add esp, 4 */
    _flag_k = FK_ADD;
L_00715D97:
    edi = POP32_VAL(esp); /* 0x00715D97: pop edi */
    eax = esi; /* 0x00715D98: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00715D9A: pop esi */
    ecx = POP32_VAL(esp); /* 0x00715D9B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715D9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00715DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00715DA0u);

L_00715DA0:
    PUSH32(esp, esi); /* 0x00715DA0: push esi */
    esi = ecx; /* 0x00715DA1: mov esi, ecx */
    /* test esi, esi */ /* 0x00715DA3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00715E0C; /* 0x00715DA5: je 0x715e0c */
L_00715DA7:
    eax = MEM32(0x7CC0F8); /* 0x00715DA7: mov eax, dword ptr [0x7cc0f8] */
    PUSH32(esp, ebx); /* 0x00715DAC: push ebx */
    ebx = MEM32(esi + 0xC); /* 0x00715DAD: mov ebx, dword ptr [esi + 0xc] */
    PUSH32(esp, edi); /* 0x00715DB0: push edi */
    edi = MEM32(0x7CC44C); /* 0x00715DB1: mov edi, dword ptr [0x7cc44c] */
    /* test ebx, ebx */ /* 0x00715DB7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00715DD5; /* 0x00715DB9: je 0x715dd5 */
L_00715DBB:
    ecx = MEM32(ebx); /* 0x00715DBB: mov ecx, dword ptr [ebx] */
    /* test ecx, ecx */ /* 0x00715DBD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00715DCA; /* 0x00715DBF: je 0x715dca */
L_00715DC1:
    PUSH32(esp, ecx); /* 0x00715DC1: push ecx */
    RECOMP_ICALL(eax); /* 0x00715DC2: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = 0; /* 0x00715DC4: mov dword ptr [ebx], 0 */
L_00715DCA:
    PUSH32(esp, ebx); /* 0x00715DCA: push ebx */
    RECOMP_ICALL(edi); /* 0x00715DCB: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x7CC0F8); /* 0x00715DCD: mov eax, dword ptr [0x7cc0f8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715DD2: add esp, 4 */
    _flag_k = FK_ADD;
L_00715DD5:
    ebx = MEM32(esi + 0x10); /* 0x00715DD5: mov ebx, dword ptr [esi + 0x10] */
    /* test ebx, ebx */ /* 0x00715DD8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00715DF1; /* 0x00715DDA: je 0x715df1 */
L_00715DDC:
    ecx = MEM32(ebx); /* 0x00715DDC: mov ecx, dword ptr [ebx] */
    /* test ecx, ecx */ /* 0x00715DDE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00715DEB; /* 0x00715DE0: je 0x715deb */
L_00715DE2:
    PUSH32(esp, ecx); /* 0x00715DE2: push ecx */
    RECOMP_ICALL(eax); /* 0x00715DE3: call eax */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = 0; /* 0x00715DE5: mov dword ptr [ebx], 0 */
L_00715DEB:
    PUSH32(esp, ebx); /* 0x00715DEB: push ebx */
    RECOMP_ICALL(edi); /* 0x00715DEC: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715DEE: add esp, 4 */
    _flag_k = FK_ADD;
L_00715DF1:
    ebx = MEM32(esi); /* 0x00715DF1: mov ebx, dword ptr [esi] */
    /* test ebx, ebx */ /* 0x00715DF3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00715E04; /* 0x00715DF5: je 0x715e04 */
L_00715DF7:
    PUSH32(esp, ebx); /* 0x00715DF7: push ebx */
    RECOMP_ICALL(MEM32(0x7CC15C)); /* 0x00715DF8: call dword ptr [0x7cc15c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x00715DFE: push ebx */
    RECOMP_ICALL(edi); /* 0x00715DFF: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715E01: add esp, 4 */
    _flag_k = FK_ADD;
L_00715E04:
    PUSH32(esp, esi); /* 0x00715E04: push esi */
    RECOMP_ICALL(edi); /* 0x00715E05: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715E07: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00715E0A: pop edi */
    ebx = POP32_VAL(esp); /* 0x00715E0B: pop ebx */
L_00715E0C:
    esi = POP32_VAL(esp); /* 0x00715E0C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715E0D: ret  */
    RECOMP_REGS_OUT();
}

void sub_00715E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00715E10u);

L_00715E10:
    PUSH32(esp, ebp); /* 0x00715E10: push ebp */
    ebp = esp; /* 0x00715E11: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00715E13: push ecx */
    PUSH32(esp, ebx); /* 0x00715E14: push ebx */
    PUSH32(esp, esi); /* 0x00715E15: push esi */
    PUSH32(esp, edi); /* 0x00715E16: push edi */
    edi = MEM32(0x87CC44); /* 0x00715E17: mov edi, dword ptr [0x87cc44] */
    /* test edi, edi */ /* 0x00715E1D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00715E35; /* 0x00715E1F: jne 0x715e35 */
L_00715E21:
    PUSH32(esp, 0x008080FCu); /* 0x00715E21: push 0x8080fc */
    RECOMP_CALL(sub_006EDB70); /* 0x00715E26: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715E2B: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00715E2E: pop edi */
    esi = POP32_VAL(esp); /* 0x00715E2F: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715E30: pop ebx */
    esp = ebp; /* 0x00715E31: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715E33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715E34: ret  */
L_00715E35:
    eax = MEM32(edi); /* 0x00715E35: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x00715E37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00715E4A; /* 0x00715E39: jne 0x715e4a */
L_00715E3B:
    PUSH32(esp, 0x00806748u); /* 0x00715E3B: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x00715E40: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715E45: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_00715E51; /* 0x00715E48: jmp 0x715e51 */
L_00715E4A:
    PUSH32(esp, eax); /* 0x00715E4A: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x00715E4B: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_00715E51:
    eax = MEM32(edi + 0x4); /* 0x00715E51: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(edi + 0x8); /* 0x00715E54: mov ecx, dword ptr [edi + 8] */
    /* cmp eax, ecx */ /* 0x00715E57: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_00715F27; /* 0x00715E59: jle 0x715f27 */
L_00715E5F:
    ebx = eax; /* 0x00715E5F: mov ebx, eax */
    MEM32(edi + 0x8) = eax; /* 0x00715E61: mov dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x00715E64: sub ebx, ecx */
    _flag_k = FK_CMP;
    /* test ebx, ebx */ /* 0x00715E66: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00715EB7; /* 0x00715E68: jle 0x715eb7 */
L_00715E6A:
    esi = ebx; /* 0x00715E6A: mov esi, ebx */
    esp = esp; /* 0x00715E6C: lea esp, [esp] */
L_00715E70:
    ecx = MEM32(edi + 0xC); /* 0x00715E70: mov ecx, dword ptr [edi + 0xc] */
    /* test ecx, ecx */ /* 0x00715E73: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00715E7E; /* 0x00715E75: jne 0x715e7e */
L_00715E77:
    PUSH32(esp, 0x00806B84u); /* 0x00715E77: push 0x806b84 */
    goto L_00715EAC; /* 0x00715E7C: jmp 0x715eac */
L_00715E7E:
    edx = ecx + 0x4; /* 0x00715E7E: lea edx, [ecx + 4] */
    eax = 1; /* 0x00715E81: mov eax, 1 */
    MEM32(ebp + (-0x4)) = edx; /* 0x00715E86: mov dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edx), _sum = MEM32(edx) + eax; eax = _old; MEM32(edx) = _sum; } /* 0x00715E89: lock xadd dword ptr [edx], eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x00715E8D: push 0 */
    PUSH32(esp, 1); /* 0x00715E8F: push 1 */
    PUSH32(esp, MEM32(ecx)); /* 0x00715E91: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x7CC180)); /* 0x00715E93: call dword ptr [0x7cc180] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00715E99: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00715EB4; /* 0x00715E9B: jne 0x715eb4 */
L_00715E9D:
    ecx = MEM32(ebp + (-0x4)); /* 0x00715E9D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00715EA0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x00715EA3: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x00806B48u); /* 0x00715EA7: push 0x806b48 */
L_00715EAC:
    RECOMP_CALL(sub_006EDB70); /* 0x00715EAC: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715EB1: add esp, 4 */
    _flag_k = FK_ADD;
L_00715EB4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x00715EB4: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00715E70; /* 0x00715EB5: jne 0x715e70 */
L_00715EB7:
    eax = MEM32(edi); /* 0x00715EB7: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x00715EB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00715ECC; /* 0x00715EBB: jne 0x715ecc */
L_00715EBD:
    PUSH32(esp, 0x00806748u); /* 0x00715EBD: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x00715EC2: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715EC7: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_00715ED3; /* 0x00715ECA: jmp 0x715ed3 */
L_00715ECC:
    PUSH32(esp, eax); /* 0x00715ECC: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x00715ECD: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_00715ED3:
    /* test ebx, ebx */ /* 0x00715ED3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_00715F4A; /* 0x00715ED5: jle 0x715f4a */
L_00715ED7:
    esi = MEM32(edi + 0x10); /* 0x00715ED7: mov esi, dword ptr [edi + 0x10] */
    /* test esi, esi */ /* 0x00715EDA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00715EED; /* 0x00715EDC: jne 0x715eed */
L_00715EDE:
    PUSH32(esp, 0x00806B84u); /* 0x00715EDE: push 0x806b84 */
    RECOMP_CALL(sub_006EDB70); /* 0x00715EE3: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715EE8: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_00715F1B; /* 0x00715EEB: jmp 0x715f1b */
L_00715EED:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00715EED: push -1 */
    PUSH32(esp, MEM32(esi)); /* 0x00715EEF: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC14C)); /* 0x00715EF1: call dword ptr [0x7cc14c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00715EF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00715F11; /* 0x00715EF9: je 0x715f11 */
L_00715EFB:
    /* cmp eax, 0x102u */ /* 0x00715EFB: cmp eax, 0x102 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x102u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00715F1B; /* 0x00715F00: je 0x715f1b */
L_00715F02:
    PUSH32(esp, 0x00806B64u); /* 0x00715F02: push 0x806b64 */
    RECOMP_CALL(sub_006EDB70); /* 0x00715F07: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715F0C: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_00715F1B; /* 0x00715F0F: jmp 0x715f1b */
L_00715F11:
    eax = esi + 0x4; /* 0x00715F11: lea eax, [esi + 4] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x00715F14: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x00715F17: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
L_00715F1B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x00715F1B: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00715ED7; /* 0x00715F1C: jne 0x715ed7 */
L_00715F1E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00715F1E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00715F20: pop edi */
    esi = POP32_VAL(esp); /* 0x00715F21: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715F22: pop ebx */
    esp = ebp; /* 0x00715F23: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715F25: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715F26: ret  */
L_00715F27:
    eax = MEM32(edi); /* 0x00715F27: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x00715F29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00715F43; /* 0x00715F2B: jne 0x715f43 */
L_00715F2D:
    PUSH32(esp, 0x00806748u); /* 0x00715F2D: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x00715F32: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715F37: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00715F3A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x00715F3C: pop edi */
    esi = POP32_VAL(esp); /* 0x00715F3D: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715F3E: pop ebx */
    esp = ebp; /* 0x00715F3F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715F41: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715F42: ret  */
L_00715F43:
    PUSH32(esp, eax); /* 0x00715F43: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x00715F44: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_00715F4A:
    edi = POP32_VAL(esp); /* 0x00715F4A: pop edi */
    esi = POP32_VAL(esp); /* 0x00715F4B: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00715F4C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x00715F4E: pop ebx */
    esp = ebp; /* 0x00715F4F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715F51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715F52: ret  */
    RECOMP_REGS_OUT();
}

void sub_00715F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00715F60u);

L_00715F60:
    PUSH32(esp, ebp); /* 0x00715F60: push ebp */
    ebp = esp; /* 0x00715F61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00715F63: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00715F66: push ebx */
    PUSH32(esp, esi); /* 0x00715F67: push esi */
    esi = MEM32(0x87CC44); /* 0x00715F68: mov esi, dword ptr [0x87cc44] */
    PUSH32(esp, edi); /* 0x00715F6E: push edi */
    edi = MEM32(0x87CC48); /* 0x00715F6F: mov edi, dword ptr [0x87cc48] */
    /* test esi, esi */ /* 0x00715F75: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00715F8D; /* 0x00715F77: jne 0x715f8d */
L_00715F79:
    PUSH32(esp, 0x008080FCu); /* 0x00715F79: push 0x8080fc */
    RECOMP_CALL(sub_006EDB70); /* 0x00715F7E: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715F83: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00715F86: pop edi */
    esi = POP32_VAL(esp); /* 0x00715F87: pop esi */
    ebx = POP32_VAL(esp); /* 0x00715F88: pop ebx */
    esp = ebp; /* 0x00715F89: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00715F8B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00715F8C: ret  */
L_00715F8D:
    eax = MEM32(esi); /* 0x00715F8D: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x00715F8F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00715FA2; /* 0x00715F91: jne 0x715fa2 */
L_00715F93:
    PUSH32(esp, 0x00806748u); /* 0x00715F93: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x00715F98: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715F9D: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_00715FA9; /* 0x00715FA0: jmp 0x715fa9 */
L_00715FA2:
    PUSH32(esp, eax); /* 0x00715FA2: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x00715FA3: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_00715FA9:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 1; /* 0x00715FA9: inc dword ptr [esi + 4] */
    _flag_k = FK_INC;
    eax = MEM32(esi); /* 0x00715FAC: mov eax, dword ptr [esi] */
    ebx = MEM32(0x7CC154); /* 0x00715FAE: mov ebx, dword ptr [0x7cc154] */
    /* test eax, eax */ /* 0x00715FB4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00715FC7; /* 0x00715FB6: jne 0x715fc7 */
L_00715FB8:
    PUSH32(esp, 0x00806748u); /* 0x00715FB8: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x00715FBD: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715FC2: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_00715FCA; /* 0x00715FC5: jmp 0x715fca */
L_00715FC7:
    PUSH32(esp, eax); /* 0x00715FC7: push eax */
    RECOMP_ICALL(ebx); /* 0x00715FC8: call ebx */
    RECOMP_FLAGS_IN();
L_00715FCA:
    /* test edi, edi */ /* 0x00715FCA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00715FDD; /* 0x00715FCC: jne 0x715fdd */
L_00715FCE:
    PUSH32(esp, 0x00806748u); /* 0x00715FCE: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x00715FD3: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00715FD8: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_00715FE0; /* 0x00715FDB: jmp 0x715fe0 */
L_00715FDD:
    PUSH32(esp, edi); /* 0x00715FDD: push edi */
    RECOMP_ICALL(ebx); /* 0x00715FDE: call ebx */
    RECOMP_FLAGS_IN();
L_00715FE0:
    ecx = MEM32(esi + 0xC); /* 0x00715FE0: mov ecx, dword ptr [esi + 0xc] */
    edx = 0x12Cu; /* 0x00715FE3: mov edx, 0x12c */
    RECOMP_CALL(sub_006FECE0); /* 0x00715FE8: call 0x6fece0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x00715FED: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi); /* 0x00715FF0: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x00715FF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00716005; /* 0x00715FF4: jne 0x716005 */
L_00715FF6:
    PUSH32(esp, 0x00806748u); /* 0x00715FF6: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x00715FFB: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00716000: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_0071600C; /* 0x00716003: jmp 0x71600c */
L_00716005:
    PUSH32(esp, eax); /* 0x00716005: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x00716006: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_0071600C:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x0071600C: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_0071602B; /* 0x00716010: jle 0x71602b */
L_00716012:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x00716012: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_00716020; /* 0x00716016: jle 0x716020 */
L_00716018:
    ecx = MEM32(esi + 0xC); /* 0x00716018: mov ecx, dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_006FED40); /* 0x0071601B: call 0x6fed40 */
    RECOMP_FLAGS_IN();
L_00716020:
    ecx = MEM32(esi + 0x10); /* 0x00716020: mov ecx, dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_006FED90); /* 0x00716023: call 0x6fed90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) - 1; /* 0x00716028: dec dword ptr [esi + 8] */
    _flag_k = FK_DEC;
L_0071602B:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - 1; /* 0x0071602B: dec dword ptr [esi + 4] */
    _flag_k = FK_DEC;
    eax = MEM32(esi); /* 0x0071602E: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x00716030: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00716043; /* 0x00716032: jne 0x716043 */
L_00716034:
    PUSH32(esp, 0x00806748u); /* 0x00716034: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x00716039: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0071603E: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_00716046; /* 0x00716041: jmp 0x716046 */
L_00716043:
    PUSH32(esp, eax); /* 0x00716043: push eax */
    RECOMP_ICALL(ebx); /* 0x00716044: call ebx */
    RECOMP_FLAGS_IN();
L_00716046:
    /* test edi, edi */ /* 0x00716046: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00716061; /* 0x00716048: jne 0x716061 */
L_0071604A:
    PUSH32(esp, 0x00806748u); /* 0x0071604A: push 0x806748 */
    RECOMP_CALL(sub_006EDB70); /* 0x0071604F: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x00716054: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00716057: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x0071605A: pop edi */
    esi = POP32_VAL(esp); /* 0x0071605B: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071605C: pop ebx */
    esp = ebp; /* 0x0071605D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0071605F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716060: ret  */
L_00716061:
    PUSH32(esp, edi); /* 0x00716061: push edi */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x00716062: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x00716068: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x0071606B: pop edi */
    esi = POP32_VAL(esp); /* 0x0071606C: pop esi */
    ebx = POP32_VAL(esp); /* 0x0071606D: pop ebx */
    esp = ebp; /* 0x0071606E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00716070: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716071: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716080u);

L_00716080:
    /* cmp MEM32(0x87CCE0), 0 */ /* 0x00716080: cmp dword ptr [0x87cce0], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CCE0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716092; /* 0x00716087: je 0x716092 */
L_00716089:
    _flag_a = (uint32_t)(MEM32(0x87CCDC)); _flag_b = (uint32_t)(1);
    MEM32(0x87CCDC) = MEM32(0x87CCDC) + 1; /* 0x00716089: inc dword ptr [0x87ccdc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0071608F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716091: ret  */
L_00716092:
    PUSH32(esp, esi); /* 0x00716092: push esi */
    esi = MEM32(0x7CC108); /* 0x00716093: mov esi, dword ptr [0x7cc108] */
    PUSH32(esp, edi); /* 0x00716099: push edi */
    PUSH32(esp, 0x008081D4u); /* 0x0071609A: push 0x8081d4 */
    edi = 0x00010004u; /* 0x0071609F: mov edi, 0x10004 */
    RECOMP_ICALL(esi); /* 0x007160A4: call esi */
    RECOMP_FLAGS_IN();
    MEM32(0x87CCE0) = eax; /* 0x007160A6: mov dword ptr [0x87cce0], eax */
    /* test eax, eax */ /* 0x007160AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007160E8; /* 0x007160AD: jne 0x7160e8 */
L_007160AF:
    PUSH32(esp, 0x008081B8u); /* 0x007160AF: push 0x8081b8 */
    edi = 0x00010003u; /* 0x007160B4: mov edi, 0x10003 */
    RECOMP_ICALL(esi); /* 0x007160B9: call esi */
    RECOMP_FLAGS_IN();
    MEM32(0x87CCE0) = eax; /* 0x007160BB: mov dword ptr [0x87cce0], eax */
    /* test eax, eax */ /* 0x007160C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007160E8; /* 0x007160C2: jne 0x7160e8 */
L_007160C4:
    PUSH32(esp, 0x00808194u); /* 0x007160C4: push 0x808194 */
    RECOMP_ICALL(esi); /* 0x007160C9: call esi */
    RECOMP_FLAGS_IN();
    MEM32(0x87CCE0) = eax; /* 0x007160CB: mov dword ptr [0x87cce0], eax */
    /* test eax, eax */ /* 0x007160D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007160E8; /* 0x007160D2: jne 0x7160e8 */
L_007160D4:
    PUSH32(esp, 0x00808174u); /* 0x007160D4: push 0x808174 */
    RECOMP_ICALL(esi); /* 0x007160D9: call esi */
    RECOMP_FLAGS_IN();
    MEM32(0x87CCE0) = eax; /* 0x007160DB: mov dword ptr [0x87cce0], eax */
    /* test eax, eax */ /* 0x007160E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00716196; /* 0x007160E2: je 0x716196 */
L_007160E8:
    esi = MEM32(0x7CC110); /* 0x007160E8: mov esi, dword ptr [0x7cc110] */
    PUSH32(esp, 0x64u); /* 0x007160EE: push 0x64 */
    PUSH32(esp, eax); /* 0x007160F0: push eax */
    MEM32(0x87CCD8) = edi; /* 0x007160F1: mov dword ptr [0x87ccd8], edi */
    MEM32(0x87CCDC) = 1; /* 0x007160F7: mov dword ptr [0x87ccdc], 1 */
    RECOMP_ICALL(esi); /* 0x00716101: call esi */
    RECOMP_FLAGS_IN();
    MEM32(0x87CCD0) = eax; /* 0x00716103: mov dword ptr [0x87ccd0], eax */
    /* test eax, eax */ /* 0x00716108: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0071611E; /* 0x0071610A: jne 0x71611e */
L_0071610C:
    PUSH32(esp, 0x00808164u); /* 0x0071610C: push 0x808164 */
    PUSH32(esp, MEM32(0x87CCE0)); /* 0x00716111: push dword ptr [0x87cce0] */
    RECOMP_ICALL(esi); /* 0x00716117: call esi */
    RECOMP_FLAGS_IN();
    MEM32(0x87CCD0) = eax; /* 0x00716119: mov dword ptr [0x87ccd0], eax */
L_0071611E:
    PUSH32(esp, 0x00808154u); /* 0x0071611E: push 0x808154 */
    PUSH32(esp, MEM32(0x87CCE0)); /* 0x00716123: push dword ptr [0x87cce0] */
    RECOMP_ICALL(esi); /* 0x00716129: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0080813Cu); /* 0x0071612B: push 0x80813c */
    PUSH32(esp, MEM32(0x87CCE0)); /* 0x00716130: push dword ptr [0x87cce0] */
    MEM32(0x87CCCC) = eax; /* 0x00716136: mov dword ptr [0x87cccc], eax */
    RECOMP_ICALL(esi); /* 0x0071613B: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00808120u); /* 0x0071613D: push 0x808120 */
    PUSH32(esp, MEM32(0x87CCE0)); /* 0x00716142: push dword ptr [0x87cce0] */
    MEM32(0x87CCC8) = eax; /* 0x00716148: mov dword ptr [0x87ccc8], eax */
    RECOMP_ICALL(esi); /* 0x0071614D: call esi */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x87CCD0), 0 */ /* 0x0071614F: cmp dword ptr [0x87ccd0], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CCD0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x87CCD4) = eax; /* 0x00716156: mov dword ptr [0x87ccd4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716174; /* 0x0071615B: je 0x716174 */
L_0071615D:
    /* cmp MEM32(0x87CCCC), 0 */ /* 0x0071615D: cmp dword ptr [0x87cccc], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CCCC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716174; /* 0x00716164: je 0x716174 */
L_00716166:
    /* cmp MEM32(0x87CCC8), 0 */ /* 0x00716166: cmp dword ptr [0x87ccc8], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CCC8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716174; /* 0x0071616D: je 0x716174 */
L_0071616F:
    edi = POP32_VAL(esp); /* 0x0071616F: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00716170: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x00716172: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716173: ret  */
L_00716174:
    eax = MEM32(0x87CCE0); /* 0x00716174: mov eax, dword ptr [0x87cce0] */
    /* test eax, eax */ /* 0x00716179: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00716196; /* 0x0071617B: je 0x716196 */
L_0071617D:
    _flag_a = (uint32_t)(MEM32(0x87CCDC)); _flag_b = (uint32_t)(1);
    MEM32(0x87CCDC) = MEM32(0x87CCDC) - 1; /* 0x0071617D: dec dword ptr [0x87ccdc] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716196; /* 0x00716183: jne 0x716196 */
L_00716185:
    PUSH32(esp, eax); /* 0x00716185: push eax */
    RECOMP_ICALL(MEM32(0x7CC1BC)); /* 0x00716186: call dword ptr [0x7cc1bc] */
    RECOMP_FLAGS_IN();
    MEM32(0x87CCE0) = 0; /* 0x0071618C: mov dword ptr [0x87cce0], 0 */
L_00716196:
    edi = POP32_VAL(esp); /* 0x00716196: pop edi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x00716197: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0071619A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071619B: ret  */
    RECOMP_REGS_OUT();
}

void sub_007161A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007161A0u);

L_007161A0:
    PUSH32(esp, ebp); /* 0x007161A0: push ebp */
    ebp = esp; /* 0x007161A1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x007161A3: push esi */
    PUSH32(esp, edi); /* 0x007161A4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x007161A5: mov edi, dword ptr [ebp + 8] */
    edx = MEM32(edi + 0x18); /* 0x007161A8: mov edx, dword ptr [edi + 0x18] */
    ecx = MEM32(edi + 0x10); /* 0x007161AB: mov ecx, dword ptr [edi + 0x10] */
    esi = ecx; /* 0x007161AE: mov esi, ecx */
    /* test edx, edx */ /* 0x007161B0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007161C4; /* 0x007161B2: je 0x7161c4 */
L_007161B4:
    SET_LO8(eax, MEM8(ecx)); /* 0x007161B4: mov al, byte ptr [ecx] */
    ecx = ecx + 0x1; /* 0x007161B6: lea ecx, [ecx + 1] */
    _flag_a = (uint32_t)((LO8(eax) ^ 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x80u); /* 0x007161B9: xor al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = esi + 0x1; /* 0x007161BB: lea esi, [esi + 1] */
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x007161BE: mov byte ptr [esi - 1], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x007161C1: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007161B4; /* 0x007161C2: jne 0x7161b4 */
L_007161C4:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x007161C4: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x50); /* 0x007161C7: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x007161CA: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007161E0; /* 0x007161CF: je 0x7161e0 */
L_007161D1:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x007161D1: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8008u); /* 0x007161D5: push 0x8008 */
    PUSH32(esp, edi); /* 0x007161DA: push edi */
    RECOMP_ICALL(eax); /* 0x007161DB: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007161DD: add esp, 8 */
    _flag_k = FK_ADD;
L_007161E0:
    edi = POP32_VAL(esp); /* 0x007161E0: pop edi */
    esi = POP32_VAL(esp); /* 0x007161E1: pop esi */
    ebp = POP32_VAL(esp); /* 0x007161E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007161E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007161F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007161F0u);

L_007161F0:
    PUSH32(esp, ebp); /* 0x007161F0: push ebp */
    ebp = esp; /* 0x007161F1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x007161F3: push esi */
    PUSH32(esp, edi); /* 0x007161F4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x007161F5: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x007161F8: mov eax, dword ptr [edi + 0x18] */
    ecx = MEM32(edi + 0x10); /* 0x007161FB: mov ecx, dword ptr [edi + 0x10] */
    edx = eax + (-0x1); /* 0x007161FE: lea edx, [eax - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00716201: add edx, ecx */
    _flag_k = FK_ADD;
    esi = eax + (-0x1); /* 0x00716203: lea esi, [eax - 1] */
    esi = ecx + esi * 2; /* 0x00716206: lea esi, [ecx + esi*2] */
    /* test eax, eax */ /* 0x00716209: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00716224; /* 0x0071620B: je 0x716224 */
L_0071620D:
    ecx = ecx; /* 0x0071620D: lea ecx, [ecx] */
L_00716210:
    ecx = (uint32_t)MEM8(edx); /* 0x00716210: movzx ecx, byte ptr [edx] */
    edx = edx + (-0x1); /* 0x00716213: lea edx, [edx - 1] */
    if (8u) _cf = (((LO16(ecx)) >> 8) & 1u); /* 0x00716216: shl cx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ecx) << 8u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, LO16(ecx) << 8u); /* 0x00716216: shl cx, 8 */
    esi = esi + (-0x2); /* 0x0071621A: lea esi, [esi - 2] */
    MEM16(esi + 0x2) = (uint16_t)(LO16(ecx)); /* 0x0071621D: mov word ptr [esi + 2], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00716221: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716210; /* 0x00716222: jne 0x716210 */
L_00716224:
    eax = MEM32(edi + 0x18); /* 0x00716224: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00716227: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x0071622A: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x0071622C: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x0071622F: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00716232: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716245; /* 0x00716237: je 0x716245 */
L_00716239:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x00716239: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x10u); /* 0x0071623D: push 0x10 */
    PUSH32(esp, edi); /* 0x0071623F: push edi */
    RECOMP_ICALL(eax); /* 0x00716240: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716242: add esp, 8 */
    _flag_k = FK_ADD;
L_00716245:
    edi = POP32_VAL(esp); /* 0x00716245: pop edi */
    esi = POP32_VAL(esp); /* 0x00716246: pop esi */
    ebp = POP32_VAL(esp); /* 0x00716247: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716248: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716250u);

L_00716250:
    PUSH32(esp, ebp); /* 0x00716250: push ebp */
    ebp = esp; /* 0x00716251: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00716253: push esi */
    PUSH32(esp, edi); /* 0x00716254: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00716255: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00716258: mov eax, dword ptr [edi + 0x18] */
    ecx = MEM32(edi + 0x10); /* 0x0071625B: mov ecx, dword ptr [edi + 0x10] */
    edx = eax + (-0x1); /* 0x0071625E: lea edx, [eax - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00716261: add edx, ecx */
    _flag_k = FK_ADD;
    esi = eax + (-0x1); /* 0x00716263: lea esi, [eax - 1] */
    esi = ecx + esi * 2; /* 0x00716266: lea esi, [ecx + esi*2] */
    /* test eax, eax */ /* 0x00716269: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00716288; /* 0x0071626B: je 0x716288 */
L_0071626D:
    ecx = ecx; /* 0x0071626D: lea ecx, [ecx] */
L_00716270:
    ecx = (uint32_t)MEM8(edx); /* 0x00716270: movzx ecx, byte ptr [edx] */
    edx = edx + (-0x1); /* 0x00716273: lea edx, [edx - 1] */
    _flag_a = (uint32_t)((LO16(ecx) ^ 0xFF80u)) << 16; _flag_b = (uint32_t)((LO16(ecx) ^ 0xFF80u)) << 16;
    SET_LO16(ecx, LO16(ecx) ^ 0xFF80u); /* 0x00716276: xor cx, 0xff80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = esi + (-0x2); /* 0x0071627A: lea esi, [esi - 2] */
    if (8u) _cf = (((LO16(ecx)) >> 8) & 1u); /* 0x0071627D: shl cx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ecx) << 8u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, LO16(ecx) << 8u); /* 0x0071627D: shl cx, 8 */
    MEM16(esi + 0x2) = (uint16_t)(LO16(ecx)); /* 0x00716281: mov word ptr [esi + 2], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00716285: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716270; /* 0x00716286: jne 0x716270 */
L_00716288:
    eax = MEM32(edi + 0x18); /* 0x00716288: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x0071628B: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x0071628E: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x00716290: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00716293: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00716296: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007162AC; /* 0x0071629B: je 0x7162ac */
L_0071629D:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x0071629D: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8010u); /* 0x007162A1: push 0x8010 */
    PUSH32(esp, edi); /* 0x007162A6: push edi */
    RECOMP_ICALL(eax); /* 0x007162A7: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007162A9: add esp, 8 */
    _flag_k = FK_ADD;
L_007162AC:
    edi = POP32_VAL(esp); /* 0x007162AC: pop edi */
    esi = POP32_VAL(esp); /* 0x007162AD: pop esi */
    ebp = POP32_VAL(esp); /* 0x007162AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007162AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_007162B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007162B0u);

L_007162B0:
    PUSH32(esp, ebp); /* 0x007162B0: push ebp */
    ebp = esp; /* 0x007162B1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x007162B3: push esi */
    PUSH32(esp, edi); /* 0x007162B4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x007162B5: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x007162B8: mov eax, dword ptr [edi + 0x18] */
    ecx = MEM32(edi + 0x10); /* 0x007162BB: mov ecx, dword ptr [edi + 0x10] */
    edx = eax + (-0x1); /* 0x007162BE: lea edx, [eax - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x007162C1: add edx, ecx */
    _flag_k = FK_ADD;
    esi = eax + (-0x1); /* 0x007162C3: lea esi, [eax - 1] */
    esi = ecx + esi * 2; /* 0x007162C6: lea esi, [ecx + esi*2] */
    /* test eax, eax */ /* 0x007162C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007162E8; /* 0x007162CB: je 0x7162e8 */
L_007162CD:
    ecx = ecx; /* 0x007162CD: lea ecx, [ecx] */
L_007162D0:
    ecx = (uint32_t)MEM8(edx); /* 0x007162D0: movzx ecx, byte ptr [edx] */
    edx = edx + (-0x1); /* 0x007162D3: lea edx, [edx - 1] */
    if (8u) _cf = (((LO16(ecx)) >> 8) & 1u); /* 0x007162D6: shl cx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ecx) << 8u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, LO16(ecx) << 8u); /* 0x007162D6: shl cx, 8 */
    esi = esi + (-0x2); /* 0x007162DA: lea esi, [esi - 2] */
    { uint32_t _rv = (LO16(ecx)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(ecx, _rv); } /* 0x007162DD: rol cx, 8 */
    MEM16(esi + 0x2) = (uint16_t)(LO16(ecx)); /* 0x007162E1: mov word ptr [esi + 2], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x007162E5: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007162D0; /* 0x007162E6: jne 0x7162d0 */
L_007162E8:
    eax = MEM32(edi + 0x18); /* 0x007162E8: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x007162EB: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x007162EE: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x007162F0: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x007162F3: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x007162F6: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071630C; /* 0x007162FB: je 0x71630c */
L_007162FD:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x007162FD: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x1010u); /* 0x00716301: push 0x1010 */
    PUSH32(esp, edi); /* 0x00716306: push edi */
    RECOMP_ICALL(eax); /* 0x00716307: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x00716309: add esp, 8 */
    _flag_k = FK_ADD;
L_0071630C:
    edi = POP32_VAL(esp); /* 0x0071630C: pop edi */
    esi = POP32_VAL(esp); /* 0x0071630D: pop esi */
    ebp = POP32_VAL(esp); /* 0x0071630E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0071630F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716310u);

L_00716310:
    PUSH32(esp, ebp); /* 0x00716310: push ebp */
    ebp = esp; /* 0x00716311: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x00716313: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00716316: push esi */
    PUSH32(esp, edi); /* 0x00716317: push edi */
    ecx = MEM32(edx + 0x18); /* 0x00716318: mov ecx, dword ptr [edx + 0x18] */
    eax = MEM32(edx + 0x10); /* 0x0071631B: mov eax, dword ptr [edx + 0x10] */
    esi = ecx + (-0x1); /* 0x0071631E: lea esi, [ecx - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x00716321: add esi, eax */
    _flag_k = FK_ADD;
    edi = ecx + (-0x1); /* 0x00716323: lea edi, [ecx - 1] */
    edi = eax + edi * 2; /* 0x00716326: lea edi, [eax + edi*2] */
    /* test ecx, ecx */ /* 0x00716329: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071634F; /* 0x0071632B: je 0x71634f */
L_0071632D:
    PUSH32(esp, ebx); /* 0x0071632D: push ebx */
    ebx = 0xFF80u; /* 0x0071632E: mov ebx, 0xff80 */
L_00716333:
    eax = (uint32_t)MEM8(esi); /* 0x00716333: movzx eax, byte ptr [esi] */
    esi = esi + (-0x1); /* 0x00716336: lea esi, [esi - 1] */
    _flag_a = (uint32_t)((LO16(eax) ^ LO16(ebx))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ LO16(ebx))) << 16;
    SET_LO16(eax, LO16(eax) ^ LO16(ebx)); /* 0x00716339: xor ax, bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edi = edi + (-0x2); /* 0x0071633C: lea edi, [edi - 2] */
    if (8u) _cf = (((LO16(eax)) >> 8) & 1u); /* 0x0071633F: shl ax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << 8u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << 8u); /* 0x0071633F: shl ax, 8 */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x00716343: rol ax, 8 */
    MEM16(edi + 0x2) = (uint16_t)(LO16(eax)); /* 0x00716347: mov word ptr [edi + 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0071634B: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716333; /* 0x0071634C: jne 0x716333 */
L_0071634E:
    ebx = POP32_VAL(esp); /* 0x0071634E: pop ebx */
L_0071634F:
    eax = MEM32(edx + 0x18); /* 0x0071634F: mov eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(MEM32(edx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x50) = MEM32(edx + 0x50) + 1; /* 0x00716352: inc dword ptr [edx + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00716355: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edx + 0x18) = eax; /* 0x00716357: mov dword ptr [edx + 0x18], eax */
    eax = MEM32(edx + 0x50); /* 0x0071635A: mov eax, dword ptr [edx + 0x50] */
    edi = POP32_VAL(esp); /* 0x0071635D: pop edi */
    esi = POP32_VAL(esp); /* 0x0071635E: pop esi */
    /* cmp MEM32(edx + eax * 4 + 0x28), 0 */ /* 0x0071635F: cmp dword ptr [edx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716377; /* 0x00716364: je 0x716377 */
L_00716366:
    MEM32(ebp + 0xC) = 0x9010u; /* 0x00716366: mov dword ptr [ebp + 0xc], 0x9010 */
    MEM32(ebp + 0x8) = edx; /* 0x0071636D: mov dword ptr [ebp + 8], edx */
    eax = MEM32(edx + eax * 4 + 0x28); /* 0x00716370: mov eax, dword ptr [edx + eax*4 + 0x28] */
    ebp = POP32_VAL(esp); /* 0x00716374: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_00716377:
    ebp = POP32_VAL(esp); /* 0x00716377: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716378: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00716380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716380u);

L_00716380:
    PUSH32(esp, ebp); /* 0x00716380: push ebp */
    ebp = esp; /* 0x00716381: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00716383: push esi */
    PUSH32(esp, edi); /* 0x00716384: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00716385: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00716388: mov eax, dword ptr [edi + 0x18] */
    ecx = MEM32(edi + 0x10); /* 0x0071638B: mov ecx, dword ptr [edi + 0x10] */
    edx = eax + (-0x1); /* 0x0071638E: lea edx, [eax - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00716391: add edx, ecx */
    _flag_k = FK_ADD;
    esi = eax + (-0x1); /* 0x00716393: lea esi, [eax - 1] */
    esi = ecx + esi * 4; /* 0x00716396: lea esi, [ecx + esi*4] */
    /* test eax, eax */ /* 0x00716399: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007163B5; /* 0x0071639B: je 0x7163b5 */
L_0071639D:
    ecx = ecx; /* 0x0071639D: lea ecx, [ecx] */
L_007163A0:
    ecx = (uint32_t)MEM8(edx); /* 0x007163A0: movzx ecx, byte ptr [edx] */
    edx = edx + (-0x1); /* 0x007163A3: lea edx, [edx - 1] */
    _flag_a = (uint32_t)((ecx ^ 0xFFFFFF80u)); _flag_b = (uint32_t)((ecx ^ 0xFFFFFF80u));
    ecx = ecx ^ 0xFFFFFF80u; /* 0x007163A6: xor ecx, 0xffffff80 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = esi + (-0x4); /* 0x007163A9: lea esi, [esi - 4] */
    if (24u) _cf = (((ecx) >> 8) & 1u); /* 0x007163AC: shl ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx << 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 24u; /* 0x007163AC: shl ecx, 0x18 */
    MEM32(esi + 0x4) = ecx; /* 0x007163AF: mov dword ptr [esi + 4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x007163B2: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007163A0; /* 0x007163B3: jne 0x7163a0 */
L_007163B5:
    eax = MEM32(edi + 0x18); /* 0x007163B5: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x007163B8: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x007163BB: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x007163BB: shl eax, 2 */
    MEM32(edi + 0x18) = eax; /* 0x007163BE: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x007163C1: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x007163C4: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007163DA; /* 0x007163C9: je 0x7163da */
L_007163CB:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x007163CB: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8020u); /* 0x007163CF: push 0x8020 */
    PUSH32(esp, edi); /* 0x007163D4: push edi */
    RECOMP_ICALL(eax); /* 0x007163D5: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007163D7: add esp, 8 */
    _flag_k = FK_ADD;
L_007163DA:
    edi = POP32_VAL(esp); /* 0x007163DA: pop edi */
    esi = POP32_VAL(esp); /* 0x007163DB: pop esi */
    ebp = POP32_VAL(esp); /* 0x007163DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007163DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_007163E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007163E0u);

L_007163E0:
    PUSH32(esp, ebp); /* 0x007163E0: push ebp */
    ebp = esp; /* 0x007163E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007163E3: push ecx */
    PUSH32(esp, ebx); /* 0x007163E4: push ebx */
    PUSH32(esp, esi); /* 0x007163E5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x007163E6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x007163E9: push edi */
    edi = MEM32(esi + 0x18); /* 0x007163EA: mov edi, dword ptr [esi + 0x18] */
    eax = MEM32(esi + 0x10); /* 0x007163ED: mov eax, dword ptr [esi + 0x10] */
    ebx = edi + (-0x1); /* 0x007163F0: lea ebx, [edi - 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x007163F3: add ebx, eax */
    _flag_k = FK_ADD;
    eax = eax + edi * 4; /* 0x007163F5: lea eax, [eax + edi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x007163F8: add eax, -4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x007163FB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071643C; /* 0x007163FD: je 0x71643c */
L_007163FF:
    esi = eax; /* 0x007163FF: mov esi, eax */
L_00716401:
    edx = (uint32_t)MEM8(ebx); /* 0x00716401: movzx edx, byte ptr [ebx] */
    ebx = ebx + (-0x1); /* 0x00716404: lea ebx, [ebx - 1] */
    _flag_a = (uint32_t)((edx ^ 0xFFFFFF80u)); _flag_b = (uint32_t)((edx ^ 0xFFFFFF80u));
    edx = edx ^ 0xFFFFFF80u; /* 0x00716407: xor edx, 0xffffff80 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = esi + (-0x4); /* 0x0071640A: lea esi, [esi - 4] */
    if (24u) _cf = (((edx) >> 8) & 1u); /* 0x0071640D: shl edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx << 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 24u; /* 0x0071640D: shl edx, 0x18 */
    ecx = edx; /* 0x00716410: mov ecx, edx */
    eax = edx; /* 0x00716412: mov eax, edx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00716414: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x00716414: shr eax, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00FF0000u);
    ecx = ecx & 0x00FF0000u; /* 0x00716417: and ecx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x0071641D: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x0071641F: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x00716421: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x00716426: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x00716426: shl edx, 0x10 */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x00716429: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x0071642B: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x0071642B: shr ecx, 8 */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x0071642E: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x0071642E: shl eax, 8 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00716431: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = ecx; /* 0x00716433: mov dword ptr [esi + 4], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00716436: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716401; /* 0x00716437: jne 0x716401 */
L_00716439:
    esi = MEM32(ebp + 0x8); /* 0x00716439: mov esi, dword ptr [ebp + 8] */
L_0071643C:
    eax = MEM32(esi + 0x18); /* 0x0071643C: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x0071643F: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x00716442: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x00716442: shl eax, 2 */
    MEM32(esi + 0x18) = eax; /* 0x00716445: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x00716448: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x0071644B: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716461; /* 0x00716450: je 0x716461 */
L_00716452:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00716452: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9020u); /* 0x00716456: push 0x9020 */
    PUSH32(esp, esi); /* 0x0071645B: push esi */
    RECOMP_ICALL(eax); /* 0x0071645C: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071645E: add esp, 8 */
    _flag_k = FK_ADD;
L_00716461:
    edi = POP32_VAL(esp); /* 0x00716461: pop edi */
    esi = POP32_VAL(esp); /* 0x00716462: pop esi */
    ebx = POP32_VAL(esp); /* 0x00716463: pop ebx */
    esp = ebp; /* 0x00716464: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00716466: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716467: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716470u);

L_00716470:
    PUSH32(esp, ebp); /* 0x00716470: push ebp */
    ebp = esp; /* 0x00716471: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x00716473: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x00716476: push esi */
    PUSH32(esp, edi); /* 0x00716477: push edi */
    edx = MEM32(ecx + 0x18); /* 0x00716478: mov edx, dword ptr [ecx + 0x18] */
    eax = MEM32(ecx + 0x10); /* 0x0071647B: mov eax, dword ptr [ecx + 0x10] */
    esi = edx + (-0x1); /* 0x0071647E: lea esi, [edx - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x00716481: add esi, eax */
    _flag_k = FK_ADD;
    edi = edx + (-0x1); /* 0x00716483: lea edi, [edx - 1] */
    edi = eax + edi * 4; /* 0x00716486: lea edi, [eax + edi*4] */
    /* test edx, edx */ /* 0x00716489: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007164BD; /* 0x0071648B: je 0x7164bd */
L_0071648D:
    _xmm[1].u64[0] = MEM32(0x808B74); _xmm[1].u64[1] = 0; /* 0x0071648D: movss xmm1, dword ptr [0x808b74] */
    _xmm[2].u64[0] = MEM32(0x808CB0); _xmm[2].u64[1] = 0; /* 0x00716495: movss xmm2, dword ptr [0x808cb0] */
    ecx = ecx; /* 0x0071649D: lea ecx, [ecx] */
L_007164A0:
    eax = (uint32_t)MEM8(esi); /* 0x007164A0: movzx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x007164A3: dec esi */
    _flag_k = FK_DEC;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x007164A4: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x007164A8: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x007164AB: mulss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x007164AF: subss xmm0, xmm2 */
    MEM32(edi) = _xmm[0].u32[0]; /* 0x007164B3: movss dword ptr [edi], xmm0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x007164B7: sub edi, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x007164BA: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007164A0; /* 0x007164BB: jne 0x7164a0 */
L_007164BD:
    eax = MEM32(ecx + 0x18); /* 0x007164BD: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x50) = MEM32(ecx + 0x50) + 1; /* 0x007164C0: inc dword ptr [ecx + 0x50] */
    _flag_k = FK_INC;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x007164C3: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x007164C3: shl eax, 2 */
    MEM32(ecx + 0x18) = eax; /* 0x007164C6: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(ecx + 0x50); /* 0x007164C9: mov eax, dword ptr [ecx + 0x50] */
    edi = POP32_VAL(esp); /* 0x007164CC: pop edi */
    esi = POP32_VAL(esp); /* 0x007164CD: pop esi */
    /* cmp MEM32(ecx + eax * 4 + 0x28), 0 */ /* 0x007164CE: cmp dword ptr [ecx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007164E6; /* 0x007164D3: je 0x7164e6 */
L_007164D5:
    MEM32(ebp + 0xC) = 0x8120u; /* 0x007164D5: mov dword ptr [ebp + 0xc], 0x8120 */
    MEM32(ebp + 0x8) = ecx; /* 0x007164DC: mov dword ptr [ebp + 8], ecx */
    eax = MEM32(ecx + eax * 4 + 0x28); /* 0x007164DF: mov eax, dword ptr [ecx + eax*4 + 0x28] */
    ebp = POP32_VAL(esp); /* 0x007164E3: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_007164E6:
    ebp = POP32_VAL(esp); /* 0x007164E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007164E7: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007164F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007164F0u);

L_007164F0:
    PUSH32(esp, ebp); /* 0x007164F0: push ebp */
    ebp = esp; /* 0x007164F1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x007164F3: push ecx */
    PUSH32(esp, ebx); /* 0x007164F4: push ebx */
    PUSH32(esp, esi); /* 0x007164F5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x007164F6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x007164F9: push edi */
    edi = MEM32(esi + 0x18); /* 0x007164FA: mov edi, dword ptr [esi + 0x18] */
    eax = MEM32(esi + 0x10); /* 0x007164FD: mov eax, dword ptr [esi + 0x10] */
    ebx = edi + (-0x1); /* 0x00716500: lea ebx, [edi - 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x00716503: add ebx, eax */
    _flag_k = FK_ADD;
    eax = eax + edi * 4; /* 0x00716505: lea eax, [eax + edi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x00716508: add eax, -4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x0071650B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071656B; /* 0x0071650D: je 0x71656b */
L_0071650F:
    _xmm[1].u64[0] = MEM32(0x808B74); _xmm[1].u64[1] = 0; /* 0x0071650F: movss xmm1, dword ptr [0x808b74] */
    esi = eax; /* 0x00716517: mov esi, eax */
    _xmm[2].u64[0] = MEM32(0x808CB0); _xmm[2].u64[1] = 0; /* 0x00716519: movss xmm2, dword ptr [0x808cb0] */
L_00716521:
    eax = (uint32_t)MEM8(ebx); /* 0x00716521: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x00716524: dec ebx */
    _flag_k = FK_DEC;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x00716525: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x00716529: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0071652C: mulss xmm0, xmm1 */
    { float _s = _xmm[2].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x00716530: subss xmm0, xmm2 */
    MEM32(ebp + (-0x4)) = _xmm[0].u32[0]; /* 0x00716534: movss dword ptr [ebp - 4], xmm0 */
    eax = MEM32(ebp + (-0x4)); /* 0x00716539: mov eax, dword ptr [ebp - 4] */
    edx = eax; /* 0x0071653C: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x0071653E: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x00716544: mov ecx, eax */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x00716546: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x00716546: shr ecx, 0x10 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x00716549: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x0071654B: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF00u);
    ecx = ecx & 0xFF00u; /* 0x0071654D: and ecx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x00716553: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x00716553: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00716556: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00716558: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x00716558: shr edx, 8 */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x0071655B: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x0071655B: shl ecx, 8 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x0071655E: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = edx; /* 0x00716560: mov dword ptr [esi], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x00716562: sub esi, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00716565: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716521; /* 0x00716566: jne 0x716521 */
L_00716568:
    esi = MEM32(ebp + 0x8); /* 0x00716568: mov esi, dword ptr [ebp + 8] */
L_0071656B:
    eax = MEM32(esi + 0x18); /* 0x0071656B: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x0071656E: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x00716571: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x00716571: shl eax, 2 */
    MEM32(esi + 0x18) = eax; /* 0x00716574: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x00716577: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x0071657A: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716590; /* 0x0071657F: je 0x716590 */
L_00716581:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x00716581: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9120u); /* 0x00716585: push 0x9120 */
    PUSH32(esp, esi); /* 0x0071658A: push esi */
    RECOMP_ICALL(eax); /* 0x0071658B: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071658D: add esp, 8 */
    _flag_k = FK_ADD;
L_00716590:
    edi = POP32_VAL(esp); /* 0x00716590: pop edi */
    esi = POP32_VAL(esp); /* 0x00716591: pop esi */
    ebx = POP32_VAL(esp); /* 0x00716592: pop ebx */
    esp = ebp; /* 0x00716593: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00716595: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716596: ret  */
    RECOMP_REGS_OUT();
}

void sub_007165A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007165A0u);

L_007165A0:
    PUSH32(esp, ebp); /* 0x007165A0: push ebp */
    ebp = esp; /* 0x007165A1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x007165A3: push esi */
    PUSH32(esp, edi); /* 0x007165A4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x007165A5: mov edi, dword ptr [ebp + 8] */
    edx = MEM32(edi + 0x18); /* 0x007165A8: mov edx, dword ptr [edi + 0x18] */
    ecx = MEM32(edi + 0x10); /* 0x007165AB: mov ecx, dword ptr [edi + 0x10] */
    esi = ecx; /* 0x007165AE: mov esi, ecx */
    /* test edx, edx */ /* 0x007165B0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007165C4; /* 0x007165B2: je 0x7165c4 */
L_007165B4:
    SET_LO8(eax, MEM8(ecx)); /* 0x007165B4: mov al, byte ptr [ecx] */
    ecx = ecx + 0x1; /* 0x007165B6: lea ecx, [ecx + 1] */
    _flag_a = (uint32_t)((LO8(eax) ^ 0x80u)) << 24; _flag_b = (uint32_t)((LO8(eax) ^ 0x80u)) << 24;
    SET_LO8(eax, LO8(eax) ^ 0x80u); /* 0x007165B9: xor al, 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = esi + 0x1; /* 0x007165BB: lea esi, [esi + 1] */
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x007165BE: mov byte ptr [esi - 1], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x007165C1: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007165B4; /* 0x007165C2: jne 0x7165b4 */
L_007165C4:
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x007165C4: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    eax = MEM32(edi + 0x50); /* 0x007165C7: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x007165CA: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007165DD; /* 0x007165CF: je 0x7165dd */
L_007165D1:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x007165D1: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 8); /* 0x007165D5: push 8 */
    PUSH32(esp, edi); /* 0x007165D7: push edi */
    RECOMP_ICALL(eax); /* 0x007165D8: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007165DA: add esp, 8 */
    _flag_k = FK_ADD;
L_007165DD:
    edi = POP32_VAL(esp); /* 0x007165DD: pop edi */
    esi = POP32_VAL(esp); /* 0x007165DE: pop esi */
    ebp = POP32_VAL(esp); /* 0x007165DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007165E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_007165F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007165F0u);

L_007165F0:
    PUSH32(esp, ebp); /* 0x007165F0: push ebp */
    ebp = esp; /* 0x007165F1: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x007165F3: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x007165F6: push esi */
    PUSH32(esp, edi); /* 0x007165F7: push edi */
    ecx = MEM32(edx + 0x18); /* 0x007165F8: mov ecx, dword ptr [edx + 0x18] */
    eax = MEM32(edx + 0x10); /* 0x007165FB: mov eax, dword ptr [edx + 0x10] */
    esi = ecx + (-0x1); /* 0x007165FE: lea esi, [ecx - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x00716601: add esi, eax */
    _flag_k = FK_ADD;
    edi = ecx + (-0x1); /* 0x00716603: lea edi, [ecx - 1] */
    edi = eax + edi * 2; /* 0x00716606: lea edi, [eax + edi*2] */
    /* test ecx, ecx */ /* 0x00716609: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0071662C; /* 0x0071660B: je 0x71662c */
L_0071660D:
    PUSH32(esp, ebx); /* 0x0071660D: push ebx */
    ebx = 0xFF80u; /* 0x0071660E: mov ebx, 0xff80 */
L_00716613:
    SET_LO16(eax, (int32_t)(int8_t)MEM8(esi)); /* 0x00716613: movsx ax, byte ptr [esi] */
    esi = esi + (-0x1); /* 0x00716617: lea esi, [esi - 1] */
    edi = edi + (-0x2); /* 0x0071661A: lea edi, [edi - 2] */
    _flag_a = (uint32_t)((LO16(eax) ^ LO16(ebx))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ LO16(ebx))) << 16;
    SET_LO16(eax, LO16(eax) ^ LO16(ebx)); /* 0x0071661D: xor ax, bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (8u) _cf = (((LO16(eax)) >> 8) & 1u); /* 0x00716620: shl ax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << 8u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << 8u); /* 0x00716620: shl ax, 8 */
    MEM16(edi + 0x2) = (uint16_t)(LO16(eax)); /* 0x00716624: mov word ptr [edi + 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x00716628: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716613; /* 0x00716629: jne 0x716613 */
L_0071662B:
    ebx = POP32_VAL(esp); /* 0x0071662B: pop ebx */
L_0071662C:
    eax = MEM32(edx + 0x18); /* 0x0071662C: mov eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(MEM32(edx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x50) = MEM32(edx + 0x50) + 1; /* 0x0071662F: inc dword ptr [edx + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00716632: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edx + 0x18) = eax; /* 0x00716634: mov dword ptr [edx + 0x18], eax */
    eax = MEM32(edx + 0x50); /* 0x00716637: mov eax, dword ptr [edx + 0x50] */
    edi = POP32_VAL(esp); /* 0x0071663A: pop edi */
    esi = POP32_VAL(esp); /* 0x0071663B: pop esi */
    /* cmp MEM32(edx + eax * 4 + 0x28), 0 */ /* 0x0071663C: cmp dword ptr [edx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716654; /* 0x00716641: je 0x716654 */
L_00716643:
    MEM32(ebp + 0xC) = 0x10u; /* 0x00716643: mov dword ptr [ebp + 0xc], 0x10 */
    MEM32(ebp + 0x8) = edx; /* 0x0071664A: mov dword ptr [ebp + 8], edx */
    eax = MEM32(edx + eax * 4 + 0x28); /* 0x0071664D: mov eax, dword ptr [edx + eax*4 + 0x28] */
    ebp = POP32_VAL(esp); /* 0x00716651: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_00716654:
    ebp = POP32_VAL(esp); /* 0x00716654: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716655: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00716660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716660u);

L_00716660:
    PUSH32(esp, ebp); /* 0x00716660: push ebp */
    ebp = esp; /* 0x00716661: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00716663: push esi */
    PUSH32(esp, edi); /* 0x00716664: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00716665: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00716668: mov eax, dword ptr [edi + 0x18] */
    ecx = MEM32(edi + 0x10); /* 0x0071666B: mov ecx, dword ptr [edi + 0x10] */
    edx = eax + (-0x1); /* 0x0071666E: lea edx, [eax - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00716671: add edx, ecx */
    _flag_k = FK_ADD;
    esi = eax + (-0x1); /* 0x00716673: lea esi, [eax - 1] */
    esi = ecx + esi * 2; /* 0x00716676: lea esi, [ecx + esi*2] */
    /* test eax, eax */ /* 0x00716679: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00716695; /* 0x0071667B: je 0x716695 */
L_0071667D:
    ecx = ecx; /* 0x0071667D: lea ecx, [ecx] */
L_00716680:
    SET_LO16(ecx, (int32_t)(int8_t)MEM8(edx)); /* 0x00716680: movsx cx, byte ptr [edx] */
    edx = edx + (-0x1); /* 0x00716684: lea edx, [edx - 1] */
    esi = esi + (-0x2); /* 0x00716687: lea esi, [esi - 2] */
    if (8u) _cf = (((LO16(ecx)) >> 8) & 1u); /* 0x0071668A: shl cx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ecx) << 8u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, LO16(ecx) << 8u); /* 0x0071668A: shl cx, 8 */
    MEM16(esi + 0x2) = (uint16_t)(LO16(ecx)); /* 0x0071668E: mov word ptr [esi + 2], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00716692: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716680; /* 0x00716693: jne 0x716680 */
L_00716695:
    eax = MEM32(edi + 0x18); /* 0x00716695: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x00716698: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x0071669B: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x0071669D: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x007166A0: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x007166A3: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007166B9; /* 0x007166A8: je 0x7166b9 */
L_007166AA:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x007166AA: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8010u); /* 0x007166AE: push 0x8010 */
    PUSH32(esp, edi); /* 0x007166B3: push edi */
    RECOMP_ICALL(eax); /* 0x007166B4: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007166B6: add esp, 8 */
    _flag_k = FK_ADD;
L_007166B9:
    edi = POP32_VAL(esp); /* 0x007166B9: pop edi */
    esi = POP32_VAL(esp); /* 0x007166BA: pop esi */
    ebp = POP32_VAL(esp); /* 0x007166BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007166BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_007166C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007166C0u);

L_007166C0:
    PUSH32(esp, ebp); /* 0x007166C0: push ebp */
    ebp = esp; /* 0x007166C1: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x007166C3: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x007166C6: push esi */
    PUSH32(esp, edi); /* 0x007166C7: push edi */
    ecx = MEM32(edx + 0x18); /* 0x007166C8: mov ecx, dword ptr [edx + 0x18] */
    eax = MEM32(edx + 0x10); /* 0x007166CB: mov eax, dword ptr [edx + 0x10] */
    esi = ecx + (-0x1); /* 0x007166CE: lea esi, [ecx - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x007166D1: add esi, eax */
    _flag_k = FK_ADD;
    edi = ecx + (-0x1); /* 0x007166D3: lea edi, [ecx - 1] */
    edi = eax + edi * 2; /* 0x007166D6: lea edi, [eax + edi*2] */
    /* test ecx, ecx */ /* 0x007166D9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00716700; /* 0x007166DB: je 0x716700 */
L_007166DD:
    PUSH32(esp, ebx); /* 0x007166DD: push ebx */
    ebx = 0xFF80u; /* 0x007166DE: mov ebx, 0xff80 */
L_007166E3:
    SET_LO16(eax, (int32_t)(int8_t)MEM8(esi)); /* 0x007166E3: movsx ax, byte ptr [esi] */
    esi = esi + (-0x1); /* 0x007166E7: lea esi, [esi - 1] */
    edi = edi + (-0x2); /* 0x007166EA: lea edi, [edi - 2] */
    _flag_a = (uint32_t)((LO16(eax) ^ LO16(ebx))) << 16; _flag_b = (uint32_t)((LO16(eax) ^ LO16(ebx))) << 16;
    SET_LO16(eax, LO16(eax) ^ LO16(ebx)); /* 0x007166ED: xor ax, bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (8u) _cf = (((LO16(eax)) >> 8) & 1u); /* 0x007166F0: shl ax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << 8u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << 8u); /* 0x007166F0: shl ax, 8 */
    { uint32_t _rv = (LO16(eax)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(eax, _rv); } /* 0x007166F4: rol ax, 8 */
    MEM16(edi + 0x2) = (uint16_t)(LO16(eax)); /* 0x007166F8: mov word ptr [edi + 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x007166FC: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007166E3; /* 0x007166FD: jne 0x7166e3 */
L_007166FF:
    ebx = POP32_VAL(esp); /* 0x007166FF: pop ebx */
L_00716700:
    eax = MEM32(edx + 0x18); /* 0x00716700: mov eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(MEM32(edx + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x50) = MEM32(edx + 0x50) + 1; /* 0x00716703: inc dword ptr [edx + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x00716706: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edx + 0x18) = eax; /* 0x00716708: mov dword ptr [edx + 0x18], eax */
    eax = MEM32(edx + 0x50); /* 0x0071670B: mov eax, dword ptr [edx + 0x50] */
    edi = POP32_VAL(esp); /* 0x0071670E: pop edi */
    esi = POP32_VAL(esp); /* 0x0071670F: pop esi */
    /* cmp MEM32(edx + eax * 4 + 0x28), 0 */ /* 0x00716710: cmp dword ptr [edx + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00716728; /* 0x00716715: je 0x716728 */
L_00716717:
    MEM32(ebp + 0xC) = 0x1010u; /* 0x00716717: mov dword ptr [ebp + 0xc], 0x1010 */
    MEM32(ebp + 0x8) = edx; /* 0x0071671E: mov dword ptr [ebp + 8], edx */
    eax = MEM32(edx + eax * 4 + 0x28); /* 0x00716721: mov eax, dword ptr [edx + eax*4 + 0x28] */
    ebp = POP32_VAL(esp); /* 0x00716725: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_00716728:
    ebp = POP32_VAL(esp); /* 0x00716728: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716729: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00716730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716730u);

L_00716730:
    PUSH32(esp, ebp); /* 0x00716730: push ebp */
    ebp = esp; /* 0x00716731: mov ebp, esp */
    PUSH32(esp, esi); /* 0x00716733: push esi */
    PUSH32(esp, edi); /* 0x00716734: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00716735: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x00716738: mov eax, dword ptr [edi + 0x18] */
    ecx = MEM32(edi + 0x10); /* 0x0071673B: mov ecx, dword ptr [edi + 0x10] */
    edx = eax + (-0x1); /* 0x0071673E: lea edx, [eax - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00716741: add edx, ecx */
    _flag_k = FK_ADD;
    esi = eax + (-0x1); /* 0x00716743: lea esi, [eax - 1] */
    esi = ecx + esi * 2; /* 0x00716746: lea esi, [ecx + esi*2] */
    /* test eax, eax */ /* 0x00716749: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00716769; /* 0x0071674B: je 0x716769 */
L_0071674D:
    ecx = ecx; /* 0x0071674D: lea ecx, [ecx] */
L_00716750:
    SET_LO16(ecx, (int32_t)(int8_t)MEM8(edx)); /* 0x00716750: movsx cx, byte ptr [edx] */
    edx = edx + (-0x1); /* 0x00716754: lea edx, [edx - 1] */
    esi = esi + (-0x2); /* 0x00716757: lea esi, [esi - 2] */
    if (8u) _cf = (((LO16(ecx)) >> 8) & 1u); /* 0x0071675A: shl cx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ecx) << 8u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, LO16(ecx) << 8u); /* 0x0071675A: shl cx, 8 */
    { uint32_t _rv = (LO16(ecx)) & 65535u, _rn = ((8) & 31) % 16u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 15) & 1u; _rv = ((_rv << 1) | _rb) & 65535u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } SET_LO16(ecx, _rv); } /* 0x0071675E: rol cx, 8 */
    MEM16(esi + 0x2) = (uint16_t)(LO16(ecx)); /* 0x00716762: mov word ptr [esi + 2], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x00716766: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716750; /* 0x00716767: jne 0x716750 */
L_00716769:
    eax = MEM32(edi + 0x18); /* 0x00716769: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x0071676C: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x0071676F: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x00716771: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x00716774: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x00716777: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071678D; /* 0x0071677C: je 0x71678d */
L_0071677E:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x0071677E: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x9010u); /* 0x00716782: push 0x9010 */
    PUSH32(esp, edi); /* 0x00716787: push edi */
    RECOMP_ICALL(eax); /* 0x00716788: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071678A: add esp, 8 */
    _flag_k = FK_ADD;
L_0071678D:
    edi = POP32_VAL(esp); /* 0x0071678D: pop edi */
    esi = POP32_VAL(esp); /* 0x0071678E: pop esi */
    ebp = POP32_VAL(esp); /* 0x0071678F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716790: ret  */
    RECOMP_REGS_OUT();
}

void sub_007167A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007167A0u);

L_007167A0:
    PUSH32(esp, ebp); /* 0x007167A0: push ebp */
    ebp = esp; /* 0x007167A1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x007167A3: push esi */
    PUSH32(esp, edi); /* 0x007167A4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x007167A5: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x18); /* 0x007167A8: mov eax, dword ptr [edi + 0x18] */
    ecx = MEM32(edi + 0x10); /* 0x007167AB: mov ecx, dword ptr [edi + 0x10] */
    edx = eax + (-0x1); /* 0x007167AE: lea edx, [eax - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x007167B1: add edx, ecx */
    _flag_k = FK_ADD;
    esi = eax + (-0x1); /* 0x007167B3: lea esi, [eax - 1] */
    esi = ecx + esi * 4; /* 0x007167B6: lea esi, [ecx + esi*4] */
    /* test eax, eax */ /* 0x007167B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007167D2; /* 0x007167BB: je 0x7167d2 */
L_007167BD:
    ecx = ecx; /* 0x007167BD: lea ecx, [ecx] */
L_007167C0:
    ecx = (int32_t)(int8_t)MEM8(edx); /* 0x007167C0: movsx ecx, byte ptr [edx] */
    edx = edx + (-0x1); /* 0x007167C3: lea edx, [edx - 1] */
    if (24u) _cf = (((ecx) >> 8) & 1u); /* 0x007167C6: shl ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx << 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 24u; /* 0x007167C6: shl ecx, 0x18 */
    esi = esi + (-0x4); /* 0x007167C9: lea esi, [esi - 4] */
    MEM32(esi + 0x4) = ecx; /* 0x007167CC: mov dword ptr [esi + 4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x007167CF: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007167C0; /* 0x007167D0: jne 0x7167c0 */
L_007167D2:
    eax = MEM32(edi + 0x18); /* 0x007167D2: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x50) = MEM32(edi + 0x50) + 1; /* 0x007167D5: inc dword ptr [edi + 0x50] */
    _flag_k = FK_INC;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x007167D8: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x007167D8: shl eax, 2 */
    MEM32(edi + 0x18) = eax; /* 0x007167DB: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(edi + 0x50); /* 0x007167DE: mov eax, dword ptr [edi + 0x50] */
    /* cmp MEM32(edi + eax * 4 + 0x28), 0 */ /* 0x007167E1: cmp dword ptr [edi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007167F7; /* 0x007167E6: je 0x7167f7 */
L_007167E8:
    eax = MEM32(edi + eax * 4 + 0x28); /* 0x007167E8: mov eax, dword ptr [edi + eax*4 + 0x28] */
    PUSH32(esp, 0x8020u); /* 0x007167EC: push 0x8020 */
    PUSH32(esp, edi); /* 0x007167F1: push edi */
    RECOMP_ICALL(eax); /* 0x007167F2: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x007167F4: add esp, 8 */
    _flag_k = FK_ADD;
L_007167F7:
    edi = POP32_VAL(esp); /* 0x007167F7: pop edi */
    esi = POP32_VAL(esp); /* 0x007167F8: pop esi */
    ebp = POP32_VAL(esp); /* 0x007167F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007167FA: ret  */
    RECOMP_REGS_OUT();
}

void sub_00716800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00716800u);

L_00716800:
    PUSH32(esp, ebp); /* 0x00716800: push ebp */
    ebp = esp; /* 0x00716801: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00716803: push ecx */
    PUSH32(esp, ebx); /* 0x00716804: push ebx */
    PUSH32(esp, esi); /* 0x00716805: push esi */
    esi = MEM32(ebp + 0x8); /* 0x00716806: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x00716809: push edi */
    edi = MEM32(esi + 0x18); /* 0x0071680A: mov edi, dword ptr [esi + 0x18] */
    eax = MEM32(esi + 0x10); /* 0x0071680D: mov eax, dword ptr [esi + 0x10] */
    ebx = edi + (-0x1); /* 0x00716810: lea ebx, [edi - 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x00716813: add ebx, eax */
    _flag_k = FK_ADD;
    eax = eax + edi * 4; /* 0x00716815: lea eax, [eax + edi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x00716818: add eax, -4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x0071681B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00716859; /* 0x0071681D: je 0x716859 */
L_0071681F:
    esi = eax; /* 0x0071681F: mov esi, eax */
L_00716821:
    ecx = (int32_t)(int8_t)MEM8(ebx); /* 0x00716821: movsx ecx, byte ptr [ebx] */
    ebx = ebx + (-0x1); /* 0x00716824: lea ebx, [ebx - 1] */
    if (24u) _cf = (((ecx) >> 8) & 1u); /* 0x00716827: shl ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx << 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 24u; /* 0x00716827: shl ecx, 0x18 */
    esi = esi + (-0x4); /* 0x0071682A: lea esi, [esi - 4] */
    edx = ecx; /* 0x0071682D: mov edx, ecx */
    eax = ecx; /* 0x0071682F: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x00716831: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x00716831: shr eax, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    edx = edx & 0x00FF0000u; /* 0x00716834: and edx, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x0071683A: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x0071683C: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x0071683E: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x00716843: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x00716843: shl ecx, 0x10 */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x00716846: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00716848: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x00716848: shr edx, 8 */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x0071684B: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x0071684B: shl eax, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x0071684E: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edx; /* 0x00716850: mov dword ptr [esi + 4], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00716853: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_00716821; /* 0x00716854: jne 0x716821 */
L_00716856:
    esi = MEM32(ebp + 0x8); /* 0x00716856: mov esi, dword ptr [ebp + 8] */
L_00716859:
    eax = MEM32(esi + 0x18); /* 0x00716859: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) + 1; /* 0x0071685C: inc dword ptr [esi + 0x50] */
    _flag_k = FK_INC;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x0071685F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x0071685F: shl eax, 2 */
    MEM32(esi + 0x18) = eax; /* 0x00716862: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x00716865: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(esi + eax * 4 + 0x28), 0 */ /* 0x00716868: cmp dword ptr [esi + eax*4 + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4 + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0071687E; /* 0x0071686D: je 0x71687e */
L_0071686F:
    eax = MEM32(esi + eax * 4 + 0x28); /* 0x0071686F: mov eax, dword ptr [esi + eax*4 + 0x28] */
    PUSH32(esp, 0x9020u); /* 0x00716873: push 0x9020 */
    PUSH32(esp, esi); /* 0x00716878: push esi */
    RECOMP_ICALL(eax); /* 0x00716879: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0071687B: add esp, 8 */
    _flag_k = FK_ADD;
L_0071687E:
    edi = POP32_VAL(esp); /* 0x0071687E: pop edi */
    esi = POP32_VAL(esp); /* 0x0071687F: pop esi */
    ebx = POP32_VAL(esp); /* 0x00716880: pop ebx */
    esp = ebp; /* 0x00716881: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00716883: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00716884: ret  */
    RECOMP_REGS_OUT();
}
