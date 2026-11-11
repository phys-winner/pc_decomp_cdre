#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_006D05A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D05A0u);

L_006D05A0:
    PUSH32(esp, ebp); /* 0x006D05A0: push ebp */
    ebp = esp; /* 0x006D05A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006D05A3: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D05A6: push ebx */
    eax = edx; /* 0x006D05A7: mov eax, edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x006D05A9: mov dword ptr [ebp - 0xc], ecx */
    PUSH32(esp, esi); /* 0x006D05AC: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D05AD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D05AF: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x006D05B2: push edi */
    ebx = (uint32_t)MEM16(eax + 0x2); /* 0x006D05B3: movzx ebx, word ptr [eax + 2] */
    MEM32(ebp + (-0x8)) = 0xFFFFFFFFu; /* 0x006D05B7: mov dword ptr [ebp - 8], 0xffffffff */
    edx = esi + 0x7; /* 0x006D05BE: lea edx, [esi + 7] */
    edi = esi + 0x4; /* 0x006D05C1: lea edi, [esi + 4] */
    /* test ebx, ebx */ /* 0x006D05C4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D05D0; /* 0x006D05C6: jne 0x6d05d0 */
L_006D05C8:
    edx = 0x8Au; /* 0x006D05C8: mov edx, 0x8a */
    edi = esi + 0x3; /* 0x006D05CD: lea edi, [esi + 3] */
L_006D05D0:
    eax = MEM32(ebp + 0x8); /* 0x006D05D0: mov eax, dword ptr [ebp + 8] */
    esi = 0xFFFFu; /* 0x006D05D3: mov esi, 0xffff */
    ecx = MEM32(ebp + (-0x4)); /* 0x006D05D8: mov ecx, dword ptr [ebp - 4] */
    MEM16(ecx + eax * 4 + 0x6) = (uint16_t)(LO16(esi)); /* 0x006D05DB: mov word ptr [ecx + eax*4 + 6], si */
    esi = 0; /* 0x006D05E0: mov esi, 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D05E5: mov ecx, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x006D05E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D0680; /* 0x006D05EA: js 0x6d0680 */
L_006D05F0:
    eax = MEM32(ebp + (-0x4)); /* 0x006D05F0: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x006D05F3: add eax, 6 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D05F6: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x006D05F9: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006D05FC: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x006D05FD: mov dword ptr [ebp + 8], eax */
L_006D0600:
    eax = ebx; /* 0x006D0600: mov eax, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006D0602: inc esi */
    _flag_k = FK_INC;
    ebx = MEM32(ebp + (-0x4)); /* 0x006D0603: mov ebx, dword ptr [ebp - 4] */
    ebx = (uint32_t)MEM16(ebx); /* 0x006D0606: movzx ebx, word ptr [ebx] */
    /* cmp esi, edx */ /* 0x006D0609: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006D0611; /* 0x006D060B: jge 0x6d0611 */
L_006D060D:
    /* cmp eax, ebx */ /* 0x006D060D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D0677; /* 0x006D060F: je 0x6d0677 */
L_006D0611:
    /* cmp esi, edi */ /* 0x006D0611: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006D061F; /* 0x006D0613: jge 0x6d061f */
L_006D0615:
    _flag_a = (uint32_t)(MEM16(ecx + eax * 4 + 0xA7C)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM16(ecx + eax * 4 + 0xA7C) = (uint16_t)(MEM16(ecx + eax * 4 + 0xA7C) + LO16(esi)); /* 0x006D0615: add word ptr [ecx + eax*4 + 0xa7c], si */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_006D064E; /* 0x006D061D: jmp 0x6d064e */
L_006D061F:
    /* test eax, eax */ /* 0x006D061F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D0639; /* 0x006D0621: je 0x6d0639 */
L_006D0623:
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x006D0623: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D0630; /* 0x006D0626: je 0x6d0630 */
L_006D0628:
    _flag_a = (uint32_t)(MEM16(ecx + eax * 4 + 0xA7C)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ecx + eax * 4 + 0xA7C) = (uint16_t)(MEM16(ecx + eax * 4 + 0xA7C) + 1); /* 0x006D0628: inc word ptr [ecx + eax*4 + 0xa7c] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_006D0630:
    _flag_a = (uint32_t)(MEM16(ecx + 0xABC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ecx + 0xABC) = (uint16_t)(MEM16(ecx + 0xABC) + 1); /* 0x006D0630: inc word ptr [ecx + 0xabc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    goto L_006D064E; /* 0x006D0637: jmp 0x6d064e */
L_006D0639:
    /* cmp esi, 0xAu */ /* 0x006D0639: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006D0647; /* 0x006D063C: jg 0x6d0647 */
L_006D063E:
    _flag_a = (uint32_t)(MEM16(ecx + 0xAC0)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ecx + 0xAC0) = (uint16_t)(MEM16(ecx + 0xAC0) + 1); /* 0x006D063E: inc word ptr [ecx + 0xac0] */
    _flag_k = FK_NARROW(FK_INC, 16);
    goto L_006D064E; /* 0x006D0645: jmp 0x6d064e */
L_006D0647:
    _flag_a = (uint32_t)(MEM16(ecx + 0xAC4)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ecx + 0xAC4) = (uint16_t)(MEM16(ecx + 0xAC4) + 1); /* 0x006D0647: inc word ptr [ecx + 0xac4] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_006D064E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D064E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x006D0650: mov dword ptr [ebp - 8], eax */
    /* test ebx, ebx */ /* 0x006D0653: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D0661; /* 0x006D0655: jne 0x6d0661 */
L_006D0657:
    edx = 0x8Au; /* 0x006D0657: mov edx, 0x8a */
    edi = esi + 0x3; /* 0x006D065C: lea edi, [esi + 3] */
    goto L_006D0677; /* 0x006D065F: jmp 0x6d0677 */
L_006D0661:
    /* cmp eax, ebx */ /* 0x006D0661: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D066F; /* 0x006D0663: jne 0x6d066f */
L_006D0665:
    edx = 6; /* 0x006D0665: mov edx, 6 */
    edi = edx + (-0x3); /* 0x006D066A: lea edi, [edx - 3] */
    goto L_006D0677; /* 0x006D066D: jmp 0x6d0677 */
L_006D066F:
    edx = 7; /* 0x006D066F: mov edx, 7 */
    edi = edx + (-0x3); /* 0x006D0674: lea edi, [edx - 3] */
L_006D0677:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x006D0677: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x006D067B: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006D0600; /* 0x006D067E: jne 0x6d0600 */
L_006D0680:
    edi = POP32_VAL(esp); /* 0x006D0680: pop edi */
    esi = POP32_VAL(esp); /* 0x006D0681: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D0682: pop ebx */
    esp = ebp; /* 0x006D0683: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D0685: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D0686: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D0690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D0690u);

L_006D0690:
    PUSH32(esp, ebp); /* 0x006D0690: push ebp */
    ebp = esp; /* 0x006D0691: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x006D0693: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D0696: push ebx */
    ebx = edx; /* 0x006D0697: mov ebx, edx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006D0699: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x006D069C: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x006D069F: mov dword ptr [ebp - 0x10], ebx */
    PUSH32(esp, esi); /* 0x006D06A2: push esi */
    PUSH32(esp, edi); /* 0x006D06A3: push edi */
    ecx = (uint32_t)MEM16(ebx + 0x2); /* 0x006D06A4: movzx ecx, word ptr [ebx + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006D06A8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx + 0x8; /* 0x006D06AA: lea edi, [edx + 8] */
    esi = edx + 0x5; /* 0x006D06AD: lea esi, [edx + 5] */
    /* test ecx, ecx */ /* 0x006D06B0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D06BC; /* 0x006D06B2: jne 0x6d06bc */
L_006D06B4:
    edi = 0x8Au; /* 0x006D06B4: mov edi, 0x8a */
    esi = edx + 0x4; /* 0x006D06B9: lea esi, [edx + 4] */
L_006D06BC:
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x006D06BC: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006D0B9B; /* 0x006D06BF: jl 0x6d0b9b */
L_006D06C5:
    eax = MEM32(ebp + (-0x10)); /* 0x006D06C5: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x006D06C8: add eax, 6 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D06CB: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x006D06CE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006D06D1: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = eax; /* 0x006D06D2: mov dword ptr [ebp - 0x10], eax */
L_006D06D5:
    eax = MEM32(ebp + (-0x4)); /* 0x006D06D5: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006D06D8: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = ecx; /* 0x006D06D9: mov dword ptr [ebp - 0xc], ecx */
    ecx = (uint32_t)MEM16(eax); /* 0x006D06DC: movzx ecx, word ptr [eax] */
    eax = MEM32(ebp + (-0x8)); /* 0x006D06DF: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + 0x8) = ecx; /* 0x006D06E2: mov dword ptr [ebp + 8], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D06E5: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp ebx, edi */ /* 0x006D06E8: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006D06F5; /* 0x006D06EA: jge 0x6d06f5 */
L_006D06EC:
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x006D06EC: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D0B8B; /* 0x006D06EF: je 0x6d0b8b */
L_006D06F5:
    /* cmp ebx, esi */ /* 0x006D06F5: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_006D07B4; /* 0x006D06F7: jge 0x6d07b4 */
L_006D06FD:
    edx = ecx * 4 + 0xA7E; /* 0x006D06FD: lea edx, [ecx*4 + 0xa7e] */
    edi = ecx + 0x29F; /* 0x006D0704: lea edi, [ecx + 0x29f] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x006D070A: add edx, eax */
    _flag_k = FK_ADD;
    edi = eax + edi * 4; /* 0x006D070C: lea edi, [eax + edi*4] */
    MEM32(ebp + (-0x1C)) = edx; /* 0x006D070F: mov dword ptr [ebp - 0x1c], edx */
    MEM32(ebp + (-0x18)) = edi; /* 0x006D0712: mov dword ptr [ebp - 0x18], edi */
    goto L_006D0720; /* 0x006D0715: jmp 0x6d0720 */
L_006D0720:
    esi = (uint32_t)MEM16(edx); /* 0x006D0720: movzx esi, word ptr [edx] */
    edx = 0x10u; /* 0x006D0723: mov edx, 0x10 */
    ecx = MEM32(eax + 0x16BC); /* 0x006D0728: mov ecx, dword ptr [eax + 0x16bc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x006D072E: sub edx, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = esi; /* 0x006D0730: mov dword ptr [ebp - 0x14], esi */
    /* cmp ecx, edx */ /* 0x006D0733: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D0790; /* 0x006D0735: jle 0x6d0790 */
L_006D0737:
    edi = (uint32_t)MEM16(edi); /* 0x006D0737: movzx edi, word ptr [edi] */
    esi = MEM32(eax + 0x8); /* 0x006D073A: mov esi, dword ptr [eax + 8] */
    SET_LO16(edx, LO16(edi)); /* 0x006D073D: mov dx, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0740: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D0740: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D0743: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(eax + 0x14); /* 0x006D074A: mov edx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)MEM8(eax + 0x16B8); /* 0x006D074D: movzx ecx, byte ptr [eax + 0x16b8] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D0754: mov byte ptr [esi + edx], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D0757: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(eax + 0x14); /* 0x006D075A: mov esi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x006D075D: mov edx, dword ptr [eax + 8] */
    ecx = (uint32_t)MEM8(eax + 0x16B9); /* 0x006D0760: movzx ecx, byte ptr [eax + 0x16b9] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D0767: mov byte ptr [esi + edx], cl */
    SET_LO8(ecx, 0x10u); /* 0x006D076A: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x16BC)); /* 0x006D076C: sub cl, byte ptr [eax + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D0772: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D0775: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D0775: shr di, cl */
    ecx = MEM32(ebp + (-0x14)); /* 0x006D0778: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFF0u; /* 0x006D077B: add ecx, -0x10 */
    _flag_k = FK_ADD;
    MEM16(eax + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D077E: mov word ptr [eax + 0x16b8], di */
    _flag_a = (uint32_t)(MEM32(eax + 0x16BC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x16BC) = MEM32(eax + 0x16BC) + ecx; /* 0x006D0785: add dword ptr [eax + 0x16bc], ecx */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x18)); /* 0x006D078B: mov edi, dword ptr [ebp - 0x18] */
    goto L_006D07A5; /* 0x006D078E: jmp 0x6d07a5 */
L_006D0790:
    SET_LO16(edx, MEM16(edi)); /* 0x006D0790: mov dx, word ptr [edi] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0793: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D0793: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D0796: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x006D079D: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16BC) = ecx; /* 0x006D079F: mov dword ptr [eax + 0x16bc], ecx */
L_006D07A5:
    edx = MEM32(ebp + (-0x1C)); /* 0x006D07A5: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x006D07A8: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006D0720; /* 0x006D07A9: jne 0x6d0720 */
L_006D07AF:
    goto L_006D0B5D; /* 0x006D07AF: jmp 0x6d0b5d */
L_006D07B4:
    /* test ecx, ecx */ /* 0x006D07B4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D095D; /* 0x006D07B6: je 0x6d095d */
L_006D07BC:
    /* cmp ecx, edx */ /* 0x006D07BC: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D085B; /* 0x006D07BE: je 0x6d085b */
L_006D07C4:
    edi = (uint32_t)MEM16(eax + ecx * 4 + 0xA7E); /* 0x006D07C4: movzx edi, word ptr [eax + ecx*4 + 0xa7e] */
    edx = 0x10u; /* 0x006D07CC: mov edx, 0x10 */
    esi = MEM32(eax + 0x16BC); /* 0x006D07D1: mov esi, dword ptr [eax + 0x16bc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x006D07D7: sub edx, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = edi; /* 0x006D07D9: mov dword ptr [ebp - 0x1c], edi */
    /* cmp esi, edx */ /* 0x006D07DC: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D083D; /* 0x006D07DE: jle 0x6d083d */
L_006D07E0:
    edi = (uint32_t)MEM16(eax + ecx * 4 + 0xA7C); /* 0x006D07E0: movzx edi, word ptr [eax + ecx*4 + 0xa7c] */
    ecx = esi; /* 0x006D07E8: mov ecx, esi */
    esi = MEM32(eax + 0x8); /* 0x006D07EA: mov esi, dword ptr [eax + 8] */
    SET_LO16(edx, LO16(edi)); /* 0x006D07ED: mov dx, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D07F0: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D07F0: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D07F3: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(eax + 0x14); /* 0x006D07FA: mov edx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)MEM8(eax + 0x16B8); /* 0x006D07FD: movzx ecx, byte ptr [eax + 0x16b8] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D0804: mov byte ptr [esi + edx], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D0807: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(eax + 0x14); /* 0x006D080A: mov esi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x006D080D: mov edx, dword ptr [eax + 8] */
    ecx = (uint32_t)MEM8(eax + 0x16B9); /* 0x006D0810: movzx ecx, byte ptr [eax + 0x16b9] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D0817: mov byte ptr [esi + edx], cl */
    SET_LO8(ecx, 0x10u); /* 0x006D081A: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x16BC)); /* 0x006D081C: sub cl, byte ptr [eax + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D0822: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D0825: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D0825: shr di, cl */
    ecx = MEM32(ebp + (-0x1C)); /* 0x006D0828: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFF0u; /* 0x006D082B: add ecx, -0x10 */
    _flag_k = FK_ADD;
    MEM16(eax + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D082E: mov word ptr [eax + 0x16b8], di */
    _flag_a = (uint32_t)(MEM32(eax + 0x16BC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x16BC) = MEM32(eax + 0x16BC) + ecx; /* 0x006D0835: add dword ptr [eax + 0x16bc], ecx */
    _flag_k = FK_ADD;
    goto L_006D085A; /* 0x006D083B: jmp 0x6d085a */
L_006D083D:
    SET_LO16(edx, MEM16(eax + ecx * 4 + 0xA7C)); /* 0x006D083D: mov dx, word ptr [eax + ecx*4 + 0xa7c] */
    ecx = esi; /* 0x006D0845: mov ecx, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0847: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D0847: shl dx, cl */
    ecx = esi + edi; /* 0x006D084A: lea ecx, [esi + edi] */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D084D: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM32(eax + 0x16BC) = ecx; /* 0x006D0854: mov dword ptr [eax + 0x16bc], ecx */
L_006D085A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x006D085A: dec ebx */
    _flag_k = FK_DEC;
L_006D085B:
    esi = (uint32_t)MEM16(eax + 0xABE); /* 0x006D085B: movzx esi, word ptr [eax + 0xabe] */
    edx = 0x10u; /* 0x006D0862: mov edx, 0x10 */
    ecx = MEM32(eax + 0x16BC); /* 0x006D0867: mov ecx, dword ptr [eax + 0x16bc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x006D086D: sub edx, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = esi; /* 0x006D086F: mov dword ptr [ebp - 0x1c], esi */
    /* cmp ecx, edx */ /* 0x006D0872: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D08D0; /* 0x006D0874: jle 0x6d08d0 */
L_006D0876:
    edi = (uint32_t)MEM16(eax + 0xABC); /* 0x006D0876: movzx edi, word ptr [eax + 0xabc] */
    esi = MEM32(eax + 0x8); /* 0x006D087D: mov esi, dword ptr [eax + 8] */
    SET_LO16(edx, LO16(edi)); /* 0x006D0880: mov dx, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0883: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D0883: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D0886: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(eax + 0x14); /* 0x006D088D: mov edx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)MEM8(eax + 0x16B8); /* 0x006D0890: movzx ecx, byte ptr [eax + 0x16b8] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D0897: mov byte ptr [esi + edx], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D089A: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(eax + 0x14); /* 0x006D089D: mov esi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x006D08A0: mov edx, dword ptr [eax + 8] */
    ecx = (uint32_t)MEM8(eax + 0x16B9); /* 0x006D08A3: movzx ecx, byte ptr [eax + 0x16b9] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D08AA: mov byte ptr [esi + edx], cl */
    SET_LO8(ecx, 0x10u); /* 0x006D08AD: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x16BC)); /* 0x006D08AF: sub cl, byte ptr [eax + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D08B5: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D08B8: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D08B8: shr di, cl */
    ecx = MEM32(ebp + (-0x1C)); /* 0x006D08BB: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFF0u; /* 0x006D08BE: add ecx, -0x10 */
    _flag_k = FK_ADD;
    MEM16(eax + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D08C1: mov word ptr [eax + 0x16b8], di */
    _flag_a = (uint32_t)(MEM32(eax + 0x16BC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x16BC) = MEM32(eax + 0x16BC) + ecx; /* 0x006D08C8: add dword ptr [eax + 0x16bc], ecx */
    _flag_k = FK_ADD;
    goto L_006D08E9; /* 0x006D08CE: jmp 0x6d08e9 */
L_006D08D0:
    SET_LO16(edx, MEM16(eax + 0xABC)); /* 0x006D08D0: mov dx, word ptr [eax + 0xabc] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D08D7: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D08D7: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D08DA: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x006D08E1: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16BC) = ecx; /* 0x006D08E3: mov dword ptr [eax + 0x16bc], ecx */
L_006D08E9:
    ecx = MEM32(eax + 0x16BC); /* 0x006D08E9: mov ecx, dword ptr [eax + 0x16bc] */
    /* cmp ecx, 0xEu */ /* 0x006D08EF: cmp ecx, 0xe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D0948; /* 0x006D08F2: jle 0x6d0948 */
L_006D08F4:
    esi = MEM32(eax + 0x8); /* 0x006D08F4: mov esi, dword ptr [eax + 8] */
    edi = ebx + (-0x3); /* 0x006D08F7: lea edi, [ebx - 3] */
    SET_LO16(edx, LO16(edi)); /* 0x006D08FA: mov dx, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D08FD: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D08FD: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D0900: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(eax + 0x14); /* 0x006D0907: mov edx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)MEM8(eax + 0x16B8); /* 0x006D090A: movzx ecx, byte ptr [eax + 0x16b8] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D0911: mov byte ptr [esi + edx], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D0914: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(eax + 0x14); /* 0x006D0917: mov esi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x006D091A: mov edx, dword ptr [eax + 8] */
    ecx = (uint32_t)MEM8(eax + 0x16B9); /* 0x006D091D: movzx ecx, byte ptr [eax + 0x16b9] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D0924: mov byte ptr [esi + edx], cl */
    SET_LO8(ecx, 0x10u); /* 0x006D0927: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x16BC)); /* 0x006D0929: sub cl, byte ptr [eax + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D092F: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D0932: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D0932: shr di, cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x16BC)); _flag_b = (uint32_t)(0xFFFFFFF2u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x16BC) = MEM32(eax + 0x16BC) + 0xFFFFFFF2u; /* 0x006D0935: add dword ptr [eax + 0x16bc], -0xe */
    _flag_k = FK_ADD;
    MEM16(eax + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D093C: mov word ptr [eax + 0x16b8], di */
    goto L_006D0B5D; /* 0x006D0943: jmp 0x6d0b5d */
L_006D0948:
    edx = ebx + (-0x3); /* 0x006D0948: lea edx, [ebx - 3] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D094B: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D094B: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D094E: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x006D0955: add ecx, 2 */
    _flag_k = FK_ADD;
    goto L_006D0B57; /* 0x006D0958: jmp 0x6d0b57 */
L_006D095D:
    ecx = MEM32(eax + 0x16BC); /* 0x006D095D: mov ecx, dword ptr [eax + 0x16bc] */
    edx = 0x10u; /* 0x006D0963: mov edx, 0x10 */
    /* cmp ebx, 0xAu */ /* 0x006D0968: cmp ebx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006D0A68; /* 0x006D096B: jg 0x6d0a68 */
L_006D0971:
    esi = (uint32_t)MEM16(eax + 0xAC2); /* 0x006D0971: movzx esi, word ptr [eax + 0xac2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x006D0978: sub edx, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = esi; /* 0x006D097A: mov dword ptr [ebp - 0x1c], esi */
    /* cmp ecx, edx */ /* 0x006D097D: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D09DB; /* 0x006D097F: jle 0x6d09db */
L_006D0981:
    edi = (uint32_t)MEM16(eax + 0xAC0); /* 0x006D0981: movzx edi, word ptr [eax + 0xac0] */
    esi = MEM32(eax + 0x8); /* 0x006D0988: mov esi, dword ptr [eax + 8] */
    SET_LO16(edx, LO16(edi)); /* 0x006D098B: mov dx, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D098E: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D098E: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D0991: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(eax + 0x14); /* 0x006D0998: mov edx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)MEM8(eax + 0x16B8); /* 0x006D099B: movzx ecx, byte ptr [eax + 0x16b8] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D09A2: mov byte ptr [esi + edx], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D09A5: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(eax + 0x14); /* 0x006D09A8: mov esi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x006D09AB: mov edx, dword ptr [eax + 8] */
    ecx = (uint32_t)MEM8(eax + 0x16B9); /* 0x006D09AE: movzx ecx, byte ptr [eax + 0x16b9] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D09B5: mov byte ptr [esi + edx], cl */
    SET_LO8(ecx, 0x10u); /* 0x006D09B8: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x16BC)); /* 0x006D09BA: sub cl, byte ptr [eax + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D09C0: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D09C3: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D09C3: shr di, cl */
    ecx = MEM32(ebp + (-0x1C)); /* 0x006D09C6: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFF0u; /* 0x006D09C9: add ecx, -0x10 */
    _flag_k = FK_ADD;
    MEM16(eax + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D09CC: mov word ptr [eax + 0x16b8], di */
    _flag_a = (uint32_t)(MEM32(eax + 0x16BC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x16BC) = MEM32(eax + 0x16BC) + ecx; /* 0x006D09D3: add dword ptr [eax + 0x16bc], ecx */
    _flag_k = FK_ADD;
    goto L_006D09F4; /* 0x006D09D9: jmp 0x6d09f4 */
L_006D09DB:
    SET_LO16(edx, MEM16(eax + 0xAC0)); /* 0x006D09DB: mov dx, word ptr [eax + 0xac0] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D09E2: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D09E2: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D09E5: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x006D09EC: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16BC) = ecx; /* 0x006D09EE: mov dword ptr [eax + 0x16bc], ecx */
L_006D09F4:
    ecx = MEM32(eax + 0x16BC); /* 0x006D09F4: mov ecx, dword ptr [eax + 0x16bc] */
    /* cmp ecx, 0xDu */ /* 0x006D09FA: cmp ecx, 0xd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D0A53; /* 0x006D09FD: jle 0x6d0a53 */
L_006D09FF:
    esi = MEM32(eax + 0x8); /* 0x006D09FF: mov esi, dword ptr [eax + 8] */
    edi = ebx + (-0x3); /* 0x006D0A02: lea edi, [ebx - 3] */
    SET_LO16(edx, LO16(edi)); /* 0x006D0A05: mov dx, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0A08: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D0A08: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D0A0B: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(eax + 0x14); /* 0x006D0A12: mov edx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)MEM8(eax + 0x16B8); /* 0x006D0A15: movzx ecx, byte ptr [eax + 0x16b8] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D0A1C: mov byte ptr [esi + edx], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D0A1F: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(eax + 0x14); /* 0x006D0A22: mov esi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x006D0A25: mov edx, dword ptr [eax + 8] */
    ecx = (uint32_t)MEM8(eax + 0x16B9); /* 0x006D0A28: movzx ecx, byte ptr [eax + 0x16b9] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D0A2F: mov byte ptr [esi + edx], cl */
    SET_LO8(ecx, 0x10u); /* 0x006D0A32: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x16BC)); /* 0x006D0A34: sub cl, byte ptr [eax + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D0A3A: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D0A3D: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D0A3D: shr di, cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x16BC)); _flag_b = (uint32_t)(0xFFFFFFF3u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x16BC) = MEM32(eax + 0x16BC) + 0xFFFFFFF3u; /* 0x006D0A40: add dword ptr [eax + 0x16bc], -0xd */
    _flag_k = FK_ADD;
    MEM16(eax + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D0A47: mov word ptr [eax + 0x16b8], di */
    goto L_006D0B5D; /* 0x006D0A4E: jmp 0x6d0b5d */
L_006D0A53:
    edx = ebx + (-0x3); /* 0x006D0A53: lea edx, [ebx - 3] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0A56: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D0A56: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D0A59: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x006D0A60: add ecx, 3 */
    _flag_k = FK_ADD;
    goto L_006D0B57; /* 0x006D0A63: jmp 0x6d0b57 */
L_006D0A68:
    esi = (uint32_t)MEM16(eax + 0xAC6); /* 0x006D0A68: movzx esi, word ptr [eax + 0xac6] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x006D0A6F: sub edx, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = esi; /* 0x006D0A71: mov dword ptr [ebp - 0x1c], esi */
    /* cmp ecx, edx */ /* 0x006D0A74: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D0AD2; /* 0x006D0A76: jle 0x6d0ad2 */
L_006D0A78:
    edi = (uint32_t)MEM16(eax + 0xAC4); /* 0x006D0A78: movzx edi, word ptr [eax + 0xac4] */
    esi = MEM32(eax + 0x8); /* 0x006D0A7F: mov esi, dword ptr [eax + 8] */
    SET_LO16(edx, LO16(edi)); /* 0x006D0A82: mov dx, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0A85: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D0A85: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D0A88: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(eax + 0x14); /* 0x006D0A8F: mov edx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)MEM8(eax + 0x16B8); /* 0x006D0A92: movzx ecx, byte ptr [eax + 0x16b8] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D0A99: mov byte ptr [esi + edx], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D0A9C: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(eax + 0x14); /* 0x006D0A9F: mov esi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x006D0AA2: mov edx, dword ptr [eax + 8] */
    ecx = (uint32_t)MEM8(eax + 0x16B9); /* 0x006D0AA5: movzx ecx, byte ptr [eax + 0x16b9] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D0AAC: mov byte ptr [esi + edx], cl */
    SET_LO8(ecx, 0x10u); /* 0x006D0AAF: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x16BC)); /* 0x006D0AB1: sub cl, byte ptr [eax + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D0AB7: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D0ABA: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D0ABA: shr di, cl */
    ecx = MEM32(ebp + (-0x1C)); /* 0x006D0ABD: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFF0u; /* 0x006D0AC0: add ecx, -0x10 */
    _flag_k = FK_ADD;
    MEM16(eax + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D0AC3: mov word ptr [eax + 0x16b8], di */
    _flag_a = (uint32_t)(MEM32(eax + 0x16BC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x16BC) = MEM32(eax + 0x16BC) + ecx; /* 0x006D0ACA: add dword ptr [eax + 0x16bc], ecx */
    _flag_k = FK_ADD;
    goto L_006D0AEB; /* 0x006D0AD0: jmp 0x6d0aeb */
L_006D0AD2:
    SET_LO16(edx, MEM16(eax + 0xAC4)); /* 0x006D0AD2: mov dx, word ptr [eax + 0xac4] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0AD9: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D0AD9: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D0ADC: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x006D0AE3: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16BC) = ecx; /* 0x006D0AE5: mov dword ptr [eax + 0x16bc], ecx */
L_006D0AEB:
    ecx = MEM32(eax + 0x16BC); /* 0x006D0AEB: mov ecx, dword ptr [eax + 0x16bc] */
    /* cmp ecx, 9 */ /* 0x006D0AF1: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D0B47; /* 0x006D0AF4: jle 0x6d0b47 */
L_006D0AF6:
    esi = MEM32(eax + 0x8); /* 0x006D0AF6: mov esi, dword ptr [eax + 8] */
    edi = ebx + (-0xB); /* 0x006D0AF9: lea edi, [ebx - 0xb] */
    SET_LO16(edx, LO16(edi)); /* 0x006D0AFC: mov dx, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0AFF: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D0AFF: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D0B02: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(eax + 0x14); /* 0x006D0B09: mov edx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)MEM8(eax + 0x16B8); /* 0x006D0B0C: movzx ecx, byte ptr [eax + 0x16b8] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D0B13: mov byte ptr [esi + edx], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D0B16: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(eax + 0x14); /* 0x006D0B19: mov esi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x006D0B1C: mov edx, dword ptr [eax + 8] */
    ecx = (uint32_t)MEM8(eax + 0x16B9); /* 0x006D0B1F: movzx ecx, byte ptr [eax + 0x16b9] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D0B26: mov byte ptr [esi + edx], cl */
    SET_LO8(ecx, 0x10u); /* 0x006D0B29: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x16BC)); /* 0x006D0B2B: sub cl, byte ptr [eax + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D0B31: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D0B34: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D0B34: shr di, cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x16BC)); _flag_b = (uint32_t)(0xFFFFFFF7u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x16BC) = MEM32(eax + 0x16BC) + 0xFFFFFFF7u; /* 0x006D0B37: add dword ptr [eax + 0x16bc], -9 */
    _flag_k = FK_ADD;
    MEM16(eax + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D0B3E: mov word ptr [eax + 0x16b8], di */
    goto L_006D0B5D; /* 0x006D0B45: jmp 0x6d0b5d */
L_006D0B47:
    edx = ebx + (-0xB); /* 0x006D0B47: lea edx, [ebx - 0xb] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0B4A: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D0B4A: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D0B4D: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 7; /* 0x006D0B54: add ecx, 7 */
    _flag_k = FK_ADD;
L_006D0B57:
    MEM32(eax + 0x16BC) = ecx; /* 0x006D0B57: mov dword ptr [eax + 0x16bc], ecx */
L_006D0B5D:
    esi = MEM32(ebp + 0x8); /* 0x006D0B5D: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006D0B60: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x006D0B62: mov ecx, dword ptr [ebp - 0xc] */
    edx = ecx; /* 0x006D0B65: mov edx, ecx */
    /* test esi, esi */ /* 0x006D0B67: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D0B75; /* 0x006D0B69: jne 0x6d0b75 */
L_006D0B6B:
    edi = 0x8Au; /* 0x006D0B6B: mov edi, 0x8a */
    esi = ebx + 0x3; /* 0x006D0B70: lea esi, [ebx + 3] */
    goto L_006D0B8B; /* 0x006D0B73: jmp 0x6d0b8b */
L_006D0B75:
    /* cmp ecx, esi */ /* 0x006D0B75: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D0B83; /* 0x006D0B77: jne 0x6d0b83 */
L_006D0B79:
    edi = 6; /* 0x006D0B79: mov edi, 6 */
    esi = edi + (-0x3); /* 0x006D0B7E: lea esi, [edi - 3] */
    goto L_006D0B8B; /* 0x006D0B81: jmp 0x6d0b8b */
L_006D0B83:
    edi = 7; /* 0x006D0B83: mov edi, 7 */
    esi = edi + (-0x3); /* 0x006D0B88: lea esi, [edi - 3] */
L_006D0B8B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x006D0B8B: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x006D0B8F: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    ecx = MEM32(ebp + 0x8); /* 0x006D0B92: mov ecx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006D06D5; /* 0x006D0B95: jne 0x6d06d5 */
L_006D0B9B:
    edi = POP32_VAL(esp); /* 0x006D0B9B: pop edi */
    esi = POP32_VAL(esp); /* 0x006D0B9C: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D0B9D: pop ebx */
    esp = ebp; /* 0x006D0B9E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D0BA0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D0BA1: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D0BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D0BB0u);

L_006D0BB0:
    PUSH32(esp, esi); /* 0x006D0BB0: push esi */
    esi = ecx; /* 0x006D0BB1: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0xB1C)); /* 0x006D0BB3: push dword ptr [esi + 0xb1c] */
    edx = esi + 0x94; /* 0x006D0BB9: lea edx, [esi + 0x94] */
    RECOMP_CALL(sub_006D05A0); /* 0x006D0BBF: call 0x6d05a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xB28)); /* 0x006D0BC4: push dword ptr [esi + 0xb28] */
    edx = esi + 0x988; /* 0x006D0BCA: lea edx, [esi + 0x988] */
    ecx = esi; /* 0x006D0BD0: mov ecx, esi */
    RECOMP_CALL(sub_006D05A0); /* 0x006D0BD2: call 0x6d05a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006D0BD7: add esp, 8 */
    _flag_k = FK_ADD;
    edx = esi + 0xB30; /* 0x006D0BDA: lea edx, [esi + 0xb30] */
    ecx = esi; /* 0x006D0BE0: mov ecx, esi */
    RECOMP_CALL(sub_006D0390); /* 0x006D0BE2: call 0x6d0390 */
    RECOMP_FLAGS_IN();
    eax = 0x12u; /* 0x006D0BE7: mov eax, 0x12 */
    esp = esp; /* 0x006D0BEC: lea esp, [esp] */
L_006D0BF0:
    ecx = (uint32_t)MEM8(eax + 0x7D4A50); /* 0x006D0BF0: movzx ecx, byte ptr [eax + 0x7d4a50] */
    /* cmp MEM16(esi + ecx * 4 + 0xA7E), 0 */ /* 0x006D0BF7: cmp word ptr [esi + ecx*4 + 0xa7e], 0 */
    _flag_a = (uint32_t)(MEM16(esi + ecx * 4 + 0xA7E)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D0C7A; /* 0x006D0C00: jne 0x6d0c7a */
L_006D0C02:
    ecx = (uint32_t)MEM8(eax + 0x7D4A4F); /* 0x006D0C02: movzx ecx, byte ptr [eax + 0x7d4a4f] */
    /* cmp MEM16(esi + ecx * 4 + 0xA7E), 0 */ /* 0x006D0C09: cmp word ptr [esi + ecx*4 + 0xa7e], 0 */
    _flag_a = (uint32_t)(MEM16(esi + ecx * 4 + 0xA7E)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D0C79; /* 0x006D0C12: jne 0x6d0c79 */
L_006D0C14:
    ecx = (uint32_t)MEM8(eax + 0x7D4A4E); /* 0x006D0C14: movzx ecx, byte ptr [eax + 0x7d4a4e] */
    /* cmp MEM16(esi + ecx * 4 + 0xA7E), 0 */ /* 0x006D0C1B: cmp word ptr [esi + ecx*4 + 0xa7e], 0 */
    _flag_a = (uint32_t)(MEM16(esi + ecx * 4 + 0xA7E)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D0C65; /* 0x006D0C24: jne 0x6d0c65 */
L_006D0C26:
    ecx = (uint32_t)MEM8(eax + 0x7D4A4D); /* 0x006D0C26: movzx ecx, byte ptr [eax + 0x7d4a4d] */
    /* cmp MEM16(esi + ecx * 4 + 0xA7E), 0 */ /* 0x006D0C2D: cmp word ptr [esi + ecx*4 + 0xa7e], 0 */
    _flag_a = (uint32_t)(MEM16(esi + ecx * 4 + 0xA7E)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D0C51; /* 0x006D0C36: jne 0x6d0c51 */
L_006D0C38:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x006D0C38: sub eax, 4 */
    _flag_k = FK_CMP;
    /* cmp eax, 3 */ /* 0x006D0C3B: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_006D0BF0; /* 0x006D0C3E: jge 0x6d0bf0 */
L_006D0C40:
    ecx = eax * 2 + 0x11; /* 0x006D0C40: lea ecx, [eax*2 + 0x11] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006D0C47: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x16A8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x16A8) = MEM32(esi + 0x16A8) + ecx; /* 0x006D0C49: add dword ptr [esi + 0x16a8], ecx */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006D0C4F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D0C50: ret  */
L_006D0C51:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x006D0C51: sub eax, 3 */
    _flag_k = FK_CMP;
    ecx = eax * 2 + 0x11; /* 0x006D0C54: lea ecx, [eax*2 + 0x11] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006D0C5B: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x16A8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x16A8) = MEM32(esi + 0x16A8) + ecx; /* 0x006D0C5D: add dword ptr [esi + 0x16a8], ecx */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006D0C63: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D0C64: ret  */
L_006D0C65:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x006D0C65: sub eax, 2 */
    _flag_k = FK_CMP;
    ecx = eax * 2 + 0x11; /* 0x006D0C68: lea ecx, [eax*2 + 0x11] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006D0C6F: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x16A8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x16A8) = MEM32(esi + 0x16A8) + ecx; /* 0x006D0C71: add dword ptr [esi + 0x16a8], ecx */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006D0C77: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D0C78: ret  */
L_006D0C79:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006D0C79: dec eax */
    _flag_k = FK_DEC;
L_006D0C7A:
    ecx = eax * 2 + 0x11; /* 0x006D0C7A: lea ecx, [eax*2 + 0x11] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x006D0C81: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x16A8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x16A8) = MEM32(esi + 0x16A8) + ecx; /* 0x006D0C83: add dword ptr [esi + 0x16a8], ecx */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x006D0C89: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D0C8A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D0C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D0C90u);

L_006D0C90:
    PUSH32(esp, ebp); /* 0x006D0C90: push ebp */
    ebp = esp; /* 0x006D0C91: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006D0C93: push ecx */
    PUSH32(esp, ebx); /* 0x006D0C94: push ebx */
    PUSH32(esp, esi); /* 0x006D0C95: push esi */
    esi = ecx; /* 0x006D0C96: mov esi, ecx */
    eax = edx; /* 0x006D0C98: mov eax, edx */
    PUSH32(esp, edi); /* 0x006D0C9A: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x006D0C9B: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(esi + 0x16BC); /* 0x006D0C9E: mov ecx, dword ptr [esi + 0x16bc] */
    /* cmp ecx, 0xBu */ /* 0x006D0CA4: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D0CFD; /* 0x006D0CA7: jle 0x6d0cfd */
L_006D0CA9:
    edx = MEM32(esi + 0x14); /* 0x006D0CA9: mov edx, dword ptr [esi + 0x14] */
    edi = eax + (-0x101); /* 0x006D0CAC: lea edi, [eax - 0x101] */
    SET_LO16(eax, LO16(edi)); /* 0x006D0CB2: mov ax, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0CB5: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006D0CB5: shl ax, cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16;
    MEM16(esi + 0x16B8) = (uint16_t)(MEM16(esi + 0x16B8) | LO16(eax)); /* 0x006D0CB8: or word ptr [esi + 0x16b8], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(esi + 0x8); /* 0x006D0CBF: mov ecx, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(esi + 0x16B8); /* 0x006D0CC2: movzx eax, byte ptr [esi + 0x16b8] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D0CC9: mov byte ptr [edx + ecx], al */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D0CCC: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    edx = MEM32(esi + 0x14); /* 0x006D0CCF: mov edx, dword ptr [esi + 0x14] */
    ecx = MEM32(esi + 0x8); /* 0x006D0CD2: mov ecx, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(esi + 0x16B9); /* 0x006D0CD5: movzx eax, byte ptr [esi + 0x16b9] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D0CDC: mov byte ptr [edx + ecx], al */
    SET_LO8(ecx, 0x10u); /* 0x006D0CDF: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(esi + 0x16BC)); /* 0x006D0CE1: sub cl, byte ptr [esi + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D0CE7: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D0CEA: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D0CEA: shr di, cl */
    _flag_a = (uint32_t)(MEM32(esi + 0x16BC)); _flag_b = (uint32_t)(0xFFFFFFF5u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x16BC) = MEM32(esi + 0x16BC) + 0xFFFFFFF5u; /* 0x006D0CED: add dword ptr [esi + 0x16bc], -0xb */
    _flag_k = FK_ADD;
    MEM16(esi + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D0CF4: mov word ptr [esi + 0x16b8], di */
    goto L_006D0D15; /* 0x006D0CFB: jmp 0x6d0d15 */
L_006D0CFD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFEFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFEFFu; /* 0x006D0CFD: add eax, 0xfffffeff */
    _flag_k = FK_ADD;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0D02: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006D0D02: shl ax, cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16;
    MEM16(esi + 0x16B8) = (uint16_t)(MEM16(esi + 0x16B8) | LO16(eax)); /* 0x006D0D05: or word ptr [esi + 0x16b8], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = ecx + 0x5; /* 0x006D0D0C: lea eax, [ecx + 5] */
    MEM32(esi + 0x16BC) = eax; /* 0x006D0D0F: mov dword ptr [esi + 0x16bc], eax */
L_006D0D15:
    ecx = MEM32(esi + 0x16BC); /* 0x006D0D15: mov ecx, dword ptr [esi + 0x16bc] */
    /* cmp ecx, 0xBu */ /* 0x006D0D1B: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D0D72; /* 0x006D0D1E: jle 0x6d0d72 */
L_006D0D20:
    edi = MEM32(ebp + 0x8); /* 0x006D0D20: mov edi, dword ptr [ebp + 8] */
    edx = MEM32(esi + 0x14); /* 0x006D0D23: mov edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x006D0D26: dec edi */
    _flag_k = FK_DEC;
    SET_LO16(eax, LO16(edi)); /* 0x006D0D27: mov ax, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0D2A: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006D0D2A: shl ax, cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16;
    MEM16(esi + 0x16B8) = (uint16_t)(MEM16(esi + 0x16B8) | LO16(eax)); /* 0x006D0D2D: or word ptr [esi + 0x16b8], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(esi + 0x8); /* 0x006D0D34: mov ecx, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(esi + 0x16B8); /* 0x006D0D37: movzx eax, byte ptr [esi + 0x16b8] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D0D3E: mov byte ptr [edx + ecx], al */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D0D41: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    edx = MEM32(esi + 0x14); /* 0x006D0D44: mov edx, dword ptr [esi + 0x14] */
    ecx = MEM32(esi + 0x8); /* 0x006D0D47: mov ecx, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(esi + 0x16B9); /* 0x006D0D4A: movzx eax, byte ptr [esi + 0x16b9] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D0D51: mov byte ptr [edx + ecx], al */
    SET_LO8(ecx, 0x10u); /* 0x006D0D54: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(esi + 0x16BC)); /* 0x006D0D56: sub cl, byte ptr [esi + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D0D5C: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D0D5F: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D0D5F: shr di, cl */
    _flag_a = (uint32_t)(MEM32(esi + 0x16BC)); _flag_b = (uint32_t)(0xFFFFFFF5u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x16BC) = MEM32(esi + 0x16BC) + 0xFFFFFFF5u; /* 0x006D0D62: add dword ptr [esi + 0x16bc], -0xb */
    _flag_k = FK_ADD;
    MEM16(esi + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D0D69: mov word ptr [esi + 0x16b8], di */
    goto L_006D0D89; /* 0x006D0D70: jmp 0x6d0d89 */
L_006D0D72:
    eax = MEM32(ebp + 0x8); /* 0x006D0D72: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006D0D75: dec eax */
    _flag_k = FK_DEC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0D76: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006D0D76: shl ax, cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16;
    MEM16(esi + 0x16B8) = (uint16_t)(MEM16(esi + 0x16B8) | LO16(eax)); /* 0x006D0D79: or word ptr [esi + 0x16b8], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = ecx + 0x5; /* 0x006D0D80: lea eax, [ecx + 5] */
    MEM32(esi + 0x16BC) = eax; /* 0x006D0D83: mov dword ptr [esi + 0x16bc], eax */
L_006D0D89:
    ecx = MEM32(esi + 0x16BC); /* 0x006D0D89: mov ecx, dword ptr [esi + 0x16bc] */
    /* cmp ecx, 0xCu */ /* 0x006D0D8F: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D0DE8; /* 0x006D0D92: jle 0x6d0de8 */
L_006D0D94:
    edi = MEM32(ebp + 0xC); /* 0x006D0D94: mov edi, dword ptr [ebp + 0xc] */
    edx = MEM32(esi + 0x14); /* 0x006D0D97: mov edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFCu; /* 0x006D0D9A: add edi, -4 */
    _flag_k = FK_ADD;
    SET_LO16(eax, LO16(edi)); /* 0x006D0D9D: mov ax, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0DA0: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006D0DA0: shl ax, cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16;
    MEM16(esi + 0x16B8) = (uint16_t)(MEM16(esi + 0x16B8) | LO16(eax)); /* 0x006D0DA3: or word ptr [esi + 0x16b8], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(esi + 0x8); /* 0x006D0DAA: mov ecx, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(esi + 0x16B8); /* 0x006D0DAD: movzx eax, byte ptr [esi + 0x16b8] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D0DB4: mov byte ptr [edx + ecx], al */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D0DB7: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    edx = MEM32(esi + 0x14); /* 0x006D0DBA: mov edx, dword ptr [esi + 0x14] */
    ecx = MEM32(esi + 0x8); /* 0x006D0DBD: mov ecx, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(esi + 0x16B9); /* 0x006D0DC0: movzx eax, byte ptr [esi + 0x16b9] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D0DC7: mov byte ptr [edx + ecx], al */
    SET_LO8(ecx, 0x10u); /* 0x006D0DCA: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(esi + 0x16BC)); /* 0x006D0DCC: sub cl, byte ptr [esi + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D0DD2: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D0DD5: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D0DD5: shr di, cl */
    _flag_a = (uint32_t)(MEM32(esi + 0x16BC)); _flag_b = (uint32_t)(0xFFFFFFF4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x16BC) = MEM32(esi + 0x16BC) + 0xFFFFFFF4u; /* 0x006D0DD8: add dword ptr [esi + 0x16bc], -0xc */
    _flag_k = FK_ADD;
    MEM16(esi + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D0DDF: mov word ptr [esi + 0x16b8], di */
    goto L_006D0E01; /* 0x006D0DE6: jmp 0x6d0e01 */
L_006D0DE8:
    eax = MEM32(ebp + 0xC); /* 0x006D0DE8: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x006D0DEB: add eax, -4 */
    _flag_k = FK_ADD;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0DEE: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006D0DEE: shl ax, cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16;
    MEM16(esi + 0x16B8) = (uint16_t)(MEM16(esi + 0x16B8) | LO16(eax)); /* 0x006D0DF1: or word ptr [esi + 0x16b8], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = ecx + 0x4; /* 0x006D0DF8: lea eax, [ecx + 4] */
    MEM32(esi + 0x16BC) = eax; /* 0x006D0DFB: mov dword ptr [esi + 0x16bc], eax */
L_006D0E01:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006D0E01: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x006D0E03: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D0E9D; /* 0x006D0E06: jle 0x6d0e9d */
L_006D0E0C:
    esp = esp; /* 0x006D0E0C: lea esp, [esp] */
L_006D0E10:
    ecx = MEM32(esi + 0x16BC); /* 0x006D0E10: mov ecx, dword ptr [esi + 0x16bc] */
    eax = (uint32_t)MEM8(ebx + 0x7D4A50); /* 0x006D0E16: movzx eax, byte ptr [ebx + 0x7d4a50] */
    /* cmp ecx, 0xDu */ /* 0x006D0E1D: cmp ecx, 0xd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D0E78; /* 0x006D0E20: jle 0x6d0e78 */
L_006D0E22:
    edi = (uint32_t)MEM16(esi + eax * 4 + 0xA7E); /* 0x006D0E22: movzx edi, word ptr [esi + eax*4 + 0xa7e] */
    edx = MEM32(esi + 0x14); /* 0x006D0E2A: mov edx, dword ptr [esi + 0x14] */
    SET_LO16(eax, LO16(edi)); /* 0x006D0E2D: mov ax, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0E30: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006D0E30: shl ax, cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16;
    MEM16(esi + 0x16B8) = (uint16_t)(MEM16(esi + 0x16B8) | LO16(eax)); /* 0x006D0E33: or word ptr [esi + 0x16b8], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(esi + 0x8); /* 0x006D0E3A: mov ecx, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(esi + 0x16B8); /* 0x006D0E3D: movzx eax, byte ptr [esi + 0x16b8] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D0E44: mov byte ptr [edx + ecx], al */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D0E47: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    edx = MEM32(esi + 0x14); /* 0x006D0E4A: mov edx, dword ptr [esi + 0x14] */
    ecx = MEM32(esi + 0x8); /* 0x006D0E4D: mov ecx, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(esi + 0x16B9); /* 0x006D0E50: movzx eax, byte ptr [esi + 0x16b9] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D0E57: mov byte ptr [edx + ecx], al */
    SET_LO8(ecx, 0x10u); /* 0x006D0E5A: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(esi + 0x16BC)); /* 0x006D0E5C: sub cl, byte ptr [esi + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D0E62: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D0E65: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D0E65: shr di, cl */
    _flag_a = (uint32_t)(MEM32(esi + 0x16BC)); _flag_b = (uint32_t)(0xFFFFFFF3u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x16BC) = MEM32(esi + 0x16BC) + 0xFFFFFFF3u; /* 0x006D0E68: add dword ptr [esi + 0x16bc], -0xd */
    _flag_k = FK_ADD;
    MEM16(esi + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D0E6F: mov word ptr [esi + 0x16b8], di */
    goto L_006D0E93; /* 0x006D0E76: jmp 0x6d0e93 */
L_006D0E78:
    SET_LO16(eax, MEM16(esi + eax * 4 + 0xA7E)); /* 0x006D0E78: mov ax, word ptr [esi + eax*4 + 0xa7e] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0E80: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006D0E80: shl ax, cl */
    _flag_a = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x16B8) | LO16(eax))) << 16;
    MEM16(esi + 0x16B8) = (uint16_t)(MEM16(esi + 0x16B8) | LO16(eax)); /* 0x006D0E83: or word ptr [esi + 0x16b8], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = ecx + 0x3; /* 0x006D0E8A: lea eax, [ecx + 3] */
    MEM32(esi + 0x16BC) = eax; /* 0x006D0E8D: mov dword ptr [esi + 0x16bc], eax */
L_006D0E93:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x006D0E93: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + 0xC) */ /* 0x006D0E94: cmp ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006D0E10; /* 0x006D0E97: jl 0x6d0e10 */
L_006D0E9D:
    eax = MEM32(ebp + (-0x4)); /* 0x006D0E9D: mov eax, dword ptr [ebp - 4] */
    edx = esi + 0x94; /* 0x006D0EA0: lea edx, [esi + 0x94] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006D0EA6: dec eax */
    _flag_k = FK_DEC;
    ecx = esi; /* 0x006D0EA7: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006D0EA9: push eax */
    RECOMP_CALL(sub_006D0690); /* 0x006D0EAA: call 0x6d0690 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x006D0EAF: mov eax, dword ptr [ebp + 8] */
    edx = esi + 0x988; /* 0x006D0EB2: lea edx, [esi + 0x988] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006D0EB8: dec eax */
    _flag_k = FK_DEC;
    ecx = esi; /* 0x006D0EB9: mov ecx, esi */
    PUSH32(esp, eax); /* 0x006D0EBB: push eax */
    RECOMP_CALL(sub_006D0690); /* 0x006D0EBC: call 0x6d0690 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006D0EC1: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006D0EC4: pop edi */
    esi = POP32_VAL(esp); /* 0x006D0EC5: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D0EC6: pop ebx */
    esp = ebp; /* 0x006D0EC7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D0EC9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D0ECA: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D0ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D0ED0u);

L_006D0ED0:
    PUSH32(esp, ebp); /* 0x006D0ED0: push ebp */
    ebp = esp; /* 0x006D0ED1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006D0ED3: push ebx */
    PUSH32(esp, edi); /* 0x006D0ED4: push edi */
    edi = ecx; /* 0x006D0ED5: mov edi, ecx */
    ebx = edx; /* 0x006D0ED7: mov ebx, edx */
    ecx = MEM32(edi + 0x16BC); /* 0x006D0ED9: mov ecx, dword ptr [edi + 0x16bc] */
    /* cmp ecx, 0xDu */ /* 0x006D0EDF: cmp ecx, 0xd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D0F49; /* 0x006D0EE2: jle 0x6d0f49 */
L_006D0EE4:
    edx = MEM32(edi + 0x8); /* 0x006D0EE4: mov edx, dword ptr [edi + 8] */
    PUSH32(esp, esi); /* 0x006D0EE7: push esi */
    esi = MEM32(ebp + 0xC); /* 0x006D0EE8: mov esi, dword ptr [ebp + 0xc] */
    SET_LO16(eax, LO16(esi)); /* 0x006D0EEB: mov ax, si */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0EEE: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006D0EEE: shl ax, cl */
    ecx = MEM32(edi + 0x14); /* 0x006D0EF1: mov ecx, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)((MEM16(edi + 0x16B8) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(edi + 0x16B8) | LO16(eax))) << 16;
    MEM16(edi + 0x16B8) = (uint16_t)(MEM16(edi + 0x16B8) | LO16(eax)); /* 0x006D0EF4: or word ptr [edi + 0x16b8], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = (uint32_t)MEM8(edi + 0x16B8); /* 0x006D0EFB: movzx eax, byte ptr [edi + 0x16b8] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D0F02: mov byte ptr [edx + ecx], al */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x14) = MEM32(edi + 0x14) + 1; /* 0x006D0F05: inc dword ptr [edi + 0x14] */
    _flag_k = FK_INC;
    ecx = MEM32(edi + 0x8); /* 0x006D0F08: mov ecx, dword ptr [edi + 8] */
    edx = MEM32(edi + 0x14); /* 0x006D0F0B: mov edx, dword ptr [edi + 0x14] */
    eax = (uint32_t)MEM8(edi + 0x16B9); /* 0x006D0F0E: movzx eax, byte ptr [edi + 0x16b9] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D0F15: mov byte ptr [edx + ecx], al */
    SET_LO8(ecx, 0x10u); /* 0x006D0F18: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(edi + 0x16BC)); /* 0x006D0F1A: sub cl, byte ptr [edi + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = ebx; /* 0x006D0F20: mov edx, ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x14) = MEM32(edi + 0x14) + 1; /* 0x006D0F22: inc dword ptr [edi + 0x14] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edi + 0x16BC)); _flag_b = (uint32_t)(0xFFFFFFF3u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x16BC) = MEM32(edi + 0x16BC) + 0xFFFFFFF3u; /* 0x006D0F25: add dword ptr [edi + 0x16bc], -0xd */
    _flag_k = FK_ADD;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(esi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D0F2C: shr si, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(esi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(esi, LO16(esi) >> ((LO8(ecx)) & 31)); /* 0x006D0F2C: shr si, cl */
    MEM16(edi + 0x16B8) = (uint16_t)(LO16(esi)); /* 0x006D0F2F: mov word ptr [edi + 0x16b8], si */
    esi = POP32_VAL(esp); /* 0x006D0F36: pop esi */
    PUSH32(esp, ecx); /* 0x006D0F37: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D0F38: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x006D0F3B: mov ecx, edi */
    RECOMP_CALL(sub_006D16D0); /* 0x006D0F3D: call 0x6d16d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006D0F42: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006D0F45: pop edi */
    ebx = POP32_VAL(esp); /* 0x006D0F46: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006D0F47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D0F48: ret  */
L_006D0F49:
    eax = MEM32(ebp + 0xC); /* 0x006D0F49: mov eax, dword ptr [ebp + 0xc] */
    edx = ebx; /* 0x006D0F4C: mov edx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D0F4E: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006D0F4E: shl ax, cl */
    _flag_a = (uint32_t)((MEM16(edi + 0x16B8) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(edi + 0x16B8) | LO16(eax))) << 16;
    MEM16(edi + 0x16B8) = (uint16_t)(MEM16(edi + 0x16B8) | LO16(eax)); /* 0x006D0F51: or word ptr [edi + 0x16b8], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = ecx + 0x3; /* 0x006D0F58: lea eax, [ecx + 3] */
    PUSH32(esp, ecx); /* 0x006D0F5B: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D0F5C: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x006D0F5F: mov ecx, edi */
    MEM32(edi + 0x16BC) = eax; /* 0x006D0F61: mov dword ptr [edi + 0x16bc], eax */
    RECOMP_CALL(sub_006D16D0); /* 0x006D0F67: call 0x6d16d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006D0F6C: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006D0F6F: pop edi */
    ebx = POP32_VAL(esp); /* 0x006D0F70: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006D0F71: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D0F72: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D0F80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D0F80u);

L_006D0F80:
    PUSH32(esp, ebp); /* 0x006D0F80: push ebp */
    ebp = esp; /* 0x006D0F81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006D0F83: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D0F86: push ebx */
    PUSH32(esp, esi); /* 0x006D0F87: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006D0F88: mov esi, dword ptr [ebp + 8] */
    ebx = edx; /* 0x006D0F8B: mov ebx, edx */
    PUSH32(esp, edi); /* 0x006D0F8D: push edi */
    edi = ecx; /* 0x006D0F8E: mov edi, ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x006D0F90: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = 0; /* 0x006D0F93: mov dword ptr [ebp - 8], 0 */
    /* cmp MEM32(edi + 0x84), 0 */ /* 0x006D0F9A: cmp dword ptr [edi + 0x84], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x84)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D0FF8; /* 0x006D0FA1: jle 0x6d0ff8 */
L_006D0FA3:
    ebx = MEM32(edi); /* 0x006D0FA3: mov ebx, dword ptr [edi] */
    /* cmp MEM32(ebx + 0x2C), 2 */ /* 0x006D0FA5: cmp dword ptr [ebx + 0x2c], 2 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x2C)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D0FB3; /* 0x006D0FA9: jne 0x6d0fb3 */
L_006D0FAB:
    RECOMP_CALL(sub_006D1580); /* 0x006D0FAB: call 0x6d1580 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x2C) = eax; /* 0x006D0FB0: mov dword ptr [ebx + 0x2c], eax */
L_006D0FB3:
    edx = edi + 0xB18; /* 0x006D0FB3: lea edx, [edi + 0xb18] */
    ecx = edi; /* 0x006D0FB9: mov ecx, edi */
    RECOMP_CALL(sub_006D0390); /* 0x006D0FBB: call 0x6d0390 */
    RECOMP_FLAGS_IN();
    edx = edi + 0xB24; /* 0x006D0FC0: lea edx, [edi + 0xb24] */
    ecx = edi; /* 0x006D0FC6: mov ecx, edi */
    RECOMP_CALL(sub_006D0390); /* 0x006D0FC8: call 0x6d0390 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x006D0FCD: mov ecx, edi */
    RECOMP_CALL(sub_006D0BB0); /* 0x006D0FCF: call 0x6d0bb0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x16A8); /* 0x006D0FD4: mov ecx, dword ptr [edi + 0x16a8] */
    edx = MEM32(edi + 0x16AC); /* 0x006D0FDA: mov edx, dword ptr [edi + 0x16ac] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xAu; /* 0x006D0FE0: add ecx, 0xa */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x4)); /* 0x006D0FE3: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xAu; /* 0x006D0FE6: add edx, 0xa */
    _flag_k = FK_ADD;
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x006D0FE9: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x006D0FE9: shr ecx, 3 */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x006D0FEC: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x006D0FEC: shr edx, 3 */
    MEM32(ebp + (-0x8)) = eax; /* 0x006D0FEF: mov dword ptr [ebp - 8], eax */
    /* cmp edx, ecx */ /* 0x006D0FF2: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D0FFD; /* 0x006D0FF4: ja 0x6d0ffd */
L_006D0FF6:
    goto L_006D0FFB; /* 0x006D0FF6: jmp 0x6d0ffb */
L_006D0FF8:
    edx = esi + 0x5; /* 0x006D0FF8: lea edx, [esi + 5] */
L_006D0FFB:
    ecx = edx; /* 0x006D0FFB: mov ecx, edx */
L_006D0FFD:
    eax = esi + 0x4; /* 0x006D0FFD: lea eax, [esi + 4] */
    /* cmp eax, ecx */ /* 0x006D1000: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D101F; /* 0x006D1002: ja 0x6d101f */
L_006D1004:
    /* test ebx, ebx */ /* 0x006D1004: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D101F; /* 0x006D1006: je 0x6d101f */
L_006D1008:
    ebx = MEM32(ebp + 0xC); /* 0x006D1008: mov ebx, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x006D100B: mov ecx, edi */
    edx = MEM32(ebp + (-0x4)); /* 0x006D100D: mov edx, dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x006D1010: push ebx */
    PUSH32(esp, esi); /* 0x006D1011: push esi */
    RECOMP_CALL(sub_006D0ED0); /* 0x006D1012: call 0x6d0ed0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006D1017: add esp, 8 */
    _flag_k = FK_ADD;
    goto L_006D1169; /* 0x006D101A: jmp 0x6d1169 */
L_006D101F:
    /* cmp MEM32(edi + 0x88), 4 */ /* 0x006D101F: cmp dword ptr [edi + 0x88], 4 */
    _flag_a = (uint32_t)(MEM32(edi + 0x88)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D10E0; /* 0x006D1026: je 0x6d10e0 */
L_006D102C:
    /* cmp edx, ecx */ /* 0x006D102C: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D10E0; /* 0x006D102E: je 0x6d10e0 */
L_006D1034:
    ecx = MEM32(edi + 0x16BC); /* 0x006D1034: mov ecx, dword ptr [edi + 0x16bc] */
    ebx = MEM32(ebp + 0xC); /* 0x006D103A: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 0xDu */ /* 0x006D103D: cmp ecx, 0xd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D1093; /* 0x006D1040: jle 0x6d1093 */
L_006D1042:
    edx = MEM32(edi + 0x14); /* 0x006D1042: mov edx, dword ptr [edi + 0x14] */
    esi = ebx + 0x4; /* 0x006D1045: lea esi, [ebx + 4] */
    SET_LO16(eax, LO16(esi)); /* 0x006D1048: mov ax, si */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D104B: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006D104B: shl ax, cl */
    _flag_a = (uint32_t)((MEM16(edi + 0x16B8) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(edi + 0x16B8) | LO16(eax))) << 16;
    MEM16(edi + 0x16B8) = (uint16_t)(MEM16(edi + 0x16B8) | LO16(eax)); /* 0x006D104E: or word ptr [edi + 0x16b8], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(edi + 0x8); /* 0x006D1055: mov ecx, dword ptr [edi + 8] */
    eax = (uint32_t)MEM8(edi + 0x16B8); /* 0x006D1058: movzx eax, byte ptr [edi + 0x16b8] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D105F: mov byte ptr [edx + ecx], al */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x14) = MEM32(edi + 0x14) + 1; /* 0x006D1062: inc dword ptr [edi + 0x14] */
    _flag_k = FK_INC;
    edx = MEM32(edi + 0x14); /* 0x006D1065: mov edx, dword ptr [edi + 0x14] */
    ecx = MEM32(edi + 0x8); /* 0x006D1068: mov ecx, dword ptr [edi + 8] */
    eax = (uint32_t)MEM8(edi + 0x16B9); /* 0x006D106B: movzx eax, byte ptr [edi + 0x16b9] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D1072: mov byte ptr [edx + ecx], al */
    SET_LO8(ecx, 0x10u); /* 0x006D1075: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(edi + 0x16BC)); /* 0x006D1077: sub cl, byte ptr [edi + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x14) = MEM32(edi + 0x14) + 1; /* 0x006D107D: inc dword ptr [edi + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(esi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D1080: shr si, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(esi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(esi, LO16(esi) >> ((LO8(ecx)) & 31)); /* 0x006D1080: shr si, cl */
    _flag_a = (uint32_t)(MEM32(edi + 0x16BC)); _flag_b = (uint32_t)(0xFFFFFFF3u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x16BC) = MEM32(edi + 0x16BC) + 0xFFFFFFF3u; /* 0x006D1083: add dword ptr [edi + 0x16bc], -0xd */
    _flag_k = FK_ADD;
    MEM16(edi + 0x16B8) = (uint16_t)(LO16(esi)); /* 0x006D108A: mov word ptr [edi + 0x16b8], si */
    goto L_006D10A9; /* 0x006D1091: jmp 0x6d10a9 */
L_006D1093:
    eax = ebx + 0x4; /* 0x006D1093: lea eax, [ebx + 4] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D1096: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006D1096: shl ax, cl */
    _flag_a = (uint32_t)((MEM16(edi + 0x16B8) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(edi + 0x16B8) | LO16(eax))) << 16;
    MEM16(edi + 0x16B8) = (uint16_t)(MEM16(edi + 0x16B8) | LO16(eax)); /* 0x006D1099: or word ptr [edi + 0x16b8], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = ecx + 0x3; /* 0x006D10A0: lea eax, [ecx + 3] */
    MEM32(edi + 0x16BC) = eax; /* 0x006D10A3: mov dword ptr [edi + 0x16bc], eax */
L_006D10A9:
    eax = MEM32(ebp + (-0x8)); /* 0x006D10A9: mov eax, dword ptr [ebp - 8] */
    ecx = edi; /* 0x006D10AC: mov ecx, edi */
    edx = MEM32(edi + 0xB1C); /* 0x006D10AE: mov edx, dword ptr [edi + 0xb1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006D10B4: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x006D10B5: push eax */
    eax = MEM32(edi + 0xB28); /* 0x006D10B6: mov eax, dword ptr [edi + 0xb28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006D10BC: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006D10BD: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x006D10BE: push eax */
    RECOMP_CALL(sub_006D0C90); /* 0x006D10BF: call 0x6d0c90 */
    RECOMP_FLAGS_IN();
    eax = edi + 0x988; /* 0x006D10C4: lea eax, [edi + 0x988] */
    ecx = edi; /* 0x006D10CA: mov ecx, edi */
    PUSH32(esp, eax); /* 0x006D10CC: push eax */
    edx = edi + 0x94; /* 0x006D10CD: lea edx, [edi + 0x94] */
    RECOMP_CALL(sub_006D1180); /* 0x006D10D3: call 0x6d1180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006D10D8: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_006D1169; /* 0x006D10DB: jmp 0x6d1169 */
L_006D10E0:
    ecx = MEM32(edi + 0x16BC); /* 0x006D10E0: mov ecx, dword ptr [edi + 0x16bc] */
    ebx = MEM32(ebp + 0xC); /* 0x006D10E6: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 0xDu */ /* 0x006D10E9: cmp ecx, 0xd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D113F; /* 0x006D10EC: jle 0x6d113f */
L_006D10EE:
    edx = MEM32(edi + 0x14); /* 0x006D10EE: mov edx, dword ptr [edi + 0x14] */
    esi = ebx + 0x2; /* 0x006D10F1: lea esi, [ebx + 2] */
    SET_LO16(eax, LO16(esi)); /* 0x006D10F4: mov ax, si */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D10F7: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006D10F7: shl ax, cl */
    _flag_a = (uint32_t)((MEM16(edi + 0x16B8) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(edi + 0x16B8) | LO16(eax))) << 16;
    MEM16(edi + 0x16B8) = (uint16_t)(MEM16(edi + 0x16B8) | LO16(eax)); /* 0x006D10FA: or word ptr [edi + 0x16b8], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(edi + 0x8); /* 0x006D1101: mov ecx, dword ptr [edi + 8] */
    eax = (uint32_t)MEM8(edi + 0x16B8); /* 0x006D1104: movzx eax, byte ptr [edi + 0x16b8] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D110B: mov byte ptr [edx + ecx], al */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x14) = MEM32(edi + 0x14) + 1; /* 0x006D110E: inc dword ptr [edi + 0x14] */
    _flag_k = FK_INC;
    edx = MEM32(edi + 0x14); /* 0x006D1111: mov edx, dword ptr [edi + 0x14] */
    ecx = MEM32(edi + 0x8); /* 0x006D1114: mov ecx, dword ptr [edi + 8] */
    eax = (uint32_t)MEM8(edi + 0x16B9); /* 0x006D1117: movzx eax, byte ptr [edi + 0x16b9] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D111E: mov byte ptr [edx + ecx], al */
    SET_LO8(ecx, 0x10u); /* 0x006D1121: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(edi + 0x16BC)); /* 0x006D1123: sub cl, byte ptr [edi + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x14) = MEM32(edi + 0x14) + 1; /* 0x006D1129: inc dword ptr [edi + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(esi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D112C: shr si, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(esi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(esi, LO16(esi) >> ((LO8(ecx)) & 31)); /* 0x006D112C: shr si, cl */
    _flag_a = (uint32_t)(MEM32(edi + 0x16BC)); _flag_b = (uint32_t)(0xFFFFFFF3u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x16BC) = MEM32(edi + 0x16BC) + 0xFFFFFFF3u; /* 0x006D112F: add dword ptr [edi + 0x16bc], -0xd */
    _flag_k = FK_ADD;
    MEM16(edi + 0x16B8) = (uint16_t)(LO16(esi)); /* 0x006D1136: mov word ptr [edi + 0x16b8], si */
    goto L_006D1155; /* 0x006D113D: jmp 0x6d1155 */
L_006D113F:
    eax = ebx + 0x2; /* 0x006D113F: lea eax, [ebx + 2] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D1142: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x006D1142: shl ax, cl */
    _flag_a = (uint32_t)((MEM16(edi + 0x16B8) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(edi + 0x16B8) | LO16(eax))) << 16;
    MEM16(edi + 0x16B8) = (uint16_t)(MEM16(edi + 0x16B8) | LO16(eax)); /* 0x006D1145: or word ptr [edi + 0x16b8], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = ecx + 0x3; /* 0x006D114C: lea eax, [ecx + 3] */
    MEM32(edi + 0x16BC) = eax; /* 0x006D114F: mov dword ptr [edi + 0x16bc], eax */
L_006D1155:
    PUSH32(esp, 0x007D5170u); /* 0x006D1155: push 0x7d5170 */
    edx = 0x007D4CF0u; /* 0x006D115A: mov edx, 0x7d4cf0 */
    ecx = edi; /* 0x006D115F: mov ecx, edi */
    RECOMP_CALL(sub_006D1180); /* 0x006D1161: call 0x6d1180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D1166: add esp, 4 */
    _flag_k = FK_ADD;
L_006D1169:
    ecx = edi; /* 0x006D1169: mov ecx, edi */
    RECOMP_CALL(sub_006CFF70); /* 0x006D116B: call 0x6cff70 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x006D1170: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D1179; /* 0x006D1172: je 0x6d1179 */
L_006D1174:
    RECOMP_CALL(sub_006D1670); /* 0x006D1174: call 0x6d1670 */
    RECOMP_FLAGS_IN();
L_006D1179:
    edi = POP32_VAL(esp); /* 0x006D1179: pop edi */
    esi = POP32_VAL(esp); /* 0x006D117A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D117B: pop ebx */
    esp = ebp; /* 0x006D117C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D117E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D117F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D1180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1180u);

L_006D1180:
    PUSH32(esp, ebp); /* 0x006D1180: push ebp */
    ebp = esp; /* 0x006D1181: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x006D1183: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D1186: push ebx */
    ebx = edx; /* 0x006D1187: mov ebx, edx */
    eax = ecx; /* 0x006D1189: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D118B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x006D118D: mov dword ptr [ebp - 4], ebx */
    PUSH32(esp, esi); /* 0x006D1190: push esi */
    PUSH32(esp, edi); /* 0x006D1191: push edi */
    esi = edx + 0x10; /* 0x006D1192: lea esi, [edx + 0x10] */
    /* cmp MEM32(eax + 0x16A0), edx */ /* 0x006D1195: cmp dword ptr [eax + 0x16a0], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x16A0)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D14DE; /* 0x006D119B: je 0x6d14de */
L_006D11A1:
    goto L_006D11B0; /* 0x006D11A1: jmp 0x6d11b0 */
L_006D11B0:
    ecx = MEM32(eax + 0x16A4); /* 0x006D11B0: mov ecx, dword ptr [eax + 0x16a4] */
    ebx = (uint32_t)MEM16(ecx + edx * 2); /* 0x006D11B6: movzx ebx, word ptr [ecx + edx*2] */
    ecx = MEM32(eax + 0x1698); /* 0x006D11BA: mov ecx, dword ptr [eax + 0x1698] */
    edi = (uint32_t)MEM8(edx + ecx); /* 0x006D11C0: movzx edi, byte ptr [edx + ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006D11C4: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = edi; /* 0x006D11C5: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x14)) = edx; /* 0x006D11C8: mov dword ptr [ebp - 0x14], edx */
    /* test ebx, ebx */ /* 0x006D11CB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D125B; /* 0x006D11CD: jne 0x6d125b */
L_006D11D3:
    ecx = MEM32(ebp + (-0x4)); /* 0x006D11D3: mov ecx, dword ptr [ebp - 4] */
    edx = esi; /* 0x006D11D6: mov edx, esi */
    ebx = (uint32_t)MEM16(ecx + edi * 4 + 0x2); /* 0x006D11D8: movzx ebx, word ptr [ecx + edi*4 + 2] */
    edi = ecx + edi * 4; /* 0x006D11DD: lea edi, [ecx + edi*4] */
    ecx = MEM32(eax + 0x16BC); /* 0x006D11E0: mov ecx, dword ptr [eax + 0x16bc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x006D11E6: sub edx, ebx */
    _flag_k = FK_CMP;
    /* cmp ecx, edx */ /* 0x006D11E8: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D1247; /* 0x006D11EA: jle 0x6d1247 */
L_006D11EC:
    edi = (uint32_t)MEM16(edi); /* 0x006D11EC: movzx edi, word ptr [edi] */
    esi = MEM32(eax + 0x8); /* 0x006D11EF: mov esi, dword ptr [eax + 8] */
    SET_LO16(edx, LO16(edi)); /* 0x006D11F2: mov dx, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D11F5: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D11F5: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D11F8: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(eax + 0x14); /* 0x006D11FF: mov edx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)MEM8(eax + 0x16B8); /* 0x006D1202: movzx ecx, byte ptr [eax + 0x16b8] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D1209: mov byte ptr [esi + edx], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D120C: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(eax + 0x14); /* 0x006D120F: mov esi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x006D1212: mov edx, dword ptr [eax + 8] */
    ecx = (uint32_t)MEM8(eax + 0x16B9); /* 0x006D1215: movzx ecx, byte ptr [eax + 0x16b9] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D121C: mov byte ptr [esi + edx], cl */
    SET_LO8(ecx, 0x10u); /* 0x006D121F: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x16BC)); /* 0x006D1221: sub cl, byte ptr [eax + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = 0x10u; /* 0x006D1227: mov esi, 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D122C: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D122F: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D122F: shr di, cl */
    ecx = ebx + (-0x10); /* 0x006D1232: lea ecx, [ebx - 0x10] */
    _flag_a = (uint32_t)(MEM32(eax + 0x16BC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x16BC) = MEM32(eax + 0x16BC) + ecx; /* 0x006D1235: add dword ptr [eax + 0x16bc], ecx */
    _flag_k = FK_ADD;
    MEM16(eax + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D123B: mov word ptr [eax + 0x16b8], di */
    goto L_006D14CC; /* 0x006D1242: jmp 0x6d14cc */
L_006D1247:
    SET_LO16(edx, MEM16(edi)); /* 0x006D1247: mov dx, word ptr [edi] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D124A: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D124A: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D124D: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x006D1254: add ecx, ebx */
    _flag_k = FK_ADD;
    goto L_006D14C6; /* 0x006D1256: jmp 0x6d14c6 */
L_006D125B:
    ecx = (uint32_t)MEM8(edi + 0x7D4750); /* 0x006D125B: movzx ecx, byte ptr [edi + 0x7d4750] */
    edx = MEM32(ebp + (-0x4)); /* 0x006D1262: mov edx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x006D1265: mov dword ptr [ebp - 0xc], ecx */
    ecx = (uint32_t)MEM16(edx + ecx * 4 + 0x406); /* 0x006D1268: movzx ecx, word ptr [edx + ecx*4 + 0x406] */
    edx = esi; /* 0x006D1270: mov edx, esi */
    esi = MEM32(ebp + (-0x4)); /* 0x006D1272: mov esi, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006D1275: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x8)); /* 0x006D1278: sub edx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x16BC); /* 0x006D127B: mov ecx, dword ptr [eax + 0x16bc] */
    /* cmp ecx, edx */ /* 0x006D1281: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0xC)); /* 0x006D1283: mov edx, dword ptr [ebp - 0xc] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D12E6; /* 0x006D1286: jle 0x6d12e6 */
L_006D1288:
    edi = (uint32_t)MEM16(esi + edx * 4 + 0x404); /* 0x006D1288: movzx edi, word ptr [esi + edx*4 + 0x404] */
    esi = MEM32(eax + 0x8); /* 0x006D1290: mov esi, dword ptr [eax + 8] */
    SET_LO16(edx, LO16(edi)); /* 0x006D1293: mov dx, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D1296: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D1296: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D1299: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(eax + 0x14); /* 0x006D12A0: mov edx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)MEM8(eax + 0x16B8); /* 0x006D12A3: movzx ecx, byte ptr [eax + 0x16b8] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D12AA: mov byte ptr [esi + edx], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D12AD: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(eax + 0x14); /* 0x006D12B0: mov esi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x006D12B3: mov edx, dword ptr [eax + 8] */
    ecx = (uint32_t)MEM8(eax + 0x16B9); /* 0x006D12B6: movzx ecx, byte ptr [eax + 0x16b9] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D12BD: mov byte ptr [esi + edx], cl */
    SET_LO8(ecx, 0x10u); /* 0x006D12C0: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x16BC)); /* 0x006D12C2: sub cl, byte ptr [eax + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D12C8: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D12CB: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D12CB: shr di, cl */
    ecx = MEM32(ebp + (-0x8)); /* 0x006D12CE: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFF0u; /* 0x006D12D1: add ecx, -0x10 */
    _flag_k = FK_ADD;
    MEM16(eax + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D12D4: mov word ptr [eax + 0x16b8], di */
    _flag_a = (uint32_t)(MEM32(eax + 0x16BC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x16BC) = MEM32(eax + 0x16BC) + ecx; /* 0x006D12DB: add dword ptr [eax + 0x16bc], ecx */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x10)); /* 0x006D12E1: mov edi, dword ptr [ebp - 0x10] */
    goto L_006D1301; /* 0x006D12E4: jmp 0x6d1301 */
L_006D12E6:
    SET_LO16(edx, MEM16(esi + edx * 4 + 0x404)); /* 0x006D12E6: mov dx, word ptr [esi + edx*4 + 0x404] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D12EE: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D12EE: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D12F1: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x8)); /* 0x006D12F8: add ecx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16BC) = ecx; /* 0x006D12FB: mov dword ptr [eax + 0x16bc], ecx */
L_006D1301:
    ecx = MEM32(ebp + (-0xC)); /* 0x006D1301: mov ecx, dword ptr [ebp - 0xc] */
    esi = MEM32(ecx * 4 + 0x7D4AD0); /* 0x006D1304: mov esi, dword ptr [ecx*4 + 0x7d4ad0] */
    MEM32(ebp + (-0x10)) = esi; /* 0x006D130B: mov dword ptr [ebp - 0x10], esi */
    /* test esi, esi */ /* 0x006D130E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D138F; /* 0x006D1310: je 0x6d138f */
L_006D1312:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx * 4 + 0x7D4B70));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ecx * 4 + 0x7D4B70); /* 0x006D1312: sub edi, dword ptr [ecx*4 + 0x7d4b70] */
    _flag_k = FK_CMP;
    edx = 0x10u; /* 0x006D1319: mov edx, 0x10 */
    ecx = MEM32(eax + 0x16BC); /* 0x006D131E: mov ecx, dword ptr [eax + 0x16bc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x006D1324: sub edx, esi */
    _flag_k = FK_CMP;
    /* cmp ecx, edx */ /* 0x006D1326: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D137D; /* 0x006D1328: jle 0x6d137d */
L_006D132A:
    esi = MEM32(eax + 0x8); /* 0x006D132A: mov esi, dword ptr [eax + 8] */
    SET_LO16(edx, LO16(edi)); /* 0x006D132D: mov dx, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D1330: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D1330: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D1333: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(eax + 0x14); /* 0x006D133A: mov edx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)MEM8(eax + 0x16B8); /* 0x006D133D: movzx ecx, byte ptr [eax + 0x16b8] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D1344: mov byte ptr [esi + edx], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D1347: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(eax + 0x14); /* 0x006D134A: mov esi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x006D134D: mov edx, dword ptr [eax + 8] */
    ecx = (uint32_t)MEM8(eax + 0x16B9); /* 0x006D1350: movzx ecx, byte ptr [eax + 0x16b9] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D1357: mov byte ptr [esi + edx], cl */
    SET_LO8(ecx, 0x10u); /* 0x006D135A: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x16BC)); /* 0x006D135C: sub cl, byte ptr [eax + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D1362: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D1365: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D1365: shr di, cl */
    ecx = MEM32(ebp + (-0x10)); /* 0x006D1368: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFF0u; /* 0x006D136B: add ecx, -0x10 */
    _flag_k = FK_ADD;
    MEM16(eax + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D136E: mov word ptr [eax + 0x16b8], di */
    _flag_a = (uint32_t)(MEM32(eax + 0x16BC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x16BC) = MEM32(eax + 0x16BC) + ecx; /* 0x006D1375: add dword ptr [eax + 0x16bc], ecx */
    _flag_k = FK_ADD;
    goto L_006D138F; /* 0x006D137B: jmp 0x6d138f */
L_006D137D:
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D137D: shl di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) << ((LO8(ecx)) & 31)); /* 0x006D137D: shl di, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edi))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edi))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edi)); /* 0x006D1380: or word ptr [eax + 0x16b8], di */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x006D1387: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16BC) = ecx; /* 0x006D1389: mov dword ptr [eax + 0x16bc], ecx */
L_006D138F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x006D138F: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, 0x100u */ /* 0x006D1390: cmp ebx, 0x100 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D13A1; /* 0x006D1396: jae 0x6d13a1 */
L_006D1398:
    ecx = (uint32_t)MEM8(ebx + 0x7D4850); /* 0x006D1398: movzx ecx, byte ptr [ebx + 0x7d4850] */
    goto L_006D13AD; /* 0x006D139F: jmp 0x6d13ad */
L_006D13A1:
    ecx = ebx; /* 0x006D13A1: mov ecx, ebx */
    if (7u) _cf = (((ecx) >> 6) & 1u); /* 0x006D13A3: shr ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 7u; /* 0x006D13A3: shr ecx, 7 */
    ecx = (uint32_t)MEM8(ecx + 0x7D4950); /* 0x006D13A6: movzx ecx, byte ptr [ecx + 0x7d4950] */
L_006D13AD:
    edx = MEM32(ebp + 0x8); /* 0x006D13AD: mov edx, dword ptr [ebp + 8] */
    esi = 0x10u; /* 0x006D13B0: mov esi, 0x10 */
    MEM32(ebp + (-0x8)) = ecx; /* 0x006D13B5: mov dword ptr [ebp - 8], ecx */
    edi = edx + ecx * 4; /* 0x006D13B8: lea edi, [edx + ecx*4] */
    edx = esi; /* 0x006D13BB: mov edx, esi */
    ecx = (uint32_t)MEM16(edi + 0x2); /* 0x006D13BD: movzx ecx, word ptr [edi + 2] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x006D13C1: mov dword ptr [ebp - 0xc], ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0xC)); /* 0x006D13C4: sub edx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x16BC); /* 0x006D13C7: mov ecx, dword ptr [eax + 0x16bc] */
    /* cmp ecx, edx */ /* 0x006D13CD: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D142C; /* 0x006D13CF: jle 0x6d142c */
L_006D13D1:
    edi = (uint32_t)MEM16(edi); /* 0x006D13D1: movzx edi, word ptr [edi] */
    esi = MEM32(eax + 0x8); /* 0x006D13D4: mov esi, dword ptr [eax + 8] */
    SET_LO16(edx, LO16(edi)); /* 0x006D13D7: mov dx, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D13DA: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D13DA: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D13DD: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(eax + 0x14); /* 0x006D13E4: mov edx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)MEM8(eax + 0x16B8); /* 0x006D13E7: movzx ecx, byte ptr [eax + 0x16b8] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D13EE: mov byte ptr [esi + edx], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D13F1: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(eax + 0x14); /* 0x006D13F4: mov esi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x006D13F7: mov edx, dword ptr [eax + 8] */
    ecx = (uint32_t)MEM8(eax + 0x16B9); /* 0x006D13FA: movzx ecx, byte ptr [eax + 0x16b9] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D1401: mov byte ptr [esi + edx], cl */
    SET_LO8(ecx, 0x10u); /* 0x006D1404: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x16BC)); /* 0x006D1406: sub cl, byte ptr [eax + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = 0x10u; /* 0x006D140C: mov esi, 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D1411: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D1414: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D1414: shr di, cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D1417: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFF0u; /* 0x006D141A: add ecx, -0x10 */
    _flag_k = FK_ADD;
    MEM16(eax + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D141D: mov word ptr [eax + 0x16b8], di */
    _flag_a = (uint32_t)(MEM32(eax + 0x16BC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x16BC) = MEM32(eax + 0x16BC) + ecx; /* 0x006D1424: add dword ptr [eax + 0x16bc], ecx */
    _flag_k = FK_ADD;
    goto L_006D1442; /* 0x006D142A: jmp 0x6d1442 */
L_006D142C:
    SET_LO16(edx, MEM16(edi)); /* 0x006D142C: mov dx, word ptr [edi] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D142F: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D142F: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D1432: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0xC)); /* 0x006D1439: add ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    MEM32(eax + 0x16BC) = ecx; /* 0x006D143C: mov dword ptr [eax + 0x16bc], ecx */
L_006D1442:
    ecx = MEM32(ebp + (-0x8)); /* 0x006D1442: mov ecx, dword ptr [ebp - 8] */
    edi = MEM32(ecx * 4 + 0x7D4C70); /* 0x006D1445: mov edi, dword ptr [ecx*4 + 0x7d4c70] */
    /* test edi, edi */ /* 0x006D144C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D14CC; /* 0x006D144E: je 0x6d14cc */
L_006D1450:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx * 4 + 0x7D4BF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ecx * 4 + 0x7D4BF0); /* 0x006D1450: sub ebx, dword ptr [ecx*4 + 0x7d4bf0] */
    _flag_k = FK_CMP;
    edx = esi; /* 0x006D1457: mov edx, esi */
    ecx = MEM32(eax + 0x16BC); /* 0x006D1459: mov ecx, dword ptr [eax + 0x16bc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x006D145F: sub edx, edi */
    _flag_k = FK_CMP;
    /* cmp ecx, edx */ /* 0x006D1461: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D14BA; /* 0x006D1463: jle 0x6d14ba */
L_006D1465:
    esi = MEM32(eax + 0x8); /* 0x006D1465: mov esi, dword ptr [eax + 8] */
    SET_LO16(edx, LO16(ebx)); /* 0x006D1468: mov dx, bx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D146B: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D146B: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D146E: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(eax + 0x14); /* 0x006D1475: mov edx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)MEM8(eax + 0x16B8); /* 0x006D1478: movzx ecx, byte ptr [eax + 0x16b8] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D147F: mov byte ptr [esi + edx], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D1482: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(eax + 0x14); /* 0x006D1485: mov esi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x006D1488: mov edx, dword ptr [eax + 8] */
    ecx = (uint32_t)MEM8(eax + 0x16B9); /* 0x006D148B: movzx ecx, byte ptr [eax + 0x16b9] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D1492: mov byte ptr [esi + edx], cl */
    SET_LO8(ecx, 0x10u); /* 0x006D1495: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x16BC)); /* 0x006D1497: sub cl, byte ptr [eax + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = 0x10u; /* 0x006D149D: mov esi, 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D14A2: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(ebx)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D14A5: shr bx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ebx) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ebx, LO16(ebx) >> ((LO8(ecx)) & 31)); /* 0x006D14A5: shr bx, cl */
    ecx = edi + (-0x10); /* 0x006D14A8: lea ecx, [edi - 0x10] */
    _flag_a = (uint32_t)(MEM32(eax + 0x16BC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x16BC) = MEM32(eax + 0x16BC) + ecx; /* 0x006D14AB: add dword ptr [eax + 0x16bc], ecx */
    _flag_k = FK_ADD;
    MEM16(eax + 0x16B8) = (uint16_t)(LO16(ebx)); /* 0x006D14B1: mov word ptr [eax + 0x16b8], bx */
    goto L_006D14CC; /* 0x006D14B8: jmp 0x6d14cc */
L_006D14BA:
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(ebx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D14BA: shl bx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ebx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ebx, LO16(ebx) << ((LO8(ecx)) & 31)); /* 0x006D14BA: shl bx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(ebx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(ebx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(ebx)); /* 0x006D14BD: or word ptr [eax + 0x16b8], bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x006D14C4: add ecx, edi */
    _flag_k = FK_ADD;
L_006D14C6:
    MEM32(eax + 0x16BC) = ecx; /* 0x006D14C6: mov dword ptr [eax + 0x16bc], ecx */
L_006D14CC:
    edx = MEM32(ebp + (-0x14)); /* 0x006D14CC: mov edx, dword ptr [ebp - 0x14] */
    /* cmp edx, MEM32(eax + 0x16A0) */ /* 0x006D14CF: cmp edx, dword ptr [eax + 0x16a0] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x16A0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D11B0; /* 0x006D14D5: jb 0x6d11b0 */
L_006D14DB:
    ebx = MEM32(ebp + (-0x4)); /* 0x006D14DB: mov ebx, dword ptr [ebp - 4] */
L_006D14DE:
    edi = (uint32_t)MEM16(ebx + 0x402); /* 0x006D14DE: movzx edi, word ptr [ebx + 0x402] */
    ecx = MEM32(eax + 0x16BC); /* 0x006D14E5: mov ecx, dword ptr [eax + 0x16bc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x006D14EB: sub esi, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = edi; /* 0x006D14ED: mov dword ptr [ebp - 0x14], edi */
    /* cmp ecx, esi */ /* 0x006D14F0: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D1553; /* 0x006D14F2: jle 0x6d1553 */
L_006D14F4:
    edi = (uint32_t)MEM16(ebx + 0x400); /* 0x006D14F4: movzx edi, word ptr [ebx + 0x400] */
    esi = MEM32(eax + 0x8); /* 0x006D14FB: mov esi, dword ptr [eax + 8] */
    SET_LO16(edx, LO16(edi)); /* 0x006D14FE: mov dx, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D1501: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D1501: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D1504: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(eax + 0x14); /* 0x006D150B: mov edx, dword ptr [eax + 0x14] */
    ecx = (uint32_t)MEM8(eax + 0x16B8); /* 0x006D150E: movzx ecx, byte ptr [eax + 0x16b8] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D1515: mov byte ptr [esi + edx], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D1518: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    esi = MEM32(eax + 0x14); /* 0x006D151B: mov esi, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x8); /* 0x006D151E: mov edx, dword ptr [eax + 8] */
    ecx = (uint32_t)MEM8(eax + 0x16B9); /* 0x006D1521: movzx ecx, byte ptr [eax + 0x16b9] */
    MEM8(esi + edx) = (uint8_t)(LO8(ecx)); /* 0x006D1528: mov byte ptr [esi + edx], cl */
    SET_LO8(ecx, 0x10u); /* 0x006D152B: mov cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x16BC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - MEM8(eax + 0x16BC)); /* 0x006D152D: sub cl, byte ptr [eax + 0x16bc] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1; /* 0x006D1533: inc dword ptr [eax + 0x14] */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x006D1536: shr di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> ((LO8(ecx)) & 31)); /* 0x006D1536: shr di, cl */
    ecx = MEM32(ebp + (-0x14)); /* 0x006D1539: mov ecx, dword ptr [ebp - 0x14] */
    MEM16(eax + 0x16B8) = (uint16_t)(LO16(edi)); /* 0x006D153C: mov word ptr [eax + 0x16b8], di */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFF0u; /* 0x006D1543: add ecx, -0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax + 0x16BC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x16BC) = MEM32(eax + 0x16BC) + ecx; /* 0x006D1546: add dword ptr [eax + 0x16bc], ecx */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006D154C: pop edi */
    esi = POP32_VAL(esp); /* 0x006D154D: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D154E: pop ebx */
    esp = ebp; /* 0x006D154F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D1551: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D1552: ret  */
L_006D1553:
    SET_LO16(edx, MEM16(ebx + 0x400)); /* 0x006D1553: mov dx, word ptr [ebx + 0x400] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edx)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x006D155A: shl dx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) << ((LO8(ecx)) & 31)); /* 0x006D155A: shl dx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x16B8) | LO16(edx))) << 16;
    MEM16(eax + 0x16B8) = (uint16_t)(MEM16(eax + 0x16B8) | LO16(edx)); /* 0x006D155D: or word ptr [eax + 0x16b8], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x006D1564: add ecx, edi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006D1566: pop edi */
    esi = POP32_VAL(esp); /* 0x006D1567: pop esi */
    MEM32(eax + 0x16BC) = ecx; /* 0x006D1568: mov dword ptr [eax + 0x16bc], ecx */
    ebx = POP32_VAL(esp); /* 0x006D156E: pop ebx */
    esp = ebp; /* 0x006D156F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D1571: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D1572: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D1580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1580u);

L_006D1580:
    PUSH32(esp, esi); /* 0x006D1580: push esi */
    PUSH32(esp, edi); /* 0x006D1581: push edi */
    edi = ecx; /* 0x006D1582: mov edi, ecx */
    eax = 0xF3FFC07Fu; /* 0x006D1584: mov eax, 0xf3ffc07f */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D1589: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edi + 0x94; /* 0x006D158B: lea edx, [edi + 0x94] */
L_006D1591:
    /* test LO8(eax), 1 */ /* 0x006D1591: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D159B; /* 0x006D1593: je 0x6d159b */
L_006D1595:
    /* cmp MEM16(edx), 0 */ /* 0x006D1595: cmp word ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D15E2; /* 0x006D1599: jne 0x6d15e2 */
L_006D159B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006D159B: inc esi */
    _flag_k = FK_INC;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D159C: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006D159C: shr eax, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x006D159E: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x1Fu */ /* 0x006D15A1: cmp esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D1591; /* 0x006D15A4: jle 0x6d1591 */
L_006D15A6:
    /* cmp MEM16(edi + 0xB8), 0 */ /* 0x006D15A6: cmp word ptr [edi + 0xb8], 0 */
    _flag_a = (uint32_t)(MEM16(edi + 0xB8)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D15E7; /* 0x006D15AE: jne 0x6d15e7 */
L_006D15B0:
    /* cmp MEM16(edi + 0xBC), 0 */ /* 0x006D15B0: cmp word ptr [edi + 0xbc], 0 */
    _flag_a = (uint32_t)(MEM16(edi + 0xBC)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D15E7; /* 0x006D15B8: jne 0x6d15e7 */
L_006D15BA:
    /* cmp MEM16(edi + 0xC8), 0 */ /* 0x006D15BA: cmp word ptr [edi + 0xc8], 0 */
    _flag_a = (uint32_t)(MEM16(edi + 0xC8)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D15E7; /* 0x006D15C2: jne 0x6d15e7 */
L_006D15C4:
    ecx = 0x20u; /* 0x006D15C4: mov ecx, 0x20 */
    eax = edi + 0x114; /* 0x006D15C9: lea eax, [edi + 0x114] */
    /* nop */ /* 0x006D15CF: nop  */
L_006D15D0:
    /* cmp MEM16(eax), 0 */ /* 0x006D15D0: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D15E7; /* 0x006D15D4: jne 0x6d15e7 */
L_006D15D6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006D15D6: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x006D15D7: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0x100u */ /* 0x006D15DA: cmp ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006D15D0; /* 0x006D15E0: jl 0x6d15d0 */
L_006D15E2:
    edi = POP32_VAL(esp); /* 0x006D15E2: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D15E3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006D15E5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D15E6: ret  */
L_006D15E7:
    edi = POP32_VAL(esp); /* 0x006D15E7: pop edi */
    eax = 1; /* 0x006D15E8: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x006D15ED: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D15EE: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D15F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D15F0u);

L_006D15F0:
    PUSH32(esp, esi); /* 0x006D15F0: push esi */
    esi = ecx; /* 0x006D15F1: mov esi, ecx */
    eax = MEM32(esi + 0x16BC); /* 0x006D15F3: mov eax, dword ptr [esi + 0x16bc] */
    /* cmp eax, 0x10u */ /* 0x006D15F9: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D1635; /* 0x006D15FC: jne 0x6d1635 */
L_006D15FE:
    ecx = MEM32(esi + 0x14); /* 0x006D15FE: mov ecx, dword ptr [esi + 0x14] */
    edx = MEM32(esi + 0x8); /* 0x006D1601: mov edx, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(esi + 0x16B8); /* 0x006D1604: movzx eax, byte ptr [esi + 0x16b8] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D160B: mov byte ptr [edx + ecx], al */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D160E: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    edx = MEM32(esi + 0x14); /* 0x006D1611: mov edx, dword ptr [esi + 0x14] */
    ecx = MEM32(esi + 0x8); /* 0x006D1614: mov ecx, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(esi + 0x16B9); /* 0x006D1617: movzx eax, byte ptr [esi + 0x16b9] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D161E: mov byte ptr [edx + ecx], al */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D1621: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D1624: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x16BC) = eax; /* 0x006D1626: mov dword ptr [esi + 0x16bc], eax */
    MEM16(esi + 0x16B8) = (uint16_t)(LO16(eax)); /* 0x006D162C: mov word ptr [esi + 0x16b8], ax */
    esi = POP32_VAL(esp); /* 0x006D1633: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D1634: ret  */
L_006D1635:
    /* cmp eax, 8 */ /* 0x006D1635: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006D1661; /* 0x006D1638: jl 0x6d1661 */
L_006D163A:
    ecx = MEM32(esi + 0x14); /* 0x006D163A: mov ecx, dword ptr [esi + 0x14] */
    edx = MEM32(esi + 0x8); /* 0x006D163D: mov edx, dword ptr [esi + 8] */
    SET_LO8(eax, MEM8(esi + 0x16B8)); /* 0x006D1640: mov al, byte ptr [esi + 0x16b8] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D1646: mov byte ptr [edx + ecx], al */
    eax = (uint32_t)MEM8(esi + 0x16B9); /* 0x006D1649: movzx eax, byte ptr [esi + 0x16b9] */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D1650: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi + 0x16BC)); _flag_b = (uint32_t)(0xFFFFFFF8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x16BC) = MEM32(esi + 0x16BC) + 0xFFFFFFF8u; /* 0x006D1653: add dword ptr [esi + 0x16bc], -8 */
    _flag_k = FK_ADD;
    MEM16(esi + 0x16B8) = (uint16_t)(LO16(eax)); /* 0x006D165A: mov word ptr [esi + 0x16b8], ax */
L_006D1661:
    esi = POP32_VAL(esp); /* 0x006D1661: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D1662: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D1670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1670u);

L_006D1670:
    PUSH32(esp, esi); /* 0x006D1670: push esi */
    esi = ecx; /* 0x006D1671: mov esi, ecx */
    eax = MEM32(esi + 0x16BC); /* 0x006D1673: mov eax, dword ptr [esi + 0x16bc] */
    /* cmp eax, 8 */ /* 0x006D1679: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_006D16A0; /* 0x006D167C: jle 0x6d16a0 */
L_006D167E:
    ecx = MEM32(esi + 0x14); /* 0x006D167E: mov ecx, dword ptr [esi + 0x14] */
    edx = MEM32(esi + 0x8); /* 0x006D1681: mov edx, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(esi + 0x16B8); /* 0x006D1684: movzx eax, byte ptr [esi + 0x16b8] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D168B: mov byte ptr [edx + ecx], al */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D168E: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    edx = MEM32(esi + 0x14); /* 0x006D1691: mov edx, dword ptr [esi + 0x14] */
    ecx = MEM32(esi + 0x8); /* 0x006D1694: mov ecx, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(esi + 0x16B9); /* 0x006D1697: movzx eax, byte ptr [esi + 0x16b9] */
    goto L_006D16B0; /* 0x006D169E: jmp 0x6d16b0 */
L_006D16A0:
    /* test eax, eax */ /* 0x006D16A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D16B6; /* 0x006D16A2: jle 0x6d16b6 */
L_006D16A4:
    edx = MEM32(esi + 0x8); /* 0x006D16A4: mov edx, dword ptr [esi + 8] */
    ecx = MEM32(esi + 0x14); /* 0x006D16A7: mov ecx, dword ptr [esi + 0x14] */
    SET_LO8(eax, MEM8(esi + 0x16B8)); /* 0x006D16AA: mov al, byte ptr [esi + 0x16b8] */
L_006D16B0:
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D16B0: mov byte ptr [edx + ecx], al */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D16B3: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
L_006D16B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D16B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x16B8) = (uint16_t)(LO16(eax)); /* 0x006D16B8: mov word ptr [esi + 0x16b8], ax */
    MEM32(esi + 0x16BC) = eax; /* 0x006D16BF: mov dword ptr [esi + 0x16bc], eax */
    esi = POP32_VAL(esp); /* 0x006D16C5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D16C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D16D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D16D0u);

L_006D16D0:
    PUSH32(esp, ebp); /* 0x006D16D0: push ebp */
    ebp = esp; /* 0x006D16D1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006D16D3: push ebx */
    PUSH32(esp, esi); /* 0x006D16D4: push esi */
    PUSH32(esp, edi); /* 0x006D16D5: push edi */
    edi = edx; /* 0x006D16D6: mov edi, edx */
    esi = ecx; /* 0x006D16D8: mov esi, ecx */
    RECOMP_CALL(sub_006D1670); /* 0x006D16DA: call 0x6d1670 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x14); /* 0x006D16DF: mov ecx, dword ptr [esi + 0x14] */
    eax = MEM32(esi + 0x8); /* 0x006D16E2: mov eax, dword ptr [esi + 8] */
    ebx = MEM32(ebp + 0x8); /* 0x006D16E5: mov ebx, dword ptr [ebp + 8] */
    MEM8(ecx + eax) = (uint8_t)(LO8(ebx)); /* 0x006D16E8: mov byte ptr [ecx + eax], bl */
    ecx = ebx; /* 0x006D16EB: mov ecx, ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D16ED: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    edx = MEM32(esi + 0x14); /* 0x006D16F0: mov edx, dword ptr [esi + 0x14] */
    eax = MEM32(esi + 0x8); /* 0x006D16F3: mov eax, dword ptr [esi + 8] */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x006D16F6: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x006D16F6: shr ecx, 8 */
    MEM8(edx + eax) = (uint8_t)(LO8(ecx)); /* 0x006D16F9: mov byte ptr [edx + eax], cl */
    SET_LO8(ecx, LO8(ebx)); /* 0x006D16FC: mov cl, bl */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D16FE: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    SET_LO8(ecx, ~LO8(ecx)); /* 0x006D1701: not cl */
    edx = MEM32(esi + 0x14); /* 0x006D1703: mov edx, dword ptr [esi + 0x14] */
    eax = MEM32(esi + 0x8); /* 0x006D1706: mov eax, dword ptr [esi + 8] */
    MEM8(edx + eax) = (uint8_t)(LO8(ecx)); /* 0x006D1709: mov byte ptr [edx + eax], cl */
    ecx = ebx; /* 0x006D170C: mov ecx, ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D170E: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    ecx = ~ecx; /* 0x006D1711: not ecx */
    edx = MEM32(esi + 0x14); /* 0x006D1713: mov edx, dword ptr [esi + 0x14] */
    eax = MEM32(esi + 0x8); /* 0x006D1716: mov eax, dword ptr [esi + 8] */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x006D1719: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x006D1719: shr ecx, 8 */
    MEM8(edx + eax) = (uint8_t)(LO8(ecx)); /* 0x006D171C: mov byte ptr [edx + eax], cl */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D171F: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    edx = MEM32(esi + 0x14); /* 0x006D1722: mov edx, dword ptr [esi + 0x14] */
    /* test ebx, ebx */ /* 0x006D1725: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D1745; /* 0x006D1727: je 0x6d1745 */
L_006D1729:
    esp = esp; /* 0x006D1729: lea esp, [esp] */
L_006D1730:
    ecx = MEM32(esi + 0x8); /* 0x006D1730: mov ecx, dword ptr [esi + 8] */
    edi = edi + 0x1; /* 0x006D1733: lea edi, [edi + 1] */
    SET_LO8(eax, MEM8(edi + (-0x1))); /* 0x006D1736: mov al, byte ptr [edi - 1] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x006D1739: mov byte ptr [edx + ecx], al */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1; /* 0x006D173C: inc dword ptr [esi + 0x14] */
    _flag_k = FK_INC;
    edx = MEM32(esi + 0x14); /* 0x006D173F: mov edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x006D1742: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_006D1730; /* 0x006D1743: jne 0x6d1730 */
L_006D1745:
    edi = POP32_VAL(esp); /* 0x006D1745: pop edi */
    esi = POP32_VAL(esp); /* 0x006D1746: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D1747: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006D1748: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D1749: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D1760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1760u);

L_006D1760:
    PUSH32(esp, ebp); /* 0x006D1760: push ebp */
    ebp = esp; /* 0x006D1761: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006D1763: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x006D1767: push esi */
    esi = ecx; /* 0x006D1768: mov esi, ecx */
    MEM32(esi) = 0x008017B4u; /* 0x006D176A: mov dword ptr [esi], 0x8017b4 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D177C; /* 0x006D1770: je 0x6d177c */
L_006D1772:
    PUSH32(esp, esi); /* 0x006D1772: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D1773: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D1779: add esp, 4 */
    _flag_k = FK_ADD;
L_006D177C:
    eax = esi; /* 0x006D177C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006D177E: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D177F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D1780: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D1790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1790u);

L_006D1790:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D1790: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006D1792: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_006D17B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D17B0u);

L_006D17B0:
    PUSH32(esp, ebp); /* 0x006D17B0: push ebp */
    ebp = esp; /* 0x006D17B1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D17B3: push esi */
    esi = ecx; /* 0x006D17B4: mov esi, ecx */
    ecx = esi + 0x18; /* 0x006D17B6: lea ecx, [esi + 0x18] */
    MEM32(esi) = 0x00801890u; /* 0x006D17B9: mov dword ptr [esi], 0x801890 */
    RECOMP_CALL(sub_006D5DF0); /* 0x006D17BF: call 0x6d5df0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006D17C4: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D17D4; /* 0x006D17C8: je 0x6d17d4 */
L_006D17CA:
    PUSH32(esp, esi); /* 0x006D17CA: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D17CB: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D17D1: add esp, 4 */
    _flag_k = FK_ADD;
L_006D17D4:
    eax = esi; /* 0x006D17D4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006D17D6: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D17D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D17D8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D17E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D17E0u);

L_006D17E0:
    SET_LO8(eax, 0x10u); /* 0x006D17E0: mov al, 0x10 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D17E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D17F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D17F0u);

L_006D17F0:
    PUSH32(esp, ebp); /* 0x006D17F0: push ebp */
    ebp = esp; /* 0x006D17F1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x006D17F3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006D17F6: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0x4); /* 0x006D17F9: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + 0xF98); /* 0x006D17FC: mov ecx, dword ptr [eax + 0xf98] */
    /* test ecx, ecx */ /* 0x006D1802: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D1811; /* 0x006D1804: jne 0x6d1811 */
L_006D1806:
    eax = 0x80030002u; /* 0x006D1806: mov eax, 0x80030002 */
    esp = ebp; /* 0x006D180B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D180D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x006D180E: ret 0x18 */
L_006D1811:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006D1811: push dword ptr [ebp + 0x10] */
    eax = MEM32(ecx); /* 0x006D1814: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x8); /* 0x006D1816: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x006D1819: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006D181A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x1C); /* 0x006D181D: mov ecx, dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + (-0x4)); /* 0x006D1820: mov eax, dword ptr [ebp - 4] */
    MEM32(ecx) = eax; /* 0x006D1823: mov dword ptr [ecx], eax */
    ecx = MEM32(ebp + 0x18); /* 0x006D1825: mov ecx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + (-0x8)); /* 0x006D1828: mov eax, dword ptr [ebp - 8] */
    MEM32(ecx) = eax; /* 0x006D182B: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D182D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x006D182F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D1831: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x006D1832: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_006D1840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1840u);

L_006D1840:
    PUSH32(esp, ebp); /* 0x006D1840: push ebp */
    ebp = esp; /* 0x006D1841: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x006D1843: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x006D1846: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + 0xF98); /* 0x006D1849: mov ecx, dword ptr [eax + 0xf98] */
    /* test ecx, ecx */ /* 0x006D184F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D185D; /* 0x006D1851: je 0x6d185d */
L_006D1853:
    eax = MEM32(ecx); /* 0x006D1853: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x006D1855: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006D1857: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D185A: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_006D185D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D185D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x006D185F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D1860: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006D1870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1870u);

L_006D1870:
    PUSH32(esp, ebp); /* 0x006D1870: push ebp */
    ebp = esp; /* 0x006D1871: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D1873: push -1 */
    PUSH32(esp, 0x007824E9u); /* 0x006D1875: push 0x7824e9 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D187A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D1880: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006D1881: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D1884: push ebx */
    PUSH32(esp, esi); /* 0x006D1885: push esi */
    PUSH32(esp, edi); /* 0x006D1886: push edi */
    eax = MEM32(0x855000); /* 0x006D1887: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D188C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D188E: push eax */
    eax = ebp + (-0xC); /* 0x006D188F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D1892: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006D1898: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x006D189A: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x10)) = 0; /* 0x006D189D: mov dword ptr [ebp - 0x10], 0 */
    eax = MEM32(edx + 0x14); /* 0x006D18A4: mov eax, dword ptr [edx + 0x14] */
    /* cmp eax, 0x10u */ /* 0x006D18A7: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D18B0; /* 0x006D18AA: jb 0x6d18b0 */
L_006D18AC:
    ecx = MEM32(edx); /* 0x006D18AC: mov ecx, dword ptr [edx] */
    goto L_006D18B2; /* 0x006D18AE: jmp 0x6d18b2 */
L_006D18B0:
    ecx = edx; /* 0x006D18B0: mov ecx, edx */
L_006D18B2:
    ebx = MEM32(edx + 0x10); /* 0x006D18B2: mov ebx, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x006D18B5: add ecx, ebx */
    _flag_k = FK_ADD;
    /* cmp eax, 0x10u */ /* 0x006D18B7: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D18C0; /* 0x006D18BA: jb 0x6d18c0 */
L_006D18BC:
    edi = MEM32(edx); /* 0x006D18BC: mov edi, dword ptr [edx] */
    goto L_006D18C2; /* 0x006D18BE: jmp 0x6d18c2 */
L_006D18C0:
    edi = edx; /* 0x006D18C0: mov edi, edx */
L_006D18C2:
    /* cmp eax, 0x10u */ /* 0x006D18C2: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D18C9; /* 0x006D18C5: jb 0x6d18c9 */
L_006D18C7:
    edx = MEM32(edx); /* 0x006D18C7: mov edx, dword ptr [edx] */
L_006D18C9:
    eax = ebx + edx; /* 0x006D18C9: lea eax, [ebx + edx] */
    /* cmp eax, edi */ /* 0x006D18CC: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D18E2; /* 0x006D18CE: je 0x6d18e2 */
L_006D18D0:
    SET_LO8(ebx, MEM8(eax + (-0x1))); /* 0x006D18D0: mov bl, byte ptr [eax - 1] */
    /* cmp LO8(ebx), 0x5Cu */ /* 0x006D18D3: cmp bl, 0x5c */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D18E2; /* 0x006D18D6: je 0x6d18e2 */
L_006D18D8:
    /* cmp LO8(ebx), 0x2Fu */ /* 0x006D18D8: cmp bl, 0x2f */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D18E2; /* 0x006D18DB: je 0x6d18e2 */
L_006D18DD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006D18DD: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, edi */ /* 0x006D18DE: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D18D0; /* 0x006D18E0: jne 0x6d18d0 */
L_006D18E2:
    MEM32(esi + 0x14) = 0xFu; /* 0x006D18E2: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x006D18E9: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x006D18F0: mov byte ptr [esi], 0 */
    /* cmp eax, ecx */ /* 0x006D18F3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D1902; /* 0x006D18F5: je 0x6d1902 */
L_006D18F7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x006D18F7: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x006D18F9: push ecx */
    PUSH32(esp, eax); /* 0x006D18FA: push eax */
    ecx = esi; /* 0x006D18FB: mov ecx, esi */
    RECOMP_CALL(sub_0040A2F0); /* 0x006D18FD: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
L_006D1902:
    MEM32(ebp + (-0x4)) = 0; /* 0x006D1902: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x006D1909: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x006D1910: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D1912: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D1915: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D191C: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D191D: pop edi */
    esi = POP32_VAL(esp); /* 0x006D191E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D191F: pop ebx */
    esp = ebp; /* 0x006D1920: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D1922: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D1923: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D1930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1930u);

L_006D1930:
    PUSH32(esp, ebp); /* 0x006D1930: push ebp */
    ebp = esp; /* 0x006D1931: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D1933: push -1 */
    PUSH32(esp, 0x007C66E9u); /* 0x006D1935: push 0x7c66e9 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D193A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D1940: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006D1941: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D1944: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D1949: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x006D194B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x006D194E: push esi */
    PUSH32(esp, eax); /* 0x006D194F: push eax */
    eax = ebp + (-0xC); /* 0x006D1950: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D1953: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006D1959: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x006D195B: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x006D195E: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x006D1965: mov dword ptr [ebp - 0x14], 0 */
    /* cmp MEM32(edx + 0x14), 0x10u */ /* 0x006D196C: cmp dword ptr [edx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D1976; /* 0x006D1970: jb 0x6d1976 */
L_006D1972:
    ecx = MEM32(edx); /* 0x006D1972: mov ecx, dword ptr [edx] */
    goto L_006D1978; /* 0x006D1974: jmp 0x6d1978 */
L_006D1976:
    ecx = edx; /* 0x006D1976: mov ecx, edx */
L_006D1978:
    eax = MEM32(edx + 0x10); /* 0x006D1978: mov eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x006D197B: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM32(edx + 0x14), 0x10u */ /* 0x006D197D: cmp dword ptr [edx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D1985; /* 0x006D1981: jb 0x6d1985 */
L_006D1983:
    edx = MEM32(edx); /* 0x006D1983: mov edx, dword ptr [edx] */
L_006D1985:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x006D1985: push dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D1988: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 7; /* 0x006D198A: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = 0; /* 0x006D1991: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x006D1998: push eax */
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x006D1999: mov word ptr [esi], cx */
    ecx = esi; /* 0x006D199C: mov ecx, esi */
    PUSH32(esp, edx); /* 0x006D199E: push edx */
    RECOMP_CALL(sub_006D5640); /* 0x006D199F: call 0x6d5640 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x006D19A4: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x14)) = 1; /* 0x006D19AB: mov dword ptr [ebp - 0x14], 1 */
    eax = esi; /* 0x006D19B2: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D19B4: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D19B7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D19BE: pop ecx */
    esi = POP32_VAL(esp); /* 0x006D19BF: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x006D19C0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D19C3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D19C5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D19CA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D19CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D19CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D19D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D19D0u);

L_006D19D0:
    PUSH32(esp, ebp); /* 0x006D19D0: push ebp */
    ebp = esp; /* 0x006D19D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D19D3: push -1 */
    PUSH32(esp, 0x007C6759u); /* 0x006D19D5: push 0x7c6759 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D19DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D19E0: push eax */
    PUSH32(esp, ecx); /* 0x006D19E1: push ecx */
    PUSH32(esp, ebx); /* 0x006D19E2: push ebx */
    PUSH32(esp, esi); /* 0x006D19E3: push esi */
    PUSH32(esp, edi); /* 0x006D19E4: push edi */
    eax = MEM32(0x855000); /* 0x006D19E5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D19EA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D19EC: push eax */
    eax = ebp + (-0xC); /* 0x006D19ED: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D19F0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006D19F6: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006D19F8: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x008017B4u; /* 0x006D19FB: mov dword ptr [esi], 0x8017b4 */
    ecx = esi + 0x4; /* 0x006D1A01: lea ecx, [esi + 4] */
    MEM32(ebp + (-0x4)) = 0; /* 0x006D1A04: mov dword ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_006D7A50); /* 0x006D1A0B: call 0x6d7a50 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006D1A10: mov byte ptr [ebp - 4], 1 */
    ecx = esi + 0xA48; /* 0x006D1A14: lea ecx, [esi + 0xa48] */
    MEM32(esi) = 0x00801720u; /* 0x006D1A1A: mov dword ptr [esi], 0x801720 */
    MEM32(esi + 0x4) = 0x00801848u; /* 0x006D1A20: mov dword ptr [esi + 4], 0x801848 */
    MEM32(esi + 0xA38) = 0; /* 0x006D1A27: mov dword ptr [esi + 0xa38], 0 */
    MEM32(esi + 0xA30) = 0; /* 0x006D1A31: mov dword ptr [esi + 0xa30], 0 */
    MEM32(esi + 0xA3C) = 0; /* 0x006D1A3B: mov dword ptr [esi + 0xa3c], 0 */
    MEM32(esi + 0xA34) = 0; /* 0x006D1A45: mov dword ptr [esi + 0xa34], 0 */
    MEM32(esi + 0xA2C) = 0; /* 0x006D1A4F: mov dword ptr [esi + 0xa2c], 0 */
    MEM32(esi + 0xA41) = 0x01000101u; /* 0x006D1A59: mov dword ptr [esi + 0xa41], 0x1000101 */
    MEM8(esi + 0xA40) = (uint8_t)(1); /* 0x006D1A63: mov byte ptr [esi + 0xa40], 1 */
    RECOMP_CALL(sub_0064AE90); /* 0x006D1A6A: call 0x64ae90 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xF38) = 0xFu; /* 0x006D1A6F: mov dword ptr [esi + 0xf38], 0xf */
    MEM32(esi + 0xF34) = 0; /* 0x006D1A79: mov dword ptr [esi + 0xf34], 0 */
    MEM8(esi + 0xF24) = (uint8_t)(0); /* 0x006D1A83: mov byte ptr [esi + 0xf24], 0 */
    ecx = esi + 0xF60; /* 0x006D1A8A: lea ecx, [esi + 0xf60] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006D1A90: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D1A94: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x14) = 7; /* 0x006D1A96: mov dword ptr [ecx + 0x14], 7 */
    MEM32(ecx + 0x10) = 0; /* 0x006D1A9D: mov dword ptr [ecx + 0x10], 0 */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x006D1AA4: mov word ptr [ecx], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006D1AA7: mov byte ptr [ebp - 4], 3 */
    MEM32(esi + 0xF8C) = 0xFu; /* 0x006D1AAB: mov dword ptr [esi + 0xf8c], 0xf */
    MEM32(esi + 0xF88) = eax; /* 0x006D1AB5: mov dword ptr [esi + 0xf88], eax */
    MEM8(esi + 0xF78) = (uint8_t)(LO8(eax)); /* 0x006D1ABB: mov byte ptr [esi + 0xf78], al */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x006D1AC1: mov byte ptr [ebp - 4], 4 */
    eax = MEM32(ebp + 0x14); /* 0x006D1AC5: mov eax, dword ptr [ebp + 0x14] */
    /* cmp ecx, eax */ /* 0x006D1AC8: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D1AD6; /* 0x006D1ACA: je 0x6d1ad6 */
L_006D1ACC:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D1ACC: push -1 */
    PUSH32(esp, 0); /* 0x006D1ACE: push 0 */
    PUSH32(esp, eax); /* 0x006D1AD0: push eax */
    RECOMP_CALL(sub_005C9000); /* 0x006D1AD1: call 0x5c9000 */
    RECOMP_FLAGS_IN();
L_006D1AD6:
    ebx = MEM32(ebp + 0x10); /* 0x006D1AD6: mov ebx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x006D1AD9: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x400) = 0; /* 0x006D1ADC: mov dword ptr [esi + 0x400], 0 */
    MEM32(esi + 0xF54) = 0; /* 0x006D1AE6: mov dword ptr [esi + 0xf54], 0 */
    MEM32(esi + 0xA24) = eax; /* 0x006D1AF0: mov dword ptr [esi + 0xa24], eax */
    /* test LO8(ebx), 0x10u */ /* 0x006D1AF6: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D1B02; /* 0x006D1AF9: je 0x6d1b02 */
L_006D1AFB:
    MEM8(esi + 0xC1) = (uint8_t)(1); /* 0x006D1AFB: mov byte ptr [esi + 0xc1], 1 */
L_006D1B02:
    MEM8(esi + 0xF58) = (uint8_t)(1); /* 0x006D1B02: mov byte ptr [esi + 0xf58], 1 */
    /* test LO8(ebx), 2 */ /* 0x006D1B09: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D1B12; /* 0x006D1B0C: je 0x6d1b12 */
L_006D1B0E:
    MEM8(esi + 0x9) = (uint8_t)(1); /* 0x006D1B0E: mov byte ptr [esi + 9], 1 */
L_006D1B12:
    MEM32(esi + 0xA28) = 0xFFFFFFFFu; /* 0x006D1B12: mov dword ptr [esi + 0xa28], 0xffffffff */
    /* test LO8(ebx), 8 */ /* 0x006D1B1C: test bl, 8 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D1B25; /* 0x006D1B1F: je 0x6d1b25 */
L_006D1B21:
    MEM8(esi + 0x8) = (uint8_t)(1); /* 0x006D1B21: mov byte ptr [esi + 8], 1 */
L_006D1B25:
    PUSH32(esp, 1); /* 0x006D1B25: push 1 */
    ecx = esi + 0x4; /* 0x006D1B27: lea ecx, [esi + 4] */
    MEM32(esi + 0xA1C) = 0x0061B950u; /* 0x006D1B2A: mov dword ptr [esi + 0xa1c], 0x61b950 */
    RECOMP_CALL(sub_006DA380); /* 0x006D1B34: call 0x6da380 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x6CCu); /* 0x006D1B39: push 0x6cc */
    MEM8(esi + 0x40) = (uint8_t)(1); /* 0x006D1B3E: mov byte ptr [esi + 0x40], 1 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D1B42: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D1B48: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = eax; /* 0x006D1B4B: mov dword ptr [ebp + 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x006D1B4E: mov byte ptr [ebp - 4], 5 */
    /* test eax, eax */ /* 0x006D1B52: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D1B62; /* 0x006D1B54: je 0x6d1b62 */
L_006D1B56:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006D1B56: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x006D1B59: mov ecx, eax */
    RECOMP_CALL(sub_006DAF00); /* 0x006D1B5B: call 0x6daf00 */
    RECOMP_FLAGS_IN();
    goto L_006D1B64; /* 0x006D1B60: jmp 0x6d1b64 */
L_006D1B62:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D1B62: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D1B64:
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x006D1B64: mov byte ptr [ebp - 4], 4 */
    MEM32(esi + 0xA14) = eax; /* 0x006D1B68: mov dword ptr [esi + 0xa14], eax */
    MEM32(esi + 0xA18) = 0; /* 0x006D1B6E: mov dword ptr [esi + 0xa18], 0 */
    /* test LO8(ebx), 4 */ /* 0x006D1B78: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D1B87; /* 0x006D1B7B: je 0x6d1b87 */
L_006D1B7D:
    _flag_a = (uint32_t)((MEM32(esi + 0x264) | 0x80080000u)); _flag_b = (uint32_t)((MEM32(esi + 0x264) | 0x80080000u));
    MEM32(esi + 0x264) = MEM32(esi + 0x264) | 0x80080000u; /* 0x006D1B7D: or dword ptr [esi + 0x264], 0x80080000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D1B87:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D1B87: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x614; /* 0x006D1B89: lea eax, [esi + 0x614] */
    /* nop */ /* 0x006D1B8F: nop  */
L_006D1B90:
    ecx = edx; /* 0x006D1B90: mov ecx, edx */
    eax = eax + 0x2; /* 0x006D1B92: lea eax, [eax + 2] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x006D1B95: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x006D1B95: shl ecx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x006D1B98: inc edx */
    _flag_k = FK_INC;
    MEM16(eax + (-0x202)) = (uint16_t)(LO16(ecx)); /* 0x006D1B99: mov word ptr [eax - 0x202], cx */
    MEM16(eax + (-0x2)) = (uint16_t)(LO16(ecx)); /* 0x006D1BA0: mov word ptr [eax - 2], cx */
    MEM16(eax + 0x1FE) = (uint16_t)(LO16(ecx)); /* 0x006D1BA4: mov word ptr [eax + 0x1fe], cx */
    /* cmp edx, 0x100u */ /* 0x006D1BAB: cmp edx, 0x100 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006D1B90; /* 0x006D1BB1: jb 0x6d1b90 */
L_006D1BB3:
    MEM8(esi + 0xA20) = (uint8_t)(0); /* 0x006D1BB3: mov byte ptr [esi + 0xa20], 0 */
    eax = esi; /* 0x006D1BBA: mov eax, esi */
    MEM32(esi + 0xF90) = 0; /* 0x006D1BBC: mov dword ptr [esi + 0xf90], 0 */
    MEM32(esi + 0xF94) = 0; /* 0x006D1BC6: mov dword ptr [esi + 0xf94], 0 */
    MEM32(esi + 0xF98) = 0; /* 0x006D1BD0: mov dword ptr [esi + 0xf98], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006D1BDA: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D1BE1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D1BE4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D1BEB: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D1BEC: pop edi */
    esi = POP32_VAL(esp); /* 0x006D1BED: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D1BEE: pop ebx */
    esp = ebp; /* 0x006D1BEF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D1BF1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006D1BF2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_006D1C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1C00u);

L_006D1C00:
    PUSH32(esp, ebp); /* 0x006D1C00: push ebp */
    ebp = esp; /* 0x006D1C01: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D1C03: push esi */
    esi = ecx; /* 0x006D1C04: mov esi, ecx */
    RECOMP_CALL(sub_006D1C30); /* 0x006D1C06: call 0x6d1c30 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006D1C0B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D1C1B; /* 0x006D1C0F: je 0x6d1c1b */
L_006D1C11:
    PUSH32(esp, esi); /* 0x006D1C11: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D1C12: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D1C18: add esp, 4 */
    _flag_k = FK_ADD;
L_006D1C1B:
    eax = esi; /* 0x006D1C1B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006D1C1D: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D1C1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D1C1F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D1C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1C30u);

L_006D1C30:
    PUSH32(esp, ebp); /* 0x006D1C30: push ebp */
    ebp = esp; /* 0x006D1C31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D1C33: push -1 */
    PUSH32(esp, 0x007C67BDu); /* 0x006D1C35: push 0x7c67bd */
    eax = MEM32(FS_BASE + (0)); /* 0x006D1C3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D1C40: push eax */
    PUSH32(esp, ecx); /* 0x006D1C41: push ecx */
    PUSH32(esp, esi); /* 0x006D1C42: push esi */
    PUSH32(esp, edi); /* 0x006D1C43: push edi */
    eax = MEM32(0x855000); /* 0x006D1C44: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D1C49: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D1C4B: push eax */
    eax = ebp + (-0xC); /* 0x006D1C4C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D1C4F: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006D1C55: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x006D1C57: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x00801720u; /* 0x006D1C5A: mov dword ptr [esi], 0x801720 */
    MEM32(esi + 0x4) = 0x00801848u; /* 0x006D1C60: mov dword ptr [esi + 4], 0x801848 */
    MEM32(ebp + (-0x4)) = 4; /* 0x006D1C67: mov dword ptr [ebp - 4], 4 */
    eax = MEM32(esi + 0x400); /* 0x006D1C6E: mov eax, dword ptr [esi + 0x400] */
    /* test eax, eax */ /* 0x006D1C74: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D1C82; /* 0x006D1C76: je 0x6d1c82 */
L_006D1C78:
    PUSH32(esp, eax); /* 0x006D1C78: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x006D1C79: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D1C7F: add esp, 4 */
    _flag_k = FK_ADD;
L_006D1C82:
    ecx = MEM32(esi + 0xA14); /* 0x006D1C82: mov ecx, dword ptr [esi + 0xa14] */
    /* test ecx, ecx */ /* 0x006D1C88: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D1C9C; /* 0x006D1C8A: je 0x6d1c9c */
L_006D1C8C:
    PUSH32(esp, ecx); /* 0x006D1C8C: push ecx */
    RECOMP_CALL(sub_006D1D90); /* 0x006D1C8D: call 0x6d1d90 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xA14) = 0; /* 0x006D1C92: mov dword ptr [esi + 0xa14], 0 */
L_006D1C9C:
    eax = MEM32(esi + 0x410); /* 0x006D1C9C: mov eax, dword ptr [esi + 0x410] */
    /* test eax, eax */ /* 0x006D1CA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D1CAD; /* 0x006D1CA4: je 0x6d1cad */
L_006D1CA6:
    PUSH32(esp, eax); /* 0x006D1CA6: push eax */
    RECOMP_ICALL(MEM32(0x7CC07C)); /* 0x006D1CA7: call dword ptr [0x7cc07c] */
    RECOMP_FLAGS_IN();
L_006D1CAD:
    MEM32(0x87CBC0) = 0; /* 0x006D1CAD: mov dword ptr [0x87cbc0], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006D1CB7: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(esi + 0xF8C), 0x10u */ /* 0x006D1CBB: cmp dword ptr [esi + 0xf8c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0xF8C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x006D1CC2: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_006D1CD5; /* 0x006D1CC8: jb 0x6d1cd5 */
L_006D1CCA:
    PUSH32(esp, MEM32(esi + 0xF78)); /* 0x006D1CCA: push dword ptr [esi + 0xf78] */
    RECOMP_ICALL(edi); /* 0x006D1CD0: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D1CD2: add esp, 4 */
    _flag_k = FK_ADD;
L_006D1CD5:
    MEM32(esi + 0xF8C) = 0xFu; /* 0x006D1CD5: mov dword ptr [esi + 0xf8c], 0xf */
    MEM32(esi + 0xF88) = 0; /* 0x006D1CDF: mov dword ptr [esi + 0xf88], 0 */
    MEM8(esi + 0xF78) = (uint8_t)(0); /* 0x006D1CE9: mov byte ptr [esi + 0xf78], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006D1CF0: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(esi + 0xF74), 8 */ /* 0x006D1CF4: cmp dword ptr [esi + 0xf74], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0xF74)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D1D08; /* 0x006D1CFB: jb 0x6d1d08 */
L_006D1CFD:
    PUSH32(esp, MEM32(esi + 0xF60)); /* 0x006D1CFD: push dword ptr [esi + 0xf60] */
    RECOMP_ICALL(edi); /* 0x006D1D03: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D1D05: add esp, 4 */
    _flag_k = FK_ADD;
L_006D1D08:
    MEM32(esi + 0xF74) = 7; /* 0x006D1D08: mov dword ptr [esi + 0xf74], 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D1D12: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xF70) = 0; /* 0x006D1D14: mov dword ptr [esi + 0xf70], 0 */
    MEM16(esi + 0xF60) = (uint16_t)(LO16(eax)); /* 0x006D1D1E: mov word ptr [esi + 0xf60], ax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006D1D25: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(esi + 0xF38), 0x10u */ /* 0x006D1D29: cmp dword ptr [esi + 0xf38], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0xF38)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D1D3D; /* 0x006D1D30: jb 0x6d1d3d */
L_006D1D32:
    PUSH32(esp, MEM32(esi + 0xF24)); /* 0x006D1D32: push dword ptr [esi + 0xf24] */
    RECOMP_ICALL(edi); /* 0x006D1D38: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D1D3A: add esp, 4 */
    _flag_k = FK_ADD;
L_006D1D3D:
    MEM32(esi + 0xF38) = 0xFu; /* 0x006D1D3D: mov dword ptr [esi + 0xf38], 0xf */
    ecx = esi + 0x1C; /* 0x006D1D47: lea ecx, [esi + 0x1c] */
    MEM32(esi + 0xF34) = 0; /* 0x006D1D4A: mov dword ptr [esi + 0xf34], 0 */
    MEM8(esi + 0xF24) = (uint8_t)(0); /* 0x006D1D54: mov byte ptr [esi + 0xf24], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x006D1D5B: mov byte ptr [ebp - 4], 0 */
    MEM32(esi + 0x4) = 0x00801890u; /* 0x006D1D5F: mov dword ptr [esi + 4], 0x801890 */
    RECOMP_CALL(sub_006D5DF0); /* 0x006D1D66: call 0x6d5df0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006D1D6B: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(esi) = 0x008017B4u; /* 0x006D1D72: mov dword ptr [esi], 0x8017b4 */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D1D78: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D1D7B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D1D82: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D1D83: pop edi */
    esi = POP32_VAL(esp); /* 0x006D1D84: pop esi */
    esp = ebp; /* 0x006D1D85: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D1D87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D1D88: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D1D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1D90u);

L_006D1D90:
    PUSH32(esp, esi); /* 0x006D1D90: push esi */
    esi = ecx; /* 0x006D1D91: mov esi, ecx */
    RECOMP_CALL(sub_006DB9E0); /* 0x006D1D93: call 0x6db9e0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xAC); /* 0x006D1D98: mov ecx, dword ptr [esi + 0xac] */
    /* test ecx, ecx */ /* 0x006D1D9E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D1DB2; /* 0x006D1DA0: je 0x6d1db2 */
L_006D1DA2:
    eax = MEM32(ecx); /* 0x006D1DA2: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D1DA4: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D1DA5: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xAC) = 0; /* 0x006D1DA8: mov dword ptr [esi + 0xac], 0 */
L_006D1DB2:
    PUSH32(esp, esi); /* 0x006D1DB2: push esi */
    MEM32(esi + 0xA8) = 0; /* 0x006D1DB3: mov dword ptr [esi + 0xa8], 0 */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D1DBD: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D1DC3: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006D1DC6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006D1DC8: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D1DC9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D1DD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1DD0u);

L_006D1DD0:
    PUSH32(esp, ebp); /* 0x006D1DD0: push ebp */
    ebp = esp; /* 0x006D1DD1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x006D1DD3: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0xF98) = eax; /* 0x006D1DD6: mov dword ptr [ecx + 0xf98], eax */
    ebp = POP32_VAL(esp); /* 0x006D1DDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D1DDD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D1DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1DE0u);

L_006D1DE0:
    /* cmp MEM32(ecx + 0xA18), 0 */ /* 0x006D1DE0: cmp dword ptr [ecx + 0xa18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xA18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D1DFA; /* 0x006D1DE7: je 0x6d1dfa */
L_006D1DE9:
    /* cmp MEM8(ecx + 0xB8), 0 */ /* 0x006D1DE9: cmp byte ptr [ecx + 0xb8], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xB8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D1E00; /* 0x006D1DF0: jne 0x6d1e00 */
L_006D1DF2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x006D1DF2: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_006D97E0; /* 0x006D1DF5: jmp 0x6d97e0 */
L_006D1DFA:
    eax = MEM32(ecx); /* 0x006D1DFA: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x006D1DFC: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x006D1DFE: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_006D1E00:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D1E00: ret  */
L_006D97E0:
    PUSH32(esp, ebp); /* 0x006D97E0: push ebp */
    ebp = esp; /* 0x006D97E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D97E3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x006D97E6: push ecx */
    PUSH32(esp, ebx); /* 0x006D97E7: push ebx */
    PUSH32(esp, esi); /* 0x006D97E8: push esi */
    esi = ecx; /* 0x006D97E9: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006D97EB: push edi */
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006D97EC: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D97F7; /* 0x006D97F0: je 0x6d97f7 */
L_006D97F2:
    eax = MEM32(esi + 0x50); /* 0x006D97F2: mov eax, dword ptr [esi + 0x50] */
    goto L_006D97FD; /* 0x006D97F5: jmp 0x6d97fd */
L_006D97F7:
    eax = MEM32(esi + 0x8C); /* 0x006D97F7: mov eax, dword ptr [esi + 0x8c] */
L_006D97FD:
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006D97FD: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(eax); /* 0x006D9801: mov edi, dword ptr [eax] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D980A; /* 0x006D9803: je 0x6d980a */
L_006D9805:
    eax = MEM32(esi + 0x50); /* 0x006D9805: mov eax, dword ptr [esi + 0x50] */
    goto L_006D9810; /* 0x006D9808: jmp 0x6d9810 */
L_006D980A:
    eax = MEM32(esi + 0x8C); /* 0x006D980A: mov eax, dword ptr [esi + 0x8c] */
L_006D9810:
    ebx = MEM32(eax + 0x4); /* 0x006D9810: mov ebx, dword ptr [eax + 4] */
    eax = MEM32(esi); /* 0x006D9813: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x006D9815: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D9817: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0xB4), 0 */ /* 0x006D981A: cmp byte ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = esi; /* 0x006D9821: mov ecx, esi */
    MEM8(esi + 0xBA) = (uint8_t)(1); /* 0x006D9823: mov byte ptr [esi + 0xba], 1 */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D982A: sete al */
    MEM8(esi + 0xB4) = (uint8_t)(LO8(eax)); /* 0x006D982D: mov byte ptr [esi + 0xb4], al */
    MEM8(esi + 0x44) = (uint8_t)(LO8(eax)); /* 0x006D9833: mov byte ptr [esi + 0x44], al */
    eax = MEM32(esi); /* 0x006D9836: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006D9838: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x40B), 0 */ /* 0x006D983B: cmp byte ptr [esi + 0x40b], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x40B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9852; /* 0x006D9842: je 0x6d9852 */
L_006D9844:
    eax = MEM32(esi + 0x108); /* 0x006D9844: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D984A: push 0 */
    PUSH32(esp, eax); /* 0x006D984C: push eax */
    ecx = MEM32(eax); /* 0x006D984D: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x50)); /* 0x006D984F: call dword ptr [ecx + 0x50] */
    RECOMP_FLAGS_IN();
L_006D9852:
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006D9852: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D985D; /* 0x006D9856: je 0x6d985d */
L_006D9858:
    eax = MEM32(esi + 0x50); /* 0x006D9858: mov eax, dword ptr [esi + 0x50] */
    goto L_006D9863; /* 0x006D985B: jmp 0x6d9863 */
L_006D985D:
    eax = MEM32(esi + 0x8C); /* 0x006D985D: mov eax, dword ptr [esi + 0x8c] */
L_006D9863:
    /* cmp MEM32(eax), edi */ /* 0x006D9863: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D988C; /* 0x006D9865: jne 0x6d988c */
L_006D9867:
    /* cmp MEM8(esi + 0x44), 0 */ /* 0x006D9867: cmp byte ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D9872; /* 0x006D986B: je 0x6d9872 */
L_006D986D:
    eax = MEM32(esi + 0x50); /* 0x006D986D: mov eax, dword ptr [esi + 0x50] */
    goto L_006D9878; /* 0x006D9870: jmp 0x6d9878 */
L_006D9872:
    eax = MEM32(esi + 0x8C); /* 0x006D9872: mov eax, dword ptr [esi + 0x8c] */
L_006D9878:
    /* cmp MEM32(eax + 0x4), ebx */ /* 0x006D9878: cmp dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D988C; /* 0x006D987B: jne 0x6d988c */
L_006D987D:
    eax = MEM32(esi); /* 0x006D987D: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D987F: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x006D9881: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x006D9883: mov ecx, esi */
    RECOMP_CALL(sub_006D93B0); /* 0x006D9885: call 0x6d93b0 */
    RECOMP_FLAGS_IN();
    goto L_006D98D4; /* 0x006D988A: jmp 0x6d98d4 */
L_006D988C:
    /* cmp MEM32(esi + 0x108), 0 */ /* 0x006D988C: cmp dword ptr [esi + 0x108], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x108)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D98CD; /* 0x006D9893: je 0x6d98cd */
L_006D9895:
    /* cmp MEM8(esi + 0xBC), 0 */ /* 0x006D9895: cmp byte ptr [esi + 0xbc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xBC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D98AC; /* 0x006D989C: je 0x6d98ac */
L_006D989E:
    eax = MEM32(esi); /* 0x006D989E: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D98A0: mov ecx, esi */
    MEM8(esi + 0xBC) = (uint8_t)(0); /* 0x006D98A2: mov byte ptr [esi + 0xbc], 0 */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x006D98A9: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
L_006D98AC:
    /* cmp MEM8(esi + 0xBB), 0 */ /* 0x006D98AC: cmp byte ptr [esi + 0xbb], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xBB)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D98C3; /* 0x006D98B3: je 0x6d98c3 */
L_006D98B5:
    eax = MEM32(esi); /* 0x006D98B5: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D98B7: mov ecx, esi */
    MEM8(esi + 0xBB) = (uint8_t)(0); /* 0x006D98B9: mov byte ptr [esi + 0xbb], 0 */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x006D98C0: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
L_006D98C3:
    MEM32(esi + 0x108) = 0; /* 0x006D98C3: mov dword ptr [esi + 0x108], 0 */
L_006D98CD:
    ecx = esi; /* 0x006D98CD: mov ecx, esi */
    RECOMP_CALL(sub_006D8CC0); /* 0x006D98CF: call 0x6d8cc0 */
    RECOMP_FLAGS_IN();
L_006D98D4:
    edi = eax; /* 0x006D98D4: mov edi, eax */
    MEM8(esi + 0xBA) = (uint8_t)(0); /* 0x006D98D6: mov byte ptr [esi + 0xba], 0 */
    /* test edi, edi */ /* 0x006D98DD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D995A; /* 0x006D98DF: jns 0x6d995a */
L_006D98E1:
    /* cmp edi, 0x8876017Cu */ /* 0x006D98E1: cmp edi, 0x8876017c */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x8876017Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x8200000Cu; /* 0x006D98E7: mov eax, 0x8200000c */
    if (CMP_NE(_flag_a, _flag_b)) { edi = eax; } /* 0x006D98EC: cmovne edi, eax */
    /* cmp MEM8(esi + 0xB4), 0 */ /* 0x006D98EF: cmp byte ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D9944; /* 0x006D98F6: jne 0x6d9944 */
L_006D98F8:
    eax = MEM32(esi); /* 0x006D98F8: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D98FA: mov ecx, esi */
    MEM8(esi + 0xB4) = (uint8_t)(1); /* 0x006D98FC: mov byte ptr [esi + 0xb4], 1 */
    MEM8(esi + 0x44) = (uint8_t)(1); /* 0x006D9903: mov byte ptr [esi + 0x44], 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006D9907: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x268); /* 0x006D990A: mov ecx, dword ptr [esi + 0x268] */
    eax = MEM32(esi + 0x270); /* 0x006D9910: mov eax, dword ptr [esi + 0x270] */
    edx = MEM32(esi + 0x264); /* 0x006D9916: mov edx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006D991C: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x40u); /* 0x006D991E: push 0x40 */
    PUSH32(esp, eax); /* 0x006D9920: push eax */
    eax = MEM32(esi + 0x26C); /* 0x006D9921: mov eax, dword ptr [esi + 0x26c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006D9927: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006D9929: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D992A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(esi + 0x4), LO8(eax) */ /* 0x006D992C: cmp byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ecx); /* 0x006D992F: push ecx */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D9930: setne al */
    PUSH32(esp, edx); /* 0x006D9933: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x006D9934: add eax, -2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006D9937: push eax */
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x006D9938: push dword ptr [esi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC860)); /* 0x006D993E: call dword ptr [0x7cc860] */
    RECOMP_FLAGS_IN();
L_006D9944:
    PUSH32(esp, 0x00801FC4u); /* 0x006D9944: push 0x801fc4 */
    PUSH32(esp, 1); /* 0x006D9949: push 1 */
    PUSH32(esp, edi); /* 0x006D994B: push edi */
    ecx = esi; /* 0x006D994C: mov ecx, esi */
    RECOMP_CALL(sub_006DA670); /* 0x006D994E: call 0x6da670 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D9953: pop edi */
    esi = POP32_VAL(esp); /* 0x006D9954: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D9955: pop ebx */
    esp = ebp; /* 0x006D9956: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D9958: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D9959: ret  */
L_006D995A:
    /* cmp MEM8(esi + 0xB4), 0 */ /* 0x006D995A: cmp byte ptr [esi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D999D; /* 0x006D9961: je 0x6d999d */
L_006D9963:
    ecx = MEM32(esi + 0x268); /* 0x006D9963: mov ecx, dword ptr [esi + 0x268] */
    eax = MEM32(esi + 0x270); /* 0x006D9969: mov eax, dword ptr [esi + 0x270] */
    edx = MEM32(esi + 0x264); /* 0x006D996F: mov edx, dword ptr [esi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006D9975: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x40u); /* 0x006D9977: push 0x40 */
    PUSH32(esp, eax); /* 0x006D9979: push eax */
    eax = MEM32(esi + 0x26C); /* 0x006D997A: mov eax, dword ptr [esi + 0x26c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006D9980: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x006D9982: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D9983: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(esi + 0x4), LO8(eax) */ /* 0x006D9985: cmp byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ecx); /* 0x006D9988: push ecx */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D9989: setne al */
    PUSH32(esp, edx); /* 0x006D998C: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x006D998D: add eax, -2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006D9990: push eax */
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x006D9991: push dword ptr [esi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC860)); /* 0x006D9997: call dword ptr [0x7cc860] */
    RECOMP_FLAGS_IN();
L_006D999D:
    /* cmp MEM8(esi + 0x5), 0 */ /* 0x006D999D: cmp byte ptr [esi + 5], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x5)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D99BC; /* 0x006D99A1: je 0x6d99bc */
L_006D99A3:
    eax = MEM32(esi + 0x108); /* 0x006D99A3: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 1); /* 0x006D99A9: push 1 */
    PUSH32(esp, eax); /* 0x006D99AB: push eax */
    ecx = MEM32(eax); /* 0x006D99AC: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x50)); /* 0x006D99AE: call dword ptr [ecx + 0x50] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D99B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x006D99B3: setns al */
    MEM8(esi + 0x40B) = (uint8_t)(LO8(eax)); /* 0x006D99B6: mov byte ptr [esi + 0x40b], al */
L_006D99BC:
    eax = esi + 0x274; /* 0x006D99BC: lea eax, [esi + 0x274] */
    PUSH32(esp, eax); /* 0x006D99C2: push eax */
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x006D99C3: push dword ptr [esi + 0xf8] */
    RECOMP_ICALL(MEM32(0x7CC830)); /* 0x006D99C9: call dword ptr [0x7cc830] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x006D99CF: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D99D1: mov ecx, esi */
    PUSH32(esp, 0); /* 0x006D99D3: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x006D99D5: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D99D8: pop edi */
    esi = POP32_VAL(esp); /* 0x006D99D9: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D99DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D99DC: pop ebx */
    esp = ebp; /* 0x006D99DD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D99DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D99E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D1E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1E10u);

L_006D1E10:
    PUSH32(esp, ebp); /* 0x006D1E10: push ebp */
    ebp = esp; /* 0x006D1E11: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D1E13: push esi */
    esi = ecx; /* 0x006D1E14: mov esi, ecx */
    /* cmp MEM8(esi + 0xB8), 0 */ /* 0x006D1E16: cmp byte ptr [esi + 0xb8], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xB8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D1E27; /* 0x006D1E1D: jne 0x6d1e27 */
L_006D1E1F:
    ecx = esi + 0x4; /* 0x006D1E1F: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_006D97E0); /* 0x006D1E22: call 0x6d97e0 */
    RECOMP_FLAGS_IN();
L_006D1E27:
    PUSH32(esp, 0); /* 0x006D1E27: push 0 */
    PUSH32(esp, 0x00801520u); /* 0x006D1E29: push 0x801520 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D1E2E: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x006D1E31: push 0 */
    RECOMP_ICALL(MEM32(0x7CC870)); /* 0x006D1E33: call dword ptr [0x7cc870] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x006D1E39: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D1E3B: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006D1E3D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006D1E40: push 0 */
    RECOMP_ICALL(MEM32(0x7CC540)); /* 0x006D1E42: call dword ptr [0x7cc540] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006D1E48u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D1E50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1E50u);

L_006D1E50:
    PUSH32(esp, ebp); /* 0x006D1E50: push ebp */
    ebp = esp; /* 0x006D1E51: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D1E53: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006D1E54: mov esi, dword ptr [ebp + 8] */
    SET_LO8(eax, 1); /* 0x006D1E57: mov al, 1 */
    PUSH32(esp, edi); /* 0x006D1E59: push edi */
    edi = ecx + 0x414; /* 0x006D1E5A: lea edi, [ecx + 0x414] */
    ecx = 0x180u; /* 0x006D1E60: mov ecx, 0x180 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x006D1E65: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x006D1E67: pop edi */
    esi = POP32_VAL(esp); /* 0x006D1E68: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D1E69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D1E6A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D1E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1E70u);

L_006D1E70:
    PUSH32(esp, ebp); /* 0x006D1E70: push ebp */
    ebp = esp; /* 0x006D1E71: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x006D1E73: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x006D1E76: push esi */
    PUSH32(esp, edi); /* 0x006D1E77: push edi */
    esi = ecx + 0x414; /* 0x006D1E78: lea esi, [ecx + 0x414] */
    edi = eax; /* 0x006D1E7E: mov edi, eax */
    ecx = 0x180u; /* 0x006D1E80: mov ecx, 0x180 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x006D1E85: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x006D1E87: pop edi */
    esi = POP32_VAL(esp); /* 0x006D1E88: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D1E89: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D1E8A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D1E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1E90u);

L_006D1E90:
    PUSH32(esp, ebp); /* 0x006D1E90: push ebp */
    ebp = esp; /* 0x006D1E91: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x006D1E93: sub esp, 0x2c */
    _flag_k = FK_CMP;
    edx = ecx; /* 0x006D1E96: mov edx, ecx */
    eax = MEM32(edx + 0x20); /* 0x006D1E98: mov eax, dword ptr [edx + 0x20] */
    PUSH32(esp, ebx); /* 0x006D1E9B: push ebx */
    PUSH32(esp, esi); /* 0x006D1E9C: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006D1E9D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x006D1E9F: push edi */
    /* test eax, eax */ /* 0x006D1EA0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D1F02; /* 0x006D1EA2: je 0x6d1f02 */
L_006D1EA4:
    /* cmp MEM32(eax), ebx */ /* 0x006D1EA4: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D1EAD; /* 0x006D1EA6: jne 0x6d1ead */
L_006D1EA8:
    esi = MEM32(eax + 0x4); /* 0x006D1EA8: mov esi, dword ptr [eax + 4] */
    goto L_006D1EB2; /* 0x006D1EAB: jmp 0x6d1eb2 */
L_006D1EAD:
    eax = MEM32(eax + 0x4); /* 0x006D1EAD: mov eax, dword ptr [eax + 4] */
    esi = MEM32(eax); /* 0x006D1EB0: mov esi, dword ptr [eax] */
L_006D1EB2:
    /* test esi, esi */ /* 0x006D1EB2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D1F02; /* 0x006D1EB4: je 0x6d1f02 */
L_006D1EB6:
    esi = MEM32(esi + 0x450); /* 0x006D1EB6: mov esi, dword ptr [esi + 0x450] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D1EBC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(esi + 0xC); /* 0x006D1EBE: mov ebx, dword ptr [esi + 0xc] */
    /* test ebx, ebx */ /* 0x006D1EC1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D1F02; /* 0x006D1EC3: jle 0x6d1f02 */
L_006D1EC5:
    edi = MEM32(ebp + (-0x14)); /* 0x006D1EC5: mov edi, dword ptr [ebp - 0x14] */
L_006D1EC8:
    /* cmp MEM32(esi), 0 */ /* 0x006D1EC8: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D1ED8; /* 0x006D1ECB: jne 0x6d1ed8 */
L_006D1ECD:
    eax = MEM32(esi + 0x8); /* 0x006D1ECD: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x006D1ED0: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x4); /* 0x006D1ED3: add eax, dword ptr [esi + 4] */
    _flag_k = FK_ADD;
    goto L_006D1EDE; /* 0x006D1ED6: jmp 0x6d1ede */
L_006D1ED8:
    eax = MEM32(esi + 0x4); /* 0x006D1ED8: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + ecx * 4); /* 0x006D1EDB: mov eax, dword ptr [eax + ecx*4] */
L_006D1EDE:
    _xmm[0] = xmm_ld(eax); /* 0x006D1EDE: movdqu xmm0, xmmword ptr [eax] */
    xmm_st(ebp + (-0x10), _xmm[0]); /* 0x006D1EE2: movdqu xmmword ptr [ebp - 0x10], xmm0 */
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x006D1EE7: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D1EFB; /* 0x006D1EEA: jne 0x6d1efb */
L_006D1EEC:
    eax = MEM32(ebp + (-0x10)); /* 0x006D1EEC: mov eax, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + (-0x8)); /* 0x006D1EEF: mov edi, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x006D1EF2: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x006D1EF5: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x28)) = eax; /* 0x006D1EF8: mov dword ptr [ebp - 0x28], eax */
L_006D1EFB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006D1EFB: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x006D1EFC: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006D1EC8; /* 0x006D1EFE: jl 0x6d1ec8 */
L_006D1F00:
    goto L_006D1F05; /* 0x006D1F00: jmp 0x6d1f05 */
L_006D1F02:
    edi = MEM32(ebp + (-0x14)); /* 0x006D1F02: mov edi, dword ptr [ebp - 0x14] */
L_006D1F05:
    /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu */ /* 0x006D1F05: cmp dword ptr [ebp + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D1F7D; /* 0x006D1F09: jne 0x6d1f7d */
L_006D1F0B:
    /* cmp MEM8(edx + 0xB8), 0 */ /* 0x006D1F0B: cmp byte ptr [edx + 0xb8], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xB8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D1F2A; /* 0x006D1F12: je 0x6d1f2a */
L_006D1F14:
    eax = MEM32(edx + 0x80); /* 0x006D1F14: mov eax, dword ptr [edx + 0x80] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D1F1A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = eax; /* 0x006D1F1C: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(edx + 0x84); /* 0x006D1F1F: mov eax, dword ptr [edx + 0x84] */
    MEM32(ebp + (-0x28)) = eax; /* 0x006D1F25: mov dword ptr [ebp - 0x28], eax */
    goto L_006D1F7D; /* 0x006D1F28: jmp 0x6d1f7d */
L_006D1F2A:
    /* cmp MEM8(edx + 0x48), 0 */ /* 0x006D1F2A: cmp byte ptr [edx + 0x48], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x48)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = edx + 0x58; /* 0x006D1F2E: lea eax, [edx + 0x58] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D1F39; /* 0x006D1F31: jne 0x6d1f39 */
L_006D1F33:
    eax = edx + 0x94; /* 0x006D1F33: lea eax, [edx + 0x94] */
L_006D1F39:
    /* cmp MEM8(edx + 0x48), 0 */ /* 0x006D1F39: cmp byte ptr [edx + 0x48], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x48)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _xmm[0] = xmm_ld(eax); /* 0x006D1F3D: movdqu xmm0, xmmword ptr [eax] */
    eax = edx + 0x58; /* 0x006D1F41: lea eax, [edx + 0x58] */
    MEM32(ebp + (-0x2C)) = _xmm[0].u32[0]; /* 0x006D1F44: movd dword ptr [ebp - 0x2c], xmm0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D1F51; /* 0x006D1F49: jne 0x6d1f51 */
L_006D1F4B:
    eax = edx + 0x94; /* 0x006D1F4B: lea eax, [edx + 0x94] */
L_006D1F51:
    /* cmp MEM8(edx + 0x48), 0 */ /* 0x006D1F51: cmp byte ptr [edx + 0x48], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x48)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _xmm[0] = xmm_ld(eax); /* 0x006D1F55: movdqu xmm0, xmmword ptr [eax] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x006D1F59: psrldq xmm0, 4 */
    MEM32(ebp + (-0x28)) = _xmm[0].u32[0]; /* 0x006D1F5E: movd dword ptr [ebp - 0x28], xmm0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D1F6A; /* 0x006D1F63: je 0x6d1f6a */
L_006D1F65:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x58u; /* 0x006D1F65: add edx, 0x58 */
    _flag_k = FK_ADD;
    goto L_006D1F70; /* 0x006D1F68: jmp 0x6d1f70 */
L_006D1F6A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x94u; /* 0x006D1F6A: add edx, 0x94 */
    _flag_k = FK_ADD;
L_006D1F70:
    _xmm[0] = xmm_ld(edx); /* 0x006D1F70: movdqu xmm0, xmmword ptr [edx] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 8 >= 0 && _k + 8 < 16) ? _s.u8[_k + 8] : 0; } /* 0x006D1F74: psrldq xmm0, 8 */
    edi = _xmm[0].u32[0]; /* 0x006D1F79: movd edi, xmm0 */
L_006D1F7D:
    ecx = MEM32(ebp + 0x8); /* 0x006D1F7D: mov ecx, dword ptr [ebp + 8] */
    eax = ebx; /* 0x006D1F80: mov eax, ebx */
    _xmm[0] = xmm_ld(ebp + (-0x2C)); /* 0x006D1F82: movdqu xmm0, xmmword ptr [ebp - 0x2c] */
    xmm_st(ecx, _xmm[0]); /* 0x006D1F87: movdqu xmmword ptr [ecx], xmm0 */
    _xmm[0].u64[0] = MEM64(ebp + (-0x1C)); _xmm[0].u64[1] = 0; /* 0x006D1F8B: movq xmm0, qword ptr [ebp - 0x1c] */
    MEM64(ecx + 0x10) = _xmm[0].u64[0]; /* 0x006D1F90: movq qword ptr [ecx + 0x10], xmm0 */
    MEM32(ecx + 0x18) = edi; /* 0x006D1F95: mov dword ptr [ecx + 0x18], edi */
    edi = POP32_VAL(esp); /* 0x006D1F98: pop edi */
    esi = POP32_VAL(esp); /* 0x006D1F99: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D1F9A: pop ebx */
    esp = ebp; /* 0x006D1F9B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D1F9D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D1F9E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006D1FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D1FB0u);

L_006D1FB0:
    PUSH32(esp, ebp); /* 0x006D1FB0: push ebp */
    ebp = esp; /* 0x006D1FB1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006D1FB3: push ebx */
    ebx = ecx; /* 0x006D1FB4: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x006D1FB6: push esi */
    PUSH32(esp, edi); /* 0x006D1FB7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006D1FB8: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x20); /* 0x006D1FBB: mov eax, dword ptr [ebx + 0x20] */
    /* test eax, eax */ /* 0x006D1FBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D2041; /* 0x006D1FC0: je 0x6d2041 */
L_006D1FC2:
    /* cmp MEM32(eax), 0 */ /* 0x006D1FC2: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D1FCC; /* 0x006D1FC5: jne 0x6d1fcc */
L_006D1FC7:
    edx = MEM32(eax + 0x4); /* 0x006D1FC7: mov edx, dword ptr [eax + 4] */
    goto L_006D1FD1; /* 0x006D1FCA: jmp 0x6d1fd1 */
L_006D1FCC:
    eax = MEM32(eax + 0x4); /* 0x006D1FCC: mov eax, dword ptr [eax + 4] */
    edx = MEM32(eax); /* 0x006D1FCF: mov edx, dword ptr [eax] */
L_006D1FD1:
    /* test edx, edx */ /* 0x006D1FD1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D2041; /* 0x006D1FD3: je 0x6d2041 */
L_006D1FD5:
    edx = MEM32(edx + 0x450); /* 0x006D1FD5: mov edx, dword ptr [edx + 0x450] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D1FDB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(edx + 0xC); /* 0x006D1FDD: mov esi, dword ptr [edx + 0xc] */
    /* test esi, esi */ /* 0x006D1FE0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D2041; /* 0x006D1FE2: jle 0x6d2041 */
L_006D1FE4:
    /* cmp MEM32(edx), 0 */ /* 0x006D1FE4: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D1FF4; /* 0x006D1FE7: jne 0x6d1ff4 */
L_006D1FE9:
    eax = MEM32(edx + 0x8); /* 0x006D1FE9: mov eax, dword ptr [edx + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x006D1FEC: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx + 0x4); /* 0x006D1FEF: add eax, dword ptr [edx + 4] */
    _flag_k = FK_ADD;
    goto L_006D1FFA; /* 0x006D1FF2: jmp 0x6d1ffa */
L_006D1FF4:
    eax = MEM32(edx + 0x4); /* 0x006D1FF4: mov eax, dword ptr [edx + 4] */
    eax = MEM32(eax + ecx * 4); /* 0x006D1FF7: mov eax, dword ptr [eax + ecx*4] */
L_006D1FFA:
    _xmm[1] = xmm_ld(eax); /* 0x006D1FFA: movdqu xmm1, xmmword ptr [eax] */
    eax = _xmm[1].u32[0]; /* 0x006D1FFE: movd eax, xmm1 */
    /* cmp MEM32(edi), eax */ /* 0x006D2002: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D203C; /* 0x006D2004: jne 0x6d203c */
L_006D2006:
    _xmm[0] = _xmm[1]; /* 0x006D2006: movdqa xmm0, xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x006D200A: psrldq xmm0, 4 */
    eax = _xmm[0].u32[0]; /* 0x006D200F: movd eax, xmm0 */
    /* cmp MEM32(edi + 0x4), eax */ /* 0x006D2013: cmp dword ptr [edi + 4], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D203C; /* 0x006D2016: jne 0x6d203c */
L_006D2018:
    _xmm[0] = _xmm[1]; /* 0x006D2018: movdqa xmm0, xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 12 >= 0 && _k + 12 < 16) ? _s.u8[_k + 12] : 0; } /* 0x006D201C: psrldq xmm0, 0xc */
    eax = _xmm[0].u32[0]; /* 0x006D2021: movd eax, xmm0 */
    /* cmp eax, 0x16u */ /* 0x006D2025: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D203C; /* 0x006D2028: jne 0x6d203c */
L_006D202A:
    _xmm[0] = _xmm[1]; /* 0x006D202A: movdqa xmm0, xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_k + 8 >= 0 && _k + 8 < 16) ? _s.u8[_k + 8] : 0; } /* 0x006D202E: psrldq xmm0, 8 */
    eax = _xmm[0].u32[0]; /* 0x006D2033: movd eax, xmm0 */
    /* cmp MEM32(edi + 0x18), eax */ /* 0x006D2037: cmp dword ptr [edi + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D20A5; /* 0x006D203A: je 0x6d20a5 */
L_006D203C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006D203C: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x006D203D: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006D1FE4; /* 0x006D203F: jl 0x6d1fe4 */
L_006D2041:
    eax = MEM32(ebx + 0x4); /* 0x006D2041: mov eax, dword ptr [ebx + 4] */
    ecx = ebx + 0x4; /* 0x006D2044: lea ecx, [ebx + 4] */
    MEM8(ebx + 0xB8) = (uint8_t)(1); /* 0x006D2047: mov byte ptr [ebx + 0xb8], 1 */
    MEM8(ebx + 0xBE) = (uint8_t)(0); /* 0x006D204E: mov byte ptr [ebx + 0xbe], 0 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006D2055: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(ebx + 0xB8)); /* 0x006D2058: mov al, byte ptr [ebx + 0xb8] */
    PUSH32(esp, 0x40u); /* 0x006D205E: push 0x40 */
    MEM8(ebx + 0x48) = (uint8_t)(LO8(eax)); /* 0x006D2060: mov byte ptr [ebx + 0x48], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D2063: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006D2065: push dword ptr [edi + 4] */
    /* cmp MEM8(ebx + 0x8), LO8(eax) */ /* 0x006D2068: cmp byte ptr [ebx + 8], al */
    _flag_a = (uint32_t)(MEM8(ebx + 0x8)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, MEM32(edi)); /* 0x006D206B: push dword ptr [edi] */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D206D: setne al */
    PUSH32(esp, MEM32(ebx + 0x26C)); /* 0x006D2070: push dword ptr [ebx + 0x26c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x006D2076: add eax, -2 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebx + 0x268)); /* 0x006D2079: push dword ptr [ebx + 0x268] */
    PUSH32(esp, eax); /* 0x006D207F: push eax */
    PUSH32(esp, MEM32(ebx + 0xFC)); /* 0x006D2080: push dword ptr [ebx + 0xfc] */
    RECOMP_ICALL(MEM32(0x7CC860)); /* 0x006D2086: call dword ptr [0x7cc860] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x006D208C: mov eax, dword ptr [ebx + 4] */
    ecx = ebx + 0x4; /* 0x006D208F: lea ecx, [ebx + 4] */
    RECOMP_ICALL(MEM32(eax)); /* 0x006D2092: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = ebx + 0x4; /* 0x006D2094: lea ecx, [ebx + 4] */
    RECOMP_CALL(sub_006D8B90); /* 0x006D2097: call 0x6d8b90 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D209C: pop edi */
    esi = POP32_VAL(esp); /* 0x006D209D: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006D209E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x006D20A0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006D20A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D20A2: ret 4 */
L_006D20A5:
    ecx = ebx + 0x4; /* 0x006D20A5: lea ecx, [ebx + 4] */
    MEM8(ebx + 0xB8) = (uint8_t)(1); /* 0x006D20A8: mov byte ptr [ebx + 0xb8], 1 */
    xmm_st(ebx + 0x94, _xmm[1]); /* 0x006D20AF: movdqu xmmword ptr [ebx + 0x94], xmm1 */
    RECOMP_CALL(sub_006D97E0); /* 0x006D20B7: call 0x6d97e0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D20BC: pop edi */
    esi = POP32_VAL(esp); /* 0x006D20BD: pop esi */
    SET_LO8(eax, 1); /* 0x006D20BE: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x006D20C0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006D20C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D20C2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D20D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D20D0u);

L_006D20D0:
    PUSH32(esp, esi); /* 0x006D20D0: push esi */
    esi = ecx; /* 0x006D20D1: mov esi, ecx */
    eax = MEM32(esi + 0x20); /* 0x006D20D3: mov eax, dword ptr [esi + 0x20] */
    /* cmp MEM32(eax), 0 */ /* 0x006D20D6: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0x4); /* 0x006D20D9: mov eax, dword ptr [eax + 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D20E0; /* 0x006D20DC: je 0x6d20e0 */
L_006D20DE:
    eax = MEM32(eax); /* 0x006D20DE: mov eax, dword ptr [eax] */
L_006D20E0:
    /* cmp MEM8(eax + 0x204), 0 */ /* 0x006D20E0: cmp byte ptr [eax + 0x204], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x204)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = eax + 0x204; /* 0x006D20E7: lea edx, [eax + 0x204] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D20F3; /* 0x006D20ED: jne 0x6d20f3 */
L_006D20EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D20EF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006D210A; /* 0x006D20F1: jmp 0x6d210a */
L_006D20F3:
    ecx = edx; /* 0x006D20F3: mov ecx, edx */
    PUSH32(esp, edi); /* 0x006D20F5: push edi */
    edi = ecx + 0x1; /* 0x006D20F6: lea edi, [ecx + 1] */
    esp = esp; /* 0x006D20F9: lea esp, [esp] */
L_006D2100:
    SET_LO8(eax, MEM8(ecx)); /* 0x006D2100: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006D2102: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006D2103: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D2100; /* 0x006D2105: jne 0x6d2100 */
L_006D2107:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x006D2107: sub ecx, edi */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x006D2109: pop edi */
L_006D210A:
    PUSH32(esp, ecx); /* 0x006D210A: push ecx */
    PUSH32(esp, edx); /* 0x006D210B: push edx */
    ecx = esi + 0xF78; /* 0x006D210C: lea ecx, [esi + 0xf78] */
    RECOMP_CALL(sub_0040A2F0); /* 0x006D2112: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0xF8C), 0x10u */ /* 0x006D2117: cmp dword ptr [esi + 0xf8c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0xF8C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D2128; /* 0x006D211E: jb 0x6d2128 */
L_006D2120:
    eax = MEM32(esi + 0xF78); /* 0x006D2120: mov eax, dword ptr [esi + 0xf78] */
    esi = POP32_VAL(esp); /* 0x006D2126: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D2127: ret  */
L_006D2128:
    eax = esi + 0xF78; /* 0x006D2128: lea eax, [esi + 0xf78] */
    esi = POP32_VAL(esp); /* 0x006D212E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D212F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D2130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D2130u);

L_006D2130:
    PUSH32(esp, ebp); /* 0x006D2130: push ebp */
    ebp = esp; /* 0x006D2131: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D2133: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xBCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xBCu; /* 0x006D2136: sub esp, 0xbc */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D213C: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D2141: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xB8) = eax; /* 0x006D2143: mov dword ptr [esp + 0xb8], eax */
    PUSH32(esp, ebx); /* 0x006D214A: push ebx */
    PUSH32(esp, esi); /* 0x006D214B: push esi */
    PUSH32(esp, edi); /* 0x006D214C: push edi */
    edi = edx; /* 0x006D214D: mov edi, edx */
    ebx = ecx; /* 0x006D214F: mov ebx, ecx */
    MEM32(esp + 0xC) = edi; /* 0x006D2151: mov dword ptr [esp + 0xc], edi */
    esi = MEM32(ebx); /* 0x006D2155: mov esi, dword ptr [ebx] */
    eax = edi + 0x3E0; /* 0x006D2157: lea eax, [edi + 0x3e0] */
    PUSH32(esp, eax); /* 0x006D215D: push eax */
    PUSH32(esp, 0x100u); /* 0x006D215E: push 0x100 */
    PUSH32(esp, ebx); /* 0x006D2163: push ebx */
    RECOMP_ICALL(MEM32(esi + 0xB0)); /* 0x006D2164: call dword ptr [esi + 0xb0] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x006D216A: mov ecx, dword ptr [ebx] */
    eax = edi + 0x420; /* 0x006D216C: lea eax, [edi + 0x420] */
    PUSH32(esp, eax); /* 0x006D2172: push eax */
    PUSH32(esp, 2); /* 0x006D2173: push 2 */
    PUSH32(esp, ebx); /* 0x006D2175: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0xB0)); /* 0x006D2176: call dword ptr [ecx + 0xb0] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x006D217C: mov ecx, dword ptr [ebx] */
    eax = edi + 0x460; /* 0x006D217E: lea eax, [edi + 0x460] */
    PUSH32(esp, eax); /* 0x006D2184: push eax */
    PUSH32(esp, 3); /* 0x006D2185: push 3 */
    PUSH32(esp, ebx); /* 0x006D2187: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0xB0)); /* 0x006D2188: call dword ptr [ecx + 0xb0] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(0x927C4C), 0 */ /* 0x006D218E: cmp byte ptr [0x927c4c], 0 */
    _flag_a = (uint32_t)(MEM8(0x927C4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D21AA; /* 0x006D2195: jne 0x6d21aa */
L_006D2197:
    ecx = 0x100u; /* 0x006D2197: mov ecx, 0x100 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x006D219C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x00927C60u; /* 0x006D219F: mov edi, 0x927c60 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x006D21A4: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = MEM32(esp + 0xC); /* 0x006D21A6: mov edi, dword ptr [esp + 0xc] */
L_006D21AA:
    eax = (uint32_t)MEM8(edi); /* 0x006D21AA: movzx eax, byte ptr [edi] */
    ecx = MEM32(ebx); /* 0x006D21AD: mov ecx, dword ptr [ebx] */
    PUSH32(esp, eax); /* 0x006D21AF: push eax */
    PUSH32(esp, 0xEu); /* 0x006D21B0: push 0xe */
    PUSH32(esp, ebx); /* 0x006D21B2: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D21B3: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM8(edi + 0x2); /* 0x006D21B9: movzx eax, byte ptr [edi + 2] */
    ecx = MEM32(ebx); /* 0x006D21BD: mov ecx, dword ptr [ebx] */
    PUSH32(esp, eax); /* 0x006D21BF: push eax */
    PUSH32(esp, 0xFu); /* 0x006D21C0: push 0xf */
    PUSH32(esp, ebx); /* 0x006D21C2: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D21C3: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM8(edi + 0x8); /* 0x006D21C9: movzx eax, byte ptr [edi + 8] */
    ecx = MEM32(ebx); /* 0x006D21CD: mov ecx, dword ptr [ebx] */
    PUSH32(esp, eax); /* 0x006D21CF: push eax */
    PUSH32(esp, 0x1Bu); /* 0x006D21D0: push 0x1b */
    PUSH32(esp, ebx); /* 0x006D21D2: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D21D3: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x006D21D9: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D21DB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(edi + 0x9), LO8(eax) */ /* 0x006D21DD: cmp byte ptr [edi + 9], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x9)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D21E0: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x006D21E3: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006D21E6: push eax */
    PUSH32(esp, 8); /* 0x006D21E7: push 8 */
    PUSH32(esp, ebx); /* 0x006D21E9: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D21EA: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x006D21F0: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D21F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(edi + 0x1), LO8(eax) */ /* 0x006D21F4: cmp byte ptr [edi + 1], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D21F7: sete al */
    eax = eax * 4 + 0x4; /* 0x006D21FA: lea eax, [eax*4 + 4] */
    PUSH32(esp, eax); /* 0x006D2201: push eax */
    PUSH32(esp, 0x17u); /* 0x006D2202: push 0x17 */
    PUSH32(esp, ebx); /* 0x006D2204: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D2205: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x006D220B: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D220D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(edi + 0xA), LO8(eax) */ /* 0x006D220F: cmp byte ptr [edi + 0xa], al */
    _flag_a = (uint32_t)(MEM8(edi + 0xA)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D2212: sete al */
    eax = eax * 2 + 0x1; /* 0x006D2215: lea eax, [eax*2 + 1] */
    PUSH32(esp, eax); /* 0x006D221C: push eax */
    PUSH32(esp, 0x16u); /* 0x006D221D: push 0x16 */
    PUSH32(esp, ebx); /* 0x006D221F: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D2220: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(edi + 0x4); _xmm[0].u64[1] = 0; /* 0x006D2226: movss xmm0, dword ptr [edi + 4] */
    { float _s = sse_f32(MEM32(0x8095DC)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006D222B: mulss xmm0, dword ptr [0x8095dc] */
    esi = MEM32(ebx); /* 0x006D2233: mov esi, dword ptr [ebx] */
    RECOMP_CALL(sub_007803B0); /* 0x006D2235: call 0x7803b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006D223A: push eax */
    PUSH32(esp, 0x18u); /* 0x006D223B: push 0x18 */
    PUSH32(esp, ebx); /* 0x006D223D: push ebx */
    RECOMP_ICALL(MEM32(esi + 0xE4)); /* 0x006D223E: call dword ptr [esi + 0xe4] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(edi + 0x1C), 0 */ /* 0x006D2244: cmp byte ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebx); /* 0x006D2248: mov eax, dword ptr [ebx] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D2250; /* 0x006D224A: je 0x6d2250 */
L_006D224C:
    PUSH32(esp, 0); /* 0x006D224C: push 0 */
    goto L_006D2252; /* 0x006D224E: jmp 0x6d2252 */
L_006D2250:
    PUSH32(esp, 0xFu); /* 0x006D2250: push 0xf */
L_006D2252:
    PUSH32(esp, 0xA8u); /* 0x006D2252: push 0xa8 */
    PUSH32(esp, ebx); /* 0x006D2257: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xE4)); /* 0x006D2258: call dword ptr [eax + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x006D225E: mov eax, dword ptr [ebx] */
    PUSH32(esp, 1); /* 0x006D2260: push 1 */
    PUSH32(esp, 0x30u); /* 0x006D2262: push 0x30 */
    PUSH32(esp, ebx); /* 0x006D2264: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xE4)); /* 0x006D2265: call dword ptr [eax + 0xe4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x006D226B: push dword ptr [edi + 0x18] */
    eax = MEM32(ebx); /* 0x006D226E: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0x22u); /* 0x006D2270: push 0x22 */
    PUSH32(esp, ebx); /* 0x006D2272: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xE4)); /* 0x006D2273: call dword ptr [eax + 0xe4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x006D2279: push dword ptr [edi + 0x10] */
    eax = MEM32(ebx); /* 0x006D227C: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0x24u); /* 0x006D227E: push 0x24 */
    PUSH32(esp, ebx); /* 0x006D2280: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xE4)); /* 0x006D2281: call dword ptr [eax + 0xe4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x006D2287: push dword ptr [edi + 0x14] */
    eax = MEM32(ebx); /* 0x006D228A: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0x25u); /* 0x006D228C: push 0x25 */
    PUSH32(esp, ebx); /* 0x006D228E: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xE4)); /* 0x006D228F: call dword ptr [eax + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM8(edi + 0xC); /* 0x006D2295: movzx eax, byte ptr [edi + 0xc] */
    ecx = MEM32(ebx); /* 0x006D2299: mov ecx, dword ptr [ebx] */
    PUSH32(esp, eax); /* 0x006D229B: push eax */
    PUSH32(esp, 0x1Cu); /* 0x006D229C: push 0x1c */
    PUSH32(esp, ebx); /* 0x006D229E: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D229F: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x006D22A5: mov eax, dword ptr [ebx] */
    PUSH32(esp, 3); /* 0x006D22A7: push 3 */
    PUSH32(esp, 0x23u); /* 0x006D22A9: push 0x23 */
    PUSH32(esp, ebx); /* 0x006D22AB: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xE4)); /* 0x006D22AC: call dword ptr [eax + 0xe4] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(edi + 0xB), 0 */ /* 0x006D22B2: cmp byte ptr [edi + 0xb], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xB)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D24EB; /* 0x006D22B6: je 0x6d24eb */
L_006D22BC:
    PUSH32(esp, 0x44u); /* 0x006D22BC: push 0x44 */
    eax = esp + 0x7C; /* 0x006D22BE: lea eax, [esp + 0x7c] */
    PUSH32(esp, 0); /* 0x006D22C2: push 0 */
    PUSH32(esp, eax); /* 0x006D22C4: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x006D22C5: call 0x78083e */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(edi + 0x4B0); _xmm[0].u64[1] = 0; /* 0x006D22CA: movss xmm0, dword ptr [edi + 0x4b0] */
    ecx = esp + 0x84; /* 0x006D22D2: lea ecx, [esp + 0x84] */
    eax = MEM32(ebx); /* 0x006D22D9: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006D22DB: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x78) = _xmm[0].u32[0]; /* 0x006D22DE: movss dword ptr [esp + 0x78], xmm0 */
    _xmm[0].u64[0] = MEM32(edi + 0x4B4); _xmm[0].u64[1] = 0; /* 0x006D22E4: movss xmm0, dword ptr [edi + 0x4b4] */
    MEM32(esp + 0x7C) = _xmm[0].u32[0]; /* 0x006D22EC: movss dword ptr [esp + 0x7c], xmm0 */
    _xmm[0].u64[0] = MEM32(edi + 0x4B8); _xmm[0].u64[1] = 0; /* 0x006D22F2: movss xmm0, dword ptr [edi + 0x4b8] */
    MEM32(esp + 0x80) = _xmm[0].u32[0]; /* 0x006D22FA: movss dword ptr [esp + 0x80], xmm0 */
    _xmm[0].u64[0] = MEM32(edi + 0x4A0); _xmm[0].u64[1] = 0; /* 0x006D2303: movss xmm0, dword ptr [edi + 0x4a0] */
    MEM32(esp + 0x88) = _xmm[0].u32[0]; /* 0x006D230B: movss dword ptr [esp + 0x88], xmm0 */
    _xmm[0].u64[0] = MEM32(edi + 0x4A4); _xmm[0].u64[1] = 0; /* 0x006D2314: movss xmm0, dword ptr [edi + 0x4a4] */
    MEM32(esp + 0x8C) = _xmm[0].u32[0]; /* 0x006D231C: movss dword ptr [esp + 0x8c], xmm0 */
    _xmm[0].u64[0] = MEM32(edi + 0x4A8); _xmm[0].u64[1] = 0; /* 0x006D2325: movss xmm0, dword ptr [edi + 0x4a8] */
    MEM32(esp + 0x90) = _xmm[0].u32[0]; /* 0x006D232D: movss dword ptr [esp + 0x90], xmm0 */
    _xmm[0].u64[0] = MEM32(edi + 0x4C0); _xmm[0].u64[1] = 0; /* 0x006D2336: movss xmm0, dword ptr [edi + 0x4c0] */
    MEM32(esp + 0x98) = _xmm[0].u32[0]; /* 0x006D233E: movss dword ptr [esp + 0x98], xmm0 */
    _xmm[0].u64[0] = MEM32(edi + 0x4C4); _xmm[0].u64[1] = 0; /* 0x006D2347: movss xmm0, dword ptr [edi + 0x4c4] */
    MEM32(esp + 0x9C) = _xmm[0].u32[0]; /* 0x006D234F: movss dword ptr [esp + 0x9c], xmm0 */
    _xmm[0].u64[0] = MEM32(edi + 0x4C8); _xmm[0].u64[1] = 0; /* 0x006D2358: movss xmm0, dword ptr [edi + 0x4c8] */
    PUSH32(esp, ecx); /* 0x006D2360: push ecx */
    PUSH32(esp, ebx); /* 0x006D2361: push ebx */
    MEM32(esp + 0x8C) = 0x3F800000u; /* 0x006D2362: mov dword ptr [esp + 0x8c], 0x3f800000 */
    MEM32(esp + 0x9C) = 0x3F800000u; /* 0x006D236D: mov dword ptr [esp + 0x9c], 0x3f800000 */
    MEM32(esp + 0xA8) = _xmm[0].u32[0]; /* 0x006D2378: movss dword ptr [esp + 0xa8], xmm0 */
    MEM32(esp + 0xAC) = 0; /* 0x006D2381: mov dword ptr [esp + 0xac], 0 */
    MEM32(esp + 0xC0) = 0x3F800000u; /* 0x006D238C: mov dword ptr [esp + 0xc0], 0x3f800000 */
    RECOMP_ICALL(MEM32(eax + 0xC4)); /* 0x006D2397: call dword ptr [eax + 0xc4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x006D239D: mov eax, dword ptr [ebx] */
    PUSH32(esp, 1); /* 0x006D239F: push 1 */
    PUSH32(esp, 0x89u); /* 0x006D23A1: push 0x89 */
    PUSH32(esp, ebx); /* 0x006D23A6: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xE4)); /* 0x006D23A7: call dword ptr [eax + 0xe4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x68u); /* 0x006D23AD: push 0x68 */
    eax = esp + 0x14; /* 0x006D23AF: lea eax, [esp + 0x14] */
    PUSH32(esp, 0); /* 0x006D23B3: push 0 */
    PUSH32(esp, eax); /* 0x006D23B5: push eax */
    RECOMP_CALL(sub_0078083E); /* 0x006D23B6: call 0x78083e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x006D23BB: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006D23BD: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 1); /* 0x006D23C0: push 1 */
    PUSH32(esp, 0x1Du); /* 0x006D23C2: push 0x1d */
    PUSH32(esp, ebx); /* 0x006D23C4: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xE4)); /* 0x006D23C5: call dword ptr [eax + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x006D23CB: mov eax, dword ptr [ebx] */
    PUSH32(esp, 1); /* 0x006D23CD: push 1 */
    PUSH32(esp, 0x8Eu); /* 0x006D23CF: push 0x8e */
    PUSH32(esp, ebx); /* 0x006D23D4: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xE4)); /* 0x006D23D5: call dword ptr [eax + 0xe4] */
    RECOMP_FLAGS_IN();
    esi = edi + 0x58; /* 0x006D23DB: lea esi, [edi + 0x58] */
    ecx = 1; /* 0x006D23DE: mov ecx, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D23E3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006D23F0; /* 0x006D23E5: jmp 0x6d23f0 */
L_006D23F0:
    _xmm[0].u64[0] = MEM32(esi); _xmm[0].u64[1] = 0; /* 0x006D23F0: movss xmm0, dword ptr [esi] */
    eax = 3; /* 0x006D23F4: mov eax, 3 */
    MEM32(esp + 0x14) = _xmm[0].u32[0]; /* 0x006D23F9: movss dword ptr [esp + 0x14], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + 0x4); _xmm[0].u64[1] = 0; /* 0x006D23FF: movss xmm0, dword ptr [esi + 4] */
    MEM32(esp + 0x18) = _xmm[0].u32[0]; /* 0x006D2404: movss dword ptr [esp + 0x18], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + 0x8); _xmm[0].u64[1] = 0; /* 0x006D240A: movss xmm0, dword ptr [esi + 8] */
    MEM32(esp + 0x1C) = _xmm[0].u32[0]; /* 0x006D240F: movss dword ptr [esp + 0x1c], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + (-0x10)); _xmm[0].u64[1] = 0; /* 0x006D2415: movss xmm0, dword ptr [esi - 0x10] */
    MEM32(esp + 0x34) = _xmm[0].u32[0]; /* 0x006D241A: movss dword ptr [esp + 0x34], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + (-0xC)); _xmm[0].u64[1] = 0; /* 0x006D2420: movss xmm0, dword ptr [esi - 0xc] */
    /* cmp MEM8(esi + 0x30), 0 */ /* 0x006D2425: cmp byte ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(esp + 0x38) = _xmm[0].u32[0]; /* 0x006D2429: movss dword ptr [esp + 0x38], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + (-0x8)); _xmm[0].u64[1] = 0; /* 0x006D242F: movss xmm0, dword ptr [esi - 8] */
    if (CMP_NE(_flag_a, _flag_b)) { eax = ecx; } /* 0x006D2434: cmovne eax, ecx */
    MEM32(esp + 0x3C) = _xmm[0].u32[0]; /* 0x006D2437: movss dword ptr [esp + 0x3c], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + 0x10); _xmm[0].u64[1] = 0; /* 0x006D243D: movss xmm0, dword ptr [esi + 0x10] */
    MEM32(esp + 0x24) = _xmm[0].u32[0]; /* 0x006D2442: movss dword ptr [esp + 0x24], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + 0x14); _xmm[0].u64[1] = 0; /* 0x006D2448: movss xmm0, dword ptr [esi + 0x14] */
    ecx = MEM32(ebx); /* 0x006D244D: mov ecx, dword ptr [ebx] */
    MEM32(esp + 0x28) = _xmm[0].u32[0]; /* 0x006D244F: movss dword ptr [esp + 0x28], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + 0x18); _xmm[0].u64[1] = 0; /* 0x006D2455: movss xmm0, dword ptr [esi + 0x18] */
    MEM32(esp + 0x2C) = _xmm[0].u32[0]; /* 0x006D245A: movss dword ptr [esp + 0x2c], xmm0 */
    _xmm[0] = xmm_ld(esi + (-0x28)); /* 0x006D2460: movups xmm0, xmmword ptr [esi - 0x28] */
    MEM32(esp + 0x10) = eax; /* 0x006D2464: mov dword ptr [esp + 0x10], eax */
    eax = (uint32_t)MEM8(esi + (-0x2C)); /* 0x006D2468: movzx eax, byte ptr [esi - 0x2c] */
    xmm_st(esp + 0x44, _xmm[0]); /* 0x006D246C: movups xmmword ptr [esp + 0x44], xmm0 */
    PUSH32(esp, eax); /* 0x006D2471: push eax */
    _xmm[0].u64[0] = MEM32(esi + (-0x18)); _xmm[0].u64[1] = 0; /* 0x006D2472: movss xmm0, dword ptr [esi - 0x18] */
    MEM32(esp + 0x58) = _xmm[0].u32[0]; /* 0x006D2477: movss dword ptr [esp + 0x58], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + (-0x14)); _xmm[0].u64[1] = 0; /* 0x006D247D: movss xmm0, dword ptr [esi - 0x14] */
    MEM32(esp + 0x5C) = _xmm[0].u32[0]; /* 0x006D2482: movss dword ptr [esp + 0x5c], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + 0x2C); _xmm[0].u64[1] = 0; /* 0x006D2488: movss xmm0, dword ptr [esi + 0x2c] */
    MEM32(esp + 0x68) = _xmm[0].u32[0]; /* 0x006D248D: movss dword ptr [esp + 0x68], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + 0x28); _xmm[0].u64[1] = 0; /* 0x006D2493: movss xmm0, dword ptr [esi + 0x28] */
    MEM32(esp + 0x6C) = _xmm[0].u32[0]; /* 0x006D2498: movss dword ptr [esp + 0x6c], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + 0x24); _xmm[0].u64[1] = 0; /* 0x006D249E: movss xmm0, dword ptr [esi + 0x24] */
    MEM32(esp + 0x70) = _xmm[0].u32[0]; /* 0x006D24A3: movss dword ptr [esp + 0x70], xmm0 */
    _xmm[0].u64[0] = MEM32(esi + 0x20); _xmm[0].u64[1] = 0; /* 0x006D24A9: movss xmm0, dword ptr [esi + 0x20] */
    PUSH32(esp, edi); /* 0x006D24AE: push edi */
    PUSH32(esp, ebx); /* 0x006D24AF: push ebx */
    MEM32(esp + 0x6C) = 0; /* 0x006D24B0: mov dword ptr [esp + 0x6c], 0 */
    MEM32(esp + 0x68) = _xmm[0].u32[0]; /* 0x006D24B8: movss dword ptr [esp + 0x68], xmm0 */
    RECOMP_ICALL(MEM32(ecx + 0xD4)); /* 0x006D24BE: call dword ptr [ecx + 0xd4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x006D24C4: mov eax, dword ptr [ebx] */
    ecx = esp + 0x10; /* 0x006D24C6: lea ecx, [esp + 0x10] */
    PUSH32(esp, ecx); /* 0x006D24CA: push ecx */
    PUSH32(esp, edi); /* 0x006D24CB: push edi */
    PUSH32(esp, ebx); /* 0x006D24CC: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xCC)); /* 0x006D24CD: call dword ptr [eax + 0xcc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006D24D3: inc edi */
    _flag_k = FK_INC;
    esi = esi + 0x60; /* 0x006D24D4: lea esi, [esi + 0x60] */
    ecx = 1; /* 0x006D24D7: mov ecx, 1 */
    /* cmp edi, 8 */ /* 0x006D24DC: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006D23F0; /* 0x006D24DF: jl 0x6d23f0 */
L_006D24E5:
    edi = MEM32(esp + 0xC); /* 0x006D24E5: mov edi, dword ptr [esp + 0xc] */
    goto L_006D2508; /* 0x006D24E9: jmp 0x6d2508 */
L_006D24EB:
    eax = MEM32(ebx); /* 0x006D24EB: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x006D24ED: push 0 */
    PUSH32(esp, 0x89u); /* 0x006D24EF: push 0x89 */
    PUSH32(esp, ebx); /* 0x006D24F4: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xE4)); /* 0x006D24F5: call dword ptr [eax + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x006D24FB: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x006D24FD: push 0 */
    PUSH32(esp, 0x1Du); /* 0x006D24FF: push 0x1d */
    PUSH32(esp, ebx); /* 0x006D2501: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xE4)); /* 0x006D2502: call dword ptr [eax + 0xe4] */
    RECOMP_FLAGS_IN();
L_006D2508:
    /* cmp MEM8(edi + 0x8), 0 */ /* 0x006D2508: cmp byte ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D253B; /* 0x006D250C: je 0x6d253b */
L_006D250E:
    PUSH32(esp, MEM32(edi + 0x24)); /* 0x006D250E: push dword ptr [edi + 0x24] */
    eax = MEM32(ebx); /* 0x006D2511: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0x13u); /* 0x006D2513: push 0x13 */
    PUSH32(esp, ebx); /* 0x006D2515: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xE4)); /* 0x006D2516: call dword ptr [eax + 0xe4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x006D251C: push dword ptr [edi + 0x20] */
    eax = MEM32(ebx); /* 0x006D251F: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0x14u); /* 0x006D2521: push 0x14 */
    PUSH32(esp, ebx); /* 0x006D2523: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xE4)); /* 0x006D2524: call dword ptr [eax + 0xe4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x28)); /* 0x006D252A: push dword ptr [edi + 0x28] */
    eax = MEM32(ebx); /* 0x006D252D: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0xABu); /* 0x006D252F: push 0xab */
    PUSH32(esp, ebx); /* 0x006D2534: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xE4)); /* 0x006D2535: call dword ptr [eax + 0xe4] */
    RECOMP_FLAGS_IN();
L_006D253B:
    /* cmp MEM8(edi + 0x3DC), 0 */ /* 0x006D253B: cmp byte ptr [edi + 0x3dc], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x3DC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D25FD; /* 0x006D2542: je 0x6d25fd */
L_006D2548:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D2548: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x32Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x32Cu; /* 0x006D254A: add edi, 0x32c */
    _flag_k = FK_ADD;
L_006D2550:
    PUSH32(esp, MEM32(edi)); /* 0x006D2550: push dword ptr [edi] */
    eax = MEM32(ebx); /* 0x006D2552: mov eax, dword ptr [ebx] */
    PUSH32(esp, 1); /* 0x006D2554: push 1 */
    PUSH32(esp, esi); /* 0x006D2556: push esi */
    PUSH32(esp, ebx); /* 0x006D2557: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10C)); /* 0x006D2558: call dword ptr [eax + 0x10c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi), 1 */ /* 0x006D255E: cmp dword ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D259F; /* 0x006D2561: je 0x6d259f */
L_006D2563:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x006D2563: push dword ptr [edi + 0xc] */
    eax = MEM32(ebx); /* 0x006D2566: mov eax, dword ptr [ebx] */
    PUSH32(esp, 2); /* 0x006D2568: push 2 */
    PUSH32(esp, esi); /* 0x006D256A: push esi */
    PUSH32(esp, ebx); /* 0x006D256B: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10C)); /* 0x006D256C: call dword ptr [eax + 0x10c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x006D2572: push dword ptr [edi + 0x10] */
    eax = MEM32(ebx); /* 0x006D2575: mov eax, dword ptr [ebx] */
    PUSH32(esp, 3); /* 0x006D2577: push 3 */
    PUSH32(esp, esi); /* 0x006D2579: push esi */
    PUSH32(esp, ebx); /* 0x006D257A: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10C)); /* 0x006D257B: call dword ptr [eax + 0x10c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x006D2581: push dword ptr [edi + 4] */
    eax = MEM32(ebx); /* 0x006D2584: mov eax, dword ptr [ebx] */
    PUSH32(esp, 4); /* 0x006D2586: push 4 */
    PUSH32(esp, esi); /* 0x006D2588: push esi */
    PUSH32(esp, ebx); /* 0x006D2589: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10C)); /* 0x006D258A: call dword ptr [eax + 0x10c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x006D2590: push dword ptr [edi + 8] */
    eax = MEM32(ebx); /* 0x006D2593: mov eax, dword ptr [ebx] */
    PUSH32(esp, 5); /* 0x006D2595: push 5 */
    PUSH32(esp, esi); /* 0x006D2597: push esi */
    PUSH32(esp, ebx); /* 0x006D2598: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10C)); /* 0x006D2599: call dword ptr [eax + 0x10c] */
    RECOMP_FLAGS_IN();
L_006D259F:
    /* cmp MEM8(edi + 0x14), 0 */ /* 0x006D259F: cmp byte ptr [edi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebx); /* 0x006D25A3: mov eax, dword ptr [ebx] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D25D7; /* 0x006D25A5: je 0x6d25d7 */
L_006D25A7:
    PUSH32(esp, 2); /* 0x006D25A7: push 2 */
    PUSH32(esp, 0x18u); /* 0x006D25A9: push 0x18 */
    PUSH32(esp, esi); /* 0x006D25AB: push esi */
    PUSH32(esp, ebx); /* 0x006D25AC: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10C)); /* 0x006D25AD: call dword ptr [eax + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x006D25B3: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0x00030000u); /* 0x006D25B5: push 0x30000 */
    PUSH32(esp, 0xBu); /* 0x006D25BA: push 0xb */
    PUSH32(esp, esi); /* 0x006D25BC: push esi */
    PUSH32(esp, ebx); /* 0x006D25BD: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10C)); /* 0x006D25BE: call dword ptr [eax + 0x10c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x006D25C4: mov ecx, dword ptr [ebx] */
    eax = edi + 0x18; /* 0x006D25C6: lea eax, [edi + 0x18] */
    PUSH32(esp, eax); /* 0x006D25C9: push eax */
    eax = esi + 0x10; /* 0x006D25CA: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x006D25CD: push eax */
    PUSH32(esp, ebx); /* 0x006D25CE: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0xB0)); /* 0x006D25CF: call dword ptr [ecx + 0xb0] */
    RECOMP_FLAGS_IN();
    goto L_006D25F0; /* 0x006D25D5: jmp 0x6d25f0 */
L_006D25D7:
    PUSH32(esp, esi); /* 0x006D25D7: push esi */
    PUSH32(esp, 0xBu); /* 0x006D25D8: push 0xb */
    PUSH32(esp, esi); /* 0x006D25DA: push esi */
    PUSH32(esp, ebx); /* 0x006D25DB: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10C)); /* 0x006D25DC: call dword ptr [eax + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x006D25E2: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0); /* 0x006D25E4: push 0 */
    PUSH32(esp, 0x18u); /* 0x006D25E6: push 0x18 */
    PUSH32(esp, esi); /* 0x006D25E8: push esi */
    PUSH32(esp, ebx); /* 0x006D25E9: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10C)); /* 0x006D25EA: call dword ptr [eax + 0x10c] */
    RECOMP_FLAGS_IN();
L_006D25F0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006D25F0: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x58u; /* 0x006D25F1: add edi, 0x58 */
    _flag_k = FK_ADD;
    /* cmp esi, 2 */ /* 0x006D25F4: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006D2550; /* 0x006D25F7: jl 0x6d2550 */
L_006D25FD:
    ecx = MEM32(esp + 0xC4); /* 0x006D25FD: mov ecx, dword ptr [esp + 0xc4] */
    edi = POP32_VAL(esp); /* 0x006D2604: pop edi */
    esi = POP32_VAL(esp); /* 0x006D2605: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D2606: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D2607: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D2609: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D260E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D2610: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D2611: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D2620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D2620u);

L_006D2620:
    PUSH32(esp, ebp); /* 0x006D2620: push ebp */
    ebp = esp; /* 0x006D2621: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D2623: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006D2624: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x006D2627: push edi */
    /* cmp MEM32(esi + 0x4D8), 0x4DCu */ /* 0x006D2628: cmp dword ptr [esi + 0x4d8], 0x4dc */
    _flag_a = (uint32_t)(MEM32(esi + 0x4D8)); _flag_b = (uint32_t)(0x4DCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D2647; /* 0x006D2632: jne 0x6d2647 */
L_006D2634:
    edi = ecx + 0xA48; /* 0x006D2634: lea edi, [ecx + 0xa48] */
    ecx = 0x137u; /* 0x006D263A: mov ecx, 0x137 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x006D263F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x006D2641: pop edi */
    esi = POP32_VAL(esp); /* 0x006D2642: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D2643: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D2644: ret 4 */
L_006D2647:
    PUSH32(esp, 0x00801574u); /* 0x006D2647: push 0x801574 */
    RECOMP_CALL(sub_006D1E10); /* 0x006D264C: call 0x6d1e10 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006D2651u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D2660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D2660u);

L_006D2660:
    PUSH32(esp, ebp); /* 0x006D2660: push ebp */
    ebp = esp; /* 0x006D2661: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D2663: push esi */
    esi = ecx; /* 0x006D2664: mov esi, ecx */
    ecx = MEM32(esi + 0x10C); /* 0x006D2666: mov ecx, dword ptr [esi + 0x10c] */
    edx = esi + 0xA48; /* 0x006D266C: lea edx, [esi + 0xa48] */
    RECOMP_CALL(sub_006D2130); /* 0x006D2672: call 0x6d2130 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x10C); /* 0x006D2677: mov eax, dword ptr [esi + 0x10c] */
    PUSH32(esp, 0x1C4u); /* 0x006D267D: push 0x1c4 */
    PUSH32(esp, eax); /* 0x006D2682: push eax */
    edx = MEM32(eax); /* 0x006D2683: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x164)); /* 0x006D2685: call dword ptr [edx + 0x164] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x10C); /* 0x006D268B: mov ecx, dword ptr [esi + 0x10c] */
    eax = 0xAAAAAAABu; /* 0x006D2691: mov eax, 0xaaaaaaab */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(ebp + 0x14)); /* 0x006D2696: mul dword ptr [ebp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    esi = MEM32(ecx); /* 0x006D2699: mov esi, dword ptr [ecx] */
    PUSH32(esp, 0x20u); /* 0x006D269B: push 0x20 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D269D: push dword ptr [ebp + 8] */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x006D26A0: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x006D26A0: shr edx, 1 */
    PUSH32(esp, 0x65u); /* 0x006D26A2: push 0x65 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006D26A4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x006D26A7: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006D26A8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x006D26AB: push 0 */
    PUSH32(esp, 4); /* 0x006D26AD: push 4 */
    PUSH32(esp, ecx); /* 0x006D26AF: push ecx */
    RECOMP_ICALL(MEM32(esi + 0x150)); /* 0x006D26B0: call dword ptr [esi + 0x150] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x006D26B6: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D26B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006D26B8: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_006D26C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D26C0u);

L_006D26C0:
    PUSH32(esp, ebp); /* 0x006D26C0: push ebp */
    ebp = esp; /* 0x006D26C1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006D26C3: push ebx */
    PUSH32(esp, esi); /* 0x006D26C4: push esi */
    PUSH32(esp, edi); /* 0x006D26C5: push edi */
    edi = ecx; /* 0x006D26C6: mov edi, ecx */
    esi = edx; /* 0x006D26C8: mov esi, edx */
    ecx = esi; /* 0x006D26CA: mov ecx, esi */
    edx = edi + 0xA48; /* 0x006D26CC: lea edx, [edi + 0xa48] */
    RECOMP_CALL(sub_006D2130); /* 0x006D26D2: call 0x6d2130 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(edi + 0xA41), 0 */ /* 0x006D26D7: cmp byte ptr [edi + 0xa41], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xA41)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D2775; /* 0x006D26DE: je 0x6d2775 */
L_006D26E4:
    ecx = MEM32(ebp + 0x14); /* 0x006D26E4: mov ecx, dword ptr [ebp + 0x14] */
    eax = ecx + (-0x3); /* 0x006D26E7: lea eax, [ecx - 3] */
    /* cmp eax, 0xBB7Du */ /* 0x006D26EA: cmp eax, 0xbb7d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBB7Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D2775; /* 0x006D26EF: ja 0x6d2775 */
L_006D26F5:
    _flag_a = (uint32_t)(MEM32(edi + 0xA2C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0xA2C) = MEM32(edi + 0xA2C) + 1; /* 0x006D26F5: inc dword ptr [edi + 0xa2c] */
    _flag_k = FK_INC;
    eax = 0xAAAAAAABu; /* 0x006D26FB: mov eax, 0xaaaaaaab */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x006D2700: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ebx = edx; /* 0x006D2702: mov ebx, edx */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x006D2704: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x006D2704: shr ebx, 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0xA34)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xA34) = MEM32(edi + 0xA34) + ebx; /* 0x006D2706: add dword ptr [edi + 0xa34], ebx */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x006D270C: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi); /* 0x006D2710: mov eax, dword ptr [esi] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D2727; /* 0x006D2712: je 0x6d2727 */
L_006D2714:
    PUSH32(esp, 0x2C4u); /* 0x006D2714: push 0x2c4 */
    PUSH32(esp, esi); /* 0x006D2719: push esi */
    RECOMP_ICALL(MEM32(eax + 0x164)); /* 0x006D271A: call dword ptr [eax + 0x164] */
    RECOMP_FLAGS_IN();
    edi = 0x28u; /* 0x006D2720: mov edi, 0x28 */
    goto L_006D2738; /* 0x006D2725: jmp 0x6d2738 */
L_006D2727:
    PUSH32(esp, 0x1C4u); /* 0x006D2727: push 0x1c4 */
    PUSH32(esp, esi); /* 0x006D272C: push esi */
    RECOMP_ICALL(MEM32(eax + 0x164)); /* 0x006D272D: call dword ptr [eax + 0x164] */
    RECOMP_FLAGS_IN();
    edi = 0x20u; /* 0x006D2733: mov edi, 0x20 */
L_006D2738:
    eax = MEM32(esi); /* 0x006D2738: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x006D273A: push 1 */
    PUSH32(esp, esi); /* 0x006D273C: push esi */
    RECOMP_ICALL(MEM32(eax + 0x134)); /* 0x006D273D: call dword ptr [eax + 0x134] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x006D2743: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x006D2746: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006D275A; /* 0x006D2749: je 0x6d275a */
L_006D274B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x006D274B: sub eax, 2 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_006D276A; /* 0x006D274E: jne 0x6d276a */
L_006D2750:
    PUSH32(esp, edi); /* 0x006D2750: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006D2751: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 2); /* 0x006D2754: push 2 */
    PUSH32(esp, 6); /* 0x006D2756: push 6 */
    goto L_006D2761; /* 0x006D2758: jmp 0x6d2761 */
L_006D275A:
    PUSH32(esp, edi); /* 0x006D275A: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006D275B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x006D275E: push ebx */
    PUSH32(esp, 4); /* 0x006D275F: push 4 */
L_006D2761:
    eax = MEM32(esi); /* 0x006D2761: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x006D2763: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14C)); /* 0x006D2764: call dword ptr [eax + 0x14c] */
    RECOMP_FLAGS_IN();
L_006D276A:
    eax = MEM32(esi); /* 0x006D276A: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x006D276C: push 0 */
    PUSH32(esp, esi); /* 0x006D276E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x134)); /* 0x006D276F: call dword ptr [eax + 0x134] */
    RECOMP_FLAGS_IN();
L_006D2775:
    edi = POP32_VAL(esp); /* 0x006D2775: pop edi */
    esi = POP32_VAL(esp); /* 0x006D2776: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D2777: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006D2778: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D2779: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D2780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D2780u);

L_006D2780:
    PUSH32(esp, ebp); /* 0x006D2780: push ebp */
    ebp = esp; /* 0x006D2781: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D2783: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006D2786: push dword ptr [ebp + 0xc] */
    edx = MEM32(ecx + 0x10C); /* 0x006D2789: mov edx, dword ptr [ecx + 0x10c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D278F: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006D2792: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x006D2795: push 0 */
    RECOMP_CALL(sub_006D26C0); /* 0x006D2797: call 0x6d26c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006D279C: add esp, 0x10 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x006D279F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D27A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006D27A2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_006D27B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D27B0u);

L_006D27B0:
    PUSH32(esp, ebp); /* 0x006D27B0: push ebp */
    ebp = esp; /* 0x006D27B1: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006D27B3: push dword ptr [ebp + 0xc] */
    edx = MEM32(ecx + 0x10C); /* 0x006D27B6: mov edx, dword ptr [ecx + 0x10c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D27BC: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x006D27BF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 1); /* 0x006D27C2: push 1 */
    RECOMP_CALL(sub_006D26C0); /* 0x006D27C4: call 0x6d26c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006D27C9: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x006D27CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006D27CD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_006D27D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D27D0u);

L_006D27D0:
    /* cmp MEM32(ecx + 0xF38), 0x10u */ /* 0x006D27D0: cmp dword ptr [ecx + 0xf38], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xF38)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ecx + 0xF24; /* 0x006D27D7: lea eax, [ecx + 0xf24] */
    if (CMP_B(_flag_a, _flag_b)) goto L_006D27E1; /* 0x006D27DD: jb 0x6d27e1 */
L_006D27DF:
    eax = MEM32(eax); /* 0x006D27DF: mov eax, dword ptr [eax] */
L_006D27E1:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D27E1: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D27F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D27F0u);

L_006D27F0:
    PUSH32(esp, ebp); /* 0x006D27F0: push ebp */
    ebp = esp; /* 0x006D27F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D27F3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D27F6: push -1 */
    PUSH32(esp, 0x007C6830u); /* 0x006D27F8: push 0x7c6830 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D27FD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D2803: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x006D2804: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D280A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D280F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xC0) = eax; /* 0x006D2811: mov dword ptr [esp + 0xc0], eax */
    PUSH32(esp, ebx); /* 0x006D2818: push ebx */
    PUSH32(esp, esi); /* 0x006D2819: push esi */
    PUSH32(esp, edi); /* 0x006D281A: push edi */
    eax = MEM32(0x855000); /* 0x006D281B: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D2820: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D2822: push eax */
    eax = esp + 0xD8; /* 0x006D2823: lea eax, [esp + 0xd8] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D282A: mov dword ptr fs:[0], eax */
    MEM32(esp + 0x1C) = ecx; /* 0x006D2830: mov dword ptr [esp + 0x1c], ecx */
    eax = MEM32(ebp + 0x8); /* 0x006D2834: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006D2837: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = ebx; /* 0x006D2839: mov dword ptr [esp + 0x10], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D283D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x24) = eax; /* 0x006D283F: mov dword ptr [esp + 0x24], eax */
    eax = MEM32(ebp + 0xC); /* 0x006D2843: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esp + 0x14) = esi; /* 0x006D2846: mov dword ptr [esp + 0x14], esi */
    MEM32(esp + 0x28) = 0; /* 0x006D284A: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x20) = 0; /* 0x006D2852: mov dword ptr [esp + 0x20], 0 */
    MEM32(esp + 0x18) = ebx; /* 0x006D285A: mov dword ptr [esp + 0x18], ebx */
    PUSH32(esp, eax); /* 0x006D285E: push eax */
    MEM32(esp + 0xE4) = esi; /* 0x006D285F: mov dword ptr [esp + 0xe4], esi */
    RECOMP_ICALL(MEM32(0x7CC554)); /* 0x006D2866: call dword ptr [0x7cc554] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D286C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x2C) = eax; /* 0x006D286F: mov dword ptr [esp + 0x2c], eax */
    PUSH32(esp, 0x0080156Cu); /* 0x006D2873: push 0x80156c */
    PUSH32(esp, eax); /* 0x006D2878: push eax */
    RECOMP_ICALL(MEM32(0x7CC550)); /* 0x006D2879: call dword ptr [0x7cc550] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006D287F: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006D2881: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006D2884: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D291B; /* 0x006D2886: je 0x6d291b */
L_006D288C:
    MEM32(esp + 0x34) = 0x007CD0C4u; /* 0x006D288C: mov dword ptr [esp + 0x34], 0x7cd0c4 */
L_006D2894:
    eax = esp + 0x30; /* 0x006D2894: lea eax, [esp + 0x30] */
    MEM32(esp + 0x30) = edi; /* 0x006D2898: mov dword ptr [esp + 0x30], edi */
    /* cmp eax, esi */ /* 0x006D289C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D28D5; /* 0x006D289E: jae 0x6d28d5 */
L_006D28A0:
    /* cmp ebx, eax */ /* 0x006D28A0: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D28D5; /* 0x006D28A2: ja 0x6d28d5 */
L_006D28A4:
    edi = eax; /* 0x006D28A4: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x006D28A6: sub edi, ebx */
    _flag_k = FK_CMP;
    if (3u) _cf = (((edi) >> 2) & 1u); /* 0x006D28A8: sar edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 3u);
    /* cmp esi, MEM32(esp + 0x18) */ /* 0x006D28AB: cmp esi, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(esp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D28C3; /* 0x006D28AF: jne 0x6d28c3 */
L_006D28B1:
    PUSH32(esp, ecx); /* 0x006D28B1: push ecx */
    ecx = esp + 0x14; /* 0x006D28B2: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_006D4E10); /* 0x006D28B6: call 0x6d4e10 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x14); /* 0x006D28BB: mov esi, dword ptr [esp + 0x14] */
    ebx = MEM32(esp + 0x10); /* 0x006D28BF: mov ebx, dword ptr [esp + 0x10] */
L_006D28C3:
    /* test esi, esi */ /* 0x006D28C3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D28FA; /* 0x006D28C5: je 0x6d28fa */
L_006D28C7:
    eax = MEM32(ebx + edi * 8); /* 0x006D28C7: mov eax, dword ptr [ebx + edi*8] */
    MEM32(esi) = eax; /* 0x006D28CA: mov dword ptr [esi], eax */
    eax = MEM32(ebx + edi * 8 + 0x4); /* 0x006D28CC: mov eax, dword ptr [ebx + edi*8 + 4] */
    MEM32(esi + 0x4) = eax; /* 0x006D28D0: mov dword ptr [esi + 4], eax */
    goto L_006D28FA; /* 0x006D28D3: jmp 0x6d28fa */
L_006D28D5:
    /* cmp esi, MEM32(esp + 0x18) */ /* 0x006D28D5: cmp esi, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(esp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D28ED; /* 0x006D28D9: jne 0x6d28ed */
L_006D28DB:
    PUSH32(esp, ecx); /* 0x006D28DB: push ecx */
    ecx = esp + 0x14; /* 0x006D28DC: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_006D4E10); /* 0x006D28E0: call 0x6d4e10 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x14); /* 0x006D28E5: mov esi, dword ptr [esp + 0x14] */
    ebx = MEM32(esp + 0x10); /* 0x006D28E9: mov ebx, dword ptr [esp + 0x10] */
L_006D28ED:
    /* test esi, esi */ /* 0x006D28ED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D28FA; /* 0x006D28EF: je 0x6d28fa */
L_006D28F1:
    MEM32(esi) = edi; /* 0x006D28F1: mov dword ptr [esi], edi */
    MEM32(esi + 0x4) = 0x007CD0C4u; /* 0x006D28F3: mov dword ptr [esi + 4], 0x7cd0c4 */
L_006D28FA:
    PUSH32(esp, 0x0080156Cu); /* 0x006D28FA: push 0x80156c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x006D28FF: add esi, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x006D2902: push 0 */
    MEM32(esp + 0x1C) = esi; /* 0x006D2904: mov dword ptr [esp + 0x1c], esi */
    RECOMP_ICALL(MEM32(0x7CC550)); /* 0x006D2908: call dword ptr [0x7cc550] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006D290E: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006D2910: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006D2913: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D2894; /* 0x006D2915: jne 0x6d2894 */
L_006D291B:
    eax = esp + 0x38; /* 0x006D291B: lea eax, [esp + 0x38] */
    MEM32(esp + 0x38) = 0; /* 0x006D291F: mov dword ptr [esp + 0x38], 0 */
    PUSH32(esp, eax); /* 0x006D2927: push eax */
    ecx = esp + 0x14; /* 0x006D2928: lea ecx, [esp + 0x14] */
    MEM32(esp + 0x40) = 0; /* 0x006D292C: mov dword ptr [esp + 0x40], 0 */
    RECOMP_CALL(sub_006D45B0); /* 0x006D2934: call 0x6d45b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esp + 0x2C)); /* 0x006D2939: push dword ptr [esp + 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x006D293D: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    edi = MEM32(esp + 0x14); /* 0x006D2943: mov edi, dword ptr [esp + 0x14] */
    eax = esp + 0x24; /* 0x006D2947: lea eax, [esp + 0x24] */
    esi = MEM32(esp + 0x20); /* 0x006D294B: mov esi, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D294F: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006D2952: push eax */
    eax = esp + 0x2C; /* 0x006D2953: lea eax, [esp + 0x2c] */
    PUSH32(esp, eax); /* 0x006D2957: push eax */
    PUSH32(esp, 0); /* 0x006D2958: push 0 */
    PUSH32(esp, 0x00010000u); /* 0x006D295A: push 0x10000 */
    PUSH32(esp, 0); /* 0x006D295F: push 0 */
    PUSH32(esp, edi); /* 0x006D2961: push edi */
    PUSH32(esp, MEM32(esp + 0x3C)); /* 0x006D2962: push dword ptr [esp + 0x3c] */
    PUSH32(esp, MEM32(esi + 0x10C)); /* 0x006D2966: push dword ptr [esi + 0x10c] */
    RECOMP_ICALL(MEM32(0x7CC948)); /* 0x006D296C: call dword ptr [0x7cc948] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC694); /* 0x006D2972: mov ebx, dword ptr [0x7cc694] */
    /* test eax, eax */ /* 0x006D2978: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D29E4; /* 0x006D297A: jne 0x6d29e4 */
L_006D297C:
    PUSH32(esp, 0x1Cu); /* 0x006D297C: push 0x1c */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D297E: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2984: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x2C) = eax; /* 0x006D2987: mov dword ptr [esp + 0x2c], eax */
    MEM8(esp + 0xE0) = (uint8_t)(1); /* 0x006D298B: mov byte ptr [esp + 0xe0], 1 */
    /* test eax, eax */ /* 0x006D2993: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D29A7; /* 0x006D2995: je 0x6d29a7 */
L_006D2997:
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x006D2997: push dword ptr [esp + 0x28] */
    ecx = eax; /* 0x006D299B: mov ecx, eax */
    PUSH32(esp, esi); /* 0x006D299D: push esi */
    RECOMP_CALL(sub_006DAB40); /* 0x006D299E: call 0x6dab40 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D29A3: mov esi, eax */
    goto L_006D29A9; /* 0x006D29A5: jmp 0x6d29a9 */
L_006D29A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D29A7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D29A9:
    MEM8(esp + 0xE0) = (uint8_t)(0); /* 0x006D29A9: mov byte ptr [esp + 0xe0], 0 */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x006D29B1: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D2C51; /* 0x006D29B5: jne 0x6d2c51 */
L_006D29BB:
    edx = MEM32(esp + 0x24); /* 0x006D29BB: mov edx, dword ptr [esp + 0x24] */
    ecx = MEM32(0x7CC230); /* 0x006D29BF: mov ecx, dword ptr [0x7cc230] */
    RECOMP_CALL(sub_006715D0); /* 0x006D29C5: call 0x6715d0 */
    RECOMP_FLAGS_IN();
    edx = 0x0080153Cu; /* 0x006D29CA: mov edx, 0x80153c */
    ecx = eax; /* 0x006D29CF: mov ecx, eax */
    RECOMP_CALL(sub_006715D0); /* 0x006D29D1: call 0x6715d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x006D29D6: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D29D8: mov ecx, esi */
    PUSH32(esp, 1); /* 0x006D29DA: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006D29DC: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_006D2C4F; /* 0x006D29DF: jmp 0x6d2c4f */
L_006D29E4:
    ecx = MEM32(esp + 0x20); /* 0x006D29E4: mov ecx, dword ptr [esp + 0x20] */
    /* test ecx, ecx */ /* 0x006D29E8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D2C4F; /* 0x006D29EA: je 0x6d2c4f */
L_006D29F0:
    eax = MEM32(ecx); /* 0x006D29F0: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D29F2: push ecx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x006D29F3: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006D29F6: push eax */
    ecx = esp + 0x44; /* 0x006D29F7: lea ecx, [esp + 0x44] */
    RECOMP_CALL(sub_00409FA0); /* 0x006D29FB: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esp + 0x24)); /* 0x006D2A00: push dword ptr [esp + 0x24] */
    ecx = esp + 0x74; /* 0x006D2A04: lea ecx, [esp + 0x74] */
    MEM8(esp + 0xE4) = (uint8_t)(2); /* 0x006D2A08: mov byte ptr [esp + 0xe4], 2 */
    RECOMP_CALL(sub_00409FA0); /* 0x006D2A10: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    edx = esp + 0x70; /* 0x006D2A15: lea edx, [esp + 0x70] */
    MEM8(esp + 0xE0) = (uint8_t)(3); /* 0x006D2A19: mov byte ptr [esp + 0xe0], 3 */
    ecx = esp + 0xB8; /* 0x006D2A21: lea ecx, [esp + 0xb8] */
    RECOMP_CALL(sub_006D1870); /* 0x006D2A28: call 0x6d1870 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006D2A2D: mov edx, eax */
    MEM8(esp + 0xE0) = (uint8_t)(4); /* 0x006D2A2F: mov byte ptr [esp + 0xe0], 4 */
    ecx = esp + 0x88; /* 0x006D2A37: lea ecx, [esp + 0x88] */
    RECOMP_CALL(sub_006D1930); /* 0x006D2A3E: call 0x6d1930 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D2A43: mov esi, eax */
    edx = MEM32(esp + 0x1C); /* 0x006D2A45: mov edx, dword ptr [esp + 0x1c] */
    PUSH32(esp, ecx); /* 0x006D2A49: push ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xF60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xF60u; /* 0x006D2A4A: add edx, 0xf60 */
    _flag_k = FK_ADD;
    MEM8(esp + 0xE4) = (uint8_t)(5); /* 0x006D2A50: mov byte ptr [esp + 0xe4], 5 */
    ecx = esp + 0xA4; /* 0x006D2A58: lea ecx, [esp + 0xa4] */
    RECOMP_CALL(sub_006D52D0); /* 0x006D2A5F: call 0x6d52d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2A64: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x006D2A67: push esi */
    edx = eax; /* 0x006D2A68: mov edx, eax */
    MEM8(esp + 0xE4) = (uint8_t)(6); /* 0x006D2A6A: mov byte ptr [esp + 0xe4], 6 */
    ecx = esp + 0x5C; /* 0x006D2A72: lea ecx, [esp + 0x5c] */
    RECOMP_CALL(sub_005CA4F0); /* 0x006D2A76: call 0x5ca4f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2A7B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esp + 0xE0) = (uint8_t)(8); /* 0x006D2A7E: mov byte ptr [esp + 0xe0], 8 */
    /* cmp MEM32(esp + 0xB4), 8 */ /* 0x006D2A86: cmp dword ptr [esp + 0xb4], 8 */
    _flag_a = (uint32_t)(MEM32(esp + 0xB4)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D2A9C; /* 0x006D2A8E: jb 0x6d2a9c */
L_006D2A90:
    PUSH32(esp, MEM32(esp + 0xA0)); /* 0x006D2A90: push dword ptr [esp + 0xa0] */
    RECOMP_ICALL(ebx); /* 0x006D2A97: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2A99: add esp, 4 */
    _flag_k = FK_ADD;
L_006D2A9C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D2A9C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xB4) = 7; /* 0x006D2A9E: mov dword ptr [esp + 0xb4], 7 */
    MEM32(esp + 0xB0) = 0; /* 0x006D2AA9: mov dword ptr [esp + 0xb0], 0 */
    MEM16(esp + 0xA0) = (uint16_t)(LO16(eax)); /* 0x006D2AB4: mov word ptr [esp + 0xa0], ax */
    MEM8(esp + 0xE0) = (uint8_t)(9); /* 0x006D2ABC: mov byte ptr [esp + 0xe0], 9 */
    /* cmp MEM32(esp + 0x9C), 8 */ /* 0x006D2AC4: cmp dword ptr [esp + 0x9c], 8 */
    _flag_a = (uint32_t)(MEM32(esp + 0x9C)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D2ADA; /* 0x006D2ACC: jb 0x6d2ada */
L_006D2ACE:
    PUSH32(esp, MEM32(esp + 0x88)); /* 0x006D2ACE: push dword ptr [esp + 0x88] */
    RECOMP_ICALL(ebx); /* 0x006D2AD5: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2AD7: add esp, 4 */
    _flag_k = FK_ADD;
L_006D2ADA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D2ADA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x9C) = 7; /* 0x006D2ADC: mov dword ptr [esp + 0x9c], 7 */
    MEM32(esp + 0x98) = 0; /* 0x006D2AE7: mov dword ptr [esp + 0x98], 0 */
    MEM16(esp + 0x88) = (uint16_t)(LO16(eax)); /* 0x006D2AF2: mov word ptr [esp + 0x88], ax */
    MEM8(esp + 0xE0) = (uint8_t)(0xAu); /* 0x006D2AFA: mov byte ptr [esp + 0xe0], 0xa */
    /* cmp MEM32(esp + 0xCC), 0x10u */ /* 0x006D2B02: cmp dword ptr [esp + 0xcc], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0xCC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D2B18; /* 0x006D2B0A: jb 0x6d2b18 */
L_006D2B0C:
    PUSH32(esp, MEM32(esp + 0xB8)); /* 0x006D2B0C: push dword ptr [esp + 0xb8] */
    RECOMP_ICALL(ebx); /* 0x006D2B13: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2B15: add esp, 4 */
    _flag_k = FK_ADD;
L_006D2B18:
    MEM32(esp + 0xCC) = 0xFu; /* 0x006D2B18: mov dword ptr [esp + 0xcc], 0xf */
    MEM32(esp + 0xC8) = 0; /* 0x006D2B23: mov dword ptr [esp + 0xc8], 0 */
    MEM8(esp + 0xB8) = (uint8_t)(0); /* 0x006D2B2E: mov byte ptr [esp + 0xb8], 0 */
    MEM8(esp + 0xE0) = (uint8_t)(0xBu); /* 0x006D2B36: mov byte ptr [esp + 0xe0], 0xb */
    /* cmp MEM32(esp + 0x84), 0x10u */ /* 0x006D2B3E: cmp dword ptr [esp + 0x84], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x84)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D2B51; /* 0x006D2B46: jb 0x6d2b51 */
L_006D2B48:
    PUSH32(esp, MEM32(esp + 0x70)); /* 0x006D2B48: push dword ptr [esp + 0x70] */
    RECOMP_ICALL(ebx); /* 0x006D2B4C: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2B4E: add esp, 4 */
    _flag_k = FK_ADD;
L_006D2B51:
    PUSH32(esp, 4); /* 0x006D2B51: push 4 */
    PUSH32(esp, 0x0080165Cu); /* 0x006D2B53: push 0x80165c */
    ecx = esp + 0x60; /* 0x006D2B58: lea ecx, [esp + 0x60] */
    MEM32(esp + 0x8C) = 0xFu; /* 0x006D2B5C: mov dword ptr [esp + 0x8c], 0xf */
    MEM32(esp + 0x88) = 0; /* 0x006D2B67: mov dword ptr [esp + 0x88], 0 */
    MEM8(esp + 0x78) = (uint8_t)(0); /* 0x006D2B72: mov byte ptr [esp + 0x78], 0 */
    RECOMP_CALL(sub_005CA6C0); /* 0x006D2B77: call 0x5ca6c0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esp + 0x6C), 8 */ /* 0x006D2B7C: cmp dword ptr [esp + 0x6c], 8 */
    _flag_a = (uint32_t)(MEM32(esp + 0x6C)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esp + 0x58; /* 0x006D2B81: lea eax, [esp + 0x58] */
    PUSH32(esp, 0x00801654u); /* 0x006D2B85: push 0x801654 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(esp + 0x5C); } /* 0x006D2B8A: cmovae eax, dword ptr [esp + 0x5c] */
    PUSH32(esp, eax); /* 0x006D2B8F: push eax */
    RECOMP_ICALL(MEM32(0x7CC568)); /* 0x006D2B90: call dword ptr [0x7cc568] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x7CC560); /* 0x006D2B96: mov esi, dword ptr [0x7cc560] */
    edi = eax; /* 0x006D2B9C: mov edi, eax */
    PUSH32(esp, 0x0080163Cu); /* 0x006D2B9E: push 0x80163c */
    PUSH32(esp, edi); /* 0x006D2BA3: push edi */
    RECOMP_ICALL(esi); /* 0x006D2BA4: call esi */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esp + 0x64), 0x10u */ /* 0x006D2BA6: cmp dword ptr [esp + 0x64], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x64)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esp + 0x50; /* 0x006D2BAB: lea ecx, [esp + 0x50] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(esp + 0x50); } /* 0x006D2BAF: cmovae ecx, dword ptr [esp + 0x50] */
    PUSH32(esp, ecx); /* 0x006D2BB4: push ecx */
    PUSH32(esp, 0x00800A98u); /* 0x006D2BB5: push 0x800a98 */
    PUSH32(esp, edi); /* 0x006D2BBA: push edi */
    RECOMP_ICALL(esi); /* 0x006D2BBB: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x006D2BBD: add esp, 0x1c */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x006D2BC0: push edi */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x006D2BC1: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x20); /* 0x006D2BC7: mov ecx, dword ptr [esp + 0x20] */
    eax = esp + 0x44; /* 0x006D2BCB: lea eax, [esp + 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xF24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xF24u; /* 0x006D2BCF: add ecx, 0xf24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2BD5: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x006D2BD8: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D2BE6; /* 0x006D2BDA: je 0x6d2be6 */
L_006D2BDC:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D2BDC: push -1 */
    PUSH32(esp, 0); /* 0x006D2BDE: push 0 */
    PUSH32(esp, eax); /* 0x006D2BE0: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x006D2BE1: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_006D2BE6:
    eax = MEM32(esp + 0x20); /* 0x006D2BE6: mov eax, dword ptr [esp + 0x20] */
    PUSH32(esp, eax); /* 0x006D2BEA: push eax */
    ecx = MEM32(eax); /* 0x006D2BEB: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D2BED: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0xE0) = (uint8_t)(2); /* 0x006D2BF0: mov byte ptr [esp + 0xe0], 2 */
    /* cmp MEM32(esp + 0x6C), 8 */ /* 0x006D2BF8: cmp dword ptr [esp + 0x6c], 8 */
    _flag_a = (uint32_t)(MEM32(esp + 0x6C)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D2C08; /* 0x006D2BFD: jb 0x6d2c08 */
L_006D2BFF:
    PUSH32(esp, MEM32(esp + 0x58)); /* 0x006D2BFF: push dword ptr [esp + 0x58] */
    RECOMP_ICALL(ebx); /* 0x006D2C03: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2C05: add esp, 4 */
    _flag_k = FK_ADD;
L_006D2C08:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D2C08: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x6C) = 7; /* 0x006D2C0A: mov dword ptr [esp + 0x6c], 7 */
    MEM32(esp + 0x68) = 0; /* 0x006D2C12: mov dword ptr [esp + 0x68], 0 */
    MEM16(esp + 0x58) = (uint16_t)(LO16(eax)); /* 0x006D2C1A: mov word ptr [esp + 0x58], ax */
    MEM8(esp + 0xE0) = (uint8_t)(LO8(eax)); /* 0x006D2C1F: mov byte ptr [esp + 0xe0], al */
    /* cmp MEM32(esp + 0x54), 0x10u */ /* 0x006D2C26: cmp dword ptr [esp + 0x54], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x54)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D2C36; /* 0x006D2C2B: jb 0x6d2c36 */
L_006D2C2D:
    PUSH32(esp, MEM32(esp + 0x40)); /* 0x006D2C2D: push dword ptr [esp + 0x40] */
    RECOMP_ICALL(ebx); /* 0x006D2C31: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2C33: add esp, 4 */
    _flag_k = FK_ADD;
L_006D2C36:
    edi = MEM32(esp + 0x10); /* 0x006D2C36: mov edi, dword ptr [esp + 0x10] */
    MEM32(esp + 0x54) = 0xFu; /* 0x006D2C3A: mov dword ptr [esp + 0x54], 0xf */
    MEM32(esp + 0x50) = 0; /* 0x006D2C42: mov dword ptr [esp + 0x50], 0 */
    MEM8(esp + 0x40) = (uint8_t)(0); /* 0x006D2C4A: mov byte ptr [esp + 0x40], 0 */
L_006D2C4F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D2C4F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D2C51:
    MEM32(esp + 0xE0) = 0xFFFFFFFFu; /* 0x006D2C51: mov dword ptr [esp + 0xe0], 0xffffffff */
    /* test edi, edi */ /* 0x006D2C5C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D2C7E; /* 0x006D2C5E: je 0x6d2c7e */
L_006D2C60:
    PUSH32(esp, edi); /* 0x006D2C60: push edi */
    RECOMP_ICALL(ebx); /* 0x006D2C61: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2C63: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x10) = 0; /* 0x006D2C66: mov dword ptr [esp + 0x10], 0 */
    MEM32(esp + 0x14) = 0; /* 0x006D2C6E: mov dword ptr [esp + 0x14], 0 */
    MEM32(esp + 0x18) = 0; /* 0x006D2C76: mov dword ptr [esp + 0x18], 0 */
L_006D2C7E:
    eax = esi; /* 0x006D2C7E: mov eax, esi */
    ecx = MEM32(esp + 0xD8); /* 0x006D2C80: mov ecx, dword ptr [esp + 0xd8] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D2C87: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D2C8E: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D2C8F: pop edi */
    esi = POP32_VAL(esp); /* 0x006D2C90: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D2C91: pop ebx */
    ecx = MEM32(esp + 0xC0); /* 0x006D2C92: mov ecx, dword ptr [esp + 0xc0] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D2C99: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D2C9B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D2CA0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D2CA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D2CA3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006D2CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D2CB0u);

L_006D2CB0:
    PUSH32(esp, ebp); /* 0x006D2CB0: push ebp */
    ebp = esp; /* 0x006D2CB1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D2CB3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D2CB6: push -1 */
    PUSH32(esp, 0x007C68A5u); /* 0x006D2CB8: push 0x7c68a5 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D2CBD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D2CC3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB0u; /* 0x006D2CC4: sub esp, 0xb0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D2CCA: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D2CCF: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xA8) = eax; /* 0x006D2CD1: mov dword ptr [esp + 0xa8], eax */
    PUSH32(esp, ebx); /* 0x006D2CD8: push ebx */
    PUSH32(esp, esi); /* 0x006D2CD9: push esi */
    PUSH32(esp, edi); /* 0x006D2CDA: push edi */
    eax = MEM32(0x855000); /* 0x006D2CDB: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D2CE0: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D2CE2: push eax */
    eax = esp + 0xC0; /* 0x006D2CE3: lea eax, [esp + 0xc0] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D2CEA: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x006D2CF0: mov edi, ecx */
    MEM32(esp + 0x18) = edi; /* 0x006D2CF2: mov dword ptr [esp + 0x18], edi */
    eax = MEM32(ebp + 0x10); /* 0x006D2CF6: mov eax, dword ptr [ebp + 0x10] */
    edx = 0x007F23D8u; /* 0x006D2CF9: mov edx, 0x7f23d8 */
    ebx = MEM32(ebp + 0x8); /* 0x006D2CFE: mov ebx, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x006D2D01: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = 0; /* 0x006D2D03: mov dword ptr [esp + 0x38], 0 */
    if (TEST_NZ(_flag_a, _flag_b)) { edx = eax; } /* 0x006D2D0B: cmovne edx, eax */
    MEM32(esp + 0x3C) = 0; /* 0x006D2D0E: mov dword ptr [esp + 0x3c], 0 */
    MEM32(esp + 0x1C) = 0; /* 0x006D2D16: mov dword ptr [esp + 0x1c], 0 */
    MEM32(esp + 0x14) = 0; /* 0x006D2D1E: mov dword ptr [esp + 0x14], 0 */
    MEM32(esp + 0x3C) = 0xFu; /* 0x006D2D26: mov dword ptr [esp + 0x3c], 0xf */
    /* cmp MEM8(edx), 0 */ /* 0x006D2D2E: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(esp + 0x38) = 0; /* 0x006D2D31: mov dword ptr [esp + 0x38], 0 */
    MEM8(esp + 0x28) = (uint8_t)(0); /* 0x006D2D39: mov byte ptr [esp + 0x28], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D2D44; /* 0x006D2D3E: jne 0x6d2d44 */
L_006D2D40:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D2D40: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006D2D59; /* 0x006D2D42: jmp 0x6d2d59 */
L_006D2D44:
    ecx = edx; /* 0x006D2D44: mov ecx, edx */
    esi = ecx + 0x1; /* 0x006D2D46: lea esi, [ecx + 1] */
    esp = esp; /* 0x006D2D49: lea esp, [esp] */
L_006D2D50:
    SET_LO8(eax, MEM8(ecx)); /* 0x006D2D50: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006D2D52: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006D2D53: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D2D50; /* 0x006D2D55: jne 0x6d2d50 */
L_006D2D57:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x006D2D57: sub ecx, esi */
    _flag_k = FK_CMP;
L_006D2D59:
    PUSH32(esp, ecx); /* 0x006D2D59: push ecx */
    PUSH32(esp, edx); /* 0x006D2D5A: push edx */
    ecx = esp + 0x30; /* 0x006D2D5B: lea ecx, [esp + 0x30] */
    RECOMP_CALL(sub_0040A2F0); /* 0x006D2D5F: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x14; /* 0x006D2D64: lea eax, [esp + 0x14] */
    MEM32(esp + 0xC8) = 0; /* 0x006D2D68: mov dword ptr [esp + 0xc8], 0 */
    PUSH32(esp, eax); /* 0x006D2D73: push eax */
    eax = esp + 0x20; /* 0x006D2D74: lea eax, [esp + 0x20] */
    MEM32(esp + 0x24) = 0x00801928u; /* 0x006D2D78: mov dword ptr [esp + 0x24], 0x801928 */
    PUSH32(esp, eax); /* 0x006D2D80: push eax */
    PUSH32(esp, 0); /* 0x006D2D81: push 0 */
    PUSH32(esp, 0x00010000u); /* 0x006D2D83: push 0x10000 */
    eax = esp + 0x30; /* 0x006D2D88: lea eax, [esp + 0x30] */
    MEM32(esp + 0x34) = edi; /* 0x006D2D8C: mov dword ptr [esp + 0x34], edi */
    PUSH32(esp, eax); /* 0x006D2D90: push eax */
    PUSH32(esp, 0); /* 0x006D2D91: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006D2D93: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x006D2D96: push ebx */
    PUSH32(esp, MEM32(edi + 0x10C)); /* 0x006D2D97: push dword ptr [edi + 0x10c] */
    RECOMP_ICALL(MEM32(0x7CC938)); /* 0x006D2D9D: call dword ptr [0x7cc938] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x7CC694); /* 0x006D2DA3: mov ebx, dword ptr [0x7cc694] */
    /* test eax, eax */ /* 0x006D2DA9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D2E15; /* 0x006D2DAB: jne 0x6d2e15 */
L_006D2DAD:
    PUSH32(esp, 0x1Cu); /* 0x006D2DAD: push 0x1c */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D2DAF: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2DB5: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x18) = eax; /* 0x006D2DB8: mov dword ptr [esp + 0x18], eax */
    MEM8(esp + 0xC8) = (uint8_t)(1); /* 0x006D2DBC: mov byte ptr [esp + 0xc8], 1 */
    /* test eax, eax */ /* 0x006D2DC4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D2DD8; /* 0x006D2DC6: je 0x6d2dd8 */
L_006D2DC8:
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x006D2DC8: push dword ptr [esp + 0x1c] */
    ecx = eax; /* 0x006D2DCC: mov ecx, eax */
    PUSH32(esp, edi); /* 0x006D2DCE: push edi */
    RECOMP_CALL(sub_006DAB40); /* 0x006D2DCF: call 0x6dab40 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D2DD4: mov esi, eax */
    goto L_006D2DDA; /* 0x006D2DD6: jmp 0x6d2dda */
L_006D2DD8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D2DD8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D2DDA:
    MEM8(esp + 0xC8) = (uint8_t)(0); /* 0x006D2DDA: mov byte ptr [esp + 0xc8], 0 */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x006D2DE2: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D301C; /* 0x006D2DE6: jne 0x6d301c */
L_006D2DEC:
    ecx = MEM32(0x7CC230); /* 0x006D2DEC: mov ecx, dword ptr [0x7cc230] */
    edx = esp + 0x28; /* 0x006D2DF2: lea edx, [esp + 0x28] */
    RECOMP_CALL(sub_005CD960); /* 0x006D2DF6: call 0x5cd960 */
    RECOMP_FLAGS_IN();
    edx = 0x0080153Cu; /* 0x006D2DFB: mov edx, 0x80153c */
    ecx = eax; /* 0x006D2E00: mov ecx, eax */
    RECOMP_CALL(sub_006715D0); /* 0x006D2E02: call 0x6715d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x006D2E07: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D2E09: mov ecx, esi */
    PUSH32(esp, 1); /* 0x006D2E0B: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006D2E0D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_006D301A; /* 0x006D2E10: jmp 0x6d301a */
L_006D2E15:
    ecx = MEM32(esp + 0x14); /* 0x006D2E15: mov ecx, dword ptr [esp + 0x14] */
    /* test ecx, ecx */ /* 0x006D2E19: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D301A; /* 0x006D2E1B: je 0x6d301a */
L_006D2E21:
    eax = MEM32(ecx); /* 0x006D2E21: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D2E23: push ecx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x006D2E24: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x006D2E27: push eax */
    ecx = esp + 0x44; /* 0x006D2E28: lea ecx, [esp + 0x44] */
    RECOMP_CALL(sub_00409FA0); /* 0x006D2E2C: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    edx = esp + 0x28; /* 0x006D2E31: lea edx, [esp + 0x28] */
    MEM8(esp + 0xC8) = (uint8_t)(2); /* 0x006D2E35: mov byte ptr [esp + 0xc8], 2 */
    ecx = esp + 0xA0; /* 0x006D2E3D: lea ecx, [esp + 0xa0] */
    RECOMP_CALL(sub_006D1870); /* 0x006D2E44: call 0x6d1870 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x006D2E49: mov edx, eax */
    MEM8(esp + 0xC8) = (uint8_t)(3); /* 0x006D2E4B: mov byte ptr [esp + 0xc8], 3 */
    ecx = esp + 0x88; /* 0x006D2E53: lea ecx, [esp + 0x88] */
    RECOMP_CALL(sub_006D1930); /* 0x006D2E5A: call 0x6d1930 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D2E5F: mov esi, eax */
    PUSH32(esp, ecx); /* 0x006D2E61: push ecx */
    edx = edi + 0xF60; /* 0x006D2E62: lea edx, [edi + 0xf60] */
    MEM8(esp + 0xCC) = (uint8_t)(4); /* 0x006D2E68: mov byte ptr [esp + 0xcc], 4 */
    ecx = esp + 0x74; /* 0x006D2E70: lea ecx, [esp + 0x74] */
    RECOMP_CALL(sub_006D52D0); /* 0x006D2E74: call 0x6d52d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2E79: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x006D2E7C: push esi */
    edx = eax; /* 0x006D2E7D: mov edx, eax */
    MEM8(esp + 0xCC) = (uint8_t)(5); /* 0x006D2E7F: mov byte ptr [esp + 0xcc], 5 */
    ecx = esp + 0x5C; /* 0x006D2E87: lea ecx, [esp + 0x5c] */
    RECOMP_CALL(sub_005CA4F0); /* 0x006D2E8B: call 0x5ca4f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2E90: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esp + 0xC8) = (uint8_t)(7); /* 0x006D2E93: mov byte ptr [esp + 0xc8], 7 */
    /* cmp MEM32(esp + 0x84), 8 */ /* 0x006D2E9B: cmp dword ptr [esp + 0x84], 8 */
    _flag_a = (uint32_t)(MEM32(esp + 0x84)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D2EAE; /* 0x006D2EA3: jb 0x6d2eae */
L_006D2EA5:
    PUSH32(esp, MEM32(esp + 0x70)); /* 0x006D2EA5: push dword ptr [esp + 0x70] */
    RECOMP_ICALL(ebx); /* 0x006D2EA9: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2EAB: add esp, 4 */
    _flag_k = FK_ADD;
L_006D2EAE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D2EAE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x84) = 7; /* 0x006D2EB0: mov dword ptr [esp + 0x84], 7 */
    MEM32(esp + 0x80) = 0; /* 0x006D2EBB: mov dword ptr [esp + 0x80], 0 */
    MEM16(esp + 0x70) = (uint16_t)(LO16(eax)); /* 0x006D2EC6: mov word ptr [esp + 0x70], ax */
    MEM8(esp + 0xC8) = (uint8_t)(8); /* 0x006D2ECB: mov byte ptr [esp + 0xc8], 8 */
    /* cmp MEM32(esp + 0x9C), 8 */ /* 0x006D2ED3: cmp dword ptr [esp + 0x9c], 8 */
    _flag_a = (uint32_t)(MEM32(esp + 0x9C)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D2EE9; /* 0x006D2EDB: jb 0x6d2ee9 */
L_006D2EDD:
    PUSH32(esp, MEM32(esp + 0x88)); /* 0x006D2EDD: push dword ptr [esp + 0x88] */
    RECOMP_ICALL(ebx); /* 0x006D2EE4: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2EE6: add esp, 4 */
    _flag_k = FK_ADD;
L_006D2EE9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D2EE9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x9C) = 7; /* 0x006D2EEB: mov dword ptr [esp + 0x9c], 7 */
    MEM32(esp + 0x98) = 0; /* 0x006D2EF6: mov dword ptr [esp + 0x98], 0 */
    MEM16(esp + 0x88) = (uint16_t)(LO16(eax)); /* 0x006D2F01: mov word ptr [esp + 0x88], ax */
    MEM8(esp + 0xC8) = (uint8_t)(9); /* 0x006D2F09: mov byte ptr [esp + 0xc8], 9 */
    /* cmp MEM32(esp + 0xB4), 0x10u */ /* 0x006D2F11: cmp dword ptr [esp + 0xb4], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0xB4)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D2F27; /* 0x006D2F19: jb 0x6d2f27 */
L_006D2F1B:
    PUSH32(esp, MEM32(esp + 0xA0)); /* 0x006D2F1B: push dword ptr [esp + 0xa0] */
    RECOMP_ICALL(ebx); /* 0x006D2F22: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2F24: add esp, 4 */
    _flag_k = FK_ADD;
L_006D2F27:
    PUSH32(esp, 4); /* 0x006D2F27: push 4 */
    PUSH32(esp, 0x0080165Cu); /* 0x006D2F29: push 0x80165c */
    ecx = esp + 0x60; /* 0x006D2F2E: lea ecx, [esp + 0x60] */
    MEM32(esp + 0xBC) = 0xFu; /* 0x006D2F32: mov dword ptr [esp + 0xbc], 0xf */
    MEM32(esp + 0xB8) = 0; /* 0x006D2F3D: mov dword ptr [esp + 0xb8], 0 */
    MEM8(esp + 0xA8) = (uint8_t)(0); /* 0x006D2F48: mov byte ptr [esp + 0xa8], 0 */
    RECOMP_CALL(sub_005CA6C0); /* 0x006D2F50: call 0x5ca6c0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esp + 0x6C), 8 */ /* 0x006D2F55: cmp dword ptr [esp + 0x6c], 8 */
    _flag_a = (uint32_t)(MEM32(esp + 0x6C)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esp + 0x58; /* 0x006D2F5A: lea eax, [esp + 0x58] */
    PUSH32(esp, 0x00801654u); /* 0x006D2F5E: push 0x801654 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(esp + 0x5C); } /* 0x006D2F63: cmovae eax, dword ptr [esp + 0x5c] */
    PUSH32(esp, eax); /* 0x006D2F68: push eax */
    RECOMP_ICALL(MEM32(0x7CC568)); /* 0x006D2F69: call dword ptr [0x7cc568] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x7CC560); /* 0x006D2F6F: mov esi, dword ptr [0x7cc560] */
    edi = eax; /* 0x006D2F75: mov edi, eax */
    PUSH32(esp, 0x0080163Cu); /* 0x006D2F77: push 0x80163c */
    PUSH32(esp, edi); /* 0x006D2F7C: push edi */
    RECOMP_ICALL(esi); /* 0x006D2F7D: call esi */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esp + 0x64), 0x10u */ /* 0x006D2F7F: cmp dword ptr [esp + 0x64], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x64)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = esp + 0x50; /* 0x006D2F84: lea ecx, [esp + 0x50] */
    if (CMP_AE(_flag_a, _flag_b)) { ecx = MEM32(esp + 0x50); } /* 0x006D2F88: cmovae ecx, dword ptr [esp + 0x50] */
    PUSH32(esp, ecx); /* 0x006D2F8D: push ecx */
    PUSH32(esp, 0x00800A98u); /* 0x006D2F8E: push 0x800a98 */
    PUSH32(esp, edi); /* 0x006D2F93: push edi */
    RECOMP_ICALL(esi); /* 0x006D2F94: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x006D2F96: add esp, 0x1c */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x006D2F99: push edi */
    RECOMP_ICALL(MEM32(0x7CC498)); /* 0x006D2F9A: call dword ptr [0x7cc498] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x1C); /* 0x006D2FA0: mov ecx, dword ptr [esp + 0x1c] */
    eax = esp + 0x44; /* 0x006D2FA4: lea eax, [esp + 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xF24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xF24u; /* 0x006D2FA8: add ecx, 0xf24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2FAE: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x006D2FB1: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D2FBF; /* 0x006D2FB3: je 0x6d2fbf */
L_006D2FB5:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D2FB5: push -1 */
    PUSH32(esp, 0); /* 0x006D2FB7: push 0 */
    PUSH32(esp, eax); /* 0x006D2FB9: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x006D2FBA: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_006D2FBF:
    MEM8(esp + 0xC8) = (uint8_t)(2); /* 0x006D2FBF: mov byte ptr [esp + 0xc8], 2 */
    /* cmp MEM32(esp + 0x6C), 8 */ /* 0x006D2FC7: cmp dword ptr [esp + 0x6c], 8 */
    _flag_a = (uint32_t)(MEM32(esp + 0x6C)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D2FD7; /* 0x006D2FCC: jb 0x6d2fd7 */
L_006D2FCE:
    PUSH32(esp, MEM32(esp + 0x58)); /* 0x006D2FCE: push dword ptr [esp + 0x58] */
    RECOMP_ICALL(ebx); /* 0x006D2FD2: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D2FD4: add esp, 4 */
    _flag_k = FK_ADD;
L_006D2FD7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D2FD7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x6C) = 7; /* 0x006D2FD9: mov dword ptr [esp + 0x6c], 7 */
    MEM32(esp + 0x68) = 0; /* 0x006D2FE1: mov dword ptr [esp + 0x68], 0 */
    MEM16(esp + 0x58) = (uint16_t)(LO16(eax)); /* 0x006D2FE9: mov word ptr [esp + 0x58], ax */
    MEM8(esp + 0xC8) = (uint8_t)(LO8(eax)); /* 0x006D2FEE: mov byte ptr [esp + 0xc8], al */
    /* cmp MEM32(esp + 0x54), 0x10u */ /* 0x006D2FF5: cmp dword ptr [esp + 0x54], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x54)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D3005; /* 0x006D2FFA: jb 0x6d3005 */
L_006D2FFC:
    PUSH32(esp, MEM32(esp + 0x40)); /* 0x006D2FFC: push dword ptr [esp + 0x40] */
    RECOMP_ICALL(ebx); /* 0x006D3000: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D3002: add esp, 4 */
    _flag_k = FK_ADD;
L_006D3005:
    MEM32(esp + 0x54) = 0xFu; /* 0x006D3005: mov dword ptr [esp + 0x54], 0xf */
    MEM32(esp + 0x50) = 0; /* 0x006D300D: mov dword ptr [esp + 0x50], 0 */
    MEM8(esp + 0x40) = (uint8_t)(0); /* 0x006D3015: mov byte ptr [esp + 0x40], 0 */
L_006D301A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D301A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D301C:
    MEM32(esp + 0xC8) = 0xFFFFFFFFu; /* 0x006D301C: mov dword ptr [esp + 0xc8], 0xffffffff */
    /* cmp MEM32(esp + 0x3C), 0x10u */ /* 0x006D3027: cmp dword ptr [esp + 0x3c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x3C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D3037; /* 0x006D302C: jb 0x6d3037 */
L_006D302E:
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x006D302E: push dword ptr [esp + 0x28] */
    RECOMP_ICALL(ebx); /* 0x006D3032: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D3034: add esp, 4 */
    _flag_k = FK_ADD;
L_006D3037:
    MEM32(esp + 0x3C) = 0xFu; /* 0x006D3037: mov dword ptr [esp + 0x3c], 0xf */
    eax = esi; /* 0x006D303F: mov eax, esi */
    MEM32(esp + 0x38) = 0; /* 0x006D3041: mov dword ptr [esp + 0x38], 0 */
    MEM8(esp + 0x28) = (uint8_t)(0); /* 0x006D3049: mov byte ptr [esp + 0x28], 0 */
    ecx = MEM32(esp + 0xC0); /* 0x006D304E: mov ecx, dword ptr [esp + 0xc0] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D3055: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D305C: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D305D: pop edi */
    esi = POP32_VAL(esp); /* 0x006D305E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D305F: pop ebx */
    ecx = MEM32(esp + 0xA8); /* 0x006D3060: mov ecx, dword ptr [esp + 0xa8] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D3067: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D3069: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D306E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D3070: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006D3071: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_006D3080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D3080u);

L_006D3080:
    PUSH32(esp, ebp); /* 0x006D3080: push ebp */
    ebp = esp; /* 0x006D3081: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D3083: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D3086: push -1 */
    PUSH32(esp, 0x007C6905u); /* 0x006D3088: push 0x7c6905 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D308D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D3093: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x006D3094: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D3097: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D309C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x28) = eax; /* 0x006D309E: mov dword ptr [esp + 0x28], eax */
    PUSH32(esp, ebx); /* 0x006D30A2: push ebx */
    PUSH32(esp, esi); /* 0x006D30A3: push esi */
    PUSH32(esp, edi); /* 0x006D30A4: push edi */
    eax = MEM32(0x855000); /* 0x006D30A5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D30AA: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D30AC: push eax */
    eax = esp + 0x40; /* 0x006D30AD: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D30B1: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x006D30B7: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x006D30B9: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006D30BC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = ebx; /* 0x006D30BE: mov dword ptr [esp + 0x18], ebx */
    MEM32(esp + 0x14) = ebx; /* 0x006D30C2: mov dword ptr [esp + 0x14], ebx */
    esi = MEM32(eax); /* 0x006D30C6: mov esi, dword ptr [eax] */
    /* cmp esi, 1 */ /* 0x006D30C8: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D3161; /* 0x006D30CB: jbe 0x6d3161 */
L_006D30D1:
    edx = MEM32(eax + 0x4); /* 0x006D30D1: mov edx, dword ptr [eax + 4] */
    /* cmp edx, 1 */ /* 0x006D30D4: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D3161; /* 0x006D30D7: jbe 0x6d3161 */
L_006D30DD:
    eax = MEM32(edi + 0x10C); /* 0x006D30DD: mov eax, dword ptr [edi + 0x10c] */
    PUSH32(esp, ebx); /* 0x006D30E3: push ebx */
    ecx = MEM32(eax); /* 0x006D30E4: mov ecx, dword ptr [eax] */
    eax = esp + 0x18; /* 0x006D30E6: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x006D30EA: push eax */
    eax = MEM32(edi + 0x10C); /* 0x006D30EB: mov eax, dword ptr [edi + 0x10c] */
    PUSH32(esp, ebx); /* 0x006D30F1: push ebx */
    PUSH32(esp, 0x16u); /* 0x006D30F2: push 0x16 */
    PUSH32(esp, 1); /* 0x006D30F4: push 1 */
    PUSH32(esp, 1); /* 0x006D30F6: push 1 */
    PUSH32(esp, edx); /* 0x006D30F8: push edx */
    PUSH32(esp, esi); /* 0x006D30F9: push esi */
    PUSH32(esp, eax); /* 0x006D30FA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x5C)); /* 0x006D30FB: call dword ptr [ecx + 0x5c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D30FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D3161; /* 0x006D3100: jne 0x6d3161 */
L_006D3102:
    PUSH32(esp, 0x58u); /* 0x006D3102: push 0x58 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D3104: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D310A: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D310C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x1C) = esi; /* 0x006D310F: mov dword ptr [esp + 0x1c], esi */
    MEM32(esp + 0x48) = ebx; /* 0x006D3113: mov dword ptr [esp + 0x48], ebx */
    /* test esi, esi */ /* 0x006D3117: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D314D; /* 0x006D3119: je 0x6d314d */
L_006D311B:
    PUSH32(esp, 0x007CD0C4u); /* 0x006D311B: push 0x7cd0c4 */
    ecx = esp + 0x24; /* 0x006D3120: lea ecx, [esp + 0x24] */
    RECOMP_CALL(sub_00409FA0); /* 0x006D3124: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x20; /* 0x006D3129: lea eax, [esp + 0x20] */
    MEM8(esp + 0x48) = (uint8_t)(1); /* 0x006D312D: mov byte ptr [esp + 0x48], 1 */
    PUSH32(esp, eax); /* 0x006D3132: push eax */
    ebx = 1; /* 0x006D3133: mov ebx, 1 */
    ecx = esi; /* 0x006D3138: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x006D313A: push ebx */
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x006D313B: push dword ptr [esp + 0x1c] */
    MEM32(esp + 0x24) = ebx; /* 0x006D313F: mov dword ptr [esp + 0x24], ebx */
    PUSH32(esp, edi); /* 0x006D3143: push edi */
    RECOMP_CALL(sub_006D6F00); /* 0x006D3144: call 0x6d6f00 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D3149: mov esi, eax */
    goto L_006D314F; /* 0x006D314B: jmp 0x6d314f */
L_006D314D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D314D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D314F:
    /* test LO8(ebx), 1 */ /* 0x006D314F: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D315D; /* 0x006D3152: je 0x6d315d */
L_006D3154:
    ecx = esp + 0x20; /* 0x006D3154: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_0040A000); /* 0x006D3158: call 0x40a000 */
    RECOMP_FLAGS_IN();
L_006D315D:
    eax = esi; /* 0x006D315D: mov eax, esi */
    goto L_006D3163; /* 0x006D315F: jmp 0x6d3163 */
L_006D3161:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D3161: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D3163:
    ecx = MEM32(esp + 0x40); /* 0x006D3163: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D3167: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D316E: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D316F: pop edi */
    esi = POP32_VAL(esp); /* 0x006D3170: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D3171: pop ebx */
    ecx = MEM32(esp + 0x28); /* 0x006D3172: mov ecx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D3176: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D3178: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D317D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D317F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D3180: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D3190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D3190u);

L_006D3190:
    PUSH32(esp, ebp); /* 0x006D3190: push ebp */
    ebp = esp; /* 0x006D3191: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D3193: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D3196: push -1 */
    PUSH32(esp, 0x007C6905u); /* 0x006D3198: push 0x7c6905 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D319D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D31A3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x006D31A4: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D31A7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D31AC: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x28) = eax; /* 0x006D31AE: mov dword ptr [esp + 0x28], eax */
    PUSH32(esp, ebx); /* 0x006D31B2: push ebx */
    PUSH32(esp, esi); /* 0x006D31B3: push esi */
    PUSH32(esp, edi); /* 0x006D31B4: push edi */
    eax = MEM32(0x855000); /* 0x006D31B5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D31BA: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D31BC: push eax */
    eax = esp + 0x40; /* 0x006D31BD: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D31C1: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x006D31C7: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x006D31C9: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006D31CC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = ebx; /* 0x006D31CE: mov dword ptr [esp + 0x18], ebx */
    MEM32(esp + 0x14) = ebx; /* 0x006D31D2: mov dword ptr [esp + 0x14], ebx */
    esi = MEM32(eax); /* 0x006D31D6: mov esi, dword ptr [eax] */
    /* cmp esi, 1 */ /* 0x006D31D8: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D3272; /* 0x006D31DB: jb 0x6d3272 */
L_006D31E1:
    edx = MEM32(eax + 0x4); /* 0x006D31E1: mov edx, dword ptr [eax + 4] */
    /* cmp edx, 1 */ /* 0x006D31E4: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D3272; /* 0x006D31E7: jb 0x6d3272 */
L_006D31ED:
    eax = MEM32(edi + 0x10C); /* 0x006D31ED: mov eax, dword ptr [edi + 0x10c] */
    PUSH32(esp, ebx); /* 0x006D31F3: push ebx */
    ecx = MEM32(eax); /* 0x006D31F4: mov ecx, dword ptr [eax] */
    eax = esp + 0x18; /* 0x006D31F6: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x006D31FA: push eax */
    eax = MEM32(edi + 0x10C); /* 0x006D31FB: mov eax, dword ptr [edi + 0x10c] */
    PUSH32(esp, 1); /* 0x006D3201: push 1 */
    PUSH32(esp, 0x15u); /* 0x006D3203: push 0x15 */
    PUSH32(esp, ebx); /* 0x006D3205: push ebx */
    PUSH32(esp, 1); /* 0x006D3206: push 1 */
    PUSH32(esp, edx); /* 0x006D3208: push edx */
    PUSH32(esp, esi); /* 0x006D3209: push esi */
    PUSH32(esp, eax); /* 0x006D320A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x5C)); /* 0x006D320B: call dword ptr [ecx + 0x5c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D320E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D3272; /* 0x006D3210: jne 0x6d3272 */
L_006D3212:
    PUSH32(esp, 0x58u); /* 0x006D3212: push 0x58 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D3214: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D321A: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D321C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x1C) = esi; /* 0x006D321F: mov dword ptr [esp + 0x1c], esi */
    MEM32(esp + 0x48) = ebx; /* 0x006D3223: mov dword ptr [esp + 0x48], ebx */
    /* test esi, esi */ /* 0x006D3227: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D325E; /* 0x006D3229: je 0x6d325e */
L_006D322B:
    PUSH32(esp, 0x007CD0C4u); /* 0x006D322B: push 0x7cd0c4 */
    ecx = esp + 0x24; /* 0x006D3230: lea ecx, [esp + 0x24] */
    RECOMP_CALL(sub_00409FA0); /* 0x006D3234: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x20; /* 0x006D3239: lea eax, [esp + 0x20] */
    MEM8(esp + 0x48) = (uint8_t)(1); /* 0x006D323D: mov byte ptr [esp + 0x48], 1 */
    PUSH32(esp, eax); /* 0x006D3242: push eax */
    PUSH32(esp, 0); /* 0x006D3243: push 0 */
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x006D3245: push dword ptr [esp + 0x1c] */
    ebx = 1; /* 0x006D3249: mov ebx, 1 */
    ecx = esi; /* 0x006D324E: mov ecx, esi */
    PUSH32(esp, edi); /* 0x006D3250: push edi */
    MEM32(esp + 0x28) = ebx; /* 0x006D3251: mov dword ptr [esp + 0x28], ebx */
    RECOMP_CALL(sub_006D6F00); /* 0x006D3255: call 0x6d6f00 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D325A: mov esi, eax */
    goto L_006D3260; /* 0x006D325C: jmp 0x6d3260 */
L_006D325E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D325E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D3260:
    /* test LO8(ebx), 1 */ /* 0x006D3260: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D326E; /* 0x006D3263: je 0x6d326e */
L_006D3265:
    ecx = esp + 0x20; /* 0x006D3265: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_0040A000); /* 0x006D3269: call 0x40a000 */
    RECOMP_FLAGS_IN();
L_006D326E:
    eax = esi; /* 0x006D326E: mov eax, esi */
    goto L_006D3274; /* 0x006D3270: jmp 0x6d3274 */
L_006D3272:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D3272: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D3274:
    ecx = MEM32(esp + 0x40); /* 0x006D3274: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D3278: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D327F: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D3280: pop edi */
    esi = POP32_VAL(esp); /* 0x006D3281: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D3282: pop ebx */
    ecx = MEM32(esp + 0x28); /* 0x006D3283: mov ecx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D3287: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D3289: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D328E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D3290: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D3291: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D32A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D32A0u);

L_006D32A0:
    PUSH32(esp, ebp); /* 0x006D32A0: push ebp */
    ebp = esp; /* 0x006D32A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D32A3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D32A6: push -1 */
    PUSH32(esp, 0x007C6955u); /* 0x006D32A8: push 0x7c6955 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D32AD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D32B3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x006D32B4: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D32B7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D32BC: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x28) = eax; /* 0x006D32BE: mov dword ptr [esp + 0x28], eax */
    PUSH32(esp, ebx); /* 0x006D32C2: push ebx */
    PUSH32(esp, esi); /* 0x006D32C3: push esi */
    PUSH32(esp, edi); /* 0x006D32C4: push edi */
    eax = MEM32(0x855000); /* 0x006D32C5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D32CA: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D32CC: push eax */
    eax = esp + 0x40; /* 0x006D32CD: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D32D1: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x006D32D7: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x006D32D9: mov esi, dword ptr [ebp + 8] */
    eax = esp + 0x14; /* 0x006D32DC: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x006D32E0: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006D32E1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D32E3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0xC), LO8(eax) */ /* 0x006D32E5: cmp byte ptr [ebp + 0xc], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x006D32E8: push ebx */
    PUSH32(esp, ebx); /* 0x006D32E9: push ebx */
    PUSH32(esp, ebx); /* 0x006D32EA: push ebx */
    PUSH32(esp, 5); /* 0x006D32EB: push 5 */
    PUSH32(esp, 5); /* 0x006D32ED: push 5 */
    PUSH32(esp, 1); /* 0x006D32EF: push 1 */
    PUSH32(esp, ebx); /* 0x006D32F1: push ebx */
    PUSH32(esp, ebx); /* 0x006D32F2: push ebx */
    MEM32(esp + 0x3C) = ebx; /* 0x006D32F3: mov dword ptr [esp + 0x3c], ebx */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D32F7: sete al */
    edx = MEM32(edi + 0xA28); /* 0x006D32FA: mov edx, dword ptr [edi + 0xa28] */
    PUSH32(esp, eax); /* 0x006D3300: push eax */
    PUSH32(esp, edx); /* 0x006D3301: push edx */
    PUSH32(esp, edx); /* 0x006D3302: push edx */
    PUSH32(esp, esi); /* 0x006D3303: push esi */
    PUSH32(esp, MEM32(edi + 0x10C)); /* 0x006D3304: push dword ptr [edi + 0x10c] */
    MEM32(esp + 0x4C) = ebx; /* 0x006D330A: mov dword ptr [esp + 0x4c], ebx */
    RECOMP_ICALL(MEM32(0x7CC93C)); /* 0x006D330E: call dword ptr [0x7cc93c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D3314: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D331F; /* 0x006D3316: jns 0x6d331f */
L_006D3318:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D3318: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006D33A9; /* 0x006D331A: jmp 0x6d33a9 */
L_006D331F:
    PUSH32(esp, 0x58u); /* 0x006D331F: push 0x58 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D3321: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D3327: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D3329: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x1C) = esi; /* 0x006D332C: mov dword ptr [esp + 0x1c], esi */
    MEM32(esp + 0x48) = 0; /* 0x006D3330: mov dword ptr [esp + 0x48], 0 */
    /* test esi, esi */ /* 0x006D3338: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D336F; /* 0x006D333A: je 0x6d336f */
L_006D333C:
    PUSH32(esp, 0x007CD0C4u); /* 0x006D333C: push 0x7cd0c4 */
    ecx = esp + 0x24; /* 0x006D3341: lea ecx, [esp + 0x24] */
    RECOMP_CALL(sub_00409FA0); /* 0x006D3345: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x20; /* 0x006D334A: lea eax, [esp + 0x20] */
    MEM8(esp + 0x48) = (uint8_t)(1); /* 0x006D334E: mov byte ptr [esp + 0x48], 1 */
    PUSH32(esp, eax); /* 0x006D3353: push eax */
    PUSH32(esp, 0); /* 0x006D3354: push 0 */
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x006D3356: push dword ptr [esp + 0x1c] */
    ebx = 1; /* 0x006D335A: mov ebx, 1 */
    ecx = esi; /* 0x006D335F: mov ecx, esi */
    PUSH32(esp, edi); /* 0x006D3361: push edi */
    MEM32(esp + 0x28) = ebx; /* 0x006D3362: mov dword ptr [esp + 0x28], ebx */
    RECOMP_CALL(sub_006D6F00); /* 0x006D3366: call 0x6d6f00 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D336B: mov esi, eax */
    goto L_006D3371; /* 0x006D336D: jmp 0x6d3371 */
L_006D336F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D336F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D3371:
    MEM32(esp + 0x48) = 0xFFFFFFFFu; /* 0x006D3371: mov dword ptr [esp + 0x48], 0xffffffff */
    /* test LO8(ebx), 1 */ /* 0x006D3379: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D33A7; /* 0x006D337C: je 0x6d33a7 */
L_006D337E:
    /* cmp MEM32(esp + 0x34), 0x10u */ /* 0x006D337E: cmp dword ptr [esp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D3392; /* 0x006D3383: jb 0x6d3392 */
L_006D3385:
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x006D3385: push dword ptr [esp + 0x20] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D3389: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D338F: add esp, 4 */
    _flag_k = FK_ADD;
L_006D3392:
    MEM32(esp + 0x34) = 0xFu; /* 0x006D3392: mov dword ptr [esp + 0x34], 0xf */
    MEM32(esp + 0x30) = 0; /* 0x006D339A: mov dword ptr [esp + 0x30], 0 */
    MEM8(esp + 0x20) = (uint8_t)(0); /* 0x006D33A2: mov byte ptr [esp + 0x20], 0 */
L_006D33A7:
    eax = esi; /* 0x006D33A7: mov eax, esi */
L_006D33A9:
    ecx = MEM32(esp + 0x40); /* 0x006D33A9: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D33AD: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D33B4: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D33B5: pop edi */
    esi = POP32_VAL(esp); /* 0x006D33B6: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D33B7: pop ebx */
    ecx = MEM32(esp + 0x28); /* 0x006D33B8: mov ecx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D33BC: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D33BE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D33C3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D33C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D33C6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006D33D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D33D0u);

L_006D33D0:
    PUSH32(esp, ebp); /* 0x006D33D0: push ebp */
    ebp = esp; /* 0x006D33D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D33D3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D33D6: push -1 */
    PUSH32(esp, 0x007C6955u); /* 0x006D33D8: push 0x7c6955 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D33DD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D33E3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x006D33E4: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D33E7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D33EC: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x28) = eax; /* 0x006D33EE: mov dword ptr [esp + 0x28], eax */
    PUSH32(esp, ebx); /* 0x006D33F2: push ebx */
    PUSH32(esp, esi); /* 0x006D33F3: push esi */
    PUSH32(esp, edi); /* 0x006D33F4: push edi */
    eax = MEM32(0x855000); /* 0x006D33F5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D33FA: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D33FC: push eax */
    eax = esp + 0x40; /* 0x006D33FD: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D3401: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x006D3407: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006D3409: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x006D340B: mov esi, dword ptr [ebp + 8] */
    eax = esp + 0x14; /* 0x006D340E: lea eax, [esp + 0x14] */
    MEM32(esp + 0x18) = ebx; /* 0x006D3412: mov dword ptr [esp + 0x18], ebx */
    PUSH32(esp, eax); /* 0x006D3416: push eax */
    edx = MEM32(edi + 0xA28); /* 0x006D3417: mov edx, dword ptr [edi + 0xa28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D341D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x006D341F: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x006D3422: push ebx */
    PUSH32(esp, ebx); /* 0x006D3423: push ebx */
    PUSH32(esp, ebx); /* 0x006D3424: push ebx */
    PUSH32(esp, 5); /* 0x006D3425: push 5 */
    PUSH32(esp, 5); /* 0x006D3427: push 5 */
    PUSH32(esp, 1); /* 0x006D3429: push 1 */
    PUSH32(esp, ebx); /* 0x006D342B: push ebx */
    PUSH32(esp, ebx); /* 0x006D342C: push ebx */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D342D: sete al */
    MEM32(esp + 0x38) = ebx; /* 0x006D3430: mov dword ptr [esp + 0x38], ebx */
    PUSH32(esp, eax); /* 0x006D3434: push eax */
    PUSH32(esp, edx); /* 0x006D3435: push edx */
    PUSH32(esp, edx); /* 0x006D3436: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x006D3437: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x006D343A: push esi */
    PUSH32(esp, MEM32(edi + 0x10C)); /* 0x006D343B: push dword ptr [edi + 0x10c] */
    RECOMP_ICALL(MEM32(0x7CC934)); /* 0x006D3441: call dword ptr [0x7cc934] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D3447: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D3452; /* 0x006D3449: jns 0x6d3452 */
L_006D344B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D344B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006D34DC; /* 0x006D344D: jmp 0x6d34dc */
L_006D3452:
    PUSH32(esp, 0x58u); /* 0x006D3452: push 0x58 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D3454: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D345A: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D345C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x1C) = esi; /* 0x006D345F: mov dword ptr [esp + 0x1c], esi */
    MEM32(esp + 0x48) = 0; /* 0x006D3463: mov dword ptr [esp + 0x48], 0 */
    /* test esi, esi */ /* 0x006D346B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D34A2; /* 0x006D346D: je 0x6d34a2 */
L_006D346F:
    PUSH32(esp, 0x007CD0C4u); /* 0x006D346F: push 0x7cd0c4 */
    ecx = esp + 0x24; /* 0x006D3474: lea ecx, [esp + 0x24] */
    RECOMP_CALL(sub_00409FA0); /* 0x006D3478: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x20; /* 0x006D347D: lea eax, [esp + 0x20] */
    MEM8(esp + 0x48) = (uint8_t)(1); /* 0x006D3481: mov byte ptr [esp + 0x48], 1 */
    PUSH32(esp, eax); /* 0x006D3486: push eax */
    PUSH32(esp, 0); /* 0x006D3487: push 0 */
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x006D3489: push dword ptr [esp + 0x1c] */
    ebx = 1; /* 0x006D348D: mov ebx, 1 */
    ecx = esi; /* 0x006D3492: mov ecx, esi */
    PUSH32(esp, edi); /* 0x006D3494: push edi */
    MEM32(esp + 0x28) = ebx; /* 0x006D3495: mov dword ptr [esp + 0x28], ebx */
    RECOMP_CALL(sub_006D6F00); /* 0x006D3499: call 0x6d6f00 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D349E: mov esi, eax */
    goto L_006D34A4; /* 0x006D34A0: jmp 0x6d34a4 */
L_006D34A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D34A2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D34A4:
    MEM32(esp + 0x48) = 0xFFFFFFFFu; /* 0x006D34A4: mov dword ptr [esp + 0x48], 0xffffffff */
    /* test LO8(ebx), 1 */ /* 0x006D34AC: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D34DA; /* 0x006D34AF: je 0x6d34da */
L_006D34B1:
    /* cmp MEM32(esp + 0x34), 0x10u */ /* 0x006D34B1: cmp dword ptr [esp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D34C5; /* 0x006D34B6: jb 0x6d34c5 */
L_006D34B8:
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x006D34B8: push dword ptr [esp + 0x20] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D34BC: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D34C2: add esp, 4 */
    _flag_k = FK_ADD;
L_006D34C5:
    MEM32(esp + 0x34) = 0xFu; /* 0x006D34C5: mov dword ptr [esp + 0x34], 0xf */
    MEM32(esp + 0x30) = 0; /* 0x006D34CD: mov dword ptr [esp + 0x30], 0 */
    MEM8(esp + 0x20) = (uint8_t)(0); /* 0x006D34D5: mov byte ptr [esp + 0x20], 0 */
L_006D34DA:
    eax = esi; /* 0x006D34DA: mov eax, esi */
L_006D34DC:
    ecx = MEM32(esp + 0x40); /* 0x006D34DC: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D34E0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D34E7: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D34E8: pop edi */
    esi = POP32_VAL(esp); /* 0x006D34E9: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D34EA: pop ebx */
    ecx = MEM32(esp + 0x28); /* 0x006D34EB: mov ecx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D34EF: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D34F1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D34F6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D34F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006D34F9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_006D3500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D3500u);

L_006D3500:
    PUSH32(esp, ebp); /* 0x006D3500: push ebp */
    ebp = esp; /* 0x006D3501: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006D3503: push ecx */
    PUSH32(esp, ebx); /* 0x006D3504: push ebx */
    PUSH32(esp, esi); /* 0x006D3505: push esi */
    PUSH32(esp, edi); /* 0x006D3506: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006D3507: mov edi, dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x006D350A: lea eax, [ebp - 4] */
    PUSH32(esp, 0); /* 0x006D350D: push 0 */
    PUSH32(esp, eax); /* 0x006D350F: push eax */
    ebx = ecx; /* 0x006D3510: mov ebx, ecx */
    PUSH32(esp, 1); /* 0x006D3512: push 1 */
    PUSH32(esp, 0x2D2u); /* 0x006D3514: push 0x2d2 */
    PUSH32(esp, 8); /* 0x006D3519: push 8 */
    edx = MEM32(ebx + 0x10C); /* 0x006D351B: mov edx, dword ptr [ebx + 0x10c] */
    eax = edi + edi * 2; /* 0x006D3521: lea eax, [edi + edi*2] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x006D3524: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x006D3524: shl eax, 4 */
    PUSH32(esp, eax); /* 0x006D3527: push eax */
    PUSH32(esp, edx); /* 0x006D3528: push edx */
    esi = MEM32(edx); /* 0x006D3529: mov esi, dword ptr [edx] */
    RECOMP_ICALL(MEM32(esi + 0x68)); /* 0x006D352B: call dword ptr [esi + 0x68] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D352E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D3556; /* 0x006D3530: js 0x6d3556 */
L_006D3532:
    PUSH32(esp, 0x38u); /* 0x006D3532: push 0x38 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D3534: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D353A: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x006D353D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D3556; /* 0x006D353F: je 0x6d3556 */
L_006D3541:
    PUSH32(esp, edi); /* 0x006D3541: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006D3542: push dword ptr [ebp - 4] */
    ecx = eax; /* 0x006D3545: mov ecx, eax */
    PUSH32(esp, ebx); /* 0x006D3547: push ebx */
    RECOMP_CALL(sub_006D57F0); /* 0x006D3548: call 0x6d57f0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D354D: pop edi */
    esi = POP32_VAL(esp); /* 0x006D354E: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D354F: pop ebx */
    esp = ebp; /* 0x006D3550: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D3552: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D3553: ret 4 */
L_006D3556:
    edi = POP32_VAL(esp); /* 0x006D3556: pop edi */
    esi = POP32_VAL(esp); /* 0x006D3557: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D3558: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D355A: pop ebx */
    esp = ebp; /* 0x006D355B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D355D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D355E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D3570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D3570u);

L_006D3570:
    PUSH32(esp, ebp); /* 0x006D3570: push ebp */
    ebp = esp; /* 0x006D3571: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x006D3573: mov eax, dword ptr [ebp + 0x10] */
    _xmm[1].u64[0] = MEM32(0x8095DC); _xmm[1].u64[1] = 0; /* 0x006D3576: movss xmm1, dword ptr [0x8095dc] */
    PUSH32(esp, ebx); /* 0x006D357E: push ebx */
    PUSH32(esp, esi); /* 0x006D357F: push esi */
    _xmm[0].u64[0] = MEM32(eax); _xmm[0].u64[1] = 0; /* 0x006D3580: movss xmm0, dword ptr [eax] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006D3584: mulss xmm0, xmm1 */
    PUSH32(esp, edi); /* 0x006D3588: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D3589: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x006D358B: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006D358F: cvttss2si esi, xmm0 */
    _xmm[0].u64[0] = MEM32(eax + 0x4); _xmm[0].u64[1] = 0; /* 0x006D3593: movss xmm0, dword ptr [eax + 4] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006D3598: mulss xmm0, xmm1 */
    ebx = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006D359C: cvttss2si ebx, xmm0 */
    _xmm[0].u64[0] = MEM32(eax + 0x8); _xmm[0].u64[1] = 0; /* 0x006D35A0: movss xmm0, dword ptr [eax + 8] */
    eax = 1; /* 0x006D35A5: mov eax, 1 */
    if (CMP_NE(_flag_a, _flag_b)) { edi = eax; } /* 0x006D35AA: cmovne edi, eax */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006D35AD: mulss xmm0, xmm1 */
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x006D35B1: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D35BA; /* 0x006D35B5: je 0x6d35ba */
L_006D35B7:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x006D35B7: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D35BA:
    ecx = MEM32(ecx + 0x10C); /* 0x006D35BA: mov ecx, dword ptr [ecx + 0x10c] */
    _flag_a = (uint32_t)((esi | 0xFFFFFF00u)); _flag_b = (uint32_t)((esi | 0xFFFFFF00u));
    esi = esi | 0xFFFFFF00u; /* 0x006D35C0: or esi, 0xffffff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((esi) >> 24) & 1u); /* 0x006D35C6: shl esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((esi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 8u; /* 0x006D35C6: shl esi, 8 */
    eax = (uint32_t)LO8(ebx); /* 0x006D35C9: movzx eax, bl */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x006D35CC: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ecx); /* 0x006D35CE: mov edx, dword ptr [ecx] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x006D35D0: cvttss2si eax, xmm0 */
    PUSH32(esp, 0); /* 0x006D35D4: push 0 */
    PUSH32(esp, ecx); /* 0x006D35D6: push ecx */
    MEM32(esp) = 0x3F800000u; /* 0x006D35D7: mov dword ptr [esp], 0x3f800000 */
    if (8u) _cf = (((esi) >> 24) & 1u); /* 0x006D35DE: shl esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((esi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 8u; /* 0x006D35DE: shl esi, 8 */
    eax = (uint32_t)LO8(eax); /* 0x006D35E1: movzx eax, al */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x006D35E4: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x006D35E6: push esi */
    PUSH32(esp, edi); /* 0x006D35E7: push edi */
    PUSH32(esp, 0); /* 0x006D35E8: push 0 */
    PUSH32(esp, 0); /* 0x006D35EA: push 0 */
    PUSH32(esp, ecx); /* 0x006D35EC: push ecx */
    RECOMP_ICALL(MEM32(edx + 0xAC)); /* 0x006D35ED: call dword ptr [edx + 0xac] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D35F3: pop edi */
    esi = POP32_VAL(esp); /* 0x006D35F4: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D35F5: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006D35F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006D35F7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_006D3600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D3600u);

L_006D3600:
    PUSH32(esp, ebp); /* 0x006D3600: push ebp */
    ebp = esp; /* 0x006D3601: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x006D3603: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D3606: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D360B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D360D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x006D3610: push esi */
    esi = ecx; /* 0x006D3611: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006D3613: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006D3614: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM8(esi + 0xA20), 0 */ /* 0x006D3617: cmp byte ptr [esi + 0xa20], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xA20)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D36A9; /* 0x006D361E: jne 0x6d36a9 */
L_006D3624:
    ecx = esi + 0x4; /* 0x006D3624: lea ecx, [esi + 4] */
    MEM8(esi + 0xA20) = (uint8_t)(1); /* 0x006D3627: mov byte ptr [esi + 0xa20], 1 */
    RECOMP_CALL(sub_006D9FE0); /* 0x006D362E: call 0x6d9fe0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x10C); /* 0x006D3633: mov eax, dword ptr [esi + 0x10c] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x006D3639: push dword ptr [esi + 0x10] */
    PUSH32(esp, 0); /* 0x006D363C: push 0 */
    ecx = MEM32(eax); /* 0x006D363E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D3640: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x94)); /* 0x006D3641: call dword ptr [ecx + 0x94] */
    RECOMP_FLAGS_IN();
    MEM32(0x87CBBC) = edi; /* 0x006D3647: mov dword ptr [0x87cbbc], edi */
    /* test edi, edi */ /* 0x006D364D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D3682; /* 0x006D364F: je 0x6d3682 */
L_006D3651:
    eax = MEM32(esi); /* 0x006D3651: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x20); /* 0x006D3653: lea ecx, [ebp - 0x20] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D3656: push -1 */
    PUSH32(esp, ecx); /* 0x006D3658: push ecx */
    ecx = esi; /* 0x006D3659: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x006D365B: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x87CBBC); /* 0x006D365E: mov ecx, dword ptr [0x87cbbc] */
    edx = ebp + (-0x3C); /* 0x006D3664: lea edx, [ebp - 0x3c] */
    PUSH32(esp, edx); /* 0x006D3667: push edx */
    eax = MEM32(ecx); /* 0x006D3668: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x006D366A: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x006D366D: mov eax, dword ptr [ebp - 0x20] */
    /* cmp eax, MEM32(ebp + (-0x3C)) */ /* 0x006D3670: cmp eax, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D36BF; /* 0x006D3673: jb 0x6d36bf */
L_006D3675:
    eax = MEM32(ebp + (-0x1C)); /* 0x006D3675: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp eax, MEM32(ebp + (-0x38)) */ /* 0x006D3678: cmp eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D36BF; /* 0x006D367B: jb 0x6d36bf */
L_006D367D:
    RECOMP_CALL(sub_006D6DC0); /* 0x006D367D: call 0x6d6dc0 */
    RECOMP_FLAGS_IN();
L_006D3682:
    eax = MEM32(esi + 0x10C); /* 0x006D3682: mov eax, dword ptr [esi + 0x10c] */
    PUSH32(esp, eax); /* 0x006D3688: push eax */
    ecx = MEM32(eax); /* 0x006D3689: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xA4)); /* 0x006D368B: call dword ptr [ecx + 0xa4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D3691: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D3697; /* 0x006D3693: jns 0x6d3697 */
L_006D3695:
    goto L_006D36B3; /* 0x006D3695: jmp 0x6d36b3 */
L_006D3697:
    ecx = MEM32(ebp + (-0x4)); /* 0x006D3697: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006D369A: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D369B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006D369D: pop esi */
    RECOMP_CALL(sub_0077F4C2); /* 0x006D369E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D36A3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D36A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D36A6: ret 4 */
L_006D36A9:
    PUSH32(esp, 0x008016E4u); /* 0x006D36A9: push 0x8016e4 */
    RECOMP_CALL(sub_006D1E10); /* 0x006D36AE: call 0x6d1e10 */
    RECOMP_FLAGS_IN();
L_006D36B3:
    PUSH32(esp, 0x00801678u); /* 0x006D36B3: push 0x801678 */
    ecx = esi; /* 0x006D36B8: mov ecx, esi */
    RECOMP_CALL(sub_006D1E10); /* 0x006D36BA: call 0x6d1e10 */
    RECOMP_FLAGS_IN();
L_006D36BF:
    PUSH32(esp, 0x00801698u); /* 0x006D36BF: push 0x801698 */
    ecx = esi; /* 0x006D36C4: mov ecx, esi */
    RECOMP_CALL(sub_006D1E10); /* 0x006D36C6: call 0x6d1e10 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006D36CBu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D36D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D36D0u);

L_006D36D0:
    PUSH32(esp, ebp); /* 0x006D36D0: push ebp */
    ebp = esp; /* 0x006D36D1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006D36D3: push ecx */
    PUSH32(esp, esi); /* 0x006D36D4: push esi */
    PUSH32(esp, edi); /* 0x006D36D5: push edi */
    edi = MEM32(ecx + 0x10C); /* 0x006D36D6: mov edi, dword ptr [ecx + 0x10c] */
    PUSH32(esp, 0); /* 0x006D36DC: push 0 */
    PUSH32(esp, 0x008687D8u); /* 0x006D36DE: push 0x8687d8 */
    PUSH32(esp, 0x008687C0u); /* 0x006D36E3: push 0x8687c0 */
    PUSH32(esp, 0); /* 0x006D36E8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D36EA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_00780022); /* 0x006D36ED: call 0x780022 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x006D36F2: add esp, 0x14 */
    _flag_k = FK_ADD;
    edx = ebp + (-0x4); /* 0x006D36F5: lea edx, [ebp - 4] */
    eax = MEM32(eax + 0x14); /* 0x006D36F8: mov eax, dword ptr [eax + 0x14] */
    PUSH32(esp, edx); /* 0x006D36FB: push edx */
    PUSH32(esp, 0); /* 0x006D36FC: push 0 */
    PUSH32(esp, eax); /* 0x006D36FE: push eax */
    ecx = MEM32(eax); /* 0x006D36FF: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x006D3701: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x006D3704: mov eax, dword ptr [edi] */
    ecx = ebp + 0x8; /* 0x006D3706: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x006D3709: push ecx */
    PUSH32(esp, 0); /* 0x006D370A: push 0 */
    PUSH32(esp, edi); /* 0x006D370C: push edi */
    RECOMP_ICALL(MEM32(eax + 0x98)); /* 0x006D370D: call dword ptr [eax + 0x98] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x006D3713: mov ecx, dword ptr [edi] */
    esi = eax; /* 0x006D3715: mov esi, eax */
    PUSH32(esp, 0); /* 0x006D3717: push 0 */
    PUSH32(esp, 0); /* 0x006D3719: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x006D371B: push dword ptr [ebp - 4] */
    PUSH32(esp, 0); /* 0x006D371E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D3720: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x006D3723: push edi */
    RECOMP_ICALL(MEM32(ecx + 0x88)); /* 0x006D3724: call dword ptr [ecx + 0x88] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x006D372A: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x006D372C: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x006D372F: push eax */
    ecx = MEM32(eax); /* 0x006D3730: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D3732: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x006D3735: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x006D3738: push eax */
    ecx = MEM32(eax); /* 0x006D3739: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D373B: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x006D373E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D3740: pop edi */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D3741: sete al */
    esi = POP32_VAL(esp); /* 0x006D3744: pop esi */
    esp = ebp; /* 0x006D3745: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D3747: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D3748: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D3750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D3750u);

L_006D3750:
    PUSH32(esp, ebp); /* 0x006D3750: push ebp */
    ebp = esp; /* 0x006D3751: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x006D3753: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D3756: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D375B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D375D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x006D3760: push ebx */
    ebx = ecx; /* 0x006D3761: mov ebx, ecx */
    edx = MEM32(ebx + 0xF90); /* 0x006D3763: mov edx, dword ptr [ebx + 0xf90] */
    PUSH32(esp, esi); /* 0x006D3769: push esi */
    esi = ebx + 0xF90; /* 0x006D376A: lea esi, [ebx + 0xf90] */
    PUSH32(esp, edi); /* 0x006D3770: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006D3771: mov edi, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x006D3774: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D3784; /* 0x006D3776: je 0x6d3784 */
L_006D3778:
    eax = MEM32(edx); /* 0x006D3778: mov eax, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x006D377A: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D377B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0; /* 0x006D377E: mov dword ptr [esi], 0 */
L_006D3784:
    eax = MEM32(ebx + 0x10C); /* 0x006D3784: mov eax, dword ptr [ebx + 0x10c] */
    PUSH32(esp, esi); /* 0x006D378A: push esi */
    PUSH32(esp, 0); /* 0x006D378B: push 0 */
    PUSH32(esp, 0); /* 0x006D378D: push 0 */
    ecx = MEM32(eax); /* 0x006D378F: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x006D3791: push 0 */
    PUSH32(esp, eax); /* 0x006D3793: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x006D3794: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D3797: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D37CB; /* 0x006D3799: js 0x6d37cb */
L_006D379B:
    eax = MEM32(esi); /* 0x006D379B: mov eax, dword ptr [esi] */
    edx = ebp + (-0x24); /* 0x006D379D: lea edx, [ebp - 0x24] */
    PUSH32(esp, edx); /* 0x006D37A0: push edx */
    PUSH32(esp, eax); /* 0x006D37A1: push eax */
    ecx = MEM32(eax); /* 0x006D37A2: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x006D37A4: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x006D37A7: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0xC)); /* 0x006D37AA: mov edx, dword ptr [ebp - 0xc] */
    MEM32(edi + 0x4) = eax; /* 0x006D37AD: mov dword ptr [edi + 4], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x006D37B0: mov eax, dword ptr [ebp - 0x24] */
    MEM32(edi) = edx; /* 0x006D37B3: mov dword ptr [edi], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x15u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x15u; /* 0x006D37B5: sub eax, 0x15 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_006D37E0; /* 0x006D37B8: je 0x6d37e0 */
L_006D37BA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x006D37BA: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_006D37E0; /* 0x006D37BB: je 0x6d37e0 */
L_006D37BD:
    eax = MEM32(esi); /* 0x006D37BD: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x006D37BF: push eax */
    ecx = MEM32(eax); /* 0x006D37C0: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D37C2: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0; /* 0x006D37C5: mov dword ptr [esi], 0 */
L_006D37CB:
    edi = POP32_VAL(esp); /* 0x006D37CB: pop edi */
    esi = POP32_VAL(esp); /* 0x006D37CC: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D37CD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D37CF: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006D37D0: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D37D3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D37D5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D37DA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D37DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D37DD: ret 4 */
L_006D37E0:
    PUSH32(esp, 0); /* 0x006D37E0: push 0 */
    MEM32(edi + 0x8) = 0x20u; /* 0x006D37E2: mov dword ptr [edi + 8], 0x20 */
    ecx = MEM32(ebx + 0x10C); /* 0x006D37E9: mov ecx, dword ptr [ebx + 0x10c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xF94u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xF94u; /* 0x006D37EF: add ebx, 0xf94 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x006D37F5: push ebx */
    PUSH32(esp, 3); /* 0x006D37F6: push 3 */
    PUSH32(esp, 0x15u); /* 0x006D37F8: push 0x15 */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x006D37FA: push dword ptr [ebp - 8] */
    eax = MEM32(ecx); /* 0x006D37FD: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x006D37FF: push edx */
    PUSH32(esp, ecx); /* 0x006D3800: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x90)); /* 0x006D3801: call dword ptr [eax + 0x90] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D3807: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D3844; /* 0x006D3809: js 0x6d3844 */
L_006D380B:
    PUSH32(esp, 0); /* 0x006D380B: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D380D: push -1 */
    PUSH32(esp, 0); /* 0x006D380F: push 0 */
    PUSH32(esp, 0); /* 0x006D3811: push 0 */
    PUSH32(esp, MEM32(esi)); /* 0x006D3813: push dword ptr [esi] */
    PUSH32(esp, 0); /* 0x006D3815: push 0 */
    PUSH32(esp, 0); /* 0x006D3817: push 0 */
    PUSH32(esp, MEM32(ebx)); /* 0x006D3819: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x7CC940)); /* 0x006D381B: call dword ptr [0x7cc940] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D3821: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx); /* 0x006D3823: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax); /* 0x006D3825: mov ecx, dword ptr [eax] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D3840; /* 0x006D3827: js 0x6d3840 */
L_006D3829:
    PUSH32(esp, 0x8810u); /* 0x006D3829: push 0x8810 */
    PUSH32(esp, 0); /* 0x006D382E: push 0 */
    edx = ebp + (-0x2C); /* 0x006D3830: lea edx, [ebp - 0x2c] */
    PUSH32(esp, edx); /* 0x006D3833: push edx */
    PUSH32(esp, eax); /* 0x006D3834: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x006D3835: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D3838: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D3861; /* 0x006D383A: jns 0x6d3861 */
L_006D383C:
    eax = MEM32(ebx); /* 0x006D383C: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax); /* 0x006D383E: mov ecx, dword ptr [eax] */
L_006D3840:
    PUSH32(esp, eax); /* 0x006D3840: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D3841: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_006D3844:
    eax = MEM32(esi); /* 0x006D3844: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x006D3846: push eax */
    ecx = MEM32(eax); /* 0x006D3847: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D3849: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D384C: pop edi */
    esi = POP32_VAL(esp); /* 0x006D384D: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D384E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D3850: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x006D3851: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D3854: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D3856: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D385B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D385D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D385E: ret 4 */
L_006D3861:
    eax = MEM32(ebp + (-0x2C)); /* 0x006D3861: mov eax, dword ptr [ebp - 0x2c] */
    ecx = MEM32(ebp + (-0x4)); /* 0x006D3864: mov ecx, dword ptr [ebp - 4] */
    MEM32(edi + 0x14) = eax; /* 0x006D3867: mov dword ptr [edi + 0x14], eax */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D386A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x28)); /* 0x006D386C: mov eax, dword ptr [ebp - 0x28] */
    edi = POP32_VAL(esp); /* 0x006D386F: pop edi */
    esi = POP32_VAL(esp); /* 0x006D3870: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D3871: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006D3872: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D3877: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D3879: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D387A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D3880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D3880u);

L_006D3880:
    PUSH32(esp, esi); /* 0x006D3880: push esi */
    esi = ecx; /* 0x006D3881: mov esi, ecx */
    ecx = MEM32(esi + 0xF94); /* 0x006D3883: mov ecx, dword ptr [esi + 0xf94] */
    /* test ecx, ecx */ /* 0x006D3889: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D38A9; /* 0x006D388B: je 0x6d38a9 */
L_006D388D:
    eax = MEM32(ecx); /* 0x006D388D: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D388F: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x006D3890: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xF94); /* 0x006D3893: mov eax, dword ptr [esi + 0xf94] */
    PUSH32(esp, eax); /* 0x006D3899: push eax */
    ecx = MEM32(eax); /* 0x006D389A: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x006D389C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xF94) = 0; /* 0x006D389F: mov dword ptr [esi + 0xf94], 0 */
L_006D38A9:
    ecx = MEM32(esi + 0xF90); /* 0x006D38A9: mov ecx, dword ptr [esi + 0xf90] */
    /* test ecx, ecx */ /* 0x006D38AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D38C3; /* 0x006D38B1: je 0x6d38c3 */
L_006D38B3:
    eax = MEM32(ecx); /* 0x006D38B3: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D38B5: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D38B6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xF90) = 0; /* 0x006D38B9: mov dword ptr [esi + 0xf90], 0 */
L_006D38C3:
    esi = POP32_VAL(esp); /* 0x006D38C3: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D38C4: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D38D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D38D0u);

L_006D38D0:
    PUSH32(esp, ebp); /* 0x006D38D0: push ebp */
    ebp = esp; /* 0x006D38D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x006D38D3: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D38D6: push -1 */
    PUSH32(esp, 0x007C6993u); /* 0x006D38D8: push 0x7c6993 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D38DD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D38E3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xF0u; /* 0x006D38E4: sub esp, 0xf0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D38EA: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D38EF: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xE8) = eax; /* 0x006D38F1: mov dword ptr [esp + 0xe8], eax */
    PUSH32(esp, esi); /* 0x006D38F8: push esi */
    eax = MEM32(0x855000); /* 0x006D38F9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D38FE: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D3900: push eax */
    eax = esp + 0xF8; /* 0x006D3901: lea eax, [esp + 0xf8] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D3908: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x006D390E: mov esi, ecx */
    /* cmp MEM8(esi + 0xA43), 0 */ /* 0x006D3910: cmp byte ptr [esi + 0xa43], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xA43)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D3A8D; /* 0x006D3917: je 0x6d3a8d */
L_006D391D:
    /* cmp MEM32(0x87CBBC), 0 */ /* 0x006D391D: cmp dword ptr [0x87cbbc], 0 */
    _flag_a = (uint32_t)(MEM32(0x87CBBC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D3A8D; /* 0x006D3924: jne 0x6d3a8d */
L_006D392A:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006D392A: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = esp + 0x1C; /* 0x006D392D: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_006D4620); /* 0x006D3931: call 0x6d4620 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x100) = 0; /* 0x006D3936: mov dword ptr [esp + 0x100], 0 */
    ecx = esp + 0x24; /* 0x006D3941: lea ecx, [esp + 0x24] */
    PUSH32(esp, MEM32(esi + 0xA34)); /* 0x006D3945: push dword ptr [esi + 0xa34] */
    RECOMP_ICALL(MEM32(0x7CC384)); /* 0x006D394B: call dword ptr [0x7cc384] */
    RECOMP_FLAGS_IN();
    edx = 0x008015ECu; /* 0x006D3951: mov edx, 0x8015ec */
    ecx = eax; /* 0x006D3956: mov ecx, eax */
    RECOMP_CALL(sub_006D5390); /* 0x006D3958: call 0x6d5390 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xA3C)); /* 0x006D395D: push dword ptr [esi + 0xa3c] */
    ecx = esp + 0x28; /* 0x006D3963: lea ecx, [esp + 0x28] */
    RECOMP_ICALL(MEM32(0x7CC384)); /* 0x006D3967: call dword ptr [0x7cc384] */
    RECOMP_FLAGS_IN();
    edx = 0x008015D8u; /* 0x006D396D: mov edx, 0x8015d8 */
    ecx = eax; /* 0x006D3972: mov ecx, eax */
    RECOMP_CALL(sub_006D5390); /* 0x006D3974: call 0x6d5390 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xA2C)); /* 0x006D3979: push dword ptr [esi + 0xa2c] */
    ecx = esp + 0x28; /* 0x006D397F: lea ecx, [esp + 0x28] */
    RECOMP_ICALL(MEM32(0x7CC384)); /* 0x006D3983: call dword ptr [0x7cc384] */
    RECOMP_FLAGS_IN();
    edx = 0x008015CCu; /* 0x006D3989: mov edx, 0x8015cc */
    ecx = eax; /* 0x006D398E: mov ecx, eax */
    RECOMP_CALL(sub_006D5390); /* 0x006D3990: call 0x6d5390 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(esi + 0x294); _xmm[0].u64[1] = 0; /* 0x006D3995: movss xmm0, dword ptr [esi + 0x294] */
    PUSH32(esp, ecx); /* 0x006D399D: push ecx */
    ecx = esp + 0x28; /* 0x006D399E: lea ecx, [esp + 0x28] */
    MEM32(esp) = _xmm[0].u32[0]; /* 0x006D39A2: movss dword ptr [esp], xmm0 */
    RECOMP_ICALL(MEM32(0x7CC380)); /* 0x006D39A7: call dword ptr [0x7cc380] */
    RECOMP_FLAGS_IN();
    edx = 0x008015C4u; /* 0x006D39AD: mov edx, 0x8015c4 */
    ecx = eax; /* 0x006D39B2: mov ecx, eax */
    RECOMP_CALL(sub_006D5390); /* 0x006D39B4: call 0x6d5390 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x10C); /* 0x006D39B9: mov eax, dword ptr [esi + 0x10c] */
    PUSH32(esp, eax); /* 0x006D39BF: push eax */
    ecx = MEM32(eax); /* 0x006D39C0: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x006D39C2: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    if (20u) _cf = (((eax) >> 19) & 1u); /* 0x006D39C5: shr eax, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((eax >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 20u; /* 0x006D39C5: shr eax, 0x14 */
    ecx = esp + 0x24; /* 0x006D39C8: lea ecx, [esp + 0x24] */
    PUSH32(esp, eax); /* 0x006D39CC: push eax */
    RECOMP_ICALL(MEM32(0x7CC384)); /* 0x006D39CD: call dword ptr [0x7cc384] */
    RECOMP_FLAGS_IN();
    edx = 0x00801634u; /* 0x006D39D3: mov edx, 0x801634 */
    ecx = eax; /* 0x006D39D8: mov ecx, eax */
    RECOMP_CALL(sub_006D5390); /* 0x006D39DA: call 0x6d5390 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x10C); /* 0x006D39DF: mov eax, dword ptr [esi + 0x10c] */
    PUSH32(esp, eax); /* 0x006D39E5: push eax */
    ecx = MEM32(eax); /* 0x006D39E6: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xA4)); /* 0x006D39E8: call dword ptr [ecx + 0xa4] */
    RECOMP_FLAGS_IN();
    eax = esp + 0xC4; /* 0x006D39EE: lea eax, [esp + 0xc4] */
    PUSH32(esp, eax); /* 0x006D39F5: push eax */
    ecx = esp + 0x18; /* 0x006D39F6: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_006D46F0); /* 0x006D39FA: call 0x6d46f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x100) = (uint8_t)(1); /* 0x006D39FF: mov byte ptr [esp + 0x100], 1 */
    /* cmp MEM32(eax + 0x14), 8 */ /* 0x006D3A07: cmp dword ptr [eax + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D3A0F; /* 0x006D3A0B: jb 0x6d3a0f */
L_006D3A0D:
    eax = MEM32(eax); /* 0x006D3A0D: mov eax, dword ptr [eax] */
L_006D3A0F:
    _xmm[1].u64[0] = MEM32(0x809074); _xmm[1].u64[1] = 0; /* 0x006D3A0F: movss xmm1, dword ptr [0x809074] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x006D3A17: xorps xmm2, xmm2 */
    PUSH32(esp, ecx); /* 0x006D3A1A: push ecx */
    PUSH32(esp, eax); /* 0x006D3A1B: push eax */
    PUSH32(esp, ecx); /* 0x006D3A1C: push ecx */
    ecx = MEM32(esi + 0xA14); /* 0x006D3A1D: mov ecx, dword ptr [esi + 0xa14] */
    RECOMP_CALL(sub_006DBA40); /* 0x006D3A23: call 0x6dba40 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x100) = (uint8_t)(0); /* 0x006D3A28: mov byte ptr [esp + 0x100], 0 */
    /* cmp MEM32(esp + 0xD8), 8 */ /* 0x006D3A30: cmp dword ptr [esp + 0xd8], 8 */
    _flag_a = (uint32_t)(MEM32(esp + 0xD8)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D3A4A; /* 0x006D3A38: jb 0x6d3a4a */
L_006D3A3A:
    PUSH32(esp, MEM32(esp + 0xC4)); /* 0x006D3A3A: push dword ptr [esp + 0xc4] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D3A41: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D3A47: add esp, 4 */
    _flag_k = FK_ADD;
L_006D3A4A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D3A4A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xD8) = 7; /* 0x006D3A4C: mov dword ptr [esp + 0xd8], 7 */
    MEM16(esp + 0xC4) = (uint16_t)(LO16(eax)); /* 0x006D3A57: mov word ptr [esp + 0xc4], ax */
    eax = MEM32(esi + 0x10C); /* 0x006D3A5F: mov eax, dword ptr [esi + 0x10c] */
    PUSH32(esp, eax); /* 0x006D3A65: push eax */
    MEM32(esp + 0xD8) = 0; /* 0x006D3A66: mov dword ptr [esp + 0xd8], 0 */
    ecx = MEM32(eax); /* 0x006D3A71: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xA8)); /* 0x006D3A73: call dword ptr [ecx + 0xa8] */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x14; /* 0x006D3A79: lea ecx, [esp + 0x14] */
    MEM32(esp + 0x100) = 0xFFFFFFFFu; /* 0x006D3A7D: mov dword ptr [esp + 0x100], 0xffffffff */
    RECOMP_CALL(sub_006D3B20); /* 0x006D3A88: call 0x6d3b20 */
    RECOMP_FLAGS_IN();
L_006D3A8D:
    eax = MEM32(esi + 0x10C); /* 0x006D3A8D: mov eax, dword ptr [esi + 0x10c] */
    PUSH32(esp, 0); /* 0x006D3A93: push 0 */
    PUSH32(esp, 0); /* 0x006D3A95: push 0 */
    PUSH32(esp, 0); /* 0x006D3A97: push 0 */
    ecx = MEM32(eax); /* 0x006D3A99: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x006D3A9B: push 0 */
    PUSH32(esp, eax); /* 0x006D3A9D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x006D3A9E: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D3AA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xD0) = 0; /* 0x006D3AA3: mov dword ptr [esp + 0xd0], 0 */
    ecx = esi + 0x4; /* 0x006D3AAE: lea ecx, [esi + 4] */
    MEM32(esp + 0xC8) = 0; /* 0x006D3AB1: mov dword ptr [esp + 0xc8], 0 */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D3ABC: setne al */
    MEM32(esp + 0xCC) = 0; /* 0x006D3ABF: mov dword ptr [esp + 0xcc], 0 */
    MEM8(esi + 0xBA) = (uint8_t)(LO8(eax)); /* 0x006D3ACA: mov byte ptr [esi + 0xba], al */
    eax = MEM32(ecx); /* 0x006D3AD0: mov eax, dword ptr [ecx] */
    MEM32(esp + 0xC4) = 0; /* 0x006D3AD2: mov dword ptr [esp + 0xc4], 0 */
    _xmm[0] = xmm_ld(esp + 0xC4); /* 0x006D3ADD: movdqu xmm0, xmmword ptr [esp + 0xc4] */
    xmm_st(esi + 0xA2C, _xmm[0]); /* 0x006D3AE6: movdqu xmmword ptr [esi + 0xa2c], xmm0 */
    MEM32(esi + 0xA3C) = 0; /* 0x006D3AEE: mov dword ptr [esi + 0xa3c], 0 */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D3AF8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0xF8); /* 0x006D3AFB: mov ecx, dword ptr [esp + 0xf8] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D3B02: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D3B09: pop ecx */
    esi = POP32_VAL(esp); /* 0x006D3B0A: pop esi */
    ecx = MEM32(esp + 0xE8); /* 0x006D3B0B: mov ecx, dword ptr [esp + 0xe8] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D3B12: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D3B14: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D3B19: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D3B1B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D3B1C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D3B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D3B20u);

L_006D3B20:
    eax = MEM32(ecx); /* 0x006D3B20: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x006D3B22: push esi */
    PUSH32(esp, edi); /* 0x006D3B23: push edi */
    edi = ecx + 0x68; /* 0x006D3B24: lea edi, [ecx + 0x68] */
    eax = MEM32(eax + 0x4); /* 0x006D3B27: mov eax, dword ptr [eax + 4] */
    MEM32(eax + edi + (-0x68)) = 0x00801920u; /* 0x006D3B2A: mov dword ptr [eax + edi - 0x68], 0x801920 */
    eax = MEM32(edi + (-0x68)); /* 0x006D3B32: mov eax, dword ptr [edi - 0x68] */
    ecx = MEM32(eax + 0x4); /* 0x006D3B35: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x68); /* 0x006D3B38: lea eax, [ecx - 0x68] */
    MEM32(ecx + edi + (-0x6C)) = eax; /* 0x006D3B3B: mov dword ptr [ecx + edi - 0x6c], eax */
    ecx = edi + (-0x50); /* 0x006D3B3F: lea ecx, [edi - 0x50] */
    MEM32(edi + (-0x50)) = 0x008018E0u; /* 0x006D3B42: mov dword ptr [edi - 0x50], 0x8018e0 */
    RECOMP_CALL(sub_0044E5B0); /* 0x006D3B49: call 0x44e5b0 */
    RECOMP_FLAGS_IN();
    ecx = edi + (-0x50); /* 0x006D3B4E: lea ecx, [edi - 0x50] */
    RECOMP_ICALL(MEM32(0x7CC3B8)); /* 0x006D3B51: call dword ptr [0x7cc3b8] */
    RECOMP_FLAGS_IN();
    ecx = edi + (-0x48); /* 0x006D3B57: lea ecx, [edi - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC37C)); /* 0x006D3B5A: call dword ptr [0x7cc37c] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x006D3B60: mov ecx, edi */
    edi = POP32_VAL(esp); /* 0x006D3B62: pop edi */
    esi = POP32_VAL(esp); /* 0x006D3B63: pop esi */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC38C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_006D3B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D3B70u);

L_006D3B70:
    /* cmp MEM8(ecx + 0xA20), 0 */ /* 0x006D3B70: cmp byte ptr [ecx + 0xa20], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xA20)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D3BC1; /* 0x006D3B77: je 0x6d3bc1 */
L_006D3B79:
    eax = MEM32(ecx + 0x10C); /* 0x006D3B79: mov eax, dword ptr [ecx + 0x10c] */
    MEM8(ecx + 0xA20) = (uint8_t)(0); /* 0x006D3B7F: mov byte ptr [ecx + 0xa20], 0 */
    PUSH32(esp, eax); /* 0x006D3B86: push eax */
    ecx = MEM32(eax); /* 0x006D3B87: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xA8)); /* 0x006D3B89: call dword ptr [ecx + 0xa8] */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x87CBBC); /* 0x006D3B8F: mov edx, dword ptr [0x87cbbc] */
    /* test edx, edx */ /* 0x006D3B95: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D3BB6; /* 0x006D3B97: je 0x6d3bb6 */
L_006D3B99:
    /* cmp MEM32(edx + 0x14), 0 */ /* 0x006D3B99: cmp dword ptr [edx + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D3BB6; /* 0x006D3B9D: je 0x6d3bb6 */
L_006D3B9F:
    eax = MEM32(edx + 0x10); /* 0x006D3B9F: mov eax, dword ptr [edx + 0x10] */
    PUSH32(esp, MEM32(edx + 0x18)); /* 0x006D3BA2: push dword ptr [edx + 0x18] */
    PUSH32(esp, 0); /* 0x006D3BA5: push 0 */
    eax = MEM32(eax + 0x10C); /* 0x006D3BA7: mov eax, dword ptr [eax + 0x10c] */
    PUSH32(esp, eax); /* 0x006D3BAD: push eax */
    ecx = MEM32(eax); /* 0x006D3BAE: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x94)); /* 0x006D3BB0: call dword ptr [ecx + 0x94] */
    RECOMP_FLAGS_IN();
L_006D3BB6:
    MEM32(0x87CBBC) = 0; /* 0x006D3BB6: mov dword ptr [0x87cbbc], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D3BC0: ret  */
L_006D3BC1:
    PUSH32(esp, 0x00801600u); /* 0x006D3BC1: push 0x801600 */
    RECOMP_CALL(sub_006D1E10); /* 0x006D3BC6: call 0x6d1e10 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006D3BCBu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D3BD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D3BD0u);

L_006D3BD0:
    PUSH32(esp, MEM32(ecx + 0x108)); /* 0x006D3BD0: push dword ptr [ecx + 0x108] */
    ecx = MEM32(ecx + 0xA10); /* 0x006D3BD6: mov ecx, dword ptr [ecx + 0xa10] */
    RECOMP_CALL(sub_006DB230); /* 0x006D3BDC: call 0x6db230 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D3BE1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D3BE3: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D3BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D3BF0u);

L_006D3BF0:
    PUSH32(esp, ebp); /* 0x006D3BF0: push ebp */
    ebp = esp; /* 0x006D3BF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x006D3BF3: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x108u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x108u; /* 0x006D3BF6: sub esp, 0x108 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D3BFC: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006D3C01: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x104) = eax; /* 0x006D3C03: mov dword ptr [esp + 0x104], eax */
    PUSH32(esp, esi); /* 0x006D3C0A: push esi */
    esi = ecx; /* 0x006D3C0B: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006D3C0D: push edi */
    /* cmp MEM8(esi + 0xF54), 0 */ /* 0x006D3C0E: cmp byte ptr [esi + 0xf54], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xF54)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D4235; /* 0x006D3C15: je 0x6d4235 */
L_006D3C1B:
    edi = MEM32(0x927C48); /* 0x006D3C1B: mov edi, dword ptr [0x927c48] */
    /* test edi, edi */ /* 0x006D3C21: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D3C43; /* 0x006D3C23: je 0x6d3c43 */
L_006D3C25:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFCu; /* 0x006D3C25: add edi, -4 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_006D3C43; /* 0x006D3C28: je 0x6d3c43 */
L_006D3C2A:
    ebx = ebx; /* 0x006D3C2A: lea ebx, [ebx] */
L_006D3C30:
    eax = MEM32(edi); /* 0x006D3C30: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x006D3C32: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x006D3C34: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    edi = MEM32(edi + 0x4); /* 0x006D3C37: mov edi, dword ptr [edi + 4] */
    /* test edi, edi */ /* 0x006D3C3A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D3C43; /* 0x006D3C3C: je 0x6d3c43 */
L_006D3C3E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFCu; /* 0x006D3C3E: add edi, -4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_006D3C30; /* 0x006D3C41: jne 0x6d3c30 */
L_006D3C43:
    ecx = MEM32(esi + 0xA10); /* 0x006D3C43: mov ecx, dword ptr [esi + 0xa10] */
    RECOMP_CALL(sub_006DB5E0); /* 0x006D3C49: call 0x6db5e0 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x74; /* 0x006D3C4E: lea eax, [esp + 0x74] */
    MEM32(esp + 0x5C) = 0; /* 0x006D3C52: mov dword ptr [esp + 0x5c], 0 */
    PUSH32(esp, eax); /* 0x006D3C5A: push eax */
    eax = esp + 0x6C; /* 0x006D3C5B: lea eax, [esp + 0x6c] */
    MEM32(esp + 0x64) = 0; /* 0x006D3C5F: mov dword ptr [esp + 0x64], 0 */
    PUSH32(esp, eax); /* 0x006D3C67: push eax */
    eax = esp + 0x64; /* 0x006D3C68: lea eax, [esp + 0x64] */
    MEM32(esp + 0x6C) = 0x40000000u; /* 0x006D3C6C: mov dword ptr [esp + 0x6c], 0x40000000 */
    PUSH32(esp, eax); /* 0x006D3C74: push eax */
    eax = esp + 0x8C; /* 0x006D3C75: lea eax, [esp + 0x8c] */
    MEM32(esp + 0x74) = 0; /* 0x006D3C7C: mov dword ptr [esp + 0x74], 0 */
    PUSH32(esp, eax); /* 0x006D3C84: push eax */
    MEM32(esp + 0x7C) = 0; /* 0x006D3C85: mov dword ptr [esp + 0x7c], 0 */
    MEM32(esp + 0x80) = 0; /* 0x006D3C8D: mov dword ptr [esp + 0x80], 0 */
    MEM32(esp + 0x84) = 0; /* 0x006D3C98: mov dword ptr [esp + 0x84], 0 */
    MEM32(esp + 0x88) = 0x3F800000u; /* 0x006D3CA3: mov dword ptr [esp + 0x88], 0x3f800000 */
    MEM32(esp + 0x8C) = 0; /* 0x006D3CAE: mov dword ptr [esp + 0x8c], 0 */
    MEM32(esp + 0x58) = 0; /* 0x006D3CB9: mov dword ptr [esp + 0x58], 0 */
    MEM32(esp + 0x54) = 0; /* 0x006D3CC1: mov dword ptr [esp + 0x54], 0 */
    MEM32(esp + 0x50) = 0; /* 0x006D3CC9: mov dword ptr [esp + 0x50], 0 */
    MEM32(esp + 0x4C) = 0; /* 0x006D3CD1: mov dword ptr [esp + 0x4c], 0 */
    MEM32(esp + 0x44) = 0; /* 0x006D3CD9: mov dword ptr [esp + 0x44], 0 */
    MEM32(esp + 0x40) = 0; /* 0x006D3CE1: mov dword ptr [esp + 0x40], 0 */
    MEM32(esp + 0x3C) = 0; /* 0x006D3CE9: mov dword ptr [esp + 0x3c], 0 */
    MEM32(esp + 0x38) = 0; /* 0x006D3CF1: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x30) = 0; /* 0x006D3CF9: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x2C) = 0; /* 0x006D3D01: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x28) = 0; /* 0x006D3D09: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x24) = 0; /* 0x006D3D11: mov dword ptr [esp + 0x24], 0 */
    MEM32(esp + 0x5C) = 0x3F800000u; /* 0x006D3D19: mov dword ptr [esp + 0x5c], 0x3f800000 */
    MEM32(esp + 0x48) = 0x3F800000u; /* 0x006D3D21: mov dword ptr [esp + 0x48], 0x3f800000 */
    MEM32(esp + 0x34) = 0x3F800000u; /* 0x006D3D29: mov dword ptr [esp + 0x34], 0x3f800000 */
    MEM32(esp + 0x20) = 0x3F800000u; /* 0x006D3D31: mov dword ptr [esp + 0x20], 0x3f800000 */
    RECOMP_ICALL(MEM32(0x7CC94C)); /* 0x006D3D39: call dword ptr [0x7cc94c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x254); /* 0x006D3D3F: mov eax, dword ptr [esi + 0x254] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x006D3D45: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006D3D48: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006D3D4C: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006D3D50: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006D3D50: shr eax, 0x1f */
    MEM32(esp + 0xC) = 0x43FA0000u; /* 0x006D3D53: mov dword ptr [esp + 0xc], 0x43fa0000 */
    MEM32(esp + 0x8) = 0x3F800000u; /* 0x006D3D5B: mov dword ptr [esp + 8], 0x3f800000 */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006D3D63: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = MEM32(esi + 0x258); /* 0x006D3D6C: mov eax, dword ptr [esi + 0x258] */
    { xmm_t _s = _xmm[0]; _xmm[1].f32[0] = (float)_s.f64[0]; _xmm[1].f32[1] = (float)_s.f64[1]; _xmm[1].u64[1] = 0; } /* 0x006D3D72: cvtpd2ps xmm1, xmm0 */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006D3D76: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x006D3D7A: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006D3D7E: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006D3D7E: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x006D3D81: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    eax = esp + 0xD0; /* 0x006D3D8A: lea eax, [esp + 0xd0] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x006D3D91: cvtpd2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x006D3D95: divss xmm1, xmm0 */
    MEM32(esp + 0x4) = _xmm[1].u32[0]; /* 0x006D3D99: movss dword ptr [esp + 4], xmm1 */
    MEM32(esp) = 0x3F490FDBu; /* 0x006D3D9F: mov dword ptr [esp], 0x3f490fdb */
    PUSH32(esp, eax); /* 0x006D3DA6: push eax */
    RECOMP_ICALL(MEM32(0x7CC944)); /* 0x006D3DA7: call dword ptr [0x7cc944] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D3DAD: mov eax, dword ptr [esi + 0x108] */
    edx = esp + 0x10; /* 0x006D3DB3: lea edx, [esp + 0x10] */
    PUSH32(esp, edx); /* 0x006D3DB7: push edx */
    MEM32(esp + 0x4C) = 0; /* 0x006D3DB8: mov dword ptr [esp + 0x4c], 0 */
    MEM32(esp + 0x48) = 0; /* 0x006D3DC0: mov dword ptr [esp + 0x48], 0 */
    MEM32(esp + 0x44) = 0; /* 0x006D3DC8: mov dword ptr [esp + 0x44], 0 */
    MEM32(esp + 0x40) = 0; /* 0x006D3DD0: mov dword ptr [esp + 0x40], 0 */
    MEM32(esp + 0x38) = 0; /* 0x006D3DD8: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x34) = 0; /* 0x006D3DE0: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x30) = 0; /* 0x006D3DE8: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x2C) = 0; /* 0x006D3DF0: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x24) = 0; /* 0x006D3DF8: mov dword ptr [esp + 0x24], 0 */
    MEM32(esp + 0x20) = 0; /* 0x006D3E00: mov dword ptr [esp + 0x20], 0 */
    MEM32(esp + 0x1C) = 0; /* 0x006D3E08: mov dword ptr [esp + 0x1c], 0 */
    MEM32(esp + 0x18) = 0; /* 0x006D3E10: mov dword ptr [esp + 0x18], 0 */
    MEM32(esp + 0x50) = 0x3F800000u; /* 0x006D3E18: mov dword ptr [esp + 0x50], 0x3f800000 */
    MEM32(esp + 0x3C) = 0x3F800000u; /* 0x006D3E20: mov dword ptr [esp + 0x3c], 0x3f800000 */
    MEM32(esp + 0x28) = 0x3F800000u; /* 0x006D3E28: mov dword ptr [esp + 0x28], 0x3f800000 */
    MEM32(esp + 0x14) = 0x3F800000u; /* 0x006D3E30: mov dword ptr [esp + 0x14], 0x3f800000 */
    ecx = MEM32(eax); /* 0x006D3E38: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x100u); /* 0x006D3E3A: push 0x100 */
    PUSH32(esp, eax); /* 0x006D3E3F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xB0)); /* 0x006D3E40: call dword ptr [ecx + 0xb0] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D3E46: mov eax, dword ptr [esi + 0x108] */
    ecx = MEM32(eax); /* 0x006D3E4C: mov ecx, dword ptr [eax] */
    edx = esp + 0x10; /* 0x006D3E4E: lea edx, [esp + 0x10] */
    PUSH32(esp, edx); /* 0x006D3E52: push edx */
    PUSH32(esp, 2); /* 0x006D3E53: push 2 */
    PUSH32(esp, eax); /* 0x006D3E55: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xB0)); /* 0x006D3E56: call dword ptr [ecx + 0xb0] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D3E5C: mov eax, dword ptr [esi + 0x108] */
    edx = esp + 0x10; /* 0x006D3E62: lea edx, [esp + 0x10] */
    PUSH32(esp, edx); /* 0x006D3E66: push edx */
    PUSH32(esp, 3); /* 0x006D3E67: push 3 */
    PUSH32(esp, eax); /* 0x006D3E69: push eax */
    ecx = MEM32(eax); /* 0x006D3E6A: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xB0)); /* 0x006D3E6C: call dword ptr [ecx + 0xb0] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D3E72: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D3E78: push 0 */
    PUSH32(esp, 0x92u); /* 0x006D3E7A: push 0x92 */
    PUSH32(esp, eax); /* 0x006D3E7F: push eax */
    ecx = MEM32(eax); /* 0x006D3E80: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D3E82: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D3E88: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D3E8E: push 0 */
    PUSH32(esp, 0x8Bu); /* 0x006D3E90: push 0x8b */
    PUSH32(esp, eax); /* 0x006D3E95: push eax */
    ecx = MEM32(eax); /* 0x006D3E96: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D3E98: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D3E9E: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 2); /* 0x006D3EA4: push 2 */
    PUSH32(esp, 7); /* 0x006D3EA6: push 7 */
    PUSH32(esp, 0); /* 0x006D3EA8: push 0 */
    ecx = MEM32(eax); /* 0x006D3EAA: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D3EAC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D3EAD: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0xF50), 0 */ /* 0x006D3EB3: cmp dword ptr [esi + 0xf50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xF50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x108); /* 0x006D3EBA: mov eax, dword ptr [esi + 0x108] */
    ecx = MEM32(eax); /* 0x006D3EC0: mov ecx, dword ptr [eax] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D3ED7; /* 0x006D3EC2: jne 0x6d3ed7 */
L_006D3EC4:
    PUSH32(esp, 2); /* 0x006D3EC4: push 2 */
    PUSH32(esp, 6); /* 0x006D3EC6: push 6 */
    PUSH32(esp, 0); /* 0x006D3EC8: push 0 */
    PUSH32(esp, eax); /* 0x006D3ECA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D3ECB: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x006D3ED1: push 2 */
    PUSH32(esp, 5); /* 0x006D3ED3: push 5 */
    goto L_006D3F01; /* 0x006D3ED5: jmp 0x6d3f01 */
L_006D3ED7:
    PUSH32(esp, 3); /* 0x006D3ED7: push 3 */
    PUSH32(esp, 6); /* 0x006D3ED9: push 6 */
    PUSH32(esp, 0); /* 0x006D3EDB: push 0 */
    PUSH32(esp, eax); /* 0x006D3EDD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D3EDE: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D3EE4: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 2); /* 0x006D3EEA: push 2 */
    PUSH32(esp, 5); /* 0x006D3EEC: push 5 */
    PUSH32(esp, 0); /* 0x006D3EEE: push 0 */
    ecx = MEM32(eax); /* 0x006D3EF0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D3EF2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D3EF3: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xF50)); /* 0x006D3EF9: push dword ptr [esi + 0xf50] */
    PUSH32(esp, 0xAu); /* 0x006D3EFF: push 0xa */
L_006D3F01:
    eax = MEM32(esi + 0x108); /* 0x006D3F01: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D3F07: push 0 */
    PUSH32(esp, eax); /* 0x006D3F09: push eax */
    ecx = MEM32(eax); /* 0x006D3F0A: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D3F0C: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D3F12: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D3F18: push 0 */
    PUSH32(esp, 0x89u); /* 0x006D3F1A: push 0x89 */
    PUSH32(esp, eax); /* 0x006D3F1F: push eax */
    ecx = MEM32(eax); /* 0x006D3F20: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D3F22: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D3F28: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 5); /* 0x006D3F2E: push 5 */
    PUSH32(esp, 0x13u); /* 0x006D3F30: push 0x13 */
    PUSH32(esp, eax); /* 0x006D3F32: push eax */
    ecx = MEM32(eax); /* 0x006D3F33: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D3F35: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D3F3B: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 6); /* 0x006D3F41: push 6 */
    PUSH32(esp, 0x14u); /* 0x006D3F43: push 0x14 */
    PUSH32(esp, eax); /* 0x006D3F45: push eax */
    ecx = MEM32(eax); /* 0x006D3F46: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D3F48: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D3F4E: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D3F54: push 0 */
    PUSH32(esp, 0x89u); /* 0x006D3F56: push 0x89 */
    PUSH32(esp, eax); /* 0x006D3F5B: push eax */
    ecx = MEM32(eax); /* 0x006D3F5C: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D3F5E: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D3F64: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D3F6A: push 0 */
    PUSH32(esp, 0x1Du); /* 0x006D3F6C: push 0x1d */
    PUSH32(esp, eax); /* 0x006D3F6E: push eax */
    ecx = MEM32(eax); /* 0x006D3F6F: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D3F71: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D3F77: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = esp; /* 0x006D3F79: lea esp, [esp] */
L_006D3F80:
    eax = MEM32(esi + 0x108); /* 0x006D3F80: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D3F86: push 0 */
    PUSH32(esp, edi); /* 0x006D3F88: push edi */
    PUSH32(esp, eax); /* 0x006D3F89: push eax */
    ecx = MEM32(eax); /* 0x006D3F8A: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x104)); /* 0x006D3F8C: call dword ptr [ecx + 0x104] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D3F92: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 2); /* 0x006D3F98: push 2 */
    PUSH32(esp, 7); /* 0x006D3F9A: push 7 */
    PUSH32(esp, edi); /* 0x006D3F9C: push edi */
    ecx = MEM32(eax); /* 0x006D3F9D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D3F9F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D3FA0: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0xF50), 0 */ /* 0x006D3FA6: cmp dword ptr [esi + 0xf50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xF50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x108); /* 0x006D3FAD: mov eax, dword ptr [esi + 0x108] */
    ecx = MEM32(eax); /* 0x006D3FB3: mov ecx, dword ptr [eax] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D3FC9; /* 0x006D3FB5: jne 0x6d3fc9 */
L_006D3FB7:
    PUSH32(esp, 2); /* 0x006D3FB7: push 2 */
    PUSH32(esp, 6); /* 0x006D3FB9: push 6 */
    PUSH32(esp, edi); /* 0x006D3FBB: push edi */
    PUSH32(esp, eax); /* 0x006D3FBC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D3FBD: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x006D3FC3: push 2 */
    PUSH32(esp, 5); /* 0x006D3FC5: push 5 */
    goto L_006D3FF1; /* 0x006D3FC7: jmp 0x6d3ff1 */
L_006D3FC9:
    PUSH32(esp, 3); /* 0x006D3FC9: push 3 */
    PUSH32(esp, 6); /* 0x006D3FCB: push 6 */
    PUSH32(esp, edi); /* 0x006D3FCD: push edi */
    PUSH32(esp, eax); /* 0x006D3FCE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D3FCF: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D3FD5: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 2); /* 0x006D3FDB: push 2 */
    PUSH32(esp, 5); /* 0x006D3FDD: push 5 */
    PUSH32(esp, edi); /* 0x006D3FDF: push edi */
    ecx = MEM32(eax); /* 0x006D3FE0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D3FE2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D3FE3: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xF50)); /* 0x006D3FE9: push dword ptr [esi + 0xf50] */
    PUSH32(esp, 0xAu); /* 0x006D3FEF: push 0xa */
L_006D3FF1:
    eax = MEM32(esi + 0x108); /* 0x006D3FF1: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, edi); /* 0x006D3FF7: push edi */
    PUSH32(esp, eax); /* 0x006D3FF8: push eax */
    ecx = MEM32(eax); /* 0x006D3FF9: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D3FFB: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D4001: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 1); /* 0x006D4007: push 1 */
    PUSH32(esp, 1); /* 0x006D4009: push 1 */
    PUSH32(esp, edi); /* 0x006D400B: push edi */
    ecx = MEM32(eax); /* 0x006D400C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D400E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D400F: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D4015: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 1); /* 0x006D401B: push 1 */
    PUSH32(esp, 2); /* 0x006D401D: push 2 */
    PUSH32(esp, edi); /* 0x006D401F: push edi */
    ecx = MEM32(eax); /* 0x006D4020: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D4022: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D4023: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D4029: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D402F: push 0 */
    PUSH32(esp, 0xBu); /* 0x006D4031: push 0xb */
    PUSH32(esp, edi); /* 0x006D4033: push edi */
    ecx = MEM32(eax); /* 0x006D4034: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D4036: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006D4037: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D403D: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 1); /* 0x006D4043: push 1 */
    PUSH32(esp, 1); /* 0x006D4045: push 1 */
    PUSH32(esp, edi); /* 0x006D4047: push edi */
    ecx = MEM32(eax); /* 0x006D4048: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D404A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006D404B: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D4051: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 1); /* 0x006D4057: push 1 */
    PUSH32(esp, 4); /* 0x006D4059: push 4 */
    PUSH32(esp, edi); /* 0x006D405B: push edi */
    ecx = MEM32(eax); /* 0x006D405C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D405E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006D405F: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D4065: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D406B: push 0 */
    PUSH32(esp, edi); /* 0x006D406D: push edi */
    PUSH32(esp, eax); /* 0x006D406E: push eax */
    ecx = MEM32(eax); /* 0x006D406F: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xD4)); /* 0x006D4071: call dword ptr [ecx + 0xd4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006D4077: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 8 */ /* 0x006D4078: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006D3F80; /* 0x006D407B: jl 0x6d3f80 */
L_006D4081:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D4081: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D4083:
    eax = MEM32(esi + 0x108); /* 0x006D4083: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 1); /* 0x006D4089: push 1 */
    PUSH32(esp, 1); /* 0x006D408B: push 1 */
    PUSH32(esp, edi); /* 0x006D408D: push edi */
    ecx = MEM32(eax); /* 0x006D408E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D4090: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D4091: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D4097: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 1); /* 0x006D409D: push 1 */
    PUSH32(esp, 2); /* 0x006D409F: push 2 */
    PUSH32(esp, edi); /* 0x006D40A1: push edi */
    ecx = MEM32(eax); /* 0x006D40A2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D40A4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D40A5: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D40AB: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 2); /* 0x006D40B1: push 2 */
    PUSH32(esp, 7); /* 0x006D40B3: push 7 */
    PUSH32(esp, edi); /* 0x006D40B5: push edi */
    ecx = MEM32(eax); /* 0x006D40B6: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D40B8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D40B9: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0xF50), 0 */ /* 0x006D40BF: cmp dword ptr [esi + 0xf50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xF50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x108); /* 0x006D40C6: mov eax, dword ptr [esi + 0x108] */
    ecx = MEM32(eax); /* 0x006D40CC: mov ecx, dword ptr [eax] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D40E2; /* 0x006D40CE: jne 0x6d40e2 */
L_006D40D0:
    PUSH32(esp, 2); /* 0x006D40D0: push 2 */
    PUSH32(esp, 6); /* 0x006D40D2: push 6 */
    PUSH32(esp, edi); /* 0x006D40D4: push edi */
    PUSH32(esp, eax); /* 0x006D40D5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D40D6: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x006D40DC: push 2 */
    PUSH32(esp, 5); /* 0x006D40DE: push 5 */
    goto L_006D410A; /* 0x006D40E0: jmp 0x6d410a */
L_006D40E2:
    PUSH32(esp, 3); /* 0x006D40E2: push 3 */
    PUSH32(esp, 6); /* 0x006D40E4: push 6 */
    PUSH32(esp, edi); /* 0x006D40E6: push edi */
    PUSH32(esp, eax); /* 0x006D40E7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D40E8: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D40EE: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 2); /* 0x006D40F4: push 2 */
    PUSH32(esp, 5); /* 0x006D40F6: push 5 */
    PUSH32(esp, edi); /* 0x006D40F8: push edi */
    ecx = MEM32(eax); /* 0x006D40F9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D40FB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D40FC: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xF50)); /* 0x006D4102: push dword ptr [esi + 0xf50] */
    PUSH32(esp, 0xAu); /* 0x006D4108: push 0xa */
L_006D410A:
    eax = MEM32(esi + 0x108); /* 0x006D410A: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, edi); /* 0x006D4110: push edi */
    PUSH32(esp, eax); /* 0x006D4111: push eax */
    ecx = MEM32(eax); /* 0x006D4112: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x114)); /* 0x006D4114: call dword ptr [ecx + 0x114] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D411A: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, edi); /* 0x006D4120: push edi */
    PUSH32(esp, 0xBu); /* 0x006D4121: push 0xb */
    PUSH32(esp, edi); /* 0x006D4123: push edi */
    ecx = MEM32(eax); /* 0x006D4124: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D4126: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006D4127: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D412D: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D4133: push 0 */
    PUSH32(esp, 6); /* 0x006D4135: push 6 */
    PUSH32(esp, edi); /* 0x006D4137: push edi */
    ecx = MEM32(eax); /* 0x006D4138: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D413A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006D413B: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006D4141: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 8 */ /* 0x006D4142: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006D4083; /* 0x006D4145: jl 0x6d4083 */
L_006D414B:
    eax = MEM32(esi + 0x108); /* 0x006D414B: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 1); /* 0x006D4151: push 1 */
    PUSH32(esp, 0x8Eu); /* 0x006D4153: push 0x8e */
    PUSH32(esp, eax); /* 0x006D4158: push eax */
    ecx = MEM32(eax); /* 0x006D4159: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D415B: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D4161: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 1); /* 0x006D4167: push 1 */
    PUSH32(esp, 0x88u); /* 0x006D4169: push 0x88 */
    PUSH32(esp, eax); /* 0x006D416E: push eax */
    ecx = MEM32(eax); /* 0x006D416F: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D4171: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D4177: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 5); /* 0x006D417D: push 5 */
    PUSH32(esp, 0x19u); /* 0x006D417F: push 0x19 */
    PUSH32(esp, eax); /* 0x006D4181: push eax */
    ecx = MEM32(eax); /* 0x006D4182: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D4184: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D418A: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 1); /* 0x006D4190: push 1 */
    PUSH32(esp, 7); /* 0x006D4192: push 7 */
    PUSH32(esp, eax); /* 0x006D4194: push eax */
    ecx = MEM32(eax); /* 0x006D4195: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D4197: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D419D: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D41A3: push 0 */
    PUSH32(esp, 3); /* 0x006D41A5: push 3 */
    PUSH32(esp, 0); /* 0x006D41A7: push 0 */
    ecx = MEM32(eax); /* 0x006D41A9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D41AB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006D41AC: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D41B2: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 2); /* 0x006D41B8: push 2 */
    PUSH32(esp, 2); /* 0x006D41BA: push 2 */
    PUSH32(esp, 0); /* 0x006D41BC: push 0 */
    ecx = MEM32(eax); /* 0x006D41BE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D41C0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006D41C1: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D41C7: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 0); /* 0x006D41CD: push 0 */
    PUSH32(esp, 6); /* 0x006D41CF: push 6 */
    PUSH32(esp, 0); /* 0x006D41D1: push 0 */
    ecx = MEM32(eax); /* 0x006D41D3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D41D5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006D41D6: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D41DC: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 2); /* 0x006D41E2: push 2 */
    PUSH32(esp, 5); /* 0x006D41E4: push 5 */
    PUSH32(esp, 0); /* 0x006D41E6: push 0 */
    ecx = MEM32(eax); /* 0x006D41E8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D41EA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006D41EB: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D41F1: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 4); /* 0x006D41F7: push 4 */
    PUSH32(esp, 1); /* 0x006D41F9: push 1 */
    PUSH32(esp, 0); /* 0x006D41FB: push 0 */
    ecx = MEM32(eax); /* 0x006D41FD: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D41FF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006D4200: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D4206: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 2); /* 0x006D420C: push 2 */
    PUSH32(esp, 4); /* 0x006D420E: push 4 */
    PUSH32(esp, 0); /* 0x006D4210: push 0 */
    ecx = MEM32(eax); /* 0x006D4212: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006D4214: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10C)); /* 0x006D4215: call dword ptr [ecx + 0x10c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x108); /* 0x006D421B: mov eax, dword ptr [esi + 0x108] */
    PUSH32(esp, 1); /* 0x006D4221: push 1 */
    PUSH32(esp, 0x1Bu); /* 0x006D4223: push 0x1b */
    PUSH32(esp, eax); /* 0x006D4225: push eax */
    ecx = MEM32(eax); /* 0x006D4226: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0xE4)); /* 0x006D4228: call dword ptr [ecx + 0xe4] */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0xF54) = (uint8_t)(0); /* 0x006D422E: mov byte ptr [esi + 0xf54], 0 */
L_006D4235:
    ecx = MEM32(esp + 0x10C); /* 0x006D4235: mov ecx, dword ptr [esp + 0x10c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D423C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D423E: pop edi */
    esi = POP32_VAL(esp); /* 0x006D423F: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x006D4240: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D4242: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D4247: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D4249: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D424A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D4250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D4250u);

L_006D4250:
    PUSH32(esp, edi); /* 0x006D4250: push edi */
    edi = ecx; /* 0x006D4251: mov edi, ecx */
    /* cmp MEM8(edi + 0xF54), 0 */ /* 0x006D4253: cmp byte ptr [edi + 0xf54], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xF54)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D42FD; /* 0x006D425A: jne 0x6d42fd */
L_006D4260:
    PUSH32(esp, esi); /* 0x006D4260: push esi */
    esi = MEM32(0x927C48); /* 0x006D4261: mov esi, dword ptr [0x927c48] */
    MEM8(edi + 0xF54) = (uint8_t)(1); /* 0x006D4267: mov byte ptr [edi + 0xf54], 1 */
    /* test esi, esi */ /* 0x006D426E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D428A; /* 0x006D4270: je 0x6d428a */
L_006D4272:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFCu; /* 0x006D4272: add esi, -4 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_006D428A; /* 0x006D4275: je 0x6d428a */
L_006D4277:
    eax = MEM32(esi); /* 0x006D4277: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x006D4279: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x006D427B: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x4); /* 0x006D427E: mov esi, dword ptr [esi + 4] */
    /* test esi, esi */ /* 0x006D4281: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D428A; /* 0x006D4283: je 0x6d428a */
L_006D4285:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFCu; /* 0x006D4285: add esi, -4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_006D4277; /* 0x006D4288: jne 0x6d4277 */
L_006D428A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D428A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = esp; /* 0x006D428C: lea esp, [esp] */
L_006D4290:
    eax = MEM32(edi + 0x108); /* 0x006D4290: mov eax, dword ptr [edi + 0x108] */
    PUSH32(esp, 0); /* 0x006D4296: push 0 */
    PUSH32(esp, esi); /* 0x006D4298: push esi */
    PUSH32(esp, eax); /* 0x006D4299: push eax */
    ecx = MEM32(eax); /* 0x006D429A: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x104)); /* 0x006D429C: call dword ptr [ecx + 0x104] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006D42A2: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 8 */ /* 0x006D42A3: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_006D4290; /* 0x006D42A6: jl 0x6d4290 */
L_006D42A8:
    esi = MEM32(edi + 0xA10); /* 0x006D42A8: mov esi, dword ptr [edi + 0xa10] */
    ecx = MEM32(esi + 0xB0); /* 0x006D42AE: mov ecx, dword ptr [esi + 0xb0] */
    /* test ecx, ecx */ /* 0x006D42B4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D42C8; /* 0x006D42B6: je 0x6d42c8 */
L_006D42B8:
    eax = MEM32(ecx); /* 0x006D42B8: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D42BA: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D42BB: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xB0) = 0; /* 0x006D42BE: mov dword ptr [esi + 0xb0], 0 */
L_006D42C8:
    ecx = MEM32(esi + 0x6C4); /* 0x006D42C8: mov ecx, dword ptr [esi + 0x6c4] */
    /* test ecx, ecx */ /* 0x006D42CE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D42E2; /* 0x006D42D0: je 0x6d42e2 */
L_006D42D2:
    eax = MEM32(ecx); /* 0x006D42D2: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D42D4: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D42D5: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x6C4) = 0; /* 0x006D42D8: mov dword ptr [esi + 0x6c4], 0 */
L_006D42E2:
    ecx = MEM32(esi + 0x6C8); /* 0x006D42E2: mov ecx, dword ptr [esi + 0x6c8] */
    /* test ecx, ecx */ /* 0x006D42E8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D42FC; /* 0x006D42EA: je 0x6d42fc */
L_006D42EC:
    eax = MEM32(ecx); /* 0x006D42EC: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D42EE: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D42EF: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x6C8) = 0; /* 0x006D42F2: mov dword ptr [esi + 0x6c8], 0 */
L_006D42FC:
    esi = POP32_VAL(esp); /* 0x006D42FC: pop esi */
L_006D42FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D42FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D42FF: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D4300: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D4310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D4310u);

L_006D4310:
    PUSH32(esp, esi); /* 0x006D4310: push esi */
    esi = MEM32(ecx + 0xA10); /* 0x006D4311: mov esi, dword ptr [ecx + 0xa10] */
    ecx = MEM32(esi + 0xAC); /* 0x006D4317: mov ecx, dword ptr [esi + 0xac] */
    /* test ecx, ecx */ /* 0x006D431D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4331; /* 0x006D431F: je 0x6d4331 */
L_006D4321:
    eax = MEM32(ecx); /* 0x006D4321: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D4323: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D4324: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xAC) = 0; /* 0x006D4327: mov dword ptr [esi + 0xac], 0 */
L_006D4331:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D4331: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xA8) = eax; /* 0x006D4333: mov dword ptr [esi + 0xa8], eax */
    esi = POP32_VAL(esp); /* 0x006D4339: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D433A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D4340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D4340u);

L_006D4340:
    PUSH32(esp, esi); /* 0x006D4340: push esi */
    esi = ecx; /* 0x006D4341: mov esi, ecx */
    ecx = MEM32(esi + 0xA10); /* 0x006D4343: mov ecx, dword ptr [esi + 0xa10] */
    /* test ecx, ecx */ /* 0x006D4349: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D435D; /* 0x006D434B: je 0x6d435d */
L_006D434D:
    PUSH32(esp, ecx); /* 0x006D434D: push ecx */
    RECOMP_CALL(sub_006D1D90); /* 0x006D434E: call 0x6d1d90 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xA10) = 0; /* 0x006D4353: mov dword ptr [esi + 0xa10], 0 */
L_006D435D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D435D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006D435F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D4360: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D4370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D4370u);

L_006D4370:
    PUSH32(esp, ebp); /* 0x006D4370: push ebp */
    ebp = esp; /* 0x006D4371: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006D4373: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x006D4374: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x006D4377: push esi */
    esi = MEM32(ebp + 0xC); /* 0x006D4378: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x006D437B: push edi */
    edi = ecx; /* 0x006D437C: mov edi, ecx */
    /* cmp esi, 0x101u */ /* 0x006D437E: cmp esi, 0x101 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x101u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D439B; /* 0x006D4384: jne 0x6d439b */
L_006D4386:
    /* cmp ebx, 0x7Au */ /* 0x006D4386: cmp ebx, 0x7a */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D439B; /* 0x006D4389: jne 0x6d439b */
L_006D438B:
    /* cmp MEM8(edi + 0xA3F), 0 */ /* 0x006D438B: cmp byte ptr [edi + 0xa3f], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xA3F)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D4392: sete al */
    MEM8(edi + 0xA3F) = (uint8_t)(LO8(eax)); /* 0x006D4395: mov byte ptr [edi + 0xa3f], al */
L_006D439B:
    eax = MEM32(edi + 0xA18); /* 0x006D439B: mov eax, dword ptr [edi + 0xa18] */
    ecx = MEM32(ebp + 0x14); /* 0x006D43A1: mov ecx, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0x8); /* 0x006D43A4: mov edx, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x006D43A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D43BA; /* 0x006D43A9: je 0x6d43ba */
L_006D43AB:
    PUSH32(esp, ecx); /* 0x006D43AB: push ecx */
    PUSH32(esp, ebx); /* 0x006D43AC: push ebx */
    PUSH32(esp, esi); /* 0x006D43AD: push esi */
    PUSH32(esp, edx); /* 0x006D43AE: push edx */
    RECOMP_ICALL(eax); /* 0x006D43AF: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x006D43B1: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006D43B4: add esp, 0x10 */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x8); /* 0x006D43B7: mov edx, dword ptr [ebp + 8] */
L_006D43BA:
    /* cmp esi, 0x10u */ /* 0x006D43BA: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D43C7; /* 0x006D43BD: jne 0x6d43c7 */
L_006D43BF:
    PUSH32(esp, 0); /* 0x006D43BF: push 0 */
    RECOMP_ICALL(MEM32(0x7CC540)); /* 0x006D43C1: call dword ptr [0x7cc540] */
    RECOMP_FLAGS_IN();
L_006D43C7:
    PUSH32(esp, ecx); /* 0x006D43C7: push ecx */
    PUSH32(esp, ebx); /* 0x006D43C8: push ebx */
    PUSH32(esp, esi); /* 0x006D43C9: push esi */
    PUSH32(esp, edx); /* 0x006D43CA: push edx */
    ecx = edi; /* 0x006D43CB: mov ecx, edi */
    RECOMP_CALL(sub_006D8600); /* 0x006D43CD: call 0x6d8600 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D43D2: pop edi */
    esi = POP32_VAL(esp); /* 0x006D43D3: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D43D4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006D43D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x006D43D6: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_006D43E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D43E0u);

L_006D43E0:
    SET_LO8(eax, MEM8(ecx + 0xB9)); /* 0x006D43E0: mov al, byte ptr [ecx + 0xb9] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D43E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D43F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D43F0u);

L_006D43F0:
    PUSH32(esp, ebp); /* 0x006D43F0: push ebp */
    ebp = esp; /* 0x006D43F1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x006D43F3: push ebx */
    PUSH32(esp, 0x10u); /* 0x006D43F4: push 0x10 */
    ebx = ecx; /* 0x006D43F6: mov ebx, ecx */
    RECOMP_ICALL(MEM32(0x7CC864)); /* 0x006D43F8: call dword ptr [0x7cc864] */
    RECOMP_FLAGS_IN();
    SET_LO8(edx, MEM8(ebp + 0x18)); /* 0x006D43FE: mov dl, byte ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x006D4401: mov eax, dword ptr [ebp + 0xc] */
    /* test LO8(edx), LO8(edx) */ /* 0x006D4404: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebx + 0x404) = eax; /* 0x006D4406: mov dword ptr [ebx + 0x404], eax */
    eax = MEM32(ebp + 0x10); /* 0x006D440C: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x408) = eax; /* 0x006D440F: mov dword ptr [ebx + 0x408], eax */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D4415: sete al */
    MEM8(ebx + 0xB8) = (uint8_t)(LO8(eax)); /* 0x006D4418: mov byte ptr [ebx + 0xb8], al */
    eax = MEM32(ebp + 0x14); /* 0x006D441E: mov eax, dword ptr [ebp + 0x14] */
    MEM8(ebx + 0x40D) = (uint8_t)(LO8(edx)); /* 0x006D4421: mov byte ptr [ebx + 0x40d], dl */
    MEM32(ebx + 0x288) = eax; /* 0x006D4427: mov dword ptr [ebx + 0x288], eax */
    /* test LO8(edx), LO8(edx) */ /* 0x006D442D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D443B; /* 0x006D442F: je 0x6d443b */
L_006D4431:
    MEM32(ebx + 0x264) = 0x90080000u; /* 0x006D4431: mov dword ptr [ebx + 0x264], 0x90080000 */
L_006D443B:
    eax = MEM32(ebp + 0x8); /* 0x006D443B: mov eax, dword ptr [ebp + 8] */
    edx = eax + 0x1; /* 0x006D443E: lea edx, [eax + 1] */
L_006D4441:
    SET_LO8(ecx, MEM8(eax)); /* 0x006D4441: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006D4443: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x006D4444: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D4441; /* 0x006D4446: jne 0x6d4441 */
L_006D4448:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006D4448: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D444A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x006D444C: push esi */
    PUSH32(esp, edi); /* 0x006D444D: push edi */
    edx = 2; /* 0x006D444E: mov edx, 2 */
    edi = eax + 0x1; /* 0x006D4453: lea edi, [eax + 1] */
    eax = edi; /* 0x006D4456: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x006D4458: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x006D445A: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x006D445D: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x006D445F: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x006D4461: push ecx */
    RECOMP_CALL(sub_0077F3DF); /* 0x006D4462: call 0x77f3df */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x006D4467: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D4468: push dword ptr [ebp + 8] */
    esi = eax; /* 0x006D446B: mov esi, eax */
    PUSH32(esp, esi); /* 0x006D446D: push esi */
    RECOMP_ICALL(MEM32(0x7CC564)); /* 0x006D446E: call dword ptr [0x7cc564] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x006D4474: mov eax, dword ptr [ebx + 4] */
    ecx = ebx + 0x4; /* 0x006D4477: lea ecx, [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006D447A: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x400) = esi; /* 0x006D447D: mov dword ptr [ebx + 0x400], esi */
    PUSH32(esp, MEM32(ebx + 0xA24)); /* 0x006D4483: push dword ptr [ebx + 0xa24] */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x006D4489: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D448C: pop edi */
    esi = POP32_VAL(esp); /* 0x006D448D: pop esi */
    /* test eax, eax */ /* 0x006D448E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D4499; /* 0x006D4490: jns 0x6d4499 */
L_006D4492:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D4492: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D4494: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006D4495: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x006D4496: ret 0x14 */
L_006D4499:
    eax = MEM32(ebx + 0xFC); /* 0x006D4499: mov eax, dword ptr [ebx + 0xfc] */
    ebx = POP32_VAL(esp); /* 0x006D449F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006D44A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x006D44A1: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_006D44B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D44B0u);

L_006D44B0:
    PUSH32(esp, ebp); /* 0x006D44B0: push ebp */
    ebp = esp; /* 0x006D44B1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x006D44B3: mov eax, dword ptr [ebp + 8] */
    MEM8(ecx + 0xBD) = (uint8_t)(1); /* 0x006D44B6: mov byte ptr [ecx + 0xbd], 1 */
    MEM32(ecx + 0xA8) = eax; /* 0x006D44BD: mov dword ptr [ecx + 0xa8], eax */
    MEM32(ecx + 0x6C) = eax; /* 0x006D44C3: mov dword ptr [ecx + 0x6c], eax */
    ebp = POP32_VAL(esp); /* 0x006D44C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D44C7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D44D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D44D0u);

L_006D44D0:
    PUSH32(esp, ebp); /* 0x006D44D0: push ebp */
    ebp = esp; /* 0x006D44D1: mov ebp, esp */
    ecx = MEM32(ecx + 0x108); /* 0x006D44D3: mov ecx, dword ptr [ecx + 0x108] */
    /* test ecx, ecx */ /* 0x006D44D9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D44FA; /* 0x006D44DB: je 0x6d44fa */
L_006D44DD:
    eax = MEM32(ecx); /* 0x006D44DD: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x006D44DF: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D44E1: push dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x006D44E4: push 1 */
    PUSH32(esp, 0x15u); /* 0x006D44E6: push 0x15 */
    PUSH32(esp, 1); /* 0x006D44E8: push 1 */
    PUSH32(esp, 0); /* 0x006D44EA: push 0 */
    PUSH32(esp, ecx); /* 0x006D44EC: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x006D44ED: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D44F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D44FA; /* 0x006D44F2: js 0x6d44fa */
L_006D44F4:
    SET_LO8(eax, 1); /* 0x006D44F4: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x006D44F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D44F7: ret 4 */
L_006D44FA:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006D44FA: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x006D44FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D44FD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D4500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D4500u);

L_006D4500:
    PUSH32(esp, ebp); /* 0x006D4500: push ebp */
    ebp = esp; /* 0x006D4501: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x006D4503: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0x10u */ /* 0x006D4506: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D4511; /* 0x006D4509: ja 0x6d4511 */
L_006D450B:
    MEM32(ecx + 0xF54) = eax; /* 0x006D450B: mov dword ptr [ecx + 0xf54], eax */
L_006D4511:
    ebp = POP32_VAL(esp); /* 0x006D4511: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D4512: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D4520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D4520u);

L_006D4520:
    PUSH32(esp, ebp); /* 0x006D4520: push ebp */
    ebp = esp; /* 0x006D4521: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x006D4523: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D4526: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D452B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x006D452D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x006D4530: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x006D4533: push ebx */
    PUSH32(esp, esi); /* 0x006D4534: push esi */
    PUSH32(esp, edi); /* 0x006D4535: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x006D4536: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ecx; /* 0x006D4538: mov dword ptr [ebp - 0x20], ecx */
    PUSH32(esp, ebx); /* 0x006D453B: push ebx */
    edi = edx; /* 0x006D453C: mov edi, edx */
    MEM32(ebp + (-0x24)) = eax; /* 0x006D453E: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x28)) = ebx; /* 0x006D4541: mov dword ptr [ebp - 0x28], ebx */
    RECOMP_ICALL(MEM32(0x7CC968)); /* 0x006D4544: call dword ptr [0x7cc968] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xF9Cu); /* 0x006D454A: push 0xf9c */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D454F: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D4555: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D4557: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x006D455A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4582; /* 0x006D455C: je 0x6d4582 */
L_006D455E:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x006D455E: push dword ptr [ebp - 0x24] */
    ecx = ebp + (-0x1C); /* 0x006D4561: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_005C8920); /* 0x006D4564: call 0x5c8920 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x006D4569: lea eax, [ebp - 0x1c] */
    ebx = 1; /* 0x006D456C: mov ebx, 1 */
    PUSH32(esp, eax); /* 0x006D4571: push eax */
    PUSH32(esp, edi); /* 0x006D4572: push edi */
    PUSH32(esp, ecx); /* 0x006D4573: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x006D4574: push dword ptr [ebp - 0x20] */
    ecx = esi; /* 0x006D4577: mov ecx, esi */
    RECOMP_CALL(sub_006D19D0); /* 0x006D4579: call 0x6d19d0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x006D457E: mov esi, eax */
    goto L_006D4584; /* 0x006D4580: jmp 0x6d4584 */
L_006D4582:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D4582: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D4584:
    /* test LO8(ebx), 1 */ /* 0x006D4584: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D459B; /* 0x006D4587: je 0x6d459b */
L_006D4589:
    /* cmp MEM32(ebp + (-0x8)), 8 */ /* 0x006D4589: cmp dword ptr [ebp - 8], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D459B; /* 0x006D458D: jb 0x6d459b */
L_006D458F:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x006D458F: push dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D4592: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D4598: add esp, 4 */
    _flag_k = FK_ADD;
L_006D459B:
    ecx = MEM32(ebp + (-0x4)); /* 0x006D459B: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x006D459E: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x006D45A0: pop edi */
    esi = POP32_VAL(esp); /* 0x006D45A1: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D45A2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x006D45A4: pop ebx */
    RECOMP_CALL(sub_0077F4C2); /* 0x006D45A5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D45AA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D45AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D45AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D45B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D45B0u);

L_006D45B0:
    PUSH32(esp, ebp); /* 0x006D45B0: push ebp */
    ebp = esp; /* 0x006D45B1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D45B3: push esi */
    esi = ecx; /* 0x006D45B4: mov esi, ecx */
    PUSH32(esp, edi); /* 0x006D45B6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x006D45B7: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x006D45BA: mov eax, dword ptr [esi + 4] */
    /* cmp edi, eax */ /* 0x006D45BD: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D45F8; /* 0x006D45BF: jae 0x6d45f8 */
L_006D45C1:
    ecx = MEM32(esi); /* 0x006D45C1: mov ecx, dword ptr [esi] */
    /* cmp ecx, edi */ /* 0x006D45C3: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D45F8; /* 0x006D45C5: ja 0x6d45f8 */
L_006D45C7:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x006D45C7: sub edi, ecx */
    _flag_k = FK_CMP;
    if (3u) _cf = (((edi) >> 2) & 1u); /* 0x006D45C9: sar edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 3u);
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x006D45CC: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D45D9; /* 0x006D45CF: jne 0x6d45d9 */
L_006D45D1:
    PUSH32(esp, ecx); /* 0x006D45D1: push ecx */
    ecx = esi; /* 0x006D45D2: mov ecx, esi */
    RECOMP_CALL(sub_006D4E10); /* 0x006D45D4: call 0x6d4e10 */
    RECOMP_FLAGS_IN();
L_006D45D9:
    edx = MEM32(esi + 0x4); /* 0x006D45D9: mov edx, dword ptr [esi + 4] */
    /* test edx, edx */ /* 0x006D45DC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4616; /* 0x006D45DE: je 0x6d4616 */
L_006D45E0:
    ecx = MEM32(esi); /* 0x006D45E0: mov ecx, dword ptr [esi] */
    eax = MEM32(ecx + edi * 8); /* 0x006D45E2: mov eax, dword ptr [ecx + edi*8] */
    MEM32(edx) = eax; /* 0x006D45E5: mov dword ptr [edx], eax */
    eax = MEM32(ecx + edi * 8 + 0x4); /* 0x006D45E7: mov eax, dword ptr [ecx + edi*8 + 4] */
    MEM32(edx + 0x4) = eax; /* 0x006D45EB: mov dword ptr [edx + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 8; /* 0x006D45EE: add dword ptr [esi + 4], 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006D45F2: pop edi */
    esi = POP32_VAL(esp); /* 0x006D45F3: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D45F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D45F5: ret 4 */
L_006D45F8:
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x006D45F8: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D4605; /* 0x006D45FB: jne 0x6d4605 */
L_006D45FD:
    PUSH32(esp, ecx); /* 0x006D45FD: push ecx */
    ecx = esi; /* 0x006D45FE: mov ecx, esi */
    RECOMP_CALL(sub_006D4E10); /* 0x006D4600: call 0x6d4e10 */
    RECOMP_FLAGS_IN();
L_006D4605:
    ecx = MEM32(esi + 0x4); /* 0x006D4605: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x006D4608: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4616; /* 0x006D460A: je 0x6d4616 */
L_006D460C:
    eax = MEM32(edi); /* 0x006D460C: mov eax, dword ptr [edi] */
    MEM32(ecx) = eax; /* 0x006D460E: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x4); /* 0x006D4610: mov eax, dword ptr [edi + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x006D4613: mov dword ptr [ecx + 4], eax */
L_006D4616:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 8; /* 0x006D4616: add dword ptr [esi + 4], 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x006D461A: pop edi */
    esi = POP32_VAL(esp); /* 0x006D461B: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D461C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D461D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D4620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D4620u);

L_006D4620:
    PUSH32(esp, ebp); /* 0x006D4620: push ebp */
    ebp = esp; /* 0x006D4621: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D4623: push -1 */
    PUSH32(esp, 0x007C6A0Du); /* 0x006D4625: push 0x7c6a0d */
    eax = MEM32(FS_BASE + (0)); /* 0x006D462A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D4630: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006D4631: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006D4634: push esi */
    PUSH32(esp, edi); /* 0x006D4635: push edi */
    eax = MEM32(0x855000); /* 0x006D4636: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D463B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D463D: push eax */
    eax = ebp + (-0xC); /* 0x006D463E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D4641: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x006D4647: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x006D4649: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x10)) = 0; /* 0x006D464C: mov dword ptr [ebp - 0x10], 0 */
    ecx = edi + 0x68; /* 0x006D4653: lea ecx, [edi + 0x68] */
    MEM32(edi) = 0x008018D4u; /* 0x006D4656: mov dword ptr [edi], 0x8018d4 */
    MEM32(edi + 0x10) = 0x00801930u; /* 0x006D465C: mov dword ptr [edi + 0x10], 0x801930 */
    RECOMP_ICALL(MEM32(0x7CC3C4)); /* 0x006D4663: call dword ptr [0x7cc3c4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x006D4669: push 0 */
    esi = edi + 0x18; /* 0x006D466B: lea esi, [edi + 0x18] */
    MEM32(ebp + (-0x4)) = 0; /* 0x006D466E: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, esi); /* 0x006D4675: push esi */
    ecx = edi; /* 0x006D4676: mov ecx, edi */
    MEM32(ebp + (-0x10)) = 1; /* 0x006D4678: mov dword ptr [ebp - 0x10], 1 */
    RECOMP_ICALL(MEM32(0x7CC374)); /* 0x006D467F: call dword ptr [0x7cc374] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x006D4685: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(edi); /* 0x006D468C: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0x18)) = esi; /* 0x006D468E: mov dword ptr [ebp - 0x18], esi */
    eax = MEM32(eax + 0x4); /* 0x006D4691: mov eax, dword ptr [eax + 4] */
    MEM32(edi + eax) = 0x00801920u; /* 0x006D4694: mov dword ptr [edi + eax], 0x801920 */
    eax = MEM32(edi); /* 0x006D469B: mov eax, dword ptr [edi] */
    ecx = MEM32(eax + 0x4); /* 0x006D469D: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x68); /* 0x006D46A0: lea eax, [ecx - 0x68] */
    MEM32(ecx + edi + (-0x4)) = eax; /* 0x006D46A3: mov dword ptr [ecx + edi - 4], eax */
    ecx = esi; /* 0x006D46A7: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x7CC370)); /* 0x006D46A9: call dword ptr [0x7cc370] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006D46AF: mov byte ptr [ebp - 4], 2 */
    MEM32(esi) = 0x008018E0u; /* 0x006D46B3: mov dword ptr [esi], 0x8018e0 */
    MEM32(esi + 0x38) = 0; /* 0x006D46B9: mov dword ptr [esi + 0x38], 0 */
    MEM32(esi + 0x3C) = 0; /* 0x006D46C0: mov dword ptr [esi + 0x3c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006D46C7: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x006D46CE: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D46D0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D46D3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D46DA: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D46DB: pop edi */
    esi = POP32_VAL(esp); /* 0x006D46DC: pop esi */
    esp = ebp; /* 0x006D46DD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D46DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D46E0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006D46F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D46F0u);

L_006D46F0:
    PUSH32(esp, ebp); /* 0x006D46F0: push ebp */
    ebp = esp; /* 0x006D46F1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006D46F3: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D46F4: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x006D46F7: add ecx, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0; /* 0x006D46FA: mov dword ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_006D4E80); /* 0x006D4701: call 0x6d4e80 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x006D4706: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x006D4709: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D470B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D470C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D4730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D4730u);

L_006D4730:
    PUSH32(esp, ebp); /* 0x006D4730: push ebp */
    ebp = esp; /* 0x006D4731: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006D4733: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006D4736: push esi */
    esi = ecx; /* 0x006D4737: mov esi, ecx */
    eax = MEM32(esi + 0x3C); /* 0x006D4739: mov eax, dword ptr [esi + 0x3c] */
    /* test LO8(eax), 2 */ /* 0x006D473C: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D474C; /* 0x006D473E: je 0x6d474c */
L_006D4740:
    eax = 0xFFFFu; /* 0x006D4740: mov eax, 0xffff */
    esi = POP32_VAL(esp); /* 0x006D4745: pop esi */
    esp = ebp; /* 0x006D4746: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D4748: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D4749: ret 4 */
L_006D474C:
    PUSH32(esp, ebx); /* 0x006D474C: push ebx */
    SET_LO16(ebx, MEM16(ebp + 0x8)); /* 0x006D474D: mov bx, word ptr [ebp + 8] */
    ecx = 0xFFFFu; /* 0x006D4751: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x006D4756: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D4765; /* 0x006D4759: jne 0x6d4765 */
L_006D475B:
    ebx = POP32_VAL(esp); /* 0x006D475B: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D475C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006D475E: pop esi */
    esp = ebp; /* 0x006D475F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D4761: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D4762: ret 4 */
L_006D4765:
    PUSH32(esp, edi); /* 0x006D4765: push edi */
    /* test LO8(eax), 8 */ /* 0x006D4766: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D478D; /* 0x006D4768: je 0x6d478d */
L_006D476A:
    edi = MEM32(esi + 0x20); /* 0x006D476A: mov edi, dword ptr [esi + 0x20] */
    ecx = MEM32(edi); /* 0x006D476D: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x006D476F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D478D; /* 0x006D4771: je 0x6d478d */
L_006D4773:
    edx = MEM32(esi + 0x38); /* 0x006D4773: mov edx, dword ptr [esi + 0x38] */
    /* cmp ecx, edx */ /* 0x006D4776: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D478D; /* 0x006D4778: jae 0x6d478d */
L_006D477A:
    eax = MEM32(esi + 0x30); /* 0x006D477A: mov eax, dword ptr [esi + 0x30] */
    eax = MEM32(eax); /* 0x006D477D: mov eax, dword ptr [eax] */
    MEM32(edi) = edx; /* 0x006D477F: mov dword ptr [edi], edx */
    ecx = ecx + eax * 2; /* 0x006D4781: lea ecx, [ecx + eax*2] */
    eax = MEM32(esi + 0x30); /* 0x006D4784: mov eax, dword ptr [esi + 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x006D4787: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006D4789: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM32(eax) = ecx; /* 0x006D478B: mov dword ptr [eax], ecx */
L_006D478D:
    eax = MEM32(esi + 0x20); /* 0x006D478D: mov eax, dword ptr [esi + 0x20] */
    edx = MEM32(eax); /* 0x006D4790: mov edx, dword ptr [eax] */
    /* test edx, edx */ /* 0x006D4792: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D47BD; /* 0x006D4794: je 0x6d47bd */
L_006D4796:
    ecx = MEM32(esi + 0x30); /* 0x006D4796: mov ecx, dword ptr [esi + 0x30] */
    ecx = MEM32(ecx); /* 0x006D4799: mov ecx, dword ptr [ecx] */
    ecx = edx + ecx * 2; /* 0x006D479B: lea ecx, [edx + ecx*2] */
    /* cmp edx, ecx */ /* 0x006D479E: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D47B9; /* 0x006D47A0: jae 0x6d47b9 */
L_006D47A2:
    ecx = esi; /* 0x006D47A2: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x7CC378)); /* 0x006D47A4: call dword ptr [0x7cc378] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x006D47AA: pop edi */
    MEM16(eax) = (uint16_t)(LO16(ebx)); /* 0x006D47AB: mov word ptr [eax], bx */
    SET_LO16(eax, LO16(ebx)); /* 0x006D47AE: mov ax, bx */
    ebx = POP32_VAL(esp); /* 0x006D47B1: pop ebx */
    esi = POP32_VAL(esp); /* 0x006D47B2: pop esi */
    esp = ebp; /* 0x006D47B3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D47B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D47B6: ret 4 */
L_006D47B9:
    /* test edx, edx */ /* 0x006D47B9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D47C1; /* 0x006D47BB: jne 0x6d47c1 */
L_006D47BD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D47BD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006D47D1; /* 0x006D47BF: jmp 0x6d47d1 */
L_006D47C1:
    eax = MEM32(esi + 0x30); /* 0x006D47C1: mov eax, dword ptr [esi + 0x30] */
    edi = MEM32(eax); /* 0x006D47C4: mov edi, dword ptr [eax] */
    eax = MEM32(esi + 0xC); /* 0x006D47C6: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x006D47C9: add edi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(eax); /* 0x006D47CB: sub edi, dword ptr [eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x006D47CD: add edi, edx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x006D47CF: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
L_006D47D1:
    ecx = edi; /* 0x006D47D1: mov ecx, edi */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006D47D3: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x006D47D3: shr ecx, 1 */
    /* cmp ecx, 0x20u */ /* 0x006D47D5: cmp ecx, 0x20 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D47E1; /* 0x006D47D8: jae 0x6d47e1 */
L_006D47DA:
    ecx = 0x20u; /* 0x006D47DA: mov ecx, 0x20 */
    goto L_006D47E5; /* 0x006D47DF: jmp 0x6d47e5 */
L_006D47E1:
    /* test ecx, ecx */ /* 0x006D47E1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D47F8; /* 0x006D47E3: je 0x6d47f8 */
L_006D47E5:
    eax = 0x7FFFFFFFu; /* 0x006D47E5: mov eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006D47EA: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x006D47EC: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D47F4; /* 0x006D47EE: jae 0x6d47f4 */
L_006D47F0:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006D47F0: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x006D47F0: shr ecx, 1 */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_006D47E5; /* 0x006D47F2: jne 0x6d47e5 */
L_006D47F4:
    /* test ecx, ecx */ /* 0x006D47F4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D4806; /* 0x006D47F6: jne 0x6d4806 */
L_006D47F8:
    edi = POP32_VAL(esp); /* 0x006D47F8: pop edi */
    ebx = POP32_VAL(esp); /* 0x006D47F9: pop ebx */
    eax = 0xFFFFu; /* 0x006D47FA: mov eax, 0xffff */
    esi = POP32_VAL(esp); /* 0x006D47FF: pop esi */
    esp = ebp; /* 0x006D4800: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D4802: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D4803: ret 4 */
L_006D4806:
    eax = ecx + edi; /* 0x006D4806: lea eax, [ecx + edi] */
    PUSH32(esp, eax); /* 0x006D4809: push eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x006D480A: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_005C9E90); /* 0x006D480D: call 0x5c9e90 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x006D4812: mov ecx, dword ptr [esi + 0xc] */
    ebx = eax; /* 0x006D4815: mov ebx, eax */
    edx = MEM32(ecx); /* 0x006D4817: mov edx, dword ptr [ecx] */
    MEM32(ebp + (-0x4)) = edx; /* 0x006D4819: mov dword ptr [ebp - 4], edx */
    /* test edi, edi */ /* 0x006D481C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4835; /* 0x006D481E: je 0x6d4835 */
L_006D4820:
    ecx = edi + edi; /* 0x006D4820: lea ecx, [edi + edi] */
    PUSH32(esp, ecx); /* 0x006D4823: push ecx */
    PUSH32(esp, edx); /* 0x006D4824: push edx */
    PUSH32(esp, ebx); /* 0x006D4825: push ebx */
    RECOMP_CALL(sub_00780838); /* 0x006D4826: call 0x780838 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x006D482B: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x006D482E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x006D4831: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D4881; /* 0x006D4833: jne 0x6d4881 */
L_006D4835:
    eax = MEM32(esi + 0x10); /* 0x006D4835: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(ebp + (-0x8)); /* 0x006D4838: mov ecx, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0x4)); /* 0x006D483B: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x006D483E: add ecx, ecx */
    _flag_k = FK_ADD;
    MEM32(esi + 0x38) = ebx; /* 0x006D4840: mov dword ptr [esi + 0x38], ebx */
    MEM32(eax) = ebx; /* 0x006D4843: mov dword ptr [eax], ebx */
    eax = MEM32(esi + 0x20); /* 0x006D4845: mov eax, dword ptr [esi + 0x20] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006D4848: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM32(eax) = ebx; /* 0x006D484A: mov dword ptr [eax], ebx */
    eax = MEM32(esi + 0x30); /* 0x006D484C: mov eax, dword ptr [esi + 0x30] */
    MEM32(eax) = ecx; /* 0x006D484F: mov dword ptr [eax], ecx */
    eax = MEM32(esi + 0xC); /* 0x006D4851: mov eax, dword ptr [esi + 0xc] */
    /* test MEM8(esi + 0x3C), 4 */ /* 0x006D4854: test byte ptr [esi + 0x3c], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x3C)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = ebx; /* 0x006D4858: mov dword ptr [eax], ebx */
    eax = MEM32(esi + 0x1C); /* 0x006D485A: mov eax, dword ptr [esi + 0x1c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4871; /* 0x006D485D: je 0x6d4871 */
L_006D485F:
    MEM32(eax) = 0; /* 0x006D485F: mov dword ptr [eax], 0 */
    eax = MEM32(esi + 0x2C); /* 0x006D4865: mov eax, dword ptr [esi + 0x2c] */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x006D4868: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    MEM32(eax) = ebx; /* 0x006D486A: mov dword ptr [eax], ebx */
    goto L_006D4904; /* 0x006D486C: jmp 0x6d4904 */
L_006D4871:
    MEM32(eax) = ebx; /* 0x006D4871: mov dword ptr [eax], ebx */
    eax = MEM32(esi + 0x2C); /* 0x006D4873: mov eax, dword ptr [esi + 0x2c] */
    MEM32(eax) = 1; /* 0x006D4876: mov dword ptr [eax], 1 */
    goto L_006D4904; /* 0x006D487C: jmp 0x6d4904 */
L_006D4881:
    eax = MEM32(esi + 0x38); /* 0x006D4881: mov eax, dword ptr [esi + 0x38] */
    ecx = MEM32(esi + 0x10); /* 0x006D4884: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006D4887: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D4889: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edi = MEM32(ebp + (-0x4)); /* 0x006D488B: mov edi, dword ptr [ebp - 4] */
    eax = ebx + eax * 2; /* 0x006D488E: lea eax, [ebx + eax*2] */
    MEM32(esi + 0x38) = eax; /* 0x006D4891: mov dword ptr [esi + 0x38], eax */
    eax = MEM32(esi + 0x20); /* 0x006D4894: mov eax, dword ptr [esi + 0x20] */
    eax = MEM32(eax); /* 0x006D4897: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x006D4899: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D489B: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edx = ebx + eax * 2; /* 0x006D489D: lea edx, [ebx + eax*2] */
    eax = MEM32(ecx); /* 0x006D48A0: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x006D48A2: sub eax, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D48A4: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    eax = ebx + eax * 2; /* 0x006D48A6: lea eax, [ebx + eax*2] */
    MEM32(ecx) = eax; /* 0x006D48A9: mov dword ptr [ecx], eax */
    eax = MEM32(esi + 0x20); /* 0x006D48AB: mov eax, dword ptr [esi + 0x20] */
    ecx = MEM32(ebp + (-0x8)); /* 0x006D48AE: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x006D48B1: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x006D48B3: sub ecx, edx */
    _flag_k = FK_CMP;
    MEM32(eax) = edx; /* 0x006D48B5: mov dword ptr [eax], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x006D48B7: add ecx, ebx */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x30); /* 0x006D48B9: mov eax, dword ptr [esi + 0x30] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006D48BC: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM32(eax) = ecx; /* 0x006D48BE: mov dword ptr [eax], ecx */
    /* test MEM8(esi + 0x3C), 4 */ /* 0x006D48C0: test byte ptr [esi + 0x3c], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x3C)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D48DD; /* 0x006D48C4: je 0x6d48dd */
L_006D48C6:
    eax = MEM32(esi + 0xC); /* 0x006D48C6: mov eax, dword ptr [esi + 0xc] */
    MEM32(eax) = ebx; /* 0x006D48C9: mov dword ptr [eax], ebx */
    eax = MEM32(esi + 0x1C); /* 0x006D48CB: mov eax, dword ptr [esi + 0x1c] */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x006D48CE: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    MEM32(eax) = 0; /* 0x006D48D0: mov dword ptr [eax], 0 */
    eax = MEM32(esi + 0x2C); /* 0x006D48D6: mov eax, dword ptr [esi + 0x2c] */
    MEM32(eax) = ebx; /* 0x006D48D9: mov dword ptr [eax], ebx */
    goto L_006D4904; /* 0x006D48DB: jmp 0x6d4904 */
L_006D48DD:
    eax = MEM32(esi + 0x20); /* 0x006D48DD: mov eax, dword ptr [esi + 0x20] */
    edx = MEM32(eax); /* 0x006D48E0: mov edx, dword ptr [eax] */
    eax = MEM32(esi + 0x1C); /* 0x006D48E2: mov eax, dword ptr [esi + 0x1c] */
    eax = MEM32(eax); /* 0x006D48E5: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x006D48E7: sub eax, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D48E9: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    ecx = ebx + eax * 2; /* 0x006D48EB: lea ecx, [ebx + eax*2] */
    eax = MEM32(esi + 0xC); /* 0x006D48EE: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x006D48F1: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x006D48F3: add edx, 2 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x006D48F6: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    MEM32(eax) = ebx; /* 0x006D48F8: mov dword ptr [eax], ebx */
    eax = MEM32(esi + 0x1C); /* 0x006D48FA: mov eax, dword ptr [esi + 0x1c] */
    MEM32(eax) = ecx; /* 0x006D48FD: mov dword ptr [eax], ecx */
    eax = MEM32(esi + 0x2C); /* 0x006D48FF: mov eax, dword ptr [esi + 0x2c] */
    MEM32(eax) = edx; /* 0x006D4902: mov dword ptr [eax], edx */
L_006D4904:
    /* test MEM8(esi + 0x3C), 1 */ /* 0x006D4904: test byte ptr [esi + 0x3c], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x3C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4914; /* 0x006D4908: je 0x6d4914 */
L_006D490A:
    PUSH32(esp, edi); /* 0x006D490A: push edi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D490B: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D4911: add esp, 4 */
    _flag_k = FK_ADD;
L_006D4914:
    _flag_a = (uint32_t)((MEM32(esi + 0x3C) | 1)); _flag_b = (uint32_t)((MEM32(esi + 0x3C) | 1));
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) | 1; /* 0x006D4914: or dword ptr [esi + 0x3c], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x006D4918: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x7CC378)); /* 0x006D491A: call dword ptr [0x7cc378] */
    RECOMP_FLAGS_IN();
    SET_LO16(ecx, MEM16(ebp + 0x8)); /* 0x006D4920: mov cx, word ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x006D4924: pop edi */
    ebx = POP32_VAL(esp); /* 0x006D4925: pop ebx */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x006D4926: mov word ptr [eax], cx */
    SET_LO16(eax, LO16(ecx)); /* 0x006D4929: mov ax, cx */
    esi = POP32_VAL(esp); /* 0x006D492C: pop esi */
    esp = ebp; /* 0x006D492D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D492F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D4930: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D4940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D4940u);

L_006D4940:
    PUSH32(esp, ebp); /* 0x006D4940: push ebp */
    ebp = esp; /* 0x006D4941: mov ebp, esp */
    eax = MEM32(ecx + 0x1C); /* 0x006D4943: mov eax, dword ptr [ecx + 0x1c] */
    PUSH32(esp, esi); /* 0x006D4946: push esi */
    PUSH32(esp, edi); /* 0x006D4947: push edi */
    edi = 0xFFFFu; /* 0x006D4948: mov edi, 0xffff */
    esi = MEM32(eax); /* 0x006D494D: mov esi, dword ptr [eax] */
    /* test esi, esi */ /* 0x006D494F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4998; /* 0x006D4951: je 0x6d4998 */
L_006D4953:
    eax = MEM32(ecx + 0xC); /* 0x006D4953: mov eax, dword ptr [ecx + 0xc] */
    /* cmp esi, MEM32(eax) */ /* 0x006D4956: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D4998; /* 0x006D4958: jbe 0x6d4998 */
L_006D495A:
    SET_LO16(edx, MEM16(ebp + 0x8)); /* 0x006D495A: mov dx, word ptr [ebp + 8] */
    /* cmp LO16(edi), LO16(edx) */ /* 0x006D495E: cmp di, dx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D496F; /* 0x006D4961: je 0x6d496f */
L_006D4963:
    /* cmp LO16(edx), MEM16(esi + (-0x2)) */ /* 0x006D4963: cmp dx, word ptr [esi - 2] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(esi + (-0x2))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D496F; /* 0x006D4967: je 0x6d496f */
L_006D4969:
    /* test MEM8(ecx + 0x3C), 2 */ /* 0x006D4969: test byte ptr [ecx + 0x3c], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x3C)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D4998; /* 0x006D496D: jne 0x6d4998 */
L_006D496F:
    eax = MEM32(ecx + 0x2C); /* 0x006D496F: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x006D4972: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = MEM32(ecx + 0x1C); /* 0x006D4974: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 0xFFFFFFFEu; /* 0x006D4977: add dword ptr [eax], -2 */
    _flag_k = FK_ADD;
    /* cmp LO16(edi), LO16(edx) */ /* 0x006D497A: cmp di, dx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D4990; /* 0x006D497D: je 0x6d4990 */
L_006D497F:
    eax = MEM32(ecx + 0x1C); /* 0x006D497F: mov eax, dword ptr [ecx + 0x1c] */
    edi = POP32_VAL(esp); /* 0x006D4982: pop edi */
    esi = POP32_VAL(esp); /* 0x006D4983: pop esi */
    eax = MEM32(eax); /* 0x006D4984: mov eax, dword ptr [eax] */
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x006D4986: mov word ptr [eax], dx */
    eax = (uint32_t)LO16(edx); /* 0x006D4989: movzx eax, dx */
    ebp = POP32_VAL(esp); /* 0x006D498C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D498D: ret 4 */
L_006D4990:
    edi = POP32_VAL(esp); /* 0x006D4990: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D4991: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x006D4993: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D4994: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D4995: ret 4 */
L_006D4998:
    SET_LO16(eax, LO16(edi)); /* 0x006D4998: mov ax, di */
    edi = POP32_VAL(esp); /* 0x006D499B: pop edi */
    esi = POP32_VAL(esp); /* 0x006D499C: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D499D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D499E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D49B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D49B0u);

L_006D49B0:
    edx = ecx; /* 0x006D49B0: mov edx, ecx */
    PUSH32(esp, esi); /* 0x006D49B2: push esi */
    PUSH32(esp, edi); /* 0x006D49B3: push edi */
    edi = MEM32(edx + 0x1C); /* 0x006D49B4: mov edi, dword ptr [edx + 0x1c] */
    esi = MEM32(edi); /* 0x006D49B7: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x006D49B9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D49C5; /* 0x006D49BB: jne 0x6d49c5 */
L_006D49BD:
    edi = POP32_VAL(esp); /* 0x006D49BD: pop edi */
    eax = 0xFFFFu; /* 0x006D49BE: mov eax, 0xffff */
    esi = POP32_VAL(esp); /* 0x006D49C3: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D49C4: ret  */
L_006D49C5:
    PUSH32(esp, ebx); /* 0x006D49C5: push ebx */
    ebx = MEM32(edx + 0x2C); /* 0x006D49C6: mov ebx, dword ptr [edx + 0x2c] */
    ecx = MEM32(ebx); /* 0x006D49C9: mov ecx, dword ptr [ebx] */
    ecx = esi + ecx * 2; /* 0x006D49CB: lea ecx, [esi + ecx*2] */
    /* cmp esi, ecx */ /* 0x006D49CE: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D49D9; /* 0x006D49D0: jae 0x6d49d9 */
L_006D49D2:
    SET_LO16(eax, MEM16(esi)); /* 0x006D49D2: mov ax, word ptr [esi] */
    ebx = POP32_VAL(esp); /* 0x006D49D5: pop ebx */
    edi = POP32_VAL(esp); /* 0x006D49D6: pop edi */
    esi = POP32_VAL(esp); /* 0x006D49D7: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D49D8: ret  */
L_006D49D9:
    /* test MEM8(edx + 0x3C), 4 */ /* 0x006D49D9: test byte ptr [edx + 0x3c], 4 */
    _flag_a = (uint32_t)(MEM8(edx + 0x3C)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D4A0E; /* 0x006D49DD: jne 0x6d4a0e */
L_006D49DF:
    eax = MEM32(edx + 0x20); /* 0x006D49DF: mov eax, dword ptr [edx + 0x20] */
    eax = MEM32(eax); /* 0x006D49E2: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x006D49E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4A0E; /* 0x006D49E6: je 0x6d4a0e */
L_006D49E8:
    /* cmp eax, esi */ /* 0x006D49E8: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D49F1; /* 0x006D49EA: ja 0x6d49f1 */
L_006D49EC:
    /* cmp MEM32(edx + 0x38), esi */ /* 0x006D49EC: cmp dword ptr [edx + 0x38], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D4A0E; /* 0x006D49EF: jbe 0x6d4a0e */
L_006D49F1:
    /* cmp MEM32(edx + 0x38), eax */ /* 0x006D49F1: cmp dword ptr [edx + 0x38], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D49F9; /* 0x006D49F4: jae 0x6d49f9 */
L_006D49F6:
    MEM32(edx + 0x38) = eax; /* 0x006D49F6: mov dword ptr [edx + 0x38], eax */
L_006D49F9:
    eax = MEM32(edx + 0x38); /* 0x006D49F9: mov eax, dword ptr [edx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi); /* 0x006D49FC: sub eax, dword ptr [edi] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D49FE: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(ebx) = eax; /* 0x006D4A00: mov dword ptr [ebx], eax */
    eax = MEM32(edx + 0x1C); /* 0x006D4A02: mov eax, dword ptr [edx + 0x1c] */
    ebx = POP32_VAL(esp); /* 0x006D4A05: pop ebx */
    edi = POP32_VAL(esp); /* 0x006D4A06: pop edi */
    esi = POP32_VAL(esp); /* 0x006D4A07: pop esi */
    eax = MEM32(eax); /* 0x006D4A08: mov eax, dword ptr [eax] */
    SET_LO16(eax, MEM16(eax)); /* 0x006D4A0A: mov ax, word ptr [eax] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D4A0D: ret  */
L_006D4A0E:
    ebx = POP32_VAL(esp); /* 0x006D4A0E: pop ebx */
    edi = POP32_VAL(esp); /* 0x006D4A0F: pop edi */
    eax = 0xFFFFu; /* 0x006D4A10: mov eax, 0xffff */
    esi = POP32_VAL(esp); /* 0x006D4A15: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D4A16: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D4A20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D4A20u);

L_006D4A20:
    PUSH32(esp, ebp); /* 0x006D4A20: push ebp */
    ebp = esp; /* 0x006D4A21: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006D4A23: push ecx */
    PUSH32(esp, ebx); /* 0x006D4A24: push ebx */
    ebx = ecx; /* 0x006D4A25: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x006D4A27: push esi */
    PUSH32(esp, edi); /* 0x006D4A28: push edi */
    edx = MEM32(ebx + 0x20); /* 0x006D4A29: mov edx, dword ptr [ebx + 0x20] */
    eax = MEM32(edx); /* 0x006D4A2C: mov eax, dword ptr [edx] */
    /* test eax, eax */ /* 0x006D4A2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4A3A; /* 0x006D4A30: je 0x6d4a3a */
L_006D4A32:
    /* cmp MEM32(ebx + 0x38), eax */ /* 0x006D4A32: cmp dword ptr [ebx + 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x38)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D4A3A; /* 0x006D4A35: jae 0x6d4a3a */
L_006D4A37:
    MEM32(ebx + 0x38) = eax; /* 0x006D4A37: mov dword ptr [ebx + 0x38], eax */
L_006D4A3A:
    ecx = MEM32(ebp + 0x18); /* 0x006D4A3A: mov ecx, dword ptr [ebp + 0x18] */
    /* test LO8(ecx), 1 */ /* 0x006D4A3D: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4B2A; /* 0x006D4A40: je 0x6d4b2a */
L_006D4A46:
    eax = MEM32(ebx + 0x1C); /* 0x006D4A46: mov eax, dword ptr [ebx + 0x1c] */
    esi = MEM32(eax); /* 0x006D4A49: mov esi, dword ptr [eax] */
    MEM32(ebp + (-0x4)) = esi; /* 0x006D4A4B: mov dword ptr [ebp - 4], esi */
    /* test esi, esi */ /* 0x006D4A4E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4B2A; /* 0x006D4A50: je 0x6d4b2a */
L_006D4A56:
    eax = MEM32(ebp + 0x14); /* 0x006D4A56: mov eax, dword ptr [ebp + 0x14] */
    /* cmp eax, 2 */ /* 0x006D4A59: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D4A75; /* 0x006D4A5C: jne 0x6d4a75 */
L_006D4A5E:
    ecx = MEM32(ebx + 0xC); /* 0x006D4A5E: mov ecx, dword ptr [ebx + 0xc] */
    eax = MEM32(ebx + 0x38); /* 0x006D4A61: mov eax, dword ptr [ebx + 0x38] */
    esi = MEM32(ebp + 0xC); /* 0x006D4A64: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x10); /* 0x006D4A67: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx); /* 0x006D4A6A: sub eax, dword ptr [ecx] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D4A6C: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006D4A6E: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x006D4A6F: add esi, eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = edi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D4A71: adc edi, edx */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_006D4AAC; /* 0x006D4A73: jmp 0x6d4aac */
L_006D4A75:
    /* cmp eax, 1 */ /* 0x006D4A75: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D4A95; /* 0x006D4A78: jne 0x6d4a95 */
L_006D4A7A:
    /* test LO8(ecx), 2 */ /* 0x006D4A7A: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D4A99; /* 0x006D4A7D: jne 0x6d4a99 */
L_006D4A7F:
    ecx = MEM32(ebx + 0xC); /* 0x006D4A7F: mov ecx, dword ptr [ebx + 0xc] */
    eax = esi; /* 0x006D4A82: mov eax, esi */
    esi = MEM32(ebp + 0xC); /* 0x006D4A84: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x10); /* 0x006D4A87: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx); /* 0x006D4A8A: sub eax, dword ptr [ecx] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D4A8C: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006D4A8E: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x006D4A8F: add esi, eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = edi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D4A91: adc edi, edx */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_006D4AAC; /* 0x006D4A93: jmp 0x6d4aac */
L_006D4A95:
    /* test eax, eax */ /* 0x006D4A95: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4AA6; /* 0x006D4A97: je 0x6d4aa6 */
L_006D4A99:
    edi = MEM32(0x7CC41C); /* 0x006D4A99: mov edi, dword ptr [0x7cc41c] */
    esi = MEM32(edi); /* 0x006D4A9F: mov esi, dword ptr [edi] */
    edi = MEM32(edi + 0x4); /* 0x006D4AA1: mov edi, dword ptr [edi + 4] */
    goto L_006D4AAC; /* 0x006D4AA4: jmp 0x6d4aac */
L_006D4AA6:
    edi = MEM32(ebp + 0x10); /* 0x006D4AA6: mov edi, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + 0xC); /* 0x006D4AA9: mov esi, dword ptr [ebp + 0xc] */
L_006D4AAC:
    /* test edi, edi */ /* 0x006D4AAC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D4BD9; /* 0x006D4AAE: jl 0x6d4bd9 */
L_006D4AB4:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D4ABE; /* 0x006D4AB4: jg 0x6d4abe */
L_006D4AB6:
    /* test esi, esi */ /* 0x006D4AB6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (0) goto L_006D4BD9; /* 0x006D4AB8: jb 0x6d4bd9 */
L_006D4ABE:
    eax = MEM32(ebx + 0xC); /* 0x006D4ABE: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax); /* 0x006D4AC1: mov ecx, dword ptr [eax] */
    eax = MEM32(ebx + 0x38); /* 0x006D4AC3: mov eax, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006D4AC6: sub eax, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D4AC8: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006D4ACA: cdq  */
    /* cmp edi, edx */ /* 0x006D4ACB: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006D4BD9; /* 0x006D4ACD: jg 0x6d4bd9 */
L_006D4AD3:
    if (CMP_L(_flag_a, _flag_b)) goto L_006D4ADD; /* 0x006D4AD3: jl 0x6d4add */
L_006D4AD5:
    /* cmp esi, eax */ /* 0x006D4AD5: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D4BD9; /* 0x006D4AD7: ja 0x6d4bd9 */
L_006D4ADD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x006D4ADD: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x2C); /* 0x006D4AE0: mov eax, dword ptr [ebx + 0x2c] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006D4AE3: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x006D4AE5: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = ecx; /* 0x006D4AE7: mov dword ptr [ebp + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - ecx; /* 0x006D4AEA: sub dword ptr [eax], ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0x1C); /* 0x006D4AEC: mov ecx, dword ptr [ebx + 0x1c] */
    eax = MEM32(ebp + 0x14); /* 0x006D4AEF: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006D4AF2: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x006D4AF4: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    /* test MEM8(ebp + 0x18), 2 */ /* 0x006D4AF6: test byte ptr [ebp + 0x18], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x18)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4BE3; /* 0x006D4AFA: je 0x6d4be3 */
L_006D4B00:
    edx = MEM32(ebx + 0x20); /* 0x006D4B00: mov edx, dword ptr [ebx + 0x20] */
    ecx = MEM32(edx); /* 0x006D4B03: mov ecx, dword ptr [edx] */
    /* test ecx, ecx */ /* 0x006D4B05: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4BE3; /* 0x006D4B07: je 0x6d4be3 */
L_006D4B0D:
    eax = MEM32(ebx + 0x30); /* 0x006D4B0D: mov eax, dword ptr [ebx + 0x30] */
    eax = MEM32(eax); /* 0x006D4B10: mov eax, dword ptr [eax] */
    ecx = ecx + eax * 2; /* 0x006D4B12: lea ecx, [ecx + eax*2] */
    eax = MEM32(ebx + 0x1C); /* 0x006D4B15: mov eax, dword ptr [ebx + 0x1c] */
    eax = MEM32(eax); /* 0x006D4B18: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x006D4B1A: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(edx) = eax; /* 0x006D4B1C: mov dword ptr [edx], eax */
    eax = MEM32(ebx + 0x30); /* 0x006D4B1E: mov eax, dword ptr [ebx + 0x30] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006D4B21: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM32(eax) = ecx; /* 0x006D4B23: mov dword ptr [eax], ecx */
    goto L_006D4BE3; /* 0x006D4B25: jmp 0x6d4be3 */
L_006D4B2A:
    /* test LO8(ecx), 2 */ /* 0x006D4B2A: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4BCD; /* 0x006D4B2D: je 0x6d4bcd */
L_006D4B33:
    edx = MEM32(edx); /* 0x006D4B33: mov edx, dword ptr [edx] */
    MEM32(ebp + 0x18) = edx; /* 0x006D4B35: mov dword ptr [ebp + 0x18], edx */
    /* test edx, edx */ /* 0x006D4B38: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4BCD; /* 0x006D4B3A: je 0x6d4bcd */
L_006D4B40:
    eax = MEM32(ebp + 0x14); /* 0x006D4B40: mov eax, dword ptr [ebp + 0x14] */
    /* cmp eax, 2 */ /* 0x006D4B43: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D4B5F; /* 0x006D4B46: jne 0x6d4b5f */
L_006D4B48:
    ecx = MEM32(ebx + 0xC); /* 0x006D4B48: mov ecx, dword ptr [ebx + 0xc] */
    eax = MEM32(ebx + 0x38); /* 0x006D4B4B: mov eax, dword ptr [ebx + 0x38] */
    esi = MEM32(ebp + 0xC); /* 0x006D4B4E: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x10); /* 0x006D4B51: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx); /* 0x006D4B54: sub eax, dword ptr [ecx] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D4B56: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006D4B58: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x006D4B59: add esi, eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = edi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D4B5B: adc edi, edx */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_006D4B91; /* 0x006D4B5D: jmp 0x6d4b91 */
L_006D4B5F:
    /* cmp eax, 1 */ /* 0x006D4B5F: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D4B7A; /* 0x006D4B62: jne 0x6d4b7a */
L_006D4B64:
    ecx = MEM32(ebx + 0xC); /* 0x006D4B64: mov ecx, dword ptr [ebx + 0xc] */
    eax = edx; /* 0x006D4B67: mov eax, edx */
    esi = MEM32(ebp + 0xC); /* 0x006D4B69: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x10); /* 0x006D4B6C: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx); /* 0x006D4B6F: sub eax, dword ptr [ecx] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D4B71: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006D4B73: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x006D4B74: add esi, eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = edi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D4B76: adc edi, edx */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_006D4B91; /* 0x006D4B78: jmp 0x6d4b91 */
L_006D4B7A:
    /* test eax, eax */ /* 0x006D4B7A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4B8B; /* 0x006D4B7C: je 0x6d4b8b */
L_006D4B7E:
    edi = MEM32(0x7CC41C); /* 0x006D4B7E: mov edi, dword ptr [0x7cc41c] */
    esi = MEM32(edi); /* 0x006D4B84: mov esi, dword ptr [edi] */
    edi = MEM32(edi + 0x4); /* 0x006D4B86: mov edi, dword ptr [edi + 4] */
    goto L_006D4B91; /* 0x006D4B89: jmp 0x6d4b91 */
L_006D4B8B:
    edi = MEM32(ebp + 0x10); /* 0x006D4B8B: mov edi, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + 0xC); /* 0x006D4B8E: mov esi, dword ptr [ebp + 0xc] */
L_006D4B91:
    /* test edi, edi */ /* 0x006D4B91: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D4BD9; /* 0x006D4B93: jl 0x6d4bd9 */
L_006D4B95:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D4B9B; /* 0x006D4B95: jg 0x6d4b9b */
L_006D4B97:
    /* test esi, esi */ /* 0x006D4B97: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (0) goto L_006D4BD9; /* 0x006D4B99: jb 0x6d4bd9 */
L_006D4B9B:
    eax = MEM32(ebx + 0xC); /* 0x006D4B9B: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax); /* 0x006D4B9E: mov ecx, dword ptr [eax] */
    eax = MEM32(ebx + 0x38); /* 0x006D4BA0: mov eax, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006D4BA3: sub eax, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D4BA5: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006D4BA7: cdq  */
    /* cmp edi, edx */ /* 0x006D4BA8: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006D4BD9; /* 0x006D4BAA: jg 0x6d4bd9 */
L_006D4BAC:
    if (CMP_L(_flag_a, _flag_b)) goto L_006D4BB2; /* 0x006D4BAC: jl 0x6d4bb2 */
L_006D4BAE:
    /* cmp esi, eax */ /* 0x006D4BAE: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D4BD9; /* 0x006D4BB0: ja 0x6d4bd9 */
L_006D4BB2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0x18); /* 0x006D4BB2: sub ecx, dword ptr [ebp + 0x18] */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x30); /* 0x006D4BB5: mov eax, dword ptr [ebx + 0x30] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006D4BB8: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x006D4BBA: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x18) = ecx; /* 0x006D4BBC: mov dword ptr [ebp + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - ecx; /* 0x006D4BBF: sub dword ptr [eax], ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0x20); /* 0x006D4BC1: mov ecx, dword ptr [ebx + 0x20] */
    eax = MEM32(ebp + 0x18); /* 0x006D4BC4: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006D4BC7: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x006D4BC9: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    goto L_006D4BE3; /* 0x006D4BCB: jmp 0x6d4be3 */
L_006D4BCD:
    esi = MEM32(ebp + 0xC); /* 0x006D4BCD: mov esi, dword ptr [ebp + 0xc] */
    eax = esi; /* 0x006D4BD0: mov eax, esi */
    edi = MEM32(ebp + 0x10); /* 0x006D4BD2: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x006D4BD5: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4BE3; /* 0x006D4BD7: je 0x6d4be3 */
L_006D4BD9:
    eax = MEM32(0x7CC41C); /* 0x006D4BD9: mov eax, dword ptr [0x7cc41c] */
    esi = MEM32(eax); /* 0x006D4BDE: mov esi, dword ptr [eax] */
    edi = MEM32(eax + 0x4); /* 0x006D4BE0: mov edi, dword ptr [eax + 4] */
L_006D4BE3:
    eax = MEM32(ebp + 0x8); /* 0x006D4BE3: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x4) = edi; /* 0x006D4BE6: mov dword ptr [eax + 4], edi */
    edi = POP32_VAL(esp); /* 0x006D4BE9: pop edi */
    MEM32(eax) = esi; /* 0x006D4BEA: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x006D4BEC: pop esi */
    MEM32(eax + 0x8) = 0; /* 0x006D4BED: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x006D4BF4: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x006D4BFB: mov dword ptr [eax + 0x10], 0 */
    ebx = POP32_VAL(esp); /* 0x006D4C02: pop ebx */
    esp = ebp; /* 0x006D4C03: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D4C05: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x006D4C06: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_006D4C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D4C10u);

L_006D4C10:
    PUSH32(esp, ebp); /* 0x006D4C10: push ebp */
    ebp = esp; /* 0x006D4C11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006D4C13: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x006D4C16: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D4C19: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x006D4C1A: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x006D4C1D: push esi */
    esi = MEM32(ebp + 0x14); /* 0x006D4C1E: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0xC); /* 0x006D4C21: add esi, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x006D4C24: push edi */
    { uint32_t _aa = ebx, _ab = MEM32(ebp + 0x10), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D4C25: adc ebx, dword ptr [ebp + 0x10] */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = ecx; /* 0x006D4C28: mov edi, ecx */
    eax = MEM32(edi + 0x20); /* 0x006D4C2A: mov eax, dword ptr [edi + 0x20] */
    eax = MEM32(eax); /* 0x006D4C2D: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x006D4C2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4C3B; /* 0x006D4C31: je 0x6d4c3b */
L_006D4C33:
    /* cmp MEM32(edi + 0x38), eax */ /* 0x006D4C33: cmp dword ptr [edi + 0x38], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D4C3B; /* 0x006D4C36: jae 0x6d4c3b */
L_006D4C38:
    MEM32(edi + 0x38) = eax; /* 0x006D4C38: mov dword ptr [edi + 0x38], eax */
L_006D4C3B:
    eax = MEM32(0x7CC41C); /* 0x006D4C3B: mov eax, dword ptr [0x7cc41c] */
    ecx = MEM32(eax); /* 0x006D4C40: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x006D4C42: mov eax, dword ptr [eax + 4] */
    MEM32(esp + 0xC) = ecx; /* 0x006D4C45: mov dword ptr [esp + 0xc], ecx */
    MEM32(esp + 0x10) = eax; /* 0x006D4C49: mov dword ptr [esp + 0x10], eax */
    /* cmp esi, ecx */ /* 0x006D4C4D: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D4C59; /* 0x006D4C4F: jne 0x6d4c59 */
L_006D4C51:
    /* cmp ebx, eax */ /* 0x006D4C51: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D4D3F; /* 0x006D4C53: je 0x6d4d3f */
L_006D4C59:
    edx = MEM32(ebp + 0x24); /* 0x006D4C59: mov edx, dword ptr [ebp + 0x24] */
    /* test LO8(edx), 1 */ /* 0x006D4C5C: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4CEA; /* 0x006D4C5F: je 0x6d4cea */
L_006D4C65:
    eax = MEM32(edi + 0x1C); /* 0x006D4C65: mov eax, dword ptr [edi + 0x1c] */
    eax = MEM32(eax); /* 0x006D4C68: mov eax, dword ptr [eax] */
    MEM32(esp + 0x14) = eax; /* 0x006D4C6A: mov dword ptr [esp + 0x14], eax */
    /* test eax, eax */ /* 0x006D4C6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4CE6; /* 0x006D4C70: je 0x6d4ce6 */
L_006D4C72:
    /* test ebx, ebx */ /* 0x006D4C72: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D4CE0; /* 0x006D4C74: jl 0x6d4ce0 */
L_006D4C76:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D4C7C; /* 0x006D4C76: jg 0x6d4c7c */
L_006D4C78:
    /* test esi, esi */ /* 0x006D4C78: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (0) goto L_006D4CE0; /* 0x006D4C7A: jb 0x6d4ce0 */
L_006D4C7C:
    eax = MEM32(edi + 0xC); /* 0x006D4C7C: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(eax); /* 0x006D4C7F: mov ecx, dword ptr [eax] */
    eax = MEM32(edi + 0x38); /* 0x006D4C81: mov eax, dword ptr [edi + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006D4C84: sub eax, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D4C86: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006D4C88: cdq  */
    /* cmp ebx, edx */ /* 0x006D4C89: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_006D4CDC; /* 0x006D4C8B: jg 0x6d4cdc */
L_006D4C8D:
    if (CMP_L(_flag_a, _flag_b)) goto L_006D4C93; /* 0x006D4C8D: jl 0x6d4c93 */
L_006D4C8F:
    /* cmp esi, eax */ /* 0x006D4C8F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D4CDC; /* 0x006D4C91: ja 0x6d4cdc */
L_006D4C93:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esp + 0x14); /* 0x006D4C93: sub ecx, dword ptr [esp + 0x14] */
    _flag_k = FK_CMP;
    eax = MEM32(edi + 0x2C); /* 0x006D4C97: mov eax, dword ptr [edi + 0x2c] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006D4C9A: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x006D4C9C: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(esp + 0x14) = ecx; /* 0x006D4C9E: mov dword ptr [esp + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - ecx; /* 0x006D4CA2: sub dword ptr [eax], ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(edi + 0x1C); /* 0x006D4CA4: mov ecx, dword ptr [edi + 0x1c] */
    eax = MEM32(esp + 0x14); /* 0x006D4CA7: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006D4CAB: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x006D4CAD: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    /* test MEM8(ebp + 0x24), 2 */ /* 0x006D4CAF: test byte ptr [ebp + 0x24], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x24)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4D3F; /* 0x006D4CB3: je 0x6d4d3f */
L_006D4CB9:
    edx = MEM32(edi + 0x20); /* 0x006D4CB9: mov edx, dword ptr [edi + 0x20] */
    ecx = MEM32(edx); /* 0x006D4CBC: mov ecx, dword ptr [edx] */
    /* test ecx, ecx */ /* 0x006D4CBE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4D3F; /* 0x006D4CC0: je 0x6d4d3f */
L_006D4CC2:
    eax = MEM32(edi + 0x30); /* 0x006D4CC2: mov eax, dword ptr [edi + 0x30] */
    eax = MEM32(eax); /* 0x006D4CC5: mov eax, dword ptr [eax] */
    ecx = ecx + eax * 2; /* 0x006D4CC7: lea ecx, [ecx + eax*2] */
    eax = MEM32(edi + 0x1C); /* 0x006D4CCA: mov eax, dword ptr [edi + 0x1c] */
    eax = MEM32(eax); /* 0x006D4CCD: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x006D4CCF: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(edx) = eax; /* 0x006D4CD1: mov dword ptr [edx], eax */
    eax = MEM32(edi + 0x30); /* 0x006D4CD3: mov eax, dword ptr [edi + 0x30] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006D4CD6: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM32(eax) = ecx; /* 0x006D4CD8: mov dword ptr [eax], ecx */
    goto L_006D4D3F; /* 0x006D4CDA: jmp 0x6d4d3f */
L_006D4CDC:
    ecx = MEM32(esp + 0xC); /* 0x006D4CDC: mov ecx, dword ptr [esp + 0xc] */
L_006D4CE0:
    ebx = MEM32(esp + 0x10); /* 0x006D4CE0: mov ebx, dword ptr [esp + 0x10] */
    goto L_006D4D3D; /* 0x006D4CE4: jmp 0x6d4d3d */
L_006D4CE6:
    eax = MEM32(esp + 0x10); /* 0x006D4CE6: mov eax, dword ptr [esp + 0x10] */
L_006D4CEA:
    /* test LO8(edx), 2 */ /* 0x006D4CEA: test dl, 2 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4D3B; /* 0x006D4CED: je 0x6d4d3b */
L_006D4CEF:
    edx = MEM32(edi + 0x20); /* 0x006D4CEF: mov edx, dword ptr [edi + 0x20] */
    edx = MEM32(edx); /* 0x006D4CF2: mov edx, dword ptr [edx] */
    MEM32(esp + 0x14) = edx; /* 0x006D4CF4: mov dword ptr [esp + 0x14], edx */
    /* test edx, edx */ /* 0x006D4CF8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4D3B; /* 0x006D4CFA: je 0x6d4d3b */
L_006D4CFC:
    /* test ebx, ebx */ /* 0x006D4CFC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D4CE0; /* 0x006D4CFE: jl 0x6d4ce0 */
L_006D4D00:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D4D06; /* 0x006D4D00: jg 0x6d4d06 */
L_006D4D02:
    /* test esi, esi */ /* 0x006D4D02: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (0) goto L_006D4CE0; /* 0x006D4D04: jb 0x6d4ce0 */
L_006D4D06:
    eax = MEM32(edi + 0xC); /* 0x006D4D06: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(eax); /* 0x006D4D09: mov ecx, dword ptr [eax] */
    eax = MEM32(edi + 0x38); /* 0x006D4D0B: mov eax, dword ptr [edi + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006D4D0E: sub eax, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D4D10: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x006D4D12: cdq  */
    /* cmp ebx, edx */ /* 0x006D4D13: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_006D4CDC; /* 0x006D4D15: jg 0x6d4cdc */
L_006D4D17:
    if (CMP_L(_flag_a, _flag_b)) goto L_006D4D1D; /* 0x006D4D17: jl 0x6d4d1d */
L_006D4D19:
    /* cmp esi, eax */ /* 0x006D4D19: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_006D4CDC; /* 0x006D4D1B: ja 0x6d4cdc */
L_006D4D1D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esp + 0x14); /* 0x006D4D1D: sub ecx, dword ptr [esp + 0x14] */
    _flag_k = FK_CMP;
    eax = MEM32(edi + 0x30); /* 0x006D4D21: mov eax, dword ptr [edi + 0x30] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006D4D24: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x006D4D26: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(esp + 0x14) = ecx; /* 0x006D4D28: mov dword ptr [esp + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - ecx; /* 0x006D4D2C: sub dword ptr [eax], ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(edi + 0x20); /* 0x006D4D2E: mov ecx, dword ptr [edi + 0x20] */
    eax = MEM32(esp + 0x14); /* 0x006D4D31: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006D4D35: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x006D4D37: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    goto L_006D4D3F; /* 0x006D4D39: jmp 0x6d4d3f */
L_006D4D3B:
    ebx = eax; /* 0x006D4D3B: mov ebx, eax */
L_006D4D3D:
    esi = ecx; /* 0x006D4D3D: mov esi, ecx */
L_006D4D3F:
    eax = MEM32(ebp + 0x8); /* 0x006D4D3F: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x006D4D42: pop edi */
    MEM32(eax) = esi; /* 0x006D4D43: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x006D4D45: pop esi */
    MEM32(eax + 0x4) = ebx; /* 0x006D4D46: mov dword ptr [eax + 4], ebx */
    MEM32(eax + 0x8) = 0; /* 0x006D4D49: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x006D4D50: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x006D4D57: mov dword ptr [eax + 0x10], 0 */
    ebx = POP32_VAL(esp); /* 0x006D4D5E: pop ebx */
    esp = ebp; /* 0x006D4D5F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D4D61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x006D4D62: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_006D4DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D4DE0u);

L_006D4DE0:
    PUSH32(esp, ebp); /* 0x006D4DE0: push ebp */
    ebp = esp; /* 0x006D4DE1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D4DE3: push esi */
    esi = ecx; /* 0x006D4DE4: mov esi, ecx */
    MEM32(esi) = 0x008018E0u; /* 0x006D4DE6: mov dword ptr [esi], 0x8018e0 */
    RECOMP_CALL(sub_0044E5B0); /* 0x006D4DEC: call 0x44e5b0 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x006D4DF1: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x7CC3B8)); /* 0x006D4DF3: call dword ptr [0x7cc3b8] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006D4DF9: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4E09; /* 0x006D4DFD: je 0x6d4e09 */
L_006D4DFF:
    PUSH32(esp, esi); /* 0x006D4DFF: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D4E00: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D4E06: add esp, 4 */
    _flag_k = FK_ADD;
L_006D4E09:
    eax = esi; /* 0x006D4E09: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006D4E0B: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D4E0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D4E0D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D4E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D4E10u);

L_006D4E10:
    edx = MEM32(ecx + 0x8); /* 0x006D4E10: mov edx, dword ptr [ecx + 8] */
    eax = edx; /* 0x006D4E13: mov eax, edx */
    PUSH32(esp, esi); /* 0x006D4E15: push esi */
    esi = MEM32(ecx + 0x4); /* 0x006D4E16: mov esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x006D4E19: sub eax, esi */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x006D4E1B: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    /* cmp eax, 1 */ /* 0x006D4E1E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D4E71; /* 0x006D4E21: jae 0x6d4e71 */
L_006D4E23:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x006D4E23: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x006D4E25: push edi */
    edi = 0x1FFFFFFFu; /* 0x006D4E26: mov edi, 0x1fffffff */
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x006D4E2B: sar esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 3u);
    eax = edi; /* 0x006D4E2E: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x006D4E30: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x006D4E32: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D4E42; /* 0x006D4E35: jae 0x6d4e42 */
L_006D4E37:
    PUSH32(esp, 0x007DFAB0u); /* 0x006D4E37: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x006D4E3C: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_006D4E42:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx); /* 0x006D4E42: sub edx, dword ptr [ecx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x006D4E44: inc esi */
    _flag_k = FK_INC;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x006D4E45: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x006D4E48: mov eax, edx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x006D4E4A: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x006D4E4A: shr eax, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x006D4E4C: sub edi, eax */
    _flag_k = FK_CMP;
    /* cmp edi, edx */ /* 0x006D4E4E: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x006D4E50: pop edi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D4E64; /* 0x006D4E51: jae 0x6d4e64 */
L_006D4E53:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D4E53: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, esi */ /* 0x006D4E55: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edx = esi; } /* 0x006D4E57: cmovb edx, esi */
    PUSH32(esp, edx); /* 0x006D4E5A: push edx */
    RECOMP_CALL(sub_006D50F0); /* 0x006D4E5B: call 0x6d50f0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x006D4E60: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D4E61: ret 4 */
L_006D4E64:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x006D4E64: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x006D4E66: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edx = esi; } /* 0x006D4E68: cmovb edx, esi */
    PUSH32(esp, edx); /* 0x006D4E6B: push edx */
    RECOMP_CALL(sub_006D50F0); /* 0x006D4E6C: call 0x6d50f0 */
    RECOMP_FLAGS_IN();
L_006D4E71:
    esi = POP32_VAL(esp); /* 0x006D4E71: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D4E72: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D4E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D4E80u);

L_006D4E80:
    PUSH32(esp, ebp); /* 0x006D4E80: push ebp */
    ebp = esp; /* 0x006D4E81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D4E83: push -1 */
    PUSH32(esp, 0x007C6A61u); /* 0x006D4E85: push 0x7c6a61 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D4E8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D4E90: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x006D4E91: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006D4E94: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D4E99: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x006D4E9B: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, esi); /* 0x006D4E9E: push esi */
    PUSH32(esp, eax); /* 0x006D4E9F: push eax */
    eax = ebp + (-0xC); /* 0x006D4EA0: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D4EA3: mov dword ptr fs:[0], eax */
    edx = ecx; /* 0x006D4EA9: mov edx, ecx */
    esi = MEM32(ebp + 0x8); /* 0x006D4EAB: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x30)) = 0; /* 0x006D4EAE: mov dword ptr [ebp - 0x30], 0 */
    ecx = MEM32(edx + 0x3C); /* 0x006D4EB5: mov ecx, dword ptr [edx + 0x3c] */
    MEM32(ebp + (-0x34)) = esi; /* 0x006D4EB8: mov dword ptr [ebp - 0x34], esi */
    /* test LO8(ecx), 2 */ /* 0x006D4EBB: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D4F30; /* 0x006D4EBE: jne 0x6d4f30 */
L_006D4EC0:
    eax = MEM32(edx + 0x20); /* 0x006D4EC0: mov eax, dword ptr [edx + 0x20] */
    eax = MEM32(eax); /* 0x006D4EC3: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x006D4EC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4F30; /* 0x006D4EC7: je 0x6d4f30 */
L_006D4EC9:
    ecx = MEM32(edx + 0x38); /* 0x006D4EC9: mov ecx, dword ptr [edx + 0x38] */
    /* cmp ecx, eax */ /* 0x006D4ECC: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { ecx = eax; } /* 0x006D4ECE: cmovb ecx, eax */
    eax = MEM32(edx + 0x10); /* 0x006D4ED1: mov eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D4ED4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax); /* 0x006D4ED6: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x006D4ED8: sub ecx, eax */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006D4EDA: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, ecx); /* 0x006D4EDC: push ecx */
    MEM32(ebp + (-0x1C)) = 0; /* 0x006D4EDD: mov dword ptr [ebp - 0x1c], 0 */
    ecx = ebp + (-0x2C); /* 0x006D4EE4: lea ecx, [ebp - 0x2c] */
    MEM32(ebp + (-0x18)) = 0; /* 0x006D4EE7: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, eax); /* 0x006D4EEE: push eax */
    MEM32(ebp + (-0x18)) = 7; /* 0x006D4EEF: mov dword ptr [ebp - 0x18], 7 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x006D4EF6: mov dword ptr [ebp - 0x1c], 0 */
    MEM16(ebp + (-0x2C)) = (uint16_t)(LO16(edx)); /* 0x006D4EFD: mov word ptr [ebp - 0x2c], dx */
    RECOMP_CALL(sub_005C9540); /* 0x006D4F01: call 0x5c9540 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x006D4F06: mov dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D4F0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 7; /* 0x006D4F0F: mov dword ptr [esi + 0x14], 7 */
    ecx = esi; /* 0x006D4F16: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x006D4F18: mov dword ptr [esi + 0x10], 0 */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x006D4F1F: mov word ptr [esi], ax */
    eax = ebp + (-0x2C); /* 0x006D4F22: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x006D4F25: push eax */
    RECOMP_CALL(sub_005C8F60); /* 0x006D4F26: call 0x5c8f60 */
    RECOMP_FLAGS_IN();
    goto L_006D4FCB; /* 0x006D4F2B: jmp 0x6d4fcb */
L_006D4F30:
    /* test LO8(ecx), 4 */ /* 0x006D4F30: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D4F84; /* 0x006D4F33: jne 0x6d4f84 */
L_006D4F35:
    eax = MEM32(edx + 0x1C); /* 0x006D4F35: mov eax, dword ptr [edx + 0x1c] */
    ecx = MEM32(eax); /* 0x006D4F38: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x006D4F3A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4F84; /* 0x006D4F3C: je 0x6d4f84 */
L_006D4F3E:
    eax = MEM32(edx + 0x2C); /* 0x006D4F3E: mov eax, dword ptr [edx + 0x2c] */
    eax = MEM32(eax); /* 0x006D4F41: mov eax, dword ptr [eax] */
    ecx = ecx + eax * 2; /* 0x006D4F43: lea ecx, [ecx + eax*2] */
    eax = MEM32(edx + 0xC); /* 0x006D4F46: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D4F49: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax); /* 0x006D4F4B: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x006D4F4D: sub ecx, eax */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x006D4F4F: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, ecx); /* 0x006D4F51: push ecx */
    MEM32(ebp + (-0x1C)) = 0; /* 0x006D4F52: mov dword ptr [ebp - 0x1c], 0 */
    ecx = ebp + (-0x2C); /* 0x006D4F59: lea ecx, [ebp - 0x2c] */
    MEM32(ebp + (-0x18)) = 0; /* 0x006D4F5C: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, eax); /* 0x006D4F63: push eax */
    MEM32(ebp + (-0x18)) = 7; /* 0x006D4F64: mov dword ptr [ebp - 0x18], 7 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x006D4F6B: mov dword ptr [ebp - 0x1c], 0 */
    MEM16(ebp + (-0x2C)) = (uint16_t)(LO16(edx)); /* 0x006D4F72: mov word ptr [ebp - 0x2c], dx */
    RECOMP_CALL(sub_005C9540); /* 0x006D4F76: call 0x5c9540 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x006D4F7B: mov dword ptr [ebp - 4], 2 */
    goto L_006D4FAD; /* 0x006D4F82: jmp 0x6d4fad */
L_006D4F84:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D4F84: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = 0; /* 0x006D4F86: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x006D4F8D: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x18)) = 7; /* 0x006D4F94: mov dword ptr [ebp - 0x18], 7 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x006D4F9B: mov dword ptr [ebp - 0x1c], 0 */
    MEM16(ebp + (-0x2C)) = (uint16_t)(LO16(eax)); /* 0x006D4FA2: mov word ptr [ebp - 0x2c], ax */
    MEM32(ebp + (-0x4)) = 3; /* 0x006D4FA6: mov dword ptr [ebp - 4], 3 */
L_006D4FAD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D4FAD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 7; /* 0x006D4FAF: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = 0; /* 0x006D4FB6: mov dword ptr [esi + 0x10], 0 */
    ecx = esi; /* 0x006D4FBD: mov ecx, esi */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x006D4FBF: mov word ptr [esi], ax */
    eax = ebp + (-0x2C); /* 0x006D4FC2: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x006D4FC5: push eax */
    RECOMP_CALL(sub_005C8F60); /* 0x006D4FC6: call 0x5c8f60 */
    RECOMP_FLAGS_IN();
L_006D4FCB:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x006D4FCB: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x18)), 8 */ /* 0x006D4FCF: cmp dword ptr [ebp - 0x18], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x30)) = 1; /* 0x006D4FD3: mov dword ptr [ebp - 0x30], 1 */
    if (CMP_B(_flag_a, _flag_b)) goto L_006D4FE8; /* 0x006D4FDA: jb 0x6d4fe8 */
L_006D4FDC:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x006D4FDC: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D4FDF: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D4FE5: add esp, 4 */
    _flag_k = FK_ADD;
L_006D4FE8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D4FE8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = 7; /* 0x006D4FEA: mov dword ptr [ebp - 0x18], 7 */
    MEM32(ebp + (-0x1C)) = eax; /* 0x006D4FF1: mov dword ptr [ebp - 0x1c], eax */
    MEM16(ebp + (-0x2C)) = (uint16_t)(LO16(eax)); /* 0x006D4FF4: mov word ptr [ebp - 0x2c], ax */
    eax = esi; /* 0x006D4FF8: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D4FFA: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D4FFD: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D5004: pop ecx */
    esi = POP32_VAL(esp); /* 0x006D5005: pop esi */
    ecx = MEM32(ebp + (-0x14)); /* 0x006D5006: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006D5009: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006D500B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006D5010: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D5012: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D5013: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D5020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5020u);

L_006D5020:
    PUSH32(esp, ebp); /* 0x006D5020: push ebp */
    ebp = esp; /* 0x006D5021: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D5023: push -1 */
    PUSH32(esp, 0x007ADF58u); /* 0x006D5025: push 0x7adf58 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D502A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D5030: push eax */
    PUSH32(esp, ecx); /* 0x006D5031: push ecx */
    PUSH32(esp, esi); /* 0x006D5032: push esi */
    PUSH32(esp, edi); /* 0x006D5033: push edi */
    eax = MEM32(0x855000); /* 0x006D5034: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D5039: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D503B: push eax */
    eax = ebp + (-0xC); /* 0x006D503C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D503F: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x006D5045: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x006D5047: mov dword ptr [ebp - 0x10], edi */
    esi = MEM32(ebp + 0x8); /* 0x006D504A: mov esi, dword ptr [ebp + 8] */
    MEM32(edi) = esi; /* 0x006D504D: mov dword ptr [edi], esi */
    eax = MEM32(esi); /* 0x006D504F: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x006D5051: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x006D5054: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x006D5058: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5061; /* 0x006D505A: je 0x6d5061 */
L_006D505C:
    eax = MEM32(ecx); /* 0x006D505C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006D505E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_006D5061:
    MEM32(ebp + (-0x4)) = 0; /* 0x006D5061: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(esi); /* 0x006D5068: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x006D506A: mov eax, dword ptr [eax + 4] */
    /* cmp MEM32(eax + esi + 0xC), 0 */ /* 0x006D506D: cmp dword ptr [eax + esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D5086; /* 0x006D5072: jne 0x6d5086 */
L_006D5074:
    ecx = MEM32(eax + esi + 0x3C); /* 0x006D5074: mov ecx, dword ptr [eax + esi + 0x3c] */
    /* test ecx, ecx */ /* 0x006D5078: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5086; /* 0x006D507A: je 0x6d5086 */
L_006D507C:
    /* cmp ecx, esi */ /* 0x006D507C: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D5086; /* 0x006D507E: je 0x6d5086 */
L_006D5080:
    RECOMP_ICALL(MEM32(0x7CC228)); /* 0x006D5080: call dword ptr [0x7cc228] */
    RECOMP_FLAGS_IN();
L_006D5086:
    eax = MEM32(esi); /* 0x006D5086: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x006D5088: mov eax, dword ptr [eax + 4] */
    /* cmp MEM32(eax + esi + 0xC), 0 */ /* 0x006D508B: cmp dword ptr [eax + esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006D5090: sete al */
    MEM8(edi + 0x4) = (uint8_t)(LO8(eax)); /* 0x006D5093: mov byte ptr [edi + 4], al */
    eax = edi; /* 0x006D5096: mov eax, edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006D5098: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D509F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D50A2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D50A9: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D50AA: pop edi */
    esi = POP32_VAL(esp); /* 0x006D50AB: pop esi */
    esp = ebp; /* 0x006D50AC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D50AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D50AF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D50F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D50F0u);

L_006D50F0:
    PUSH32(esp, ebp); /* 0x006D50F0: push ebp */
    ebp = esp; /* 0x006D50F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D50F3: push -1 */
    PUSH32(esp, 0x007C6A90u); /* 0x006D50F5: push 0x7c6a90 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D50FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D5100: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006D5101: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D5104: push ebx */
    PUSH32(esp, esi); /* 0x006D5105: push esi */
    PUSH32(esp, edi); /* 0x006D5106: push edi */
    eax = MEM32(0x855000); /* 0x006D5107: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D510C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D510E: push eax */
    eax = ebp + (-0xC); /* 0x006D510F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D5112: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006D5118: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x006D511B: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D511D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x006D511F: mov dword ptr [ebp - 0x14], esi */
    ebx = MEM32(ebp + 0x8); /* 0x006D5122: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x006D5125: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5151; /* 0x006D5127: je 0x6d5151 */
L_006D5129:
    /* cmp ebx, 0x1FFFFFFFu */ /* 0x006D5129: cmp ebx, 0x1fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D514B; /* 0x006D512F: ja 0x6d514b */
L_006D5131:
    eax = ebx * 8; /* 0x006D5131: lea eax, [ebx*8] */
    PUSH32(esp, eax); /* 0x006D5138: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x006D5139: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D513F: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x006D5142: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x006D5144: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x006D5147: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D5151; /* 0x006D5149: jne 0x6d5151 */
L_006D514B:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x006D514B: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_006D5151:
    MEM32(ebp + (-0x4)) = 0; /* 0x006D5151: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D5158: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006D515B: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006D515E: push esi */
    edx = MEM32(edi + 0x4); /* 0x006D515F: mov edx, dword ptr [edi + 4] */
    ecx = MEM32(edi); /* 0x006D5162: mov ecx, dword ptr [edi] */
    RECOMP_CALL(sub_006D5720); /* 0x006D5164: call 0x6d5720 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x006D5169: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006D516C: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(edi); /* 0x006D5173: mov ecx, dword ptr [edi] */
    eax = MEM32(edi + 0x4); /* 0x006D5175: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x006D5178: sub eax, ecx */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x006D517A: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    MEM32(ebp + 0x8) = eax; /* 0x006D517D: mov dword ptr [ebp + 8], eax */
    /* test ecx, ecx */ /* 0x006D5180: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D518E; /* 0x006D5182: je 0x6d518e */
L_006D5184:
    PUSH32(esp, ecx); /* 0x006D5184: push ecx */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D5185: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D518B: add esp, 4 */
    _flag_k = FK_ADD;
L_006D518E:
    eax = esi + ebx * 8; /* 0x006D518E: lea eax, [esi + ebx*8] */
    MEM32(edi + 0x8) = eax; /* 0x006D5191: mov dword ptr [edi + 8], eax */
    eax = MEM32(ebp + 0x8); /* 0x006D5194: mov eax, dword ptr [ebp + 8] */
    eax = esi + eax * 8; /* 0x006D5197: lea eax, [esi + eax*8] */
    MEM32(edi + 0x4) = eax; /* 0x006D519A: mov dword ptr [edi + 4], eax */
    MEM32(edi) = esi; /* 0x006D519D: mov dword ptr [edi], esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D519F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D51A2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D51A9: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D51AA: pop edi */
    esi = POP32_VAL(esp); /* 0x006D51AB: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D51AC: pop ebx */
    esp = ebp; /* 0x006D51AD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D51AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D51B0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D51B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D51B3u);

L_006D51B3:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x006D51B3: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D51B6: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D51BC: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x006D51BF: push 0 */
    PUSH32(esp, 0); /* 0x006D51C1: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x006D51C3: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006D51C8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D51D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D51D0u);

L_006D51D0:
    PUSH32(esp, ebp); /* 0x006D51D0: push ebp */
    ebp = esp; /* 0x006D51D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D51D3: push -1 */
    PUSH32(esp, 0x0079C6F9u); /* 0x006D51D5: push 0x79c6f9 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D51DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D51E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x006D51E1: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D51E4: push ebx */
    PUSH32(esp, esi); /* 0x006D51E5: push esi */
    PUSH32(esp, edi); /* 0x006D51E6: push edi */
    eax = MEM32(0x855000); /* 0x006D51E7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D51EC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D51EE: push eax */
    eax = ebp + (-0xC); /* 0x006D51EF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D51F2: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x006D51F8: mov ebx, ecx */
    PUSH32(esp, 0); /* 0x006D51FA: push 0 */
    ecx = ebp + (-0x14); /* 0x006D51FC: lea ecx, [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC354)); /* 0x006D51FF: call dword ptr [0x7cc354] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x006D5205: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(0x927C50); /* 0x006D520C: mov eax, dword ptr [0x927c50] */
    ecx = MEM32(0x7CC234); /* 0x006D5211: mov ecx, dword ptr [0x7cc234] */
    MEM32(ebp + (-0x10)) = eax; /* 0x006D5217: mov dword ptr [ebp - 0x10], eax */
    RECOMP_ICALL(MEM32(0x7CC30C)); /* 0x006D521A: call dword ptr [0x7cc30c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x006D5220: mov edi, eax */
    eax = MEM32(ebx); /* 0x006D5222: mov eax, dword ptr [ebx] */
    /* cmp edi, MEM32(eax + 0xC) */ /* 0x006D5224: cmp edi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D5235; /* 0x006D5227: jae 0x6d5235 */
L_006D5229:
    ecx = MEM32(eax + 0x8); /* 0x006D5229: mov ecx, dword ptr [eax + 8] */
    esi = MEM32(ecx + edi * 4); /* 0x006D522C: mov esi, dword ptr [ecx + edi*4] */
    /* test esi, esi */ /* 0x006D522F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D52A1; /* 0x006D5231: jne 0x6d52a1 */
L_006D5233:
    goto L_006D5237; /* 0x006D5233: jmp 0x6d5237 */
L_006D5235:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x006D5235: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_006D5237:
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x006D5237: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D524E; /* 0x006D523B: je 0x6d524e */
L_006D523D:
    RECOMP_ICALL(MEM32(0x7CC350)); /* 0x006D523D: call dword ptr [0x7cc350] */
    RECOMP_FLAGS_IN();
    /* cmp edi, MEM32(eax + 0xC) */ /* 0x006D5243: cmp edi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006D5252; /* 0x006D5246: jae 0x6d5252 */
L_006D5248:
    eax = MEM32(eax + 0x8); /* 0x006D5248: mov eax, dword ptr [eax + 8] */
    esi = MEM32(eax + edi * 4); /* 0x006D524B: mov esi, dword ptr [eax + edi*4] */
L_006D524E:
    /* test esi, esi */ /* 0x006D524E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D52A1; /* 0x006D5250: jne 0x6d52a1 */
L_006D5252:
    esi = MEM32(ebp + (-0x10)); /* 0x006D5252: mov esi, dword ptr [ebp - 0x10] */
    /* test esi, esi */ /* 0x006D5255: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D52A1; /* 0x006D5257: jne 0x6d52a1 */
L_006D5259:
    eax = ebp + (-0x10); /* 0x006D5259: lea eax, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x006D525C: push ebx */
    PUSH32(esp, eax); /* 0x006D525D: push eax */
    RECOMP_ICALL(MEM32(0x7CC3BC)); /* 0x006D525E: call dword ptr [0x7cc3bc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x006D5264: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x006D5267: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D5288; /* 0x006D526A: jne 0x6d5288 */
L_006D526C:
    PUSH32(esp, 0x007DEB94u); /* 0x006D526C: push 0x7deb94 */
    ecx = ebp + (-0x20); /* 0x006D5271: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x7CC6C0)); /* 0x006D5274: call dword ptr [0x7cc6c0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0084FEACu); /* 0x006D527A: push 0x84feac */
    eax = ebp + (-0x20); /* 0x006D527F: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x006D5282: push eax */
    RECOMP_CALL(sub_00780016); /* 0x006D5283: call 0x780016 */
    RECOMP_FLAGS_IN();
L_006D5288:
    esi = MEM32(ebp + (-0x10)); /* 0x006D5288: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x006D528B: mov ecx, esi */
    MEM32(0x927C50) = esi; /* 0x006D528D: mov dword ptr [0x927c50], esi */
    edx = MEM32(esi); /* 0x006D5293: mov edx, dword ptr [esi] */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x006D5295: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x006D5298: push esi */
    RECOMP_CALL(sub_0077F457); /* 0x006D5299: call 0x77f457 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D529E: add esp, 4 */
    _flag_k = FK_ADD;
L_006D52A1:
    ecx = ebp + (-0x14); /* 0x006D52A1: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006D52A4: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_ICALL(MEM32(0x7CC358)); /* 0x006D52AB: call dword ptr [0x7cc358] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006D52B1: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D52B3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D52B6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D52BD: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D52BE: pop edi */
    esi = POP32_VAL(esp); /* 0x006D52BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D52C0: pop ebx */
    esp = ebp; /* 0x006D52C1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D52C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D52C4: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D52D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D52D0u);

L_006D52D0:
    PUSH32(esp, ebp); /* 0x006D52D0: push ebp */
    ebp = esp; /* 0x006D52D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D52D3: push -1 */
    PUSH32(esp, 0x007AD9F9u); /* 0x006D52D5: push 0x7ad9f9 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D52DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D52E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006D52E1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D52E4: push ebx */
    PUSH32(esp, esi); /* 0x006D52E5: push esi */
    PUSH32(esp, edi); /* 0x006D52E6: push edi */
    eax = MEM32(0x855000); /* 0x006D52E7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D52EC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D52EE: push eax */
    eax = ebp + (-0xC); /* 0x006D52EF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D52F2: mov dword ptr fs:[0], eax */
    ebx = edx; /* 0x006D52F8: mov ebx, edx */
    esi = ecx; /* 0x006D52FA: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x006D52FC: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x006D52FF: mov dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D5306: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = 0; /* 0x006D5308: mov dword ptr [ebp - 0x10], 0 */
    MEM32(esi + 0x14) = 7; /* 0x006D530F: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = 0; /* 0x006D5316: mov dword ptr [esi + 0x10], 0 */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x006D531D: mov word ptr [esi], ax */
    MEM32(ebp + (-0x4)) = eax; /* 0x006D5320: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0x10); /* 0x006D5323: mov eax, dword ptr [ebx + 0x10] */
    edi = MEM32(esi + 0x10); /* 0x006D5326: mov edi, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x006D5329: add eax, 7 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = 1; /* 0x006D532C: mov dword ptr [ebp - 0x10], 1 */
    /* cmp edi, eax */ /* 0x006D5333: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D535D; /* 0x006D5335: ja 0x6d535d */
L_006D5337:
    /* cmp MEM32(esi + 0x14), eax */ /* 0x006D5337: cmp dword ptr [esi + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D535D; /* 0x006D533A: je 0x6d535d */
L_006D533C:
    PUSH32(esp, 1); /* 0x006D533C: push 1 */
    PUSH32(esp, eax); /* 0x006D533E: push eax */
    RECOMP_CALL(sub_005C9730); /* 0x006D533F: call 0x5c9730 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006D5344: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D535D; /* 0x006D5346: je 0x6d535d */
L_006D5348:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x006D5348: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = edi; /* 0x006D534C: mov dword ptr [esi + 0x10], edi */
    if (CMP_B(_flag_a, _flag_b)) goto L_006D5355; /* 0x006D534F: jb 0x6d5355 */
L_006D5351:
    eax = MEM32(esi); /* 0x006D5351: mov eax, dword ptr [esi] */
    goto L_006D5357; /* 0x006D5353: jmp 0x6d5357 */
L_006D5355:
    eax = esi; /* 0x006D5355: mov eax, esi */
L_006D5357:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D5357: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x006D5359: mov word ptr [eax + edi*2], cx */
L_006D535D:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D535D: push -1 */
    PUSH32(esp, 0); /* 0x006D535F: push 0 */
    PUSH32(esp, ebx); /* 0x006D5361: push ebx */
    ecx = esi; /* 0x006D5362: mov ecx, esi */
    RECOMP_CALL(sub_005C9B80); /* 0x006D5364: call 0x5c9b80 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x006D5369: push 7 */
    PUSH32(esp, 0x00801668u); /* 0x006D536B: push 0x801668 */
    ecx = esi; /* 0x006D5370: mov ecx, esi */
    RECOMP_CALL(sub_005CA6C0); /* 0x006D5372: call 0x5ca6c0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x006D5377: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D5379: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D537C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D5383: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D5384: pop edi */
    esi = POP32_VAL(esp); /* 0x006D5385: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D5386: pop ebx */
    esp = ebp; /* 0x006D5387: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D5389: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D538A: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D5390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5390u);
    RECOMP_EH_ENTER();

L_006D5390:
    PUSH32(esp, ebp); /* 0x006D5390: push ebp */
    ebp = esp; /* 0x006D5391: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D5393: push -1 */
    PUSH32(esp, 0x007C6AC0u); /* 0x006D5395: push 0x7c6ac0 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D539A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D53A0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x006D53A1: sub esp, 0x44 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D53A4: push ebx */
    PUSH32(esp, esi); /* 0x006D53A5: push esi */
    PUSH32(esp, edi); /* 0x006D53A6: push edi */
    eax = MEM32(0x855000); /* 0x006D53A7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D53AC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D53AE: push eax */
    eax = ebp + (-0xC); /* 0x006D53AF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D53B2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006D53B8: mov dword ptr [ebp - 0x10], esp */
    eax = edx; /* 0x006D53BB: mov eax, edx */
    MEM32(ebp + (-0x24)) = eax; /* 0x006D53BD: mov dword ptr [ebp - 0x24], eax */
    edx = ecx; /* 0x006D53C0: mov edx, ecx */
    MEM32(ebp + (-0x14)) = edx; /* 0x006D53C2: mov dword ptr [ebp - 0x14], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006D53C5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = edi; /* 0x006D53C7: mov dword ptr [ebp - 0x18], edi */
    ecx = eax; /* 0x006D53CA: mov ecx, eax */
    esi = ecx + 0x1; /* 0x006D53CC: lea esi, [ecx + 1] */
    /* nop */ /* 0x006D53CF: nop  */
L_006D53D0:
    SET_LO8(eax, MEM8(ecx)); /* 0x006D53D0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006D53D2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006D53D3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D53D0; /* 0x006D53D5: jne 0x6d53d0 */
L_006D53D7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x006D53D7: sub ecx, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x006D53D9: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x20)) = edi; /* 0x006D53DC: mov dword ptr [ebp - 0x20], edi */
    eax = MEM32(edx); /* 0x006D53DF: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x4); /* 0x006D53E1: mov eax, dword ptr [eax + 4] */
    ebx = MEM32(eax + edx + 0x20); /* 0x006D53E4: mov ebx, dword ptr [eax + edx + 0x20] */
    esi = MEM32(eax + edx + 0x24); /* 0x006D53E8: mov esi, dword ptr [eax + edx + 0x24] */
    /* test esi, esi */ /* 0x006D53EC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D5408; /* 0x006D53EE: jl 0x6d5408 */
L_006D53F0:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D53F6; /* 0x006D53F0: jg 0x6d53f6 */
L_006D53F2:
    /* test ebx, ebx */ /* 0x006D53F2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5408; /* 0x006D53F4: je 0x6d5408 */
L_006D53F6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D53F6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, eax */ /* 0x006D53F8: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006D5408; /* 0x006D53FA: jl 0x6d5408 */
L_006D53FC:
    if (CMP_G(_flag_a, _flag_b)) goto L_006D5402; /* 0x006D53FC: jg 0x6d5402 */
L_006D53FE:
    /* cmp ebx, ecx */ /* 0x006D53FE: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006D5408; /* 0x006D5400: jbe 0x6d5408 */
L_006D5402:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x006D5402: sub ebx, ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D5404: sbb esi, eax */
      esi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_006D5416; /* 0x006D5406: jmp 0x6d5416 */
L_006D5408:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006D5408: xorps xmm0, xmm0 */
    MEM64(ebp + (-0x40)) = _xmm[0].u64[0]; /* 0x006D540B: movlpd qword ptr [ebp - 0x40], xmm0 */
    esi = MEM32(ebp + (-0x3C)); /* 0x006D5410: mov esi, dword ptr [ebp - 0x3c] */
    ebx = MEM32(ebp + (-0x40)); /* 0x006D5413: mov ebx, dword ptr [ebp - 0x40] */
L_006D5416:
    MEM32(ebp + (-0x28)) = esi; /* 0x006D5416: mov dword ptr [ebp - 0x28], esi */
    PUSH32(esp, edx); /* 0x006D5419: push edx */
    ecx = ebp + (-0x48); /* 0x006D541A: lea ecx, [ebp - 0x48] */
    RECOMP_CALL(sub_006D5020); /* 0x006D541D: call 0x6d5020 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x006D5422: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM8(ebp + (-0x44)), 0 */ /* 0x006D5429: cmp byte ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x44))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D5439; /* 0x006D542D: jne 0x6d5439 */
L_006D542F:
    edi = 4; /* 0x006D542F: mov edi, 4 */
    goto L_006D55E8; /* 0x006D5434: jmp 0x6d55e8 */
L_006D5439:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006D5439: mov byte ptr [ebp - 4], 1 */
    eax = ebp + (-0x2C); /* 0x006D543D: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x006D5440: push eax */
    edx = MEM32(ebp + (-0x14)); /* 0x006D5441: mov edx, dword ptr [ebp - 0x14] */
    eax = MEM32(edx); /* 0x006D5444: mov eax, dword ptr [edx] */
    ecx = MEM32(eax + 0x4); /* 0x006D5446: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x006D5449: add ecx, edx */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x7CC2C8)); /* 0x006D544B: call dword ptr [0x7cc2c8] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x006D5451: mov byte ptr [ebp - 4], 2 */
    ecx = eax; /* 0x006D5455: mov ecx, eax */
    RECOMP_CALL(sub_006D51D0); /* 0x006D5457: call 0x6d51d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x30)) = eax; /* 0x006D545C: mov dword ptr [ebp - 0x30], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x006D545F: mov byte ptr [ebp - 4], 1 */
    ecx = MEM32(ebp + (-0x2C)); /* 0x006D5463: mov ecx, dword ptr [ebp - 0x2c] */
    /* test ecx, ecx */ /* 0x006D5466: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D547B; /* 0x006D5468: je 0x6d547b */
L_006D546A:
    edx = MEM32(ecx); /* 0x006D546A: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x006D546C: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D546F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D547B; /* 0x006D5471: je 0x6d547b */
L_006D5473:
    edx = MEM32(eax); /* 0x006D5473: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x006D5475: push 1 */
    ecx = eax; /* 0x006D5477: mov ecx, eax */
    RECOMP_ICALL(MEM32(edx)); /* 0x006D5479: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
L_006D547B:
    ecx = MEM32(ebp + (-0x14)); /* 0x006D547B: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x006D547E: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x006D5480: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + ecx + 0x14); /* 0x006D5483: mov eax, dword ptr [eax + ecx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1C0u);
    eax = eax & 0x1C0u; /* 0x006D5487: and eax, 0x1c0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40u */ /* 0x006D548C: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D54CA; /* 0x006D548F: je 0x6d54ca */
L_006D5491:
    /* test esi, esi */ /* 0x006D5491: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D54CA; /* 0x006D5493: jl 0x6d54ca */
L_006D5495:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D549B; /* 0x006D5495: jg 0x6d549b */
L_006D5497:
    /* test ebx, ebx */ /* 0x006D5497: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D54CA; /* 0x006D5499: je 0x6d54ca */
L_006D549B:
    eax = MEM32(ecx); /* 0x006D549B: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x006D549D: mov eax, dword ptr [eax + 4] */
    edx = (uint32_t)MEM16(eax + ecx + 0x40); /* 0x006D54A0: movzx edx, word ptr [eax + ecx + 0x40] */
    PUSH32(esp, edx); /* 0x006D54A5: push edx */
    ecx = MEM32(eax + ecx + 0x38); /* 0x006D54A6: mov ecx, dword ptr [eax + ecx + 0x38] */
    RECOMP_ICALL(MEM32(0x7CC22C)); /* 0x006D54AA: call dword ptr [0x7cc22c] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x006D54B0: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x006D54B3: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x006D54B8: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = MEM32(ebp + (-0x14)); /* 0x006D54BB: mov ecx, dword ptr [ebp - 0x14] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D5549; /* 0x006D54BE: jne 0x6d5549 */
L_006D54C4:
    _flag_a = (uint32_t)((edi | 4)); _flag_b = (uint32_t)((edi | 4));
    edi = edi | 4; /* 0x006D54C4: or edi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = edi; /* 0x006D54C7: mov dword ptr [ebp - 0x18], edi */
L_006D54CA:
    eax = MEM32(ebp + (-0x1C)); /* 0x006D54CA: mov eax, dword ptr [ebp - 0x1c] */
    ecx = ecx; /* 0x006D54CD: lea ecx, [ecx] */
L_006D54D0:
    /* test edi, edi */ /* 0x006D54D0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D5592; /* 0x006D54D2: jne 0x6d5592 */
L_006D54D8:
    /* cmp MEM32(ebp + (-0x20)), edi */ /* 0x006D54D8: cmp dword ptr [ebp - 0x20], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_006D555D; /* 0x006D54DB: jl 0x6d555d */
L_006D54E1:
    if (CMP_G(_flag_a, _flag_b)) goto L_006D54E7; /* 0x006D54E1: jg 0x6d54e7 */
L_006D54E3:
    /* test eax, eax */ /* 0x006D54E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D555D; /* 0x006D54E5: je 0x6d555d */
L_006D54E7:
    eax = MEM32(ecx); /* 0x006D54E7: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x006D54E9: mov eax, dword ptr [eax + 4] */
    esi = MEM32(eax + ecx + 0x38); /* 0x006D54EC: mov esi, dword ptr [eax + ecx + 0x38] */
    eax = MEM32(ebp + (-0x24)); /* 0x006D54F0: mov eax, dword ptr [ebp - 0x24] */
    eax = (uint32_t)MEM8(eax); /* 0x006D54F3: movzx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x006D54F6: push eax */
    ecx = MEM32(ebp + (-0x30)); /* 0x006D54F7: mov ecx, dword ptr [ebp - 0x30] */
    RECOMP_ICALL(MEM32(0x7CC3C0)); /* 0x006D54FA: call dword ptr [0x7cc3c0] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x006D5500: movzx eax, ax */
    PUSH32(esp, eax); /* 0x006D5503: push eax */
    ecx = esi; /* 0x006D5504: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x7CC22C)); /* 0x006D5506: call dword ptr [0x7cc22c] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x006D550C: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x006D550F: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x006D5514: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = 4; /* 0x006D5517: mov eax, 4 */
    if (CMP_EQ(_flag_a, _flag_b)) { edi = eax; } /* 0x006D551C: cmove edi, eax */
    MEM32(ebp + (-0x18)) = edi; /* 0x006D551F: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(ebp + (-0x1C)); /* 0x006D5522: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFFu; /* 0x006D5525: add eax, -1 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x006D5528: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x50)) = eax; /* 0x006D552B: mov dword ptr [ebp - 0x50], eax */
    ecx = MEM32(ebp + (-0x20)); /* 0x006D552E: mov ecx, dword ptr [ebp - 0x20] */
    { uint32_t _aa = ecx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D5531: adc ecx, -1 */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x20)) = ecx; /* 0x006D5534: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x4C)) = ecx; /* 0x006D5537: mov dword ptr [ebp - 0x4c], ecx */
    ecx = MEM32(ebp + (-0x24)); /* 0x006D553A: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006D553D: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x24)) = ecx; /* 0x006D553E: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x34)) = ecx; /* 0x006D5541: mov dword ptr [ebp - 0x34], ecx */
    ecx = MEM32(ebp + (-0x14)); /* 0x006D5544: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_006D54D0; /* 0x006D5547: jmp 0x6d54d0 */
L_006D5549:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFFFu; /* 0x006D5549: add ebx, -1 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = ebx; /* 0x006D554C: mov dword ptr [ebp - 0x40], ebx */
    { uint32_t _aa = esi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D554F: adc esi, -1 */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x28)) = esi; /* 0x006D5552: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x3C)) = esi; /* 0x006D5555: mov dword ptr [ebp - 0x3c], esi */
    RECOMP_BACKEDGE();
    goto L_006D5491; /* 0x006D5558: jmp 0x6d5491 */
L_006D555D:
    esi = MEM32(ebp + (-0x28)); /* 0x006D555D: mov esi, dword ptr [ebp - 0x28] */
L_006D5560:
    /* test esi, esi */ /* 0x006D5560: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_006D5592; /* 0x006D5562: jl 0x6d5592 */
L_006D5564:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_006D556A; /* 0x006D5564: jg 0x6d556a */
L_006D5566:
    /* test ebx, ebx */ /* 0x006D5566: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5592; /* 0x006D5568: je 0x6d5592 */
L_006D556A:
    eax = MEM32(ecx); /* 0x006D556A: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x006D556C: mov eax, dword ptr [eax + 4] */
    edx = (uint32_t)MEM16(eax + ecx + 0x40); /* 0x006D556F: movzx edx, word ptr [eax + ecx + 0x40] */
    PUSH32(esp, edx); /* 0x006D5574: push edx */
    ecx = MEM32(eax + ecx + 0x38); /* 0x006D5575: mov ecx, dword ptr [eax + ecx + 0x38] */
    RECOMP_ICALL(MEM32(0x7CC22C)); /* 0x006D5579: call dword ptr [0x7cc22c] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x006D557F: movzx eax, ax */
    ecx = 0xFFFFu; /* 0x006D5582: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x006D5587: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D55B3; /* 0x006D558A: jne 0x6d55b3 */
L_006D558C:
    _flag_a = (uint32_t)((edi | 4)); _flag_b = (uint32_t)((edi | 4));
    edi = edi | 4; /* 0x006D558C: or edi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = edi; /* 0x006D558F: mov dword ptr [ebp - 0x18], edi */
L_006D5592:
    ebx = MEM32(ebp + (-0x14)); /* 0x006D5592: mov ebx, dword ptr [ebp - 0x14] */
    eax = MEM32(ebx); /* 0x006D5595: mov eax, dword ptr [ebx] */
    eax = MEM32(eax + 0x4); /* 0x006D5597: mov eax, dword ptr [eax + 4] */
    MEM32(eax + ebx + 0x20) = 0; /* 0x006D559A: mov dword ptr [eax + ebx + 0x20], 0 */
    MEM32(eax + ebx + 0x24) = 0; /* 0x006D55A2: mov dword ptr [eax + ebx + 0x24], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x006D55AA: mov dword ptr [ebp - 4], 0 */
    goto L_006D55EB; /* 0x006D55B1: jmp 0x6d55eb */
L_006D55B3:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFFFu; /* 0x006D55B3: add ebx, -1 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = ebx; /* 0x006D55B6: mov dword ptr [ebp - 0x40], ebx */
    { uint32_t _aa = esi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x006D55B9: adc esi, -1 */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x3C)) = esi; /* 0x006D55BC: mov dword ptr [ebp - 0x3c], esi */
    ecx = MEM32(ebp + (-0x14)); /* 0x006D55BF: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_006D5560; /* 0x006D55C2: jmp 0x6d5560 */
L_006D55DE:
    MEM32(ebp + (-0x4)) = 0; /* 0x006D55DE: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ebp + (-0x18)); /* 0x006D55E5: mov edi, dword ptr [ebp - 0x18] */
L_006D55E8:
    ebx = MEM32(ebp + (-0x14)); /* 0x006D55E8: mov ebx, dword ptr [ebp - 0x14] */
L_006D55EB:
    PUSH32(esp, 0); /* 0x006D55EB: push 0 */
    PUSH32(esp, edi); /* 0x006D55ED: push edi */
    eax = MEM32(ebx); /* 0x006D55EE: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax + 0x4); /* 0x006D55F0: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x006D55F3: add ecx, ebx */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x7CC388)); /* 0x006D55F5: call dword ptr [0x7cc388] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006D55FB: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_ICALL(MEM32(0x7CC290)); /* 0x006D5602: call dword ptr [0x7cc290] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006D5608: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D5615; /* 0x006D560A: jne 0x6d5615 */
L_006D560C:
    ecx = MEM32(ebp + (-0x48)); /* 0x006D560C: mov ecx, dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC244)); /* 0x006D560F: call dword ptr [0x7cc244] */
    RECOMP_FLAGS_IN();
L_006D5615:
    ecx = MEM32(ebp + (-0x48)); /* 0x006D5615: mov ecx, dword ptr [ebp - 0x48] */
    eax = MEM32(ecx); /* 0x006D5618: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x006D561A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x006D561D: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x006D5621: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D562A; /* 0x006D5623: je 0x6d562a */
L_006D5625:
    eax = MEM32(ecx); /* 0x006D5625: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D5627: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_006D562A:
    eax = ebx; /* 0x006D562A: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D562C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D562F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D5636: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D5637: pop edi */
    esi = POP32_VAL(esp); /* 0x006D5638: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D5639: pop ebx */
    esp = ebp; /* 0x006D563A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D563C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x006D563D: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x006D55DEu: goto L_006D55DE;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_006D55C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D55C4u);

L_006D55C4:
    PUSH32(esp, 1); /* 0x006D55C4: push 1 */
    PUSH32(esp, 4); /* 0x006D55C6: push 4 */
    edx = MEM32(ebp + (-0x14)); /* 0x006D55C8: mov edx, dword ptr [ebp - 0x14] */
    eax = MEM32(edx); /* 0x006D55CB: mov eax, dword ptr [edx] */
    ecx = MEM32(eax + 0x4); /* 0x006D55CD: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x006D55D0: add ecx, edx */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x7CC388)); /* 0x006D55D2: call dword ptr [0x7cc388] */
    RECOMP_FLAGS_IN();
    eax = 0x006D55DEu; /* 0x006D55D8: mov eax, 0x6d55de */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D55DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D55DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D55DEu);

L_006D55DE:
    MEM32(ebp + (-0x4)) = 0; /* 0x006D55DE: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ebp + (-0x18)); /* 0x006D55E5: mov edi, dword ptr [ebp - 0x18] */
    ebx = MEM32(ebp + (-0x14)); /* 0x006D55E8: mov ebx, dword ptr [ebp - 0x14] */
    PUSH32(esp, 0); /* 0x006D55EB: push 0 */
    PUSH32(esp, edi); /* 0x006D55ED: push edi */
    eax = MEM32(ebx); /* 0x006D55EE: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax + 0x4); /* 0x006D55F0: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x006D55F3: add ecx, ebx */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x7CC388)); /* 0x006D55F5: call dword ptr [0x7cc388] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006D55FB: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_ICALL(MEM32(0x7CC290)); /* 0x006D5602: call dword ptr [0x7cc290] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006D5608: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D5615; /* 0x006D560A: jne 0x6d5615 */
L_006D560C:
    ecx = MEM32(ebp + (-0x48)); /* 0x006D560C: mov ecx, dword ptr [ebp - 0x48] */
    RECOMP_ICALL(MEM32(0x7CC244)); /* 0x006D560F: call dword ptr [0x7cc244] */
    RECOMP_FLAGS_IN();
L_006D5615:
    ecx = MEM32(ebp + (-0x48)); /* 0x006D5615: mov ecx, dword ptr [ebp - 0x48] */
    eax = MEM32(ecx); /* 0x006D5618: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x006D561A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + ecx + 0x38); /* 0x006D561D: mov ecx, dword ptr [eax + ecx + 0x38] */
    /* test ecx, ecx */ /* 0x006D5621: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D562A; /* 0x006D5623: je 0x6d562a */
L_006D5625:
    eax = MEM32(ecx); /* 0x006D5625: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x006D5627: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_006D562A:
    eax = ebx; /* 0x006D562A: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D562C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D562F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D5636: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D5637: pop edi */
    esi = POP32_VAL(esp); /* 0x006D5638: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D5639: pop ebx */
    esp = ebp; /* 0x006D563A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D563C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D563D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D5640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5640u);

L_006D5640:
    PUSH32(esp, ebp); /* 0x006D5640: push ebp */
    ebp = esp; /* 0x006D5641: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D5643: push -1 */
    PUSH32(esp, 0x007C6AE0u); /* 0x006D5645: push 0x7c6ae0 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D564A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D5650: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006D5651: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D5654: push ebx */
    PUSH32(esp, esi); /* 0x006D5655: push esi */
    PUSH32(esp, edi); /* 0x006D5656: push edi */
    eax = MEM32(0x855000); /* 0x006D5657: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D565C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D565E: push eax */
    eax = ebp + (-0xC); /* 0x006D565F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D5662: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006D5668: mov dword ptr [ebp - 0x10], esp */
    esi = ecx; /* 0x006D566B: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x006D566D: mov dword ptr [ebp - 0x14], esi */
    eax = MEM32(ebp + 0xC); /* 0x006D5670: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x8); /* 0x006D5673: sub eax, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    edi = MEM32(esi + 0x10); /* 0x006D5676: mov edi, dword ptr [esi + 0x10] */
    /* cmp edi, eax */ /* 0x006D5679: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D56A3; /* 0x006D567B: ja 0x6d56a3 */
L_006D567D:
    /* cmp MEM32(esi + 0x14), eax */ /* 0x006D567D: cmp dword ptr [esi + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D56A3; /* 0x006D5680: je 0x6d56a3 */
L_006D5682:
    PUSH32(esp, 1); /* 0x006D5682: push 1 */
    PUSH32(esp, eax); /* 0x006D5684: push eax */
    RECOMP_CALL(sub_005C9730); /* 0x006D5685: call 0x5c9730 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x006D568A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D56A3; /* 0x006D568C: je 0x6d56a3 */
L_006D568E:
    MEM32(esi + 0x10) = edi; /* 0x006D568E: mov dword ptr [esi + 0x10], edi */
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x006D5691: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D569B; /* 0x006D5695: jb 0x6d569b */
L_006D5697:
    eax = MEM32(esi); /* 0x006D5697: mov eax, dword ptr [esi] */
    goto L_006D569D; /* 0x006D5699: jmp 0x6d569d */
L_006D569B:
    eax = esi; /* 0x006D569B: mov eax, esi */
L_006D569D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006D569D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax + edi * 2) = (uint16_t)(LO16(ecx)); /* 0x006D569F: mov word ptr [eax + edi*2], cx */
L_006D56A3:
    MEM32(ebp + (-0x4)) = 0; /* 0x006D56A3: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(ebp + 0x8); /* 0x006D56AA: mov eax, dword ptr [ebp + 8] */
    ecx = ecx; /* 0x006D56AD: lea ecx, [ecx] */
L_006D56B0:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x006D56B0: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D56CF; /* 0x006D56B3: je 0x6d56cf */
L_006D56B5:
    SET_LO16(eax, (int32_t)(int8_t)MEM8(eax)); /* 0x006D56B5: movsx ax, byte ptr [eax] */
    eax = (uint32_t)LO16(eax); /* 0x006D56B9: movzx eax, ax */
    PUSH32(esp, eax); /* 0x006D56BC: push eax */
    PUSH32(esp, 1); /* 0x006D56BD: push 1 */
    ecx = esi; /* 0x006D56BF: mov ecx, esi */
    RECOMP_CALL(sub_00665A80); /* 0x006D56C1: call 0x665a80 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x006D56C6: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x006D56C9: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x006D56CA: mov dword ptr [ebp + 8], eax */
    RECOMP_BACKEDGE();
    goto L_006D56B0; /* 0x006D56CD: jmp 0x6d56b0 */
L_006D56CF:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006D56CF: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D56D6: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D56D9: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D56E0: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D56E1: pop edi */
    esi = POP32_VAL(esp); /* 0x006D56E2: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D56E3: pop ebx */
    esp = ebp; /* 0x006D56E4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D56E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006D56E7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_006D56EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D56EAu);

L_006D56EA:
    esi = MEM32(ebp + (-0x14)); /* 0x006D56EA: mov esi, dword ptr [ebp - 0x14] */
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x006D56ED: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006D56FE; /* 0x006D56F1: jb 0x6d56fe */
L_006D56F3:
    PUSH32(esp, MEM32(esi)); /* 0x006D56F3: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D56F5: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D56FB: add esp, 4 */
    _flag_k = FK_ADD;
L_006D56FE:
    MEM32(esi + 0x14) = 7; /* 0x006D56FE: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = 0; /* 0x006D5705: mov dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006D570C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x006D570E: mov word ptr [esi], ax */
    PUSH32(esp, eax); /* 0x006D5711: push eax */
    PUSH32(esp, eax); /* 0x006D5712: push eax */
    RECOMP_CALL(sub_00780016); /* 0x006D5713: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006D5718u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D5720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5720u);

L_006D5720:
    PUSH32(esp, ebp); /* 0x006D5720: push ebp */
    ebp = esp; /* 0x006D5721: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006D5723: push -1 */
    PUSH32(esp, 0x007C6B00u); /* 0x006D5725: push 0x7c6b00 */
    eax = MEM32(FS_BASE + (0)); /* 0x006D572A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006D5730: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x006D5731: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x006D5734: push ebx */
    PUSH32(esp, esi); /* 0x006D5735: push esi */
    PUSH32(esp, edi); /* 0x006D5736: push edi */
    eax = MEM32(0x855000); /* 0x006D5737: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x006D573C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x006D573E: push eax */
    eax = ebp + (-0xC); /* 0x006D573F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x006D5742: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x006D5748: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x006D574B: mov dword ptr [ebp - 4], 0 */
    esi = MEM32(ebp + 0x8); /* 0x006D5752: mov esi, dword ptr [ebp + 8] */
L_006D5755:
    /* cmp ecx, edx */ /* 0x006D5755: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D5775; /* 0x006D5757: je 0x6d5775 */
L_006D5759:
    /* test esi, esi */ /* 0x006D5759: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5767; /* 0x006D575B: je 0x6d5767 */
L_006D575D:
    eax = MEM32(ecx); /* 0x006D575D: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x006D575F: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x006D5761: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x006D5764: mov dword ptr [esi + 4], eax */
L_006D5767:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x006D5767: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x006D576A: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x006D576D: add ecx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x006D5770: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_BACKEDGE();
    goto L_006D5755; /* 0x006D5773: jmp 0x6d5755 */
L_006D5775:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006D5775: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x006D577C: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x006D577E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006D5781: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006D5788: pop ecx */
    edi = POP32_VAL(esp); /* 0x006D5789: pop edi */
    esi = POP32_VAL(esp); /* 0x006D578A: pop esi */
    ebx = POP32_VAL(esp); /* 0x006D578B: pop ebx */
    esp = ebp; /* 0x006D578C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D578E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D578F: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D5790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5790u);

L_006D5790:
    PUSH32(esp, 0); /* 0x006D5790: push 0 */
    PUSH32(esp, 0); /* 0x006D5792: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x006D5794: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006D5799u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D579A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D579Au);

    goto L_006D579A;
L_006D4D70:
    PUSH32(esp, ebp); /* 0x006D4D70: push ebp */
    ebp = esp; /* 0x006D4D71: mov ebp, esp */
    eax = MEM32(ecx + (-0x68)); /* 0x006D4D73: mov eax, dword ptr [ecx - 0x68] */
    PUSH32(esp, ebx); /* 0x006D4D76: push ebx */
    ebx = ecx + (-0x68); /* 0x006D4D77: lea ebx, [ecx - 0x68] */
    PUSH32(esp, esi); /* 0x006D4D7A: push esi */
    eax = MEM32(eax + 0x4); /* 0x006D4D7B: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, edi); /* 0x006D4D7E: push edi */
    MEM32(eax + ebx) = 0x00801920u; /* 0x006D4D7F: mov dword ptr [eax + ebx], 0x801920 */
    eax = MEM32(ebx); /* 0x006D4D86: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax + 0x4); /* 0x006D4D88: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x68); /* 0x006D4D8B: lea eax, [ecx - 0x68] */
    MEM32(ecx + ebx + (-0x4)) = eax; /* 0x006D4D8E: mov dword ptr [ecx + ebx - 4], eax */
    ecx = ebx + 0x18; /* 0x006D4D92: lea ecx, [ebx + 0x18] */
    MEM32(ebx + 0x18) = 0x008018E0u; /* 0x006D4D95: mov dword ptr [ebx + 0x18], 0x8018e0 */
    RECOMP_CALL(sub_0044E5B0); /* 0x006D4D9C: call 0x44e5b0 */
    RECOMP_FLAGS_IN();
    ecx = ebx + 0x18; /* 0x006D4DA1: lea ecx, [ebx + 0x18] */
    RECOMP_ICALL(MEM32(0x7CC3B8)); /* 0x006D4DA4: call dword ptr [0x7cc3b8] */
    RECOMP_FLAGS_IN();
    ecx = ebx + 0x20; /* 0x006D4DAA: lea ecx, [ebx + 0x20] */
    RECOMP_ICALL(MEM32(0x7CC37C)); /* 0x006D4DAD: call dword ptr [0x7cc37c] */
    RECOMP_FLAGS_IN();
    ecx = ebx + 0x68; /* 0x006D4DB3: lea ecx, [ebx + 0x68] */
    RECOMP_ICALL(MEM32(0x7CC38C)); /* 0x006D4DB6: call dword ptr [0x7cc38c] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006D4DBC: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D4DCC; /* 0x006D4DC0: je 0x6d4dcc */
L_006D4DC2:
    PUSH32(esp, ebx); /* 0x006D4DC2: push ebx */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D4DC3: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D4DC9: add esp, 4 */
    _flag_k = FK_ADD;
L_006D4DCC:
    edi = POP32_VAL(esp); /* 0x006D4DCC: pop edi */
    esi = POP32_VAL(esp); /* 0x006D4DCD: pop esi */
    eax = ebx; /* 0x006D4DCE: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x006D4DD0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006D4DD1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D4DD2: ret 4 */
L_006D579A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ecx + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ecx + (-0x4)); /* 0x006D579A: sub ecx, dword ptr [ecx - 4] */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_006D4D70; /* 0x006D579D: jmp 0x6d4d70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D57A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D57A2u);

    goto L_006D57A2;
L_006D1C00:
    PUSH32(esp, ebp); /* 0x006D1C00: push ebp */
    ebp = esp; /* 0x006D1C01: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D1C03: push esi */
    esi = ecx; /* 0x006D1C04: mov esi, ecx */
    RECOMP_CALL(sub_006D1C30); /* 0x006D1C06: call 0x6d1c30 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006D1C0B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D1C1B; /* 0x006D1C0F: je 0x6d1c1b */
L_006D1C11:
    PUSH32(esp, esi); /* 0x006D1C11: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D1C12: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D1C18: add esp, 4 */
    _flag_k = FK_ADD;
L_006D1C1B:
    eax = esi; /* 0x006D1C1B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006D1C1D: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D1C1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D1C1F: ret 4 */
L_006D57A2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x006D57A2: sub ecx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_006D1C00; /* 0x006D57A5: jmp 0x6d1c00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D57B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D57B0u);

L_006D57B0:
    PUSH32(esp, ebp); /* 0x006D57B0: push ebp */
    ebp = esp; /* 0x006D57B1: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006D57B3: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x006D57B7: push esi */
    esi = ecx; /* 0x006D57B8: mov esi, ecx */
    MEM32(esi) = 0x00801A40u; /* 0x006D57BA: mov dword ptr [esi], 0x801a40 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D57CC; /* 0x006D57C0: je 0x6d57cc */
L_006D57C2:
    PUSH32(esp, esi); /* 0x006D57C2: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D57C3: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D57C9: add esp, 4 */
    _flag_k = FK_ADD;
L_006D57CC:
    eax = esi; /* 0x006D57CC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006D57CE: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D57CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D57D0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D57F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D57F0u);

L_006D57F0:
    PUSH32(esp, ebp); /* 0x006D57F0: push ebp */
    ebp = esp; /* 0x006D57F1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D57F3: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x006D57F4: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x006D57F7: mov esi, ecx */
    ecx = esi + 0x4; /* 0x006D57F9: lea ecx, [esi + 4] */
    MEM32(esi) = 0x008019E0u; /* 0x006D57FC: mov dword ptr [esi], 0x8019e0 */
    RECOMP_CALL(sub_006DBF60); /* 0x006D5802: call 0x6dbf60 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x006D5807: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x14) = eax; /* 0x006D580A: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(ebp + 0x10); /* 0x006D580D: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x1C) = eax; /* 0x006D5810: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x24) = eax; /* 0x006D5813: mov dword ptr [esi + 0x24], eax */
    eax = esi; /* 0x006D5816: mov eax, esi */
    MEM32(esi) = 0x00801A1Cu; /* 0x006D5818: mov dword ptr [esi], 0x801a1c */
    MEM32(esi + 0x18) = 0; /* 0x006D581E: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x20) = 0; /* 0x006D5825: mov dword ptr [esi + 0x20], 0 */
    MEM32(esi + 0x2C) = 0; /* 0x006D582C: mov dword ptr [esi + 0x2c], 0 */
    MEM8(esi + 0x28) = (uint8_t)(1); /* 0x006D5833: mov byte ptr [esi + 0x28], 1 */
    MEM32(esi + 0x34) = 0x30u; /* 0x006D5837: mov dword ptr [esi + 0x34], 0x30 */
    MEM32(ecx) = 0x00801A04u; /* 0x006D583E: mov dword ptr [ecx], 0x801a04 */
    esi = POP32_VAL(esp); /* 0x006D5844: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D5845: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006D5846: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_006D5850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5850u);

L_006D5850:
    PUSH32(esp, ebp); /* 0x006D5850: push ebp */
    ebp = esp; /* 0x006D5851: mov ebp, esp */
    PUSH32(esp, esi); /* 0x006D5853: push esi */
    esi = ecx; /* 0x006D5854: mov esi, ecx */
    RECOMP_CALL(sub_006D5AA0); /* 0x006D5856: call 0x6d5aa0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x006D585B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D586B; /* 0x006D585F: je 0x6d586b */
L_006D5861:
    PUSH32(esp, esi); /* 0x006D5861: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x006D5862: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006D5868: add esp, 4 */
    _flag_k = FK_ADD;
L_006D586B:
    eax = esi; /* 0x006D586B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x006D586D: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D586E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006D586F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006D5880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5880u);

L_006D5880:
    PUSH32(esp, ebp); /* 0x006D5880: push ebp */
    ebp = esp; /* 0x006D5881: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x006D5883: mov edx, dword ptr [ebp + 0xc] */
    SET_LO8(eax, MEM8(ebp + 0x10)); /* 0x006D5886: mov al, byte ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x006D5889: push esi */
    esi = MEM32(ebp + 0x8); /* 0x006D588A: mov esi, dword ptr [ebp + 8] */
    MEM8(ecx + 0x28) = (uint8_t)(LO8(eax)); /* 0x006D588D: mov byte ptr [ecx + 0x28], al */
    MEM32(ecx + 0x20) = esi; /* 0x006D5890: mov dword ptr [ecx + 0x20], esi */
    MEM32(ecx + 0x24) = edx; /* 0x006D5893: mov dword ptr [ecx + 0x24], edx */
    eax = esi + edx; /* 0x006D5896: lea eax, [esi + edx] */
    esi = POP32_VAL(esp); /* 0x006D5899: pop esi */
    /* cmp eax, MEM32(ecx + 0x1C) */ /* 0x006D589A: cmp eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_006D58A3; /* 0x006D589D: ja 0x6d58a3 */
L_006D589F:
    ebp = POP32_VAL(esp); /* 0x006D589F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x006D58A0: ret 0xc */
L_006D58A3:
    ecx = MEM32(ecx + 0x10); /* 0x006D58A3: mov ecx, dword ptr [ecx + 0x10] */
    PUSH32(esp, 0x00801958u); /* 0x006D58A6: push 0x801958 */
    RECOMP_CALL(sub_006D1E10); /* 0x006D58AB: call 0x6d1e10 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006D58B0u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D58C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D58C0u);

L_006D58C0:
    PUSH32(esp, ebp); /* 0x006D58C0: push ebp */
    ebp = esp; /* 0x006D58C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006D58C3: push ecx */
    PUSH32(esp, ebx); /* 0x006D58C4: push ebx */
    PUSH32(esp, edi); /* 0x006D58C5: push edi */
    edi = ecx; /* 0x006D58C6: mov edi, ecx */
    /* cmp MEM32(edi + 0x18), 0 */ /* 0x006D58C8: cmp dword ptr [edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = edi + 0x18; /* 0x006D58CC: lea ebx, [edi + 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006D58F9; /* 0x006D58CF: jne 0x6d58f9 */
L_006D58D1:
    eax = MEM32(edi + 0x10); /* 0x006D58D1: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, esi); /* 0x006D58D4: push esi */
    esi = MEM32(edi + 0x1C); /* 0x006D58D5: mov esi, dword ptr [edi + 0x1c] */
    PUSH32(esp, 0); /* 0x006D58D8: push 0 */
    PUSH32(esp, ebx); /* 0x006D58DA: push ebx */
    PUSH32(esp, 1); /* 0x006D58DB: push 1 */
    MEM32(edi + 0x2C) = esi; /* 0x006D58DD: mov dword ptr [edi + 0x2c], esi */
    ecx = MEM32(eax + 0x10C); /* 0x006D58E0: mov ecx, dword ptr [eax + 0x10c] */
    eax = esi + esi; /* 0x006D58E6: lea eax, [esi + esi] */
    PUSH32(esp, 0x65u); /* 0x006D58E9: push 0x65 */
    PUSH32(esp, 8); /* 0x006D58EB: push 8 */
    PUSH32(esp, eax); /* 0x006D58ED: push eax */
    edx = MEM32(ecx); /* 0x006D58EE: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D58F0: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x6C)); /* 0x006D58F1: call dword ptr [edx + 0x6c] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x006D58F4: pop esi */
    /* test eax, eax */ /* 0x006D58F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D5922; /* 0x006D58F7: jne 0x6d5922 */
L_006D58F9:
    ecx = MEM32(ebx); /* 0x006D58F9: mov ecx, dword ptr [ebx] */
    eax = ebp + (-0x4); /* 0x006D58FB: lea eax, [ebp - 4] */
    PUSH32(esp, 0); /* 0x006D58FE: push 0 */
    PUSH32(esp, eax); /* 0x006D5900: push eax */
    eax = MEM32(ebp + 0xC); /* 0x006D5901: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ecx); /* 0x006D5904: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006D5906: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006D5908: push eax */
    eax = MEM32(ebp + 0x8); /* 0x006D5909: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x006D590C: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006D590E: push eax */
    PUSH32(esp, ecx); /* 0x006D590F: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x006D5910: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x006D5913: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006D592F; /* 0x006D5915: jne 0x6d592f */
L_006D5917:
    eax = MEM32(ebp + (-0x4)); /* 0x006D5917: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x006D591A: pop edi */
    ebx = POP32_VAL(esp); /* 0x006D591B: pop ebx */
    esp = ebp; /* 0x006D591C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006D591E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D591F: ret 8 */
L_006D5922:
    ecx = MEM32(edi + 0x10); /* 0x006D5922: mov ecx, dword ptr [edi + 0x10] */
    PUSH32(esp, 0x00801938u); /* 0x006D5925: push 0x801938 */
    RECOMP_CALL(sub_006D1E10); /* 0x006D592A: call 0x6d1e10 */
    RECOMP_FLAGS_IN();
L_006D592F:
    ecx = MEM32(edi + 0x10); /* 0x006D592F: mov ecx, dword ptr [edi + 0x10] */
    PUSH32(esp, 0x008019BCu); /* 0x006D5932: push 0x8019bc */
    RECOMP_CALL(sub_006D1E10); /* 0x006D5937: call 0x6d1e10 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x006D593Cu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_006D5940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5940u);

L_006D5940:
    ecx = MEM32(ecx + 0x18); /* 0x006D5940: mov ecx, dword ptr [ecx + 0x18] */
    /* test ecx, ecx */ /* 0x006D5943: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D594D; /* 0x006D5945: je 0x6d594d */
L_006D5947:
    eax = MEM32(ecx); /* 0x006D5947: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x006D5949: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x006D594A: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
L_006D594D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D594D: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D5950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5950u);

L_006D5950:
    PUSH32(esp, ebp); /* 0x006D5950: push ebp */
    ebp = esp; /* 0x006D5951: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x006D5953: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x006D5956: push esi */
    esi = MEM32(ecx + 0x14); /* 0x006D5957: mov esi, dword ptr [ecx + 0x14] */
    PUSH32(esp, edi); /* 0x006D595A: push edi */
    PUSH32(esp, 0); /* 0x006D595B: push 0 */
    eax = eax + eax * 2; /* 0x006D595D: lea eax, [eax + eax*2] */
    edx = MEM32(esi); /* 0x006D5960: mov edx, dword ptr [esi] */
    edi = ebp + 0xC; /* 0x006D5962: lea edi, [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x006D5965: push edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x006D5966: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x006D5966: shl eax, 4 */
    PUSH32(esp, eax); /* 0x006D5969: push eax */
    eax = MEM32(ecx + 0x34); /* 0x006D596A: mov eax, dword ptr [ecx + 0x34] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x006D596D: imul eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x006D5971: push eax */
    PUSH32(esp, esi); /* 0x006D5972: push esi */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x006D5973: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x006D5976: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x006D5979: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x006D597B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x006D597D: pop edi */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { ecx = edx; } /* 0x006D597E: cmovs ecx, edx */
    eax = ecx; /* 0x006D5981: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x006D5983: pop esi */
    ebp = POP32_VAL(esp); /* 0x006D5984: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x006D5985: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_006D5990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5990u);

L_006D5990:
    eax = MEM32(ecx + 0x14); /* 0x006D5990: mov eax, dword ptr [ecx + 0x14] */
    PUSH32(esp, eax); /* 0x006D5993: push eax */
    ecx = MEM32(eax); /* 0x006D5994: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x006D5996: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5999: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D59A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D59A0u);

L_006D59A0:
    PUSH32(esp, edi); /* 0x006D59A0: push edi */
    edi = ecx; /* 0x006D59A1: mov edi, ecx */
    ecx = MEM32(edi + 0x10); /* 0x006D59A3: mov ecx, dword ptr [edi + 0x10] */
    /* cmp MEM8(ecx + 0xA40), 0 */ /* 0x006D59A6: cmp byte ptr [ecx + 0xa40], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xA40)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D5A8B; /* 0x006D59AD: je 0x6d5a8b */
L_006D59B3:
    /* cmp MEM8(ecx + 0xA42), 0 */ /* 0x006D59B3: cmp byte ptr [ecx + 0xa42], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xA42)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D59CD; /* 0x006D59BA: je 0x6d59cd */
L_006D59BC:
    edx = ecx + 0xA48; /* 0x006D59BC: lea edx, [ecx + 0xa48] */
    ecx = MEM32(ecx + 0x10C); /* 0x006D59C2: mov ecx, dword ptr [ecx + 0x10c] */
    RECOMP_CALL(sub_006D2130); /* 0x006D59C8: call 0x6d2130 */
    RECOMP_FLAGS_IN();
L_006D59CD:
    eax = MEM32(edi + 0x10); /* 0x006D59CD: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, esi); /* 0x006D59D0: push esi */
    PUSH32(esp, MEM32(edi + 0x34)); /* 0x006D59D1: push dword ptr [edi + 0x34] */
    eax = MEM32(eax + 0x10C); /* 0x006D59D4: mov eax, dword ptr [eax + 0x10c] */
    PUSH32(esp, 0); /* 0x006D59DA: push 0 */
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x006D59DC: push dword ptr [edi + 0x14] */
    ecx = MEM32(eax); /* 0x006D59DF: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x006D59E1: push 0 */
    PUSH32(esp, eax); /* 0x006D59E3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x190)); /* 0x006D59E4: call dword ptr [ecx + 0x190] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x006D59EA: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, 0x2D2u); /* 0x006D59ED: push 0x2d2 */
    eax = MEM32(eax + 0x10C); /* 0x006D59F2: mov eax, dword ptr [eax + 0x10c] */
    PUSH32(esp, eax); /* 0x006D59F8: push eax */
    ecx = MEM32(eax); /* 0x006D59F9: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x164)); /* 0x006D59FB: call dword ptr [ecx + 0x164] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x006D5A01: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax + 0xA2C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xA2C) = MEM32(eax + 0xA2C) + 1; /* 0x006D5A04: inc dword ptr [eax + 0xa2c] */
    _flag_k = FK_INC;
    edx = MEM32(edi + 0x18); /* 0x006D5A0A: mov edx, dword ptr [edi + 0x18] */
    /* test edx, edx */ /* 0x006D5A0D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5A55; /* 0x006D5A0F: je 0x6d5a55 */
L_006D5A11:
    /* cmp MEM8(edi + 0x28), 0 */ /* 0x006D5A11: cmp byte ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x28)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006D5A55; /* 0x006D5A15: je 0x6d5a55 */
L_006D5A17:
    eax = MEM32(edi + 0x10); /* 0x006D5A17: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, edx); /* 0x006D5A1A: push edx */
    eax = MEM32(eax + 0x10C); /* 0x006D5A1B: mov eax, dword ptr [eax + 0x10c] */
    PUSH32(esp, eax); /* 0x006D5A21: push eax */
    ecx = MEM32(eax); /* 0x006D5A22: mov ecx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(ecx + 0x1A0)); /* 0x006D5A24: call dword ptr [ecx + 0x1a0] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x10); /* 0x006D5A2A: mov eax, dword ptr [edi + 0x10] */
    esi = MEM32(eax + 0x10C); /* 0x006D5A2D: mov esi, dword ptr [eax + 0x10c] */
    eax = 0xAAAAAAABu; /* 0x006D5A33: mov eax, 0xaaaaaaab */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(edi + 0x24)); /* 0x006D5A38: mul dword ptr [edi + 0x24] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = MEM32(esi); /* 0x006D5A3B: mov ecx, dword ptr [esi] */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x006D5A3D: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x006D5A3D: shr edx, 1 */
    PUSH32(esp, edx); /* 0x006D5A3F: push edx */
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x006D5A40: push dword ptr [edi + 0x20] */
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x006D5A43: push dword ptr [edi + 0x1c] */
    PUSH32(esp, 0); /* 0x006D5A46: push 0 */
    PUSH32(esp, 0); /* 0x006D5A48: push 0 */
    PUSH32(esp, 4); /* 0x006D5A4A: push 4 */
    PUSH32(esp, esi); /* 0x006D5A4C: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x148)); /* 0x006D5A4D: call dword ptr [ecx + 0x148] */
    RECOMP_FLAGS_IN();
    goto L_006D5A77; /* 0x006D5A53: jmp 0x6d5a77 */
L_006D5A55:
    eax = MEM32(edi + 0x10); /* 0x006D5A55: mov eax, dword ptr [edi + 0x10] */
    esi = MEM32(eax + 0x10C); /* 0x006D5A58: mov esi, dword ptr [eax + 0x10c] */
    eax = 0xAAAAAAABu; /* 0x006D5A5E: mov eax, 0xaaaaaaab */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(edi + 0x24)); /* 0x006D5A63: mul dword ptr [edi + 0x24] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = MEM32(esi); /* 0x006D5A66: mov ecx, dword ptr [esi] */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x006D5A68: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x006D5A68: shr edx, 1 */
    PUSH32(esp, edx); /* 0x006D5A6A: push edx */
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x006D5A6B: push dword ptr [edi + 0x20] */
    PUSH32(esp, 4); /* 0x006D5A6E: push 4 */
    PUSH32(esp, esi); /* 0x006D5A70: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x144)); /* 0x006D5A71: call dword ptr [ecx + 0x144] */
    RECOMP_FLAGS_IN();
L_006D5A77:
    ecx = MEM32(edi + 0x10); /* 0x006D5A77: mov ecx, dword ptr [edi + 0x10] */
    eax = 0xAAAAAAABu; /* 0x006D5A7A: mov eax, 0xaaaaaaab */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(edi + 0x24)); /* 0x006D5A7F: mul dword ptr [edi + 0x24] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    esi = POP32_VAL(esp); /* 0x006D5A82: pop esi */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x006D5A83: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x006D5A83: shr edx, 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xA3C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0xA3C) = MEM32(ecx + 0xA3C) + edx; /* 0x006D5A85: add dword ptr [ecx + 0xa3c], edx */
    _flag_k = FK_ADD;
L_006D5A8B:
    edi = POP32_VAL(esp); /* 0x006D5A8B: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5A8C: ret  */
    RECOMP_REGS_OUT();
}

void sub_006D5A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006D5A90u);

L_006D5A90:
    /* test ecx, ecx */ /* 0x006D5A90: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006D5A9B; /* 0x006D5A92: je 0x6d5a9b */
L_006D5A94:
    eax = MEM32(ecx); /* 0x006D5A94: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x006D5A96: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x006D5A98: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_006D5A9B:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006D5A9B: ret  */
    RECOMP_REGS_OUT();
}
