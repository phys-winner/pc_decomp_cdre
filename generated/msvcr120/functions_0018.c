#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_100747BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100747BDu);

L_100747BD:
    PUSH32(esp, ebp); /* 0x100747BD: push ebp */
    ebp = esp; /* 0x100747BE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100747C0: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100747C3: push ebx */
    PUSH32(esp, esi); /* 0x100747C4: push esi */
    esi = ecx; /* 0x100747C5: mov esi, ecx */
    PUSH32(esp, edi); /* 0x100747C7: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100747C8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x100747CA: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x100747CD: mov dword ptr [ebp - 4], edi */
    /* cmp MEM32(esi + 0x2C), edi */ /* 0x100747D0: cmp dword ptr [esi + 0x2c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10074840; /* 0x100747D3: jle 0x10074840 */
L_100747D5:
    eax = MEM32(esi + 0x20); /* 0x100747D5: mov eax, dword ptr [esi + 0x20] */
    ebx = MEM32(eax + edi * 4); /* 0x100747D8: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x100747DB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074837; /* 0x100747DD: je 0x10074837 */
L_100747DF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x100747DF: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x78), 0 */ /* 0x100747E3: cmp dword ptr [ebx + 0x78], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x78)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10074837; /* 0x100747E7: jle 0x10074837 */
L_100747E9:
    esi = MEM32(ebp + (-0xC)); /* 0x100747E9: mov esi, dword ptr [ebp - 0xc] */
    eax = ebx + 0x38; /* 0x100747EC: lea eax, [ebx + 0x38] */
L_100747EF:
    PUSH32(esp, esi); /* 0x100747EF: push esi */
    ecx = eax; /* 0x100747F0: mov ecx, eax */
    RECOMP_CALL(sub_10072F00); /* 0x100747F2: call 0x10072f00 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x100747F7: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x100747FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074828; /* 0x100747FC: je 0x10074828 */
L_100747FE:
    ecx = MEM32(eax + 0x68); /* 0x100747FE: mov ecx, dword ptr [eax + 0x68] */
    edx = ecx; /* 0x10074801: mov edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x70));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(eax + 0x70); /* 0x10074803: sub edx, dword ptr [eax + 0x70] */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0xC)); /* 0x10074806: mov edi, dword ptr [ebp - 0xc] */
    MEM32(eax + 0x70) = ecx; /* 0x10074809: mov dword ptr [eax + 0x70], ecx */
    eax = MEM32(eax + 0x6C); /* 0x1007480C: mov eax, dword ptr [eax + 0x6c] */
    ecx = eax; /* 0x1007480F: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x74); /* 0x10074811: sub ecx, dword ptr [edi + 0x74] */
    _flag_k = FK_CMP;
    MEM32(edi + 0x74) = eax; /* 0x10074814: mov dword ptr [edi + 0x74], eax */
    eax = MEM32(ebp + 0xC); /* 0x10074817: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + edx; /* 0x1007481A: add dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1007481C: sub edx, ecx */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1007481E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x10074821: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x10074823: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + edx; /* 0x10074826: add dword ptr [eax], edx */
    _flag_k = FK_ADD;
L_10074828:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10074828: inc esi */
    _flag_k = FK_INC;
    eax = ebx + 0x38; /* 0x10074829: lea eax, [ebx + 0x38] */
    /* cmp esi, MEM32(ebx + 0x78) */ /* 0x1007482C: cmp esi, dword ptr [ebx + 0x78] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x78));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100747EF; /* 0x1007482F: jl 0x100747ef */
L_10074831:
    esi = MEM32(ebp + (-0x8)); /* 0x10074831: mov esi, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0x4)); /* 0x10074834: mov edi, dword ptr [ebp - 4] */
L_10074837:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10074837: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = edi; /* 0x10074838: mov dword ptr [ebp - 4], edi */
    /* cmp edi, MEM32(esi + 0x2C) */ /* 0x1007483B: cmp edi, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100747D5; /* 0x1007483E: jl 0x100747d5 */
L_10074840:
    eax = MEM32(esi + 0x1BC); /* 0x10074840: mov eax, dword ptr [esi + 0x1bc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10074846: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x10074848: mov edx, eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1007484A: mov dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x1C4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(esi + 0x1C4); /* 0x1007484D: sub edx, dword ptr [esi + 0x1c4] */
    _flag_k = FK_CMP;
    MEM32(esi + 0x1C4) = eax; /* 0x10074853: mov dword ptr [esi + 0x1c4], eax */
    eax = MEM32(esi + 0x1C0); /* 0x10074859: mov eax, dword ptr [esi + 0x1c0] */
    ecx = eax; /* 0x1007485F: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x1C8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x1C8); /* 0x10074861: sub ecx, dword ptr [esi + 0x1c8] */
    _flag_k = FK_CMP;
    MEM32(esi + 0x1C8) = eax; /* 0x10074867: mov dword ptr [esi + 0x1c8], eax */
    eax = MEM32(ebp + 0xC); /* 0x1007486D: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + edx; /* 0x10074870: add dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x10074872: sub edx, ecx */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x10074874: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x10074877: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x10074879: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + edx; /* 0x1007487C: add dword ptr [eax], edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x108), ebx */ /* 0x1007487E: cmp dword ptr [esi + 0x108], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x108)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100749A7; /* 0x10074884: jle 0x100749a7 */
L_1007488A:
    ecx = MEM32(esi + 0xF4); /* 0x1007488A: mov ecx, dword ptr [esi + 0xf4] */
    edx = ebx; /* 0x10074890: mov edx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edx) >> 31) & 1u)); /* 0x10074892: sar edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31));
    /* cmp edx, MEM32(esi + 0x104) */ /* 0x10074894: cmp edx, dword ptr [esi + 0x104] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x104));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10074997; /* 0x1007489A: jge 0x10074997 */
L_100748A0:
    ecx = MEM32(esi + 0x100); /* 0x100748A0: mov ecx, dword ptr [esi + 0x100] */
    eax = MEM32(esi + 0xFC); /* 0x100748A6: mov eax, dword ptr [esi + 0xfc] */
    /* cmp edx, ecx */ /* 0x100748AC: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100748C1; /* 0x100748AE: jl 0x100748c1 */
L_100748B0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x100748B0: sub edx, ecx */
    _flag_k = FK_CMP;
    eax = MEM32(eax + ecx * 4 + (-0x4)); /* 0x100748B2: mov eax, dword ptr [eax + ecx*4 - 4] */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_100748C4; /* 0x100748B6: js 0x100748c4 */
L_100748B8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100748B8: inc edx */
    _flag_k = FK_INC;
L_100748B9:
    eax = MEM32(eax + 0x4); /* 0x100748B9: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100748BC: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100748C4; /* 0x100748BD: je 0x100748c4 */
L_100748BF:
    RECOMP_BACKEDGE();
    goto L_100748B9; /* 0x100748BF: jmp 0x100748b9 */
L_100748C1:
    eax = MEM32(eax + edx * 4); /* 0x100748C1: mov eax, dword ptr [eax + edx*4] */
L_100748C4:
    ecx = MEM32(esi + 0xF0); /* 0x100748C4: mov ecx, dword ptr [esi + 0xf0] */
    eax = MEM32(eax); /* 0x100748CA: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100748CC: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x100748CD: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(eax + ecx * 4); /* 0x100748CF: mov edi, dword ptr [eax + ecx*4] */
    /* test edi, edi */ /* 0x100748D2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074997; /* 0x100748D4: je 0x10074997 */
L_100748DA:
    eax = MEM32(edi + 0x8); /* 0x100748DA: mov eax, dword ptr [edi + 8] */
    edx = eax; /* 0x100748DD: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi + 0x10); /* 0x100748DF: sub edx, dword ptr [edi + 0x10] */
    _flag_k = FK_CMP;
    MEM32(edi + 0x10) = eax; /* 0x100748E2: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(edi + 0xC); /* 0x100748E5: mov eax, dword ptr [edi + 0xc] */
    ecx = eax; /* 0x100748E8: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x14); /* 0x100748EA: sub ecx, dword ptr [edi + 0x14] */
    _flag_k = FK_CMP;
    MEM32(edi + 0x14) = eax; /* 0x100748ED: mov dword ptr [edi + 0x14], eax */
    eax = MEM32(ebp + 0xC); /* 0x100748F0: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + edx; /* 0x100748F3: add dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x100748F5: sub edx, ecx */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x100748F7: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x100748FA: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x100748FC: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + edx; /* 0x100748FF: add dword ptr [eax], edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x18), 0 */ /* 0x10074901: cmp dword ptr [edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074997; /* 0x10074905: jne 0x10074997 */
L_1007490B:
    eax = MEM32(edi + 0x8); /* 0x1007490B: mov eax, dword ptr [edi + 8] */
    /* cmp eax, MEM32(edi + 0x10) */ /* 0x1007490E: cmp eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074997; /* 0x10074911: jne 0x10074997 */
L_10074917:
    eax = MEM32(edi + 0xC); /* 0x10074917: mov eax, dword ptr [edi + 0xc] */
    /* cmp eax, MEM32(edi + 0x14) */ /* 0x1007491A: cmp eax, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074997; /* 0x1007491D: jne 0x10074997 */
L_1007491F:
    edx = MEM32(edi); /* 0x1007491F: mov edx, dword ptr [edi] */
    ecx = MEM32(esi + 0xF4); /* 0x10074921: mov ecx, dword ptr [esi + 0xf4] */
    ebx = MEM32(esi + 0xF0); /* 0x10074927: mov ebx, dword ptr [esi + 0xf0] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edx) >> 31) & 1u)); /* 0x1007492D: sar edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31));
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1007492F: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi));
    ebx = ebx & MEM32(edi); /* 0x10074930: and ebx, dword ptr [edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(esi + 0x104) */ /* 0x10074932: cmp edx, dword ptr [esi + 0x104] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x104));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1007498D; /* 0x10074938: jge 0x1007498d */
L_1007493A:
    ecx = MEM32(esi + 0x100); /* 0x1007493A: mov ecx, dword ptr [esi + 0x100] */
    eax = MEM32(esi + 0xFC); /* 0x10074940: mov eax, dword ptr [esi + 0xfc] */
    /* cmp edx, ecx */ /* 0x10074946: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1007495E; /* 0x10074948: jl 0x1007495e */
L_1007494A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1007494A: sub edx, ecx */
    _flag_k = FK_CMP;
    eax = MEM32(eax + ecx * 4 + (-0x4)); /* 0x1007494C: mov eax, dword ptr [eax + ecx*4 - 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x10074950: mov dword ptr [ebp - 4], eax */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_10074964; /* 0x10074953: js 0x10074964 */
L_10074955:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10074955: inc edx */
    _flag_k = FK_INC;
L_10074956:
    eax = MEM32(eax + 0x4); /* 0x10074956: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10074959: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10074961; /* 0x1007495A: je 0x10074961 */
L_1007495C:
    RECOMP_BACKEDGE();
    goto L_10074956; /* 0x1007495C: jmp 0x10074956 */
L_1007495E:
    eax = MEM32(eax + edx * 4); /* 0x1007495E: mov eax, dword ptr [eax + edx*4] */
L_10074961:
    MEM32(ebp + (-0x4)) = eax; /* 0x10074961: mov dword ptr [ebp - 4], eax */
L_10074964:
    eax = MEM32(eax); /* 0x10074964: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10074966: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edi; /* 0x10074968: mov dword ptr [ebp - 8], edi */
    ecx = eax + ebx * 4; /* 0x1007496B: lea ecx, [eax + ebx*4] */
    eax = MEM32(ebp + (-0x8)); /* 0x1007496E: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x10074971: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x10074975: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x10074978: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x1007497B: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007498D; /* 0x1007497E: jne 0x1007498d */
L_10074980:
    ecx = MEM32(ebp + (-0x4)); /* 0x10074980: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x10074983: push -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x10074985: add ecx, 8 */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x10074988: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = ebx; } else { eax = _d; } } /* 0x10074989: lock cmpxchg dword ptr [ecx], ebx */
    _flag_k = FK_CMP;
L_1007498D:
    PUSH32(esp, edi); /* 0x1007498D: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007498E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0xC)); /* 0x10074993: mov ebx, dword ptr [ebp - 0xc] */
    ecx = POP32_VAL(esp); /* 0x10074996: pop ecx */
L_10074997:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10074997: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = ebx; /* 0x10074998: mov dword ptr [ebp - 0xc], ebx */
    /* cmp ebx, MEM32(esi + 0x108) */ /* 0x1007499B: cmp ebx, dword ptr [esi + 0x108] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x108));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007488A; /* 0x100749A1: jl 0x1007488a */
L_100749A7:
    edi = POP32_VAL(esp); /* 0x100749A7: pop edi */
    esi = POP32_VAL(esp); /* 0x100749A8: pop esi */
    ebx = POP32_VAL(esp); /* 0x100749A9: pop ebx */
    esp = ebp; /* 0x100749AA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100749AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x100749AD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_100749B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100749B0u);

L_100749B0:
    PUSH32(esp, 4); /* 0x100749B0: push 4 */
    eax = 0x100DADF8u; /* 0x100749B2: mov eax, 0x100dadf8 */
    RECOMP_CALL(sub_100149A4); /* 0x100749B7: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, LO8(ecx)); /* 0x100749BC: mov bl, cl */
    /* test LO8(ebx), LO8(ebx) */ /* 0x100749BE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100749D7; /* 0x100749C0: je 0x100749d7 */
L_100749C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100749C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E4500), 0x20u */ /* 0x100749C4: cmp dword ptr [0x100e4500], 0x20 */
    _flag_a = (uint32_t)(MEM32(0x100E4500)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10074A2A; /* 0x100749CB: jge 0x10074a2a */
L_100749CD:
    ecx = 0x100E4500u; /* 0x100749CD: mov ecx, 0x100e4500 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100749D2: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x100749D3: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
L_100749D7:
    PUSH32(esp, 0x100E0EF0u); /* 0x100749D7: push 0x100e0ef0 */
    RECOMP_ICALL(MEM32(0x100E512C)); /* 0x100749DC: call dword ptr [0x100e512c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100749E2: mov esi, eax */
    /* test esi, esi */ /* 0x100749E4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074A22; /* 0x100749E6: jne 0x10074a22 */
L_100749E8:
    PUSH32(esp, 0x308u); /* 0x100749E8: push 0x308 */
    RECOMP_CALL(sub_1000EE11); /* 0x100749ED: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100749F2: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x100749F4: pop ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x100749F5: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100749F8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x100749FC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074A20; /* 0x100749FE: je 0x10074a20 */
L_10074A00:
    PUSH32(esp, 0x10077AF5u); /* 0x10074A00: push 0x10077af5 */
    PUSH32(esp, 0x10077AE7u); /* 0x10074A05: push 0x10077ae7 */
    PUSH32(esp, 0x60u); /* 0x10074A0A: push 0x60 */
    PUSH32(esp, 8); /* 0x10074A0C: push 8 */
    eax = esi + 0x4; /* 0x10074A0E: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x10074A11: push eax */
    RECOMP_CALL(sub_100268AC); /* 0x10074A12: call 0x100268ac */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0x304) = (uint8_t)(0); /* 0x10074A17: mov byte ptr [esi + 0x304], 0 */
    goto L_10074A22; /* 0x10074A1E: jmp 0x10074a22 */
L_10074A20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10074A20: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10074A22:
    MEM8(esi + 0x304) = (uint8_t)(LO8(ebx)); /* 0x10074A22: mov byte ptr [esi + 0x304], bl */
    eax = esi; /* 0x10074A28: mov eax, esi */
L_10074A2A:
    RECOMP_CALL(sub_100149D7); /* 0x10074A2A: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10074A2F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10074A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10074A30u);

L_10074A30:
    PUSH32(esp, esi); /* 0x10074A30: push esi */
    esi = ecx; /* 0x10074A31: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10074A33: push edi */
    SET_LO8(eax, MEM8(esi + 0x304)); /* 0x10074A34: mov al, byte ptr [esi + 0x304] */
    /* test LO8(eax), LO8(eax) */ /* 0x10074A3A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074A4A; /* 0x10074A3C: je 0x10074a4a */
L_10074A3E:
    ecx = 0x100E4500u; /* 0x10074A3E: mov ecx, 0x100e4500 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10074A43: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x10074A46: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
L_10074A4A:
    edi = 0x100E0EF0u; /* 0x10074A4A: mov edi, 0x100e0ef0 */
    PUSH32(esp, edi); /* 0x10074A4F: push edi */
    RECOMP_ICALL(MEM32(0x100E5134)); /* 0x10074A50: call dword ptr [0x100e5134] */
    RECOMP_FLAGS_IN();
    /* cmp LO16(eax), 0x10u */ /* 0x10074A56: cmp ax, 0x10 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x10u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10074A66; /* 0x10074A5A: jae 0x10074a66 */
L_10074A5C:
    PUSH32(esp, esi); /* 0x10074A5C: push esi */
    PUSH32(esp, edi); /* 0x10074A5D: push edi */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x10074A5E: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
    goto L_10074A7F; /* 0x10074A64: jmp 0x10074a7f */
L_10074A66:
    PUSH32(esp, 0x10077AF5u); /* 0x10074A66: push 0x10077af5 */
    PUSH32(esp, 0x60u); /* 0x10074A6B: push 0x60 */
    PUSH32(esp, 8); /* 0x10074A6D: push 8 */
    eax = esi + 0x4; /* 0x10074A6F: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x10074A72: push eax */
    RECOMP_CALL(sub_1009E24F); /* 0x10074A73: call 0x1009e24f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10074A78: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10074A79: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10074A7E: pop ecx */
L_10074A7F:
    edi = POP32_VAL(esp); /* 0x10074A7F: pop edi */
    esi = POP32_VAL(esp); /* 0x10074A80: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10074A81: ret  */
    RECOMP_REGS_OUT();
}

void sub_10074A82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10074A82u);

L_10074A82:
    PUSH32(esp, ebp); /* 0x10074A82: push ebp */
    ebp = esp; /* 0x10074A83: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10074A85: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10074A88: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) & 0; /* 0x10074A8B: and dword ptr [esp + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp + 0x4; /* 0x10074A90: lea eax, [esp + 4] */
    PUSH32(esp, ebx); /* 0x10074A94: push ebx */
    PUSH32(esp, esi); /* 0x10074A95: push esi */
    PUSH32(esp, edi); /* 0x10074A96: push edi */
    edi = ecx; /* 0x10074A97: mov edi, ecx */
    MEM32(esp + 0x14) = eax; /* 0x10074A99: mov dword ptr [esp + 0x14], eax */
    RECOMP_CALL(sub_10023AF4); /* 0x10074A9D: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ebx = edi + 0x144; /* 0x10074AA2: lea ebx, [edi + 0x144] */
    ecx = ebx; /* 0x10074AA8: mov ecx, ebx */
    RECOMP_CALL(sub_10023D1E); /* 0x10074AAA: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    edx = edi + 0x13C; /* 0x10074AAF: lea edx, [edi + 0x13c] */
    goto L_10074AEF; /* 0x10074AB5: jmp 0x10074aef */
L_10074AB7:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x10074AB7: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10074ACD; /* 0x10074ABB: je 0x10074acd */
L_10074ABD:
    eax = MEM32(eax + 0x8); /* 0x10074ABD: mov eax, dword ptr [eax + 8] */
    /* cmp eax, MEM32(edi + 0x154) */ /* 0x10074AC0: cmp eax, dword ptr [edi + 0x154] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x154));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10074AF5; /* 0x10074AC6: jb 0x10074af5 */
L_10074AC8:
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x10074AC8: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10074AF5; /* 0x10074ACB: ja 0x10074af5 */
L_10074ACD:
    esi = MEM32(edx); /* 0x10074ACD: mov esi, dword ptr [edx] */
    /* test esi, esi */ /* 0x10074ACF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074ADF; /* 0x10074AD1: je 0x10074adf */
L_10074AD3:
    eax = MEM32(esi + 0xC); /* 0x10074AD3: mov eax, dword ptr [esi + 0xc] */
    MEM32(edx) = eax; /* 0x10074AD6: mov dword ptr [edx], eax */
    /* test eax, eax */ /* 0x10074AD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074ADF; /* 0x10074ADA: jne 0x10074adf */
L_10074ADC:
    MEM32(edx + 0x4) = edx; /* 0x10074ADC: mov dword ptr [edx + 4], edx */
L_10074ADF:
    ecx = esi + 0xC; /* 0x10074ADF: lea ecx, [esi + 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x10074AE2: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x14); /* 0x10074AE5: mov eax, dword ptr [esp + 0x14] */
    MEM32(eax) = esi; /* 0x10074AE9: mov dword ptr [eax], esi */
    MEM32(esp + 0x14) = ecx; /* 0x10074AEB: mov dword ptr [esp + 0x14], ecx */
L_10074AEF:
    eax = MEM32(edx); /* 0x10074AEF: mov eax, dword ptr [edx] */
    /* test eax, eax */ /* 0x10074AF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074AB7; /* 0x10074AF3: jne 0x10074ab7 */
L_10074AF5:
    MEM32(ebx) = 0; /* 0x10074AF5: mov dword ptr [ebx], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x10074AFB: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    goto L_10074B1B; /* 0x10074B00: jmp 0x10074b1b */
L_10074B02:
    eax = MEM32(ecx + 0xC); /* 0x10074B02: mov eax, dword ptr [ecx + 0xc] */
    MEM32(esp + 0x10) = eax; /* 0x10074B05: mov dword ptr [esp + 0x10], eax */
    /* test eax, eax */ /* 0x10074B09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074B15; /* 0x10074B0B: jne 0x10074b15 */
L_10074B0D:
    eax = esp + 0x10; /* 0x10074B0D: lea eax, [esp + 0x10] */
    MEM32(esp + 0x14) = eax; /* 0x10074B11: mov dword ptr [esp + 0x14], eax */
L_10074B15:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x10074B15: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(ecx)); /* 0x10074B18: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10074B1A: pop ecx */
L_10074B1B:
    ecx = MEM32(esp + 0x10); /* 0x10074B1B: mov ecx, dword ptr [esp + 0x10] */
    /* test ecx, ecx */ /* 0x10074B1F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074B02; /* 0x10074B21: jne 0x10074b02 */
L_10074B23:
    edi = POP32_VAL(esp); /* 0x10074B23: pop edi */
    esi = POP32_VAL(esp); /* 0x10074B24: pop esi */
    ebx = POP32_VAL(esp); /* 0x10074B25: pop ebx */
    esp = ebp; /* 0x10074B26: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10074B28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10074B29: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10074B2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10074B2Cu);

L_10074B2C:
    PUSH32(esp, ebp); /* 0x10074B2C: push ebp */
    ebp = esp; /* 0x10074B2D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10074B2F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10074B32: push ebx */
    PUSH32(esp, esi); /* 0x10074B33: push esi */
    ebx = ecx; /* 0x10074B34: mov ebx, ecx */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x10074B36: mov byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10074B3A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10074B3C: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10074B3D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = esi; /* 0x10074B3F: mov dword ptr [ebp - 0xc], esi */
    /* cmp MEM32(ebx + 0x2C), esi */ /* 0x10074B42: cmp dword ptr [ebx + 0x2c], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x2C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10074BAE; /* 0x10074B45: jle 0x10074bae */
L_10074B47:
    eax = MEM32(ebx + 0x20); /* 0x10074B47: mov eax, dword ptr [ebx + 0x20] */
    eax = MEM32(eax + esi * 4); /* 0x10074B4A: mov eax, dword ptr [eax + esi*4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x10074B4D: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x10074B50: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074BA5; /* 0x10074B52: je 0x10074ba5 */
L_10074B54:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10074B54: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x10074B56: mov dword ptr [ebp - 8], ecx */
    /* cmp MEM32(eax + 0x78), ecx */ /* 0x10074B59: cmp dword ptr [eax + 0x78], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x78)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10074BA5; /* 0x10074B5C: jle 0x10074ba5 */
L_10074B5E:
    esi = MEM32(ebp + (-0x10)); /* 0x10074B5E: mov esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x38u; /* 0x10074B61: add eax, 0x38 */
    _flag_k = FK_ADD;
L_10074B64:
    PUSH32(esp, ecx); /* 0x10074B64: push ecx */
    ecx = eax; /* 0x10074B65: mov ecx, eax */
    RECOMP_CALL(sub_10072F00); /* 0x10074B67: call 0x10072f00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10074B6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074B93; /* 0x10074B6E: je 0x10074b93 */
L_10074B70:
    eax = MEM32(eax + 0xC0); /* 0x10074B70: mov eax, dword ptr [eax + 0xc0] */
    /* cmp eax, MEM32(ebx + 0x154) */ /* 0x10074B76: cmp eax, dword ptr [ebx + 0x154] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x154));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10074B81; /* 0x10074B7C: jae 0x10074b81 */
L_10074B7E:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10074B7E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10074B81:
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x10074B81: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10074B8D; /* 0x10074B85: je 0x10074b8d */
L_10074B87:
    /* cmp edi, eax */ /* 0x10074B87: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10074B91; /* 0x10074B89: ja 0x10074b91 */
L_10074B8B:
    goto L_10074B93; /* 0x10074B8B: jmp 0x10074b93 */
L_10074B8D:
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x10074B8D: mov byte ptr [ebp - 1], 1 */
L_10074B91:
    edi = eax; /* 0x10074B91: mov edi, eax */
L_10074B93:
    ecx = MEM32(ebp + (-0x8)); /* 0x10074B93: mov ecx, dword ptr [ebp - 8] */
    eax = esi + 0x38; /* 0x10074B96: lea eax, [esi + 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10074B99: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x10074B9A: mov dword ptr [ebp - 8], ecx */
    /* cmp ecx, MEM32(esi + 0x78) */ /* 0x10074B9D: cmp ecx, dword ptr [esi + 0x78] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x78));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10074B64; /* 0x10074BA0: jl 0x10074b64 */
L_10074BA2:
    esi = MEM32(ebp + (-0xC)); /* 0x10074BA2: mov esi, dword ptr [ebp - 0xc] */
L_10074BA5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10074BA5: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = esi; /* 0x10074BA6: mov dword ptr [ebp - 0xc], esi */
    /* cmp esi, MEM32(ebx + 0x2C) */ /* 0x10074BA9: cmp esi, dword ptr [ebx + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10074B47; /* 0x10074BAC: jl 0x10074b47 */
L_10074BAE:
    eax = edi; /* 0x10074BAE: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x10074BB0: pop edi */
    esi = POP32_VAL(esp); /* 0x10074BB1: pop esi */
    ebx = POP32_VAL(esp); /* 0x10074BB2: pop ebx */
    esp = ebp; /* 0x10074BB3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10074BB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10074BB6: ret  */
    RECOMP_REGS_OUT();
}

void sub_10074BB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10074BB7u);

L_10074BB7:
    PUSH32(esp, ebp); /* 0x10074BB7: push ebp */
    ebp = esp; /* 0x10074BB8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10074BBA: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10074BBD: push ecx */
    PUSH32(esp, ebx); /* 0x10074BBE: push ebx */
    PUSH32(esp, esi); /* 0x10074BBF: push esi */
    PUSH32(esp, edi); /* 0x10074BC0: push edi */
    esi = ecx; /* 0x10074BC1: mov esi, ecx */
    RECOMP_CALL(sub_10023AF4); /* 0x10074BC3: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ebx = esi + 0x144; /* 0x10074BC8: lea ebx, [esi + 0x144] */
    ecx = ebx; /* 0x10074BCE: mov ecx, ebx */
    RECOMP_CALL(sub_10023D1E); /* 0x10074BD0: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x10074BD5: mov ecx, esi */
    RECOMP_CALL(sub_10074B2C); /* 0x10074BD7: call 0x10074b2c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10074BDC: mov edi, eax */
    /* cmp edi, MEM32(esi + 0x158) */ /* 0x10074BDE: cmp edi, dword ptr [esi + 0x158] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x158));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10074BFA; /* 0x10074BE4: jbe 0x10074bfa */
L_10074BE6:
    eax = MEM32(esi + 0x154); /* 0x10074BE6: mov eax, dword ptr [esi + 0x154] */
    /* cmp MEM32(esi + 0x158), eax */ /* 0x10074BEC: cmp dword ptr [esi + 0x158], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x158)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x158) = edi; /* 0x10074BF2: mov dword ptr [esi + 0x158], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10074BFC; /* 0x10074BF8: je 0x10074bfc */
L_10074BFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10074BFA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10074BFC:
    MEM32(ebx) = 0; /* 0x10074BFC: mov dword ptr [ebx], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x10074C02: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x10074C07: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074C12; /* 0x10074C09: jne 0x10074c12 */
L_10074C0B:
    edi = POP32_VAL(esp); /* 0x10074C0B: pop edi */
    esi = POP32_VAL(esp); /* 0x10074C0C: pop esi */
    ebx = POP32_VAL(esp); /* 0x10074C0D: pop ebx */
    esp = ebp; /* 0x10074C0E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10074C10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10074C11: ret  */
L_10074C12:
    PUSH32(esp, edi); /* 0x10074C12: push edi */
    ecx = esi; /* 0x10074C13: mov ecx, esi */
    RECOMP_CALL(sub_10074A82); /* 0x10074C15: call 0x10074a82 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_10023AF4); /* 0x10074C1A: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x10074C1F: mov ecx, ebx */
    RECOMP_CALL(sub_10023D1E); /* 0x10074C21: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    /* cmp edi, 0xFFFFFFFFu */ /* 0x10074C26: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074C44; /* 0x10074C29: jne 0x10074c44 */
L_10074C2B:
    MEM32(esi + 0x154) = 0; /* 0x10074C2B: mov dword ptr [esi + 0x154], 0 */
    ecx = esi; /* 0x10074C35: mov ecx, esi */
    RECOMP_CALL(sub_10074B2C); /* 0x10074C37: call 0x10074b2c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x158) = eax; /* 0x10074C3C: mov dword ptr [esi + 0x158], eax */
    goto L_10074C4A; /* 0x10074C42: jmp 0x10074c4a */
L_10074C44:
    MEM32(esi + 0x154) = edi; /* 0x10074C44: mov dword ptr [esi + 0x154], edi */
L_10074C4A:
    eax = MEM32(esi + 0x154); /* 0x10074C4A: mov eax, dword ptr [esi + 0x154] */
    /* cmp eax, MEM32(esi + 0x158) */ /* 0x10074C50: cmp eax, dword ptr [esi + 0x158] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x158));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10074BFA; /* 0x10074C56: je 0x10074bfa */
L_10074C58:
    edi = MEM32(esi + 0x158); /* 0x10074C58: mov edi, dword ptr [esi + 0x158] */
    RECOMP_BACKEDGE();
    goto L_10074BFC; /* 0x10074C5E: jmp 0x10074bfc */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10074C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10074C60u);

L_10074C60:
    PUSH32(esp, ebp); /* 0x10074C60: push ebp */
    ebp = esp; /* 0x10074C61: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10074C63: push esi */
    PUSH32(esp, edi); /* 0x10074C64: push edi */
    esi = ecx; /* 0x10074C65: mov esi, ecx */
    RECOMP_CALL(sub_10023AF4); /* 0x10074C67: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    edi = esi + 0x144; /* 0x10074C6C: lea edi, [esi + 0x144] */
    ecx = edi; /* 0x10074C72: mov ecx, edi */
    RECOMP_CALL(sub_10023D1E); /* 0x10074C74: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x150; /* 0x10074C79: lea ecx, [esi + 0x150] */
L_10074C7F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10074C7F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10074C81: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x10074C82: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10074C86: inc eax */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x10074C87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074C7F; /* 0x10074C89: je 0x10074c7f */
L_10074C8B:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10074C8B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10074C7F; /* 0x10074C8E: je 0x10074c7f */
L_10074C90:
    edx = MEM32(ebp + 0x8); /* 0x10074C90: mov edx, dword ptr [ebp + 8] */
    MEM32(edx + 0x8) = eax; /* 0x10074C93: mov dword ptr [edx + 8], eax */
    ecx = edx + 0xC; /* 0x10074C96: lea ecx, [edx + 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x10074C99: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x140); /* 0x10074C9C: mov eax, dword ptr [esi + 0x140] */
    MEM32(eax) = edx; /* 0x10074CA2: mov dword ptr [eax], edx */
    MEM32(esi + 0x140) = ecx; /* 0x10074CA4: mov dword ptr [esi + 0x140], ecx */
    MEM32(edi) = 0; /* 0x10074CAA: mov dword ptr [edi], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x10074CB0: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x10074CB5: pop edi */
    esi = POP32_VAL(esp); /* 0x10074CB6: pop esi */
    ebp = POP32_VAL(esp); /* 0x10074CB7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10074CB8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10074CBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10074CBBu);

L_10074CBB:
    PUSH32(esp, ebp); /* 0x10074CBB: push ebp */
    ebp = esp; /* 0x10074CBC: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x10074CBE: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(edx + 0x194); /* 0x10074CC1: mov eax, dword ptr [edx + 0x194] */
    /* test eax, 0x20000000u */ /* 0x10074CC7: test eax, 0x20000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074CD7; /* 0x10074CCC: je 0x10074cd7 */
L_10074CCE:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10074CCE: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x10074CD1: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10074CD4: pop ecx */
    goto L_10074CEA; /* 0x10074CD5: jmp 0x10074cea */
L_10074CD7:
    eax = MEM32(ebp + 0x8); /* 0x10074CD7: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x10074CDA: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0xC); /* 0x10074CDC: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x10074CDF: mov dword ptr [ecx + 4], eax */
    PUSH32(esp, ecx); /* 0x10074CE2: push ecx */
    ecx = edx; /* 0x10074CE3: mov ecx, edx */
    RECOMP_CALL(sub_10074C60); /* 0x10074CE5: call 0x10074c60 */
    RECOMP_FLAGS_IN();
L_10074CEA:
    ebp = POP32_VAL(esp); /* 0x10074CEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x10074CEB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_10074CEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10074CEEu);

L_10074CEE:
    PUSH32(esp, ebp); /* 0x10074CEE: push ebp */
    ebp = esp; /* 0x10074CEF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10074CF1: push ecx */
    PUSH32(esp, esi); /* 0x10074CF2: push esi */
    PUSH32(esp, edi); /* 0x10074CF3: push edi */
    edi = ecx; /* 0x10074CF4: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10074CF6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x10074CF8: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x10074CFB: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0FFFFFFFu);
    eax = eax & 0x0FFFFFFFu; /* 0x10074CFD: and eax, 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10074D02: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10074D03: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10074D31; /* 0x10074D04: je 0x10074d31 */
L_10074D06:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10074D06: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10074D3A; /* 0x10074D07: jne 0x10074d3a */
L_10074D09:
    eax = MEM32(ecx + 0x8); /* 0x10074D09: mov eax, dword ptr [ecx + 8] */
    ecx = edi + 0x15C; /* 0x10074D0C: lea ecx, [edi + 0x15c] */
    MEM32(ebp + 0x8) = eax; /* 0x10074D12: mov dword ptr [ebp + 8], eax */
    eax = ebp + (-0x4); /* 0x10074D15: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10074D18: push eax */
    eax = ebp + 0x8; /* 0x10074D19: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10074D1C: push eax */
    RECOMP_CALL(sub_10026174); /* 0x10074D1D: call 0x10026174 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10074D22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074D3A; /* 0x10074D24: je 0x10074d3a */
L_10074D26:
    ecx = MEM32(edi + 0x20); /* 0x10074D26: mov ecx, dword ptr [edi + 0x20] */
    eax = MEM32(ebp + (-0x4)); /* 0x10074D29: mov eax, dword ptr [ebp - 4] */
    esi = MEM32(ecx + eax * 4); /* 0x10074D2C: mov esi, dword ptr [ecx + eax*4] */
    goto L_10074D3A; /* 0x10074D2F: jmp 0x10074d3a */
L_10074D31:
    ecx = MEM32(ecx + 0x8); /* 0x10074D31: mov ecx, dword ptr [ecx + 8] */
    eax = MEM32(edi + 0x20); /* 0x10074D34: mov eax, dword ptr [edi + 0x20] */
    esi = MEM32(eax + ecx * 4); /* 0x10074D37: mov esi, dword ptr [eax + ecx*4] */
L_10074D3A:
    edi = POP32_VAL(esp); /* 0x10074D3A: pop edi */
    eax = esi; /* 0x10074D3B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10074D3D: pop esi */
    esp = ebp; /* 0x10074D3E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10074D40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10074D41: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10074D44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10074D44u);

L_10074D44:
    PUSH32(esp, ebx); /* 0x10074D44: push ebx */
    PUSH32(esp, esi); /* 0x10074D45: push esi */
    PUSH32(esp, edi); /* 0x10074D46: push edi */
    edi = ecx; /* 0x10074D47: mov edi, ecx */
    ebx = edi + 0x134; /* 0x10074D49: lea ebx, [edi + 0x134] */
    ecx = ebx; /* 0x10074D4F: mov ecx, ebx */
    RECOMP_CALL(sub_1006F14E); /* 0x10074D51: call 0x1006f14e */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0x130); /* 0x10074D56: mov edx, dword ptr [edi + 0x130] */
    /* test edx, edx */ /* 0x10074D5C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074D64; /* 0x10074D5E: jne 0x10074d64 */
L_10074D60:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10074D60: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10074D91; /* 0x10074D62: jmp 0x10074d91 */
L_10074D64:
    esi = MEM32(edx + 0x4); /* 0x10074D64: mov esi, dword ptr [edx + 4] */
    /* cmp edx, esi */ /* 0x10074D67: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074D74; /* 0x10074D69: jne 0x10074d74 */
L_10074D6B:
    _flag_a = (uint32_t)(MEM32(edi + 0x130)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x130) = MEM32(edi + 0x130) & 0; /* 0x10074D6B: and dword ptr [edi + 0x130], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10074D86; /* 0x10074D72: jmp 0x10074d86 */
L_10074D74:
    eax = MEM32(esi + 0x4); /* 0x10074D74: mov eax, dword ptr [esi + 4] */
    MEM32(eax + 0x8) = edx; /* 0x10074D77: mov dword ptr [eax + 8], edx */
    ecx = MEM32(edi + 0x130); /* 0x10074D7A: mov ecx, dword ptr [edi + 0x130] */
    eax = MEM32(esi + 0x4); /* 0x10074D80: mov eax, dword ptr [esi + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x10074D83: mov dword ptr [ecx + 4], eax */
L_10074D86:
    /* test esi, esi */ /* 0x10074D86: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074D91; /* 0x10074D88: je 0x10074d91 */
L_10074D8A:
    MEM32(esi + 0xC) = 1; /* 0x10074D8A: mov dword ptr [esi + 0xc], 1 */
L_10074D91:
    MEM32(ebx) = 0; /* 0x10074D91: mov dword ptr [ebx], 0 */
    ecx = ebx + 0x4; /* 0x10074D97: lea ecx, [ebx + 4] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x10074D9A: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + edx; edx = _old; MEM32(ecx) = _sum; } /* 0x10074D9D: lock xadd dword ptr [ecx], edx */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x10074DA1: pop edi */
    eax = esi; /* 0x10074DA2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10074DA4: pop esi */
    ebx = POP32_VAL(esp); /* 0x10074DA5: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10074DA6: ret  */
    RECOMP_REGS_OUT();
}

void sub_10074DA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10074DA7u);

L_10074DA7:
    PUSH32(esp, ebp); /* 0x10074DA7: push ebp */
    ebp = esp; /* 0x10074DA8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10074DAA: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10074DAD: push ebx */
    PUSH32(esp, esi); /* 0x10074DAE: push esi */
    PUSH32(esp, edi); /* 0x10074DAF: push edi */
    edi = ecx; /* 0x10074DB0: mov edi, ecx */
    MEM32(ebp + (-0xC)) = edi; /* 0x10074DB2: mov dword ptr [ebp - 0xc], edi */
    eax = edi + 0x1A0; /* 0x10074DB5: lea eax, [edi + 0x1a0] */
    edi = eax; /* 0x10074DBB: mov edi, eax */
L_10074DBD:
    esi = MEM32(edi); /* 0x10074DBD: mov esi, dword ptr [edi] */
    eax = esi; /* 0x10074DBF: mov eax, esi */
    ecx = MEM32(edi + 0x4); /* 0x10074DC1: mov ecx, dword ptr [edi + 4] */
    edx = ecx; /* 0x10074DC4: mov edx, ecx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x10074DC6: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x10074DC9: mov ecx, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x8); /* 0x10074DCC: mov ebx, dword ptr [ebp + 8] */
    { extern uint64_t void_cmpxchg8b(uint32_t, uint64_t, uint64_t, uint32_t); uint32_t _cx8_address = (uint32_t)(edi); uint64_t _cx8_expected = ((uint64_t)edx << 32) | eax; uint64_t _cx8_replacement = ((uint64_t)ecx << 32) | ebx; uint32_t _cx8_flags = recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df); uint64_t _cx8_old = void_cmpxchg8b(_cx8_address, _cx8_expected, _cx8_replacement, 0x10074DCFu); uint32_t _cx8_match = (_cx8_old == _cx8_expected); if (!_cx8_match) { eax = (uint32_t)_cx8_old; edx = (uint32_t)(_cx8_old >> 32); } _flag_a = (_cx8_flags & ~0x40u) | (_cx8_match << 6); _flag_b = 0; _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; } /* 0x10074DCF: lock cmpxchg8b qword ptr [edi] */
    /* cmp eax, esi */ /* 0x10074DD3: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074DBD; /* 0x10074DD5: jne 0x10074dbd */
L_10074DD7:
    /* cmp edx, MEM32(ebp + (-0x8)) */ /* 0x10074DD7: cmp edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074DBD; /* 0x10074DDA: jne 0x10074dbd */
L_10074DDC:
    edi = MEM32(ebp + (-0xC)); /* 0x10074DDC: mov edi, dword ptr [ebp - 0xc] */
    ebx = edi + 0x134; /* 0x10074DDF: lea ebx, [edi + 0x134] */
    ecx = ebx; /* 0x10074DE5: mov ecx, ebx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x10074DE7: mov dword ptr [ebp - 0x14], ebx */
    RECOMP_CALL(sub_1006F14E); /* 0x10074DEA: call 0x1006f14e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x10074DEF: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x2C), 0 */ /* 0x10074DF3: cmp dword ptr [edi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10074F5D; /* 0x10074DF7: jle 0x10074f5d */
L_10074DFD:
    ebx = MEM32(ebp + (-0xC)); /* 0x10074DFD: mov ebx, dword ptr [ebp - 0xc] */
L_10074E00:
    eax = MEM32(edi + 0x24); /* 0x10074E00: mov eax, dword ptr [edi + 0x24] */
    ecx = MEM32(eax + ebx * 4); /* 0x10074E03: mov ecx, dword ptr [eax + ebx*4] */
    eax = MEM32(edi + 0x20); /* 0x10074E06: mov eax, dword ptr [edi + 0x20] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x10074E09: mov dword ptr [ebp - 0xc], ecx */
    esi = ecx + 0x10; /* 0x10074E0C: lea esi, [ecx + 0x10] */
    eax = MEM32(eax + ebx * 4); /* 0x10074E0F: mov eax, dword ptr [eax + ebx*4] */
    ecx = ebp + (-0x4); /* 0x10074E12: lea ecx, [ebp - 4] */
    PUSH32(esp, esi); /* 0x10074E15: push esi */
    PUSH32(esp, ecx); /* 0x10074E16: push ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x10074E17: mov dword ptr [ebp - 8], eax */
    eax = MEM32(esi + 0x40); /* 0x10074E1A: mov eax, dword ptr [esi + 0x40] */
    PUSH32(esp, eax); /* 0x10074E1D: push eax */
    PUSH32(esp, 0); /* 0x10074E1E: push 0 */
    goto L_10074E7C; /* 0x10074E20: jmp 0x10074e7c */
L_10074E22:
    ecx = MEM32(ebp + 0x8); /* 0x10074E22: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x108));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0x108); /* 0x10074E25: sub ecx, dword ptr [eax + 0x108] */
    _flag_k = FK_CMP;
    /* cmp ecx, 0x7D0u */ /* 0x10074E2B: cmp ecx, 0x7d0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7D0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10074E57; /* 0x10074E31: jbe 0x10074e57 */
L_10074E33:
    /* cmp MEM32(eax + 0x11C), 1 */ /* 0x10074E33: cmp dword ptr [eax + 0x11c], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x11C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074E57; /* 0x10074E3A: jne 0x10074e57 */
L_10074E3C:
    MEM32(eax + 0x11C) = 2; /* 0x10074E3C: mov dword ptr [eax + 0x11c], 2 */
    ecx = edi + 0x130; /* 0x10074E46: lea ecx, [edi + 0x130] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x110u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x110u; /* 0x10074E4C: add eax, 0x110 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10074E51: push eax */
    RECOMP_CALL(sub_100750F3); /* 0x10074E52: call 0x100750f3 */
    RECOMP_FLAGS_IN();
L_10074E57:
    ecx = MEM32(ebp + (-0x4)); /* 0x10074E57: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10074E5A: inc ecx */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x10074E5B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10074E74; /* 0x10074E5D: jle 0x10074e74 */
L_10074E5F:
    eax = MEM32(esi + 0x40); /* 0x10074E5F: mov eax, dword ptr [esi + 0x40] */
    edx = ebp + (-0x4); /* 0x10074E62: lea edx, [ebp - 4] */
    PUSH32(esp, esi); /* 0x10074E65: push esi */
    PUSH32(esp, edx); /* 0x10074E66: push edx */
    PUSH32(esp, eax); /* 0x10074E67: push eax */
    PUSH32(esp, ecx); /* 0x10074E68: push ecx */
    RECOMP_CALL(sub_100731A1); /* 0x10074E69: call 0x100731a1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10074E6E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x10074E70: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074E22; /* 0x10074E72: jne 0x10074e22 */
L_10074E74:
    PUSH32(esp, esi); /* 0x10074E74: push esi */
    eax = ebp + (-0x4); /* 0x10074E75: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10074E78: push eax */
    PUSH32(esp, 0); /* 0x10074E79: push 0 */
    PUSH32(esp, ecx); /* 0x10074E7B: push ecx */
L_10074E7C:
    RECOMP_CALL(sub_100731A1); /* 0x10074E7C: call 0x100731a1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10074E81: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074E22; /* 0x10074E83: jne 0x10074e22 */
L_10074E85:
    esi = MEM32(ebp + (-0xC)); /* 0x10074E85: mov esi, dword ptr [ebp - 0xc] */
    ecx = ebp + (-0x4); /* 0x10074E88: lea ecx, [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x60u; /* 0x10074E8B: add esi, 0x60 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x10074E8E: push esi */
    PUSH32(esp, ecx); /* 0x10074E8F: push ecx */
    eax = MEM32(esi + 0x40); /* 0x10074E90: mov eax, dword ptr [esi + 0x40] */
    PUSH32(esp, eax); /* 0x10074E93: push eax */
    PUSH32(esp, 0); /* 0x10074E94: push 0 */
    goto L_10074EF2; /* 0x10074E96: jmp 0x10074ef2 */
L_10074E98:
    ecx = MEM32(ebp + 0x8); /* 0x10074E98: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x108));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0x108); /* 0x10074E9B: sub ecx, dword ptr [eax + 0x108] */
    _flag_k = FK_CMP;
    /* cmp ecx, 0x7D0u */ /* 0x10074EA1: cmp ecx, 0x7d0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7D0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10074ECD; /* 0x10074EA7: jbe 0x10074ecd */
L_10074EA9:
    /* cmp MEM32(eax + 0x11C), 1 */ /* 0x10074EA9: cmp dword ptr [eax + 0x11c], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x11C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074ECD; /* 0x10074EB0: jne 0x10074ecd */
L_10074EB2:
    MEM32(eax + 0x11C) = 2; /* 0x10074EB2: mov dword ptr [eax + 0x11c], 2 */
    ecx = edi + 0x130; /* 0x10074EBC: lea ecx, [edi + 0x130] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x110u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x110u; /* 0x10074EC2: add eax, 0x110 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10074EC7: push eax */
    RECOMP_CALL(sub_100750F3); /* 0x10074EC8: call 0x100750f3 */
    RECOMP_FLAGS_IN();
L_10074ECD:
    ecx = MEM32(ebp + (-0x4)); /* 0x10074ECD: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10074ED0: inc ecx */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x10074ED1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10074EEA; /* 0x10074ED3: jle 0x10074eea */
L_10074ED5:
    eax = MEM32(esi + 0x40); /* 0x10074ED5: mov eax, dword ptr [esi + 0x40] */
    edx = ebp + (-0x4); /* 0x10074ED8: lea edx, [ebp - 4] */
    PUSH32(esp, esi); /* 0x10074EDB: push esi */
    PUSH32(esp, edx); /* 0x10074EDC: push edx */
    PUSH32(esp, eax); /* 0x10074EDD: push eax */
    PUSH32(esp, ecx); /* 0x10074EDE: push ecx */
    RECOMP_CALL(sub_100731A1); /* 0x10074EDF: call 0x100731a1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10074EE4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x10074EE6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074E98; /* 0x10074EE8: jne 0x10074e98 */
L_10074EEA:
    PUSH32(esp, esi); /* 0x10074EEA: push esi */
    eax = ebp + (-0x4); /* 0x10074EEB: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10074EEE: push eax */
    PUSH32(esp, 0); /* 0x10074EEF: push 0 */
    PUSH32(esp, ecx); /* 0x10074EF1: push ecx */
L_10074EF2:
    RECOMP_CALL(sub_100731A1); /* 0x10074EF2: call 0x100731a1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10074EF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074E98; /* 0x10074EF9: jne 0x10074e98 */
L_10074EFB:
    esi = MEM32(ebp + (-0x8)); /* 0x10074EFB: mov esi, dword ptr [ebp - 8] */
    eax = ebp + (-0x10); /* 0x10074EFE: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10074F01: push eax */
    ecx = esi; /* 0x10074F02: mov ecx, esi */
    RECOMP_CALL(sub_100730E2); /* 0x10074F04: call 0x100730e2 */
    RECOMP_FLAGS_IN();
    goto L_10074F4C; /* 0x10074F09: jmp 0x10074f4c */
L_10074F0B:
    ecx = MEM32(ebp + 0x8); /* 0x10074F0B: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0xC8); /* 0x10074F0E: sub ecx, dword ptr [eax + 0xc8] */
    _flag_k = FK_CMP;
    /* cmp ecx, 0x7D0u */ /* 0x10074F14: cmp ecx, 0x7d0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7D0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10074F40; /* 0x10074F1A: jbe 0x10074f40 */
L_10074F1C:
    /* cmp MEM32(eax + 0xE0), 1 */ /* 0x10074F1C: cmp dword ptr [eax + 0xe0], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0xE0)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074F40; /* 0x10074F23: jne 0x10074f40 */
L_10074F25:
    MEM32(eax + 0xE0) = 2; /* 0x10074F25: mov dword ptr [eax + 0xe0], 2 */
    ecx = edi + 0x130; /* 0x10074F2F: lea ecx, [edi + 0x130] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xD4u; /* 0x10074F35: add eax, 0xd4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10074F3A: push eax */
    RECOMP_CALL(sub_100750F3); /* 0x10074F3B: call 0x100750f3 */
    RECOMP_FLAGS_IN();
L_10074F40:
    PUSH32(esp, ecx); /* 0x10074F40: push ecx */
    eax = ebp + (-0x10); /* 0x10074F41: lea eax, [ebp - 0x10] */
    ecx = esi; /* 0x10074F44: mov ecx, esi */
    PUSH32(esp, eax); /* 0x10074F46: push eax */
    RECOMP_CALL(sub_10073116); /* 0x10074F47: call 0x10073116 */
    RECOMP_FLAGS_IN();
L_10074F4C:
    /* test eax, eax */ /* 0x10074F4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074F0B; /* 0x10074F4E: jne 0x10074f0b */
L_10074F50:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10074F50: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi + 0x2C) */ /* 0x10074F51: cmp ebx, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10074E00; /* 0x10074F54: jl 0x10074e00 */
L_10074F5A:
    ebx = MEM32(ebp + (-0x14)); /* 0x10074F5A: mov ebx, dword ptr [ebp - 0x14] */
L_10074F5D:
    MEM32(ebx) = 0; /* 0x10074F5D: mov dword ptr [ebx], 0 */
    eax = ebx + 0x4; /* 0x10074F63: lea eax, [ebx + 4] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10074F66: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x10074F69: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x10074F6D: pop edi */
    esi = POP32_VAL(esp); /* 0x10074F6E: pop esi */
    ebx = POP32_VAL(esp); /* 0x10074F6F: pop ebx */
    esp = ebp; /* 0x10074F70: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10074F72: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10074F73: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10074F76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10074F76u);

L_10074F76:
    PUSH32(esp, ebp); /* 0x10074F76: push ebp */
    ebp = esp; /* 0x10074F77: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10074F79: push esi */
    PUSH32(esp, edi); /* 0x10074F7A: push edi */
    edi = ecx; /* 0x10074F7B: mov edi, ecx */
    esi = edi + 0x134; /* 0x10074F7D: lea esi, [edi + 0x134] */
    ecx = esi; /* 0x10074F83: mov ecx, esi */
    RECOMP_CALL(sub_1006F14E); /* 0x10074F85: call 0x1006f14e */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x10074F8A: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM32(edx + 0xC), 2 */ /* 0x10074F8D: cmp dword ptr [edx + 0xc], 2 */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074FC1; /* 0x10074F91: jne 0x10074fc1 */
L_10074F93:
    ecx = MEM32(edx + 0x4); /* 0x10074F93: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(edx + 0x8); /* 0x10074F96: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x10074F99: mov dword ptr [ecx + 8], eax */
    ecx = MEM32(edx + 0x8); /* 0x10074F9C: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(edx + 0x4); /* 0x10074F9F: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x10074FA2: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edi + 0x130); /* 0x10074FA5: mov eax, dword ptr [edi + 0x130] */
    /* cmp edx, eax */ /* 0x10074FAB: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074FC1; /* 0x10074FAD: jne 0x10074fc1 */
L_10074FAF:
    /* cmp eax, MEM32(eax + 0x4) */ /* 0x10074FAF: cmp eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074FB8; /* 0x10074FB2: jne 0x10074fb8 */
L_10074FB4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10074FB4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10074FBB; /* 0x10074FB6: jmp 0x10074fbb */
L_10074FB8:
    eax = MEM32(eax + 0x8); /* 0x10074FB8: mov eax, dword ptr [eax + 8] */
L_10074FBB:
    MEM32(edi + 0x130) = eax; /* 0x10074FBB: mov dword ptr [edi + 0x130], eax */
L_10074FC1:
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0xC) = MEM32(edx + 0xC) & 0; /* 0x10074FC1: and dword ptr [edx + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x4; /* 0x10074FC5: lea eax, [esi + 4] */
    MEM32(esi) = 0; /* 0x10074FC8: mov dword ptr [esi], 0 */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10074FCE: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x10074FD1: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x10074FD5: pop edi */
    esi = POP32_VAL(esp); /* 0x10074FD6: pop esi */
    ebp = POP32_VAL(esp); /* 0x10074FD7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10074FD8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10074FDB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10074FDBu);

L_10074FDB:
    ecx = MEM32(ecx); /* 0x10074FDB: mov ecx, dword ptr [ecx] */
    eax = MEM32(ecx); /* 0x10074FDD: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x14)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_10074FE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10074FE2u);

L_10074FE2:
    PUSH32(esp, edi); /* 0x10074FE2: push edi */
    edi = ecx; /* 0x10074FE3: mov edi, ecx */
    /* cmp MEM32(edi + 0x4), 0 */ /* 0x10074FE5: cmp dword ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007502A; /* 0x10074FE9: jle 0x1007502a */
L_10074FEB:
    PUSH32(esp, ebx); /* 0x10074FEB: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10074FEC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), ebx */ /* 0x10074FEE: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10075012; /* 0x10074FF0: jle 0x10075012 */
L_10074FF2:
    PUSH32(esp, esi); /* 0x10074FF2: push esi */
L_10074FF3:
    eax = MEM32(edi + 0x8); /* 0x10074FF3: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + ebx * 4); /* 0x10074FF6: mov eax, dword ptr [eax + ebx*4] */
    /* test eax, eax */ /* 0x10074FF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007500C; /* 0x10074FFB: je 0x1007500c */
L_10074FFD:
    esi = MEM32(eax); /* 0x10074FFD: mov esi, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x10074FFF: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10075000: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10075005: mov eax, esi */
    ecx = POP32_VAL(esp); /* 0x10075007: pop ecx */
    /* test esi, esi */ /* 0x10075008: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074FFD; /* 0x1007500A: jne 0x10074ffd */
L_1007500C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1007500C: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi) */ /* 0x1007500D: cmp ebx, dword ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10074FF3; /* 0x1007500F: jl 0x10074ff3 */
L_10075011:
    esi = POP32_VAL(esp); /* 0x10075011: pop esi */
L_10075012:
    eax = MEM32(edi); /* 0x10075012: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) & 0; /* 0x10075014: and dword ptr [edi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x10075018: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x10075018: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1007501B: push eax */
    PUSH32(esp, 0); /* 0x1007501C: push 0 */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x1007501E: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_10011533); /* 0x10075021: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10075026: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x10075029: pop ebx */
L_1007502A:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x1007502A: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007502D: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10075032: pop ecx */
    edi = POP32_VAL(esp); /* 0x10075033: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10075034: ret  */
    RECOMP_REGS_OUT();
}

void sub_10075035(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075035u);

L_10075035:
    PUSH32(esp, ebx); /* 0x10075035: push ebx */
    PUSH32(esp, esi); /* 0x10075036: push esi */
    esi = MEM32(0x100E5130); /* 0x10075037: mov esi, dword ptr [0x100e5130] */
    PUSH32(esp, edi); /* 0x1007503D: push edi */
    edi = ecx; /* 0x1007503E: mov edi, ecx */
    PUSH32(esp, edi); /* 0x10075040: push edi */
    RECOMP_ICALL(esi); /* 0x10075041: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10075043: push eax */
    RECOMP_CALL(sub_1007525F); /* 0x10075044: call 0x1007525f */
    RECOMP_FLAGS_IN();
    eax = edi + 0x8; /* 0x10075049: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x1007504C: push eax */
    RECOMP_ICALL(esi); /* 0x1007504D: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007504F: push eax */
    RECOMP_CALL(sub_1007525F); /* 0x10075050: call 0x1007525f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x10075055: push dword ptr [edi + 0x10] */
    RECOMP_CALL(sub_1007525F); /* 0x10075058: call 0x1007525f */
    RECOMP_FLAGS_IN();
    ebx = MEM32(edi + 0x30); /* 0x1007505D: mov ebx, dword ptr [edi + 0x30] */
    /* test ebx, ebx */ /* 0x10075060: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075099; /* 0x10075062: je 0x10075099 */
L_10075064:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10075064: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x28), esi */ /* 0x10075066: cmp dword ptr [edi + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10075081; /* 0x10075069: jle 0x10075081 */
L_1007506B:
    eax = MEM32(ebx); /* 0x1007506B: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax + esi * 4); /* 0x1007506D: mov ecx, dword ptr [eax + esi*4] */
    /* test ecx, ecx */ /* 0x10075070: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007507B; /* 0x10075072: je 0x1007507b */
L_10075074:
    eax = MEM32(ecx); /* 0x10075074: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x10075076: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x10075078: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_1007507B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007507B: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x28) */ /* 0x1007507C: cmp esi, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007506B; /* 0x1007507F: jl 0x1007506b */
L_10075081:
    PUSH32(esp, MEM32(ebx)); /* 0x10075081: push dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x10075083: mov esi, dword ptr [ebx + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10075086: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1007508B: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007508C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ebx = esi; /* 0x10075091: mov ebx, esi */
    ecx = POP32_VAL(esp); /* 0x10075093: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10075094: pop ecx */
    /* test esi, esi */ /* 0x10075095: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10075064; /* 0x10075097: jne 0x10075064 */
L_10075099:
    PUSH32(esp, MEM32(edi + 0x34)); /* 0x10075099: push dword ptr [edi + 0x34] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007509C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100750A1: pop ecx */
    edi = POP32_VAL(esp); /* 0x100750A2: pop edi */
    esi = POP32_VAL(esp); /* 0x100750A3: pop esi */
    ebx = POP32_VAL(esp); /* 0x100750A4: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100750A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100750A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100750A6u);

L_100750A6:
    PUSH32(esp, ebp); /* 0x100750A6: push ebp */
    ebp = esp; /* 0x100750A7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100750A9: push esi */
    PUSH32(esp, edi); /* 0x100750AA: push edi */
    edi = ecx; /* 0x100750AB: mov edi, ecx */
    esi = edi + 0x4; /* 0x100750AD: lea esi, [edi + 4] */
    ecx = esi; /* 0x100750B0: mov ecx, esi */
    RECOMP_CALL(sub_1006F14E); /* 0x100750B2: call 0x1006f14e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x100750B7: mov eax, dword ptr [edi] */
    ecx = MEM32(ebp + 0x8); /* 0x100750B9: mov ecx, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100750BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100750C7; /* 0x100750BE: jne 0x100750c7 */
L_100750C0:
    MEM32(ecx) = ecx; /* 0x100750C0: mov dword ptr [ecx], ecx */
    MEM32(ecx + 0x4) = ecx; /* 0x100750C2: mov dword ptr [ecx + 4], ecx */
    goto L_100750DB; /* 0x100750C5: jmp 0x100750db */
L_100750C7:
    eax = MEM32(eax); /* 0x100750C7: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x100750C9: mov dword ptr [ecx], eax */
    eax = MEM32(edi); /* 0x100750CB: mov eax, dword ptr [edi] */
    MEM32(ecx + 0x4) = eax; /* 0x100750CD: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edi); /* 0x100750D0: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x100750D2: mov eax, dword ptr [eax] */
    MEM32(eax + 0x4) = ecx; /* 0x100750D4: mov dword ptr [eax + 4], ecx */
    eax = MEM32(edi); /* 0x100750D7: mov eax, dword ptr [edi] */
    MEM32(eax) = ecx; /* 0x100750D9: mov dword ptr [eax], ecx */
L_100750DB:
    MEM32(edi) = ecx; /* 0x100750DB: mov dword ptr [edi], ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100750DD: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0; /* 0x100750E0: mov dword ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x100750E6: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(esi), _sum = MEM32(esi) + eax; eax = _old; MEM32(esi) = _sum; } /* 0x100750E9: lock xadd dword ptr [esi], eax */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100750ED: pop edi */
    esi = POP32_VAL(esp); /* 0x100750EE: pop esi */
    ebp = POP32_VAL(esp); /* 0x100750EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100750F0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100750F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100750F3u);

L_100750F3:
    PUSH32(esp, ebp); /* 0x100750F3: push ebp */
    ebp = esp; /* 0x100750F4: mov ebp, esp */
    edx = ecx; /* 0x100750F6: mov edx, ecx */
    eax = MEM32(edx); /* 0x100750F8: mov eax, dword ptr [edx] */
    /* test eax, eax */ /* 0x100750FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007510D; /* 0x100750FC: jne 0x1007510d */
L_100750FE:
    eax = MEM32(ebp + 0x8); /* 0x100750FE: mov eax, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x10075101: mov dword ptr [edx], eax */
    MEM32(eax + 0x8) = eax; /* 0x10075103: mov dword ptr [eax + 8], eax */
    eax = MEM32(edx); /* 0x10075106: mov eax, dword ptr [edx] */
    MEM32(eax + 0x4) = eax; /* 0x10075108: mov dword ptr [eax + 4], eax */
    goto L_10075128; /* 0x1007510B: jmp 0x10075128 */
L_1007510D:
    eax = MEM32(eax + 0x4); /* 0x1007510D: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x10075110: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x4) = eax; /* 0x10075113: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edx); /* 0x10075116: mov eax, dword ptr [edx] */
    MEM32(ecx + 0x8) = eax; /* 0x10075118: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx); /* 0x1007511B: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x4); /* 0x1007511D: mov eax, dword ptr [eax + 4] */
    MEM32(eax + 0x8) = ecx; /* 0x10075120: mov dword ptr [eax + 8], ecx */
    eax = MEM32(edx); /* 0x10075123: mov eax, dword ptr [edx] */
    MEM32(eax + 0x4) = ecx; /* 0x10075125: mov dword ptr [eax + 4], ecx */
L_10075128:
    ebp = POP32_VAL(esp); /* 0x10075128: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10075129: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10075165(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075165u);

L_10075165:
    PUSH32(esp, ebp); /* 0x10075165: push ebp */
    ebp = esp; /* 0x10075166: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10075168: push ecx */
    edx = MEM32(ebp + 0xC); /* 0x10075169: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1007516C: push esi */
    esi = ecx; /* 0x1007516D: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1007516F: push edi */
    ecx = MEM32(esi + 0x2C); /* 0x10075170: mov ecx, dword ptr [esi + 0x2c] */
    edi = MEM32(esi + 0x28); /* 0x10075173: mov edi, dword ptr [esi + 0x28] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edx) >> 31) & 1u)); /* 0x10075176: sar edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10075178: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    edi = edi & MEM32(ebp + 0xC); /* 0x10075179: and edi, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(esi + 0x3C) */ /* 0x1007517C: cmp edx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10075188; /* 0x1007517F: jl 0x10075188 */
L_10075181:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10075181: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_10075257; /* 0x10075183: jmp 0x10075257 */
L_10075188:
    ecx = MEM32(esi + 0x38); /* 0x10075188: mov ecx, dword ptr [esi + 0x38] */
    eax = MEM32(esi + 0x34); /* 0x1007518B: mov eax, dword ptr [esi + 0x34] */
    PUSH32(esp, ebx); /* 0x1007518E: push ebx */
    /* cmp edx, ecx */ /* 0x1007518F: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100751A4; /* 0x10075191: jl 0x100751a4 */
L_10075193:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x10075193: sub edx, ecx */
    _flag_k = FK_CMP;
    ebx = MEM32(eax + ecx * 4 + (-0x4)); /* 0x10075195: mov ebx, dword ptr [eax + ecx*4 - 4] */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_100751A7; /* 0x10075199: js 0x100751a7 */
L_1007519B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007519B: inc edx */
    _flag_k = FK_INC;
L_1007519C:
    ebx = MEM32(ebx + 0x4); /* 0x1007519C: mov ebx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1007519F: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100751A7; /* 0x100751A0: je 0x100751a7 */
L_100751A2:
    RECOMP_BACKEDGE();
    goto L_1007519C; /* 0x100751A2: jmp 0x1007519c */
L_100751A4:
    ebx = MEM32(eax + edx * 4); /* 0x100751A4: mov ebx, dword ptr [eax + edx*4] */
L_100751A7:
    eax = MEM32(ebx); /* 0x100751A7: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100751A9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x100751AB: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = ecx; /* 0x100751AE: mov dword ptr [ebp + 0xc], ecx */
    ecx = eax + edi * 4; /* 0x100751B1: lea ecx, [eax + edi*4] */
    eax = MEM32(ebp + 0xC); /* 0x100751B4: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x100751B7: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x100751BB: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x100751BE: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x100751C1: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10075254; /* 0x100751C4: jne 0x10075254 */
L_100751CA:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x100751CA: push -2 */
    ecx = ebx + 0x8; /* 0x100751CC: lea ecx, [ebx + 8] */
    eax = POP32_VAL(esp); /* 0x100751CF: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edi; } else { eax = _d; } } /* 0x100751D0: lock cmpxchg dword ptr [ecx], edi */
    _flag_k = FK_CMP;
    ebx = MEM32(0x100E5134); /* 0x100751D4: mov ebx, dword ptr [0x100e5134] */
    PUSH32(esp, esi); /* 0x100751DA: push esi */
    RECOMP_ICALL(ebx); /* 0x100751DB: call ebx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x100751DD: movzx eax, ax */
    /* cmp eax, MEM32(esi + 0x44) */ /* 0x100751E0: cmp eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10075242; /* 0x100751E3: jle 0x10075242 */
L_100751E5:
    eax = MEM32(ebp + 0x8); /* 0x100751E5: mov eax, dword ptr [ebp + 8] */
    edi = esi + 0x8; /* 0x100751E8: lea edi, [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x34u; /* 0x100751EB: add eax, 0x34 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100751EE: push eax */
    PUSH32(esp, edi); /* 0x100751EF: push edi */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x100751F0: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x100751F6: push edi */
    RECOMP_ICALL(ebx); /* 0x100751F7: call ebx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x100751F9: movzx eax, ax */
    /* cmp eax, MEM32(esi + 0x44) */ /* 0x100751FC: cmp eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10075250; /* 0x100751FF: jle 0x10075250 */
L_10075201:
    eax = MEM32(esi + 0x24); /* 0x10075201: mov eax, dword ptr [esi + 0x24] */
    ecx = 0xA0000000u; /* 0x10075204: mov ecx, 0xa0000000 */
    eax = MEM32(eax + 0x194); /* 0x10075209: mov eax, dword ptr [eax + 0x194] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1007520F: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x10075211: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10075250; /* 0x10075213: je 0x10075250 */
L_10075215:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10075215: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x48; /* 0x10075217: lea ecx, [esi + 0x48] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007521A: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007521B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x1007521D: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x10075221: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10075250; /* 0x10075223: jne 0x10075250 */
L_10075225:
    PUSH32(esp, edi); /* 0x10075225: push edi */
    RECOMP_ICALL(MEM32(0x100E5130)); /* 0x10075226: call dword ptr [0x100e5130] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x1007522C: push dword ptr [esi + 0x24] */
    ecx = esi + 0x14; /* 0x1007522F: lea ecx, [esi + 0x14] */
    MEM32(esi + 0x10) = eax; /* 0x10075232: mov dword ptr [esi + 0x10], eax */
    PUSH32(esp, esi); /* 0x10075235: push esi */
    PUSH32(esp, 0x10075281u); /* 0x10075236: push 0x10075281 */
    RECOMP_CALL(sub_10074CBB); /* 0x1007523B: call 0x10074cbb */
    RECOMP_FLAGS_IN();
    goto L_10075250; /* 0x10075240: jmp 0x10075250 */
L_10075242:
    ecx = MEM32(ebp + 0x8); /* 0x10075242: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x10075245: add ecx, 0x34 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x10075248: push ecx */
    PUSH32(esp, esi); /* 0x10075249: push esi */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x1007524A: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
L_10075250:
    SET_LO8(eax, 1); /* 0x10075250: mov al, 1 */
    goto L_10075256; /* 0x10075252: jmp 0x10075256 */
L_10075254:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10075254: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10075256:
    ebx = POP32_VAL(esp); /* 0x10075256: pop ebx */
L_10075257:
    edi = POP32_VAL(esp); /* 0x10075257: pop edi */
    esi = POP32_VAL(esp); /* 0x10075258: pop esi */
    esp = ebp; /* 0x10075259: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007525B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1007525C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1007525F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007525Fu);

L_1007525F:
    PUSH32(esp, ebp); /* 0x1007525F: push ebp */
    ebp = esp; /* 0x10075260: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10075262: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10075263: mov esi, dword ptr [ebp + 8] */
    goto L_10075278; /* 0x10075266: jmp 0x10075278 */
L_10075268:
    ecx = esi + (-0x34); /* 0x10075268: lea ecx, [esi - 0x34] */
    esi = MEM32(esi); /* 0x1007526B: mov esi, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1007526D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075278; /* 0x1007526F: je 0x10075278 */
L_10075271:
    eax = MEM32(ecx); /* 0x10075271: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x10075273: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x10075275: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_10075278:
    /* test esi, esi */ /* 0x10075278: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10075268; /* 0x1007527A: jne 0x10075268 */
L_1007527C:
    esi = POP32_VAL(esp); /* 0x1007527C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007527D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007527E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10075281(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075281u);

L_10075281:
    PUSH32(esp, ebp); /* 0x10075281: push ebp */
    ebp = esp; /* 0x10075282: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10075284: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10075285: mov esi, dword ptr [ebp + 8] */
    ecx = 0xA0000000u; /* 0x10075288: mov ecx, 0xa0000000 */
    eax = MEM32(esi + 0x24); /* 0x1007528D: mov eax, dword ptr [esi + 0x24] */
    eax = MEM32(eax + 0x194); /* 0x10075290: mov eax, dword ptr [eax + 0x194] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x10075296: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x10075298: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100752AF; /* 0x1007529A: je 0x100752af */
L_1007529C:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1007529C: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_1007525F); /* 0x1007529F: call 0x1007525f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x100752A4: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x48; /* 0x100752A8: lea eax, [esi + 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100752AB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _tmp = MEM32(eax); /* 0x100752AD: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
L_100752AF:
    esi = POP32_VAL(esp); /* 0x100752AF: pop esi */
    ebp = POP32_VAL(esp); /* 0x100752B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100752B1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100752B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100752B2u);

L_100752B2:
    PUSH32(esp, esi); /* 0x100752B2: push esi */
    PUSH32(esp, 0); /* 0x100752B3: push 0 */
    PUSH32(esp, 0); /* 0x100752B5: push 0 */
    esi = ecx; /* 0x100752B7: mov esi, ecx */
    RECOMP_CALL(sub_10026951); /* 0x100752B9: call 0x10026951 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100752BE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100752C0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100752C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100752C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100752C2u);

L_100752C2:
    PUSH32(esp, ebp); /* 0x100752C2: push ebp */
    ebp = esp; /* 0x100752C3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100752C5: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100752C6: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x100752C9: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x100752CB: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067674u; /* 0x100752D0: mov dword ptr [esi], 0x10067674 */
    eax = esi; /* 0x100752D6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100752D8: pop esi */
    ebp = POP32_VAL(esp); /* 0x100752D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100752DA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007536C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007536Cu);

L_1007536C:
    PUSH32(esp, ebp); /* 0x1007536C: push ebp */
    ebp = esp; /* 0x1007536D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1007536F: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10075372: push esi */
    esi = ecx; /* 0x10075373: mov esi, ecx */
    PUSH32(esp, 0x28u); /* 0x10075375: push 0x28 */
    PUSH32(esp, MEM32(eax)); /* 0x10075377: push dword ptr [eax] */
    PUSH32(esp, MEM32(esi)); /* 0x10075379: push dword ptr [esi] */
    RECOMP_CALL(sub_1000F594); /* 0x1007537B: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10075380: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x10075383: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10075385: pop esi */
    ebp = POP32_VAL(esp); /* 0x10075386: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10075387: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007538A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007538Au);

L_1007538A:
    PUSH32(esp, MEM32(ecx)); /* 0x1007538A: push dword ptr [ecx] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007538C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10075391: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10075392: ret  */
    RECOMP_REGS_OUT();
}

void sub_10075393(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075393u);

L_10075393:
    PUSH32(esp, ebp); /* 0x10075393: push ebp */
    ebp = esp; /* 0x10075394: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10075396: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10075399: push ebx */
    PUSH32(esp, esi); /* 0x1007539A: push esi */
    PUSH32(esp, edi); /* 0x1007539B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1007539C: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x1007539F: mov ebx, ecx */
    /* cmp edi, 9 */ /* 0x100753A1: cmp edi, 9 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100753E2; /* 0x100753A4: ja 0x100753e2 */
L_100753A6:
    /* cmp edi, 2 */ /* 0x100753A6: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100753E2; /* 0x100753A9: je 0x100753e2 */
L_100753AB:
    /* cmp edi, 1 */ /* 0x100753AB: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100753E2; /* 0x100753AE: je 0x100753e2 */
L_100753B0:
    edx = MEM32(ebp + 0xC); /* 0x100753B0: mov edx, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x100753B3: mov ecx, edi */
    RECOMP_CALL(sub_100754D8); /* 0x100753B5: call 0x100754d8 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100753BA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075406; /* 0x100753BC: je 0x10075406 */
L_100753BE:
    PUSH32(esp, edi); /* 0x100753BE: push edi */
    ecx = ebx; /* 0x100753BF: mov ecx, ebx */
    RECOMP_CALL(sub_10024CB7); /* 0x100753C1: call 0x10024cb7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x100753C6: mov ecx, dword ptr [ebx] */
    esi = eax; /* 0x100753C8: mov esi, eax */
    eax = MEM32(ebp + 0xC); /* 0x100753CA: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + edi * 4) = eax; /* 0x100753CD: mov dword ptr [ecx + edi*4], eax */
    ecx = ebx; /* 0x100753D0: mov ecx, ebx */
    RECOMP_CALL(sub_1002691F); /* 0x100753D2: call 0x1002691f */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x100753D7: pop edi */
    eax = esi; /* 0x100753D8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100753DA: pop esi */
    ebx = POP32_VAL(esp); /* 0x100753DB: pop ebx */
    esp = ebp; /* 0x100753DC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100753DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100753DF: ret 8 */
L_100753E2:
    ecx = edi; /* 0x100753E2: mov ecx, edi */
    RECOMP_CALL(sub_100754C8); /* 0x100753E4: call 0x100754c8 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x100753E9: mov dword ptr [ebp + 0xc], eax */
    ecx = ebp + (-0xC); /* 0x100753EC: lea ecx, [ebp - 0xc] */
    eax = ebp + 0xC; /* 0x100753EF: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100753F2: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x100753F3: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = 0x10067674u; /* 0x100753F8: mov dword ptr [ebp - 0xc], 0x10067674 */
    PUSH32(esp, 0x100DD0C0u); /* 0x100753FF: push 0x100dd0c0 */
    goto L_10075426; /* 0x10075404: jmp 0x10075426 */
L_10075406:
    RECOMP_CALL(sub_100754C8); /* 0x10075406: call 0x100754c8 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x1007540B: mov dword ptr [ebp + 0xc], eax */
    ecx = ebp + (-0xC); /* 0x1007540E: lea ecx, [ebp - 0xc] */
    eax = ebp + 0xC; /* 0x10075411: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10075414: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x10075415: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = 0x10067714u; /* 0x1007541A: mov dword ptr [ebp - 0xc], 0x10067714 */
    PUSH32(esp, 0x100DD088u); /* 0x10075421: push 0x100dd088 */
L_10075426:
    eax = ebp + (-0xC); /* 0x10075426: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x10075429: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1007542A: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007542Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10075430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075430u);

L_10075430:
    PUSH32(esp, ebp); /* 0x10075430: push ebp */
    ebp = esp; /* 0x10075431: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10075433: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10075436: push esi */
    esi = MEM32(ebp + 0xC); /* 0x10075437: mov esi, dword ptr [ebp + 0xc] */
    edx = esi; /* 0x1007543A: mov edx, esi */
    PUSH32(esp, edi); /* 0x1007543C: push edi */
    edi = ecx; /* 0x1007543D: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007543F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10075441: inc ecx */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_100754D8); /* 0x10075442: call 0x100754d8 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10075447: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007549E; /* 0x10075449: je 0x1007549e */
L_1007544B:
    edx = MEM32(ebp + 0x8); /* 0x1007544B: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x1007544E: push 2 */
    ecx = POP32_VAL(esp); /* 0x10075450: pop ecx */
    RECOMP_CALL(sub_100754D8); /* 0x10075451: call 0x100754d8 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10075456: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10075461; /* 0x10075458: jne 0x10075461 */
L_1007545A:
    eax = MEM32(0x10067970); /* 0x1007545A: mov eax, dword ptr [0x10067970] */
    goto L_100754A3; /* 0x1007545F: jmp 0x100754a3 */
L_10075461:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10075461: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10075485; /* 0x10075464: je 0x10075485 */
L_10075466:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x10075466: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10075485; /* 0x10075469: je 0x10075485 */
L_1007546B:
    /* cmp esi, edx */ /* 0x1007546B: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10075485; /* 0x1007546D: jae 0x10075485 */
L_1007546F:
    ecx = ebp + (-0xC); /* 0x1007546F: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD55); /* 0x10075472: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = 0x100676B4u; /* 0x10075477: mov dword ptr [ebp - 0xc], 0x100676b4 */
    PUSH32(esp, 0x100DD0A4u); /* 0x1007547E: push 0x100dd0a4 */
    goto L_100754BE; /* 0x10075483: jmp 0x100754be */
L_10075485:
    eax = MEM32(edi); /* 0x10075485: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x10075487: mov ecx, edi */
    MEM32(eax + 0x4) = esi; /* 0x10075489: mov dword ptr [eax + 4], esi */
    eax = MEM32(edi); /* 0x1007548C: mov eax, dword ptr [edi] */
    MEM32(eax + 0x8) = edx; /* 0x1007548E: mov dword ptr [eax + 8], edx */
    RECOMP_CALL(sub_1002691F); /* 0x10075491: call 0x1002691f */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x10075496: pop edi */
    esi = POP32_VAL(esp); /* 0x10075497: pop esi */
    esp = ebp; /* 0x10075498: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007549A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1007549B: ret 8 */
L_1007549E:
    eax = MEM32(0x1006796C); /* 0x1007549E: mov eax, dword ptr [0x1006796c] */
L_100754A3:
    MEM32(ebp + 0xC) = eax; /* 0x100754A3: mov dword ptr [ebp + 0xc], eax */
    ecx = ebp + (-0xC); /* 0x100754A6: lea ecx, [ebp - 0xc] */
    eax = ebp + 0xC; /* 0x100754A9: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100754AC: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x100754AD: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = 0x10067714u; /* 0x100754B2: mov dword ptr [ebp - 0xc], 0x10067714 */
    PUSH32(esp, 0x100DD088u); /* 0x100754B9: push 0x100dd088 */
L_100754BE:
    eax = ebp + (-0xC); /* 0x100754BE: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100754C1: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x100754C2: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100754C7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100754C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100754C8u);

L_100754C8:
    /* cmp ecx, 0xAu */ /* 0x100754C8: cmp ecx, 0xa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100754D0; /* 0x100754CB: jbe 0x100754d0 */
L_100754CD:
    PUSH32(esp, 0xAu); /* 0x100754CD: push 0xa */
    ecx = POP32_VAL(esp); /* 0x100754CF: pop ecx */
L_100754D0:
    eax = MEM32(ecx * 4 + 0x10067968); /* 0x100754D0: mov eax, dword ptr [ecx*4 + 0x10067968] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100754D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100754D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100754D8u);

L_100754D8:
    PUSH32(esp, ebx); /* 0x100754D8: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100754D9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100754DB: inc ebx */
    _flag_k = FK_INC;
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x10075547)); goto _ljump; }
L_100754E3:
    /* test edx, edx */ /* 0x100754E3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
L_100754E5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10075543; /* 0x100754E5: je 0x10075543 */
L_100754E7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x100754E7: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_10075543; /* 0x100754E9: jmp 0x10075543 */
L_100754EB:
    /* cmp edx, 0xFFFFFFF9u */ /* 0x100754EB: cmp edx, -7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF9u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100754F5; /* 0x100754EE: jl 0x100754f5 */
L_100754F0:
    /* cmp edx, 7 */ /* 0x100754F0: cmp edx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10075543; /* 0x100754F3: jl 0x10075543 */
L_100754F5:
    /* cmp edx, 0xFu */ /* 0x100754F5: cmp edx, 0xf */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10075543; /* 0x100754F8: je 0x10075543 */
L_100754FA:
    /* cmp edx, 0xFFFFFFF1u */ /* 0x100754FA: cmp edx, -0xf */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF1u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10075543; /* 0x100754FD: je 0x10075543 */
L_100754FF:
    /* cmp edx, 0xF000u */ /* 0x100754FF: cmp edx, 0xf000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xF000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_100754E5; /* 0x10075505: jmp 0x100754e5 */
L_10075507:
    /* test edx, edx */ /* 0x10075507: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075543; /* 0x10075509: je 0x10075543 */
L_1007550B:
    /* cmp edx, ebx */ /* 0x1007550B: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_100754E5; /* 0x1007550D: jmp 0x100754e5 */
L_1007550F:
    /* test edx, edx */ /* 0x1007550F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007551B; /* 0x10075511: je 0x1007551b */
L_10075513:
    /* cmp edx, 0x7FFFFFFFu */ /* 0x10075513: cmp edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10075543; /* 0x10075519: jbe 0x10075543 */
L_1007551B:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1007551B: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_100754E5; /* 0x1007551E: jmp 0x100754e5 */
L_10075520:
    /* cmp edx, 0x7FFFFFFFu */ /* 0x10075520: cmp edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_100754E7; /* 0x10075526: ja 0x100754e7 */
L_10075528:
    goto L_10075543; /* 0x10075528: jmp 0x10075543 */
L_1007552A:
    /* test edx, edx */ /* 0x1007552A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10075520; /* 0x1007552C: jne 0x10075520 */
L_1007552E:
    RECOMP_BACKEDGE();
    goto L_100754E7; /* 0x1007552E: jmp 0x100754e7 */
L_10075530:
    /* cmp edx, ebx */ /* 0x10075530: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100754E3; /* 0x10075532: jne 0x100754e3 */
L_10075534:
    goto L_10075543; /* 0x10075534: jmp 0x10075543 */
L_10075536:
    /* test edx, edx */ /* 0x10075536: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075543; /* 0x10075538: je 0x10075543 */
L_1007553A:
    /* cmp edx, ebx */ /* 0x1007553A: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1007553C: setne al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x1007553F: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    SET_LO8(ebx, LO8(ebx) & LO8(eax)); /* 0x10075541: and bl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10075543:
    SET_LO8(eax, LO8(ebx)); /* 0x10075543: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x10075545: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10075546: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x100754E3u: goto L_100754E3;
      case 0x100754EBu: goto L_100754EB;
      case 0x10075507u: goto L_10075507;
      case 0x1007550Fu: goto L_1007550F;
      case 0x10075513u: goto L_10075513;
      case 0x10075520u: goto L_10075520;
      case 0x1007552Au: goto L_1007552A;
      case 0x10075530u: goto L_10075530;
      case 0x10075536u: goto L_10075536;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1007565E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007565Eu);

L_1007565E:
    PUSH32(esp, ebp); /* 0x1007565E: push ebp */
    ebp = esp; /* 0x1007565F: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x10075661: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10075664: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x10075667: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075683; /* 0x10075669: je 0x10075683 */
L_1007566B:
    eax = MEM32(ecx); /* 0x1007566B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1007566D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10075670: push eax */
    ecx = MEM32(eax + 0x4); /* 0x10075671: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(MEM32(eax + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x40) = MEM32(eax + 0x40) & 0; /* 0x10075674: and dword ptr [eax + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ecx); /* 0x10075678: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x1007567A: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007567D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007567F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10075680: ret 4 */
L_10075683:
    eax = ebp + 0x8; /* 0x10075683: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x1006787Cu; /* 0x10075686: mov dword ptr [ebp + 8], 0x1006787c */
    PUSH32(esp, eax); /* 0x1007568D: push eax */
    ecx = ebp + (-0xC); /* 0x1007568E: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD30); /* 0x10075691: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCEE8u); /* 0x10075696: push 0x100dcee8 */
    eax = ebp + (-0xC); /* 0x1007569B: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x1006754Cu; /* 0x1007569E: mov dword ptr [ebp - 0xc], 0x1006754c */
    PUSH32(esp, eax); /* 0x100756A5: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x100756A6: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100756ABu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10075773(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075773u);

L_10075773:
    PUSH32(esp, ebp); /* 0x10075773: push ebp */
    ebp = esp; /* 0x10075774: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10075776: push ecx */
    edx = (uint32_t)((int32_t)MEM32(ebp + 0x8) * (int32_t)0x34u); /* 0x10075777: imul edx, dword ptr [ebp + 8], 0x34 */
    PUSH32(esp, ebx); /* 0x1007577B: push ebx */
    SET_LO8(ebx, MEM8(ebp + 0x10)); /* 0x1007577C: mov bl, byte ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1007577F: push esi */
    esi = ecx; /* 0x10075780: mov esi, ecx */
    ecx = (uint32_t)((int32_t)MEM32(ebp + 0xC) * (int32_t)0x34u); /* 0x10075782: imul ecx, dword ptr [ebp + 0xc], 0x34 */
    PUSH32(esp, edi); /* 0x10075786: push edi */
    MEM32(ebp + 0x8) = edx; /* 0x10075787: mov dword ptr [ebp + 8], edx */
    eax = MEM32(esi + 0x10); /* 0x1007578A: mov eax, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1007578D: mov dword ptr [ebp - 4], ecx */
    edi = MEM32(eax + edx + 0x30); /* 0x10075790: mov edi, dword ptr [eax + edx + 0x30] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x10075794: add edi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(edi + 0x28); /* 0x10075796: mov ecx, dword ptr [edi + 0x28] */
    eax = ecx + 0x1; /* 0x10075799: lea eax, [ecx + 1] */
    MEM32(edi + 0x28) = eax; /* 0x1007579C: mov dword ptr [edi + 0x28], eax */
    /* test ecx, ecx */ /* 0x1007579F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100757E4; /* 0x100757A1: jne 0x100757e4 */
L_100757A3:
    eax = MEM32(esi + 0x10); /* 0x100757A3: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x100757A6: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) + 1; /* 0x100757A8: inc dword ptr [eax + 0x24] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi + 0xAC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xAC) = MEM32(esi + 0xAC) + 1; /* 0x100757AB: inc dword ptr [esi + 0xac] */
    _flag_k = FK_INC;
    /* cmp MEM8(edi + 0x31), 0 */ /* 0x100757B1: cmp byte ptr [edi + 0x31], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x31)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100757C9; /* 0x100757B5: je 0x100757c9 */
L_100757B7:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100757B7: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x100757BA: mov ecx, esi */
    MEM8(edi + 0x32) = (uint8_t)(1); /* 0x100757BC: mov byte ptr [edi + 0x32], 1 */
    PUSH32(esp, eax); /* 0x100757C0: push eax */
    RECOMP_CALL(sub_10075987); /* 0x100757C1: call 0x10075987 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x100757C6: mov edx, dword ptr [ebp + 8] */
L_100757C9:
    /* test LO8(ebx), LO8(ebx) */ /* 0x100757C9: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100757F1; /* 0x100757CB: je 0x100757f1 */
L_100757CD:
    eax = MEM32(esi + 0x10); /* 0x100757CD: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(ebp + (-0x4)); /* 0x100757D0: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(edx + eax + 0x30); /* 0x100757D3: mov eax, dword ptr [edx + eax + 0x30] */
    /* cmp MEM32(eax + ecx + 0x24), 0 */ /* 0x100757D7: cmp dword ptr [eax + ecx + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100757E4; /* 0x100757DC: jne 0x100757e4 */
L_100757DE:
    _flag_a = (uint32_t)(MEM32(esi + 0xB8)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xB8) = MEM32(esi + 0xB8) + 1; /* 0x100757DE: inc dword ptr [esi + 0xb8] */
    _flag_k = FK_INC;
L_100757E4:
    /* test LO8(ebx), LO8(ebx) */ /* 0x100757E4: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100757F1; /* 0x100757E6: je 0x100757f1 */
L_100757E8:
    _flag_a = (uint32_t)(MEM32(esi + 0xB4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xB4) = MEM32(esi + 0xB4) + 1; /* 0x100757E8: inc dword ptr [esi + 0xb4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x2C) = MEM32(edi + 0x2C) + 1; /* 0x100757EE: inc dword ptr [edi + 0x2c] */
    _flag_k = FK_INC;
L_100757F1:
    edi = POP32_VAL(esp); /* 0x100757F1: pop edi */
    esi = POP32_VAL(esp); /* 0x100757F2: pop esi */
    ebx = POP32_VAL(esp); /* 0x100757F3: pop ebx */
    esp = ebp; /* 0x100757F4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100757F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x100757F7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_100757FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100757FAu);

L_100757FA:
    PUSH32(esp, ebp); /* 0x100757FA: push ebp */
    ebp = esp; /* 0x100757FB: mov ebp, esp */
    edx = (uint32_t)((int32_t)MEM32(ebp + 0xC) * (int32_t)0x34u); /* 0x100757FD: imul edx, dword ptr [ebp + 0xc], 0x34 */
    eax = MEM32(ecx + 0x10); /* 0x10075801: mov eax, dword ptr [ecx + 0x10] */
    PUSH32(esp, ebx); /* 0x10075804: push ebx */
    SET_LO8(ebx, MEM8(ebp + 0x10)); /* 0x10075805: mov bl, byte ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x10075808: push esi */
    PUSH32(esp, edi); /* 0x10075809: push edi */
    edi = (uint32_t)((int32_t)MEM32(ebp + 0x8) * (int32_t)0x34u); /* 0x1007580A: imul edi, dword ptr [ebp + 8], 0x34 */
    MEM32(ebp + 0x8) = edx; /* 0x1007580E: mov dword ptr [ebp + 8], edx */
    esi = MEM32(eax + edi + 0x30); /* 0x10075811: mov esi, dword ptr [eax + edi + 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x10075815: add esi, edx */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x10075817: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075824; /* 0x10075819: je 0x10075824 */
L_1007581B:
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) - 1; /* 0x1007581B: dec dword ptr [esi + 0x2c] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ecx + 0xB4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0xB4) = MEM32(ecx + 0xB4) - 1; /* 0x1007581E: dec dword ptr [ecx + 0xb4] */
    _flag_k = FK_DEC;
L_10075824:
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) - 1; /* 0x10075824: dec dword ptr [esi + 0x28] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10075865; /* 0x10075827: jne 0x10075865 */
L_10075829:
    eax = MEM32(ecx + 0x10); /* 0x10075829: mov eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1007582C: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx + 0xAC)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0xAC) = MEM32(ecx + 0xAC) - 1; /* 0x1007582E: dec dword ptr [ecx + 0xac] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) - 1; /* 0x10075834: dec dword ptr [eax + 0x24] */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi + 0x32), 0 */ /* 0x10075837: cmp byte ptr [esi + 0x32], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x32)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007584D; /* 0x1007583B: je 0x1007584d */
L_1007583D:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007583D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10075840: push eax */
    RECOMP_CALL(sub_10075987); /* 0x10075841: call 0x10075987 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x10075846: mov edx, dword ptr [ebp + 8] */
    MEM8(esi + 0x32) = (uint8_t)(0); /* 0x10075849: mov byte ptr [esi + 0x32], 0 */
L_1007584D:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1007584D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075865; /* 0x1007584F: je 0x10075865 */
L_10075851:
    eax = MEM32(ecx + 0x10); /* 0x10075851: mov eax, dword ptr [ecx + 0x10] */
    eax = MEM32(eax + edi + 0x30); /* 0x10075854: mov eax, dword ptr [eax + edi + 0x30] */
    /* cmp MEM32(eax + edx + 0x24), 0 */ /* 0x10075858: cmp dword ptr [eax + edx + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edx + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10075865; /* 0x1007585D: jne 0x10075865 */
L_1007585F:
    _flag_a = (uint32_t)(MEM32(ecx + 0xB8)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0xB8) = MEM32(ecx + 0xB8) - 1; /* 0x1007585F: dec dword ptr [ecx + 0xb8] */
    _flag_k = FK_DEC;
L_10075865:
    edi = POP32_VAL(esp); /* 0x10075865: pop edi */
    esi = POP32_VAL(esp); /* 0x10075866: pop esi */
    ebx = POP32_VAL(esp); /* 0x10075867: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10075868: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x10075869: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_10075987(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075987u);

L_10075987:
    PUSH32(esp, ebp); /* 0x10075987: push ebp */
    ebp = esp; /* 0x10075988: mov ebp, esp */
    edx = (uint32_t)((int32_t)MEM32(ebp + 0xC) * (int32_t)0x34u); /* 0x1007598A: imul edx, dword ptr [ebp + 0xc], 0x34 */
    eax = MEM32(ebp + 0x8); /* 0x1007598E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax + 0x30); /* 0x10075991: add edx, dword ptr [eax + 0x30] */
    _flag_k = FK_ADD;
    /* cmp MEM8(edx + 0x31), 0 */ /* 0x10075994: cmp byte ptr [edx + 0x31], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x31)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100759A9; /* 0x10075998: je 0x100759a9 */
L_1007599A:
    _flag_a = (uint32_t)(MEM32(ecx + 0xA8)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0xA8) = MEM32(ecx + 0xA8) - 1; /* 0x1007599A: dec dword ptr [ecx + 0xa8] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(eax + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x20) = MEM32(eax + 0x20) - 1; /* 0x100759A0: dec dword ptr [eax + 0x20] */
    _flag_k = FK_DEC;
    MEM8(edx + 0x31) = (uint8_t)(0); /* 0x100759A3: mov byte ptr [edx + 0x31], 0 */
    goto L_100759B6; /* 0x100759A7: jmp 0x100759b6 */
L_100759A9:
    _flag_a = (uint32_t)(MEM32(ecx + 0xA8)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0xA8) = MEM32(ecx + 0xA8) + 1; /* 0x100759A9: inc dword ptr [ecx + 0xa8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x20) = MEM32(eax + 0x20) + 1; /* 0x100759AF: inc dword ptr [eax + 0x20] */
    _flag_k = FK_INC;
    MEM8(edx + 0x31) = (uint8_t)(1); /* 0x100759B2: mov byte ptr [edx + 0x31], 1 */
L_100759B6:
    ebp = POP32_VAL(esp); /* 0x100759B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100759B7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_100759BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100759BAu);

L_100759BA:
    PUSH32(esp, ebp); /* 0x100759BA: push ebp */
    ebp = esp; /* 0x100759BB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100759BD: push ecx */
    PUSH32(esp, ebx); /* 0x100759BE: push ebx */
    PUSH32(esp, esi); /* 0x100759BF: push esi */
    esi = ecx; /* 0x100759C0: mov esi, ecx */
    PUSH32(esp, edi); /* 0x100759C2: push edi */
    eax = MEM32(esi + 0xA4); /* 0x100759C3: mov eax, dword ptr [esi + 0xa4] */
    edi = MEM32(esi + 0x90); /* 0x100759C9: mov edi, dword ptr [esi + 0x90] */
    /* test eax, eax */ /* 0x100759CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100759DC; /* 0x100759D1: je 0x100759dc */
L_100759D3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100759D3: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi + 0xA4) = eax; /* 0x100759D4: mov dword ptr [esi + 0xa4], eax */
    goto L_100759DD; /* 0x100759DA: jmp 0x100759dd */
L_100759DC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100759DC: dec edi */
    _flag_k = FK_DEC;
L_100759DD:
    ecx = MEM32(ebp + 0x8); /* 0x100759DD: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x100759E0: mov edx, dword ptr [ebp + 0xc] */
    eax = (uint32_t)((int32_t)edx * (int32_t)0x34u); /* 0x100759E3: imul eax, edx, 0x34 */
    PUSH32(esp, 4); /* 0x100759E6: push 4 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + 1; /* 0x100759E8: inc dword ptr [ecx + 0x1c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi + 0xA0)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xA0) = MEM32(esi + 0xA0) + 1; /* 0x100759EB: inc dword ptr [esi + 0xa0] */
    _flag_k = FK_INC;
    ebx = POP32_VAL(esp); /* 0x100759F1: pop ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x30); /* 0x100759F2: add eax, dword ptr [ecx + 0x30] */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x100759F5: mov dword ptr [eax], ebx */
    MEM32(eax + 0x24) = edi; /* 0x100759F7: mov dword ptr [eax + 0x24], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xB0)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xB0) = MEM32(esi + 0xB0) + edi; /* 0x100759FA: add dword ptr [esi + 0xb0], edi */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x10075A00: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10075A0F; /* 0x10075A04: je 0x10075a0f */
L_10075A06:
    PUSH32(esp, edx); /* 0x10075A06: push edx */
    PUSH32(esp, ecx); /* 0x10075A07: push ecx */
    ecx = esi; /* 0x10075A08: mov ecx, esi */
    RECOMP_CALL(sub_10075987); /* 0x10075A0A: call 0x10075987 */
    RECOMP_FLAGS_IN();
L_10075A0F:
    /* cmp edi, 1 */ /* 0x10075A0F: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10075A19; /* 0x10075A12: jne 0x10075a19 */
L_10075A14:
    ebx = ebp + (-0x4); /* 0x10075A14: lea ebx, [ebp - 4] */
    goto L_10075A2F; /* 0x10075A17: jmp 0x10075a2f */
L_10075A19:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10075A19: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x10075A1B: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ebx); /* 0x10075A1D: mul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10075A1F: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10075A22: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10075A24: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10075A26: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10075A27: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10075A2C: pop ecx */
    ebx = eax; /* 0x10075A2D: mov ebx, eax */
L_10075A2F:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x10075A2F: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x10075A33: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075A52; /* 0x10075A35: je 0x10075a52 */
L_10075A37:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10075A37: push dword ptr [ebp + 0xc] */
    edx = MEM32(esi); /* 0x10075A3A: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x10075A3C: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10075A3E: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x10075A41: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x10075A44: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebx + ecx * 4) = eax; /* 0x10075A47: mov dword ptr [ebx + ecx*4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10075A4A: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = ecx; /* 0x10075A4B: mov dword ptr [ebp + 0x10], ecx */
    /* cmp ecx, edi */ /* 0x10075A4E: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10075A37; /* 0x10075A50: jb 0x10075a37 */
L_10075A52:
    PUSH32(esp, edi); /* 0x10075A52: push edi */
    PUSH32(esp, ebx); /* 0x10075A53: push ebx */
    ecx = esi; /* 0x10075A54: mov ecx, esi */
    RECOMP_CALL(sub_10025541); /* 0x10075A56: call 0x10025541 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x4); /* 0x10075A5B: lea eax, [ebp - 4] */
    /* cmp ebx, eax */ /* 0x10075A5E: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10075A69; /* 0x10075A60: je 0x10075a69 */
L_10075A62:
    PUSH32(esp, ebx); /* 0x10075A62: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10075A63: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10075A68: pop ecx */
L_10075A69:
    edi = POP32_VAL(esp); /* 0x10075A69: pop edi */
    esi = POP32_VAL(esp); /* 0x10075A6A: pop esi */
    ebx = POP32_VAL(esp); /* 0x10075A6B: pop ebx */
    esp = ebp; /* 0x10075A6C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10075A6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x10075A6F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_10075A72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075A72u);

L_10075A72:
    PUSH32(esp, 4); /* 0x10075A72: push 4 */
    eax = 0x100DBE0Cu; /* 0x10075A74: mov eax, 0x100dbe0c */
    RECOMP_CALL(sub_100149A4); /* 0x10075A79: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x10075A7E: mov edi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x10075A80: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x10075A83: mov edx, dword ptr [ebp + 0xc] */
    ebx = (uint32_t)((int32_t)edx * (int32_t)0x34u); /* 0x10075A86: imul ebx, edx, 0x34 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) - 1; /* 0x10075A89: dec dword ptr [ecx + 0x1c] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(edi + 0xA0)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0xA0) = MEM32(edi + 0xA0) - 1; /* 0x10075A8C: dec dword ptr [edi + 0xa0] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ecx + 0x30); /* 0x10075A92: add ebx, dword ptr [ecx + 0x30] */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x24); /* 0x10075A95: mov eax, dword ptr [ebx + 0x24] */
    MEM32(ebx) = 1; /* 0x10075A98: mov dword ptr [ebx], 1 */
    /* cmp eax, MEM32(edi + 0x90) */ /* 0x10075A9E: cmp eax, dword ptr [edi + 0x90] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x90));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10075AAC; /* 0x10075AA4: jne 0x10075aac */
L_10075AA6:
    _flag_a = (uint32_t)(MEM32(edi + 0xA4)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0xA4) = MEM32(edi + 0xA4) + 1; /* 0x10075AA6: inc dword ptr [edi + 0xa4] */
    _flag_k = FK_INC;
L_10075AAC:
    eax = MEM32(ebx + 0x24); /* 0x10075AAC: mov eax, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)(MEM32(edi + 0xB0)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edi + 0xB0) = MEM32(edi + 0xB0) - eax; /* 0x10075AAF: sub dword ptr [edi + 0xb0], eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebx + 0x24)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) & 0; /* 0x10075AB5: and dword ptr [ebx + 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebx + 0x31), 0 */ /* 0x10075AB9: cmp byte ptr [ebx + 0x31], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x31)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10075AC8; /* 0x10075ABD: je 0x10075ac8 */
L_10075ABF:
    PUSH32(esp, edx); /* 0x10075ABF: push edx */
    PUSH32(esp, ecx); /* 0x10075AC0: push ecx */
    ecx = edi; /* 0x10075AC1: mov ecx, edi */
    RECOMP_CALL(sub_10075987); /* 0x10075AC3: call 0x10075987 */
    RECOMP_FLAGS_IN();
L_10075AC8:
    esi = edi + 0x20; /* 0x10075AC8: lea esi, [edi + 0x20] */
    MEM8(ebx + 0x30) = (uint8_t)(0); /* 0x10075ACB: mov byte ptr [ebx + 0x30], 0 */
    PUSH32(esp, esi); /* 0x10075ACF: push esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x10075AD0: mov dword ptr [ebp - 0x10], esi */
    RECOMP_ICALL(MEM32(0x100E5038)); /* 0x10075AD3: call dword ptr [0x100e5038] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10075AD9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x10); /* 0x10075ADD: mov eax, dword ptr [ebx + 0x10] */
    /* test eax, eax */ /* 0x10075AE0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075AE9; /* 0x10075AE2: je 0x10075ae9 */
L_10075AE4:
    eax = MEM32(eax + 0x38); /* 0x10075AE4: mov eax, dword ptr [eax + 0x38] */
    goto L_10075AEB; /* 0x10075AE7: jmp 0x10075aeb */
L_10075AE9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10075AE9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10075AEB:
    /* test eax, eax */ /* 0x10075AEB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075B2B; /* 0x10075AED: je 0x10075b2b */
L_10075AEF:
    /* cmp eax, MEM32(ebx + 0x10) */ /* 0x10075AEF: cmp eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10075AFC; /* 0x10075AF2: je 0x10075afc */
L_10075AF4:
    ecx = MEM32(eax + 0x38); /* 0x10075AF4: mov ecx, dword ptr [eax + 0x38] */
    MEM32(ebp + 0x8) = ecx; /* 0x10075AF7: mov dword ptr [ebp + 8], ecx */
    goto L_10075B00; /* 0x10075AFA: jmp 0x10075b00 */
L_10075AFC:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x10075AFC: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10075B00:
    eax = MEM32(eax + 0x1C); /* 0x10075B00: mov eax, dword ptr [eax + 0x1c] */
    /* test eax, eax */ /* 0x10075B03: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075B22; /* 0x10075B05: je 0x10075b22 */
L_10075B07:
    /* cmp MEM8(eax + 0x44), 0 */ /* 0x10075B07: cmp byte ptr [eax + 0x44], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x44)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10075B22; /* 0x10075B0B: jne 0x10075b22 */
L_10075B0D:
    MEM8(eax + 0x44) = (uint8_t)(1); /* 0x10075B0D: mov byte ptr [eax + 0x44], 1 */
    edx = ebp + 0xC; /* 0x10075B11: lea edx, [ebp + 0xc] */
    ecx = MEM32(edi + 0x8); /* 0x10075B14: mov ecx, dword ptr [edi + 8] */
    MEM32(ebp + 0xC) = eax; /* 0x10075B17: mov dword ptr [ebp + 0xc], eax */
    PUSH32(esp, 1); /* 0x10075B1A: push 1 */
    PUSH32(esp, edx); /* 0x10075B1C: push edx */
    eax = MEM32(ecx); /* 0x10075B1D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x10075B1F: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_10075B22:
    ecx = MEM32(ebp + 0x8); /* 0x10075B22: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x10075B25: mov eax, ecx */
    /* test ecx, ecx */ /* 0x10075B27: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10075AEF; /* 0x10075B29: jne 0x10075aef */
L_10075B2B:
    PUSH32(esp, esi); /* 0x10075B2B: push esi */
    RECOMP_ICALL(MEM32(0x100E503C)); /* 0x10075B2C: call dword ptr [0x100e503c] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100149D7); /* 0x10075B32: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10075B37: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10075B3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075B3Au);

L_10075B3A:
    PUSH32(esp, 0x30u); /* 0x10075B3A: push 0x30 */
    eax = 0x100DBEACu; /* 0x10075B3C: mov eax, 0x100dbeac */
    RECOMP_CALL(sub_10025BA2); /* 0x10075B41: call 0x10025ba2 */
    RECOMP_FLAGS_IN();
    eax = ecx; /* 0x10075B46: mov eax, ecx */
    MEM32(ebp + (-0x34)) = eax; /* 0x10075B48: mov dword ptr [ebp - 0x34], eax */
    edi = MEM32(ebp + 0x8); /* 0x10075B4B: mov edi, dword ptr [ebp + 8] */
    esi = eax + 0x20; /* 0x10075B4E: lea esi, [eax + 0x20] */
    PUSH32(esp, esi); /* 0x10075B51: push esi */
    MEM32(ebp + (-0x38)) = edi; /* 0x10075B52: mov dword ptr [ebp - 0x38], edi */
    MEM32(ebp + (-0x3C)) = esi; /* 0x10075B55: mov dword ptr [ebp - 0x3c], esi */
    RECOMP_ICALL(MEM32(0x100E5038)); /* 0x10075B58: call dword ptr [0x100e5038] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10075B5E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10075B62: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0xC); /* 0x10075B64: mov eax, dword ptr [edi + 0xc] */
    /* cmp eax, 8 */ /* 0x10075B67: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10075B85; /* 0x10075B6A: jle 0x10075b85 */
L_10075B6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10075B6C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x10075B6E: push 4 */
    edx = POP32_VAL(esp); /* 0x10075B70: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10075B71: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10075B73: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10075B76: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10075B78: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10075B7A: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10075B7B: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10075B80: pop ecx */
    edi = eax; /* 0x10075B81: mov edi, eax */
    goto L_10075B88; /* 0x10075B83: jmp 0x10075b88 */
L_10075B85:
    edi = ebp + (-0x30); /* 0x10075B85: lea edi, [ebp - 0x30] */
L_10075B88:
    eax = MEM32(ebp + (-0x38)); /* 0x10075B88: mov eax, dword ptr [ebp - 0x38] */
    eax = MEM32(eax + 0x10); /* 0x10075B8B: mov eax, dword ptr [eax + 0x10] */
    /* test eax, eax */ /* 0x10075B8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075B97; /* 0x10075B90: je 0x10075b97 */
L_10075B92:
    eax = MEM32(eax + 0x38); /* 0x10075B92: mov eax, dword ptr [eax + 0x38] */
    goto L_10075B99; /* 0x10075B95: jmp 0x10075b99 */
L_10075B97:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10075B97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10075B99:
    /* test eax, eax */ /* 0x10075B99: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075BC7; /* 0x10075B9B: je 0x10075bc7 */
L_10075B9D:
    esi = MEM32(ebp + (-0x38)); /* 0x10075B9D: mov esi, dword ptr [ebp - 0x38] */
L_10075BA0:
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x10075BA0: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10075BAA; /* 0x10075BA3: je 0x10075baa */
L_10075BA5:
    edx = MEM32(eax + 0x38); /* 0x10075BA5: mov edx, dword ptr [eax + 0x38] */
    goto L_10075BAC; /* 0x10075BA8: jmp 0x10075bac */
L_10075BAA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10075BAA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10075BAC:
    ecx = MEM32(eax + 0x1C); /* 0x10075BAC: mov ecx, dword ptr [eax + 0x1c] */
    /* test ecx, ecx */ /* 0x10075BAF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075BBE; /* 0x10075BB1: je 0x10075bbe */
L_10075BB3:
    SET_LO8(eax, MEM8(ecx + 0x44)); /* 0x10075BB3: mov al, byte ptr [ecx + 0x44] */
    /* test LO8(eax), LO8(eax) */ /* 0x10075BB6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10075BBE; /* 0x10075BB8: jne 0x10075bbe */
L_10075BBA:
    MEM32(edi + ebx * 4) = ecx; /* 0x10075BBA: mov dword ptr [edi + ebx*4], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10075BBD: inc ebx */
    _flag_k = FK_INC;
L_10075BBE:
    eax = edx; /* 0x10075BBE: mov eax, edx */
    /* test edx, edx */ /* 0x10075BC0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10075BA0; /* 0x10075BC2: jne 0x10075ba0 */
L_10075BC4:
    esi = MEM32(ebp + (-0x3C)); /* 0x10075BC4: mov esi, dword ptr [ebp - 0x3c] */
L_10075BC7:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x10075BC7: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = MEM32(ebp + (-0x34)); /* 0x10075BCB: mov ecx, dword ptr [ebp - 0x34] */
    PUSH32(esp, ebx); /* 0x10075BCE: push ebx */
    PUSH32(esp, edi); /* 0x10075BCF: push edi */
    ecx = MEM32(ecx + 0x8); /* 0x10075BD0: mov ecx, dword ptr [ecx + 8] */
    eax = MEM32(ecx); /* 0x10075BD3: mov eax, dword ptr [ecx] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10075BDC; /* 0x10075BD5: je 0x10075bdc */
L_10075BD7:
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x10075BD7: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    goto L_10075BDF; /* 0x10075BDA: jmp 0x10075bdf */
L_10075BDC:
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x10075BDC: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_10075BDF:
    PUSH32(esp, esi); /* 0x10075BDF: push esi */
    RECOMP_ICALL(MEM32(0x100E503C)); /* 0x10075BE0: call dword ptr [0x100e503c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x30); /* 0x10075BE6: lea eax, [ebp - 0x30] */
    /* cmp edi, eax */ /* 0x10075BE9: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10075BF4; /* 0x10075BEB: je 0x10075bf4 */
L_10075BED:
    PUSH32(esp, edi); /* 0x10075BED: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10075BEE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10075BF3: pop ecx */
L_10075BF4:
    RECOMP_CALL(sub_10025C1A); /* 0x10075BF4: call 0x10025c1a */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10075BF9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10075BFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075BFCu);

L_10075BFC:
    PUSH32(esp, 4); /* 0x10075BFC: push 4 */
    eax = 0x100DBE0Cu; /* 0x10075BFE: mov eax, 0x100dbe0c */
    RECOMP_CALL(sub_100149A4); /* 0x10075C03: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x10075C08: mov ebx, ecx */
    esi = ebx + 0x20; /* 0x10075C0A: lea esi, [ebx + 0x20] */
    PUSH32(esp, esi); /* 0x10075C0D: push esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x10075C0E: mov dword ptr [ebp - 0x10], esi */
    RECOMP_ICALL(MEM32(0x100E5038)); /* 0x10075C11: call dword ptr [0x100e5038] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x10075C17: mov edi, dword ptr [ebp + 8] */
    ecx = edi; /* 0x10075C1A: mov ecx, edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10075C1C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi); /* 0x10075C20: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax)); /* 0x10075C22: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)((int32_t)MEM32(edi + 0x30) * (int32_t)0x34u); /* 0x10075C24: imul ecx, dword ptr [edi + 0x30], 0x34 */
    edx = (uint32_t)((int32_t)eax * (int32_t)0x34u); /* 0x10075C28: imul edx, eax, 0x34 */
    eax = edi + 0x8; /* 0x10075C2B: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x10075C2E: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x10075C2F: add ecx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebx + 0x10); /* 0x10075C32: add edx, dword ptr [ebx + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx + 0x30); /* 0x10075C35: add ecx, dword ptr [edx + 0x30] */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10075F4B); /* 0x10075C38: call 0x10075f4b */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(edi + 0x45)); /* 0x10075C3D: mov al, byte ptr [edi + 0x45] */
    /* test LO8(eax), LO8(eax) */ /* 0x10075C40: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10075C4A; /* 0x10075C42: jne 0x10075c4a */
L_10075C44:
    _flag_a = (uint32_t)(MEM32(ebx + 0x9C)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x9C) = MEM32(ebx + 0x9C) - 1; /* 0x10075C44: dec dword ptr [ebx + 0x9c] */
    _flag_k = FK_DEC;
L_10075C4A:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x10075C4A: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10075C4E: push esi */
    RECOMP_ICALL(MEM32(0x100E503C)); /* 0x10075C4F: call dword ptr [0x100e503c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x10075C55: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x10075C57: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x10075C59: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100149D7); /* 0x10075C5C: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10075C61: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10075C64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075C64u);

L_10075C64:
    PUSH32(esp, ebp); /* 0x10075C64: push ebp */
    ebp = esp; /* 0x10075C65: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10075C67: push ecx */
    PUSH32(esp, ebx); /* 0x10075C68: push ebx */
    PUSH32(esp, esi); /* 0x10075C69: push esi */
    PUSH32(esp, edi); /* 0x10075C6A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10075C6B: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x10075C6E: mov esi, ecx */
    ecx = edi; /* 0x10075C70: mov ecx, edi */
    MEM32(ebp + (-0x4)) = esi; /* 0x10075C72: mov dword ptr [ebp - 4], esi */
    eax = MEM32(edi); /* 0x10075C75: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax)); /* 0x10075C77: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ebx = (uint32_t)((int32_t)MEM32(edi + 0x28) * (int32_t)0x34u); /* 0x10075C79: imul ebx, dword ptr [edi + 0x28], 0x34 */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x34u); /* 0x10075C7D: imul ecx, eax, 0x34 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x10); /* 0x10075C80: add ecx, dword ptr [esi + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ecx + 0x30); /* 0x10075C83: add ebx, dword ptr [ecx + 0x30] */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x2C); /* 0x10075C86: mov eax, dword ptr [ebx + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x24));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x24); /* 0x10075C89: add eax, dword ptr [ebx + 0x24] */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10075CBF; /* 0x10075C8C: jne 0x10075cbf */
L_10075C8E:
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) - 1; /* 0x10075C8E: dec dword ptr [ecx + 0x1c] */
    _flag_k = FK_DEC;
    ecx = edi; /* 0x10075C91: mov ecx, edi */
    MEM32(ebx) = 1; /* 0x10075C93: mov dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xA0)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xA0) = MEM32(esi + 0xA0) - 1; /* 0x10075C99: dec dword ptr [esi + 0xa0] */
    _flag_k = FK_DEC;
    eax = MEM32(edi); /* 0x10075C9F: mov eax, dword ptr [edi] */
    esi = MEM32(edi + 0x28); /* 0x10075CA1: mov esi, dword ptr [edi + 0x28] */
    RECOMP_ICALL(MEM32(eax)); /* 0x10075CA4: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x10075CA6: mov ecx, dword ptr [ebp - 4] */
    edx = (uint32_t)((int32_t)eax * (int32_t)0x28u); /* 0x10075CA9: imul edx, eax, 0x28 */
    ecx = MEM32(ecx + 0xC); /* 0x10075CAC: mov ecx, dword ptr [ecx + 0xc] */
    eax = MEM32(ecx + 0x48); /* 0x10075CAF: mov eax, dword ptr [ecx + 0x48] */
    ecx = (uint32_t)((int32_t)esi * (int32_t)0x24u); /* 0x10075CB2: imul ecx, esi, 0x24 */
    esi = MEM32(ebp + (-0x4)); /* 0x10075CB5: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + eax + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx + eax + 0x20); /* 0x10075CB8: add ecx, dword ptr [edx + eax + 0x20] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1; /* 0x10075CBC: dec dword ptr [ecx + 0x10] */
    _flag_k = FK_DEC;
L_10075CBF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x10075CBF: add esi, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x10075CC2: push esi */
    RECOMP_ICALL(MEM32(0x100E5038)); /* 0x10075CC3: call dword ptr [0x100e5038] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x10075CC9: push edi */
    ecx = ebx + 0xC; /* 0x10075CCA: lea ecx, [ebx + 0xc] */
    RECOMP_CALL(sub_10075F4B); /* 0x10075CCD: call 0x10075f4b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10075CD2: push esi */
    RECOMP_ICALL(MEM32(0x100E503C)); /* 0x10075CD3: call dword ptr [0x100e503c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x10075CD9: push edi */
    MEM32(edi) = 0x10027EFCu; /* 0x10075CDA: mov dword ptr [edi], 0x10027efc */
    RECOMP_CALL(sub_1000ECE0); /* 0x10075CE0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10075CE5: pop ecx */
    edi = POP32_VAL(esp); /* 0x10075CE6: pop edi */
    esi = POP32_VAL(esp); /* 0x10075CE7: pop esi */
    ebx = POP32_VAL(esp); /* 0x10075CE8: pop ebx */
    esp = ebp; /* 0x10075CE9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10075CEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10075CEC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10075D49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075D49u);

L_10075D49:
    PUSH32(esp, ebp); /* 0x10075D49: push ebp */
    ebp = esp; /* 0x10075D4A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10075D4C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10075D4D: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10075D50: push edi */
    edi = ecx; /* 0x10075D51: mov edi, ecx */
    ecx = esi; /* 0x10075D53: mov ecx, esi */
    eax = MEM32(esi); /* 0x10075D55: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax)); /* 0x10075D57: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x28); /* 0x10075D59: mov edx, dword ptr [esi + 0x28] */
    esi = (uint32_t)((int32_t)eax * (int32_t)0x34u); /* 0x10075D5C: imul esi, eax, 0x34 */
    eax = MEM32(edi + 0x10); /* 0x10075D5F: mov eax, dword ptr [edi + 0x10] */
    ecx = (uint32_t)((int32_t)edx * (int32_t)0x34u); /* 0x10075D62: imul ecx, edx, 0x34 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x10075D65: add ecx, 0x18 */
    _flag_k = FK_ADD;
    eax = MEM32(esi + eax + 0x30); /* 0x10075D68: mov eax, dword ptr [esi + eax + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x10075D6C: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10075D6E: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x10075D71: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10075D99; /* 0x10075D75: jne 0x10075d99 */
L_10075D77:
    eax = MEM32(edi + 0x84); /* 0x10075D77: mov eax, dword ptr [edi + 0x84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x80));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x80); /* 0x10075D7D: sub eax, dword ptr [edi + 0x80] */
    _flag_k = FK_CMP;
    ecx = MEM32(edi + 0xC); /* 0x10075D83: mov ecx, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10075D86: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10075D88: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10075D8A: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ecx + 0x10), eax */ /* 0x10075D8B: cmp dword ptr [ecx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10075D99; /* 0x10075D8E: jbe 0x10075d99 */
L_10075D90:
    PUSH32(esp, MEM32(ecx + 0x50)); /* 0x10075D90: push dword ptr [ecx + 0x50] */
    RECOMP_ICALL(MEM32(0x100E5140)); /* 0x10075D93: call dword ptr [0x100e5140] */
    RECOMP_FLAGS_IN();
L_10075D99:
    edi = POP32_VAL(esp); /* 0x10075D99: pop edi */
    esi = POP32_VAL(esp); /* 0x10075D9A: pop esi */
    ebp = POP32_VAL(esp); /* 0x10075D9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10075D9C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10075D9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075D9Fu);

L_10075D9F:
    PUSH32(esp, ebp); /* 0x10075D9F: push ebp */
    ebp = esp; /* 0x10075DA0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10075DA2: push esi */
    PUSH32(esp, edi); /* 0x10075DA3: push edi */
    edi = ecx; /* 0x10075DA4: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10075DA6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x8C); /* 0x10075DA8: mov eax, dword ptr [edi + 0x8c] */
    edx = MEM32(edi + 0x9C); /* 0x10075DAE: mov edx, dword ptr [edi + 0x9c] */
    /* cmp eax, edx */ /* 0x10075DB4: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10075DE3; /* 0x10075DB6: jbe 0x10075de3 */
L_10075DB8:
    esi = MEM32(edi + 0x90); /* 0x10075DB8: mov esi, dword ptr [edi + 0x90] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x10075DBE: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10075DC0: push ebx */
    ebx = MEM32(edi + 0xA4); /* 0x10075DC1: mov ebx, dword ptr [edi + 0xa4] */
    ecx = esi; /* 0x10075DC7: mov ecx, esi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x10075DC9: imul ecx, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10075DCC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x10075DCE: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10075DD8; /* 0x10075DD0: jb 0x10075dd8 */
L_10075DD2:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x10075DD2: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = eax; /* 0x10075DD4: mov ecx, eax */
    goto L_10075DE2; /* 0x10075DD6: jmp 0x10075de2 */
L_10075DD8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10075DD8: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = esi + (-0x1); /* 0x10075DDA: lea ecx, [esi - 1] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10075DDD: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = ebx + eax; /* 0x10075DDF: lea ecx, [ebx + eax] */
L_10075DE2:
    ebx = POP32_VAL(esp); /* 0x10075DE2: pop ebx */
L_10075DE3:
    esi = MEM32(edi + 0xA0); /* 0x10075DE3: mov esi, dword ptr [edi + 0xa0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x10075DE9: add esi, ecx */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x10075DEB: mov ecx, edi */
    RECOMP_CALL(sub_10027A0B); /* 0x10075DED: call 0x10027a0b */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x10075DF2: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10075DFF; /* 0x10075DF4: jb 0x10075dff */
L_10075DF6:
    ecx = edi; /* 0x10075DF6: mov ecx, edi */
    RECOMP_CALL(sub_10027A0B); /* 0x10075DF8: call 0x10027a0b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10075DFD: mov esi, eax */
L_10075DFF:
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x10075DFF: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10075E07; /* 0x10075E02: jb 0x10075e07 */
L_10075E04:
    esi = MEM32(ebp + 0x8); /* 0x10075E04: mov esi, dword ptr [ebp + 8] */
L_10075E07:
    edi = POP32_VAL(esp); /* 0x10075E07: pop edi */
    eax = esi; /* 0x10075E08: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10075E0A: pop esi */
    ebp = POP32_VAL(esp); /* 0x10075E0B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10075E0C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10075F4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075F4Bu);

L_10075F4B:
    PUSH32(esp, ebp); /* 0x10075F4B: push ebp */
    ebp = esp; /* 0x10075F4C: mov ebp, esp */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x10075F4E: dec dword ptr [ecx] */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x10075F50: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10075F51: mov esi, dword ptr [ebp + 8] */
    edx = MEM32(esi + 0x38); /* 0x10075F54: mov edx, dword ptr [esi + 0x38] */
    eax = MEM32(esi + 0x34); /* 0x10075F57: mov eax, dword ptr [esi + 0x34] */
    MEM32(edx + 0x34) = eax; /* 0x10075F5A: mov dword ptr [edx + 0x34], eax */
    edx = MEM32(esi + 0x34); /* 0x10075F5D: mov edx, dword ptr [esi + 0x34] */
    eax = MEM32(esi + 0x38); /* 0x10075F60: mov eax, dword ptr [esi + 0x38] */
    MEM32(edx + 0x38) = eax; /* 0x10075F63: mov dword ptr [edx + 0x38], eax */
    eax = MEM32(ecx + 0x4); /* 0x10075F66: mov eax, dword ptr [ecx + 4] */
    /* cmp esi, eax */ /* 0x10075F69: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x10075F6B: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10075F7D; /* 0x10075F6C: jne 0x10075f7d */
L_10075F6E:
    /* cmp eax, MEM32(eax + 0x38) */ /* 0x10075F6E: cmp eax, dword ptr [eax + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10075F77; /* 0x10075F71: jne 0x10075f77 */
L_10075F73:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10075F73: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10075F7A; /* 0x10075F75: jmp 0x10075f7a */
L_10075F77:
    eax = MEM32(eax + 0x34); /* 0x10075F77: mov eax, dword ptr [eax + 0x34] */
L_10075F7A:
    MEM32(ecx + 0x4) = eax; /* 0x10075F7A: mov dword ptr [ecx + 4], eax */
L_10075F7D:
    ebp = POP32_VAL(esp); /* 0x10075F7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10075F7E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10075F81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075F81u);

L_10075F81:
    PUSH32(esp, ebp); /* 0x10075F81: push ebp */
    ebp = esp; /* 0x10075F82: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10075F84: push ecx */
    PUSH32(esp, ebx); /* 0x10075F85: push ebx */
    PUSH32(esp, esi); /* 0x10075F86: push esi */
    PUSH32(esp, edi); /* 0x10075F87: push edi */
    edi = MEM32(ecx + 0x78); /* 0x10075F88: mov edi, dword ptr [ecx + 0x78] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10075F8B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x10075F8D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10075FB5; /* 0x10075F8F: jle 0x10075fb5 */
L_10075F91:
    ebx = MEM32(ebp + 0x8); /* 0x10075F91: mov ebx, dword ptr [ebp + 8] */
    eax = ecx + 0x38; /* 0x10075F94: lea eax, [ecx + 0x38] */
    MEM32(ebp + (-0x4)) = eax; /* 0x10075F97: mov dword ptr [ebp - 4], eax */
L_10075F9A:
    PUSH32(esp, esi); /* 0x10075F9A: push esi */
    ecx = eax; /* 0x10075F9B: mov ecx, eax */
    RECOMP_CALL(sub_10072F00); /* 0x10075F9D: call 0x10072f00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10075FA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075FAB; /* 0x10075FA4: je 0x10075fab */
L_10075FA6:
    /* cmp MEM32(eax + 0x58), ebx */ /* 0x10075FA6: cmp dword ptr [eax + 0x58], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x58)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10075FB7; /* 0x10075FA9: je 0x10075fb7 */
L_10075FAB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10075FAB: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x10075FAC: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10075FB5; /* 0x10075FAE: jge 0x10075fb5 */
L_10075FB0:
    eax = MEM32(ebp + (-0x4)); /* 0x10075FB0: mov eax, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_10075F9A; /* 0x10075FB3: jmp 0x10075f9a */
L_10075FB5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10075FB5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10075FB7:
    edi = POP32_VAL(esp); /* 0x10075FB7: pop edi */
    esi = POP32_VAL(esp); /* 0x10075FB8: pop esi */
    ebx = POP32_VAL(esp); /* 0x10075FB9: pop ebx */
    esp = ebp; /* 0x10075FBA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10075FBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10075FBD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10075FC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10075FC0u);

L_10075FC0:
    PUSH32(esp, ebp); /* 0x10075FC0: push ebp */
    ebp = esp; /* 0x10075FC1: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x10075FC3: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x10075FC6: push ebx */
    PUSH32(esp, esi); /* 0x10075FC7: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0FFFFFFFu);
    eax = eax & 0x0FFFFFFFu; /* 0x10075FC8: and eax, 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x10075FCD: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10075FCF: push edi */
    /* cmp eax, 3 */ /* 0x10075FD0: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10075FF4; /* 0x10075FD3: jne 0x10075ff4 */
L_10075FD5:
    eax = ebp + 0xC; /* 0x10075FD5: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10075FD8: push eax */
    RECOMP_CALL(sub_1007605A); /* 0x10075FD9: call 0x1007605a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10075FDE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10075FF4; /* 0x10075FE0: je 0x10075ff4 */
L_10075FE2:
    PUSH32(esp, ecx); /* 0x10075FE2: push ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x10075FE3: push dword ptr [ebp + 0x1c] */
    ecx = eax; /* 0x10075FE6: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10075FE8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007A938); /* 0x10075FEB: call 0x1007a938 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10075FF0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076026; /* 0x10075FF2: jne 0x10076026 */
L_10075FF4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10075FF4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x10075FF6: mov edi, ebx */
    /* cmp MEM32(esi + 0x78), ebx */ /* 0x10075FF8: cmp dword ptr [esi + 0x78], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x78)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10076028; /* 0x10075FFB: jle 0x10076028 */
L_10075FFD:
    eax = esi + 0x38; /* 0x10075FFD: lea eax, [esi + 0x38] */
    PUSH32(esp, edi); /* 0x10076000: push edi */
    ecx = eax; /* 0x10076001: mov ecx, eax */
    RECOMP_CALL(sub_10072F00); /* 0x10076003: call 0x10072f00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10076008: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007601E; /* 0x1007600A: je 0x1007601e */
L_1007600C:
    PUSH32(esp, ecx); /* 0x1007600C: push ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1007600D: push dword ptr [ebp + 0x1c] */
    ecx = eax; /* 0x10076010: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076012: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007A938); /* 0x10076015: call 0x1007a938 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007601A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076026; /* 0x1007601C: jne 0x10076026 */
L_1007601E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007601E: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x78) */ /* 0x1007601F: cmp edi, dword ptr [esi + 0x78] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x78));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10075FFD; /* 0x10076022: jl 0x10075ffd */
L_10076024:
    goto L_10076028; /* 0x10076024: jmp 0x10076028 */
L_10076026:
    SET_LO8(ebx, 1); /* 0x10076026: mov bl, 1 */
L_10076028:
    edi = POP32_VAL(esp); /* 0x10076028: pop edi */
    esi = POP32_VAL(esp); /* 0x10076029: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x1007602A: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x1007602C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1007602D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1007602E: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_10076031(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076031u);

L_10076031:
    PUSH32(esp, ebp); /* 0x10076031: push ebp */
    ebp = esp; /* 0x10076032: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10076034: push esi */
    esi = ecx; /* 0x10076035: mov esi, ecx */
    ecx = MEM32(esi); /* 0x10076037: mov ecx, dword ptr [esi] */
    eax = MEM32(ecx); /* 0x10076039: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1007603B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1007603E: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x30); /* 0x10076041: mov ecx, dword ptr [esi + 0x30] */
    MEM32(edx + 0x4) = eax; /* 0x10076044: mov dword ptr [edx + 4], eax */
    eax = edx; /* 0x10076047: mov eax, edx */
    MEM32(edx + 0xC) = esi; /* 0x10076049: mov dword ptr [edx + 0xc], esi */
    MEM32(edx) = 2; /* 0x1007604C: mov dword ptr [edx], 2 */
    MEM32(edx + 0x8) = ecx; /* 0x10076052: mov dword ptr [edx + 8], ecx */
    esi = POP32_VAL(esp); /* 0x10076055: pop esi */
    ebp = POP32_VAL(esp); /* 0x10076056: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10076057: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007605A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007605Au);

L_1007605A:
    PUSH32(esp, ebp); /* 0x1007605A: push ebp */
    ebp = esp; /* 0x1007605B: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1007605D: push ebx */
    PUSH32(esp, edi); /* 0x1007605E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1007605F: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x10076062: mov ebx, ecx */
    eax = MEM32(edi); /* 0x10076064: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0FFFFFFFu);
    eax = eax & 0x0FFFFFFFu; /* 0x10076066: and eax, 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 3 */ /* 0x1007606B: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076074; /* 0x1007606E: je 0x10076074 */
L_10076070:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10076070: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100760B1; /* 0x10076072: jmp 0x100760b1 */
L_10076074:
    edx = MEM32(ebx); /* 0x10076074: mov edx, dword ptr [ebx] */
    ecx = MEM32(edi + 0x4); /* 0x10076076: mov ecx, dword ptr [edi + 4] */
    /* cmp ecx, MEM32(edx + 0x174) */ /* 0x10076079: cmp ecx, dword ptr [edx + 0x174] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x174));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10076086; /* 0x1007607F: jne 0x10076086 */
L_10076081:
    eax = MEM32(edi + 0xC); /* 0x10076081: mov eax, dword ptr [edi + 0xc] */
    goto L_100760B1; /* 0x10076084: jmp 0x100760b1 */
L_10076086:
    PUSH32(esp, esi); /* 0x10076086: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10076087: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x78), esi */ /* 0x10076089: cmp dword ptr [ebx + 0x78], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x78)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100760AE; /* 0x1007608C: jle 0x100760ae */
L_1007608E:
    eax = ebx + 0x38; /* 0x1007608E: lea eax, [ebx + 0x38] */
    PUSH32(esp, esi); /* 0x10076091: push esi */
    ecx = eax; /* 0x10076092: mov ecx, eax */
    RECOMP_CALL(sub_10072F00); /* 0x10076094: call 0x10072f00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10076099: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100760A8; /* 0x1007609B: je 0x100760a8 */
L_1007609D:
    ecx = MEM32(eax + 0x8C); /* 0x1007609D: mov ecx, dword ptr [eax + 0x8c] */
    /* cmp ecx, MEM32(edi + 0x8) */ /* 0x100760A3: cmp ecx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100760B0; /* 0x100760A6: je 0x100760b0 */
L_100760A8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100760A8: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx + 0x78) */ /* 0x100760A9: cmp esi, dword ptr [ebx + 0x78] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x78));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007608E; /* 0x100760AC: jl 0x1007608e */
L_100760AE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100760AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100760B0:
    esi = POP32_VAL(esp); /* 0x100760B0: pop esi */
L_100760B1:
    edi = POP32_VAL(esp); /* 0x100760B1: pop edi */
    ebx = POP32_VAL(esp); /* 0x100760B2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100760B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100760B4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100760B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100760B7u);

L_100760B7:
    PUSH32(esp, 4); /* 0x100760B7: push 4 */
    eax = 0x100DBF5Cu; /* 0x100760B9: mov eax, 0x100dbf5c */
    RECOMP_CALL(sub_100149A4); /* 0x100760BE: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x100760C3: mov edi, ecx */
    esi = MEM32(edi + 0x14); /* 0x100760C5: mov esi, dword ptr [edi + 0x14] */
    MEM32(ebp + (-0x10)) = esi; /* 0x100760C8: mov dword ptr [ebp - 0x10], esi */
    RECOMP_CALL(sub_10023AF4); /* 0x100760CB: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x100760D0: mov ecx, esi */
    RECOMP_CALL(sub_10023D1E); /* 0x100760D2: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100760D7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x100760DB: push ecx */
    ecx = edi; /* 0x100760DC: mov ecx, edi */
    RECOMP_CALL(sub_1007616A); /* 0x100760DE: call 0x1007616a */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100760E3: mov edi, eax */
    MEM32(esi) = 0; /* 0x100760E5: mov dword ptr [esi], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x100760EB: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x100760F0: mov eax, edi */
    RECOMP_CALL(sub_100149D7); /* 0x100760F2: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100760F7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100760FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100760FAu);

L_100760FA:
    PUSH32(esp, ebx); /* 0x100760FA: push ebx */
    PUSH32(esp, esi); /* 0x100760FB: push esi */
    esi = MEM32(0x100E5130); /* 0x100760FC: mov esi, dword ptr [0x100e5130] */
    PUSH32(esp, edi); /* 0x10076102: push edi */
    edi = ecx; /* 0x10076103: mov edi, ecx */
    PUSH32(esp, edi); /* 0x10076105: push edi */
    RECOMP_ICALL(esi); /* 0x10076106: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10076108: push eax */
    RECOMP_CALL(sub_10076241); /* 0x10076109: call 0x10076241 */
    RECOMP_FLAGS_IN();
    eax = edi + 0x8; /* 0x1007610E: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x10076111: push eax */
    RECOMP_ICALL(esi); /* 0x10076112: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10076114: push eax */
    RECOMP_CALL(sub_10076241); /* 0x10076115: call 0x10076241 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x1007611A: push dword ptr [edi + 0x10] */
    RECOMP_CALL(sub_10076241); /* 0x1007611D: call 0x10076241 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(edi + 0x30); /* 0x10076122: mov ebx, dword ptr [edi + 0x30] */
    /* test ebx, ebx */ /* 0x10076125: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007615D; /* 0x10076127: je 0x1007615d */
L_10076129:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10076129: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x28), esi */ /* 0x1007612B: cmp dword ptr [edi + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10076145; /* 0x1007612E: jle 0x10076145 */
L_10076130:
    eax = MEM32(ebx); /* 0x10076130: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax + esi * 4); /* 0x10076132: mov ecx, dword ptr [eax + esi*4] */
    /* test ecx, ecx */ /* 0x10076135: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007613F; /* 0x10076137: je 0x1007613f */
L_10076139:
    eax = MEM32(ecx); /* 0x10076139: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1007613B: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x1007613D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_1007613F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007613F: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x28) */ /* 0x10076140: cmp esi, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10076130; /* 0x10076143: jl 0x10076130 */
L_10076145:
    PUSH32(esp, MEM32(ebx)); /* 0x10076145: push dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x10076147: mov esi, dword ptr [ebx + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007614A: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1007614F: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10076150: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ebx = esi; /* 0x10076155: mov ebx, esi */
    ecx = POP32_VAL(esp); /* 0x10076157: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10076158: pop ecx */
    /* test esi, esi */ /* 0x10076159: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076129; /* 0x1007615B: jne 0x10076129 */
L_1007615D:
    PUSH32(esp, MEM32(edi + 0x34)); /* 0x1007615D: push dword ptr [edi + 0x34] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10076160: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10076165: pop ecx */
    edi = POP32_VAL(esp); /* 0x10076166: pop edi */
    esi = POP32_VAL(esp); /* 0x10076167: pop esi */
    ebx = POP32_VAL(esp); /* 0x10076168: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10076169: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007616A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007616Au);

L_1007616A:
    PUSH32(esp, ebp); /* 0x1007616A: push ebp */
    ebp = esp; /* 0x1007616B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1007616D: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10076170: push ebx */
    PUSH32(esp, esi); /* 0x10076171: push esi */
    PUSH32(esp, edi); /* 0x10076172: push edi */
    edi = ecx; /* 0x10076173: mov edi, ecx */
    goto L_1007621E; /* 0x10076175: jmp 0x1007621e */
L_1007617A:
    esi = MEM32(edi); /* 0x1007617A: mov esi, dword ptr [edi] */
    ebx = MEM32(edi + 0x8); /* 0x1007617C: mov ebx, dword ptr [edi + 8] */
    eax = MEM32(edi + 0xC); /* 0x1007617F: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    ebx = ebx & esi; /* 0x10076182: and ebx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = esi; /* 0x10076184: mov dword ptr [ebp - 0xc], esi */
    /* test MEM8(eax + ebx * 4), 1 */ /* 0x10076187: test byte ptr [eax + ebx*4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ebx * 4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100761ED; /* 0x1007618B: je 0x100761ed */
L_1007618D:
    eax = MEM32(edi + 0x10); /* 0x1007618D: mov eax, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x8)) = eax; /* 0x10076190: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_10023AF4); /* 0x10076193: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10076198: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100761A4; /* 0x1007619A: je 0x100761a4 */
L_1007619C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x1007619C: add eax, -4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007619F: mov dword ptr [ebp - 4], eax */
    goto L_100761A8; /* 0x100761A2: jmp 0x100761a8 */
L_100761A4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100761A4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100761A8:
    ecx = MEM32(ebp + (-0x8)); /* 0x100761A8: mov ecx, dword ptr [ebp - 8] */
    ecx = MEM32(ecx + ebx * 8); /* 0x100761AB: mov ecx, dword ptr [ecx + ebx*8] */
    eax = ecx + 0x4; /* 0x100761AE: lea eax, [ecx + 4] */
    ecx = MEM32(ecx); /* 0x100761B1: mov ecx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x100761B3: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x3Cu; /* 0x100761B4: add ecx, 0x3c */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10068C05); /* 0x100761B7: call 0x10068c05 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100761BC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100761ED; /* 0x100761BE: je 0x100761ed */
L_100761C0:
    eax = MEM32(ebp + (-0x4)); /* 0x100761C0: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0xA0); /* 0x100761C3: mov eax, dword ptr [eax + 0xa0] */
    ecx = MEM32(eax + 0x90); /* 0x100761C9: mov ecx, dword ptr [eax + 0x90] */
    esi = ecx; /* 0x100761CF: mov esi, ecx */
    eax = MEM32(ebp + (-0x8)); /* 0x100761D1: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100761D4: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x100761D7: shr esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 5u; /* 0x100761D7: shr esi, 5 */
    eax = MEM32(eax + ebx * 8); /* 0x100761DA: mov eax, dword ptr [eax + ebx*8] */
    edx = MEM32(eax + 0x8); /* 0x100761DD: mov edx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100761E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100761E2: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x100761E3: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x100761E3: shl eax, cl */
    /* test MEM32(edx + esi * 4), eax */ /* 0x100761E5: test dword ptr [edx + esi*4], eax */
    _flag_a = (uint32_t)(MEM32(edx + esi * 4)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076229; /* 0x100761E8: je 0x10076229 */
L_100761EA:
    esi = MEM32(ebp + (-0xC)); /* 0x100761EA: mov esi, dword ptr [ebp - 0xc] */
L_100761ED:
    eax = MEM32(edi + 0xC); /* 0x100761ED: mov eax, dword ptr [edi + 0xc] */
    ecx = esi; /* 0x100761F0: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    ecx = ecx & MEM32(edi + 0x8); /* 0x100761F2: and ecx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100761F5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax + ecx * 4; /* 0x100761F7: lea eax, [eax + ecx*4] */
    { uint32_t _tmp = MEM32(eax); /* 0x100761FA: xchg dword ptr [eax], ebx */
      MEM32(eax) = ebx;
      ebx = _tmp; }
    /* test LO8(ebx), 1 */ /* 0x100761FC: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076234; /* 0x100761FF: je 0x10076234 */
L_10076201:
    eax = MEM32(edi + 0x10); /* 0x10076201: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x10076204: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10076207: push ecx */
    ecx = esi; /* 0x10076208: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    ecx = ecx & MEM32(edi + 0x8); /* 0x1007620A: and ecx, dword ptr [edi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax + ecx * 8; /* 0x1007620D: lea ecx, [eax + ecx*8] */
    RECOMP_CALL(sub_10076265); /* 0x10076210: call 0x10076265 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076215: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076234; /* 0x10076217: jne 0x10076234 */
L_10076219:
    eax = esi + 0x1; /* 0x10076219: lea eax, [esi + 1] */
    MEM32(edi) = eax; /* 0x1007621C: mov dword ptr [edi], eax */
L_1007621E:
    eax = MEM32(edi); /* 0x1007621E: mov eax, dword ptr [edi] */
    /* cmp eax, MEM32(edi + 0x4) */ /* 0x10076220: cmp eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007617A; /* 0x10076223: jl 0x1007617a */
L_10076229:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10076229: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007622B:
    edi = POP32_VAL(esp); /* 0x1007622B: pop edi */
    esi = POP32_VAL(esp); /* 0x1007622C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007622D: pop ebx */
    esp = ebp; /* 0x1007622E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10076230: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10076231: ret 4 */
L_10076234:
    /* test ebx, ebx */ /* 0x10076234: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007623D; /* 0x10076236: je 0x1007623d */
L_10076238:
    ecx = esi + 0x1; /* 0x10076238: lea ecx, [esi + 1] */
    MEM32(edi) = ecx; /* 0x1007623B: mov dword ptr [edi], ecx */
L_1007623D:
    eax = ebx; /* 0x1007623D: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_1007622B; /* 0x1007623F: jmp 0x1007622b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10076241(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076241u);

L_10076241:
    PUSH32(esp, ebp); /* 0x10076241: push ebp */
    ebp = esp; /* 0x10076242: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10076244: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10076245: mov esi, dword ptr [ebp + 8] */
    goto L_1007625C; /* 0x10076248: jmp 0x1007625c */
L_1007624A:
    ecx = esi + (-0xBC); /* 0x1007624A: lea ecx, [esi - 0xbc] */
    esi = MEM32(esi); /* 0x10076250: mov esi, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x10076252: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007625C; /* 0x10076254: je 0x1007625c */
L_10076256:
    eax = MEM32(ecx); /* 0x10076256: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x10076258: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x1007625A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_1007625C:
    /* test esi, esi */ /* 0x1007625C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007624A; /* 0x1007625E: jne 0x1007624a */
L_10076260:
    esi = POP32_VAL(esp); /* 0x10076260: pop esi */
    ebp = POP32_VAL(esp); /* 0x10076261: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10076262: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10076265(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076265u);

L_10076265:
    PUSH32(esp, edi); /* 0x10076265: push edi */
    edi = ecx; /* 0x10076266: mov edi, ecx */
    eax = MEM32(edi); /* 0x10076268: mov eax, dword ptr [edi] */
    edx = MEM32(edi + 0x4); /* 0x1007626A: mov edx, dword ptr [edi + 4] */
    eax = MEM32(eax + 0xC); /* 0x1007626D: mov eax, dword ptr [eax + 0xc] */
    eax = MEM32(eax + edx * 4); /* 0x10076270: mov eax, dword ptr [eax + edx*4] */
    /* cmp eax, 1 */ /* 0x10076273: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076292; /* 0x10076276: je 0x10076292 */
L_10076278:
    ecx = MEM32(edi); /* 0x10076278: mov ecx, dword ptr [edi] */
    edx = MEM32(edi + 0x4); /* 0x1007627A: mov edx, dword ptr [edi + 4] */
    PUSH32(esp, esi); /* 0x1007627D: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007627E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ecx + 0xC); /* 0x10076280: mov ecx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10076283: inc esi */
    _flag_k = FK_INC;
    ecx = ecx + edx * 4; /* 0x10076284: lea ecx, [ecx + edx*4] */
    { uint32_t _tmp = MEM32(ecx); /* 0x10076287: xchg dword ptr [ecx], esi */
      MEM32(ecx) = esi;
      esi = _tmp; }
    /* cmp esi, eax */ /* 0x10076289: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1007628B: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10076292; /* 0x1007628C: jne 0x10076292 */
L_1007628E:
    SET_LO8(eax, 1); /* 0x1007628E: mov al, 1 */
    goto L_100762B2; /* 0x10076290: jmp 0x100762b2 */
L_10076292:
    edx = MEM32(edi); /* 0x10076292: mov edx, dword ptr [edi] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10076294: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx + 0x14; /* 0x10076297: lea eax, [edx + 0x14] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1007629A: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100762B0; /* 0x1007629E: jne 0x100762b0 */
L_100762A0:
    PUSH32(esp, MEM32(edx)); /* 0x100762A0: push dword ptr [edx] */
    ecx = edx + 0x1C; /* 0x100762A2: lea ecx, [edx + 0x1c] */
    PUSH32(esp, edx); /* 0x100762A5: push edx */
    PUSH32(esp, 0x1006AF48u); /* 0x100762A6: push 0x1006af48 */
    RECOMP_CALL(sub_10074CBB); /* 0x100762AB: call 0x10074cbb */
    RECOMP_FLAGS_IN();
L_100762B0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x100762B0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100762B2:
    edi = POP32_VAL(esp); /* 0x100762B2: pop edi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100762B3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100762B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100762B6u);

L_100762B6:
    PUSH32(esp, ebx); /* 0x100762B6: push ebx */
    PUSH32(esp, esi); /* 0x100762B7: push esi */
    esi = MEM32(0x100E5130); /* 0x100762B8: mov esi, dword ptr [0x100e5130] */
    PUSH32(esp, edi); /* 0x100762BE: push edi */
    edi = ecx; /* 0x100762BF: mov edi, ecx */
    PUSH32(esp, edi); /* 0x100762C1: push edi */
    RECOMP_ICALL(esi); /* 0x100762C2: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100762C4: push eax */
    RECOMP_CALL(sub_10076425); /* 0x100762C5: call 0x10076425 */
    RECOMP_FLAGS_IN();
    eax = edi + 0x8; /* 0x100762CA: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x100762CD: push eax */
    RECOMP_ICALL(esi); /* 0x100762CE: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100762D0: push eax */
    RECOMP_CALL(sub_10076425); /* 0x100762D1: call 0x10076425 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x100762D6: push dword ptr [edi + 0x10] */
    RECOMP_CALL(sub_10076425); /* 0x100762D9: call 0x10076425 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(edi + 0x30); /* 0x100762DE: mov ebx, dword ptr [edi + 0x30] */
    /* test ebx, ebx */ /* 0x100762E1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076319; /* 0x100762E3: je 0x10076319 */
L_100762E5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100762E5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x28), esi */ /* 0x100762E7: cmp dword ptr [edi + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10076301; /* 0x100762EA: jle 0x10076301 */
L_100762EC:
    eax = MEM32(ebx); /* 0x100762EC: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax + esi * 4); /* 0x100762EE: mov ecx, dword ptr [eax + esi*4] */
    /* test ecx, ecx */ /* 0x100762F1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100762FB; /* 0x100762F3: je 0x100762fb */
L_100762F5:
    eax = MEM32(ecx); /* 0x100762F5: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x100762F7: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x100762F9: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_100762FB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100762FB: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x28) */ /* 0x100762FC: cmp esi, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100762EC; /* 0x100762FF: jl 0x100762ec */
L_10076301:
    PUSH32(esp, MEM32(ebx)); /* 0x10076301: push dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x10076303: mov esi, dword ptr [ebx + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10076306: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1007630B: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007630C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ebx = esi; /* 0x10076311: mov ebx, esi */
    ecx = POP32_VAL(esp); /* 0x10076313: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10076314: pop ecx */
    /* test esi, esi */ /* 0x10076315: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100762E5; /* 0x10076317: jne 0x100762e5 */
L_10076319:
    PUSH32(esp, MEM32(edi + 0x34)); /* 0x10076319: push dword ptr [edi + 0x34] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007631C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10076321: pop ecx */
    edi = POP32_VAL(esp); /* 0x10076322: pop edi */
    esi = POP32_VAL(esp); /* 0x10076323: pop esi */
    ebx = POP32_VAL(esp); /* 0x10076324: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10076325: ret  */
    RECOMP_REGS_OUT();
}

void sub_10076326(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076326u);

L_10076326:
    PUSH32(esp, ebp); /* 0x10076326: push ebp */
    ebp = esp; /* 0x10076327: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10076329: push ecx */
    edx = MEM32(ebp + 0xC); /* 0x1007632A: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1007632D: push esi */
    esi = ecx; /* 0x1007632E: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10076330: push edi */
    ecx = MEM32(esi + 0x2C); /* 0x10076331: mov ecx, dword ptr [esi + 0x2c] */
    edi = MEM32(esi + 0x28); /* 0x10076334: mov edi, dword ptr [esi + 0x28] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edx) >> 31) & 1u)); /* 0x10076337: sar edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10076339: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    edi = edi & MEM32(ebp + 0xC); /* 0x1007633A: and edi, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(esi + 0x3C) */ /* 0x1007633D: cmp edx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10076349; /* 0x10076340: jl 0x10076349 */
L_10076342:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076342: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1007641D; /* 0x10076344: jmp 0x1007641d */
L_10076349:
    ecx = MEM32(esi + 0x38); /* 0x10076349: mov ecx, dword ptr [esi + 0x38] */
    eax = MEM32(esi + 0x34); /* 0x1007634C: mov eax, dword ptr [esi + 0x34] */
    PUSH32(esp, ebx); /* 0x1007634F: push ebx */
    /* cmp edx, ecx */ /* 0x10076350: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10076365; /* 0x10076352: jl 0x10076365 */
L_10076354:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x10076354: sub edx, ecx */
    _flag_k = FK_CMP;
    ebx = MEM32(eax + ecx * 4 + (-0x4)); /* 0x10076356: mov ebx, dword ptr [eax + ecx*4 - 4] */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_10076368; /* 0x1007635A: js 0x10076368 */
L_1007635C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007635C: inc edx */
    _flag_k = FK_INC;
L_1007635D:
    ebx = MEM32(ebx + 0x4); /* 0x1007635D: mov ebx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10076360: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10076368; /* 0x10076361: je 0x10076368 */
L_10076363:
    RECOMP_BACKEDGE();
    goto L_1007635D; /* 0x10076363: jmp 0x1007635d */
L_10076365:
    ebx = MEM32(eax + edx * 4); /* 0x10076365: mov ebx, dword ptr [eax + edx*4] */
L_10076368:
    eax = MEM32(ebx); /* 0x10076368: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007636A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x1007636C: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = ecx; /* 0x1007636F: mov dword ptr [ebp + 0xc], ecx */
    ecx = eax + edi * 4; /* 0x10076372: lea ecx, [eax + edi*4] */
    eax = MEM32(ebp + 0xC); /* 0x10076375: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x10076378: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007637C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1007637F: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x10076382: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007641A; /* 0x10076385: jne 0x1007641a */
L_1007638B:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x1007638B: push -2 */
    ecx = ebx + 0x8; /* 0x1007638D: lea ecx, [ebx + 8] */
    eax = POP32_VAL(esp); /* 0x10076390: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edi; } else { eax = _d; } } /* 0x10076391: lock cmpxchg dword ptr [ecx], edi */
    _flag_k = FK_CMP;
    ebx = MEM32(0x100E5134); /* 0x10076395: mov ebx, dword ptr [0x100e5134] */
    PUSH32(esp, esi); /* 0x1007639B: push esi */
    RECOMP_ICALL(ebx); /* 0x1007639C: call ebx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1007639E: movzx eax, ax */
    /* cmp eax, MEM32(esi + 0x44) */ /* 0x100763A1: cmp eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10076405; /* 0x100763A4: jle 0x10076405 */
L_100763A6:
    eax = MEM32(ebp + 0x8); /* 0x100763A6: mov eax, dword ptr [ebp + 8] */
    edi = esi + 0x8; /* 0x100763A9: lea edi, [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x120u; /* 0x100763AC: add eax, 0x120 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100763B1: push eax */
    PUSH32(esp, edi); /* 0x100763B2: push edi */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x100763B3: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x100763B9: push edi */
    RECOMP_ICALL(ebx); /* 0x100763BA: call ebx */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x100763BC: movzx eax, ax */
    /* cmp eax, MEM32(esi + 0x44) */ /* 0x100763BF: cmp eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10076416; /* 0x100763C2: jle 0x10076416 */
L_100763C4:
    eax = MEM32(esi + 0x24); /* 0x100763C4: mov eax, dword ptr [esi + 0x24] */
    ecx = 0xA0000000u; /* 0x100763C7: mov ecx, 0xa0000000 */
    eax = MEM32(eax + 0x194); /* 0x100763CC: mov eax, dword ptr [eax + 0x194] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100763D2: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x100763D4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076416; /* 0x100763D6: je 0x10076416 */
L_100763D8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100763D8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x48; /* 0x100763DA: lea ecx, [esi + 0x48] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100763DD: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100763DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x100763E0: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x100763E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076416; /* 0x100763E6: jne 0x10076416 */
L_100763E8:
    PUSH32(esp, edi); /* 0x100763E8: push edi */
    RECOMP_ICALL(MEM32(0x100E5130)); /* 0x100763E9: call dword ptr [0x100e5130] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x100763EF: push dword ptr [esi + 0x24] */
    ecx = esi + 0x14; /* 0x100763F2: lea ecx, [esi + 0x14] */
    MEM32(esi + 0x10) = eax; /* 0x100763F5: mov dword ptr [esi + 0x10], eax */
    PUSH32(esp, esi); /* 0x100763F8: push esi */
    PUSH32(esp, 0x10076449u); /* 0x100763F9: push 0x10076449 */
    RECOMP_CALL(sub_10074CBB); /* 0x100763FE: call 0x10074cbb */
    RECOMP_FLAGS_IN();
    goto L_10076416; /* 0x10076403: jmp 0x10076416 */
L_10076405:
    ecx = MEM32(ebp + 0x8); /* 0x10076405: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x120u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x120u; /* 0x10076408: add ecx, 0x120 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1007640E: push ecx */
    PUSH32(esp, esi); /* 0x1007640F: push esi */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x10076410: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
L_10076416:
    SET_LO8(eax, 1); /* 0x10076416: mov al, 1 */
    goto L_1007641C; /* 0x10076418: jmp 0x1007641c */
L_1007641A:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1007641A: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1007641C:
    ebx = POP32_VAL(esp); /* 0x1007641C: pop ebx */
L_1007641D:
    edi = POP32_VAL(esp); /* 0x1007641D: pop edi */
    esi = POP32_VAL(esp); /* 0x1007641E: pop esi */
    esp = ebp; /* 0x1007641F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10076421: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x10076422: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_10076425(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076425u);

L_10076425:
    PUSH32(esp, ebp); /* 0x10076425: push ebp */
    ebp = esp; /* 0x10076426: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10076428: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10076429: mov esi, dword ptr [ebp + 8] */
    goto L_10076440; /* 0x1007642C: jmp 0x10076440 */
L_1007642E:
    ecx = esi + (-0x120); /* 0x1007642E: lea ecx, [esi - 0x120] */
    esi = MEM32(esi); /* 0x10076434: mov esi, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x10076436: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076440; /* 0x10076438: je 0x10076440 */
L_1007643A:
    eax = MEM32(ecx); /* 0x1007643A: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1007643C: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x1007643E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_10076440:
    /* test esi, esi */ /* 0x10076440: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007642E; /* 0x10076442: jne 0x1007642e */
L_10076444:
    esi = POP32_VAL(esp); /* 0x10076444: pop esi */
    ebp = POP32_VAL(esp); /* 0x10076445: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10076446: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10076449(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076449u);

L_10076449:
    PUSH32(esp, ebp); /* 0x10076449: push ebp */
    ebp = esp; /* 0x1007644A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1007644C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1007644D: mov esi, dword ptr [ebp + 8] */
    ecx = 0xA0000000u; /* 0x10076450: mov ecx, 0xa0000000 */
    eax = MEM32(esi + 0x24); /* 0x10076455: mov eax, dword ptr [esi + 0x24] */
    eax = MEM32(eax + 0x194); /* 0x10076458: mov eax, dword ptr [eax + 0x194] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1007645E: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x10076460: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076477; /* 0x10076462: je 0x10076477 */
L_10076464:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x10076464: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_10076425); /* 0x10076467: call 0x10076425 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x1007646C: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x48; /* 0x10076470: lea eax, [esi + 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10076473: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _tmp = MEM32(eax); /* 0x10076475: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
L_10076477:
    esi = POP32_VAL(esp); /* 0x10076477: pop esi */
    ebp = POP32_VAL(esp); /* 0x10076478: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10076479: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007647A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007647Au);

L_1007647A:
    PUSH32(esp, ebp); /* 0x1007647A: push ebp */
    ebp = esp; /* 0x1007647B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1007647D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1007647E: mov esi, dword ptr [ebp + 8] */
    edx = esi; /* 0x10076481: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx + 0x18); /* 0x10076483: sub edx, dword ptr [ecx + 0x18] */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x10076486: push edi */
    edi = MEM32(ebp + 0xC); /* 0x10076487: mov edi, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x1007648A: mov eax, edi */
    { uint32_t _sa = eax, _sb = MEM32(ecx + 0x1C), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007648C: sbb eax, dword ptr [ecx + 0x1c] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + 0xC) = eax; /* 0x1007648F: mov dword ptr [ebp + 0xc], eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100764A0; /* 0x10076492: jne 0x100764a0 */
L_10076494:
    /* cmp edx, 0x3E8u */ /* 0x10076494: cmp edx, 0x3e8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3E8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100764A0; /* 0x1007649A: ja 0x100764a0 */
L_1007649C:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1007649C: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100764A8; /* 0x1007649E: jmp 0x100764a8 */
L_100764A0:
    SET_LO8(eax, 1); /* 0x100764A0: mov al, 1 */
    MEM32(ecx + 0x18) = esi; /* 0x100764A2: mov dword ptr [ecx + 0x18], esi */
    MEM32(ecx + 0x1C) = edi; /* 0x100764A5: mov dword ptr [ecx + 0x1c], edi */
L_100764A8:
    edi = POP32_VAL(esp); /* 0x100764A8: pop edi */
    esi = POP32_VAL(esp); /* 0x100764A9: pop esi */
    ebp = POP32_VAL(esp); /* 0x100764AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100764AB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_100764AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100764AEu);

L_100764AE:
    PUSH32(esp, ebp); /* 0x100764AE: push ebp */
    ebp = esp; /* 0x100764AF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100764B1: push ecx */
    eax = ecx; /* 0x100764B2: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100764B4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu */ /* 0x100764B6: cmp dword ptr [ebp + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100764BA: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x100764BB: mov ebx, dword ptr [ebp + 8] */
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100764BE: setne cl */
    PUSH32(esp, esi); /* 0x100764C1: push esi */
    PUSH32(esp, edi); /* 0x100764C2: push edi */
    edi = MEM32(eax + 0x2C); /* 0x100764C3: mov edi, dword ptr [eax + 0x2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100764C6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx); /* 0x100764C8: add ecx, dword ptr [ebx] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x100764CA: mov dword ptr [ebp - 4], eax */
    /* test edi, edi */ /* 0x100764CD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100764EE; /* 0x100764CF: jle 0x100764ee */
L_100764D1:
    eax = esi + ecx; /* 0x100764D1: lea eax, [esi + ecx] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100764D4: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x100764D5: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x100764D7: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100764EE; /* 0x100764DA: je 0x100764ee */
L_100764DC:
    eax = MEM32(ebp + (-0x4)); /* 0x100764DC: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x20); /* 0x100764DF: mov eax, dword ptr [eax + 0x20] */
    eax = MEM32(eax + edx * 4); /* 0x100764E2: mov eax, dword ptr [eax + edx*4] */
    /* test eax, eax */ /* 0x100764E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100764F9; /* 0x100764E7: jne 0x100764f9 */
L_100764E9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100764E9: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x100764EA: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100764D1; /* 0x100764EC: jl 0x100764d1 */
L_100764EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100764EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100764F0:
    edi = POP32_VAL(esp); /* 0x100764F0: pop edi */
    esi = POP32_VAL(esp); /* 0x100764F1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100764F2: pop ebx */
    esp = ebp; /* 0x100764F3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100764F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100764F6: ret 8 */
L_100764F9:
    MEM32(ebx) = edx; /* 0x100764F9: mov dword ptr [ebx], edx */
    RECOMP_BACKEDGE();
    goto L_100764F0; /* 0x100764FB: jmp 0x100764f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100764FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100764FDu);

L_100764FD:
    PUSH32(esp, ebp); /* 0x100764FD: push ebp */
    ebp = esp; /* 0x100764FE: mov ebp, esp */
    eax = MEM32(ecx + 0x5C); /* 0x10076500: mov eax, dword ptr [ecx + 0x5c] */
    PUSH32(esp, esi); /* 0x10076503: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10076504: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10076507: push edi */
    if (7u) _cf = (((esi) >> 25) & 1u); /* 0x10076508: shl esi, 7 */
    if (7u) { _flag_a = recomp_flags_pack((esi << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 7u; /* 0x10076508: shl esi, 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1007650B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007650D: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(esi + eax), edi */ /* 0x1007650E: cmp dword ptr [esi + eax], edi */
    _flag_a = (uint32_t)(MEM32(esi + eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10076532; /* 0x10076511: jbe 0x10076532 */
L_10076513:
    eax = MEM32(ecx + 0x5C); /* 0x10076513: mov eax, dword ptr [ecx + 0x5c] */
    edx = MEM32(esi + eax); /* 0x10076516: mov edx, dword ptr [esi + eax] */
    /* cmp edx, edi */ /* 0x10076519: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007652C; /* 0x1007651B: jbe 0x1007652c */
L_1007651D:
    ecx = MEM32(ecx + 0x5C); /* 0x1007651D: mov ecx, dword ptr [ecx + 0x5c] */
    eax = edx; /* 0x10076520: mov eax, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x10076522: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edi; } else { eax = _d; } } /* 0x10076524: lock cmpxchg dword ptr [ecx], edi */
    _flag_k = FK_CMP;
    /* cmp edx, eax */ /* 0x10076528: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007652E; /* 0x1007652A: je 0x1007652e */
L_1007652C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007652C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007652E:
    eax = edx; /* 0x1007652E: mov eax, edx */
    goto L_10076534; /* 0x10076530: jmp 0x10076534 */
L_10076532:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10076532: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10076534:
    edi = POP32_VAL(esp); /* 0x10076534: pop edi */
    esi = POP32_VAL(esp); /* 0x10076535: pop esi */
    ebp = POP32_VAL(esp); /* 0x10076536: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10076537: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007653A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007653Au);

L_1007653A:
    PUSH32(esp, ebp); /* 0x1007653A: push ebp */
    ebp = esp; /* 0x1007653B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1007653D: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x1A0); /* 0x10076540: mov eax, dword ptr [ecx + 0x1a0] */
    edx = MEM32(ecx + 0x1A4); /* 0x10076546: mov edx, dword ptr [ecx + 0x1a4] */
    PUSH32(esp, esi); /* 0x1007654C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1007654D: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x10076550: sub esi, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x10076552: mov eax, dword ptr [ebp + 0xc] */
    { uint32_t _sa = eax, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10076555: sbb eax, edx */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x4)) = eax; /* 0x10076557: mov dword ptr [ebp - 4], eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10076564; /* 0x1007655A: jne 0x10076564 */
L_1007655C:
    /* cmp esi, 0x7D0u */ /* 0x1007655C: cmp esi, 0x7d0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7D0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007656F; /* 0x10076562: jbe 0x1007656f */
L_10076564:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10076564: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076567: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10074DA7); /* 0x1007656A: call 0x10074da7 */
    RECOMP_FLAGS_IN();
L_1007656F:
    esi = POP32_VAL(esp); /* 0x1007656F: pop esi */
    esp = ebp; /* 0x10076570: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10076572: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10076573: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10076576(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076576u);

L_10076576:
    PUSH32(esp, ebp); /* 0x10076576: push ebp */
    ebp = esp; /* 0x10076577: mov ebp, esp */
    eax = MEM32(ecx + 0x50); /* 0x10076579: mov eax, dword ptr [ecx + 0x50] */
    PUSH32(esp, esi); /* 0x1007657C: push esi */
    esi = MEM32(ecx + 0xB0); /* 0x1007657D: mov esi, dword ptr [ecx + 0xb0] */
    PUSH32(esp, edi); /* 0x10076583: push edi */
    edi = ecx + 0x10; /* 0x10076584: lea edi, [ecx + 0x10] */
    PUSH32(esp, edi); /* 0x10076587: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076588: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1007658B: push eax */
    PUSH32(esp, esi); /* 0x1007658C: push esi */
    RECOMP_CALL(sub_100731A1); /* 0x1007658D: call 0x100731a1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10076592: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100765A5; /* 0x10076594: jne 0x100765a5 */
L_10076596:
    /* test esi, esi */ /* 0x10076596: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100765A5; /* 0x10076598: je 0x100765a5 */
L_1007659A:
    PUSH32(esp, edi); /* 0x1007659A: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007659B: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007659E: push esi */
    PUSH32(esp, eax); /* 0x1007659F: push eax */
    RECOMP_CALL(sub_100731A1); /* 0x100765A0: call 0x100731a1 */
    RECOMP_FLAGS_IN();
L_100765A5:
    edi = POP32_VAL(esp); /* 0x100765A5: pop edi */
    esi = POP32_VAL(esp); /* 0x100765A6: pop esi */
    ebp = POP32_VAL(esp); /* 0x100765A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100765A8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100765AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100765ABu);

L_100765AB:
    PUSH32(esp, ebp); /* 0x100765AB: push ebp */
    ebp = esp; /* 0x100765AC: mov ebp, esp */
    eax = MEM32(ecx + 0xA0); /* 0x100765AE: mov eax, dword ptr [ecx + 0xa0] */
    PUSH32(esp, esi); /* 0x100765B4: push esi */
    esi = MEM32(ecx + 0xB4); /* 0x100765B5: mov esi, dword ptr [ecx + 0xb4] */
    PUSH32(esp, edi); /* 0x100765BB: push edi */
    edi = ecx + 0x60; /* 0x100765BC: lea edi, [ecx + 0x60] */
    PUSH32(esp, edi); /* 0x100765BF: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100765C0: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x100765C3: push eax */
    PUSH32(esp, esi); /* 0x100765C4: push esi */
    RECOMP_CALL(sub_100731A1); /* 0x100765C5: call 0x100731a1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100765CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100765DD; /* 0x100765CC: jne 0x100765dd */
L_100765CE:
    /* test esi, esi */ /* 0x100765CE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100765DD; /* 0x100765D0: je 0x100765dd */
L_100765D2:
    PUSH32(esp, edi); /* 0x100765D2: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100765D3: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100765D6: push esi */
    PUSH32(esp, eax); /* 0x100765D7: push eax */
    RECOMP_CALL(sub_100731A1); /* 0x100765D8: call 0x100731a1 */
    RECOMP_FLAGS_IN();
L_100765DD:
    edi = POP32_VAL(esp); /* 0x100765DD: pop edi */
    esi = POP32_VAL(esp); /* 0x100765DE: pop esi */
    ebp = POP32_VAL(esp); /* 0x100765DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100765E0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100765E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100765E3u);

L_100765E3:
    PUSH32(esp, ebp); /* 0x100765E3: push ebp */
    ebp = esp; /* 0x100765E4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100765E6: push ecx */
    PUSH32(esp, esi); /* 0x100765E7: push esi */
    esi = ecx; /* 0x100765E8: mov esi, ecx */
    /* cmp MEM32(esi), 8 */ /* 0x100765EA: cmp dword ptr [esi], 8 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076630; /* 0x100765ED: je 0x10076630 */
L_100765EF:
    /* cmp MEM32(esi), 0x10u */ /* 0x100765EF: cmp dword ptr [esi], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10076645; /* 0x100765F2: jne 0x10076645 */
L_100765F4:
    ecx = MEM32(esi + 0x8); /* 0x100765F4: mov ecx, dword ptr [esi + 8] */
    /* cmp ecx, 1 */ /* 0x100765F7: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10076623; /* 0x100765FA: jne 0x10076623 */
L_100765FC:
    ecx = MEM32(esi + 0x4); /* 0x100765FC: mov ecx, dword ptr [esi + 4] */
    eax = ebp + (-0x4); /* 0x100765FF: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10076602: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x10076603: add ecx, 0x34 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10072D7D); /* 0x10076606: call 0x10072d7d */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x1007660B: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007660E: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10076610: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    eax = eax & MEM32(ebp + (-0x4)); /* 0x10076612: and eax, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076645; /* 0x10076615: je 0x10076645 */
L_10076617:
    MEM8(eax + 0x11) = (uint8_t)(1); /* 0x10076617: mov byte ptr [eax + 0x11], 1 */
L_1007661B:
    MEM32(esi) = 4; /* 0x1007661B: mov dword ptr [esi], 4 */
    goto L_10076642; /* 0x10076621: jmp 0x10076642 */
L_10076623:
    PUSH32(esp, 0); /* 0x10076623: push 0 */
    RECOMP_CALL(sub_1007B0C4); /* 0x10076625: call 0x1007b0c4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007662A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007661B; /* 0x1007662C: jne 0x1007661b */
L_1007662E:
    goto L_10076645; /* 0x1007662E: jmp 0x10076645 */
L_10076630:
    ecx = MEM32(esi + 0x4); /* 0x10076630: mov ecx, dword ptr [esi + 4] */
    RECOMP_CALL(sub_10072BB1); /* 0x10076633: call 0x10072bb1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10076638: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076645; /* 0x1007663A: je 0x10076645 */
L_1007663C:
    MEM32(esi) = 2; /* 0x1007663C: mov dword ptr [esi], 2 */
L_10076642:
    MEM32(esi + 0x8) = eax; /* 0x10076642: mov dword ptr [esi + 8], eax */
L_10076645:
    /* test MEM8(esi), 0x18u */ /* 0x10076645: test byte ptr [esi], 0x18 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x18u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0); /* 0x10076648: push 0 */
    eax = POP32_VAL(esp); /* 0x1007664A: pop eax */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1007664B: sete al */
    esi = POP32_VAL(esp); /* 0x1007664E: pop esi */
    esp = ebp; /* 0x1007664F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10076651: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10076652: ret  */
    RECOMP_REGS_OUT();
}

void sub_10076653(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076653u);

L_10076653:
    PUSH32(esp, esi); /* 0x10076653: push esi */
    esi = ecx; /* 0x10076654: mov esi, ecx */
    /* test MEM8(esi), 0x18u */ /* 0x10076656: test byte ptr [esi], 0x18 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x18u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076668; /* 0x10076659: je 0x10076668 */
L_1007665B:
    RECOMP_CALL(sub_100765E3); /* 0x1007665B: call 0x100765e3 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076660: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076668; /* 0x10076662: jne 0x10076668 */
L_10076664:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10076664: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10076666: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10076667: ret  */
L_10076668:
    eax = MEM32(esi); /* 0x10076668: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1007666A: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1007666B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10076676; /* 0x1007666C: je 0x10076676 */
L_1007666E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1007666E: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1007666F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10076697; /* 0x10076670: jne 0x10076697 */
L_10076672:
    PUSH32(esp, 1); /* 0x10076672: push 1 */
    goto L_10076678; /* 0x10076674: jmp 0x10076678 */
L_10076676:
    PUSH32(esp, 0); /* 0x10076676: push 0 */
L_10076678:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x10076678: push dword ptr [esi + 8] */
    ecx = MEM32(esi + 0x4); /* 0x1007667B: mov ecx, dword ptr [esi + 4] */
    RECOMP_CALL(sub_10072BF1); /* 0x1007667E: call 0x10072bf1 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x10076683: mov dword ptr [esi + 8], eax */
    /* test eax, eax */ /* 0x10076686: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076697; /* 0x10076688: je 0x10076697 */
L_1007668A:
    _flag_a = (uint32_t)((MEM8(eax + 0xB3) | 1)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0xB3) | 1)) << 24;
    MEM8(eax + 0xB3) = (uint8_t)(MEM8(eax + 0xB3) | 1); /* 0x1007668A: or byte ptr [eax + 0xb3], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 1; /* 0x10076691: mov dword ptr [esi], 1 */
L_10076697:
    eax = MEM32(esi + 0x8); /* 0x10076697: mov eax, dword ptr [esi + 8] */
    esi = POP32_VAL(esp); /* 0x1007669A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007669B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007669C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007669Cu);

L_1007669C:
    PUSH32(esp, ebp); /* 0x1007669C: push ebp */
    ebp = esp; /* 0x1007669D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1007669F: push esi */
    esi = ecx; /* 0x100766A0: mov esi, ecx */
    PUSH32(esp, edi); /* 0x100766A2: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100766A3: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x100766A6: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100766A8: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100766A9: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100766B4; /* 0x100766AA: je 0x100766b4 */
L_100766AC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100766AC: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100766AD: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100766C3; /* 0x100766AE: jne 0x100766c3 */
L_100766B0:
    PUSH32(esp, 1); /* 0x100766B0: push 1 */
    goto L_100766B6; /* 0x100766B2: jmp 0x100766b6 */
L_100766B4:
    PUSH32(esp, 0); /* 0x100766B4: push 0 */
L_100766B6:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x100766B6: push dword ptr [esi + 8] */
    ecx = edi; /* 0x100766B9: mov ecx, edi */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x100766BB: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1006E544); /* 0x100766BE: call 0x1006e544 */
    RECOMP_FLAGS_IN();
L_100766C3:
    MEM32(esi + 0x8) = edi; /* 0x100766C3: mov dword ptr [esi + 8], edi */
    edi = POP32_VAL(esp); /* 0x100766C6: pop edi */
    MEM32(esi) = 1; /* 0x100766C7: mov dword ptr [esi], 1 */
    esi = POP32_VAL(esp); /* 0x100766CD: pop esi */
    ebp = POP32_VAL(esp); /* 0x100766CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100766CF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100766D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100766D2u);

L_100766D2:
    PUSH32(esp, ebp); /* 0x100766D2: push ebp */
    ebp = esp; /* 0x100766D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x100766D5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x4); /* 0x100766D8: lea eax, [ebp - 4] */
    PUSH32(esp, esi); /* 0x100766DB: push esi */
    PUSH32(esp, edi); /* 0x100766DC: push edi */
    esi = ecx; /* 0x100766DD: mov esi, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x100766DF: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100766E2: push eax */
    RECOMP_CALL(sub_100730E2); /* 0x100766E3: call 0x100730e2 */
    RECOMP_FLAGS_IN();
    goto L_1007672F; /* 0x100766E8: jmp 0x1007672f */
L_100766EA:
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x100766EA: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076722; /* 0x100766ED: je 0x10076722 */
L_100766EF:
    ecx = MEM32(esi + 0x10); /* 0x100766EF: mov ecx, dword ptr [esi + 0x10] */
    eax = ecx; /* 0x100766F2: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0xC8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0xC8); /* 0x100766F4: sub eax, dword ptr [edx + 0xc8] */
    _flag_k = FK_CMP;
    edi = MEM32(esi + 0x14); /* 0x100766FA: mov edi, dword ptr [esi + 0x14] */
    /* cmp eax, 0x64u */ /* 0x100766FD: cmp eax, 0x64 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007670E; /* 0x10076700: jbe 0x1007670e */
L_10076702:
    MEM32(edx + 0xC8) = ecx; /* 0x10076702: mov dword ptr [edx + 0xc8], ecx */
    MEM32(edx + 0xCC) = edi; /* 0x10076708: mov dword ptr [edx + 0xcc], edi */
L_1007670E:
    ecx = edx + 0x10; /* 0x1007670E: lea ecx, [edx + 0x10] */
    eax = MEM32(ecx + 0x4); /* 0x10076711: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, MEM32(ecx) */ /* 0x10076714: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10076722; /* 0x10076716: jle 0x10076722 */
L_10076718:
    PUSH32(esp, ecx); /* 0x10076718: push ecx */
    RECOMP_CALL(sub_100760B7); /* 0x10076719: call 0x100760b7 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007671E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007673F; /* 0x10076720: jne 0x1007673f */
L_10076722:
    PUSH32(esp, ecx); /* 0x10076722: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x10076723: mov ecx, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x10076726: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10076729: push eax */
    RECOMP_CALL(sub_10073116); /* 0x1007672A: call 0x10073116 */
    RECOMP_FLAGS_IN();
L_1007672F:
    edx = eax; /* 0x1007672F: mov edx, eax */
    /* test edx, edx */ /* 0x10076731: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100766EA; /* 0x10076733: jne 0x100766ea */
L_10076735:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076735: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076737:
    edi = POP32_VAL(esp); /* 0x10076737: pop edi */
    esi = POP32_VAL(esp); /* 0x10076738: pop esi */
    esp = ebp; /* 0x10076739: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007673B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1007673C: ret 0xc */
L_1007673F:
    ecx = MEM32(eax + 0x1C); /* 0x1007673F: mov ecx, dword ptr [eax + 0x1c] */
    esi = ebp + (-0x10); /* 0x10076742: lea esi, [ebp - 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x10076745: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x10076748: mov dword ptr [ebp - 8], eax */
    SET_LO8(eax, 1); /* 0x1007674B: mov al, 1 */
    MEM32(ebp + (-0x10)) = 1; /* 0x1007674D: mov dword ptr [ebp - 0x10], 1 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x10076754: mov dword ptr [ebp - 0xc], ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076757: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076758: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076759: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    goto L_10076737; /* 0x1007675A: jmp 0x10076737 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007675C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007675Cu);

L_1007675C:
    PUSH32(esp, ebp); /* 0x1007675C: push ebp */
    ebp = esp; /* 0x1007675D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1007675F: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10076762: push ecx */
    _flag_a = (uint32_t)(MEM32(esp)); _flag_b = (uint32_t)(0);
    MEM32(esp) = MEM32(esp) & 0; /* 0x10076763: and dword ptr [esp], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10076767: push esi */
    esi = ecx; /* 0x10076768: mov esi, ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007676A: push -1 */
    goto L_10076786; /* 0x1007676C: jmp 0x10076786 */
L_1007676E:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1007676E: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076784; /* 0x10076771: je 0x10076784 */
L_10076773:
    PUSH32(esp, 0); /* 0x10076773: push 0 */
    PUSH32(esp, eax); /* 0x10076775: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076776: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x10076779: mov ecx, esi */
    RECOMP_CALL(sub_100766D2); /* 0x1007677B: call 0x100766d2 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076780: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100767A0; /* 0x10076782: jne 0x100767a0 */
L_10076784:
    PUSH32(esp, 0); /* 0x10076784: push 0 */
L_10076786:
    ecx = MEM32(esi + 0x4); /* 0x10076786: mov ecx, dword ptr [esi + 4] */
    eax = esp + 0x8; /* 0x10076789: lea eax, [esp + 8] */
    PUSH32(esp, eax); /* 0x1007678D: push eax */
    RECOMP_CALL(sub_100764AE); /* 0x1007678E: call 0x100764ae */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10076793: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007676E; /* 0x10076795: jne 0x1007676e */
L_10076797:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076797: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076799:
    esi = POP32_VAL(esp); /* 0x10076799: pop esi */
    esp = ebp; /* 0x1007679A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007679C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1007679D: ret 8 */
L_100767A0:
    SET_LO8(eax, 1); /* 0x100767A0: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_10076799; /* 0x100767A2: jmp 0x10076799 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100767A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100767A4u);

L_100767A4:
    PUSH32(esp, ebp); /* 0x100767A4: push ebp */
    ebp = esp; /* 0x100767A5: mov ebp, esp */
    ecx = MEM32(ecx); /* 0x100767A7: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100767A9: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ecx); /* 0x100767AC: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x100767AE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100767B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100767D6; /* 0x100767B3: je 0x100767d6 */
L_100767B5:
    ecx = MEM32(eax + 0x1C); /* 0x100767B5: mov ecx, dword ptr [eax + 0x1c] */
    PUSH32(esp, esi); /* 0x100767B8: push esi */
    PUSH32(esp, edi); /* 0x100767B9: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100767BA: mov edi, dword ptr [ebp + 8] */
    esi = ebp + (-0xC); /* 0x100767BD: lea esi, [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x100767C0: mov dword ptr [ebp - 4], eax */
    SET_LO8(eax, 1); /* 0x100767C3: mov al, 1 */
    MEM32(ebp + (-0xC)) = 1; /* 0x100767C5: mov dword ptr [ebp - 0xc], 1 */
    MEM32(ebp + (-0x8)) = ecx; /* 0x100767CC: mov dword ptr [ebp - 8], ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100767CF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100767D0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100767D1: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100767D2: pop edi */
    esi = POP32_VAL(esp); /* 0x100767D3: pop esi */
    goto L_100767D8; /* 0x100767D4: jmp 0x100767d8 */
L_100767D6:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x100767D6: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100767D8:
    esp = ebp; /* 0x100767D8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100767DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100767DB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100767DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100767DEu);

L_100767DE:
    PUSH32(esp, ebp); /* 0x100767DE: push ebp */
    ebp = esp; /* 0x100767DF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100767E1: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x100767E4: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x100767E8: push ebx */
    PUSH32(esp, esi); /* 0x100767E9: push esi */
    PUSH32(esp, edi); /* 0x100767EA: push edi */
    ebx = ecx; /* 0x100767EB: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007682C; /* 0x100767ED: je 0x1007682c */
L_100767EF:
    ecx = MEM32(ebp + 0xC); /* 0x100767EF: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x100767F2: add ecx, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0x4); /* 0x100767F5: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx); /* 0x100767F8: sub eax, dword ptr [ecx] */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x100767FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10076805; /* 0x100767FC: jle 0x10076805 */
L_100767FE:
    RECOMP_CALL(sub_1007794C); /* 0x100767FE: call 0x1007794c */
    RECOMP_FLAGS_IN();
    goto L_10076807; /* 0x10076803: jmp 0x10076807 */
L_10076805:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10076805: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10076807:
    /* test eax, eax */ /* 0x10076807: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007688F; /* 0x10076809: je 0x1007688f */
L_1007680F:
    ecx = MEM32(eax + 0x1C); /* 0x1007680F: mov ecx, dword ptr [eax + 0x1c] */
    esi = ebp + (-0xC); /* 0x10076812: lea esi, [ebp - 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x10076815: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = 1; /* 0x10076818: mov dword ptr [ebp - 0xc], 1 */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1007681F: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x10076822: mov dword ptr [ebp - 4], eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076825: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076826: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076827: movsd dword ptr es:[edi], dword ptr [esi] */
L_10076828:
    SET_LO8(eax, 1); /* 0x10076828: mov al, 1 */
    goto L_10076891; /* 0x1007682A: jmp 0x10076891 */
L_1007682C:
    /* cmp MEM32(ebx + 0xC), 0x65u */ /* 0x1007682C: cmp dword ptr [ebx + 0xc], 0x65 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007684F; /* 0x10076830: jb 0x1007684f */
L_10076832:
    /* cmp MEM32(ebx + 0xC), 0x7Fu */ /* 0x10076832: cmp dword ptr [ebx + 0xc], 0x7f */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007688B; /* 0x10076836: jae 0x1007688b */
L_10076838:
    ecx = MEM32(ebp + 0xC); /* 0x10076838: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007683B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1007683D: add ecx, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0x4); /* 0x10076840: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, MEM32(ecx) */ /* 0x10076843: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10076869; /* 0x10076845: jle 0x10076869 */
L_10076847:
    PUSH32(esp, ecx); /* 0x10076847: push ecx */
    RECOMP_CALL(sub_100760B7); /* 0x10076848: call 0x100760b7 */
    RECOMP_FLAGS_IN();
    goto L_10076863; /* 0x1007684D: jmp 0x10076863 */
L_1007684F:
    ecx = MEM32(ebp + 0xC); /* 0x1007684F: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x10076852: add ecx, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0x4); /* 0x10076855: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx); /* 0x10076858: sub eax, dword ptr [ecx] */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1007685A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10076867; /* 0x1007685C: jle 0x10076867 */
L_1007685E:
    RECOMP_CALL(sub_1007794C); /* 0x1007685E: call 0x1007794c */
    RECOMP_FLAGS_IN();
L_10076863:
    edx = eax; /* 0x10076863: mov edx, eax */
    goto L_10076869; /* 0x10076865: jmp 0x10076869 */
L_10076867:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10076867: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10076869:
    /* test edx, edx */ /* 0x10076869: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007688B; /* 0x1007686B: je 0x1007688b */
L_1007686D:
    eax = MEM32(edx + 0x1C); /* 0x1007686D: mov eax, dword ptr [edx + 0x1c] */
    esi = ebp + (-0xC); /* 0x10076870: lea esi, [ebp - 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x10076873: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = 1; /* 0x10076876: mov dword ptr [ebp - 0xc], 1 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1007687D: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = edx; /* 0x10076880: mov dword ptr [ebp - 4], edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076883: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076884: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076885: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) + 1; /* 0x10076886: inc dword ptr [ebx + 0xc] */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10076828; /* 0x10076889: jmp 0x10076828 */
L_1007688B:
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) & 0; /* 0x1007688B: and dword ptr [ebx + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007688F:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1007688F: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076891:
    edi = POP32_VAL(esp); /* 0x10076891: pop edi */
    esi = POP32_VAL(esp); /* 0x10076892: pop esi */
    ebx = POP32_VAL(esp); /* 0x10076893: pop ebx */
    esp = ebp; /* 0x10076894: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10076896: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x10076897: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1007689A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007689Au);

L_1007689A:
    PUSH32(esp, ebp); /* 0x1007689A: push ebp */
    ebp = esp; /* 0x1007689B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1007689D: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100768A0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100768A1: mov esi, dword ptr [ebp + 8] */
    SET_LO8(eax, 1); /* 0x100768A4: mov al, 1 */
    PUSH32(esp, edi); /* 0x100768A6: push edi */
    MEM32(ebp + (-0x4)) = esi; /* 0x100768A7: mov dword ptr [ebp - 4], esi */
    edi = ecx; /* 0x100768AA: mov edi, ecx */
    MEM32(ebp + (-0xC)) = 1; /* 0x100768AC: mov dword ptr [ebp - 0xc], 1 */
    edx = MEM32(esi + 0x1C); /* 0x100768B3: mov edx, dword ptr [esi + 0x1c] */
    esi = ebp + (-0xC); /* 0x100768B6: lea esi, [ebp - 0xc] */
    MEM32(ebp + (-0x8)) = edx; /* 0x100768B9: mov dword ptr [ebp - 8], edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100768BC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100768BD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100768BE: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100768BF: pop edi */
    esi = POP32_VAL(esp); /* 0x100768C0: pop esi */
    esp = ebp; /* 0x100768C1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100768C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100768C4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100768C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100768C7u);

L_100768C7:
    PUSH32(esp, ebp); /* 0x100768C7: push ebp */
    ebp = esp; /* 0x100768C8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100768CA: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x100768CD: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x100768D1: push esi */
    PUSH32(esp, edi); /* 0x100768D2: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100768FD; /* 0x100768D3: je 0x100768fd */
L_100768D5:
    esi = MEM32(ebp + 0xC); /* 0x100768D5: mov esi, dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x100768D8: mov ecx, esi */
    RECOMP_CALL(sub_10072BB1); /* 0x100768DA: call 0x10072bb1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100768DF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076912; /* 0x100768E1: je 0x10076912 */
L_100768E3:
    MEM32(ebp + (-0xC)) = 2; /* 0x100768E3: mov dword ptr [ebp - 0xc], 2 */
    MEM32(ebp + (-0x8)) = esi; /* 0x100768EA: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x100768ED: mov dword ptr [ebp - 4], eax */
L_100768F0:
    edi = MEM32(ebp + 0x8); /* 0x100768F0: mov edi, dword ptr [ebp + 8] */
    esi = ebp + (-0xC); /* 0x100768F3: lea esi, [ebp - 0xc] */
    SET_LO8(eax, 1); /* 0x100768F6: mov al, 1 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100768F8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100768F9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100768FA: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_10076914; /* 0x100768FB: jmp 0x10076914 */
L_100768FD:
    eax = MEM32(ebp + 0xC); /* 0x100768FD: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax + 0x28), 0 */ /* 0x10076900: cmp dword ptr [eax + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076912; /* 0x10076904: je 0x10076912 */
L_10076906:
    MEM32(ebp + (-0xC)) = 8; /* 0x10076906: mov dword ptr [ebp - 0xc], 8 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1007690D: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    goto L_100768F0; /* 0x10076910: jmp 0x100768f0 */
L_10076912:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076912: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076914:
    edi = POP32_VAL(esp); /* 0x10076914: pop edi */
    esi = POP32_VAL(esp); /* 0x10076915: pop esi */
    esp = ebp; /* 0x10076916: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10076918: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x10076919: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1007691C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007691Cu);

L_1007691C:
    PUSH32(esp, ebp); /* 0x1007691C: push ebp */
    ebp = esp; /* 0x1007691D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1007691F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp MEM8(ebp + 0x14), 0 */ /* 0x10076922: cmp byte ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x10076926: push esi */
    esi = MEM32(ebp + 0xC); /* 0x10076927: mov esi, dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1007692A: mov ecx, esi */
    PUSH32(esp, edi); /* 0x1007692C: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076955; /* 0x1007692D: je 0x10076955 */
L_1007692F:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007692F: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_10072752); /* 0x10076932: call 0x10072752 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10076937: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076967; /* 0x10076939: je 0x10076967 */
L_1007693B:
    MEM32(ebp + (-0xC)) = 4; /* 0x1007693B: mov dword ptr [ebp - 0xc], 4 */
L_10076942:
    edi = MEM32(ebp + 0x8); /* 0x10076942: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = esi; /* 0x10076945: mov dword ptr [ebp - 8], esi */
    esi = ebp + (-0xC); /* 0x10076948: lea esi, [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1007694B: mov dword ptr [ebp - 4], eax */
    SET_LO8(eax, 1); /* 0x1007694E: mov al, 1 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076950: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076951: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076952: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_10076969; /* 0x10076953: jmp 0x10076969 */
L_10076955:
    RECOMP_CALL(sub_1007290D); /* 0x10076955: call 0x1007290d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007695A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076967; /* 0x1007695C: je 0x10076967 */
L_1007695E:
    MEM32(ebp + (-0xC)) = 0x10u; /* 0x1007695E: mov dword ptr [ebp - 0xc], 0x10 */
    RECOMP_BACKEDGE();
    goto L_10076942; /* 0x10076965: jmp 0x10076942 */
L_10076967:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076967: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076969:
    edi = POP32_VAL(esp); /* 0x10076969: pop edi */
    esi = POP32_VAL(esp); /* 0x1007696A: pop esi */
    esp = ebp; /* 0x1007696B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007696D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1007696E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_10076971(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076971u);

L_10076971:
    PUSH32(esp, ebp); /* 0x10076971: push ebp */
    ebp = esp; /* 0x10076972: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10076974: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x10076975: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x10076978: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10076979: mov esi, dword ptr [ebp + 8] */
    /* test LO8(ebx), 1 */ /* 0x1007697C: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007699D; /* 0x1007697F: je 0x1007699d */
L_10076981:
    eax = MEM32(esi); /* 0x10076981: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x10076983: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x10076985: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10076988: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076997; /* 0x1007698A: je 0x10076997 */
L_1007698C:
    ecx = MEM32(ebp + 0xC); /* 0x1007698C: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1007698F: push eax */
    RECOMP_CALL(sub_1007689A); /* 0x10076990: call 0x1007689a */
    RECOMP_FLAGS_IN();
    goto L_10076999; /* 0x10076995: jmp 0x10076999 */
L_10076997:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076997: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076999:
    /* test LO8(eax), LO8(eax) */ /* 0x10076999: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100769D8; /* 0x1007699B: jne 0x100769d8 */
L_1007699D:
    /* test LO8(ebx), 0xAu */ /* 0x1007699D: test bl, 0xa */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100769B9; /* 0x100769A0: je 0x100769b9 */
L_100769A2:
    eax = ebx; /* 0x100769A2: mov eax, ebx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x100769A4: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x100769A4: shr eax, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x100769A6: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x100769A8: movzx eax, al */
    PUSH32(esp, eax); /* 0x100769AB: push eax */
    PUSH32(esp, esi); /* 0x100769AC: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100769AD: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_100768C7); /* 0x100769B0: call 0x100768c7 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100769B5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100769D8; /* 0x100769B7: jne 0x100769d8 */
L_100769B9:
    /* test LO8(ebx), 0x14u */ /* 0x100769B9: test bl, 0x14 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x14u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100769DC; /* 0x100769BC: je 0x100769dc */
L_100769BE:
    if (2u) _cf = (((ebx) >> 1) & 1u); /* 0x100769BE: shr ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 2u; /* 0x100769BE: shr ebx, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) & 1); /* 0x100769C1: and bl, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(ebx); /* 0x100769C4: movzx eax, bl */
    PUSH32(esp, eax); /* 0x100769C7: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100769C8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x100769CB: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100769CC: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1007691C); /* 0x100769CF: call 0x1007691c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100769D4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100769DC; /* 0x100769D6: je 0x100769dc */
L_100769D8:
    SET_LO8(eax, 1); /* 0x100769D8: mov al, 1 */
    goto L_100769DE; /* 0x100769DA: jmp 0x100769de */
L_100769DC:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x100769DC: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100769DE:
    esi = POP32_VAL(esp); /* 0x100769DE: pop esi */
    ebx = POP32_VAL(esp); /* 0x100769DF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100769E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x100769E1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_100769E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100769E4u);

L_100769E4:
    PUSH32(esp, ebp); /* 0x100769E4: push ebp */
    ebp = esp; /* 0x100769E5: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100769E7: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x100769E8: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x100769EB: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100769EC: mov esi, dword ptr [ebp + 8] */
    /* test LO8(ebx), 0x14u */ /* 0x100769EF: test bl, 0x14 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x14u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076A0F; /* 0x100769F2: je 0x10076a0f */
L_100769F4:
    eax = ebx; /* 0x100769F4: mov eax, ebx */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x100769F6: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x100769F6: shr eax, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x100769F9: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x100769FB: movzx eax, al */
    PUSH32(esp, eax); /* 0x100769FE: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100769FF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x10076A02: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10076A03: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1007691C); /* 0x10076A06: call 0x1007691c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076A0B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076A4C; /* 0x10076A0D: jne 0x10076a4c */
L_10076A0F:
    /* test LO8(ebx), 0xAu */ /* 0x10076A0F: test bl, 0xa */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076A2B; /* 0x10076A12: je 0x10076a2b */
L_10076A14:
    eax = ebx; /* 0x10076A14: mov eax, ebx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x10076A16: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x10076A16: shr eax, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x10076A18: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x10076A1A: movzx eax, al */
    PUSH32(esp, eax); /* 0x10076A1D: push eax */
    PUSH32(esp, esi); /* 0x10076A1E: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10076A1F: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_100768C7); /* 0x10076A22: call 0x100768c7 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076A27: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076A4C; /* 0x10076A29: jne 0x10076a4c */
L_10076A2B:
    /* test LO8(ebx), 1 */ /* 0x10076A2B: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076A50; /* 0x10076A2E: je 0x10076a50 */
L_10076A30:
    eax = MEM32(esi); /* 0x10076A30: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x10076A32: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x10076A34: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10076A37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076A46; /* 0x10076A39: je 0x10076a46 */
L_10076A3B:
    ecx = MEM32(ebp + 0xC); /* 0x10076A3B: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10076A3E: push eax */
    RECOMP_CALL(sub_1007689A); /* 0x10076A3F: call 0x1007689a */
    RECOMP_FLAGS_IN();
    goto L_10076A48; /* 0x10076A44: jmp 0x10076a48 */
L_10076A46:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076A46: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076A48:
    /* test LO8(eax), LO8(eax) */ /* 0x10076A48: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076A50; /* 0x10076A4A: je 0x10076a50 */
L_10076A4C:
    SET_LO8(eax, 1); /* 0x10076A4C: mov al, 1 */
    goto L_10076A52; /* 0x10076A4E: jmp 0x10076a52 */
L_10076A50:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076A50: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076A52:
    esi = POP32_VAL(esp); /* 0x10076A52: pop esi */
    ebx = POP32_VAL(esp); /* 0x10076A53: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10076A54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10076A55: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_10076A58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076A58u);

L_10076A58:
    PUSH32(esp, ebp); /* 0x10076A58: push ebp */
    ebp = esp; /* 0x10076A59: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x10076A5B: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x10076A5E: push ebx */
    PUSH32(esp, esi); /* 0x10076A5F: push esi */
    PUSH32(esp, edi); /* 0x10076A60: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10076A61: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10076A64: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x10076A66: mov esi, ecx */
    eax = edi + 0xC; /* 0x10076A68: lea eax, [edi + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x10076A6B: sub edx, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10076AC5; /* 0x10076A6D: je 0x10076ac5 */
L_10076A6F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10076A6F: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10076AA7; /* 0x10076A70: je 0x10076aa7 */
L_10076A72:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10076A72: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10076ACE; /* 0x10076A73: jne 0x10076ace */
L_10076A75:
    /* test MEM32(eax), 0x0FFFFFFFu */ /* 0x10076A75: test dword ptr [eax], 0xfffffff */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x0FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076AC1; /* 0x10076A7B: je 0x10076ac1 */
L_10076A7D:
    ecx = MEM32(esi); /* 0x10076A7D: mov ecx, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x10076A7F: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x94u; /* 0x10076A80: add ecx, 0x94 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1006E840); /* 0x10076A86: call 0x1006e840 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076A8B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076AC1; /* 0x10076A8D: jne 0x10076ac1 */
L_10076A8F:
    ecx = MEM32(esi + 0x4); /* 0x10076A8F: mov ecx, dword ptr [esi + 4] */
    eax = edi + 0x1C; /* 0x10076A92: lea eax, [edi + 0x1c] */
    PUSH32(esp, eax); /* 0x10076A95: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x3Cu; /* 0x10076A96: add ecx, 0x3c */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10068C05); /* 0x10076A99: call 0x10068c05 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076A9E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076ACE; /* 0x10076AA0: je 0x10076ace */
L_10076AA2:
    /* cmp MEM8(ebp + 0x10), LO8(ebx) */ /* 0x10076AA2: cmp byte ptr [ebp + 0x10], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_10076ABF; /* 0x10076AA5: jmp 0x10076abf */
L_10076AA7:
    /* test MEM32(eax), 0x0FFFFFFFu */ /* 0x10076AA7: test dword ptr [eax], 0xfffffff */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x0FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076AC1; /* 0x10076AAD: je 0x10076ac1 */
L_10076AAF:
    ecx = MEM32(esi); /* 0x10076AAF: mov ecx, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x10076AB1: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x94u; /* 0x10076AB2: add ecx, 0x94 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1006E840); /* 0x10076AB8: call 0x1006e840 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076ABD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076ABF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10076ACE; /* 0x10076ABF: jne 0x10076ace */
L_10076AC1:
    SET_LO8(ebx, 1); /* 0x10076AC1: mov bl, 1 */
    goto L_10076ACE; /* 0x10076AC3: jmp 0x10076ace */
L_10076AC5:
    /* test MEM32(eax), 0x0FFFFFFFu */ /* 0x10076AC5: test dword ptr [eax], 0xfffffff */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x0FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10076ACB: setne bl */
L_10076ACE:
    edi = POP32_VAL(esp); /* 0x10076ACE: pop edi */
    esi = POP32_VAL(esp); /* 0x10076ACF: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x10076AD0: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x10076AD2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10076AD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x10076AD4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_10076AD7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076AD7u);

L_10076AD7:
    PUSH32(esp, ebp); /* 0x10076AD7: push ebp */
    ebp = esp; /* 0x10076AD8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10076ADA: push ecx */
    PUSH32(esp, esi); /* 0x10076ADB: push esi */
    PUSH32(esp, edi); /* 0x10076ADC: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10076ADD: push dword ptr [ebp + 0x14] */
    edi = MEM32(ebp + 0xC); /* 0x10076AE0: mov edi, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x10076AE3: mov eax, ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10076AE5: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x10076AE8: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x10076AEB: push edi */
    esi = MEM32(edi + 0x100); /* 0x10076AEC: mov esi, dword ptr [edi + 0x100] */
    RECOMP_CALL(sub_10076A58); /* 0x10076AF2: call 0x10076a58 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076AF7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076B1B; /* 0x10076AF9: jne 0x10076b1b */
L_10076AFB:
    eax = MEM32(edi); /* 0x10076AFB: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x10076AFD: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x10076AFF: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10076B02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076B11; /* 0x10076B04: je 0x10076b11 */
L_10076B06:
    ecx = MEM32(ebp + 0x8); /* 0x10076B06: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x10076B09: push eax */
    RECOMP_CALL(sub_1007689A); /* 0x10076B0A: call 0x1007689a */
    RECOMP_FLAGS_IN();
    goto L_10076B13; /* 0x10076B0F: jmp 0x10076b13 */
L_10076B11:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076B11: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076B13:
    /* test LO8(eax), LO8(eax) */ /* 0x10076B13: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076B1B; /* 0x10076B15: je 0x10076b1b */
L_10076B17:
    SET_LO8(eax, 1); /* 0x10076B17: mov al, 1 */
    goto L_10076B6A; /* 0x10076B19: jmp 0x10076b6a */
L_10076B1B:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x10076B1B: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076B26; /* 0x10076B1F: je 0x10076b26 */
L_10076B21:
    esi = MEM32(esi + 0xC); /* 0x10076B21: mov esi, dword ptr [esi + 0xc] */
    goto L_10076B64; /* 0x10076B24: jmp 0x10076b64 */
L_10076B26:
    esi = MEM32(esi + 0x10); /* 0x10076B26: mov esi, dword ptr [esi + 0x10] */
    goto L_10076B64; /* 0x10076B29: jmp 0x10076b64 */
L_10076B2B:
    /* cmp esi, edi */ /* 0x10076B2B: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076B5E; /* 0x10076B2D: je 0x10076b5e */
L_10076B2F:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10076B2F: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + (-0x4)); /* 0x10076B32: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10076B35: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x10076B38: push esi */
    RECOMP_CALL(sub_10076A58); /* 0x10076B39: call 0x10076a58 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076B3E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076B5E; /* 0x10076B40: jne 0x10076b5e */
L_10076B42:
    eax = MEM32(esi); /* 0x10076B42: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x10076B44: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x10076B46: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10076B49: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076B58; /* 0x10076B4B: je 0x10076b58 */
L_10076B4D:
    ecx = MEM32(ebp + 0x8); /* 0x10076B4D: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x10076B50: push eax */
    RECOMP_CALL(sub_1007689A); /* 0x10076B51: call 0x1007689a */
    RECOMP_FLAGS_IN();
    goto L_10076B5A; /* 0x10076B56: jmp 0x10076b5a */
L_10076B58:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076B58: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076B5A:
    /* test LO8(eax), LO8(eax) */ /* 0x10076B5A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076B17; /* 0x10076B5C: jne 0x10076b17 */
L_10076B5E:
    esi = MEM32(esi + 0x104); /* 0x10076B5E: mov esi, dword ptr [esi + 0x104] */
L_10076B64:
    /* test esi, esi */ /* 0x10076B64: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076B2B; /* 0x10076B66: jne 0x10076b2b */
L_10076B68:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076B68: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076B6A:
    edi = POP32_VAL(esp); /* 0x10076B6A: pop edi */
    esi = POP32_VAL(esp); /* 0x10076B6B: pop esi */
    esp = ebp; /* 0x10076B6C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10076B6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10076B6F: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_10076B72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076B72u);

L_10076B72:
    PUSH32(esp, ebp); /* 0x10076B72: push ebp */
    ebp = esp; /* 0x10076B73: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10076B75: push ecx */
    PUSH32(esp, esi); /* 0x10076B76: push esi */
    PUSH32(esp, edi); /* 0x10076B77: push edi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10076B78: push dword ptr [ebp + 0x18] */
    edi = MEM32(ebp + 0xC); /* 0x10076B7B: mov edi, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x10076B7E: mov eax, ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10076B80: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x10076B83: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x10076B86: push edi */
    esi = MEM32(edi + 0x100); /* 0x10076B87: mov esi, dword ptr [edi + 0x100] */
    RECOMP_CALL(sub_10076A58); /* 0x10076B8D: call 0x10076a58 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076B92: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076BAA; /* 0x10076B94: jne 0x10076baa */
L_10076B96:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10076B96: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x10076B99: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076B9A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100768C7); /* 0x10076B9D: call 0x100768c7 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076BA2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076BAA; /* 0x10076BA4: je 0x10076baa */
L_10076BA6:
    SET_LO8(eax, 1); /* 0x10076BA6: mov al, 1 */
    goto L_10076BED; /* 0x10076BA8: jmp 0x10076bed */
L_10076BAA:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x10076BAA: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076BB5; /* 0x10076BAE: je 0x10076bb5 */
L_10076BB0:
    esi = MEM32(esi + 0xC); /* 0x10076BB0: mov esi, dword ptr [esi + 0xc] */
    goto L_10076BE7; /* 0x10076BB3: jmp 0x10076be7 */
L_10076BB5:
    esi = MEM32(esi + 0x10); /* 0x10076BB5: mov esi, dword ptr [esi + 0x10] */
    goto L_10076BE7; /* 0x10076BB8: jmp 0x10076be7 */
L_10076BBA:
    /* cmp esi, edi */ /* 0x10076BBA: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076BE1; /* 0x10076BBC: je 0x10076be1 */
L_10076BBE:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10076BBE: push dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + (-0x4)); /* 0x10076BC1: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10076BC4: push dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x10076BC7: push esi */
    RECOMP_CALL(sub_10076A58); /* 0x10076BC8: call 0x10076a58 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076BCD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076BE1; /* 0x10076BCF: jne 0x10076be1 */
L_10076BD1:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10076BD1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x10076BD4: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076BD5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100768C7); /* 0x10076BD8: call 0x100768c7 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076BDD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076BA6; /* 0x10076BDF: jne 0x10076ba6 */
L_10076BE1:
    esi = MEM32(esi + 0x104); /* 0x10076BE1: mov esi, dword ptr [esi + 0x104] */
L_10076BE7:
    /* test esi, esi */ /* 0x10076BE7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076BBA; /* 0x10076BE9: jne 0x10076bba */
L_10076BEB:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076BEB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076BED:
    edi = POP32_VAL(esp); /* 0x10076BED: pop edi */
    esi = POP32_VAL(esp); /* 0x10076BEE: pop esi */
    esp = ebp; /* 0x10076BEF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10076BF1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x10076BF2: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_10076BF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076BF5u);

L_10076BF5:
    PUSH32(esp, ebp); /* 0x10076BF5: push ebp */
    ebp = esp; /* 0x10076BF6: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10076BF8: push ecx */
    PUSH32(esp, ebx); /* 0x10076BF9: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x10076BFA: mov ebx, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x10076BFD: mov eax, ecx */
    PUSH32(esp, esi); /* 0x10076BFF: push esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10076C00: push dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x4)) = eax; /* 0x10076C03: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10076C06: push dword ptr [ebp + 0x14] */
    esi = MEM32(ebx + 0x100); /* 0x10076C09: mov esi, dword ptr [ebx + 0x100] */
    PUSH32(esp, ebx); /* 0x10076C0F: push ebx */
    RECOMP_CALL(sub_10076A58); /* 0x10076C10: call 0x10076a58 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076C15: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076C30; /* 0x10076C17: jne 0x10076c30 */
L_10076C19:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10076C19: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10076C1C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x10076C1F: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076C20: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007691C); /* 0x10076C23: call 0x1007691c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076C28: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076C30; /* 0x10076C2A: je 0x10076c30 */
L_10076C2C:
    SET_LO8(eax, 1); /* 0x10076C2C: mov al, 1 */
    goto L_10076C76; /* 0x10076C2E: jmp 0x10076c76 */
L_10076C30:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x10076C30: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076C3B; /* 0x10076C34: je 0x10076c3b */
L_10076C36:
    esi = MEM32(esi + 0xC); /* 0x10076C36: mov esi, dword ptr [esi + 0xc] */
    goto L_10076C70; /* 0x10076C39: jmp 0x10076c70 */
L_10076C3B:
    esi = MEM32(esi + 0x10); /* 0x10076C3B: mov esi, dword ptr [esi + 0x10] */
    goto L_10076C70; /* 0x10076C3E: jmp 0x10076c70 */
L_10076C40:
    /* cmp esi, ebx */ /* 0x10076C40: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076C6A; /* 0x10076C42: je 0x10076c6a */
L_10076C44:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10076C44: push dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + (-0x4)); /* 0x10076C47: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10076C4A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x10076C4D: push esi */
    RECOMP_CALL(sub_10076A58); /* 0x10076C4E: call 0x10076a58 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076C53: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076C6A; /* 0x10076C55: jne 0x10076c6a */
L_10076C57:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10076C57: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10076C5A: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x10076C5D: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076C5E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007691C); /* 0x10076C61: call 0x1007691c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076C66: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076C2C; /* 0x10076C68: jne 0x10076c2c */
L_10076C6A:
    esi = MEM32(esi + 0x104); /* 0x10076C6A: mov esi, dword ptr [esi + 0x104] */
L_10076C70:
    /* test esi, esi */ /* 0x10076C70: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076C40; /* 0x10076C72: jne 0x10076c40 */
L_10076C74:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076C74: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076C76:
    esi = POP32_VAL(esp); /* 0x10076C76: pop esi */
    ebx = POP32_VAL(esp); /* 0x10076C77: pop ebx */
    esp = ebp; /* 0x10076C78: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10076C7A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x10076C7B: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_10076C7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076C7Eu);

L_10076C7E:
    PUSH32(esp, ebp); /* 0x10076C7E: push ebp */
    ebp = esp; /* 0x10076C7F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10076C81: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10076C84: push ebx */
    PUSH32(esp, esi); /* 0x10076C85: push esi */
    esi = MEM32(ebp + 0xC); /* 0x10076C86: mov esi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x10076C89: lea eax, [ebp - 4] */
    PUSH32(esp, edi); /* 0x10076C8C: push edi */
    PUSH32(esp, eax); /* 0x10076C8D: push eax */
    ecx = esi; /* 0x10076C8E: mov ecx, esi */
    RECOMP_CALL(sub_100765AB); /* 0x10076C90: call 0x100765ab */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x10076C95: mov ebx, dword ptr [ebp - 4] */
    goto L_10076CB5; /* 0x10076C98: jmp 0x10076cb5 */
L_10076C9A:
    edx = MEM32(eax); /* 0x10076C9A: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x10076C9C: mov ecx, eax */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x10076C9E: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10076CA1: mov edi, eax */
    /* test edi, edi */ /* 0x10076CA3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076CC4; /* 0x10076CA5: jne 0x10076cc4 */
L_10076CA7:
    eax = esi + 0x60; /* 0x10076CA7: lea eax, [esi + 0x60] */
    PUSH32(esp, eax); /* 0x10076CAA: push eax */
    PUSH32(esp, ebx); /* 0x10076CAB: push ebx */
    eax = ebp + (-0x4); /* 0x10076CAC: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10076CAF: push eax */
    RECOMP_CALL(sub_100731CC); /* 0x10076CB0: call 0x100731cc */
    RECOMP_FLAGS_IN();
L_10076CB5:
    /* test eax, eax */ /* 0x10076CB5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076C9A; /* 0x10076CB7: jne 0x10076c9a */
L_10076CB9:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076CB9: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076CBB:
    edi = POP32_VAL(esp); /* 0x10076CBB: pop edi */
    esi = POP32_VAL(esp); /* 0x10076CBC: pop esi */
    ebx = POP32_VAL(esp); /* 0x10076CBD: pop ebx */
    esp = ebp; /* 0x10076CBE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10076CC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10076CC1: ret 8 */
L_10076CC4:
    ecx = MEM32(esi + 0xA0); /* 0x10076CC4: mov ecx, dword ptr [esi + 0xa0] */
    eax = MEM32(ebp + (-0x4)); /* 0x10076CCA: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10076CCD: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edi; /* 0x10076CCE: mov dword ptr [ebp - 8], edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10076CD1: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10076CD2: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x10)) = 1; /* 0x10076CD4: mov dword ptr [ebp - 0x10], 1 */
    SET_LO8(eax, 1); /* 0x10076CDB: mov al, 1 */
    MEM32(esi + 0xB4) = edx; /* 0x10076CDD: mov dword ptr [esi + 0xb4], edx */
    esi = ebp + (-0x10); /* 0x10076CE3: lea esi, [ebp - 0x10] */
    ecx = MEM32(edi + 0x1C); /* 0x10076CE6: mov ecx, dword ptr [edi + 0x1c] */
    edi = MEM32(ebp + 0x8); /* 0x10076CE9: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x10076CEC: mov dword ptr [ebp - 0xc], ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076CEF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076CF0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076CF1: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    goto L_10076CBB; /* 0x10076CF2: jmp 0x10076cbb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10076CF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076CF4u);

L_10076CF4:
    PUSH32(esp, ebp); /* 0x10076CF4: push ebp */
    ebp = esp; /* 0x10076CF5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10076CF7: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10076CFA: push ebx */
    PUSH32(esp, esi); /* 0x10076CFB: push esi */
    PUSH32(esp, edi); /* 0x10076CFC: push edi */
    edi = MEM32(ebp + 0xC); /* 0x10076CFD: mov edi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x10076D00: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10076D03: push eax */
    ecx = edi; /* 0x10076D04: mov ecx, edi */
    RECOMP_CALL(sub_100765AB); /* 0x10076D06: call 0x100765ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10076D0B: mov esi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x10076D0D: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + 0xC) = eax; /* 0x10076D10: mov dword ptr [ebp + 0xc], eax */
    goto L_10076D6D; /* 0x10076D13: jmp 0x10076d6d */
L_10076D15:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x10076D15: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076D55; /* 0x10076D19: je 0x10076d55 */
L_10076D1B:
    ecx = esi; /* 0x10076D1B: mov ecx, esi */
    RECOMP_CALL(sub_10072BB1); /* 0x10076D1D: call 0x10072bb1 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10076D22: mov ebx, eax */
    /* test ebx, ebx */ /* 0x10076D24: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076D5B; /* 0x10076D26: je 0x10076d5b */
L_10076D28:
    MEM32(ebp + (-0x10)) = 2; /* 0x10076D28: mov dword ptr [ebp - 0x10], 2 */
    MEM32(ebp + (-0x8)) = ebx; /* 0x10076D2F: mov dword ptr [ebp - 8], ebx */
L_10076D32:
    ecx = MEM32(edi + 0xA0); /* 0x10076D32: mov ecx, dword ptr [edi + 0xa0] */
    eax = MEM32(ebp + (-0x4)); /* 0x10076D38: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10076D3B: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = esi; /* 0x10076D3C: mov dword ptr [ebp - 0xc], esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10076D3F: cdq  */
    esi = ebp + (-0x10); /* 0x10076D40: lea esi, [ebp - 0x10] */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10076D43: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    SET_LO8(eax, 1); /* 0x10076D45: mov al, 1 */
    MEM32(edi + 0xB4) = edx; /* 0x10076D47: mov dword ptr [edi + 0xb4], edx */
    edi = MEM32(ebp + 0x8); /* 0x10076D4D: mov edi, dword ptr [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076D50: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076D51: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076D52: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_10076D73; /* 0x10076D53: jmp 0x10076d73 */
L_10076D55:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x10076D55: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10076D7C; /* 0x10076D59: jne 0x10076d7c */
L_10076D5B:
    eax = edi + 0x60; /* 0x10076D5B: lea eax, [edi + 0x60] */
    PUSH32(esp, eax); /* 0x10076D5E: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10076D5F: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x10076D62: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10076D65: push eax */
    RECOMP_CALL(sub_100731CC); /* 0x10076D66: call 0x100731cc */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10076D6B: mov esi, eax */
L_10076D6D:
    /* test esi, esi */ /* 0x10076D6D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076D15; /* 0x10076D6F: jne 0x10076d15 */
L_10076D71:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076D71: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076D73:
    edi = POP32_VAL(esp); /* 0x10076D73: pop edi */
    esi = POP32_VAL(esp); /* 0x10076D74: pop esi */
    ebx = POP32_VAL(esp); /* 0x10076D75: pop ebx */
    esp = ebp; /* 0x10076D76: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10076D78: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x10076D79: ret 0xc */
L_10076D7C:
    MEM32(ebp + (-0x10)) = 8; /* 0x10076D7C: mov dword ptr [ebp - 0x10], 8 */
    RECOMP_BACKEDGE();
    goto L_10076D32; /* 0x10076D83: jmp 0x10076d32 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10076D85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076D85u);

L_10076D85:
    PUSH32(esp, ebp); /* 0x10076D85: push ebp */
    ebp = esp; /* 0x10076D86: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10076D88: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10076D8B: push ebx */
    PUSH32(esp, esi); /* 0x10076D8C: push esi */
    PUSH32(esp, edi); /* 0x10076D8D: push edi */
    edi = MEM32(ebp + 0xC); /* 0x10076D8E: mov edi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x10076D91: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10076D94: push eax */
    ecx = edi; /* 0x10076D95: mov ecx, edi */
    RECOMP_CALL(sub_100765AB); /* 0x10076D97: call 0x100765ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10076D9C: mov esi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x10076D9E: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + 0xC) = eax; /* 0x10076DA1: mov dword ptr [ebp + 0xc], eax */
    goto L_10076E05; /* 0x10076DA4: jmp 0x10076e05 */
L_10076DA6:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x10076DA6: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = esi; /* 0x10076DAA: mov ecx, esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10076DE8; /* 0x10076DAC: je 0x10076de8 */
L_10076DAE:
    PUSH32(esp, 0); /* 0x10076DAE: push 0 */
    RECOMP_CALL(sub_10072752); /* 0x10076DB0: call 0x10072752 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10076DB5: mov ebx, eax */
    /* test ebx, ebx */ /* 0x10076DB7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076DF3; /* 0x10076DB9: je 0x10076df3 */
L_10076DBB:
    MEM32(ebp + (-0x10)) = 4; /* 0x10076DBB: mov dword ptr [ebp - 0x10], 4 */
L_10076DC2:
    ecx = MEM32(edi + 0xA0); /* 0x10076DC2: mov ecx, dword ptr [edi + 0xa0] */
    eax = MEM32(ebp + (-0x4)); /* 0x10076DC8: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10076DCB: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = esi; /* 0x10076DCC: mov dword ptr [ebp - 0xc], esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10076DCF: cdq  */
    esi = ebp + (-0x10); /* 0x10076DD0: lea esi, [ebp - 0x10] */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10076DD3: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x8)) = ebx; /* 0x10076DD5: mov dword ptr [ebp - 8], ebx */
    SET_LO8(eax, 1); /* 0x10076DD8: mov al, 1 */
    MEM32(edi + 0xB4) = edx; /* 0x10076DDA: mov dword ptr [edi + 0xb4], edx */
    edi = MEM32(ebp + 0x8); /* 0x10076DE0: mov edi, dword ptr [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076DE3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076DE4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10076DE5: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_10076E0B; /* 0x10076DE6: jmp 0x10076e0b */
L_10076DE8:
    RECOMP_CALL(sub_1007290D); /* 0x10076DE8: call 0x1007290d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10076DED: mov ebx, eax */
    /* test ebx, ebx */ /* 0x10076DEF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076E14; /* 0x10076DF1: jne 0x10076e14 */
L_10076DF3:
    eax = edi + 0x60; /* 0x10076DF3: lea eax, [edi + 0x60] */
    PUSH32(esp, eax); /* 0x10076DF6: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10076DF7: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x10076DFA: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10076DFD: push eax */
    RECOMP_CALL(sub_100731CC); /* 0x10076DFE: call 0x100731cc */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10076E03: mov esi, eax */
L_10076E05:
    /* test esi, esi */ /* 0x10076E05: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076DA6; /* 0x10076E07: jne 0x10076da6 */
L_10076E09:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10076E09: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10076E0B:
    edi = POP32_VAL(esp); /* 0x10076E0B: pop edi */
    esi = POP32_VAL(esp); /* 0x10076E0C: pop esi */
    ebx = POP32_VAL(esp); /* 0x10076E0D: pop ebx */
    esp = ebp; /* 0x10076E0E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10076E10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x10076E11: ret 0xc */
L_10076E14:
    MEM32(ebp + (-0x10)) = 0x10u; /* 0x10076E14: mov dword ptr [ebp - 0x10], 0x10 */
    RECOMP_BACKEDGE();
    goto L_10076DC2; /* 0x10076E1B: jmp 0x10076dc2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10076E1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076E1Du);

L_10076E1D:
    PUSH32(esp, ebp); /* 0x10076E1D: push ebp */
    ebp = esp; /* 0x10076E1E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10076E20: push ecx */
    PUSH32(esp, ecx); /* 0x10076E21: push ecx */
    PUSH32(esp, ebx); /* 0x10076E22: push ebx */
    PUSH32(esp, esi); /* 0x10076E23: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076E24: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x10076E27: mov esi, ecx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x10076E29: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_100767A4); /* 0x10076E2B: call 0x100767a4 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076E30: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076E3B; /* 0x10076E32: je 0x10076e3b */
L_10076E34:
    SET_LO8(eax, 1); /* 0x10076E34: mov al, 1 */
    goto L_10076F24; /* 0x10076E36: jmp 0x10076f24 */
L_10076E3B:
    ecx = MEM32(esi + 0x4); /* 0x10076E3B: mov ecx, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x10076E3E: push edi */
    RECOMP_CALL(sub_10024106); /* 0x10076E3F: call 0x10024106 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10076E44: mov edi, eax */
    eax = MEM32(ebp + 0x14); /* 0x10076E46: mov eax, dword ptr [ebp + 0x14] */
    /* test LO8(eax), 1 */ /* 0x10076E49: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076E98; /* 0x10076E4B: je 0x10076e98 */
L_10076E4D:
    MEM32(ebp + (-0x4)) = edi; /* 0x10076E4D: mov dword ptr [ebp - 4], edi */
    eax = edi; /* 0x10076E50: mov eax, edi */
    /* test edi, edi */ /* 0x10076E52: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076E7C; /* 0x10076E54: je 0x10076e7c */
L_10076E56:
    PUSH32(esp, eax); /* 0x10076E56: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076E57: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10076C7E); /* 0x10076E5A: call 0x10076c7e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10076E5F: push dword ptr [ebp - 4] */
    ecx = MEM32(esi + 0x4); /* 0x10076E62: mov ecx, dword ptr [esi + 4] */
    SET_LO8(ebx, LO8(eax)); /* 0x10076E65: mov bl, al */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10076E67: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076F1C; /* 0x10076E69: jne 0x10076f1c */
L_10076E6F:
    PUSH32(esp, edi); /* 0x10076E6F: push edi */
    RECOMP_CALL(sub_100735C1); /* 0x10076E70: call 0x100735c1 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x10076E75: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x10076E78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076E56; /* 0x10076E7A: jne 0x10076e56 */
L_10076E7C:
    eax = MEM32(esi); /* 0x10076E7C: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x10076E7E: mov ecx, esi */
    PUSH32(esp, MEM32(eax + 0x50)); /* 0x10076E80: push dword ptr [eax + 0x50] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076E83: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007675C); /* 0x10076E86: call 0x1007675c */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, LO8(eax)); /* 0x10076E8B: mov bl, al */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10076E8D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076F21; /* 0x10076E8F: jne 0x10076f21 */
L_10076E95:
    eax = MEM32(ebp + 0x14); /* 0x10076E95: mov eax, dword ptr [ebp + 0x14] */
L_10076E98:
    /* test LO8(eax), 0xAu */ /* 0x10076E98: test al, 0xa */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076EDA; /* 0x10076E9A: je 0x10076eda */
L_10076E9C:
    ecx = edi; /* 0x10076E9C: mov ecx, edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10076E9E: mov dword ptr [ebp - 4], ecx */
    /* test edi, edi */ /* 0x10076EA1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076EDA; /* 0x10076EA3: je 0x10076eda */
L_10076EA5:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x10076EA5: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x10076EA5: shr eax, 1 */
    MEM32(ebp + (-0x8)) = eax; /* 0x10076EA7: mov dword ptr [ebp - 8], eax */
L_10076EAA:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x10076EAA: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x10076EAC: movzx eax, al */
    PUSH32(esp, eax); /* 0x10076EAF: push eax */
    PUSH32(esp, ecx); /* 0x10076EB0: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076EB1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10076CF4); /* 0x10076EB4: call 0x10076cf4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10076EB9: push dword ptr [ebp - 4] */
    ecx = MEM32(esi + 0x4); /* 0x10076EBC: mov ecx, dword ptr [esi + 4] */
    SET_LO8(ebx, LO8(eax)); /* 0x10076EBF: mov bl, al */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10076EC1: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076F1C; /* 0x10076EC3: jne 0x10076f1c */
L_10076EC5:
    PUSH32(esp, edi); /* 0x10076EC5: push edi */
    RECOMP_CALL(sub_100735C1); /* 0x10076EC6: call 0x100735c1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10076ECB: mov ecx, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x10076ECD: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x10076ED0: mov eax, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x10076ED3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076EAA; /* 0x10076ED5: jne 0x10076eaa */
L_10076ED7:
    eax = MEM32(ebp + 0x14); /* 0x10076ED7: mov eax, dword ptr [ebp + 0x14] */
L_10076EDA:
    /* test LO8(eax), 0x14u */ /* 0x10076EDA: test al, 0x14 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x14u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076F21; /* 0x10076EDC: je 0x10076f21 */
L_10076EDE:
    ecx = edi; /* 0x10076EDE: mov ecx, edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10076EE0: mov dword ptr [ebp - 4], ecx */
    /* test edi, edi */ /* 0x10076EE3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076F21; /* 0x10076EE5: je 0x10076f21 */
L_10076EE7:
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x10076EE7: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x10076EE7: shr eax, 2 */
    MEM32(ebp + 0x14) = eax; /* 0x10076EEA: mov dword ptr [ebp + 0x14], eax */
L_10076EED:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x10076EED: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x10076EEF: movzx eax, al */
    PUSH32(esp, eax); /* 0x10076EF2: push eax */
    PUSH32(esp, ecx); /* 0x10076EF3: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076EF4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10076D85); /* 0x10076EF7: call 0x10076d85 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10076EFC: push dword ptr [ebp - 4] */
    ecx = MEM32(esi + 0x4); /* 0x10076EFF: mov ecx, dword ptr [esi + 4] */
    SET_LO8(ebx, LO8(eax)); /* 0x10076F02: mov bl, al */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10076F04: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076F1C; /* 0x10076F06: jne 0x10076f1c */
L_10076F08:
    PUSH32(esp, edi); /* 0x10076F08: push edi */
    RECOMP_CALL(sub_100735C1); /* 0x10076F09: call 0x100735c1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10076F0E: mov ecx, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x10076F10: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x10076F13: mov eax, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x10076F16: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076F21; /* 0x10076F18: je 0x10076f21 */
L_10076F1A:
    RECOMP_BACKEDGE();
    goto L_10076EED; /* 0x10076F1A: jmp 0x10076eed */
L_10076F1C:
    RECOMP_CALL(sub_100735E7); /* 0x10076F1C: call 0x100735e7 */
    RECOMP_FLAGS_IN();
L_10076F21:
    SET_LO8(eax, LO8(ebx)); /* 0x10076F21: mov al, bl */
    edi = POP32_VAL(esp); /* 0x10076F23: pop edi */
L_10076F24:
    esi = POP32_VAL(esp); /* 0x10076F24: pop esi */
    ebx = POP32_VAL(esp); /* 0x10076F25: pop ebx */
    esp = ebp; /* 0x10076F26: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10076F28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10076F29: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_10076F2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10076F2Cu);

L_10076F2C:
    PUSH32(esp, ebp); /* 0x10076F2C: push ebp */
    ebp = esp; /* 0x10076F2D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10076F2F: push ecx */
    PUSH32(esp, ecx); /* 0x10076F30: push ecx */
    PUSH32(esp, ebx); /* 0x10076F31: push ebx */
    PUSH32(esp, esi); /* 0x10076F32: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076F33: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x10076F36: mov esi, ecx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x10076F38: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_100767A4); /* 0x10076F3A: call 0x100767a4 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10076F3F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076F4A; /* 0x10076F41: je 0x10076f4a */
L_10076F43:
    SET_LO8(eax, 1); /* 0x10076F43: mov al, 1 */
    goto L_10077027; /* 0x10076F45: jmp 0x10077027 */
L_10076F4A:
    ecx = MEM32(esi + 0x4); /* 0x10076F4A: mov ecx, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x10076F4D: push edi */
    RECOMP_CALL(sub_10024106); /* 0x10076F4E: call 0x10024106 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x14), 0x14u */ /* 0x10076F53: test byte ptr [ebp + 0x14], 0x14 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(0x14u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = eax; /* 0x10076F57: mov edi, eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076F9E; /* 0x10076F59: je 0x10076f9e */
L_10076F5B:
    ecx = edi; /* 0x10076F5B: mov ecx, edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10076F5D: mov dword ptr [ebp - 4], ecx */
    /* test edi, edi */ /* 0x10076F60: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076F9E; /* 0x10076F62: je 0x10076f9e */
L_10076F64:
    eax = MEM32(ebp + 0x14); /* 0x10076F64: mov eax, dword ptr [ebp + 0x14] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x10076F67: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x10076F67: shr eax, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x10076F6A: mov dword ptr [ebp - 8], eax */
L_10076F6D:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x10076F6D: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x10076F6F: movzx eax, al */
    PUSH32(esp, eax); /* 0x10076F72: push eax */
    PUSH32(esp, ecx); /* 0x10076F73: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076F74: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10076D85); /* 0x10076F77: call 0x10076d85 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10076F7C: push dword ptr [ebp - 4] */
    ecx = MEM32(esi + 0x4); /* 0x10076F7F: mov ecx, dword ptr [esi + 4] */
    SET_LO8(ebx, LO8(eax)); /* 0x10076F82: mov bl, al */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10076F84: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007702F; /* 0x10076F86: jne 0x1007702f */
L_10076F8C:
    PUSH32(esp, edi); /* 0x10076F8C: push edi */
    RECOMP_CALL(sub_100735C1); /* 0x10076F8D: call 0x100735c1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10076F92: mov ecx, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x10076F94: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x10076F97: mov eax, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x10076F9A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076F6D; /* 0x10076F9C: jne 0x10076f6d */
L_10076F9E:
    /* test MEM8(ebp + 0x14), 0xAu */ /* 0x10076F9E: test byte ptr [ebp + 0x14], 0xa */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076FE2; /* 0x10076FA2: je 0x10076fe2 */
L_10076FA4:
    ecx = edi; /* 0x10076FA4: mov ecx, edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10076FA6: mov dword ptr [ebp - 4], ecx */
    /* test edi, edi */ /* 0x10076FA9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10076FE2; /* 0x10076FAB: je 0x10076fe2 */
L_10076FAD:
    eax = MEM32(ebp + 0x14); /* 0x10076FAD: mov eax, dword ptr [ebp + 0x14] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x10076FB0: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x10076FB0: shr eax, 1 */
    MEM32(ebp + (-0x8)) = eax; /* 0x10076FB2: mov dword ptr [ebp - 8], eax */
L_10076FB5:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x10076FB5: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x10076FB7: movzx eax, al */
    PUSH32(esp, eax); /* 0x10076FBA: push eax */
    PUSH32(esp, ecx); /* 0x10076FBB: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076FBC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10076CF4); /* 0x10076FBF: call 0x10076cf4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10076FC4: push dword ptr [ebp - 4] */
    ecx = MEM32(esi + 0x4); /* 0x10076FC7: mov ecx, dword ptr [esi + 4] */
    SET_LO8(ebx, LO8(eax)); /* 0x10076FCA: mov bl, al */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10076FCC: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007702F; /* 0x10076FCE: jne 0x1007702f */
L_10076FD0:
    PUSH32(esp, edi); /* 0x10076FD0: push edi */
    RECOMP_CALL(sub_100735C1); /* 0x10076FD1: call 0x100735c1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10076FD6: mov ecx, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x10076FD8: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x10076FDB: mov eax, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x10076FDE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076FB5; /* 0x10076FE0: jne 0x10076fb5 */
L_10076FE2:
    /* test MEM8(ebp + 0x14), 1 */ /* 0x10076FE2: test byte ptr [ebp + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077024; /* 0x10076FE6: je 0x10077024 */
L_10076FE8:
    MEM32(ebp + 0x14) = edi; /* 0x10076FE8: mov dword ptr [ebp + 0x14], edi */
    eax = edi; /* 0x10076FEB: mov eax, edi */
    /* test edi, edi */ /* 0x10076FED: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077013; /* 0x10076FEF: je 0x10077013 */
L_10076FF1:
    PUSH32(esp, eax); /* 0x10076FF1: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10076FF2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10076C7E); /* 0x10076FF5: call 0x10076c7e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10076FFA: push dword ptr [ebp + 0x14] */
    ecx = MEM32(esi + 0x4); /* 0x10076FFD: mov ecx, dword ptr [esi + 4] */
    SET_LO8(ebx, LO8(eax)); /* 0x10077000: mov bl, al */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10077002: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007702F; /* 0x10077004: jne 0x1007702f */
L_10077006:
    PUSH32(esp, edi); /* 0x10077006: push edi */
    RECOMP_CALL(sub_100735C1); /* 0x10077007: call 0x100735c1 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x14) = eax; /* 0x1007700C: mov dword ptr [ebp + 0x14], eax */
    /* test eax, eax */ /* 0x1007700F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10076FF1; /* 0x10077011: jne 0x10076ff1 */
L_10077013:
    eax = MEM32(esi); /* 0x10077013: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x10077015: mov ecx, esi */
    PUSH32(esp, MEM32(eax + 0x50)); /* 0x10077017: push dword ptr [eax + 0x50] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007701A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007675C); /* 0x1007701D: call 0x1007675c */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, LO8(eax)); /* 0x10077022: mov bl, al */
L_10077024:
    SET_LO8(eax, LO8(ebx)); /* 0x10077024: mov al, bl */
    edi = POP32_VAL(esp); /* 0x10077026: pop edi */
L_10077027:
    esi = POP32_VAL(esp); /* 0x10077027: pop esi */
    ebx = POP32_VAL(esp); /* 0x10077028: pop ebx */
    esp = ebp; /* 0x10077029: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007702B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1007702C: ret 0x10 */
L_1007702F:
    RECOMP_CALL(sub_100735E7); /* 0x1007702F: call 0x100735e7 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10077024; /* 0x10077034: jmp 0x10077024 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10077036(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077036u);

L_10077036:
    PUSH32(esp, ebp); /* 0x10077036: push ebp */
    ebp = esp; /* 0x10077037: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10077039: push ecx */
    PUSH32(esp, ecx); /* 0x1007703A: push ecx */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1007703B: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1007703F: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x10077040: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x10077043: push esi */
    PUSH32(esp, edi); /* 0x10077044: push edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10077045: mov dword ptr [ebp - 4], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10077067; /* 0x10077048: je 0x10077067 */
L_1007704A:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1007704A: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x1007704D: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007704E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10077051: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10076AD7); /* 0x10077054: call 0x10076ad7 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10077059: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077064; /* 0x1007705B: je 0x10077064 */
L_1007705D:
    SET_LO8(eax, 1); /* 0x1007705D: mov al, 1 */
    goto L_10077118; /* 0x1007705F: jmp 0x10077118 */
L_10077064:
    ecx = MEM32(ebp + (-0x4)); /* 0x10077064: mov ecx, dword ptr [ebp - 4] */
L_10077067:
    /* cmp MEM8(ebp + 0x14), 0 */ /* 0x10077067: cmp byte ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007707F; /* 0x1007706B: je 0x1007707f */
L_1007706D:
    eax = MEM32(ecx); /* 0x1007706D: mov eax, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x1007706F: push eax */
    PUSH32(esp, MEM32(eax + 0x50)); /* 0x10077070: push dword ptr [eax + 0x50] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10077073: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100766D2); /* 0x10077076: call 0x100766d2 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007707B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007705D; /* 0x1007707D: jne 0x1007705d */
L_1007707F:
    esi = MEM32(ebp + 0xC); /* 0x1007707F: mov esi, dword ptr [ebp + 0xc] */
    eax = ebp + 0x14; /* 0x10077082: lea eax, [ebp + 0x14] */
    ecx = esi; /* 0x10077085: mov ecx, esi */
    PUSH32(esp, eax); /* 0x10077087: push eax */
    /* test ebx, ebx */ /* 0x10077088: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077093; /* 0x1007708A: jne 0x10077093 */
L_1007708C:
    RECOMP_CALL(sub_100765AB); /* 0x1007708C: call 0x100765ab */
    RECOMP_FLAGS_IN();
    goto L_10077098; /* 0x10077091: jmp 0x10077098 */
L_10077093:
    RECOMP_CALL(sub_10076576); /* 0x10077093: call 0x10076576 */
    RECOMP_FLAGS_IN();
L_10077098:
    edi = eax; /* 0x10077098: mov edi, eax */
    eax = MEM32(ebp + 0x14); /* 0x1007709A: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + 0xC) = eax; /* 0x1007709D: mov dword ptr [ebp + 0xc], eax */
    goto L_10077112; /* 0x100770A0: jmp 0x10077112 */
L_100770A2:
    eax = MEM32(ebp + (-0x4)); /* 0x100770A2: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x100770A5: push dword ptr [eax + 8] */
    ecx = MEM32(eax + 0x4); /* 0x100770A8: mov ecx, dword ptr [eax + 4] */
    RECOMP_CALL(sub_100764FD); /* 0x100770AB: call 0x100764fd */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100770B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100770C7; /* 0x100770B2: je 0x100770c7 */
L_100770B4:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x100770B4: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x100770B7: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100770BA: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x100770BD: push eax */
    RECOMP_CALL(sub_10076971); /* 0x100770BE: call 0x10076971 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100770C3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007705D; /* 0x100770C5: jne 0x1007705d */
L_100770C7:
    /* cmp edi, MEM32(ebp + 0x10) */ /* 0x100770C7: cmp edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100770F9; /* 0x100770CA: je 0x100770f9 */
L_100770CC:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x100770CC: push dword ptr [ebp + 0x20] */
    ecx = MEM32(ebp + (-0x4)); /* 0x100770CF: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x100770D2: push ebx */
    PUSH32(esp, edi); /* 0x100770D3: push edi */
    RECOMP_CALL(sub_10076A58); /* 0x100770D4: call 0x10076a58 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100770D9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100770F9; /* 0x100770DB: jne 0x100770f9 */
L_100770DD:
    eax = MEM32(edi); /* 0x100770DD: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x100770DF: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x100770E1: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100770E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100770F3; /* 0x100770E6: je 0x100770f3 */
L_100770E8:
    ecx = MEM32(ebp + 0x8); /* 0x100770E8: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x100770EB: push eax */
    RECOMP_CALL(sub_1007689A); /* 0x100770EC: call 0x1007689a */
    RECOMP_FLAGS_IN();
    goto L_100770F5; /* 0x100770F1: jmp 0x100770f5 */
L_100770F3:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x100770F3: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100770F5:
    /* test LO8(eax), LO8(eax) */ /* 0x100770F5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077121; /* 0x100770F7: jne 0x10077121 */
L_100770F9:
    eax = esi + 0x60; /* 0x100770F9: lea eax, [esi + 0x60] */
    /* test ebx, ebx */ /* 0x100770FC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077103; /* 0x100770FE: je 0x10077103 */
L_10077100:
    eax = esi + 0x10; /* 0x10077100: lea eax, [esi + 0x10] */
L_10077103:
    PUSH32(esp, eax); /* 0x10077103: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10077104: push dword ptr [ebp + 0xc] */
    eax = ebp + 0x14; /* 0x10077107: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1007710A: push eax */
    RECOMP_CALL(sub_100731CC); /* 0x1007710B: call 0x100731cc */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10077110: mov edi, eax */
L_10077112:
    /* test edi, edi */ /* 0x10077112: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100770A2; /* 0x10077114: jne 0x100770a2 */
L_10077116:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10077116: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10077118:
    edi = POP32_VAL(esp); /* 0x10077118: pop edi */
    esi = POP32_VAL(esp); /* 0x10077119: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007711A: pop ebx */
    esp = ebp; /* 0x1007711B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007711D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1007711E: ret 0x1c */
L_10077121:
    /* test ebx, ebx */ /* 0x10077121: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007713D; /* 0x10077123: jne 0x1007713d */
L_10077125:
    ecx = MEM32(esi + 0xA0); /* 0x10077125: mov ecx, dword ptr [esi + 0xa0] */
    eax = MEM32(ebp + 0x14); /* 0x1007712B: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007712E: inc eax */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1007712F: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10077130: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0xB4) = edx; /* 0x10077132: mov dword ptr [esi + 0xb4], edx */
    RECOMP_BACKEDGE();
    goto L_1007705D; /* 0x10077138: jmp 0x1007705d */
L_1007713D:
    ecx = MEM32(esi + 0x50); /* 0x1007713D: mov ecx, dword ptr [esi + 0x50] */
    eax = MEM32(ebp + 0x14); /* 0x10077140: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10077143: inc eax */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10077144: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10077145: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0xB0) = edx; /* 0x10077147: mov dword ptr [esi + 0xb0], edx */
    RECOMP_BACKEDGE();
    goto L_1007705D; /* 0x1007714D: jmp 0x1007705d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10077152(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077152u);

L_10077152:
    PUSH32(esp, ebp); /* 0x10077152: push ebp */
    ebp = esp; /* 0x10077153: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10077155: push ecx */
    PUSH32(esp, ecx); /* 0x10077156: push ecx */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x10077157: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ecx; /* 0x1007715B: mov eax, ecx */
    PUSH32(esp, ebx); /* 0x1007715D: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x1007715E: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x10077161: push esi */
    PUSH32(esp, edi); /* 0x10077162: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x10077163: mov dword ptr [ebp - 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10077185; /* 0x10077166: je 0x10077185 */
L_10077168:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x10077168: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x1007716B: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1007716C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007716F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10077172: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10076B72); /* 0x10077175: call 0x10076b72 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007717A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077185; /* 0x1007717C: je 0x10077185 */
L_1007717E:
    SET_LO8(eax, 1); /* 0x1007717E: mov al, 1 */
    goto L_10077212; /* 0x10077180: jmp 0x10077212 */
L_10077185:
    esi = MEM32(ebp + 0xC); /* 0x10077185: mov esi, dword ptr [ebp + 0xc] */
    eax = ebp + 0x18; /* 0x10077188: lea eax, [ebp + 0x18] */
    ecx = esi; /* 0x1007718B: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1007718D: push eax */
    /* test ebx, ebx */ /* 0x1007718E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077199; /* 0x10077190: jne 0x10077199 */
L_10077192:
    RECOMP_CALL(sub_100765AB); /* 0x10077192: call 0x100765ab */
    RECOMP_FLAGS_IN();
    goto L_1007719E; /* 0x10077197: jmp 0x1007719e */
L_10077199:
    RECOMP_CALL(sub_10076576); /* 0x10077199: call 0x10076576 */
    RECOMP_FLAGS_IN();
L_1007719E:
    edi = eax; /* 0x1007719E: mov edi, eax */
    eax = MEM32(ebp + 0x18); /* 0x100771A0: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + 0xC) = eax; /* 0x100771A3: mov dword ptr [ebp + 0xc], eax */
    goto L_1007720C; /* 0x100771A6: jmp 0x1007720c */
L_100771A8:
    eax = MEM32(ebp + (-0x4)); /* 0x100771A8: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x100771AB: push dword ptr [eax + 8] */
    ecx = MEM32(eax + 0x4); /* 0x100771AE: mov ecx, dword ptr [eax + 4] */
    RECOMP_CALL(sub_100764FD); /* 0x100771B1: call 0x100764fd */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100771B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100771CD; /* 0x100771B8: je 0x100771cd */
L_100771BA:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x100771BA: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x100771BD: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100771C0: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x100771C3: push eax */
    RECOMP_CALL(sub_10076971); /* 0x100771C4: call 0x10076971 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100771C9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007717E; /* 0x100771CB: jne 0x1007717e */
L_100771CD:
    /* cmp edi, MEM32(ebp + 0x10) */ /* 0x100771CD: cmp edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100771F3; /* 0x100771D0: je 0x100771f3 */
L_100771D2:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x100771D2: push dword ptr [ebp + 0x20] */
    ecx = MEM32(ebp + (-0x4)); /* 0x100771D5: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x100771D8: push ebx */
    PUSH32(esp, edi); /* 0x100771D9: push edi */
    RECOMP_CALL(sub_10076A58); /* 0x100771DA: call 0x10076a58 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100771DF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100771F3; /* 0x100771E1: jne 0x100771f3 */
L_100771E3:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100771E3: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x100771E6: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100771E7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100768C7); /* 0x100771EA: call 0x100768c7 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100771EF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007721B; /* 0x100771F1: jne 0x1007721b */
L_100771F3:
    eax = esi + 0x60; /* 0x100771F3: lea eax, [esi + 0x60] */
    /* test ebx, ebx */ /* 0x100771F6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100771FD; /* 0x100771F8: je 0x100771fd */
L_100771FA:
    eax = esi + 0x10; /* 0x100771FA: lea eax, [esi + 0x10] */
L_100771FD:
    PUSH32(esp, eax); /* 0x100771FD: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100771FE: push dword ptr [ebp + 0xc] */
    eax = ebp + 0x18; /* 0x10077201: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x10077204: push eax */
    RECOMP_CALL(sub_100731CC); /* 0x10077205: call 0x100731cc */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007720A: mov edi, eax */
L_1007720C:
    /* test edi, edi */ /* 0x1007720C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100771A8; /* 0x1007720E: jne 0x100771a8 */
L_10077210:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10077210: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10077212:
    edi = POP32_VAL(esp); /* 0x10077212: pop edi */
    esi = POP32_VAL(esp); /* 0x10077213: pop esi */
    ebx = POP32_VAL(esp); /* 0x10077214: pop ebx */
    esp = ebp; /* 0x10077215: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10077217: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x10077218: ret 0x1c */
L_1007721B:
    /* test ebx, ebx */ /* 0x1007721B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077237; /* 0x1007721D: jne 0x10077237 */
L_1007721F:
    ecx = MEM32(esi + 0xA0); /* 0x1007721F: mov ecx, dword ptr [esi + 0xa0] */
    eax = MEM32(ebp + 0x18); /* 0x10077225: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10077228: inc eax */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10077229: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1007722A: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0xB4) = edx; /* 0x1007722C: mov dword ptr [esi + 0xb4], edx */
    RECOMP_BACKEDGE();
    goto L_1007717E; /* 0x10077232: jmp 0x1007717e */
L_10077237:
    ecx = MEM32(esi + 0x50); /* 0x10077237: mov ecx, dword ptr [esi + 0x50] */
    eax = MEM32(ebp + 0x18); /* 0x1007723A: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007723D: inc eax */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1007723E: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1007723F: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0xB0) = edx; /* 0x10077241: mov dword ptr [esi + 0xb0], edx */
    RECOMP_BACKEDGE();
    goto L_1007717E; /* 0x10077247: jmp 0x1007717e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007724C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007724Cu);

L_1007724C:
    PUSH32(esp, ebp); /* 0x1007724C: push ebp */
    ebp = esp; /* 0x1007724D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007724F: push ecx */
    PUSH32(esp, ecx); /* 0x10077250: push ecx */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x10077251: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ecx; /* 0x10077255: mov eax, ecx */
    PUSH32(esp, ebx); /* 0x10077257: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x10077258: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1007725B: push esi */
    PUSH32(esp, edi); /* 0x1007725C: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x1007725D: mov dword ptr [ebp - 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007727F; /* 0x10077260: je 0x1007727f */
L_10077262:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x10077262: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x10077265: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10077266: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10077269: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007726C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10076BF5); /* 0x1007726F: call 0x10076bf5 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10077274: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007727F; /* 0x10077276: je 0x1007727f */
L_10077278:
    SET_LO8(eax, 1); /* 0x10077278: mov al, 1 */
    goto L_1007730F; /* 0x1007727A: jmp 0x1007730f */
L_1007727F:
    esi = MEM32(ebp + 0xC); /* 0x1007727F: mov esi, dword ptr [ebp + 0xc] */
    eax = ebp + 0x18; /* 0x10077282: lea eax, [ebp + 0x18] */
    ecx = esi; /* 0x10077285: mov ecx, esi */
    PUSH32(esp, eax); /* 0x10077287: push eax */
    /* test ebx, ebx */ /* 0x10077288: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077293; /* 0x1007728A: jne 0x10077293 */
L_1007728C:
    RECOMP_CALL(sub_100765AB); /* 0x1007728C: call 0x100765ab */
    RECOMP_FLAGS_IN();
    goto L_10077298; /* 0x10077291: jmp 0x10077298 */
L_10077293:
    RECOMP_CALL(sub_10076576); /* 0x10077293: call 0x10076576 */
    RECOMP_FLAGS_IN();
L_10077298:
    edi = eax; /* 0x10077298: mov edi, eax */
    eax = MEM32(ebp + 0x18); /* 0x1007729A: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + 0xC) = eax; /* 0x1007729D: mov dword ptr [ebp + 0xc], eax */
    goto L_10077309; /* 0x100772A0: jmp 0x10077309 */
L_100772A2:
    eax = MEM32(ebp + (-0x4)); /* 0x100772A2: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x100772A5: push dword ptr [eax + 8] */
    ecx = MEM32(eax + 0x4); /* 0x100772A8: mov ecx, dword ptr [eax + 4] */
    RECOMP_CALL(sub_100764FD); /* 0x100772AB: call 0x100764fd */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100772B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100772C7; /* 0x100772B2: je 0x100772c7 */
L_100772B4:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x100772B4: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x100772B7: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100772BA: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x100772BD: push eax */
    RECOMP_CALL(sub_10076971); /* 0x100772BE: call 0x10076971 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100772C3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077278; /* 0x100772C5: jne 0x10077278 */
L_100772C7:
    /* cmp edi, MEM32(ebp + 0x10) */ /* 0x100772C7: cmp edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100772F0; /* 0x100772CA: je 0x100772f0 */
L_100772CC:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x100772CC: push dword ptr [ebp + 0x20] */
    ecx = MEM32(ebp + (-0x4)); /* 0x100772CF: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x100772D2: push ebx */
    PUSH32(esp, edi); /* 0x100772D3: push edi */
    RECOMP_CALL(sub_10076A58); /* 0x100772D4: call 0x10076a58 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100772D9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100772F0; /* 0x100772DB: jne 0x100772f0 */
L_100772DD:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100772DD: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x100772E0: push dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x100772E3: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100772E4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007691C); /* 0x100772E7: call 0x1007691c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100772EC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077318; /* 0x100772EE: jne 0x10077318 */
L_100772F0:
    eax = esi + 0x60; /* 0x100772F0: lea eax, [esi + 0x60] */
    /* test ebx, ebx */ /* 0x100772F3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100772FA; /* 0x100772F5: je 0x100772fa */
L_100772F7:
    eax = esi + 0x10; /* 0x100772F7: lea eax, [esi + 0x10] */
L_100772FA:
    PUSH32(esp, eax); /* 0x100772FA: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100772FB: push dword ptr [ebp + 0xc] */
    eax = ebp + 0x18; /* 0x100772FE: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x10077301: push eax */
    RECOMP_CALL(sub_100731CC); /* 0x10077302: call 0x100731cc */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10077307: mov edi, eax */
L_10077309:
    /* test edi, edi */ /* 0x10077309: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100772A2; /* 0x1007730B: jne 0x100772a2 */
L_1007730D:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1007730D: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1007730F:
    edi = POP32_VAL(esp); /* 0x1007730F: pop edi */
    esi = POP32_VAL(esp); /* 0x10077310: pop esi */
    ebx = POP32_VAL(esp); /* 0x10077311: pop ebx */
    esp = ebp; /* 0x10077312: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10077314: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x10077315: ret 0x1c */
L_10077318:
    /* test ebx, ebx */ /* 0x10077318: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077334; /* 0x1007731A: jne 0x10077334 */
L_1007731C:
    ecx = MEM32(esi + 0xA0); /* 0x1007731C: mov ecx, dword ptr [esi + 0xa0] */
    eax = MEM32(ebp + 0x18); /* 0x10077322: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10077325: inc eax */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10077326: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x10077327: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0xB4) = edx; /* 0x10077329: mov dword ptr [esi + 0xb4], edx */
    RECOMP_BACKEDGE();
    goto L_10077278; /* 0x1007732F: jmp 0x10077278 */
L_10077334:
    ecx = MEM32(esi + 0x50); /* 0x10077334: mov ecx, dword ptr [esi + 0x50] */
    eax = MEM32(ebp + 0x18); /* 0x10077337: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007733A: inc eax */
    _flag_k = FK_INC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1007733B: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1007733C: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0xB0) = edx; /* 0x1007733E: mov dword ptr [esi + 0xb0], edx */
    RECOMP_BACKEDGE();
    goto L_10077278; /* 0x10077344: jmp 0x10077278 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10077349(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077349u);

L_10077349:
    PUSH32(esp, ebp); /* 0x10077349: push ebp */
    ebp = esp; /* 0x1007734A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1007734C: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x1007734F: sub esp, 0x4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10077352: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x10077357: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x48) = eax; /* 0x10077359: mov dword ptr [esp + 0x48], eax */
    eax = MEM32(ebp + 0xC); /* 0x1007735D: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x10077360: push ebx */
    PUSH32(esp, esi); /* 0x10077361: push esi */
    PUSH32(esp, edi); /* 0x10077362: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10077363: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x10077366: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x10077368: push edi */
    MEM32(esp + 0x20) = edi; /* 0x10077369: mov dword ptr [esp + 0x20], edi */
    MEM32(esp + 0x2C) = eax; /* 0x1007736D: mov dword ptr [esp + 0x2c], eax */
    MEM8(esp + 0x17) = (uint8_t)(0); /* 0x10077371: mov byte ptr [esp + 0x17], 0 */
    RECOMP_CALL(sub_100767A4); /* 0x10077376: call 0x100767a4 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007737B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077386; /* 0x1007737D: je 0x10077386 */
L_1007737F:
    SET_LO8(eax, 1); /* 0x1007737F: mov al, 1 */
    goto L_1007764C; /* 0x10077381: jmp 0x1007764c */
L_10077386:
    RECOMP_CALL(sub_10027FD6); /* 0x10077386: call 0x10027fd6 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x1007738B: mov ecx, dword ptr [ebx + 4] */
    PUSH32(esp, edx); /* 0x1007738E: push edx */
    PUSH32(esp, eax); /* 0x1007738F: push eax */
    MEM32(ebx + 0x10) = eax; /* 0x10077390: mov dword ptr [ebx + 0x10], eax */
    MEM32(ebx + 0x14) = edx; /* 0x10077393: mov dword ptr [ebx + 0x14], edx */
    RECOMP_CALL(sub_1007653A); /* 0x10077396: call 0x1007653a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x1007739B: push dword ptr [ebx + 0x14] */
    ecx = ebx; /* 0x1007739E: mov ecx, ebx */
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x100773A0: push dword ptr [ebx + 0x10] */
    RECOMP_CALL(sub_1007647A); /* 0x100773A3: call 0x1007647a */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100773A8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077431; /* 0x100773AA: je 0x10077431 */
L_100773B0:
    ecx = MEM32(ebx + 0x4); /* 0x100773B0: mov ecx, dword ptr [ebx + 4] */
    /* cmp MEM32(ecx + 0x130), 0 */ /* 0x100773B3: cmp dword ptr [ecx + 0x130], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x130)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100773FD; /* 0x100773BA: jne 0x100773fd */
L_100773BC:
    goto L_1007742B; /* 0x100773BC: jmp 0x1007742b */
L_100773BE:
    /* cmp MEM32(eax), 0 */ /* 0x100773BE: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100773DB; /* 0x100773C1: jne 0x100773db */
L_100773C3:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100773C3: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFEF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFEF0u; /* 0x100773C6: add eax, 0xfffffef0 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100773CB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x100773CE: push edi */
    PUSH32(esp, eax); /* 0x100773CF: push eax */
    RECOMP_CALL(sub_10076971); /* 0x100773D0: call 0x10076971 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100773D5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100773FA; /* 0x100773D7: je 0x100773fa */
L_100773D9:
    goto L_10077426; /* 0x100773D9: jmp 0x10077426 */
L_100773DB:
    /* test MEM8(ebp + 0x14), 1 */ /* 0x100773DB: test byte ptr [ebp + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100773FA; /* 0x100773DF: je 0x100773fa */
L_100773E1:
    ecx = eax + (-0xC4); /* 0x100773E1: lea ecx, [eax - 0xc4] */
    eax = MEM32(ecx + 0x4); /* 0x100773E7: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, MEM32(ecx) */ /* 0x100773EA: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100773FA; /* 0x100773EC: jle 0x100773fa */
L_100773EE:
    PUSH32(esp, ecx); /* 0x100773EE: push ecx */
    RECOMP_CALL(sub_100760B7); /* 0x100773EF: call 0x100760b7 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100773F4: mov ecx, eax */
    /* test ecx, ecx */ /* 0x100773F6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077408; /* 0x100773F8: jne 0x10077408 */
L_100773FA:
    ecx = MEM32(ebx + 0x4); /* 0x100773FA: mov ecx, dword ptr [ebx + 4] */
L_100773FD:
    RECOMP_CALL(sub_10074D44); /* 0x100773FD: call 0x10074d44 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10077402: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007742B; /* 0x10077404: je 0x1007742b */
L_10077406:
    RECOMP_BACKEDGE();
    goto L_100773BE; /* 0x10077406: jmp 0x100773be */
L_10077408:
    eax = MEM32(ecx + 0x1C); /* 0x10077408: mov eax, dword ptr [ecx + 0x1c] */
    esi = esp + 0x2C; /* 0x1007740B: lea esi, [esp + 0x2c] */
    MEM32(esp + 0x2C) = 1; /* 0x1007740F: mov dword ptr [esp + 0x2c], 1 */
    MEM32(esp + 0x30) = eax; /* 0x10077417: mov dword ptr [esp + 0x30], eax */
    MEM32(esp + 0x34) = ecx; /* 0x1007741B: mov dword ptr [esp + 0x34], ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1007741F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10077420: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10077421: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(esp + 0x1C); /* 0x10077422: mov edi, dword ptr [esp + 0x1c] */
L_10077426:
    MEM8(esp + 0x13) = (uint8_t)(1); /* 0x10077426: mov byte ptr [esp + 0x13], 1 */
L_1007742B:
    eax = MEM32(ebx); /* 0x1007742B: mov eax, dword ptr [ebx] */
    MEM8(eax + 0x62) = (uint8_t)(1); /* 0x1007742D: mov byte ptr [eax + 0x62], 1 */
L_10077431:
    /* cmp MEM8(esp + 0x13), 0 */ /* 0x10077431: cmp byte ptr [esp + 0x13], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x13)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = MEM32(ebx); /* 0x10077436: mov ecx, dword ptr [ebx] */
    eax = MEM32(ecx + 0x54); /* 0x10077438: mov eax, dword ptr [ecx + 0x54] */
    MEM32(esp + 0x1C) = eax; /* 0x1007743B: mov dword ptr [esp + 0x1c], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100775D9; /* 0x1007743F: jne 0x100775d9 */
L_10077445:
    _flag_a = (uint32_t)(MEM32(esp + 0x4C)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x4C) = MEM32(esp + 0x4C) & 0; /* 0x10077445: and dword ptr [esp + 0x4c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ecx + 0x60), 0 */ /* 0x1007744A: cmp byte ptr [ecx + 0x60], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x60)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(esp + 0x48) = 1; /* 0x1007744E: mov dword ptr [esp + 0x48], 1 */
    MEM32(esp + 0x50) = 2; /* 0x10077456: mov dword ptr [esp + 0x50], 2 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10077473; /* 0x1007745E: jne 0x10077473 */
L_10077460:
    RECOMP_CALL(sub_1007ABE5); /* 0x10077460: call 0x1007abe5 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10077465: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077473; /* 0x10077467: jne 0x10077473 */
L_10077469:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x10077469: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10077473; /* 0x1007746C: jne 0x10077473 */
L_1007746E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007746E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10077470: inc esi */
    _flag_k = FK_INC;
    goto L_10077475; /* 0x10077471: jmp 0x10077475 */
L_10077473:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10077473: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10077475:
    SET_LO8(eax, MEM8(esp + 0x13)); /* 0x10077475: mov al, byte ptr [esp + 0x13] */
    MEM8(esp + 0x18) = (uint8_t)(1); /* 0x10077479: mov byte ptr [esp + 0x18], 1 */
L_1007747E:
    /* cmp esi, 2 */ /* 0x1007747E: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100775D5; /* 0x10077481: jg 0x100775d5 */
L_10077487:
    ecx = MEM32(esp + 0x28); /* 0x10077487: mov ecx, dword ptr [esp + 0x28] */
    MEM32(esp + 0x20) = ecx; /* 0x1007748B: mov dword ptr [esp + 0x20], ecx */
    ecx = MEM32(esp + 0x1C); /* 0x1007748F: mov ecx, dword ptr [esp + 0x1c] */
    MEM32(esp + 0x14) = ecx; /* 0x10077493: mov dword ptr [esp + 0x14], ecx */
    /* test ecx, ecx */ /* 0x10077497: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100775CC; /* 0x10077499: je 0x100775cc */
L_1007749F:
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x1007749F: push dword ptr [ebx + 8] */
    ecx = MEM32(ebx + 0x4); /* 0x100774A2: mov ecx, dword ptr [ebx + 4] */
    RECOMP_CALL(sub_100764FD); /* 0x100774A5: call 0x100764fd */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100774AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100774C3; /* 0x100774AC: je 0x100774c3 */
L_100774AE:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100774AE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100774B1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x100774B4: push edi */
    PUSH32(esp, eax); /* 0x100774B5: push eax */
    RECOMP_CALL(sub_10076971); /* 0x100774B6: call 0x10076971 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100774BB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077660; /* 0x100774BD: jne 0x10077660 */
L_100774C3:
    /* cmp MEM8(esp + 0x18), 0 */ /* 0x100774C3: cmp byte ptr [esp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x18)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100774E4; /* 0x100774C8: je 0x100774e4 */
L_100774CA:
    /* test MEM8(ebp + 0x14), 1 */ /* 0x100774CA: test byte ptr [ebp + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100774E4; /* 0x100774CE: je 0x100774e4 */
L_100774D0:
    PUSH32(esp, 0); /* 0x100774D0: push 0 */
    PUSH32(esp, MEM32(ebx)); /* 0x100774D2: push dword ptr [ebx] */
    ecx = ebx; /* 0x100774D4: mov ecx, ebx */
    PUSH32(esp, edi); /* 0x100774D6: push edi */
    RECOMP_CALL(sub_100767DE); /* 0x100774D7: call 0x100767de */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100774DC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077660; /* 0x100774DE: jne 0x10077660 */
L_100774E4:
    eax = MEM32(ebp + 0x14); /* 0x100774E4: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x100774E7: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x24) = eax; /* 0x100774EA: mov dword ptr [esp + 0x24], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077516; /* 0x100774EE: je 0x10077516 */
L_100774F0:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100774F0: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x100774F3: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100774F5: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(esp + esi * 4 + 0x50)); /* 0x100774F8: push dword ptr [esp + esi*4 + 0x50] */
    PUSH32(esp, MEM32(esp + 0x24)); /* 0x100774FC: push dword ptr [esp + 0x24] */
    PUSH32(esp, MEM32(esp + 0x30)); /* 0x10077500: push dword ptr [esp + 0x30] */
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x10077504: push dword ptr [esp + 0x28] */
    PUSH32(esp, edi); /* 0x10077508: push edi */
    RECOMP_CALL(sub_10077036); /* 0x10077509: call 0x10077036 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007750E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077660; /* 0x10077510: jne 0x10077660 */
L_10077516:
    /* test MEM8(ebp + 0x14), 0xAu */ /* 0x10077516: test byte ptr [ebp + 0x14], 0xa */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077549; /* 0x1007751A: je 0x10077549 */
L_1007751C:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007751C: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x14); /* 0x1007751F: mov eax, dword ptr [ebp + 0x14] */
    ecx = ebx; /* 0x10077522: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10077524: push dword ptr [ebp + 0x14] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x10077527: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x10077527: shr eax, 1 */
    PUSH32(esp, MEM32(esp + esi * 4 + 0x50)); /* 0x10077529: push dword ptr [esp + esi*4 + 0x50] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x1007752D: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x1007752F: movzx eax, al */
    PUSH32(esp, eax); /* 0x10077532: push eax */
    PUSH32(esp, MEM32(esp + 0x30)); /* 0x10077533: push dword ptr [esp + 0x30] */
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x10077537: push dword ptr [esp + 0x28] */
    PUSH32(esp, edi); /* 0x1007753B: push edi */
    RECOMP_CALL(sub_10077152); /* 0x1007753C: call 0x10077152 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10077541: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077660; /* 0x10077543: jne 0x10077660 */
L_10077549:
    /* test MEM8(ebp + 0x14), 0x14u */ /* 0x10077549: test byte ptr [ebp + 0x14], 0x14 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(0x14u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007757D; /* 0x1007754D: je 0x1007757d */
L_1007754F:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007754F: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x14); /* 0x10077552: mov eax, dword ptr [ebp + 0x14] */
    ecx = ebx; /* 0x10077555: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10077557: push dword ptr [ebp + 0x14] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x1007755A: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x1007755A: shr eax, 2 */
    PUSH32(esp, MEM32(esp + esi * 4 + 0x50)); /* 0x1007755D: push dword ptr [esp + esi*4 + 0x50] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x10077561: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x10077563: movzx eax, al */
    PUSH32(esp, eax); /* 0x10077566: push eax */
    PUSH32(esp, MEM32(esp + 0x30)); /* 0x10077567: push dword ptr [esp + 0x30] */
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x1007756B: push dword ptr [esp + 0x28] */
    PUSH32(esp, edi); /* 0x1007756F: push edi */
    RECOMP_CALL(sub_1007724C); /* 0x10077570: call 0x1007724c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10077575: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077660; /* 0x10077577: jne 0x10077660 */
L_1007757D:
    /* cmp MEM32(esp + 0x24), 0 */ /* 0x1007757D: cmp dword ptr [esp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100775A2; /* 0x10077582: je 0x100775a2 */
L_10077584:
    /* cmp esi, 2 */ /* 0x10077584: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100775A2; /* 0x10077587: jne 0x100775a2 */
L_10077589:
    eax = MEM32(esp + 0x14); /* 0x10077589: mov eax, dword ptr [esp + 0x14] */
    ecx = ebx; /* 0x1007758D: mov ecx, ebx */
    PUSH32(esp, MEM32(ebx)); /* 0x1007758F: push dword ptr [ebx] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x10077591: push dword ptr [eax + 4] */
    PUSH32(esp, edi); /* 0x10077594: push edi */
    RECOMP_CALL(sub_100766D2); /* 0x10077595: call 0x100766d2 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007759A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077660; /* 0x1007759C: jne 0x10077660 */
L_100775A2:
    PUSH32(esp, MEM32(esp + 0x14)); /* 0x100775A2: push dword ptr [esp + 0x14] */
    ecx = MEM32(ebx + 0x4); /* 0x100775A6: mov ecx, dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x100775A9: push dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) & 0; /* 0x100775AD: and dword ptr [esp + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esp + 0x20) = (uint8_t)(0); /* 0x100775B2: mov byte ptr [esp + 0x20], 0 */
    RECOMP_CALL(sub_100735C1); /* 0x100775B7: call 0x100735c1 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x14) = eax; /* 0x100775BC: mov dword ptr [esp + 0x14], eax */
    /* test eax, eax */ /* 0x100775C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007749F; /* 0x100775C2: jne 0x1007749f */
L_100775C8:
    SET_LO8(eax, MEM8(esp + 0x13)); /* 0x100775C8: mov al, byte ptr [esp + 0x13] */
L_100775CC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100775CC: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x100775CD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007747E; /* 0x100775CF: je 0x1007747e */
L_100775D5:
    /* test LO8(eax), LO8(eax) */ /* 0x100775D5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007764C; /* 0x100775D7: je 0x1007764c */
L_100775D9:
    ecx = MEM32(edi + 0x4); /* 0x100775D9: mov ecx, dword ptr [edi + 4] */
    edx = MEM32(ebx + 0x10); /* 0x100775DC: mov edx, dword ptr [ebx + 0x10] */
    eax = edx; /* 0x100775DF: mov eax, edx */
    esi = MEM32(ebx + 0x14); /* 0x100775E1: mov esi, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x108));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x108); /* 0x100775E4: sub eax, dword ptr [ecx + 0x108] */
    _flag_k = FK_CMP;
    edi = MEM32(ecx + 0x8); /* 0x100775EA: mov edi, dword ptr [ecx + 8] */
    /* cmp eax, 0x64u */ /* 0x100775ED: cmp eax, 0x64 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100775FE; /* 0x100775F0: jbe 0x100775fe */
L_100775F2:
    MEM32(ecx + 0x108) = edx; /* 0x100775F2: mov dword ptr [ecx + 0x108], edx */
    MEM32(ecx + 0x10C) = esi; /* 0x100775F8: mov dword ptr [ecx + 0x10c], esi */
L_100775FE:
    esi = ecx + 0xC; /* 0x100775FE: lea esi, [ecx + 0xc] */
    MEM8(esp + 0x18) = (uint8_t)(0); /* 0x10077601: mov byte ptr [esp + 0x18], 0 */
    /* test MEM32(esi), 0x0FFFFFFFu */ /* 0x10077606: test dword ptr [esi], 0xfffffff */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x0FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077632; /* 0x1007760C: je 0x10077632 */
L_1007760E:
    eax = MEM32(ebx); /* 0x1007760E: mov eax, dword ptr [ebx] */
    ecx = esp + 0x38; /* 0x10077610: lea ecx, [esp + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x94u; /* 0x10077614: add eax, 0x94 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10077619: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x1007761A: call 0x1002762f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1007761F: push esi */
    ecx = esp + 0x3C; /* 0x10077620: lea ecx, [esp + 0x3c] */
    RECOMP_CALL(sub_1006E840); /* 0x10077624: call 0x1006e840 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10077629: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077632; /* 0x1007762B: je 0x10077632 */
L_1007762D:
    MEM8(esp + 0x18) = (uint8_t)(1); /* 0x1007762D: mov byte ptr [esp + 0x18], 1 */
L_10077632:
    /* cmp edi, MEM32(esp + 0x1C) */ /* 0x10077632: cmp edi, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebx); /* 0x10077636: mov ecx, dword ptr [ebx] */
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10077638: sete dl */
    edx = (uint32_t)LO8(edx); /* 0x1007763B: movzx edx, dl */
    PUSH32(esp, edx); /* 0x1007763E: push edx */
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x1007763F: push dword ptr [esp + 0x1c] */
    RECOMP_CALL(sub_1007AB9A); /* 0x10077643: call 0x1007ab9a */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(esp + 0x13)); /* 0x10077648: mov al, byte ptr [esp + 0x13] */
L_1007764C:
    ecx = MEM32(esp + 0x54); /* 0x1007764C: mov ecx, dword ptr [esp + 0x54] */
    edi = POP32_VAL(esp); /* 0x10077650: pop edi */
    esi = POP32_VAL(esp); /* 0x10077651: pop esi */
    ebx = POP32_VAL(esp); /* 0x10077652: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x10077653: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x10077655: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007765A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007765C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1007765D: ret 0x10 */
L_10077660:
    SET_LO8(eax, 1); /* 0x10077660: mov al, 1 */
    MEM8(esp + 0x13) = (uint8_t)(LO8(eax)); /* 0x10077662: mov byte ptr [esp + 0x13], al */
    RECOMP_BACKEDGE();
    goto L_100775CC; /* 0x10077666: jmp 0x100775cc */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007766B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007766Bu);

L_1007766B:
    PUSH32(esp, ebp); /* 0x1007766B: push ebp */
    ebp = esp; /* 0x1007766C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1007766E: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x10077671: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10077674: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x10077679: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = eax; /* 0x1007767B: mov dword ptr [esp + 0x38], eax */
    eax = MEM32(ebp + 0xC); /* 0x1007767F: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x10077682: push ebx */
    PUSH32(esp, esi); /* 0x10077683: push esi */
    PUSH32(esp, edi); /* 0x10077684: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10077685: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x10077688: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x1007768A: push edi */
    MEM32(esp + 0x20) = edi; /* 0x1007768B: mov dword ptr [esp + 0x20], edi */
    MEM32(esp + 0x2C) = eax; /* 0x1007768F: mov dword ptr [esp + 0x2c], eax */
    MEM8(esp + 0x13) = (uint8_t)(0); /* 0x10077693: mov byte ptr [esp + 0x13], 0 */
    RECOMP_CALL(sub_100767A4); /* 0x10077698: call 0x100767a4 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007769D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100776A8; /* 0x1007769F: je 0x100776a8 */
L_100776A1:
    SET_LO8(eax, 1); /* 0x100776A1: mov al, 1 */
    goto L_10077938; /* 0x100776A3: jmp 0x10077938 */
L_100776A8:
    RECOMP_CALL(sub_10027FD6); /* 0x100776A8: call 0x10027fd6 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x100776AD: mov ecx, dword ptr [ebx + 4] */
    PUSH32(esp, edx); /* 0x100776B0: push edx */
    PUSH32(esp, eax); /* 0x100776B1: push eax */
    MEM32(ebx + 0x10) = eax; /* 0x100776B2: mov dword ptr [ebx + 0x10], eax */
    MEM32(ebx + 0x14) = edx; /* 0x100776B5: mov dword ptr [ebx + 0x14], edx */
    RECOMP_CALL(sub_1007653A); /* 0x100776B8: call 0x1007653a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x100776BD: push dword ptr [ebx + 0x14] */
    ecx = ebx; /* 0x100776C0: mov ecx, ebx */
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x100776C2: push dword ptr [ebx + 0x10] */
    RECOMP_CALL(sub_1007647A); /* 0x100776C5: call 0x1007647a */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100776CA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077753; /* 0x100776CC: je 0x10077753 */
L_100776D2:
    ecx = MEM32(ebx + 0x4); /* 0x100776D2: mov ecx, dword ptr [ebx + 4] */
    /* cmp MEM32(ecx + 0x130), 0 */ /* 0x100776D5: cmp dword ptr [ecx + 0x130], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x130)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007771F; /* 0x100776DC: jne 0x1007771f */
L_100776DE:
    goto L_1007774D; /* 0x100776DE: jmp 0x1007774d */
L_100776E0:
    /* cmp MEM32(eax), 0 */ /* 0x100776E0: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100776FD; /* 0x100776E3: jne 0x100776fd */
L_100776E5:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100776E5: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFEF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFEF0u; /* 0x100776E8: add eax, 0xfffffef0 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100776ED: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x100776F0: push edi */
    PUSH32(esp, eax); /* 0x100776F1: push eax */
    RECOMP_CALL(sub_100769E4); /* 0x100776F2: call 0x100769e4 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100776F7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007771C; /* 0x100776F9: je 0x1007771c */
L_100776FB:
    goto L_10077748; /* 0x100776FB: jmp 0x10077748 */
L_100776FD:
    /* test MEM8(ebp + 0x14), 1 */ /* 0x100776FD: test byte ptr [ebp + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007771C; /* 0x10077701: je 0x1007771c */
L_10077703:
    ecx = eax + (-0xC4); /* 0x10077703: lea ecx, [eax - 0xc4] */
    eax = MEM32(ecx + 0x4); /* 0x10077709: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, MEM32(ecx) */ /* 0x1007770C: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007771C; /* 0x1007770E: jle 0x1007771c */
L_10077710:
    PUSH32(esp, ecx); /* 0x10077710: push ecx */
    RECOMP_CALL(sub_100760B7); /* 0x10077711: call 0x100760b7 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10077716: mov ecx, eax */
    /* test ecx, ecx */ /* 0x10077718: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007772A; /* 0x1007771A: jne 0x1007772a */
L_1007771C:
    ecx = MEM32(ebx + 0x4); /* 0x1007771C: mov ecx, dword ptr [ebx + 4] */
L_1007771F:
    RECOMP_CALL(sub_10074D44); /* 0x1007771F: call 0x10074d44 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10077724: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007774D; /* 0x10077726: je 0x1007774d */
L_10077728:
    RECOMP_BACKEDGE();
    goto L_100776E0; /* 0x10077728: jmp 0x100776e0 */
L_1007772A:
    eax = MEM32(ecx + 0x1C); /* 0x1007772A: mov eax, dword ptr [ecx + 0x1c] */
    esi = esp + 0x2C; /* 0x1007772D: lea esi, [esp + 0x2c] */
    MEM32(esp + 0x2C) = 1; /* 0x10077731: mov dword ptr [esp + 0x2c], 1 */
    MEM32(esp + 0x30) = eax; /* 0x10077739: mov dword ptr [esp + 0x30], eax */
    MEM32(esp + 0x34) = ecx; /* 0x1007773D: mov dword ptr [esp + 0x34], ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10077741: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10077742: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x10077743: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(esp + 0x1C); /* 0x10077744: mov edi, dword ptr [esp + 0x1c] */
L_10077748:
    MEM8(esp + 0xF) = (uint8_t)(1); /* 0x10077748: mov byte ptr [esp + 0xf], 1 */
L_1007774D:
    eax = MEM32(ebx); /* 0x1007774D: mov eax, dword ptr [ebx] */
    MEM8(eax + 0x62) = (uint8_t)(1); /* 0x1007774F: mov byte ptr [eax + 0x62], 1 */
L_10077753:
    /* cmp MEM8(esp + 0xF), 0 */ /* 0x10077753: cmp byte ptr [esp + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = MEM32(ebx); /* 0x10077758: mov ecx, dword ptr [ebx] */
    eax = MEM32(ecx + 0x54); /* 0x1007775A: mov eax, dword ptr [ecx + 0x54] */
    MEM32(esp + 0x18) = eax; /* 0x1007775D: mov dword ptr [esp + 0x18], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100778E7; /* 0x10077761: jne 0x100778e7 */
L_10077767:
    _flag_a = (uint32_t)(MEM32(esp + 0x3C)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x3C) = MEM32(esp + 0x3C) & 0; /* 0x10077767: and dword ptr [esp + 0x3c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ecx + 0x60), 0 */ /* 0x1007776C: cmp byte ptr [ecx + 0x60], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x60)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(esp + 0x38) = 1; /* 0x10077770: mov dword ptr [esp + 0x38], 1 */
    MEM32(esp + 0x40) = 2; /* 0x10077778: mov dword ptr [esp + 0x40], 2 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10077795; /* 0x10077780: jne 0x10077795 */
L_10077782:
    RECOMP_CALL(sub_1007ABE5); /* 0x10077782: call 0x1007abe5 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10077787: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077795; /* 0x10077789: jne 0x10077795 */
L_1007778B:
    /* cmp MEM8(ebp + 0x10), LO8(eax) */ /* 0x1007778B: cmp byte ptr [ebp + 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10077795; /* 0x1007778E: jne 0x10077795 */
L_10077790:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10077790: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10077792: inc esi */
    _flag_k = FK_INC;
    goto L_10077797; /* 0x10077793: jmp 0x10077797 */
L_10077795:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10077795: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10077797:
    SET_LO8(eax, MEM8(esp + 0xF)); /* 0x10077797: mov al, byte ptr [esp + 0xf] */
    MEM8(esp + 0x20) = (uint8_t)(1); /* 0x1007779B: mov byte ptr [esp + 0x20], 1 */
L_100777A0:
    /* cmp esi, 2 */ /* 0x100777A0: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100778E3; /* 0x100777A3: jg 0x100778e3 */
L_100777A9:
    ecx = MEM32(esp + 0x18); /* 0x100777A9: mov ecx, dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x28); /* 0x100777AD: mov edx, dword ptr [esp + 0x28] */
    MEM32(esp + 0x14) = edx; /* 0x100777B1: mov dword ptr [esp + 0x14], edx */
    MEM32(esp + 0x10) = ecx; /* 0x100777B5: mov dword ptr [esp + 0x10], ecx */
    /* test ecx, ecx */ /* 0x100777B9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100778DA; /* 0x100777BB: je 0x100778da */
L_100777C1:
    eax = MEM32(ebp + 0x14); /* 0x100777C1: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    eax = eax & 0x14u; /* 0x100777C4: and eax, 0x14 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x24) = eax; /* 0x100777C7: mov dword ptr [esp + 0x24], eax */
L_100777CB:
    /* test eax, eax */ /* 0x100777CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100777FF; /* 0x100777CD: je 0x100777ff */
L_100777CF:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100777CF: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x14); /* 0x100777D2: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100777D5: push dword ptr [ebp + 0x14] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x100777D8: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x100777D8: shr eax, 2 */
    PUSH32(esp, MEM32(esp + esi * 4 + 0x40)); /* 0x100777DB: push dword ptr [esp + esi*4 + 0x40] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x100777DF: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x100777E1: movzx eax, al */
    PUSH32(esp, eax); /* 0x100777E4: push eax */
    PUSH32(esp, edx); /* 0x100777E5: push edx */
    PUSH32(esp, ecx); /* 0x100777E6: push ecx */
    PUSH32(esp, edi); /* 0x100777E7: push edi */
    ecx = ebx; /* 0x100777E8: mov ecx, ebx */
    RECOMP_CALL(sub_1007724C); /* 0x100777EA: call 0x1007724c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100777EF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100778CE; /* 0x100777F1: jne 0x100778ce */
L_100777F7:
    ecx = MEM32(esp + 0x10); /* 0x100777F7: mov ecx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x14); /* 0x100777FB: mov edx, dword ptr [esp + 0x14] */
L_100777FF:
    /* test MEM8(ebp + 0x14), 0xAu */ /* 0x100777FF: test byte ptr [ebp + 0x14], 0xa */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007782C; /* 0x10077803: je 0x1007782c */
L_10077805:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10077805: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x14); /* 0x10077808: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1007780B: push dword ptr [ebp + 0x14] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1007780E: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1007780E: shr eax, 1 */
    PUSH32(esp, MEM32(esp + esi * 4 + 0x40)); /* 0x10077810: push dword ptr [esp + esi*4 + 0x40] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x10077814: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x10077816: movzx eax, al */
    PUSH32(esp, eax); /* 0x10077819: push eax */
    PUSH32(esp, edx); /* 0x1007781A: push edx */
    PUSH32(esp, ecx); /* 0x1007781B: push ecx */
    PUSH32(esp, edi); /* 0x1007781C: push edi */
    ecx = ebx; /* 0x1007781D: mov ecx, ebx */
    RECOMP_CALL(sub_10077152); /* 0x1007781F: call 0x10077152 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10077824: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100778CE; /* 0x10077826: jne 0x100778ce */
L_1007782C:
    eax = MEM32(ebp + 0x14); /* 0x1007782C: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1007782F: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x1C) = eax; /* 0x10077832: mov dword ptr [esp + 0x1c], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007785F; /* 0x10077836: je 0x1007785f */
L_10077838:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10077838: push dword ptr [ebp + 0x10] */
    eax = MEM32(esp + 0x18); /* 0x1007783B: mov eax, dword ptr [esp + 0x18] */
    ecx = ebx; /* 0x1007783F: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10077841: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(esp + esi * 4 + 0x40)); /* 0x10077844: push dword ptr [esp + esi*4 + 0x40] */
    PUSH32(esp, MEM32(esp + 0x2C)); /* 0x10077848: push dword ptr [esp + 0x2c] */
    PUSH32(esp, eax); /* 0x1007784C: push eax */
    PUSH32(esp, MEM32(esp + 0x24)); /* 0x1007784D: push dword ptr [esp + 0x24] */
    PUSH32(esp, edi); /* 0x10077851: push edi */
    RECOMP_CALL(sub_10077036); /* 0x10077852: call 0x10077036 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10077857: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100778CE; /* 0x10077859: jne 0x100778ce */
L_1007785B:
    eax = MEM32(esp + 0x1C); /* 0x1007785B: mov eax, dword ptr [esp + 0x1c] */
L_1007785F:
    /* test eax, eax */ /* 0x1007785F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077881; /* 0x10077861: je 0x10077881 */
L_10077863:
    /* cmp esi, 2 */ /* 0x10077863: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10077881; /* 0x10077866: jne 0x10077881 */
L_10077868:
    eax = MEM32(esp + 0x10); /* 0x10077868: mov eax, dword ptr [esp + 0x10] */
    ecx = ebx; /* 0x1007786C: mov ecx, ebx */
    PUSH32(esp, MEM32(ebx)); /* 0x1007786E: push dword ptr [ebx] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x10077870: push dword ptr [eax + 4] */
    PUSH32(esp, edi); /* 0x10077873: push edi */
    RECOMP_CALL(sub_100766D2); /* 0x10077874: call 0x100766d2 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10077879: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100778CE; /* 0x1007787B: jne 0x100778ce */
L_1007787D:
    eax = MEM32(esp + 0x1C); /* 0x1007787D: mov eax, dword ptr [esp + 0x1c] */
L_10077881:
    /* cmp MEM8(esp + 0x20), 0 */ /* 0x10077881: cmp byte ptr [esp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x20)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007789C; /* 0x10077886: je 0x1007789c */
L_10077888:
    /* test eax, eax */ /* 0x10077888: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007789C; /* 0x1007788A: je 0x1007789c */
L_1007788C:
    PUSH32(esp, 1); /* 0x1007788C: push 1 */
    PUSH32(esp, MEM32(ebx)); /* 0x1007788E: push dword ptr [ebx] */
    ecx = ebx; /* 0x10077890: mov ecx, ebx */
    PUSH32(esp, edi); /* 0x10077892: push edi */
    RECOMP_CALL(sub_100767DE); /* 0x10077893: call 0x100767de */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10077898: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100778CE; /* 0x1007789A: jne 0x100778ce */
L_1007789C:
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x1007789C: push dword ptr [esp + 0x10] */
    ecx = MEM32(ebx + 0x4); /* 0x100778A0: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100778A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x100778A5: push dword ptr [esp + 0x1c] */
    MEM8(esp + 0x28) = (uint8_t)(0); /* 0x100778A9: mov byte ptr [esp + 0x28], 0 */
    MEM32(esp + 0x1C) = eax; /* 0x100778AE: mov dword ptr [esp + 0x1c], eax */
    RECOMP_CALL(sub_100735C1); /* 0x100778B2: call 0x100735c1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100778B7: mov ecx, eax */
    MEM32(esp + 0x10) = ecx; /* 0x100778B9: mov dword ptr [esp + 0x10], ecx */
    /* test ecx, ecx */ /* 0x100778BD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100778D6; /* 0x100778BF: je 0x100778d6 */
L_100778C1:
    edx = MEM32(esp + 0x14); /* 0x100778C1: mov edx, dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x24); /* 0x100778C5: mov eax, dword ptr [esp + 0x24] */
    RECOMP_BACKEDGE();
    goto L_100777CB; /* 0x100778C9: jmp 0x100777cb */
L_100778CE:
    SET_LO8(eax, 1); /* 0x100778CE: mov al, 1 */
    MEM8(esp + 0xF) = (uint8_t)(LO8(eax)); /* 0x100778D0: mov byte ptr [esp + 0xf], al */
    goto L_100778DA; /* 0x100778D4: jmp 0x100778da */
L_100778D6:
    SET_LO8(eax, MEM8(esp + 0xF)); /* 0x100778D6: mov al, byte ptr [esp + 0xf] */
L_100778DA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100778DA: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x100778DB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100777A0; /* 0x100778DD: je 0x100777a0 */
L_100778E3:
    /* test LO8(eax), LO8(eax) */ /* 0x100778E3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077938; /* 0x100778E5: je 0x10077938 */
L_100778E7:
    ecx = MEM32(edi + 0x4); /* 0x100778E7: mov ecx, dword ptr [edi + 4] */
    edx = MEM32(ebx + 0x10); /* 0x100778EA: mov edx, dword ptr [ebx + 0x10] */
    eax = edx; /* 0x100778ED: mov eax, edx */
    esi = MEM32(ebx + 0x14); /* 0x100778EF: mov esi, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x108));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x108); /* 0x100778F2: sub eax, dword ptr [ecx + 0x108] */
    _flag_k = FK_CMP;
    /* cmp eax, 0x64u */ /* 0x100778F8: cmp eax, 0x64 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10077909; /* 0x100778FB: jbe 0x10077909 */
L_100778FD:
    MEM32(ecx + 0x108) = edx; /* 0x100778FD: mov dword ptr [ecx + 0x108], edx */
    MEM32(ecx + 0x10C) = esi; /* 0x10077903: mov dword ptr [ecx + 0x10c], esi */
L_10077909:
    eax = MEM32(esp + 0x18); /* 0x10077909: mov eax, dword ptr [esp + 0x18] */
    /* cmp MEM32(ecx + 0x8), eax */ /* 0x1007790D: cmp dword ptr [ecx + 8], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebx); /* 0x10077910: mov ecx, dword ptr [ebx] */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10077912: sete al */
    eax = (uint32_t)LO8(eax); /* 0x10077915: movzx eax, al */
    PUSH32(esp, eax); /* 0x10077918: push eax */
    eax = MEM32(edi + 0x4); /* 0x10077919: mov eax, dword ptr [edi + 4] */
    edx = MEM32(eax + 0xC); /* 0x1007791C: mov edx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x0FFFFFFFu);
    edx = edx & 0x0FFFFFFFu; /* 0x1007791F: and edx, 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x10077925: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = LO8(edx), _sb = LO8(edx), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10077927: sbb dl, dl */
      SET_LO8(edx, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(edx, LO8(edx) + 1); /* 0x10077929: inc dl */
    _flag_k = FK_NARROW(FK_INC, 24);
    edx = (uint32_t)LO8(edx); /* 0x1007792B: movzx edx, dl */
    PUSH32(esp, edx); /* 0x1007792E: push edx */
    RECOMP_CALL(sub_1007AB9A); /* 0x1007792F: call 0x1007ab9a */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(esp + 0xF)); /* 0x10077934: mov al, byte ptr [esp + 0xf] */
L_10077938:
    ecx = MEM32(esp + 0x44); /* 0x10077938: mov ecx, dword ptr [esp + 0x44] */
    edi = POP32_VAL(esp); /* 0x1007793C: pop edi */
    esi = POP32_VAL(esp); /* 0x1007793D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007793E: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x1007793F: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x10077941: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10077946: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10077948: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10077949: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1007794C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007794Cu);

L_1007794C:
    PUSH32(esp, ebx); /* 0x1007794C: push ebx */
    PUSH32(esp, esi); /* 0x1007794D: push esi */
    esi = ecx; /* 0x1007794E: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10077950: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10077952: push edi */
    edi = MEM32(esi + 0x4); /* 0x10077953: mov edi, dword ptr [esi + 4] */
    edx = MEM32(esi + 0x8); /* 0x10077956: mov edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10077959: dec edi */
    _flag_k = FK_DEC;
    eax = MEM32(esi + 0xC); /* 0x1007795A: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    edx = edx & edi; /* 0x1007795D: and edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edi; /* 0x1007795F: mov dword ptr [esi + 4], edi */
    eax = eax + edx * 4; /* 0x10077962: lea eax, [eax + edx*4] */
    { uint32_t _tmp = MEM32(eax); /* 0x10077965: xchg dword ptr [eax], ebx */
      MEM32(eax) = ebx;
      ebx = _tmp; }
    /* test ebx, ebx */ /* 0x10077967: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077971; /* 0x10077969: jne 0x10077971 */
L_1007796B:
    eax = edi + 0x1; /* 0x1007796B: lea eax, [edi + 1] */
    MEM32(esi + 0x4) = eax; /* 0x1007796E: mov dword ptr [esi + 4], eax */
L_10077971:
    /* test LO8(ebx), 1 */ /* 0x10077971: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077993; /* 0x10077974: je 0x10077993 */
L_10077976:
    eax = MEM32(esi + 0x10); /* 0x10077976: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x10077979: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1007797C: push ecx */
    ecx = MEM32(esi + 0x8); /* 0x1007797D: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x10077980: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax + ecx * 8; /* 0x10077982: lea ecx, [eax + ecx*8] */
    RECOMP_CALL(sub_10076265); /* 0x10077985: call 0x10076265 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007798A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077993; /* 0x1007798C: jne 0x10077993 */
L_1007798E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007798E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10077990: inc eax */
    _flag_k = FK_INC;
    goto L_10077995; /* 0x10077991: jmp 0x10077995 */
L_10077993:
    eax = ebx; /* 0x10077993: mov eax, ebx */
L_10077995:
    edi = POP32_VAL(esp); /* 0x10077995: pop edi */
    esi = POP32_VAL(esp); /* 0x10077996: pop esi */
    ebx = POP32_VAL(esp); /* 0x10077997: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10077998: ret  */
    RECOMP_REGS_OUT();
}

void sub_10077999(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077999u);

L_10077999:
    PUSH32(esp, ebp); /* 0x10077999: push ebp */
    ebp = esp; /* 0x1007799A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1007799C: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x8), 0x7FFFFFFFu */ /* 0x1007799F: cmp dword ptr [ebp + 8], 0x7fffffff */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100779BB; /* 0x100779A6: ja 0x100779bb */
L_100779A8:
    RECOMP_CALL(sub_10014872); /* 0x100779A8: call 0x10014872 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100779AD: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x100779B0: mov ecx, eax */
    edx = MEM32(eax); /* 0x100779B2: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x28)); /* 0x100779B4: call dword ptr [edx + 0x28] */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100779B7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100779B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100779BA: ret  */
L_100779BB:
    PUSH32(esp, 1); /* 0x100779BB: push 1 */
    eax = ebp + 0x8; /* 0x100779BD: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x1002C7ECu; /* 0x100779C0: mov dword ptr [ebp + 8], 0x1002c7ec */
    PUSH32(esp, eax); /* 0x100779C7: push eax */
    ecx = ebp + (-0xC); /* 0x100779C8: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10033A4A); /* 0x100779CB: call 0x10033a4a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1002C7FCu); /* 0x100779D0: push 0x1002c7fc */
    eax = ebp + (-0xC); /* 0x100779D5: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x1002D1CCu; /* 0x100779D8: mov dword ptr [ebp - 0xc], 0x1002d1cc */
    PUSH32(esp, eax); /* 0x100779DF: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x100779E0: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100779E5u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100779E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100779E6u);

L_100779E6:
    PUSH32(esp, ebp); /* 0x100779E6: push ebp */
    ebp = esp; /* 0x100779E7: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x100779E9: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100779FE; /* 0x100779ED: je 0x100779fe */
L_100779EF:
    RECOMP_CALL(sub_10014872); /* 0x100779EF: call 0x10014872 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100779F4: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x100779F7: mov ecx, eax */
    edx = MEM32(eax); /* 0x100779F9: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x100779FB: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
L_100779FE:
    ebp = POP32_VAL(esp); /* 0x100779FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100779FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_10077A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077A00u);

L_10077A00:
    edx = ecx + 0x7; /* 0x10077A00: lea edx, [ecx + 7] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    edx = edx & 0xFFFFFFF8u; /* 0x10077A03: and edx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x1000u */ /* 0x10077A06: cmp edx, 0x1000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10077A12; /* 0x10077A0C: jbe 0x10077a12 */
L_10077A0E:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10077A0E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10077A11: ret  */
L_10077A12:
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x10077A12: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x10077A12: shr edx, 3 */
    /* cmp edx, 0x20u */ /* 0x10077A15: cmp edx, 0x20 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10077A1E; /* 0x10077A18: jg 0x10077a1e */
L_10077A1A:
    eax = edx + (-0x1); /* 0x10077A1A: lea eax, [edx - 1] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10077A1D: ret  */
L_10077A1E:
    PUSH32(esp, 5); /* 0x10077A1E: push 5 */
    ecx = POP32_VAL(esp); /* 0x10077A20: pop ecx */
    /* test edx, 0xFFFFFFE0u */ /* 0x10077A21: test edx, 0xffffffe0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10077A32; /* 0x10077A27: jle 0x10077a32 */
L_10077A29:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10077A29: inc ecx */
    _flag_k = FK_INC;
    eax = edx; /* 0x10077A2A: mov eax, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((eax) >> 31) & 1u)); /* 0x10077A2C: sar eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> ((LO8(ecx)) & 31));
    /* test eax, eax */ /* 0x10077A2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10077A29; /* 0x10077A30: jg 0x10077a29 */
L_10077A32:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10077A32: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 5; /* 0x10077A34: sub ecx, 5 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10077A37: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10077A38: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10077A38: shl eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10077A3A: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x10077A3B: add edx, eax */
    _flag_k = FK_ADD;
    eax = ~eax; /* 0x10077A3D: not eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x10077A3F: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edx) >> 31) & 1u)); /* 0x10077A41: sar edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31));
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x10077A43: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x10077A43: shl ecx, 4 */
    eax = ecx + (-0x1); /* 0x10077A46: lea eax, [ecx - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x10077A49: add eax, edx */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10077A4B: ret  */
    RECOMP_REGS_OUT();
}

void sub_10077A4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077A4Cu);

L_10077A4C:
    PUSH32(esp, ebp); /* 0x10077A4C: push ebp */
    ebp = esp; /* 0x10077A4D: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10077A4F: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10077A50: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10077A53: push esi */
    PUSH32(esp, edi); /* 0x10077A54: push edi */
    edi = ecx; /* 0x10077A55: mov edi, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x10077A57: add ebx, 4 */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x10077A5A: mov ecx, ebx */
    RECOMP_CALL(sub_10077A00); /* 0x10077A5C: call 0x10077a00 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10077A61: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x10077A63: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10077A89; /* 0x10077A66: je 0x10077a89 */
L_10077A68:
    edx = MEM32(edi + esi * 8 + 0x8); /* 0x10077A68: mov edx, dword ptr [edi + esi*8 + 8] */
    _flag_a = (uint32_t)((edx ^ MEM32(0x100E0330))); _flag_b = (uint32_t)((edx ^ MEM32(0x100E0330)));
    edx = edx ^ MEM32(0x100E0330); /* 0x10077A6C: xor edx, dword ptr [0x100e0330] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077A7E; /* 0x10077A72: je 0x10077a7e */
L_10077A74:
    eax = MEM32(edx); /* 0x10077A74: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(MEM32(edi + esi * 8 + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edi + esi * 8 + 0x4) = MEM32(edi + esi * 8 + 0x4) - 1; /* 0x10077A76: dec dword ptr [edi + esi*8 + 4] */
    _flag_k = FK_DEC;
    MEM32(edi + esi * 8 + 0x8) = eax; /* 0x10077A7A: mov dword ptr [edi + esi*8 + 8], eax */
L_10077A7E:
    /* test edx, edx */ /* 0x10077A7E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077A92; /* 0x10077A80: jne 0x10077a92 */
L_10077A82:
    ebx = MEM32(esi * 4 + 0x10067A78); /* 0x10077A82: mov ebx, dword ptr [esi*4 + 0x10067a78] */
L_10077A89:
    PUSH32(esp, ebx); /* 0x10077A89: push ebx */
    RECOMP_CALL(sub_10011683); /* 0x10077A8A: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10077A8F: pop ecx */
    edx = eax; /* 0x10077A90: mov edx, eax */
L_10077A92:
    ecx = MEM32(0x100E0330); /* 0x10077A92: mov ecx, dword ptr [0x100e0330] */
    eax = edx + 0x4; /* 0x10077A98: lea eax, [edx + 4] */
    edi = POP32_VAL(esp); /* 0x10077A9B: pop edi */
    _flag_a = (uint32_t)((ecx ^ esi)); _flag_b = (uint32_t)((ecx ^ esi));
    ecx = ecx ^ esi; /* 0x10077A9C: xor ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10077A9E: pop esi */
    MEM32(edx) = ecx; /* 0x10077A9F: mov dword ptr [edx], ecx */
    ebx = POP32_VAL(esp); /* 0x10077AA1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10077AA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10077AA3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10077AA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077AA6u);

L_10077AA6:
    PUSH32(esp, ebp); /* 0x10077AA6: push ebp */
    ebp = esp; /* 0x10077AA7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10077AA9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10077AAA: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFCu; /* 0x10077AAD: add esi, -4 */
    _flag_k = FK_ADD;
    edx = MEM32(esi); /* 0x10077AB0: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)((edx ^ MEM32(0x100E0330))); _flag_b = (uint32_t)((edx ^ MEM32(0x100E0330)));
    edx = edx ^ MEM32(0x100E0330); /* 0x10077AB2: xor edx, dword ptr [0x100e0330] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0xFFFFFFFFu */ /* 0x10077AB8: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10077ADB; /* 0x10077ABB: je 0x10077adb */
L_10077ABD:
    /* cmp MEM32(ecx + edx * 8 + 0x4), 0x20u */ /* 0x10077ABD: cmp dword ptr [ecx + edx*8 + 4], 0x20 */
    _flag_a = (uint32_t)(MEM32(ecx + edx * 8 + 0x4)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10077ADB; /* 0x10077AC2: jge 0x10077adb */
L_10077AC4:
    eax = MEM32(ecx + edx * 8 + 0x8); /* 0x10077AC4: mov eax, dword ptr [ecx + edx*8 + 8] */
    MEM32(esi) = eax; /* 0x10077AC8: mov dword ptr [esi], eax */
    eax = MEM32(0x100E0330); /* 0x10077ACA: mov eax, dword ptr [0x100e0330] */
    _flag_a = (uint32_t)((eax ^ esi)); _flag_b = (uint32_t)((eax ^ esi));
    eax = eax ^ esi; /* 0x10077ACF: xor eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + edx * 8 + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + edx * 8 + 0x4) = MEM32(ecx + edx * 8 + 0x4) + 1; /* 0x10077AD1: inc dword ptr [ecx + edx*8 + 4] */
    _flag_k = FK_INC;
    MEM32(ecx + edx * 8 + 0x8) = eax; /* 0x10077AD5: mov dword ptr [ecx + edx*8 + 8], eax */
    goto L_10077AE2; /* 0x10077AD9: jmp 0x10077ae2 */
L_10077ADB:
    PUSH32(esp, esi); /* 0x10077ADB: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10077ADC: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10077AE1: pop ecx */
L_10077AE2:
    esi = POP32_VAL(esp); /* 0x10077AE2: pop esi */
    ebp = POP32_VAL(esp); /* 0x10077AE3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10077AE4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10077AE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077AE7u);

L_10077AE7:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x10077AE7: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x100E0330); /* 0x10077AEA: mov eax, dword ptr [0x100e0330] */
    MEM32(ecx + 0x4) = eax; /* 0x10077AEF: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x10077AF2: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10077AF4: ret  */
    RECOMP_REGS_OUT();
}

void sub_10077AF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077AF5u);

L_10077AF5:
    PUSH32(esp, esi); /* 0x10077AF5: push esi */
    esi = ecx; /* 0x10077AF6: mov esi, ecx */
    /* cmp MEM32(esi), 0 */ /* 0x10077AF8: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10077B16; /* 0x10077AFB: je 0x10077b16 */
L_10077AFD:
    edx = MEM32(esi + 0x4); /* 0x10077AFD: mov edx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((edx ^ MEM32(0x100E0330))); _flag_b = (uint32_t)((edx ^ MEM32(0x100E0330)));
    edx = edx ^ MEM32(0x100E0330); /* 0x10077B00: xor edx, dword ptr [0x100e0330] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x10077B06: push edx */
    eax = MEM32(edx); /* 0x10077B07: mov eax, dword ptr [edx] */
    MEM32(esi + 0x4) = eax; /* 0x10077B09: mov dword ptr [esi + 4], eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10077B0C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x10077B11: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    ecx = POP32_VAL(esp); /* 0x10077B13: pop ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10077AFD; /* 0x10077B14: jne 0x10077afd */
L_10077B16:
    esi = POP32_VAL(esp); /* 0x10077B16: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10077B17: ret  */
    RECOMP_REGS_OUT();
}

void sub_10077B27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077B27u);

L_10077B27:
    PUSH32(esp, ebp); /* 0x10077B27: push ebp */
    ebp = esp; /* 0x10077B28: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x10077B2A: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x10077B2E: push esi */
    esi = ecx; /* 0x10077B2F: mov esi, ecx */
    MEM32(esi) = 0x10067C18u; /* 0x10077B31: mov dword ptr [esi], 0x10067c18 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077B40; /* 0x10077B37: je 0x10077b40 */
L_10077B39:
    PUSH32(esp, esi); /* 0x10077B39: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10077B3A: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10077B3F: pop ecx */
L_10077B40:
    eax = esi; /* 0x10077B40: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10077B42: pop esi */
    ebp = POP32_VAL(esp); /* 0x10077B43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10077B44: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10077B47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077B47u);

L_10077B47:
    PUSH32(esp, ebp); /* 0x10077B47: push ebp */
    ebp = esp; /* 0x10077B48: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10077B4A: push ecx */
    PUSH32(esp, esi); /* 0x10077B4B: push esi */
    PUSH32(esp, edi); /* 0x10077B4C: push edi */
    edi = ecx + 0x80; /* 0x10077B4D: lea edi, [ecx + 0x80] */
    edx = MEM32(edi); /* 0x10077B53: mov edx, dword ptr [edi] */
    ecx = ebp + 0x8; /* 0x10077B55: lea ecx, [ebp + 8] */
    RECOMP_CALL(sub_1002614A); /* 0x10077B58: call 0x1002614a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10077B5D: push eax */
    eax = ebp + 0x8; /* 0x10077B5E: lea eax, [ebp + 8] */
    ecx = edi; /* 0x10077B61: mov ecx, edi */
    PUSH32(esp, eax); /* 0x10077B63: push eax */
    RECOMP_CALL(sub_10024F4D); /* 0x10077B64: call 0x10024f4d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10077B69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077B72; /* 0x10077B6B: je 0x10077b72 */
L_10077B6D:
    esi = MEM32(eax + 0x8); /* 0x10077B6D: mov esi, dword ptr [eax + 8] */
    goto L_10077B74; /* 0x10077B70: jmp 0x10077b74 */
L_10077B72:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10077B72: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10077B74:
    /* test esi, esi */ /* 0x10077B74: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077B9D; /* 0x10077B76: je 0x10077b9d */
L_10077B78:
    eax = MEM32(esi + 0x78); /* 0x10077B78: mov eax, dword ptr [esi + 0x78] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x10077B7B: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x10077B7B: shr eax, 1 */
    /* test LO8(eax), 1 */ /* 0x10077B7D: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077B9D; /* 0x10077B7F: je 0x10077b9d */
L_10077B81:
    eax = MEM32(esi + 0x64); /* 0x10077B81: mov eax, dword ptr [esi + 0x64] */
    ecx = edi; /* 0x10077B84: mov ecx, edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x10077B86: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x4); /* 0x10077B89: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10077B8C: push eax */
    RECOMP_CALL(sub_1006A69C); /* 0x10077B8D: call 0x1006a69c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x10077B92: push 1 */
    ecx = esi; /* 0x10077B94: mov ecx, esi */
    RECOMP_CALL(sub_10069B0C); /* 0x10077B96: call 0x10069b0c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10077B9B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10077B9D:
    edi = POP32_VAL(esp); /* 0x10077B9D: pop edi */
    eax = esi; /* 0x10077B9E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10077BA0: pop esi */
    esp = ebp; /* 0x10077BA1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10077BA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10077BA4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10077BA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077BA7u);

L_10077BA7:
    PUSH32(esp, ebp); /* 0x10077BA7: push ebp */
    ebp = esp; /* 0x10077BA8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10077BAA: push ecx */
    PUSH32(esp, ecx); /* 0x10077BAB: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10077BAC: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x10077BB0: lea eax, [ebp - 4] */
    PUSH32(esp, esi); /* 0x10077BB3: push esi */
    PUSH32(esp, edi); /* 0x10077BB4: push edi */
    edi = ecx + 0x80; /* 0x10077BB5: lea edi, [ecx + 0x80] */
    PUSH32(esp, eax); /* 0x10077BBB: push eax */
    ecx = edi; /* 0x10077BBC: mov ecx, edi */
    RECOMP_CALL(sub_1006AD09); /* 0x10077BBE: call 0x1006ad09 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10077BC3: mov esi, eax */
    /* test esi, esi */ /* 0x10077BC5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077C11; /* 0x10077BC7: je 0x10077c11 */
L_10077BC9:
    PUSH32(esp, ebx); /* 0x10077BC9: push ebx */
L_10077BCA:
    ebx = MEM32(esi); /* 0x10077BCA: mov ebx, dword ptr [esi] */
    /* test ebx, ebx */ /* 0x10077BCC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077BE0; /* 0x10077BCE: jne 0x10077be0 */
L_10077BD0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x10077BD0: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = ebp + (-0x4); /* 0x10077BD3: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10077BD6: push eax */
    ecx = edi; /* 0x10077BD7: mov ecx, edi */
    RECOMP_CALL(sub_1006AD09); /* 0x10077BD9: call 0x1006ad09 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10077BDE: mov ebx, eax */
L_10077BE0:
    ecx = MEM32(esi + 0x8); /* 0x10077BE0: mov ecx, dword ptr [esi + 8] */
    ecx = MEM32(ecx + 0x78); /* 0x10077BE3: mov ecx, dword ptr [ecx + 0x78] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x10077BE6: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x10077BE6: shr ecx, 1 */
    /* test LO8(ecx), 1 */ /* 0x10077BE8: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077C0A; /* 0x10077BEB: je 0x10077c0a */
L_10077BED:
    esi = MEM32(esi + 0x8); /* 0x10077BED: mov esi, dword ptr [esi + 8] */
    ecx = edi; /* 0x10077BF0: mov ecx, edi */
    eax = MEM32(esi + 0x64); /* 0x10077BF2: mov eax, dword ptr [esi + 0x64] */
    MEM32(ebp + (-0x8)) = eax; /* 0x10077BF5: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x8); /* 0x10077BF8: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10077BFB: push eax */
    RECOMP_CALL(sub_1006A69C); /* 0x10077BFC: call 0x1006a69c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x10077C01: push 1 */
    ecx = esi; /* 0x10077C03: mov ecx, esi */
    RECOMP_CALL(sub_10069B0C); /* 0x10077C05: call 0x10069b0c */
    RECOMP_FLAGS_IN();
L_10077C0A:
    esi = ebx; /* 0x10077C0A: mov esi, ebx */
    /* test ebx, ebx */ /* 0x10077C0C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077BCA; /* 0x10077C0E: jne 0x10077bca */
L_10077C10:
    ebx = POP32_VAL(esp); /* 0x10077C10: pop ebx */
L_10077C11:
    edx = MEM32(edi); /* 0x10077C11: mov edx, dword ptr [edi] */
    ecx = ebp + 0x8; /* 0x10077C13: lea ecx, [ebp + 8] */
    RECOMP_CALL(sub_1002614A); /* 0x10077C16: call 0x1002614a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10077C1B: mov esi, eax */
    ecx = edi; /* 0x10077C1D: mov ecx, edi */
    PUSH32(esp, esi); /* 0x10077C1F: push esi */
    eax = ebp + 0x8; /* 0x10077C20: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10077C23: push eax */
    RECOMP_CALL(sub_10024F4D); /* 0x10077C24: call 0x10024f4d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10077C29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077C5F; /* 0x10077C2B: jne 0x10077c5f */
L_10077C2D:
    PUSH32(esp, 0xCu); /* 0x10077C2D: push 0xc */
    RECOMP_CALL(sub_1000EE11); /* 0x10077C2F: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x10077C34: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x10077C36: pop ecx */
    /* test edx, edx */ /* 0x10077C37: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077C4C; /* 0x10077C39: je 0x10077c4c */
L_10077C3B:
    ecx = MEM32(ebp + 0x8); /* 0x10077C3B: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x10077C3E: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x4) = ecx; /* 0x10077C41: mov dword ptr [edx + 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x10077C44: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(edx + 0x8) = ecx; /* 0x10077C47: mov dword ptr [edx + 8], ecx */
    goto L_10077C4E; /* 0x10077C4A: jmp 0x10077c4e */
L_10077C4C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10077C4C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10077C4E:
    eax = MEM32(edi + 0x8); /* 0x10077C4E: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + esi * 4); /* 0x10077C51: mov eax, dword ptr [eax + esi*4] */
    MEM32(edx) = eax; /* 0x10077C54: mov dword ptr [edx], eax */
    eax = MEM32(edi + 0x8); /* 0x10077C56: mov eax, dword ptr [edi + 8] */
    MEM32(eax + esi * 4) = edx; /* 0x10077C59: mov dword ptr [eax + esi*4], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) + 1; /* 0x10077C5C: inc dword ptr [edi + 4] */
    _flag_k = FK_INC;
L_10077C5F:
    edi = POP32_VAL(esp); /* 0x10077C5F: pop edi */
    esi = POP32_VAL(esp); /* 0x10077C60: pop esi */
    esp = ebp; /* 0x10077C61: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10077C63: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10077C64: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10077C67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077C67u);

L_10077C67:
    PUSH32(esp, ebp); /* 0x10077C67: push ebp */
    ebp = esp; /* 0x10077C68: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10077C6A: push ebx */
    ebx = ecx; /* 0x10077C6B: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x10077C6D: push edi */
    edi = MEM32(ebx); /* 0x10077C6E: mov edi, dword ptr [ebx] */
    /* cmp MEM32(ebx + 0x4), edi */ /* 0x10077C70: cmp dword ptr [ebx + 4], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10077CC2; /* 0x10077C73: jl 0x10077cc2 */
L_10077C75:
    /* cmp MEM32(ebx + 0x4), 0x400u */ /* 0x10077C75: cmp dword ptr [ebx + 4], 0x400 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10077C86; /* 0x10077C7C: jl 0x10077c86 */
L_10077C7E:
    MEM8(ebx + 0xC) = (uint8_t)(1); /* 0x10077C7E: mov byte ptr [ebx + 0xc], 1 */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10077C82: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_10077CD3; /* 0x10077C84: jmp 0x10077cd3 */
L_10077C86:
    PUSH32(esp, esi); /* 0x10077C86: push esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x10077C87: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10077C8A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x10077C8C: push 4 */
    edx = POP32_VAL(esp); /* 0x10077C8E: pop edx */
    eax = edi; /* 0x10077C8F: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10077C91: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10077C93: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10077C96: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10077C98: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10077C9A: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10077C9B: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x10077CA0: mov ecx, dword ptr [ebx] */
    esi = eax; /* 0x10077CA2: mov esi, eax */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x10077CA4: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x10077CA4: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x10077CA7: push ecx */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x10077CA8: push dword ptr [ebx + 8] */
    PUSH32(esp, esi); /* 0x10077CAB: push esi */
    RECOMP_CALL(sub_1000F594); /* 0x10077CAC: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x10077CB1: push dword ptr [ebx + 8] */
    MEM32(ebx) = edi; /* 0x10077CB4: mov dword ptr [ebx], edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10077CB6: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10077CBB: add esp, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x8) = esi; /* 0x10077CBE: mov dword ptr [ebx + 8], esi */
    esi = POP32_VAL(esp); /* 0x10077CC1: pop esi */
L_10077CC2:
    edx = MEM32(ebx + 0x4); /* 0x10077CC2: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx + 0x8); /* 0x10077CC5: mov ecx, dword ptr [ebx + 8] */
    eax = MEM32(ebp + 0x8); /* 0x10077CC8: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + edx * 4) = eax; /* 0x10077CCB: mov dword ptr [ecx + edx*4], eax */
    SET_LO8(eax, 1); /* 0x10077CCE: mov al, 1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + 1; /* 0x10077CD0: inc dword ptr [ebx + 4] */
    _flag_k = FK_INC;
L_10077CD3:
    edi = POP32_VAL(esp); /* 0x10077CD3: pop edi */
    ebx = POP32_VAL(esp); /* 0x10077CD4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10077CD5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10077CD6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10077CD9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077CD9u);

L_10077CD9:
    PUSH32(esp, ebp); /* 0x10077CD9: push ebp */
    ebp = esp; /* 0x10077CDA: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10077CDC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10077CDE: push esi */
    esi = ecx; /* 0x10077CDF: mov esi, ecx */
    ecx = 0x0FFFFFFFu; /* 0x10077CE1: mov ecx, 0xfffffff */
    PUSH32(esp, edi); /* 0x10077CE6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10077CE7: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | ecx)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | ecx));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | ecx; /* 0x10077CEA: or dword ptr [esi + 4], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = eax; /* 0x10077CED: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x18) = eax; /* 0x10077CF0: mov dword ptr [esi + 0x18], eax */
    MEM32(esi + 0xC) = eax; /* 0x10077CF3: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(esi + 0x4); /* 0x10077CF6: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x10077CF9: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = edi; /* 0x10077CFB: mov dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)((eax | 0x10000000u)); _flag_b = (uint32_t)((eax | 0x10000000u));
    eax = eax | 0x10000000u; /* 0x10077CFE: or eax, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 0x80000000u; /* 0x10077D03: mov dword ptr [esi + 0x14], 0x80000000 */
    MEM32(esi + 0x4) = eax; /* 0x10077D0A: mov dword ptr [esi + 4], eax */
    /* test edi, edi */ /* 0x10077D0D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10077D46; /* 0x10077D0F: je 0x10077d46 */
L_10077D11:
    RECOMP_CALL(sub_10014872); /* 0x10077D11: call 0x10014872 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x10077D16: mov dword ptr [esi + 0xc], eax */
    /* cmp edi, 2 */ /* 0x10077D19: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10077D28; /* 0x10077D1C: je 0x10077d28 */
L_10077D1E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10077D1E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x4; /* 0x10077D20: lea ecx, [edi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10077D23: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + edx; edx = _old; MEM32(ecx) = _sum; } /* 0x10077D24: lock xadd dword ptr [ecx], edx */
    _flag_k = FK_ADD;
L_10077D28:
    /* cmp MEM32(eax + 0x38), edi */ /* 0x10077D28: cmp dword ptr [eax + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10077D46; /* 0x10077D2B: je 0x10077d46 */
L_10077D2D:
    /* cmp edi, 2 */ /* 0x10077D2D: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10077D46; /* 0x10077D30: je 0x10077d46 */
L_10077D32:
    PUSH32(esp, ecx); /* 0x10077D32: push ecx */
    PUSH32(esp, esi); /* 0x10077D33: push esi */
    PUSH32(esp, 0x10077DB6u); /* 0x10077D34: push 0x10077db6 */
    ecx = edi; /* 0x10077D39: mov ecx, edi */
    RECOMP_CALL(sub_10069015); /* 0x10077D3B: call 0x10069015 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x10077D40: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = eax; /* 0x10077D43: mov dword ptr [esi + 8], eax */
L_10077D46:
    edi = POP32_VAL(esp); /* 0x10077D46: pop edi */
    eax = esi; /* 0x10077D47: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10077D49: pop esi */
    ebp = POP32_VAL(esp); /* 0x10077D4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10077D4B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10077D4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077D4Eu);

L_10077D4E:
    PUSH32(esp, ebp); /* 0x10077D4E: push ebp */
    ebp = esp; /* 0x10077D4F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10077D51: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10077D54: push esi */
    esi = ecx; /* 0x10077D55: mov esi, ecx */
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x10077D57: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10077D79; /* 0x10077D5B: jle 0x10077d79 */
L_10077D5D:
    RECOMP_CALL(sub_100781A1); /* 0x10077D5D: call 0x100781a1 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_10013576); /* 0x10077D62: call 0x10013576 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10077D67: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10077D79; /* 0x10077D69: jne 0x10077d79 */
L_10077D6B:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x10077D6B: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10077D98; /* 0x10077D6F: je 0x10077d98 */
L_10077D71:
    /* cmp MEM32(esi + 0x8), 2 */ /* 0x10077D71: cmp dword ptr [esi + 8], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10077D91; /* 0x10077D75: jne 0x10077d91 */
L_10077D77:
    goto L_10077D98; /* 0x10077D77: jmp 0x10077d98 */
L_10077D79:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x10077D79: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10077D8C; /* 0x10077D7D: je 0x10077d8c */
L_10077D7F:
    /* cmp MEM32(esi + 0x8), 2 */ /* 0x10077D7F: cmp dword ptr [esi + 8], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10077D8C; /* 0x10077D83: je 0x10077d8c */
L_10077D85:
    ecx = esi; /* 0x10077D85: mov ecx, esi */
    RECOMP_CALL(sub_1007816C); /* 0x10077D87: call 0x1007816c */
    RECOMP_FLAGS_IN();
L_10077D8C:
    esi = POP32_VAL(esp); /* 0x10077D8C: pop esi */
    esp = ebp; /* 0x10077D8D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10077D8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10077D90: ret  */
L_10077D91:
    ecx = esi; /* 0x10077D91: mov ecx, esi */
    RECOMP_CALL(sub_1007816C); /* 0x10077D93: call 0x1007816c */
    RECOMP_FLAGS_IN();
L_10077D98:
    ecx = ebp + (-0xC); /* 0x10077D98: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD55); /* 0x10077D9B: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCE94u); /* 0x10077DA0: push 0x100dce94 */
    eax = ebp + (-0xC); /* 0x10077DA5: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x10067444u; /* 0x10077DA8: mov dword ptr [ebp - 0xc], 0x10067444 */
    PUSH32(esp, eax); /* 0x10077DAF: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10077DB0: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10077DB5u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10077DB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10077DB6u);

L_10077DB6:
    PUSH32(esp, ebp); /* 0x10077DB6: push ebp */
    ebp = esp; /* 0x10077DB7: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x10077DB9: mov ecx, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x10077DBC: pop ebp */
    goto L_1007826A; /* 0x10077DBD: jmp 0x1007826a */
L_1007826A:
    PUSH32(esp, ebx); /* 0x1007826A: push ebx */
    PUSH32(esp, esi); /* 0x1007826B: push esi */
    esi = ecx; /* 0x1007826C: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1007826E: push edi */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x1007826F: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007827D; /* 0x10078273: jne 0x1007827d */
L_10078275:
    RECOMP_CALL(sub_10014872); /* 0x10078275: call 0x10014872 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x1007827A: mov dword ptr [esi + 0xc], eax */
L_1007827D:
    ebx = esi + 0x18; /* 0x1007827D: lea ebx, [esi + 0x18] */
    edx = MEM32(ebx); /* 0x10078280: mov edx, dword ptr [ebx] */
    /* test LO8(edx), 3 */ /* 0x10078282: test dl, 3 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100782D4; /* 0x10078285: jne 0x100782d4 */
L_10078287:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10078287: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10078289: inc edi */
    _flag_k = FK_INC;
L_1007828A:
    ecx = edx; /* 0x1007828A: mov ecx, edx */
    eax = edx; /* 0x1007828C: mov eax, edx */
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x1007828E: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10078290: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x10078294: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100782A0; /* 0x10078296: je 0x100782a0 */
L_10078298:
    edx = eax; /* 0x10078298: mov edx, eax */
    /* test LO8(eax), 3 */ /* 0x1007829A: test al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100782D4; /* 0x1007829C: jne 0x100782d4 */
L_1007829E:
    RECOMP_BACKEDGE();
    goto L_1007828A; /* 0x1007829E: jmp 0x1007828a */
L_100782A0:
    eax = MEM32(esi + 0x4); /* 0x100782A0: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(esi + 0xC); /* 0x100782A3: mov ecx, dword ptr [esi + 0xc] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x100782A6: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x100782A6: shl eax, 4 */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x100782A9: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* test eax, eax */ /* 0x100782AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100782BA; /* 0x100782AE: js 0x100782ba */
L_100782B0:
    PUSH32(esp, eax); /* 0x100782B0: push eax */
    RECOMP_CALL(sub_1006A2EE); /* 0x100782B1: call 0x1006a2ee */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x100782B6: push 3 */
    goto L_100782C4; /* 0x100782B8: jmp 0x100782c4 */
L_100782BA:
    eax = ecx + 0x78; /* 0x100782BA: lea eax, [ecx + 0x78] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edi; edi = _old; MEM32(eax) = _sum; } /* 0x100782BD: lock xadd dword ptr [eax], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100782C1: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, 2); /* 0x100782C2: push 2 */
L_100782C4:
    ecx = esi; /* 0x100782C4: mov ecx, esi */
    RECOMP_CALL(sub_100797CA); /* 0x100782C6: call 0x100797ca */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC); /* 0x100782CB: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, esi); /* 0x100782CE: push esi */
    RECOMP_CALL(sub_10069B8E); /* 0x100782CF: call 0x10069b8e */
    RECOMP_FLAGS_IN();
L_100782D4:
    edi = POP32_VAL(esp); /* 0x100782D4: pop edi */
    esi = POP32_VAL(esp); /* 0x100782D5: pop esi */
    ebx = POP32_VAL(esp); /* 0x100782D6: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100782D7: ret  */
    RECOMP_REGS_OUT();
}
