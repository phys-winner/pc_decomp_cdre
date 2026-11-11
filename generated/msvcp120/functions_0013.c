#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_11016924(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016924u);

L_11016924:
    PUSH32(esp, 8); /* 0x11016924: push 8 */
    eax = 0x1103D251u; /* 0x11016926: mov eax, 0x1103d251 */
    RECOMP_CALL(sub_1103B372); /* 0x1101692B: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016930: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11016932: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11016935: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11016937: mov dword ptr [ebp - 0x10], edi */
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1101693A: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016956; /* 0x1101693D: je 0x11016956 */
L_1101693F:
    MEM32(esi) = 0x11002144u; /* 0x1101693F: mov dword ptr [esi], 0x11002144 */
    MEM32(esi + 0x8) = 0x11002130u; /* 0x11016945: mov dword ptr [esi + 8], 0x11002130 */
    MEM32(ebp + (-0x4)) = edi; /* 0x1101694C: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x10)) = 1; /* 0x1101694F: mov dword ptr [ebp - 0x10], 1 */
L_11016956:
    eax = MEM32(esi); /* 0x11016956: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11016958: push edi */
    PUSH32(esp, edi); /* 0x11016959: push edi */
    eax = MEM32(eax + 0x4); /* 0x1101695A: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002140u; /* 0x1101695D: mov dword ptr [esi + eax], 0x11002140 */
    eax = MEM32(esi); /* 0x11016964: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016966: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x11016969: lea eax, [ecx - 8] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x1101696C: mov dword ptr [ecx + esi - 4], eax */
    eax = MEM32(esi); /* 0x11016970: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016972: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11016975: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11029762); /* 0x11016977: call 0x11029762 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1101697C: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1101697F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11016987; /* 0x11016981: jne 0x11016987 */
L_11016983:
    edx = edi; /* 0x11016983: mov edx, edi */
    goto L_1101698E; /* 0x11016985: jmp 0x1101698e */
L_11016987:
    eax = MEM32(ecx); /* 0x11016987: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11016989: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101698C: add edx, ecx */
    _flag_k = FK_ADD;
L_1101698E:
    eax = MEM32(esi); /* 0x1101698E: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016990: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11016993: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x11016995: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110169A5; /* 0x11016997: je 0x110169a5 */
L_11016999:
    PUSH32(esp, edx); /* 0x11016999: push edx */
    MEM32(ecx + 0x38) = edi; /* 0x1101699A: mov dword ptr [ecx + 0x38], edi */
    MEM32(ecx + 0x3C) = edi; /* 0x1101699D: mov dword ptr [ecx + 0x3c], edi */
    RECOMP_CALL(sub_1102B4F9); /* 0x110169A0: call 0x1102b4f9 */
    RECOMP_FLAGS_IN();
L_110169A5:
    eax = esi; /* 0x110169A5: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110169A7: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110169AC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_110169AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110169AFu);

L_110169AF:
    PUSH32(esp, 8); /* 0x110169AF: push 8 */
    eax = 0x1103D251u; /* 0x110169B1: mov eax, 0x1103d251 */
    RECOMP_CALL(sub_1103B372); /* 0x110169B6: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110169BB: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x110169BD: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x110169C0: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x110169C4: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110169E2; /* 0x110169C8: je 0x110169e2 */
L_110169CA:
    MEM32(esi) = 0x11002144u; /* 0x110169CA: mov dword ptr [esi], 0x11002144 */
    MEM32(esi + 0x8) = 0x11002130u; /* 0x110169D0: mov dword ptr [esi + 8], 0x11002130 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110169D7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = 1; /* 0x110169DB: mov dword ptr [ebp - 0x10], 1 */
L_110169E2:
    eax = MEM32(esi); /* 0x110169E2: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110169E4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110169E7: push dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x110169EA: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002140u; /* 0x110169ED: mov dword ptr [esi + eax], 0x11002140 */
    eax = MEM32(esi); /* 0x110169F4: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110169F6: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x110169F9: lea eax, [ecx - 8] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x110169FC: mov dword ptr [ecx + esi - 4], eax */
    eax = MEM32(esi); /* 0x11016A00: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016A02: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11016A05: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11029762); /* 0x11016A07: call 0x11029762 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11016A0C: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016A0E: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11016A13: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11016A16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016A16u);

L_11016A16:
    PUSH32(esp, 8); /* 0x11016A16: push 8 */
    eax = 0x1103D251u; /* 0x11016A18: mov eax, 0x1103d251 */
    RECOMP_CALL(sub_1103B372); /* 0x11016A1D: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016A22: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11016A24: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x11016A27: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x11016A2B: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016A49; /* 0x11016A2F: je 0x11016a49 */
L_11016A31:
    MEM32(esi) = 0x11002144u; /* 0x11016A31: mov dword ptr [esi], 0x11002144 */
    MEM32(esi + 0x8) = 0x11002130u; /* 0x11016A37: mov dword ptr [esi + 8], 0x11002130 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11016A3E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = 1; /* 0x11016A42: mov dword ptr [ebp - 0x10], 1 */
L_11016A49:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x11016A49: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi); /* 0x11016A4D: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11016A4F: mov eax, dword ptr [eax + 4] */
    MEM32(esi + eax) = 0x11002140u; /* 0x11016A52: mov dword ptr [esi + eax], 0x11002140 */
    eax = MEM32(esi); /* 0x11016A59: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11016A5B: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x11016A5E: lea eax, [ecx - 8] */
    MEM32(ecx + esi + (-0x4)) = eax; /* 0x11016A61: mov dword ptr [ecx + esi - 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11016A75; /* 0x11016A65: je 0x11016a75 */
L_11016A67:
    eax = MEM32(esi); /* 0x11016A67: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11016A69: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x11016A6C: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11016A6E: push eax */
    RECOMP_CALL(sub_1103065A); /* 0x11016A6F: call 0x1103065a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11016A74: pop ecx */
L_11016A75:
    eax = esi; /* 0x11016A75: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016A77: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11016A7C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11016A7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016A7Fu);

L_11016A7F:
    PUSH32(esp, 4); /* 0x11016A7F: push 4 */
    eax = 0x1103EFD1u; /* 0x11016A81: mov eax, 0x1103efd1 */
    RECOMP_CALL(sub_1103B372); /* 0x11016A86: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11016A8B: mov edi, ecx */
    PUSH32(esp, 4); /* 0x11016A8D: push 4 */
    MEM32(edi) = 0x11001C2Cu; /* 0x11016A8F: mov dword ptr [edi], 0x11001c2c */
    RECOMP_CALL(sub_1103B120); /* 0x11016A95: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11016A9A: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x11016A9B: mov dword ptr [ebp - 0x10], eax */
    ebx = MEM32(ebp + 0x8); /* 0x11016A9E: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11016AA1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x11016AA3: mov dword ptr [ebp - 4], ecx */
    /* test eax, eax */ /* 0x11016AA6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11016AB4; /* 0x11016AA8: je 0x11016ab4 */
L_11016AAA:
    PUSH32(esp, eax); /* 0x11016AAA: push eax */
    ecx = ebx; /* 0x11016AAB: mov ecx, ebx */
    RECOMP_CALL(sub_110292C8); /* 0x11016AAD: call 0x110292c8 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x11016AB2: mov ecx, eax */
L_11016AB4:
    MEM32(edi + 0x34) = ecx; /* 0x11016AB4: mov dword ptr [edi + 0x34], ecx */
    ecx = edi; /* 0x11016AB7: mov ecx, edi */
    RECOMP_CALL(sub_1102185F); /* 0x11016AB9: call 0x1102185f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x20); /* 0x11016ABE: mov eax, dword ptr [ebx + 0x20] */
    ecx = MEM32(edi + 0x10); /* 0x11016AC1: mov ecx, dword ptr [edi + 0x10] */
    esi = MEM32(eax); /* 0x11016AC4: mov esi, dword ptr [eax] */
    eax = MEM32(ebx + 0x30); /* 0x11016AC6: mov eax, dword ptr [ebx + 0x30] */
    edx = MEM32(eax); /* 0x11016AC9: mov edx, dword ptr [eax] */
    eax = MEM32(ebx + 0x10); /* 0x11016ACB: mov eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x11016ACE: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x11016AD0: sub edx, esi */
    _flag_k = FK_CMP;
    eax = MEM32(eax); /* 0x11016AD2: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x11016AD4: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x20); /* 0x11016AD6: mov eax, dword ptr [edi + 0x20] */
    MEM32(eax) = esi; /* 0x11016AD9: mov dword ptr [eax], esi */
    eax = MEM32(edi + 0x30); /* 0x11016ADB: mov eax, dword ptr [edi + 0x30] */
    MEM32(eax) = edx; /* 0x11016ADE: mov dword ptr [eax], edx */
    eax = MEM32(ebx + 0x1C); /* 0x11016AE0: mov eax, dword ptr [ebx + 0x1c] */
    ecx = MEM32(edi + 0xC); /* 0x11016AE3: mov ecx, dword ptr [edi + 0xc] */
    esi = MEM32(eax); /* 0x11016AE6: mov esi, dword ptr [eax] */
    eax = MEM32(ebx + 0x2C); /* 0x11016AE8: mov eax, dword ptr [ebx + 0x2c] */
    edx = MEM32(eax); /* 0x11016AEB: mov edx, dword ptr [eax] */
    eax = MEM32(ebx + 0xC); /* 0x11016AED: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x11016AF0: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x11016AF2: sub edx, esi */
    _flag_k = FK_CMP;
    eax = MEM32(eax); /* 0x11016AF4: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x11016AF6: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x1C); /* 0x11016AF8: mov eax, dword ptr [edi + 0x1c] */
    MEM32(eax) = esi; /* 0x11016AFB: mov dword ptr [eax], esi */
    eax = MEM32(edi + 0x2C); /* 0x11016AFD: mov eax, dword ptr [edi + 0x2c] */
    MEM32(eax) = edx; /* 0x11016B00: mov dword ptr [eax], edx */
    eax = edi; /* 0x11016B02: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11016B04: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11016B09: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11016B0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016B0Cu);

L_11016B0C:
    MEM32(ecx) = 0x11001C2Cu; /* 0x11016B0C: mov dword ptr [ecx], 0x11001c2c */
    eax = ecx; /* 0x11016B12: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11016B14: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11016B17(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016B17u);

L_11016B17:
    PUSH32(esp, 4); /* 0x11016B17: push 4 */
    eax = 0x1103EFD1u; /* 0x11016B19: mov eax, 0x1103efd1 */
    RECOMP_CALL(sub_1103B372); /* 0x11016B1E: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11016B23: mov edi, ecx */
    PUSH32(esp, 4); /* 0x11016B25: push 4 */
    MEM32(edi) = 0x11001F40u; /* 0x11016B27: mov dword ptr [edi], 0x11001f40 */
    RECOMP_CALL(sub_1103B120); /* 0x11016B2D: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11016B32: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x11016B33: mov dword ptr [ebp - 0x10], eax */
    ebx = MEM32(ebp + 0x8); /* 0x11016B36: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11016B39: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x11016B3B: mov dword ptr [ebp - 4], ecx */
    /* test eax, eax */ /* 0x11016B3E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11016B4C; /* 0x11016B40: je 0x11016b4c */
L_11016B42:
    PUSH32(esp, eax); /* 0x11016B42: push eax */
    ecx = ebx; /* 0x11016B43: mov ecx, ebx */
    RECOMP_CALL(sub_110292C8); /* 0x11016B45: call 0x110292c8 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x11016B4A: mov ecx, eax */
L_11016B4C:
    MEM32(edi + 0x34) = ecx; /* 0x11016B4C: mov dword ptr [edi + 0x34], ecx */
    ecx = edi; /* 0x11016B4F: mov ecx, edi */
    RECOMP_CALL(sub_1102185F); /* 0x11016B51: call 0x1102185f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x20); /* 0x11016B56: mov eax, dword ptr [ebx + 0x20] */
    ecx = MEM32(edi + 0x10); /* 0x11016B59: mov ecx, dword ptr [edi + 0x10] */
    esi = MEM32(eax); /* 0x11016B5C: mov esi, dword ptr [eax] */
    eax = MEM32(ebx + 0x30); /* 0x11016B5E: mov eax, dword ptr [ebx + 0x30] */
    eax = MEM32(eax); /* 0x11016B61: mov eax, dword ptr [eax] */
    edx = esi + eax * 2; /* 0x11016B63: lea edx, [esi + eax*2] */
    eax = MEM32(ebx + 0x10); /* 0x11016B66: mov eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x11016B69: sub edx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x11016B6B: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = MEM32(eax); /* 0x11016B6D: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x11016B6F: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x20); /* 0x11016B71: mov eax, dword ptr [edi + 0x20] */
    MEM32(eax) = esi; /* 0x11016B74: mov dword ptr [eax], esi */
    eax = MEM32(edi + 0x30); /* 0x11016B76: mov eax, dword ptr [edi + 0x30] */
    MEM32(eax) = edx; /* 0x11016B79: mov dword ptr [eax], edx */
    eax = MEM32(ebx + 0x1C); /* 0x11016B7B: mov eax, dword ptr [ebx + 0x1c] */
    ecx = MEM32(edi + 0xC); /* 0x11016B7E: mov ecx, dword ptr [edi + 0xc] */
    esi = MEM32(eax); /* 0x11016B81: mov esi, dword ptr [eax] */
    eax = MEM32(ebx + 0x2C); /* 0x11016B83: mov eax, dword ptr [ebx + 0x2c] */
    eax = MEM32(eax); /* 0x11016B86: mov eax, dword ptr [eax] */
    edx = esi + eax * 2; /* 0x11016B88: lea edx, [esi + eax*2] */
    eax = MEM32(ebx + 0xC); /* 0x11016B8B: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x11016B8E: sub edx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x11016B90: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = MEM32(eax); /* 0x11016B92: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x11016B94: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x1C); /* 0x11016B96: mov eax, dword ptr [edi + 0x1c] */
    MEM32(eax) = esi; /* 0x11016B99: mov dword ptr [eax], esi */
    eax = MEM32(edi + 0x2C); /* 0x11016B9B: mov eax, dword ptr [edi + 0x2c] */
    MEM32(eax) = edx; /* 0x11016B9E: mov dword ptr [eax], edx */
    eax = edi; /* 0x11016BA0: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11016BA2: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11016BA7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11016BAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016BAAu);

L_11016BAA:
    MEM32(ecx) = 0x11001F40u; /* 0x11016BAA: mov dword ptr [ecx], 0x11001f40 */
    eax = ecx; /* 0x11016BB0: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11016BB2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11016BB5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016BB5u);

L_11016BB5:
    PUSH32(esp, esi); /* 0x11016BB5: push esi */
    PUSH32(esp, edi); /* 0x11016BB6: push edi */
    edi = ecx; /* 0x11016BB7: mov edi, ecx */
    PUSH32(esp, 4); /* 0x11016BB9: push 4 */
    MEM32(edi) = 0x11001F40u; /* 0x11016BBB: mov dword ptr [edi], 0x11001f40 */
    RECOMP_CALL(sub_1103B120); /* 0x11016BC1: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11016BC6: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11016BC8: pop ecx */
    /* test esi, esi */ /* 0x11016BC9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11016BD9; /* 0x11016BCB: je 0x11016bd9 */
L_11016BCD:
    PUSH32(esp, 1); /* 0x11016BCD: push 1 */
    RECOMP_CALL(sub_11030421); /* 0x11016BCF: call 0x11030421 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11016BD4: pop ecx */
    MEM32(esi) = eax; /* 0x11016BD5: mov dword ptr [esi], eax */
    goto L_11016BDB; /* 0x11016BD7: jmp 0x11016bdb */
L_11016BD9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11016BD9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11016BDB:
    ecx = edi; /* 0x11016BDB: mov ecx, edi */
    MEM32(edi + 0x34) = esi; /* 0x11016BDD: mov dword ptr [edi + 0x34], esi */
    RECOMP_CALL(sub_1102185F); /* 0x11016BE0: call 0x1102185f */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11016BE5: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x11016BE7: pop edi */
    esi = POP32_VAL(esp); /* 0x11016BE8: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11016BE9: ret  */
    RECOMP_REGS_OUT();
}

void sub_11016BEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016BEAu);

L_11016BEA:
    PUSH32(esp, 4); /* 0x11016BEA: push 4 */
    eax = 0x1103EFD1u; /* 0x11016BEC: mov eax, 0x1103efd1 */
    RECOMP_CALL(sub_1103B372); /* 0x11016BF1: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11016BF6: mov edi, ecx */
    PUSH32(esp, 4); /* 0x11016BF8: push 4 */
    MEM32(edi) = 0x11001F00u; /* 0x11016BFA: mov dword ptr [edi], 0x11001f00 */
    RECOMP_CALL(sub_1103B120); /* 0x11016C00: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11016C05: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x11016C06: mov dword ptr [ebp - 0x10], eax */
    ebx = MEM32(ebp + 0x8); /* 0x11016C09: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11016C0C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x11016C0E: mov dword ptr [ebp - 4], ecx */
    /* test eax, eax */ /* 0x11016C11: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11016C1F; /* 0x11016C13: je 0x11016c1f */
L_11016C15:
    PUSH32(esp, eax); /* 0x11016C15: push eax */
    ecx = ebx; /* 0x11016C16: mov ecx, ebx */
    RECOMP_CALL(sub_110292C8); /* 0x11016C18: call 0x110292c8 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x11016C1D: mov ecx, eax */
L_11016C1F:
    MEM32(edi + 0x34) = ecx; /* 0x11016C1F: mov dword ptr [edi + 0x34], ecx */
    ecx = edi; /* 0x11016C22: mov ecx, edi */
    RECOMP_CALL(sub_1102185F); /* 0x11016C24: call 0x1102185f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x20); /* 0x11016C29: mov eax, dword ptr [ebx + 0x20] */
    ecx = MEM32(edi + 0x10); /* 0x11016C2C: mov ecx, dword ptr [edi + 0x10] */
    esi = MEM32(eax); /* 0x11016C2F: mov esi, dword ptr [eax] */
    eax = MEM32(ebx + 0x30); /* 0x11016C31: mov eax, dword ptr [ebx + 0x30] */
    eax = MEM32(eax); /* 0x11016C34: mov eax, dword ptr [eax] */
    edx = esi + eax * 2; /* 0x11016C36: lea edx, [esi + eax*2] */
    eax = MEM32(ebx + 0x10); /* 0x11016C39: mov eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x11016C3C: sub edx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x11016C3E: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = MEM32(eax); /* 0x11016C40: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x11016C42: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x20); /* 0x11016C44: mov eax, dword ptr [edi + 0x20] */
    MEM32(eax) = esi; /* 0x11016C47: mov dword ptr [eax], esi */
    eax = MEM32(edi + 0x30); /* 0x11016C49: mov eax, dword ptr [edi + 0x30] */
    MEM32(eax) = edx; /* 0x11016C4C: mov dword ptr [eax], edx */
    eax = MEM32(ebx + 0x1C); /* 0x11016C4E: mov eax, dword ptr [ebx + 0x1c] */
    ecx = MEM32(edi + 0xC); /* 0x11016C51: mov ecx, dword ptr [edi + 0xc] */
    esi = MEM32(eax); /* 0x11016C54: mov esi, dword ptr [eax] */
    eax = MEM32(ebx + 0x2C); /* 0x11016C56: mov eax, dword ptr [ebx + 0x2c] */
    eax = MEM32(eax); /* 0x11016C59: mov eax, dword ptr [eax] */
    edx = esi + eax * 2; /* 0x11016C5B: lea edx, [esi + eax*2] */
    eax = MEM32(ebx + 0xC); /* 0x11016C5E: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x11016C61: sub edx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x11016C63: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = MEM32(eax); /* 0x11016C65: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x11016C67: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x1C); /* 0x11016C69: mov eax, dword ptr [edi + 0x1c] */
    MEM32(eax) = esi; /* 0x11016C6C: mov dword ptr [eax], esi */
    eax = MEM32(edi + 0x2C); /* 0x11016C6E: mov eax, dword ptr [edi + 0x2c] */
    MEM32(eax) = edx; /* 0x11016C71: mov dword ptr [eax], edx */
    eax = edi; /* 0x11016C73: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11016C75: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11016C7A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11016C7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016C7Du);

L_11016C7D:
    MEM32(ecx) = 0x11001F00u; /* 0x11016C7D: mov dword ptr [ecx], 0x11001f00 */
    eax = ecx; /* 0x11016C83: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11016C85: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11016C88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016C88u);

L_11016C88:
    PUSH32(esp, esi); /* 0x11016C88: push esi */
    PUSH32(esp, edi); /* 0x11016C89: push edi */
    edi = ecx; /* 0x11016C8A: mov edi, ecx */
    PUSH32(esp, 4); /* 0x11016C8C: push 4 */
    MEM32(edi) = 0x11001F00u; /* 0x11016C8E: mov dword ptr [edi], 0x11001f00 */
    RECOMP_CALL(sub_1103B120); /* 0x11016C94: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11016C99: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11016C9B: pop ecx */
    /* test esi, esi */ /* 0x11016C9C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11016CAC; /* 0x11016C9E: je 0x11016cac */
L_11016CA0:
    PUSH32(esp, 1); /* 0x11016CA0: push 1 */
    RECOMP_CALL(sub_11030421); /* 0x11016CA2: call 0x11030421 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11016CA7: pop ecx */
    MEM32(esi) = eax; /* 0x11016CA8: mov dword ptr [esi], eax */
    goto L_11016CAE; /* 0x11016CAA: jmp 0x11016cae */
L_11016CAC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11016CAC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11016CAE:
    ecx = edi; /* 0x11016CAE: mov ecx, edi */
    MEM32(edi + 0x34) = esi; /* 0x11016CB0: mov dword ptr [edi + 0x34], esi */
    RECOMP_CALL(sub_1102185F); /* 0x11016CB3: call 0x1102185f */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11016CB8: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x11016CBA: pop edi */
    esi = POP32_VAL(esp); /* 0x11016CBB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11016CBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_11016CBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016CBDu);

L_11016CBD:
    PUSH32(esp, ebp); /* 0x11016CBD: push ebp */
    ebp = esp; /* 0x11016CBE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11016CC0: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11016CC1: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x11016CC4: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11016CC6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x11016CC8: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 7; /* 0x11016CCC: mov dword ptr [esi + 0x14], 7 */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x11016CD3: mov word ptr [esi], ax */
    RECOMP_CALL(sub_1102288F); /* 0x11016CD6: call 0x1102288f */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11016CDB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11016CDD: pop esi */
    ebp = POP32_VAL(esp); /* 0x11016CDE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11016CDF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11016CE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016CE2u);

L_11016CE2:
    PUSH32(esp, 0x38u); /* 0x11016CE2: push 0x38 */
    eax = 0x1103D274u; /* 0x11016CE4: mov eax, 0x1103d274 */
    RECOMP_CALL(sub_1103B372); /* 0x11016CE9: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016CEE: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11016CF0: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x11016CF3: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x11016CF6: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11016CF9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11016CFD: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 0x110048B0u); /* 0x11016D00: push 0x110048b0 */
    MEM32(esi) = 0x11001CBCu; /* 0x11016D05: mov dword ptr [esi], 0x11001cbc */
    RECOMP_CALL(sub_1100DEDB); /* 0x11016D0B: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x11016D10: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11016D13: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11016D18: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016D1A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11016D1F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11016D22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016D22u);

L_11016D22:
    PUSH32(esp, ebp); /* 0x11016D22: push ebp */
    ebp = esp; /* 0x11016D23: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11016D25: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x11016D28: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x11016D2B: mov eax, ecx */
    MEM32(ecx) = 0x11001FA4u; /* 0x11016D2D: mov dword ptr [ecx], 0x11001fa4 */
    ebp = POP32_VAL(esp); /* 0x11016D33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11016D34: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11016D37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016D37u);

L_11016D37:
    PUSH32(esp, 0x38u); /* 0x11016D37: push 0x38 */
    eax = 0x1103D274u; /* 0x11016D39: mov eax, 0x1103d274 */
    RECOMP_CALL(sub_1103B372); /* 0x11016D3E: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016D43: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11016D45: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x11016D48: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x11016D4B: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11016D4E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11016D52: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 0x110048B0u); /* 0x11016D55: push 0x110048b0 */
    MEM32(esi) = 0x11001FA4u; /* 0x11016D5A: mov dword ptr [esi], 0x11001fa4 */
    RECOMP_CALL(sub_1100DEDB); /* 0x11016D60: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x11016D65: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11016D68: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11016D6D: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016D6F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11016D74: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11016D77(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016D77u);

L_11016D77:
    PUSH32(esp, ebp); /* 0x11016D77: push ebp */
    ebp = esp; /* 0x11016D78: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11016D7A: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x11016D7D: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x11016D80: mov eax, ecx */
    MEM32(ecx) = 0x110020C4u; /* 0x11016D82: mov dword ptr [ecx], 0x110020c4 */
    ebp = POP32_VAL(esp); /* 0x11016D88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11016D89: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11016D8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016D8Cu);

L_11016D8C:
    PUSH32(esp, 0x38u); /* 0x11016D8C: push 0x38 */
    eax = 0x1103D274u; /* 0x11016D8E: mov eax, 0x1103d274 */
    RECOMP_CALL(sub_1103B372); /* 0x11016D93: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016D98: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11016D9A: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x11016D9D: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x11016DA0: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11016DA3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11016DA7: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 0x110048B0u); /* 0x11016DAA: push 0x110048b0 */
    MEM32(esi) = 0x110020C4u; /* 0x11016DAF: mov dword ptr [esi], 0x110020c4 */
    RECOMP_CALL(sub_1100DEDB); /* 0x11016DB5: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x11016DBA: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11016DBD: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11016DC2: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016DC4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11016DC9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11016DCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016DCCu);

L_11016DCC:
    PUSH32(esp, ebp); /* 0x11016DCC: push ebp */
    ebp = esp; /* 0x11016DCD: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11016DCF: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x11016DD2: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x11016DD5: mov eax, ecx */
    MEM32(ecx) = 0x11002034u; /* 0x11016DD7: mov dword ptr [ecx], 0x11002034 */
    ebp = POP32_VAL(esp); /* 0x11016DDD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11016DDE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11016DE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016DE1u);

L_11016DE1:
    PUSH32(esp, 0x38u); /* 0x11016DE1: push 0x38 */
    eax = 0x1103D274u; /* 0x11016DE3: mov eax, 0x1103d274 */
    RECOMP_CALL(sub_1103B372); /* 0x11016DE8: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016DED: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11016DEF: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x11016DF2: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x11016DF5: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11016DF8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11016DFC: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 0x110048B0u); /* 0x11016DFF: push 0x110048b0 */
    MEM32(esi) = 0x11002034u; /* 0x11016E04: mov dword ptr [esi], 0x11002034 */
    RECOMP_CALL(sub_1100DEDB); /* 0x11016E0A: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x11016E0F: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11016E12: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11016E17: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016E19: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11016E1E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11016E21(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016E21u);

L_11016E21:
    PUSH32(esp, ebp); /* 0x11016E21: push ebp */
    ebp = esp; /* 0x11016E22: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11016E24: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x11016E27: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x11016E2A: mov eax, ecx */
    MEM32(ecx) = 0x11001FE0u; /* 0x11016E2C: mov dword ptr [ecx], 0x11001fe0 */
    ebp = POP32_VAL(esp); /* 0x11016E32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11016E33: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11016E36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016E36u);

L_11016E36:
    PUSH32(esp, 0x38u); /* 0x11016E36: push 0x38 */
    eax = 0x1103D274u; /* 0x11016E38: mov eax, 0x1103d274 */
    RECOMP_CALL(sub_1103B372); /* 0x11016E3D: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016E42: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11016E44: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x11016E47: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x11016E4A: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11016E4D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11016E51: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 0x110048B0u); /* 0x11016E54: push 0x110048b0 */
    MEM32(esi) = 0x11001FE0u; /* 0x11016E59: mov dword ptr [esi], 0x11001fe0 */
    RECOMP_CALL(sub_1100DEDB); /* 0x11016E5F: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x11016E64: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11016E67: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11016E6C: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016E6E: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11016E73: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11016E76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016E76u);

L_11016E76:
    PUSH32(esp, ebp); /* 0x11016E76: push ebp */
    ebp = esp; /* 0x11016E77: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11016E79: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x11016E7C: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x11016E7F: mov eax, ecx */
    MEM32(ecx) = 0x11002100u; /* 0x11016E81: mov dword ptr [ecx], 0x11002100 */
    ebp = POP32_VAL(esp); /* 0x11016E87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11016E88: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11016E8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016E8Bu);

L_11016E8B:
    PUSH32(esp, 0x38u); /* 0x11016E8B: push 0x38 */
    eax = 0x1103D274u; /* 0x11016E8D: mov eax, 0x1103d274 */
    RECOMP_CALL(sub_1103B372); /* 0x11016E92: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016E97: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11016E99: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x11016E9C: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x11016E9F: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11016EA2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11016EA6: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 0x110048B0u); /* 0x11016EA9: push 0x110048b0 */
    MEM32(esi) = 0x11002100u; /* 0x11016EAE: mov dword ptr [esi], 0x11002100 */
    RECOMP_CALL(sub_1100DEDB); /* 0x11016EB4: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x11016EB9: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11016EBC: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11016EC1: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016EC3: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11016EC8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11016ECB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016ECBu);

L_11016ECB:
    PUSH32(esp, ebp); /* 0x11016ECB: push ebp */
    ebp = esp; /* 0x11016ECC: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11016ECE: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x11016ED1: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x11016ED4: mov eax, ecx */
    MEM32(ecx) = 0x11002070u; /* 0x11016ED6: mov dword ptr [ecx], 0x11002070 */
    ebp = POP32_VAL(esp); /* 0x11016EDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11016EDD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11016EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016EE0u);

L_11016EE0:
    PUSH32(esp, 0x38u); /* 0x11016EE0: push 0x38 */
    eax = 0x1103D274u; /* 0x11016EE2: mov eax, 0x1103d274 */
    RECOMP_CALL(sub_1103B372); /* 0x11016EE7: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016EEC: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11016EEE: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x11016EF1: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x11016EF4: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11016EF7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11016EFB: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 0x110048B0u); /* 0x11016EFE: push 0x110048b0 */
    MEM32(esi) = 0x11002070u; /* 0x11016F03: mov dword ptr [esi], 0x11002070 */
    RECOMP_CALL(sub_1100DEDB); /* 0x11016F09: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x11016F0E: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11016F11: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11016F16: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016F18: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11016F1D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11016F20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016F20u);

L_11016F20:
    PUSH32(esp, 0x38u); /* 0x11016F20: push 0x38 */
    eax = 0x1103D29Fu; /* 0x11016F22: mov eax, 0x1103d29f */
    RECOMP_CALL(sub_1103B372); /* 0x11016F27: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016F2C: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11016F2E: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0xC); /* 0x11016F31: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x11016F34: mov dword ptr [esi + 4], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11016F37: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11016F3A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11016F3E: lea ecx, [ebp - 0x44] */
    MEM32(esi) = 0x110021C8u; /* 0x11016F41: mov dword ptr [esi], 0x110021c8 */
    RECOMP_CALL(sub_1100DEDB); /* 0x11016F47: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x11016F4C: lea eax, [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11016F4F: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, eax); /* 0x11016F53: push eax */
    ecx = esi; /* 0x11016F54: mov ecx, esi */
    RECOMP_CALL(sub_11021B55); /* 0x11016F56: call 0x11021b55 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x11016F5B: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11016F5E: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11016F63: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016F65: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11016F6A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11016F6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016F6Du);

L_11016F6D:
    PUSH32(esp, 4); /* 0x11016F6D: push 4 */
    eax = 0x1103D2C2u; /* 0x11016F6F: mov eax, 0x1103d2c2 */
    RECOMP_CALL(sub_1103B372); /* 0x11016F74: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016F79: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11016F7B: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0xC); /* 0x11016F7E: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x11016F81: mov dword ptr [esi + 4], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11016F84: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11016F87: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x110021C8u; /* 0x11016F8B: mov dword ptr [esi], 0x110021c8 */
    RECOMP_CALL(sub_11021B55); /* 0x11016F91: call 0x11021b55 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11016F96: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016F98: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11016F9D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11016FA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016FA0u);

L_11016FA0:
    PUSH32(esp, 0x38u); /* 0x11016FA0: push 0x38 */
    eax = 0x1103D29Fu; /* 0x11016FA2: mov eax, 0x1103d29f */
    RECOMP_CALL(sub_1103B372); /* 0x11016FA7: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016FAC: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11016FAE: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x11016FB1: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x11016FB4: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11016FB7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11016FBB: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 0x110048B0u); /* 0x11016FBE: push 0x110048b0 */
    MEM32(esi) = 0x110021C8u; /* 0x11016FC3: mov dword ptr [esi], 0x110021c8 */
    RECOMP_CALL(sub_1100DEDB); /* 0x11016FC9: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x11016FCE: lea eax, [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11016FD1: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, eax); /* 0x11016FD5: push eax */
    ecx = esi; /* 0x11016FD6: mov ecx, esi */
    RECOMP_CALL(sub_11021B55); /* 0x11016FD8: call 0x11021b55 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x11016FDD: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11016FE0: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11016FE5: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11016FE7: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11016FEC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11016FEF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11016FEFu);

L_11016FEF:
    PUSH32(esp, 0x38u); /* 0x11016FEF: push 0x38 */
    eax = 0x1103D29Fu; /* 0x11016FF1: mov eax, 0x1103d29f */
    RECOMP_CALL(sub_1103B372); /* 0x11016FF6: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11016FFB: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11016FFD: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0xC); /* 0x11017000: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x11017003: mov dword ptr [esi + 4], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11017006: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11017009: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x1101700D: lea ecx, [ebp - 0x44] */
    MEM32(esi) = 0x11002248u; /* 0x11017010: mov dword ptr [esi], 0x11002248 */
    RECOMP_CALL(sub_1100DEDB); /* 0x11017016: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x1101701B: lea eax, [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101701E: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, eax); /* 0x11017022: push eax */
    ecx = esi; /* 0x11017023: mov ecx, esi */
    RECOMP_CALL(sub_11021B9F); /* 0x11017025: call 0x11021b9f */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x1101702A: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101702D: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11017032: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017034: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11017039: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1101703C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101703Cu);

L_1101703C:
    PUSH32(esp, 4); /* 0x1101703C: push 4 */
    eax = 0x1103D2C2u; /* 0x1101703E: mov eax, 0x1103d2c2 */
    RECOMP_CALL(sub_1103B372); /* 0x11017043: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11017048: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1101704A: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0xC); /* 0x1101704D: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x11017050: mov dword ptr [esi + 4], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11017053: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11017056: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x11002248u; /* 0x1101705A: mov dword ptr [esi], 0x11002248 */
    RECOMP_CALL(sub_11021B9F); /* 0x11017060: call 0x11021b9f */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11017065: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017067: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101706C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1101706F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101706Fu);

L_1101706F:
    PUSH32(esp, 0x38u); /* 0x1101706F: push 0x38 */
    eax = 0x1103D29Fu; /* 0x11017071: mov eax, 0x1103d29f */
    RECOMP_CALL(sub_1103B372); /* 0x11017076: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101707B: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1101707D: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x11017080: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x11017083: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11017086: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x1101708A: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 0x110048B0u); /* 0x1101708D: push 0x110048b0 */
    MEM32(esi) = 0x11002248u; /* 0x11017092: mov dword ptr [esi], 0x11002248 */
    RECOMP_CALL(sub_1100DEDB); /* 0x11017098: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x1101709D: lea eax, [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x110170A0: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, eax); /* 0x110170A4: push eax */
    ecx = esi; /* 0x110170A5: mov ecx, esi */
    RECOMP_CALL(sub_11021B9F); /* 0x110170A7: call 0x11021b9f */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x110170AC: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x110170AF: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110170B4: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110170B6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110170BB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110170BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110170BEu);

L_110170BE:
    PUSH32(esp, 0x38u); /* 0x110170BE: push 0x38 */
    eax = 0x1103D29Fu; /* 0x110170C0: mov eax, 0x1103d29f */
    RECOMP_CALL(sub_1103B372); /* 0x110170C5: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110170CA: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x110170CC: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0xC); /* 0x110170CF: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x110170D2: mov dword ptr [esi + 4], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110170D5: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110170D8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x110170DC: lea ecx, [ebp - 0x44] */
    MEM32(esi) = 0x11002208u; /* 0x110170DF: mov dword ptr [esi], 0x11002208 */
    RECOMP_CALL(sub_1100DEDB); /* 0x110170E5: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x110170EA: lea eax, [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x110170ED: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, eax); /* 0x110170F1: push eax */
    ecx = esi; /* 0x110170F2: mov ecx, esi */
    RECOMP_CALL(sub_11021BE9); /* 0x110170F4: call 0x11021be9 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x110170F9: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x110170FC: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11017101: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017103: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11017108: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1101710B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101710Bu);

L_1101710B:
    PUSH32(esp, 4); /* 0x1101710B: push 4 */
    eax = 0x1103D2C2u; /* 0x1101710D: mov eax, 0x1103d2c2 */
    RECOMP_CALL(sub_1103B372); /* 0x11017112: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11017117: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11017119: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0xC); /* 0x1101711C: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x1101711F: mov dword ptr [esi + 4], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11017122: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11017125: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x11002208u; /* 0x11017129: mov dword ptr [esi], 0x11002208 */
    RECOMP_CALL(sub_11021BE9); /* 0x1101712F: call 0x11021be9 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11017134: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017136: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101713B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1101713E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101713Eu);

L_1101713E:
    PUSH32(esp, 0x38u); /* 0x1101713E: push 0x38 */
    eax = 0x1103D29Fu; /* 0x11017140: mov eax, 0x1103d29f */
    RECOMP_CALL(sub_1103B372); /* 0x11017145: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1101714A: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1101714C: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x1101714F: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x11017152: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11017155: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x11017159: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 0x110048B0u); /* 0x1101715C: push 0x110048b0 */
    MEM32(esi) = 0x11002208u; /* 0x11017161: mov dword ptr [esi], 0x11002208 */
    RECOMP_CALL(sub_1100DEDB); /* 0x11017167: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x1101716C: lea eax, [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1101716F: mov byte ptr [ebp - 4], 1 */
    PUSH32(esp, eax); /* 0x11017173: push eax */
    ecx = esi; /* 0x11017174: mov ecx, esi */
    RECOMP_CALL(sub_11021BE9); /* 0x11017176: call 0x11021be9 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x1101717B: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1101717E: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11017183: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017185: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101718A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101718D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101718Du);

L_1101718D:
    PUSH32(esp, ebp); /* 0x1101718D: push ebp */
    ebp = esp; /* 0x1101718E: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11017190: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11017193: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11017194: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x11017197: mov esi, ecx */
    MEM32(esi + 0x4) = eax; /* 0x11017199: mov dword ptr [esi + 4], eax */
    MEM32(esi) = 0x110021F4u; /* 0x1101719C: mov dword ptr [esi], 0x110021f4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x110171A2: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_11021C33); /* 0x110171A6: call 0x11021c33 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110171AB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x110171AD: pop esi */
    ebp = POP32_VAL(esp); /* 0x110171AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110171AF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_110171B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110171B2u);

L_110171B2:
    PUSH32(esp, 0x38u); /* 0x110171B2: push 0x38 */
    eax = 0x1103D2F0u; /* 0x110171B4: mov eax, 0x1103d2f0 */
    RECOMP_CALL(sub_1103B372); /* 0x110171B9: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110171BE: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x110171C0: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x110171C3: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x110171C6: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110171C9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x110021F4u; /* 0x110171CD: mov dword ptr [esi], 0x110021f4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x110171D3: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x110048B0u); /* 0x110171D7: push 0x110048b0 */
    ecx = ebp + (-0x44); /* 0x110171DC: lea ecx, [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x110171DF: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100DEDB); /* 0x110171E3: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x110171E8: lea eax, [ebp - 0x44] */
    ecx = esi; /* 0x110171EB: mov ecx, esi */
    PUSH32(esp, eax); /* 0x110171ED: push eax */
    RECOMP_CALL(sub_11021C33); /* 0x110171EE: call 0x11021c33 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x110171F3: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x110171F6: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110171FB: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110171FD: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11017202: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11017205(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017205u);

L_11017205:
    PUSH32(esp, 0x38u); /* 0x11017205: push 0x38 */
    eax = 0x1103D2F0u; /* 0x11017207: mov eax, 0x1103d2f0 */
    RECOMP_CALL(sub_1103B372); /* 0x1101720C: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11017211: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11017213: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0xC); /* 0x11017216: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x11017219: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1101721C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x11002274u; /* 0x11017220: mov dword ptr [esi], 0x11002274 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x11017226: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101722A: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x44); /* 0x1101722D: lea ecx, [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11017230: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100DEDB); /* 0x11017234: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x11017239: lea eax, [ebp - 0x44] */
    ecx = esi; /* 0x1101723C: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1101723E: push eax */
    RECOMP_CALL(sub_11021C5F); /* 0x1101723F: call 0x11021c5f */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x11017244: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11017247: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101724C: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101724E: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11017253: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11017256(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017256u);

L_11017256:
    PUSH32(esp, ebp); /* 0x11017256: push ebp */
    ebp = esp; /* 0x11017257: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11017259: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1101725C: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101725D: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x11017260: mov esi, ecx */
    MEM32(esi + 0x4) = eax; /* 0x11017262: mov dword ptr [esi + 4], eax */
    MEM32(esi) = 0x11002274u; /* 0x11017265: mov dword ptr [esi], 0x11002274 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x1101726B: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_11021C5F); /* 0x1101726F: call 0x11021c5f */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11017274: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11017276: pop esi */
    ebp = POP32_VAL(esp); /* 0x11017277: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11017278: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1101727B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101727Bu);

L_1101727B:
    PUSH32(esp, 0x38u); /* 0x1101727B: push 0x38 */
    eax = 0x1103D2F0u; /* 0x1101727D: mov eax, 0x1103d2f0 */
    RECOMP_CALL(sub_1103B372); /* 0x11017282: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11017287: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11017289: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x1101728C: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x1101728F: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11017292: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x11002274u; /* 0x11017296: mov dword ptr [esi], 0x11002274 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x1101729C: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x110048B0u); /* 0x110172A0: push 0x110048b0 */
    ecx = ebp + (-0x44); /* 0x110172A5: lea ecx, [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x110172A8: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100DEDB); /* 0x110172AC: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x110172B1: lea eax, [ebp - 0x44] */
    ecx = esi; /* 0x110172B4: mov ecx, esi */
    PUSH32(esp, eax); /* 0x110172B6: push eax */
    RECOMP_CALL(sub_11021C5F); /* 0x110172B7: call 0x11021c5f */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x110172BC: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x110172BF: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110172C4: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110172C6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110172CB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110172CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110172CEu);

L_110172CE:
    PUSH32(esp, 0x38u); /* 0x110172CE: push 0x38 */
    eax = 0x1103D2F0u; /* 0x110172D0: mov eax, 0x1103d2f0 */
    RECOMP_CALL(sub_1103B372); /* 0x110172D5: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110172DA: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x110172DC: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0xC); /* 0x110172DF: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x110172E2: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110172E5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x11002234u; /* 0x110172E9: mov dword ptr [esi], 0x11002234 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x110172EF: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110172F3: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x44); /* 0x110172F6: lea ecx, [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x110172F9: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100DEDB); /* 0x110172FD: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x11017302: lea eax, [ebp - 0x44] */
    ecx = esi; /* 0x11017305: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11017307: push eax */
    RECOMP_CALL(sub_11021C5F); /* 0x11017308: call 0x11021c5f */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x1101730D: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11017310: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11017315: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017317: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1101731C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1101731F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101731Fu);

L_1101731F:
    PUSH32(esp, ebp); /* 0x1101731F: push ebp */
    ebp = esp; /* 0x11017320: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11017322: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11017325: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11017326: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x11017329: mov esi, ecx */
    MEM32(esi + 0x4) = eax; /* 0x1101732B: mov dword ptr [esi + 4], eax */
    MEM32(esi) = 0x11002234u; /* 0x1101732E: mov dword ptr [esi], 0x11002234 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x11017334: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_11021C5F); /* 0x11017338: call 0x11021c5f */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101733D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101733F: pop esi */
    ebp = POP32_VAL(esp); /* 0x11017340: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11017341: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11017344(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017344u);

L_11017344:
    PUSH32(esp, 0x38u); /* 0x11017344: push 0x38 */
    eax = 0x1103D2F0u; /* 0x11017346: mov eax, 0x1103d2f0 */
    RECOMP_CALL(sub_1103B372); /* 0x1101734B: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11017350: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11017352: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x11017355: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x11017358: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1101735B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x11002234u; /* 0x1101735F: mov dword ptr [esi], 0x11002234 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x11017365: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x110048B0u); /* 0x11017369: push 0x110048b0 */
    ecx = ebp + (-0x44); /* 0x1101736E: lea ecx, [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11017371: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100DEDB); /* 0x11017375: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x1101737A: lea eax, [ebp - 0x44] */
    ecx = esi; /* 0x1101737D: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1101737F: push eax */
    RECOMP_CALL(sub_11021C5F); /* 0x11017380: call 0x11021c5f */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x11017385: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11017388: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101738D: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101738F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11017394: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11017397(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017397u);

L_11017397:
    PUSH32(esp, esi); /* 0x11017397: push esi */
    esi = ecx; /* 0x11017398: mov esi, ecx */
    eax = MEM32(esi + (-0x20)); /* 0x1101739A: mov eax, dword ptr [esi - 0x20] */
    eax = MEM32(eax + 0x4); /* 0x1101739D: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + (-0x20)) = 0x11002180u; /* 0x110173A0: mov dword ptr [eax + esi - 0x20], 0x11002180 */
    eax = MEM32(esi + (-0x20)); /* 0x110173A8: mov eax, dword ptr [esi - 0x20] */
    edx = MEM32(eax + 0x4); /* 0x110173AB: mov edx, dword ptr [eax + 4] */
    eax = edx + (-0x20); /* 0x110173AE: lea eax, [edx - 0x20] */
    MEM32(edx + esi + (-0x24)) = eax; /* 0x110173B1: mov dword ptr [edx + esi - 0x24], eax */
    eax = MEM32(esi + (-0x10)); /* 0x110173B5: mov eax, dword ptr [esi - 0x10] */
    eax = MEM32(eax + 0x4); /* 0x110173B8: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + (-0x10)) = 0x11001C6Cu; /* 0x110173BB: mov dword ptr [eax + esi - 0x10], 0x11001c6c */
    eax = MEM32(esi + (-0x10)); /* 0x110173C3: mov eax, dword ptr [esi - 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x110173C6: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x110173C9: lea eax, [ecx - 8] */
    MEM32(ecx + esi + (-0x14)) = eax; /* 0x110173CC: mov dword ptr [ecx + esi - 0x14], eax */
    eax = MEM32(esi + (-0x20)); /* 0x110173D0: mov eax, dword ptr [esi - 0x20] */
    eax = MEM32(eax + 0x4); /* 0x110173D3: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + (-0x20)) = 0x11001CE8u; /* 0x110173D6: mov dword ptr [eax + esi - 0x20], 0x11001ce8 */
    eax = MEM32(esi + (-0x20)); /* 0x110173DE: mov eax, dword ptr [esi - 0x20] */
    ecx = MEM32(eax + 0x4); /* 0x110173E1: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x110173E4: lea eax, [ecx - 0x18] */
    MEM32(ecx + esi + (-0x24)) = eax; /* 0x110173E7: mov dword ptr [ecx + esi - 0x24], eax */
    esi = POP32_VAL(esp); /* 0x110173EB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110173EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_110173ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110173EDu);

L_110173ED:
    PUSH32(esp, esi); /* 0x110173ED: push esi */
    esi = ecx; /* 0x110173EE: mov esi, ecx */
    eax = MEM32(esi + (-0x20)); /* 0x110173F0: mov eax, dword ptr [esi - 0x20] */
    eax = MEM32(eax + 0x4); /* 0x110173F3: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + (-0x20)) = 0x110021B0u; /* 0x110173F6: mov dword ptr [eax + esi - 0x20], 0x110021b0 */
    eax = MEM32(esi + (-0x20)); /* 0x110173FE: mov eax, dword ptr [esi - 0x20] */
    edx = MEM32(eax + 0x4); /* 0x11017401: mov edx, dword ptr [eax + 4] */
    eax = edx + (-0x20); /* 0x11017404: lea eax, [edx - 0x20] */
    MEM32(edx + esi + (-0x24)) = eax; /* 0x11017407: mov dword ptr [edx + esi - 0x24], eax */
    eax = MEM32(esi + (-0x10)); /* 0x1101740B: mov eax, dword ptr [esi - 0x10] */
    eax = MEM32(eax + 0x4); /* 0x1101740E: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + (-0x10)) = 0x11002150u; /* 0x11017411: mov dword ptr [eax + esi - 0x10], 0x11002150 */
    eax = MEM32(esi + (-0x10)); /* 0x11017419: mov eax, dword ptr [esi - 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x1101741C: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x1101741F: lea eax, [ecx - 8] */
    MEM32(ecx + esi + (-0x14)) = eax; /* 0x11017422: mov dword ptr [ecx + esi - 0x14], eax */
    eax = MEM32(esi + (-0x20)); /* 0x11017426: mov eax, dword ptr [esi - 0x20] */
    eax = MEM32(eax + 0x4); /* 0x11017429: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + (-0x20)) = 0x11002170u; /* 0x1101742C: mov dword ptr [eax + esi - 0x20], 0x11002170 */
    eax = MEM32(esi + (-0x20)); /* 0x11017434: mov eax, dword ptr [esi - 0x20] */
    ecx = MEM32(eax + 0x4); /* 0x11017437: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x1101743A: lea eax, [ecx - 0x18] */
    MEM32(ecx + esi + (-0x24)) = eax; /* 0x1101743D: mov dword ptr [ecx + esi - 0x24], eax */
    esi = POP32_VAL(esp); /* 0x11017441: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11017442: ret  */
    RECOMP_REGS_OUT();
}

void sub_11017443(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017443u);

L_11017443:
    PUSH32(esp, esi); /* 0x11017443: push esi */
    esi = ecx; /* 0x11017444: mov esi, ecx */
    eax = MEM32(esi + (-0x20)); /* 0x11017446: mov eax, dword ptr [esi - 0x20] */
    eax = MEM32(eax + 0x4); /* 0x11017449: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + (-0x20)) = 0x11002198u; /* 0x1101744C: mov dword ptr [eax + esi - 0x20], 0x11002198 */
    eax = MEM32(esi + (-0x20)); /* 0x11017454: mov eax, dword ptr [esi - 0x20] */
    edx = MEM32(eax + 0x4); /* 0x11017457: mov edx, dword ptr [eax + 4] */
    eax = edx + (-0x20); /* 0x1101745A: lea eax, [edx - 0x20] */
    MEM32(edx + esi + (-0x24)) = eax; /* 0x1101745D: mov dword ptr [edx + esi - 0x24], eax */
    eax = MEM32(esi + (-0x10)); /* 0x11017461: mov eax, dword ptr [esi - 0x10] */
    eax = MEM32(eax + 0x4); /* 0x11017464: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + (-0x10)) = 0x11002140u; /* 0x11017467: mov dword ptr [eax + esi - 0x10], 0x11002140 */
    eax = MEM32(esi + (-0x10)); /* 0x1101746F: mov eax, dword ptr [esi - 0x10] */
    ecx = MEM32(eax + 0x4); /* 0x11017472: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x11017475: lea eax, [ecx - 8] */
    MEM32(ecx + esi + (-0x14)) = eax; /* 0x11017478: mov dword ptr [ecx + esi - 0x14], eax */
    eax = MEM32(esi + (-0x20)); /* 0x1101747C: mov eax, dword ptr [esi - 0x20] */
    eax = MEM32(eax + 0x4); /* 0x1101747F: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + (-0x20)) = 0x11002160u; /* 0x11017482: mov dword ptr [eax + esi - 0x20], 0x11002160 */
    eax = MEM32(esi + (-0x20)); /* 0x1101748A: mov eax, dword ptr [esi - 0x20] */
    ecx = MEM32(eax + 0x4); /* 0x1101748D: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x11017490: lea eax, [ecx - 0x18] */
    MEM32(ecx + esi + (-0x24)) = eax; /* 0x11017493: mov dword ptr [ecx + esi - 0x24], eax */
    esi = POP32_VAL(esp); /* 0x11017497: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11017498: ret  */
    RECOMP_REGS_OUT();
}

void sub_11017499(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017499u);

L_11017499:
    eax = MEM32(ecx + (-0x18)); /* 0x11017499: mov eax, dword ptr [ecx - 0x18] */
    eax = MEM32(eax + 0x4); /* 0x1101749C: mov eax, dword ptr [eax + 4] */
    MEM32(eax + ecx + (-0x18)) = 0x11002170u; /* 0x1101749F: mov dword ptr [eax + ecx - 0x18], 0x11002170 */
    eax = MEM32(ecx + (-0x18)); /* 0x110174A7: mov eax, dword ptr [ecx - 0x18] */
    edx = MEM32(eax + 0x4); /* 0x110174AA: mov edx, dword ptr [eax + 4] */
    eax = edx + (-0x18); /* 0x110174AD: lea eax, [edx - 0x18] */
    MEM32(edx + ecx + (-0x1C)) = eax; /* 0x110174B0: mov dword ptr [edx + ecx - 0x1c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110174B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_110174B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110174B5u);

L_110174B5:
    eax = MEM32(ecx + (-0x18)); /* 0x110174B5: mov eax, dword ptr [ecx - 0x18] */
    eax = MEM32(eax + 0x4); /* 0x110174B8: mov eax, dword ptr [eax + 4] */
    MEM32(eax + ecx + (-0x18)) = 0x11002160u; /* 0x110174BB: mov dword ptr [eax + ecx - 0x18], 0x11002160 */
    eax = MEM32(ecx + (-0x18)); /* 0x110174C3: mov eax, dword ptr [ecx - 0x18] */
    edx = MEM32(eax + 0x4); /* 0x110174C6: mov edx, dword ptr [eax + 4] */
    eax = edx + (-0x18); /* 0x110174C9: lea eax, [edx - 0x18] */
    MEM32(edx + ecx + (-0x1C)) = eax; /* 0x110174CC: mov dword ptr [edx + ecx - 0x1c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110174D0: ret  */
    RECOMP_REGS_OUT();
}

void sub_110174D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110174D1u);

L_110174D1:
    eax = MEM32(ecx + (-0x8)); /* 0x110174D1: mov eax, dword ptr [ecx - 8] */
    eax = MEM32(eax + 0x4); /* 0x110174D4: mov eax, dword ptr [eax + 4] */
    MEM32(eax + ecx + (-0x8)) = 0x11002150u; /* 0x110174D7: mov dword ptr [eax + ecx - 8], 0x11002150 */
    eax = MEM32(ecx + (-0x8)); /* 0x110174DF: mov eax, dword ptr [ecx - 8] */
    edx = MEM32(eax + 0x4); /* 0x110174E2: mov edx, dword ptr [eax + 4] */
    eax = edx + (-0x8); /* 0x110174E5: lea eax, [edx - 8] */
    MEM32(edx + ecx + (-0xC)) = eax; /* 0x110174E8: mov dword ptr [edx + ecx - 0xc], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110174EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_110174ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110174EDu);

L_110174ED:
    eax = MEM32(ecx + (-0x8)); /* 0x110174ED: mov eax, dword ptr [ecx - 8] */
    eax = MEM32(eax + 0x4); /* 0x110174F0: mov eax, dword ptr [eax + 4] */
    MEM32(eax + ecx + (-0x8)) = 0x11002140u; /* 0x110174F3: mov dword ptr [eax + ecx - 8], 0x11002140 */
    eax = MEM32(ecx + (-0x8)); /* 0x110174FB: mov eax, dword ptr [ecx - 8] */
    edx = MEM32(eax + 0x4); /* 0x110174FE: mov edx, dword ptr [eax + 4] */
    eax = edx + (-0x8); /* 0x11017501: lea eax, [edx - 8] */
    MEM32(edx + ecx + (-0xC)) = eax; /* 0x11017504: mov dword ptr [edx + ecx - 0xc], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11017508: ret  */
    RECOMP_REGS_OUT();
}

void sub_11017509(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017509u);

L_11017509:
    PUSH32(esp, esi); /* 0x11017509: push esi */
    esi = MEM32(ecx + 0x34); /* 0x1101750A: mov esi, dword ptr [ecx + 0x34] */
    MEM32(ecx) = 0x11001F40u; /* 0x1101750D: mov dword ptr [ecx], 0x11001f40 */
    /* test esi, esi */ /* 0x11017513: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017525; /* 0x11017515: je 0x11017525 */
L_11017517:
    ecx = esi; /* 0x11017517: mov ecx, esi */
    RECOMP_CALL(sub_1100E431); /* 0x11017519: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1101751E: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101751F: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11017524: pop ecx */
L_11017525:
    esi = POP32_VAL(esp); /* 0x11017525: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11017526: ret  */
    RECOMP_REGS_OUT();
}

void sub_11017527(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017527u);

L_11017527:
    PUSH32(esp, esi); /* 0x11017527: push esi */
    esi = MEM32(ecx + 0x34); /* 0x11017528: mov esi, dword ptr [ecx + 0x34] */
    MEM32(ecx) = 0x11001F00u; /* 0x1101752B: mov dword ptr [ecx], 0x11001f00 */
    /* test esi, esi */ /* 0x11017531: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017543; /* 0x11017533: je 0x11017543 */
L_11017535:
    ecx = esi; /* 0x11017535: mov ecx, esi */
    RECOMP_CALL(sub_1100E431); /* 0x11017537: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1101753C: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x1101753D: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11017542: pop ecx */
L_11017543:
    esi = POP32_VAL(esp); /* 0x11017543: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11017544: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101754F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101754Fu);

L_1101754F:
    PUSH32(esp, esi); /* 0x1101754F: push esi */
    esi = ecx; /* 0x11017550: mov esi, ecx */
    MEM32(esi) = 0x110021C8u; /* 0x11017552: mov dword ptr [esi], 0x110021c8 */
    RECOMP_CALL(sub_11022683); /* 0x11017558: call 0x11022683 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x110014CCu; /* 0x1101755D: mov dword ptr [esi], 0x110014cc */
    esi = POP32_VAL(esp); /* 0x11017563: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11017564: ret  */
    RECOMP_REGS_OUT();
}

void sub_11017565(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017565u);

L_11017565:
    PUSH32(esp, esi); /* 0x11017565: push esi */
    esi = ecx; /* 0x11017566: mov esi, ecx */
    MEM32(esi) = 0x11002248u; /* 0x11017568: mov dword ptr [esi], 0x11002248 */
    RECOMP_CALL(sub_11022683); /* 0x1101756E: call 0x11022683 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x110014CCu; /* 0x11017573: mov dword ptr [esi], 0x110014cc */
    esi = POP32_VAL(esp); /* 0x11017579: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1101757A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1101757B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101757Bu);

L_1101757B:
    PUSH32(esp, esi); /* 0x1101757B: push esi */
    esi = ecx; /* 0x1101757C: mov esi, ecx */
    MEM32(esi) = 0x11002208u; /* 0x1101757E: mov dword ptr [esi], 0x11002208 */
    RECOMP_CALL(sub_11022683); /* 0x11017584: call 0x11022683 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x110014CCu; /* 0x11017589: mov dword ptr [esi], 0x110014cc */
    esi = POP32_VAL(esp); /* 0x1101758F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11017590: ret  */
    RECOMP_REGS_OUT();
}

void sub_11017591(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017591u);

L_11017591:
    PUSH32(esp, esi); /* 0x11017591: push esi */
    esi = ecx; /* 0x11017592: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x11017594: push dword ptr [esi + 8] */
    MEM32(esi) = 0x110021F4u; /* 0x11017597: mov dword ptr [esi], 0x110021f4 */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1101759D: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110175A3: pop ecx */
    MEM32(esi) = 0x110014CCu; /* 0x110175A4: mov dword ptr [esi], 0x110014cc */
    esi = POP32_VAL(esp); /* 0x110175AA: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110175AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_110175AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110175ACu);

L_110175AC:
    PUSH32(esp, esi); /* 0x110175AC: push esi */
    esi = ecx; /* 0x110175AD: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x110175AF: push dword ptr [esi + 8] */
    MEM32(esi) = 0x11002274u; /* 0x110175B2: mov dword ptr [esi], 0x11002274 */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x110175B8: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110175BE: pop ecx */
    MEM32(esi) = 0x110014CCu; /* 0x110175BF: mov dword ptr [esi], 0x110014cc */
    esi = POP32_VAL(esp); /* 0x110175C5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110175C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_110175C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110175C7u);

L_110175C7:
    PUSH32(esp, esi); /* 0x110175C7: push esi */
    esi = ecx; /* 0x110175C8: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x110175CA: push dword ptr [esi + 8] */
    MEM32(esi) = 0x11002234u; /* 0x110175CD: mov dword ptr [esi], 0x11002234 */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x110175D3: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110175D9: pop ecx */
    MEM32(esi) = 0x110014CCu; /* 0x110175DA: mov dword ptr [esi], 0x110014cc */
    esi = POP32_VAL(esp); /* 0x110175E0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110175E1: ret  */
    RECOMP_REGS_OUT();
}

void sub_110175E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110175E2u);

L_110175E2:
    PUSH32(esp, ebp); /* 0x110175E2: push ebp */
    ebp = esp; /* 0x110175E3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x110175E5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax)); /* 0x110175E8: push dword ptr [eax] */
    RECOMP_CALL(sub_11010213); /* 0x110175EA: call 0x11010213 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x110175EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110175F0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110175F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110175F3u);

L_110175F3:
    PUSH32(esp, ebp); /* 0x110175F3: push ebp */
    ebp = esp; /* 0x110175F4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110175F6: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110175F7: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x110175FA: mov esi, ecx */
    RECOMP_CALL(sub_1102B52B); /* 0x110175FC: call 0x1102b52b */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11017601: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11017603: pop esi */
    ebp = POP32_VAL(esp); /* 0x11017604: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11017605: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11017608(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017608u);

L_11017608:
    PUSH32(esp, ebp); /* 0x11017608: push ebp */
    ebp = esp; /* 0x11017609: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1101760B: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101760C: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1101760F: mov esi, ecx */
    RECOMP_CALL(sub_1102B56F); /* 0x11017611: call 0x1102b56f */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11017616: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11017618: pop esi */
    ebp = POP32_VAL(esp); /* 0x11017619: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101761A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101761D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101761Du);

L_1101761D:
    PUSH32(esp, ebp); /* 0x1101761D: push ebp */
    ebp = esp; /* 0x1101761E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11017620: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11017621: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x11017624: mov esi, ecx */
    RECOMP_CALL(sub_1102B5B3); /* 0x11017626: call 0x1102b5b3 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1101762B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1101762D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101762E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101762F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11017632(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017632u);

L_11017632:
    PUSH32(esp, ebp); /* 0x11017632: push ebp */
    ebp = esp; /* 0x11017633: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11017635: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11017636: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x11017639: mov esi, ecx */
    RECOMP_CALL(sub_1102B5E1); /* 0x1101763B: call 0x1102b5e1 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11017640: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11017642: pop esi */
    ebp = POP32_VAL(esp); /* 0x11017643: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11017644: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11017647(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017647u);

L_11017647:
    PUSH32(esp, 4); /* 0x11017647: push 4 */
    eax = 0x1103D313u; /* 0x11017649: mov eax, 0x1103d313 */
    RECOMP_CALL(sub_1103B372); /* 0x1101764E: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x11017653: mov ebx, ecx */
    edi = MEM32(ebp + 0x8); /* 0x11017655: mov edi, dword ptr [ebp + 8] */
    /* cmp ebx, edi */ /* 0x11017658: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110176CC; /* 0x1101765A: je 0x110176cc */
L_1101765C:
    eax = MEM32(edi + 0x20); /* 0x1101765C: mov eax, dword ptr [edi + 0x20] */
    esi = MEM32(eax); /* 0x1101765F: mov esi, dword ptr [eax] */
    eax = MEM32(edi + 0x10); /* 0x11017661: mov eax, dword ptr [edi + 0x10] */
    ecx = MEM32(eax); /* 0x11017664: mov ecx, dword ptr [eax] */
    eax = MEM32(edi + 0x30); /* 0x11017666: mov eax, dword ptr [edi + 0x30] */
    edx = MEM32(eax); /* 0x11017669: mov edx, dword ptr [eax] */
    eax = MEM32(ebx + 0x10); /* 0x1101766B: mov eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1101766E: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x11017670: sub edx, esi */
    _flag_k = FK_CMP;
    MEM32(eax) = ecx; /* 0x11017672: mov dword ptr [eax], ecx */
    eax = MEM32(ebx + 0x20); /* 0x11017674: mov eax, dword ptr [ebx + 0x20] */
    ecx = MEM32(ebp + 0x8); /* 0x11017677: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x1101767A: mov dword ptr [eax], esi */
    eax = MEM32(ebx + 0x30); /* 0x1101767C: mov eax, dword ptr [ebx + 0x30] */
    MEM32(eax) = edx; /* 0x1101767F: mov dword ptr [eax], edx */
    eax = MEM32(edi + 0x1C); /* 0x11017681: mov eax, dword ptr [edi + 0x1c] */
    edi = MEM32(eax); /* 0x11017684: mov edi, dword ptr [eax] */
    eax = MEM32(ecx + 0xC); /* 0x11017686: mov eax, dword ptr [ecx + 0xc] */
    edx = MEM32(eax); /* 0x11017689: mov edx, dword ptr [eax] */
    eax = MEM32(ecx + 0x2C); /* 0x1101768B: mov eax, dword ptr [ecx + 0x2c] */
    esi = MEM32(eax); /* 0x1101768E: mov esi, dword ptr [eax] */
    eax = MEM32(ebx + 0xC); /* 0x11017690: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x11017693: add esi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x11017695: sub esi, edi */
    _flag_k = FK_CMP;
    MEM32(eax) = edx; /* 0x11017697: mov dword ptr [eax], edx */
    eax = MEM32(ebx + 0x1C); /* 0x11017699: mov eax, dword ptr [ebx + 0x1c] */
    MEM32(eax) = edi; /* 0x1101769C: mov dword ptr [eax], edi */
    eax = MEM32(ebx + 0x2C); /* 0x1101769E: mov eax, dword ptr [ebx + 0x2c] */
    MEM32(eax) = esi; /* 0x110176A1: mov dword ptr [eax], esi */
    eax = ebp + (-0x10); /* 0x110176A3: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110176A6: push eax */
    RECOMP_CALL(sub_110292C8); /* 0x110176A7: call 0x110292c8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110176AC: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x110176B0: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x110176B2: push eax */
    eax = ebp + 0x8; /* 0x110176B3: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x110176B6: push eax */
    RECOMP_CALL(sub_11029D6B); /* 0x110176B7: call 0x11029d6b */
    RECOMP_FLAGS_IN();
    ecx = ebp + 0x8; /* 0x110176BC: lea ecx, [ebp + 8] */
    RECOMP_CALL(sub_1100E431); /* 0x110176BF: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x10); /* 0x110176C4: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x110176C7: call 0x1100e431 */
    RECOMP_FLAGS_IN();
L_110176CC:
    eax = ebx; /* 0x110176CC: mov eax, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x110176CE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110176D3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110176D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110176D6u);

L_110176D6:
    PUSH32(esp, 4); /* 0x110176D6: push 4 */
    eax = 0x1103D313u; /* 0x110176D8: mov eax, 0x1103d313 */
    RECOMP_CALL(sub_1103B372); /* 0x110176DD: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x110176E2: mov edi, ecx */
    ebx = MEM32(ebp + 0x8); /* 0x110176E4: mov ebx, dword ptr [ebp + 8] */
    /* cmp edi, ebx */ /* 0x110176E7: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11017760; /* 0x110176E9: je 0x11017760 */
L_110176EB:
    eax = MEM32(ebx + 0x20); /* 0x110176EB: mov eax, dword ptr [ebx + 0x20] */
    esi = MEM32(eax); /* 0x110176EE: mov esi, dword ptr [eax] */
    eax = MEM32(ebx + 0x10); /* 0x110176F0: mov eax, dword ptr [ebx + 0x10] */
    ecx = MEM32(eax); /* 0x110176F3: mov ecx, dword ptr [eax] */
    eax = MEM32(ebx + 0x30); /* 0x110176F5: mov eax, dword ptr [ebx + 0x30] */
    eax = MEM32(eax); /* 0x110176F8: mov eax, dword ptr [eax] */
    edx = esi + eax * 2; /* 0x110176FA: lea edx, [esi + eax*2] */
    eax = MEM32(edi + 0x10); /* 0x110176FD: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x11017700: sub edx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x11017702: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    MEM32(eax) = ecx; /* 0x11017704: mov dword ptr [eax], ecx */
    eax = MEM32(edi + 0x20); /* 0x11017706: mov eax, dword ptr [edi + 0x20] */
    MEM32(eax) = esi; /* 0x11017709: mov dword ptr [eax], esi */
    eax = MEM32(edi + 0x30); /* 0x1101770B: mov eax, dword ptr [edi + 0x30] */
    MEM32(eax) = edx; /* 0x1101770E: mov dword ptr [eax], edx */
    eax = MEM32(ebx + 0x1C); /* 0x11017710: mov eax, dword ptr [ebx + 0x1c] */
    esi = MEM32(eax); /* 0x11017713: mov esi, dword ptr [eax] */
    eax = MEM32(ebx + 0xC); /* 0x11017715: mov eax, dword ptr [ebx + 0xc] */
    ecx = MEM32(eax); /* 0x11017718: mov ecx, dword ptr [eax] */
    eax = MEM32(ebx + 0x2C); /* 0x1101771A: mov eax, dword ptr [ebx + 0x2c] */
    eax = MEM32(eax); /* 0x1101771D: mov eax, dword ptr [eax] */
    edx = esi + eax * 2; /* 0x1101771F: lea edx, [esi + eax*2] */
    eax = MEM32(edi + 0xC); /* 0x11017722: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x11017725: sub edx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x11017727: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    MEM32(eax) = ecx; /* 0x11017729: mov dword ptr [eax], ecx */
    ecx = ebx; /* 0x1101772B: mov ecx, ebx */
    eax = MEM32(edi + 0x1C); /* 0x1101772D: mov eax, dword ptr [edi + 0x1c] */
    MEM32(eax) = esi; /* 0x11017730: mov dword ptr [eax], esi */
    eax = MEM32(edi + 0x2C); /* 0x11017732: mov eax, dword ptr [edi + 0x2c] */
    MEM32(eax) = edx; /* 0x11017735: mov dword ptr [eax], edx */
    eax = ebp + (-0x10); /* 0x11017737: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1101773A: push eax */
    RECOMP_CALL(sub_110292C8); /* 0x1101773B: call 0x110292c8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11017740: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x11017744: mov ecx, edi */
    PUSH32(esp, eax); /* 0x11017746: push eax */
    eax = ebp + 0x8; /* 0x11017747: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1101774A: push eax */
    RECOMP_CALL(sub_11029D6B); /* 0x1101774B: call 0x11029d6b */
    RECOMP_FLAGS_IN();
    ecx = ebp + 0x8; /* 0x11017750: lea ecx, [ebp + 8] */
    RECOMP_CALL(sub_1100E431); /* 0x11017753: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x10); /* 0x11017758: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1100E431); /* 0x1101775B: call 0x1100e431 */
    RECOMP_FLAGS_IN();
L_11017760:
    eax = edi; /* 0x11017760: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11017762: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11017767: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101776A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101776Au);

L_1101776A:
    PUSH32(esp, ebp); /* 0x1101776A: push ebp */
    ebp = esp; /* 0x1101776B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1101776D: push esi */
    esi = ecx; /* 0x1101776E: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x11017770: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x11017773: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017784; /* 0x11017775: je 0x11017784 */
L_11017777:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11017777: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102B39E); /* 0x1101777A: call 0x1102b39e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1101777F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11017787; /* 0x11017782: jne 0x11017787 */
L_11017784:
    MEM8(esi) = (uint8_t)(1); /* 0x11017784: mov byte ptr [esi], 1 */
L_11017787:
    eax = esi; /* 0x11017787: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11017789: pop esi */
    ebp = POP32_VAL(esp); /* 0x1101778A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101778B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1101778E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101778Eu);

L_1101778E:
    PUSH32(esp, ebp); /* 0x1101778E: push ebp */
    ebp = esp; /* 0x1101778F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11017791: push esi */
    esi = ecx; /* 0x11017792: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x11017794: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x11017797: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110177AD; /* 0x11017799: je 0x110177ad */
L_1101779B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101779B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102B3DC); /* 0x1101779E: call 0x1102b3dc */
    RECOMP_FLAGS_IN();
    ecx = 0xFFFFu; /* 0x110177A3: mov ecx, 0xffff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x110177A8: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110177B0; /* 0x110177AB: jne 0x110177b0 */
L_110177AD:
    MEM8(esi) = (uint8_t)(1); /* 0x110177AD: mov byte ptr [esi], 1 */
L_110177B0:
    eax = esi; /* 0x110177B0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x110177B2: pop esi */
    ebp = POP32_VAL(esp); /* 0x110177B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110177B4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110177B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110177B7u);
    RECOMP_EH_ENTER();

L_110177B7:
    PUSH32(esp, 0x2Cu); /* 0x110177B7: push 0x2c */
    eax = 0x1103D346u; /* 0x110177B9: mov eax, 0x1103d346 */
    RECOMP_CALL(sub_1103B3DB); /* 0x110177BE: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110177C3: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x110177C5: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110177C8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = esi; /* 0x110177CA: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x14)) = edi; /* 0x110177CD: mov dword ptr [ebp - 0x14], edi */
    eax = MEM32(esi); /* 0x110177D0: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110177D2: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110177D5: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110177D9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110177E2; /* 0x110177DB: je 0x110177e2 */
L_110177DD:
    eax = MEM32(ecx); /* 0x110177DD: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110177DF: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_110177E2:
    PUSH32(esp, edi); /* 0x110177E2: push edi */
    ecx = esi; /* 0x110177E3: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x110177E5: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x110177E8: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x24)) = (uint8_t)(LO8(eax)); /* 0x110177ED: mov byte ptr [ebp - 0x24], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x110177F0: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x110177F7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110178C4; /* 0x110177F9: je 0x110178c4 */
L_110177FF:
    eax = ebp + (-0x20); /* 0x110177FF: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x11017802: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, eax); /* 0x11017805: push eax */
    eax = MEM32(esi); /* 0x11017806: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11017808: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101780B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101780D: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11017812: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11017813: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_110157D5); /* 0x11017817: call 0x110157d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101781C: pop ecx */
    ecx = ebp + (-0x20); /* 0x1101781D: lea ecx, [ebp - 0x20] */
    ebx = eax; /* 0x11017820: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11017822: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x11017827: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x1C); /* 0x11017829: lea edx, [ebp - 0x1c] */
    eax = MEM32(ebx); /* 0x1101782C: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x1101782E: push edx */
    edx = ebp + (-0x14); /* 0x1101782F: lea edx, [ebp - 0x14] */
    MEM8(ebp + (-0x2C)) = (uint8_t)(1); /* 0x11017832: mov byte ptr [ebp - 0x2c], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11017836: mov ecx, dword ptr [ecx + 4] */
    PUSH32(esp, edx); /* 0x11017839: push edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101783A: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101783C: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11017840: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x11017841: push dword ptr [ebp - 0x2c] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11017844: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11017848: push edi */
    MEM8(ebp + (-0x34)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11017849: sete byte ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1101784D: push dword ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11017850: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x38); /* 0x11017853: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x11017856: push ecx */
    ecx = ebx; /* 0x11017857: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11017859: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    goto L_1101788E; /* 0x1101785C: jmp 0x1101788e */
L_11017889:
    esi = MEM32(ebp + (-0x18)); /* 0x11017889: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101788C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101788E:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101788E: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11017891: mov dword ptr [ebp - 4], 1 */
    /* test LO8(ecx), 2 */ /* 0x11017898: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110178B5; /* 0x1101789B: jne 0x110178b5 */
L_1101789D:
    edx = MEM32(ebp + (-0x1C)); /* 0x1101789D: mov edx, dword ptr [ebp - 0x1c] */
    eax = edx + 0x8000; /* 0x110178A0: lea eax, [edx + 0x8000] */
    /* cmp eax, 0xFFFFu */ /* 0x110178A6: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110178B5; /* 0x110178AB: ja 0x110178b5 */
L_110178AD:
    eax = MEM32(ebp + 0x8); /* 0x110178AD: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x110178B0: mov word ptr [eax], dx */
    goto L_110178C7; /* 0x110178B3: jmp 0x110178c7 */
L_110178B5:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x110178B5: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x110178B8: mov dword ptr [ebp - 0x14], ecx */
    goto L_110178C7; /* 0x110178BB: jmp 0x110178c7 */
L_110178C4:
    ecx = MEM32(ebp + (-0x14)); /* 0x110178C4: mov ecx, dword ptr [ebp - 0x14] */
L_110178C7:
    eax = MEM32(esi); /* 0x110178C7: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110178C9: push edi */
    PUSH32(esp, ecx); /* 0x110178CA: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x110178CB: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110178CE: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110178D0: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110178D5: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110178D7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110178DB: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110178DE: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110178E2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110178EB; /* 0x110178E4: je 0x110178eb */
L_110178E6:
    eax = MEM32(ecx); /* 0x110178E6: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110178E8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110178EB:
    eax = esi; /* 0x110178EB: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110178ED: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x110178F2: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x11017889u: goto L_11017889;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101785E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101785Eu);

L_1101785E:
    ecx = MEM32(ebp + (-0x18)); /* 0x1101785E: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017861: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11017863: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11017865: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11017868: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101786A: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101786D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11017870: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11017878; /* 0x11017873: jne 0x11017878 */
L_11017875:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11017875: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11017878:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11017878: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101787B: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101787E: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110178BD; /* 0x11017881: jne 0x110178bd */
L_11017883:
    eax = 0x11017889u; /* 0x11017883: mov eax, 0x11017889 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11017888: ret  */
L_110178BD:
    PUSH32(esp, edi); /* 0x110178BD: push edi */
    PUSH32(esp, edi); /* 0x110178BE: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x110178BF: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x110178C4: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(esi); /* 0x110178C7: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110178C9: push edi */
    PUSH32(esp, ecx); /* 0x110178CA: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x110178CB: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110178CE: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110178D0: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110178D5: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110178D7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110178DB: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110178DE: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110178E2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110178EB; /* 0x110178E4: je 0x110178eb */
L_110178E6:
    eax = MEM32(ecx); /* 0x110178E6: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110178E8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110178EB:
    eax = esi; /* 0x110178EB: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110178ED: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110178F2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11017889(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017889u);

L_11017889:
    esi = MEM32(ebp + (-0x18)); /* 0x11017889: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101788C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x14)); /* 0x1101788E: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11017891: mov dword ptr [ebp - 4], 1 */
    /* test LO8(ecx), 2 */ /* 0x11017898: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110178B5; /* 0x1101789B: jne 0x110178b5 */
L_1101789D:
    edx = MEM32(ebp + (-0x1C)); /* 0x1101789D: mov edx, dword ptr [ebp - 0x1c] */
    eax = edx + 0x8000; /* 0x110178A0: lea eax, [edx + 0x8000] */
    /* cmp eax, 0xFFFFu */ /* 0x110178A6: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110178B5; /* 0x110178AB: ja 0x110178b5 */
L_110178AD:
    eax = MEM32(ebp + 0x8); /* 0x110178AD: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x110178B0: mov word ptr [eax], dx */
    goto L_110178C7; /* 0x110178B3: jmp 0x110178c7 */
L_110178B5:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x110178B5: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x110178B8: mov dword ptr [ebp - 0x14], ecx */
    goto L_110178C7; /* 0x110178BB: jmp 0x110178c7 */
L_110178C7:
    eax = MEM32(esi); /* 0x110178C7: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x110178C9: push edi */
    PUSH32(esp, ecx); /* 0x110178CA: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x110178CB: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110178CE: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110178D0: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110178D5: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110178D7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110178DB: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110178DE: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110178E2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110178EB; /* 0x110178E4: je 0x110178eb */
L_110178E6:
    eax = MEM32(ecx); /* 0x110178E6: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110178E8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110178EB:
    eax = esi; /* 0x110178EB: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110178ED: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110178F2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110178F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110178F5u);
    RECOMP_EH_ENTER();

L_110178F5:
    PUSH32(esp, 0x28u); /* 0x110178F5: push 0x28 */
    eax = 0x1103D379u; /* 0x110178F7: mov eax, 0x1103d379 */
    RECOMP_CALL(sub_1103B3DB); /* 0x110178FC: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11017901: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11017903: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017906: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11017908: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x1101790B: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x1101790E: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11017910: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017913: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017917: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017920; /* 0x11017919: je 0x11017920 */
L_1101791B:
    eax = MEM32(ecx); /* 0x1101791B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1101791D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11017920:
    PUSH32(esp, edi); /* 0x11017920: push edi */
    ecx = esi; /* 0x11017921: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11017923: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x11017926: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101792B: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x1101792E: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11017935: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017999; /* 0x11017937: je 0x11017999 */
L_11017939:
    eax = ebp + (-0x1C); /* 0x11017939: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101793C: push eax */
    eax = MEM32(esi); /* 0x1101793D: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101793F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017942: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11017944: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11017949: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101794A: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_110157D5); /* 0x1101794E: call 0x110157d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11017953: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11017954: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11017957: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11017959: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101795E: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11017961: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11017963: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11017966: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11017968: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11017969: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x1101796D: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017970: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11017972: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11017976: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11017977: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x1101797A: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1101797E: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1101797F: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11017983: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11017986: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11017989: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101798C: push ecx */
    ecx = ebx; /* 0x1101798D: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1101798F: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11017992: mov dword ptr [ebp - 4], 1 */
L_11017999:
    eax = MEM32(esi); /* 0x11017999: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101799B: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101799C: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101799F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110179A2: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110179A4: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110179A9: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110179AB: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110179AF: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110179B2: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110179B6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110179BF; /* 0x110179B8: je 0x110179bf */
L_110179BA:
    eax = MEM32(ecx); /* 0x110179BA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110179BC: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110179BF:
    eax = esi; /* 0x110179BF: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110179C1: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x110179C6: ret 4 */
L_110179F4:
    esi = MEM32(ebp + (-0x14)); /* 0x110179F4: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110179F7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110179F9: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11017999; /* 0x11017A00: jmp 0x11017999 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x110179F4u: goto L_110179F4;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_110179C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110179C9u);

L_110179C9:
    ecx = MEM32(ebp + (-0x14)); /* 0x110179C9: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110179CC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110179CE: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x110179D0: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x110179D3: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x110179D5: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110179D8: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x110179DB: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110179E3; /* 0x110179DE: jne 0x110179e3 */
L_110179E0:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110179E0: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110179E3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x110179E3: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x110179E6: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110179E9: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11017A02; /* 0x110179EC: jne 0x11017a02 */
L_110179EE:
    eax = 0x110179F4u; /* 0x110179EE: mov eax, 0x110179f4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110179F3: ret  */
L_11017A02:
    PUSH32(esp, edi); /* 0x11017A02: push edi */
    PUSH32(esp, edi); /* 0x11017A03: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11017A04: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11017A09u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110179F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110179F4u);

    goto L_110179F4;
L_11017999:
    eax = MEM32(esi); /* 0x11017999: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101799B: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101799C: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101799F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110179A2: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x110179A4: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110179A9: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110179AB: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110179AF: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110179B2: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110179B6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110179BF; /* 0x110179B8: je 0x110179bf */
L_110179BA:
    eax = MEM32(ecx); /* 0x110179BA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110179BC: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110179BF:
    eax = esi; /* 0x110179BF: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110179C1: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110179C6: ret 4 */
L_110179F4:
    esi = MEM32(ebp + (-0x14)); /* 0x110179F4: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110179F7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110179F9: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11017999; /* 0x11017A00: jmp 0x11017999 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11017A0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017A0Au);
    RECOMP_EH_ENTER();

L_11017A0A:
    PUSH32(esp, 0x2Cu); /* 0x11017A0A: push 0x2c */
    eax = 0x1103D3ACu; /* 0x11017A0C: mov eax, 0x1103d3ac */
    RECOMP_CALL(sub_1103B3DB); /* 0x11017A11: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11017A16: mov esi, ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x11017A18: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017A1B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = esi; /* 0x11017A1D: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x14)) = edi; /* 0x11017A20: mov dword ptr [ebp - 0x14], edi */
    eax = MEM32(esi); /* 0x11017A23: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11017A25: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017A28: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017A2C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017A35; /* 0x11017A2E: je 0x11017a35 */
L_11017A30:
    eax = MEM32(ecx); /* 0x11017A30: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11017A32: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11017A35:
    PUSH32(esp, edi); /* 0x11017A35: push edi */
    ecx = esi; /* 0x11017A36: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11017A38: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x11017A3B: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x24)) = (uint8_t)(LO8(eax)); /* 0x11017A40: mov byte ptr [ebp - 0x24], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11017A43: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11017A4A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017B14; /* 0x11017A4C: je 0x11017b14 */
L_11017A52:
    eax = ebp + (-0x20); /* 0x11017A52: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x11017A55: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, eax); /* 0x11017A58: push eax */
    eax = MEM32(esi); /* 0x11017A59: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11017A5B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017A5E: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11017A60: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11017A65: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11017A66: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_110157D5); /* 0x11017A6A: call 0x110157d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11017A6F: pop ecx */
    ecx = ebp + (-0x20); /* 0x11017A70: lea ecx, [ebp - 0x20] */
    ebx = eax; /* 0x11017A73: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11017A75: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x11017A7A: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x1C); /* 0x11017A7C: lea edx, [ebp - 0x1c] */
    eax = MEM32(ebx); /* 0x11017A7F: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11017A81: push edx */
    edx = ebp + (-0x14); /* 0x11017A82: lea edx, [ebp - 0x14] */
    MEM8(ebp + (-0x2C)) = (uint8_t)(1); /* 0x11017A85: mov byte ptr [ebp - 0x2c], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11017A89: mov ecx, dword ptr [ecx + 4] */
    PUSH32(esp, edx); /* 0x11017A8C: push edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017A8D: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11017A8F: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11017A93: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x11017A94: push dword ptr [ebp - 0x2c] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11017A97: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11017A9B: push edi */
    MEM8(ebp + (-0x34)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11017A9C: sete byte ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x11017AA0: push dword ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11017AA3: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x38); /* 0x11017AA6: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x11017AA9: push ecx */
    ecx = ebx; /* 0x11017AAA: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11017AAC: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    goto L_11017AE1; /* 0x11017AAF: jmp 0x11017ae1 */
L_11017ADC:
    esi = MEM32(ebp + (-0x18)); /* 0x11017ADC: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017ADF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11017AE1:
    ecx = MEM32(ebp + (-0x14)); /* 0x11017AE1: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11017AE4: mov dword ptr [ebp - 4], 1 */
    /* test LO8(ecx), 2 */ /* 0x11017AEB: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11017B05; /* 0x11017AEE: jne 0x11017b05 */
L_11017AF0:
    edx = MEM32(ebp + (-0x1C)); /* 0x11017AF0: mov edx, dword ptr [ebp - 0x1c] */
    eax = edx + (-0x80000000); /* 0x11017AF3: lea eax, [edx - 0x80000000] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11017AF9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11017B05; /* 0x11017AFC: ja 0x11017b05 */
L_11017AFE:
    eax = MEM32(ebp + 0x8); /* 0x11017AFE: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x11017B01: mov dword ptr [eax], edx */
    goto L_11017B17; /* 0x11017B03: jmp 0x11017b17 */
L_11017B05:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x11017B05: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x11017B08: mov dword ptr [ebp - 0x14], ecx */
    goto L_11017B17; /* 0x11017B0B: jmp 0x11017b17 */
L_11017B14:
    ecx = MEM32(ebp + (-0x14)); /* 0x11017B14: mov ecx, dword ptr [ebp - 0x14] */
L_11017B17:
    eax = MEM32(esi); /* 0x11017B17: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11017B19: push edi */
    PUSH32(esp, ecx); /* 0x11017B1A: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x11017B1B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017B1E: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11017B20: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11017B25: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11017B27: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11017B2B: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017B2E: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017B32: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017B3B; /* 0x11017B34: je 0x11017b3b */
L_11017B36:
    eax = MEM32(ecx); /* 0x11017B36: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11017B38: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11017B3B:
    eax = esi; /* 0x11017B3B: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017B3D: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11017B42: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x11017ADCu: goto L_11017ADC;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11017AB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017AB1u);

L_11017AB1:
    ecx = MEM32(ebp + (-0x18)); /* 0x11017AB1: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017AB4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11017AB6: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11017AB8: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11017ABB: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11017ABD: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11017AC0: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11017AC3: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11017ACB; /* 0x11017AC6: jne 0x11017acb */
L_11017AC8:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11017AC8: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11017ACB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11017ACB: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11017ACE: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11017AD1: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11017B0D; /* 0x11017AD4: jne 0x11017b0d */
L_11017AD6:
    eax = 0x11017ADCu; /* 0x11017AD6: mov eax, 0x11017adc */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11017ADB: ret  */
L_11017B0D:
    PUSH32(esp, edi); /* 0x11017B0D: push edi */
    PUSH32(esp, edi); /* 0x11017B0E: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11017B0F: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x11017B14: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(esi); /* 0x11017B17: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11017B19: push edi */
    PUSH32(esp, ecx); /* 0x11017B1A: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x11017B1B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017B1E: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11017B20: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11017B25: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11017B27: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11017B2B: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017B2E: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017B32: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017B3B; /* 0x11017B34: je 0x11017b3b */
L_11017B36:
    eax = MEM32(ecx); /* 0x11017B36: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11017B38: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11017B3B:
    eax = esi; /* 0x11017B3B: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017B3D: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11017B42: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11017ADC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017ADCu);

L_11017ADC:
    esi = MEM32(ebp + (-0x18)); /* 0x11017ADC: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017ADF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x14)); /* 0x11017AE1: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11017AE4: mov dword ptr [ebp - 4], 1 */
    /* test LO8(ecx), 2 */ /* 0x11017AEB: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11017B05; /* 0x11017AEE: jne 0x11017b05 */
L_11017AF0:
    edx = MEM32(ebp + (-0x1C)); /* 0x11017AF0: mov edx, dword ptr [ebp - 0x1c] */
    eax = edx + (-0x80000000); /* 0x11017AF3: lea eax, [edx - 0x80000000] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11017AF9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11017B05; /* 0x11017AFC: ja 0x11017b05 */
L_11017AFE:
    eax = MEM32(ebp + 0x8); /* 0x11017AFE: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x11017B01: mov dword ptr [eax], edx */
    goto L_11017B17; /* 0x11017B03: jmp 0x11017b17 */
L_11017B05:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x11017B05: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x11017B08: mov dword ptr [ebp - 0x14], ecx */
    goto L_11017B17; /* 0x11017B0B: jmp 0x11017b17 */
L_11017B17:
    eax = MEM32(esi); /* 0x11017B17: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11017B19: push edi */
    PUSH32(esp, ecx); /* 0x11017B1A: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x11017B1B: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017B1E: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11017B20: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11017B25: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11017B27: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11017B2B: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017B2E: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017B32: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017B3B; /* 0x11017B34: je 0x11017b3b */
L_11017B36:
    eax = MEM32(ecx); /* 0x11017B36: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11017B38: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11017B3B:
    eax = esi; /* 0x11017B3B: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017B3D: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11017B42: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11017B45(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017B45u);
    RECOMP_EH_ENTER();

L_11017B45:
    PUSH32(esp, 0x28u); /* 0x11017B45: push 0x28 */
    eax = 0x1103D3DFu; /* 0x11017B47: mov eax, 0x1103d3df */
    RECOMP_CALL(sub_1103B3DB); /* 0x11017B4C: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11017B51: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11017B53: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017B56: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11017B58: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11017B5B: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11017B5E: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11017B60: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017B63: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017B67: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017B70; /* 0x11017B69: je 0x11017b70 */
L_11017B6B:
    eax = MEM32(ecx); /* 0x11017B6B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11017B6D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11017B70:
    PUSH32(esp, edi); /* 0x11017B70: push edi */
    ecx = esi; /* 0x11017B71: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11017B73: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x11017B76: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11017B7B: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11017B7E: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11017B85: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017BE9; /* 0x11017B87: je 0x11017be9 */
L_11017B89:
    eax = ebp + (-0x1C); /* 0x11017B89: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11017B8C: push eax */
    eax = MEM32(esi); /* 0x11017B8D: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11017B8F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017B92: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11017B94: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11017B99: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11017B9A: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_110157D5); /* 0x11017B9E: call 0x110157d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11017BA3: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11017BA4: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11017BA7: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11017BA9: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11017BAE: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11017BB1: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11017BB3: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11017BB6: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11017BB8: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11017BB9: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11017BBD: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017BC0: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11017BC2: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11017BC6: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11017BC7: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11017BCA: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11017BCE: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11017BCF: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11017BD3: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11017BD6: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11017BD9: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11017BDC: push ecx */
    ecx = ebx; /* 0x11017BDD: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x11017BDF: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11017BE2: mov dword ptr [ebp - 4], 1 */
L_11017BE9:
    eax = MEM32(esi); /* 0x11017BE9: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11017BEB: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11017BEC: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11017BEF: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017BF2: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11017BF4: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11017BF9: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11017BFB: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11017BFF: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017C02: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017C06: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017C0F; /* 0x11017C08: je 0x11017c0f */
L_11017C0A:
    eax = MEM32(ecx); /* 0x11017C0A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11017C0C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11017C0F:
    eax = esi; /* 0x11017C0F: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017C11: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11017C16: ret 4 */
L_11017C44:
    esi = MEM32(ebp + (-0x14)); /* 0x11017C44: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017C47: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11017C49: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11017BE9; /* 0x11017C50: jmp 0x11017be9 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11017C44u: goto L_11017C44;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11017C19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017C19u);

L_11017C19:
    ecx = MEM32(ebp + (-0x14)); /* 0x11017C19: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017C1C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11017C1E: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11017C20: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11017C23: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11017C25: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11017C28: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11017C2B: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11017C33; /* 0x11017C2E: jne 0x11017c33 */
L_11017C30:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11017C30: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11017C33:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11017C33: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11017C36: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11017C39: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11017C52; /* 0x11017C3C: jne 0x11017c52 */
L_11017C3E:
    eax = 0x11017C44u; /* 0x11017C3E: mov eax, 0x11017c44 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11017C43: ret  */
L_11017C52:
    PUSH32(esp, edi); /* 0x11017C52: push edi */
    PUSH32(esp, edi); /* 0x11017C53: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11017C54: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11017C59u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11017C44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017C44u);

    goto L_11017C44;
L_11017BE9:
    eax = MEM32(esi); /* 0x11017BE9: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11017BEB: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11017BEC: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11017BEF: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017BF2: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11017BF4: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11017BF9: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11017BFB: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11017BFF: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017C02: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017C06: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017C0F; /* 0x11017C08: je 0x11017c0f */
L_11017C0A:
    eax = MEM32(ecx); /* 0x11017C0A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11017C0C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11017C0F:
    eax = esi; /* 0x11017C0F: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017C11: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11017C16: ret 4 */
L_11017C44:
    esi = MEM32(ebp + (-0x14)); /* 0x11017C44: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017C47: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11017C49: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11017BE9; /* 0x11017C50: jmp 0x11017be9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11017C5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017C5Au);
    RECOMP_EH_ENTER();

L_11017C5A:
    PUSH32(esp, 0x28u); /* 0x11017C5A: push 0x28 */
    eax = 0x1103D412u; /* 0x11017C5C: mov eax, 0x1103d412 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11017C61: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11017C66: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11017C68: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017C6B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11017C6D: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11017C70: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11017C73: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11017C75: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017C78: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017C7C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017C85; /* 0x11017C7E: je 0x11017c85 */
L_11017C80:
    eax = MEM32(ecx); /* 0x11017C80: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11017C82: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11017C85:
    PUSH32(esp, edi); /* 0x11017C85: push edi */
    ecx = esi; /* 0x11017C86: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11017C88: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x11017C8B: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11017C90: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11017C93: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11017C9A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017CFE; /* 0x11017C9C: je 0x11017cfe */
L_11017C9E:
    eax = ebp + (-0x1C); /* 0x11017C9E: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11017CA1: push eax */
    eax = MEM32(esi); /* 0x11017CA2: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11017CA4: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017CA7: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11017CA9: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11017CAE: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11017CAF: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_110157D5); /* 0x11017CB3: call 0x110157d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11017CB8: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11017CB9: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11017CBC: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11017CBE: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11017CC3: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11017CC6: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11017CC8: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11017CCB: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11017CCD: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11017CCE: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11017CD2: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017CD5: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11017CD7: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11017CDB: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11017CDC: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11017CDF: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11017CE3: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11017CE4: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11017CE8: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11017CEB: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11017CEE: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11017CF1: push ecx */
    ecx = ebx; /* 0x11017CF2: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11017CF4: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11017CF7: mov dword ptr [ebp - 4], 1 */
L_11017CFE:
    eax = MEM32(esi); /* 0x11017CFE: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11017D00: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11017D01: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11017D04: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017D07: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11017D09: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11017D0E: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11017D10: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11017D14: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017D17: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017D1B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017D24; /* 0x11017D1D: je 0x11017d24 */
L_11017D1F:
    eax = MEM32(ecx); /* 0x11017D1F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11017D21: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11017D24:
    eax = esi; /* 0x11017D24: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017D26: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11017D2B: ret 4 */
L_11017D59:
    esi = MEM32(ebp + (-0x14)); /* 0x11017D59: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017D5C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11017D5E: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11017CFE; /* 0x11017D65: jmp 0x11017cfe */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11017D59u: goto L_11017D59;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11017D2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017D2Eu);

L_11017D2E:
    ecx = MEM32(ebp + (-0x14)); /* 0x11017D2E: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017D31: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11017D33: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11017D35: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11017D38: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11017D3A: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11017D3D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11017D40: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11017D48; /* 0x11017D43: jne 0x11017d48 */
L_11017D45:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11017D45: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11017D48:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11017D48: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11017D4B: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11017D4E: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11017D67; /* 0x11017D51: jne 0x11017d67 */
L_11017D53:
    eax = 0x11017D59u; /* 0x11017D53: mov eax, 0x11017d59 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11017D58: ret  */
L_11017D67:
    PUSH32(esp, edi); /* 0x11017D67: push edi */
    PUSH32(esp, edi); /* 0x11017D68: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11017D69: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11017D6Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11017D59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017D59u);

    goto L_11017D59;
L_11017CFE:
    eax = MEM32(esi); /* 0x11017CFE: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11017D00: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11017D01: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11017D04: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017D07: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11017D09: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11017D0E: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11017D10: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11017D14: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017D17: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017D1B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017D24; /* 0x11017D1D: je 0x11017d24 */
L_11017D1F:
    eax = MEM32(ecx); /* 0x11017D1F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11017D21: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11017D24:
    eax = esi; /* 0x11017D24: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017D26: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11017D2B: ret 4 */
L_11017D59:
    esi = MEM32(ebp + (-0x14)); /* 0x11017D59: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017D5C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11017D5E: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11017CFE; /* 0x11017D65: jmp 0x11017cfe */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11017D6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017D6Fu);
    RECOMP_EH_ENTER();

L_11017D6F:
    PUSH32(esp, 0x28u); /* 0x11017D6F: push 0x28 */
    eax = 0x1103D445u; /* 0x11017D71: mov eax, 0x1103d445 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11017D76: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11017D7B: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11017D7D: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017D80: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11017D82: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11017D85: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11017D88: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11017D8A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017D8D: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017D91: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017D9A; /* 0x11017D93: je 0x11017d9a */
L_11017D95:
    eax = MEM32(ecx); /* 0x11017D95: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11017D97: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11017D9A:
    PUSH32(esp, edi); /* 0x11017D9A: push edi */
    ecx = esi; /* 0x11017D9B: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11017D9D: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x11017DA0: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11017DA5: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11017DA8: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11017DAF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017E13; /* 0x11017DB1: je 0x11017e13 */
L_11017DB3:
    eax = ebp + (-0x1C); /* 0x11017DB3: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11017DB6: push eax */
    eax = MEM32(esi); /* 0x11017DB7: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11017DB9: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017DBC: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11017DBE: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11017DC3: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11017DC4: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_110157D5); /* 0x11017DC8: call 0x110157d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11017DCD: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11017DCE: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11017DD1: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11017DD3: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11017DD8: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11017DDB: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11017DDD: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11017DE0: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11017DE2: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11017DE3: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11017DE7: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017DEA: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11017DEC: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11017DF0: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11017DF1: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11017DF4: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11017DF8: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11017DF9: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11017DFD: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11017E00: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11017E03: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11017E06: push ecx */
    ecx = ebx; /* 0x11017E07: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x11017E09: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11017E0C: mov dword ptr [ebp - 4], 1 */
L_11017E13:
    eax = MEM32(esi); /* 0x11017E13: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11017E15: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11017E16: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11017E19: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017E1C: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11017E1E: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11017E23: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11017E25: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11017E29: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017E2C: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017E30: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017E39; /* 0x11017E32: je 0x11017e39 */
L_11017E34:
    eax = MEM32(ecx); /* 0x11017E34: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11017E36: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11017E39:
    eax = esi; /* 0x11017E39: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017E3B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11017E40: ret 4 */
L_11017E6E:
    esi = MEM32(ebp + (-0x14)); /* 0x11017E6E: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017E71: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11017E73: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11017E13; /* 0x11017E7A: jmp 0x11017e13 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11017E6Eu: goto L_11017E6E;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11017E43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017E43u);

L_11017E43:
    ecx = MEM32(ebp + (-0x14)); /* 0x11017E43: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017E46: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11017E48: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11017E4A: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11017E4D: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11017E4F: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11017E52: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11017E55: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11017E5D; /* 0x11017E58: jne 0x11017e5d */
L_11017E5A:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11017E5A: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11017E5D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11017E5D: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11017E60: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11017E63: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11017E7C; /* 0x11017E66: jne 0x11017e7c */
L_11017E68:
    eax = 0x11017E6Eu; /* 0x11017E68: mov eax, 0x11017e6e */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11017E6D: ret  */
L_11017E7C:
    PUSH32(esp, edi); /* 0x11017E7C: push edi */
    PUSH32(esp, edi); /* 0x11017E7D: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11017E7E: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11017E83u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11017E6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017E6Eu);

    goto L_11017E6E;
L_11017E13:
    eax = MEM32(esi); /* 0x11017E13: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11017E15: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11017E16: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11017E19: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017E1C: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11017E1E: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11017E23: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11017E25: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11017E29: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017E2C: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017E30: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017E39; /* 0x11017E32: je 0x11017e39 */
L_11017E34:
    eax = MEM32(ecx); /* 0x11017E34: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11017E36: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11017E39:
    eax = esi; /* 0x11017E39: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017E3B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11017E40: ret 4 */
L_11017E6E:
    esi = MEM32(ebp + (-0x14)); /* 0x11017E6E: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017E71: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11017E73: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11017E13; /* 0x11017E7A: jmp 0x11017e13 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11017E84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017E84u);
    RECOMP_EH_ENTER();

L_11017E84:
    PUSH32(esp, 0x28u); /* 0x11017E84: push 0x28 */
    eax = 0x1103D478u; /* 0x11017E86: mov eax, 0x1103d478 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11017E8B: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11017E90: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11017E92: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017E95: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11017E97: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11017E9A: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11017E9D: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11017E9F: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017EA2: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017EA6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017EAF; /* 0x11017EA8: je 0x11017eaf */
L_11017EAA:
    eax = MEM32(ecx); /* 0x11017EAA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11017EAC: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11017EAF:
    PUSH32(esp, edi); /* 0x11017EAF: push edi */
    ecx = esi; /* 0x11017EB0: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11017EB2: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x11017EB5: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11017EBA: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11017EBD: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11017EC4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017F28; /* 0x11017EC6: je 0x11017f28 */
L_11017EC8:
    eax = ebp + (-0x1C); /* 0x11017EC8: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11017ECB: push eax */
    eax = MEM32(esi); /* 0x11017ECC: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11017ECE: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017ED1: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11017ED3: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11017ED8: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11017ED9: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_110157D5); /* 0x11017EDD: call 0x110157d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11017EE2: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11017EE3: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11017EE6: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11017EE8: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11017EED: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11017EF0: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11017EF2: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11017EF5: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11017EF7: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11017EF8: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11017EFC: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017EFF: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11017F01: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11017F05: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11017F06: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11017F09: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11017F0D: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11017F0E: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11017F12: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11017F15: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11017F18: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11017F1B: push ecx */
    ecx = ebx; /* 0x11017F1C: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x11017F1E: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11017F21: mov dword ptr [ebp - 4], 1 */
L_11017F28:
    eax = MEM32(esi); /* 0x11017F28: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11017F2A: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11017F2B: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11017F2E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017F31: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11017F33: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11017F38: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11017F3A: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11017F3E: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017F41: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017F45: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017F4E; /* 0x11017F47: je 0x11017f4e */
L_11017F49:
    eax = MEM32(ecx); /* 0x11017F49: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11017F4B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11017F4E:
    eax = esi; /* 0x11017F4E: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017F50: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11017F55: ret 4 */
L_11017F83:
    esi = MEM32(ebp + (-0x14)); /* 0x11017F83: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017F86: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11017F88: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11017F28; /* 0x11017F8F: jmp 0x11017f28 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11017F83u: goto L_11017F83;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11017F58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017F58u);

L_11017F58:
    ecx = MEM32(ebp + (-0x14)); /* 0x11017F58: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017F5B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11017F5D: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11017F5F: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11017F62: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11017F64: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11017F67: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11017F6A: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11017F72; /* 0x11017F6D: jne 0x11017f72 */
L_11017F6F:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11017F6F: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11017F72:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11017F72: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x11017F75: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x11017F78: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11017F91; /* 0x11017F7B: jne 0x11017f91 */
L_11017F7D:
    eax = 0x11017F83u; /* 0x11017F7D: mov eax, 0x11017f83 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11017F82: ret  */
L_11017F91:
    PUSH32(esp, edi); /* 0x11017F91: push edi */
    PUSH32(esp, edi); /* 0x11017F92: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x11017F93: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11017F98u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11017F83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017F83u);

    goto L_11017F83;
L_11017F28:
    eax = MEM32(esi); /* 0x11017F28: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11017F2A: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11017F2B: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11017F2E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017F31: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11017F33: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11017F38: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11017F3A: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11017F3E: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017F41: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017F45: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017F4E; /* 0x11017F47: je 0x11017f4e */
L_11017F49:
    eax = MEM32(ecx); /* 0x11017F49: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11017F4B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11017F4E:
    eax = esi; /* 0x11017F4E: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11017F50: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11017F55: ret 4 */
L_11017F83:
    esi = MEM32(ebp + (-0x14)); /* 0x11017F83: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017F86: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x11017F88: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11017F28; /* 0x11017F8F: jmp 0x11017f28 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11017F99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11017F99u);
    RECOMP_EH_ENTER();

L_11017F99:
    PUSH32(esp, 0x28u); /* 0x11017F99: push 0x28 */
    eax = 0x1103D4ABu; /* 0x11017F9B: mov eax, 0x1103d4ab */
    RECOMP_CALL(sub_1103B3DB); /* 0x11017FA0: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11017FA5: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11017FA7: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11017FAA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11017FAC: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11017FAF: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11017FB2: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11017FB4: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11017FB7: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11017FBB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11017FC4; /* 0x11017FBD: je 0x11017fc4 */
L_11017FBF:
    eax = MEM32(ecx); /* 0x11017FBF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11017FC1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11017FC4:
    PUSH32(esp, edi); /* 0x11017FC4: push edi */
    ecx = esi; /* 0x11017FC5: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11017FC7: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x11017FCA: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11017FCF: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11017FD2: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11017FD9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101803D; /* 0x11017FDB: je 0x1101803d */
L_11017FDD:
    eax = ebp + (-0x1C); /* 0x11017FDD: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11017FE0: push eax */
    eax = MEM32(esi); /* 0x11017FE1: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11017FE3: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11017FE6: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11017FE8: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11017FED: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11017FEE: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_110157D5); /* 0x11017FF2: call 0x110157d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11017FF7: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11017FF8: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11017FFB: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11017FFD: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11018002: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11018005: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11018007: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x1101800A: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x1101800C: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x1101800D: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11018011: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018014: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11018016: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x1101801A: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1101801B: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x1101801E: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11018022: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11018023: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11018027: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101802A: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x1101802D: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11018030: push ecx */
    ecx = ebx; /* 0x11018031: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x11018033: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11018036: mov dword ptr [ebp - 4], 1 */
L_1101803D:
    eax = MEM32(esi); /* 0x1101803D: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101803F: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018040: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018043: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018046: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018048: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101804D: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101804F: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018053: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018056: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101805A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018063; /* 0x1101805C: je 0x11018063 */
L_1101805E:
    eax = MEM32(ecx); /* 0x1101805E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018060: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018063:
    eax = esi; /* 0x11018063: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018065: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101806A: ret 4 */
L_11018098:
    esi = MEM32(ebp + (-0x14)); /* 0x11018098: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101809B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101809D: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101803D; /* 0x110180A4: jmp 0x1101803d */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x11018098u: goto L_11018098;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_1101806D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1101806Du);

L_1101806D:
    ecx = MEM32(ebp + (-0x14)); /* 0x1101806D: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018070: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11018072: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11018074: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x11018077: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x11018079: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1101807C: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x1101807F: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11018087; /* 0x11018082: jne 0x11018087 */
L_11018084:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018084: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11018087:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x11018087: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101808A: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x1101808D: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110180A6; /* 0x11018090: jne 0x110180a6 */
L_11018092:
    eax = 0x11018098u; /* 0x11018092: mov eax, 0x11018098 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11018097: ret  */
L_110180A6:
    PUSH32(esp, edi); /* 0x110180A6: push edi */
    PUSH32(esp, edi); /* 0x110180A7: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x110180A8: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110180ADu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11018098(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018098u);

    goto L_11018098;
L_1101803D:
    eax = MEM32(esi); /* 0x1101803D: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101803F: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018040: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018043: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018046: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018048: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101804D: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101804F: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018053: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018056: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101805A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018063; /* 0x1101805C: je 0x11018063 */
L_1101805E:
    eax = MEM32(ecx); /* 0x1101805E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018060: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018063:
    eax = esi; /* 0x11018063: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11018065: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101806A: ret 4 */
L_11018098:
    esi = MEM32(ebp + (-0x14)); /* 0x11018098: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101809B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1101809D: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101803D; /* 0x110180A4: jmp 0x1101803d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110180AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110180AEu);
    RECOMP_EH_ENTER();

L_110180AE:
    PUSH32(esp, 0x28u); /* 0x110180AE: push 0x28 */
    eax = 0x1103D4DEu; /* 0x110180B0: mov eax, 0x1103d4de */
    RECOMP_CALL(sub_1103B3DB); /* 0x110180B5: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110180BA: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x110180BC: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110180BF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x110180C1: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x110180C4: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x110180C7: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110180C9: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110180CC: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110180D0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110180D9; /* 0x110180D2: je 0x110180d9 */
L_110180D4:
    eax = MEM32(ecx); /* 0x110180D4: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110180D6: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_110180D9:
    PUSH32(esp, edi); /* 0x110180D9: push edi */
    ecx = esi; /* 0x110180DA: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x110180DC: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x110180DF: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x110180E4: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x110180E7: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x110180EE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018152; /* 0x110180F0: je 0x11018152 */
L_110180F2:
    eax = ebp + (-0x1C); /* 0x110180F2: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x110180F5: push eax */
    eax = MEM32(esi); /* 0x110180F6: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x110180F8: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x110180FB: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x110180FD: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11018102: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11018103: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_110157D5); /* 0x11018107: call 0x110157d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101810C: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101810D: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11018110: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11018112: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11018117: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x1101811A: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x1101811C: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x1101811F: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11018121: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11018122: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11018126: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018129: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101812B: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x1101812F: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11018130: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11018133: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11018137: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11018138: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101813C: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101813F: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11018142: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11018145: push ecx */
    ecx = ebx; /* 0x11018146: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11018148: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x1101814B: mov dword ptr [ebp - 4], 1 */
L_11018152:
    eax = MEM32(esi); /* 0x11018152: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018154: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018155: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018158: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101815B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101815D: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018162: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018164: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018168: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101816B: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101816F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018178; /* 0x11018171: je 0x11018178 */
L_11018173:
    eax = MEM32(ecx); /* 0x11018173: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018175: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018178:
    eax = esi; /* 0x11018178: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101817A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x1101817F: ret 4 */
L_110181AD:
    esi = MEM32(ebp + (-0x14)); /* 0x110181AD: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110181B0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110181B2: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018152; /* 0x110181B9: jmp 0x11018152 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x110181ADu: goto L_110181AD;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11018182(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018182u);

L_11018182:
    ecx = MEM32(ebp + (-0x14)); /* 0x11018182: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11018185: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x11018187: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x11018189: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1101818C: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x1101818E: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018191: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x11018194: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1101819C; /* 0x11018197: jne 0x1101819c */
L_11018199:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x11018199: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1101819C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1101819C: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x1101819F: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110181A2: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110181BB; /* 0x110181A5: jne 0x110181bb */
L_110181A7:
    eax = 0x110181ADu; /* 0x110181A7: mov eax, 0x110181ad */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110181AC: ret  */
L_110181BB:
    PUSH32(esp, edi); /* 0x110181BB: push edi */
    PUSH32(esp, edi); /* 0x110181BC: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x110181BD: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110181C2u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110181AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110181ADu);

    goto L_110181AD;
L_11018152:
    eax = MEM32(esi); /* 0x11018152: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018154: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018155: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018158: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101815B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101815D: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018162: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018164: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018168: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101816B: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101816F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018178; /* 0x11018171: je 0x11018178 */
L_11018173:
    eax = MEM32(ecx); /* 0x11018173: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11018175: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_11018178:
    eax = esi; /* 0x11018178: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101817A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1101817F: ret 4 */
L_110181AD:
    esi = MEM32(ebp + (-0x14)); /* 0x110181AD: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110181B0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110181B2: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018152; /* 0x110181B9: jmp 0x11018152 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110181C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110181C3u);
    RECOMP_EH_ENTER();

L_110181C3:
    PUSH32(esp, 0x28u); /* 0x110181C3: push 0x28 */
    eax = 0x1103D511u; /* 0x110181C5: mov eax, 0x1103d511 */
    RECOMP_CALL(sub_1103B3DB); /* 0x110181CA: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110181CF: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x110181D1: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110181D4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x110181D6: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x110181D9: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x110181DC: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110181DE: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110181E1: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110181E5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110181EE; /* 0x110181E7: je 0x110181ee */
L_110181E9:
    eax = MEM32(ecx); /* 0x110181E9: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110181EB: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_110181EE:
    PUSH32(esp, edi); /* 0x110181EE: push edi */
    ecx = esi; /* 0x110181EF: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x110181F1: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x110181F4: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x110181F9: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x110181FC: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11018203: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018267; /* 0x11018205: je 0x11018267 */
L_11018207:
    eax = ebp + (-0x1C); /* 0x11018207: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101820A: push eax */
    eax = MEM32(esi); /* 0x1101820B: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1101820D: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018210: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11018212: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11018217: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11018218: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_110157D5); /* 0x1101821C: call 0x110157d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11018221: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11018222: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x11018225: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11018227: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1101822C: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x1101822F: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11018231: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11018234: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11018236: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11018237: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x1101823B: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101823E: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11018240: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11018244: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11018245: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11018248: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1101824C: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1101824D: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11018251: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11018254: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11018257: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101825A: push ecx */
    ecx = ebx; /* 0x1101825B: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1101825D: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11018260: mov dword ptr [ebp - 4], 1 */
L_11018267:
    eax = MEM32(esi); /* 0x11018267: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018269: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101826A: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101826D: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018270: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018272: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018277: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018279: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101827D: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018280: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018284: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101828D; /* 0x11018286: je 0x1101828d */
L_11018288:
    eax = MEM32(ecx); /* 0x11018288: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101828A: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101828D:
    eax = esi; /* 0x1101828D: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101828F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x11018294: ret 4 */
L_110182C2:
    esi = MEM32(ebp + (-0x14)); /* 0x110182C2: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110182C5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110182C7: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018267; /* 0x110182CE: jmp 0x11018267 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x110182C2u: goto L_110182C2;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_11018297(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11018297u);

L_11018297:
    ecx = MEM32(ebp + (-0x14)); /* 0x11018297: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1101829A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x1101829C: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x1101829E: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x110182A1: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x110182A3: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110182A6: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x110182A9: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110182B1; /* 0x110182AC: jne 0x110182b1 */
L_110182AE:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110182AE: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110182B1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x110182B1: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x110182B4: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110182B7: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110182D0; /* 0x110182BA: jne 0x110182d0 */
L_110182BC:
    eax = 0x110182C2u; /* 0x110182BC: mov eax, 0x110182c2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110182C1: ret  */
L_110182D0:
    PUSH32(esp, edi); /* 0x110182D0: push edi */
    PUSH32(esp, edi); /* 0x110182D1: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x110182D2: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110182D7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110182C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110182C2u);

    goto L_110182C2;
L_11018267:
    eax = MEM32(esi); /* 0x11018267: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018269: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101826A: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x1101826D: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018270: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018272: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11018277: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11018279: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1101827D: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018280: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018284: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101828D; /* 0x11018286: je 0x1101828d */
L_11018288:
    eax = MEM32(ecx); /* 0x11018288: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101828A: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1101828D:
    eax = esi; /* 0x1101828D: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1101828F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11018294: ret 4 */
L_110182C2:
    esi = MEM32(ebp + (-0x14)); /* 0x110182C2: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110182C5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110182C7: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018267; /* 0x110182CE: jmp 0x11018267 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110182D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110182D8u);
    RECOMP_EH_ENTER();

L_110182D8:
    PUSH32(esp, 0x28u); /* 0x110182D8: push 0x28 */
    eax = 0x1103D544u; /* 0x110182DA: mov eax, 0x1103d544 */
    RECOMP_CALL(sub_1103B3DB); /* 0x110182DF: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110182E4: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x110182E6: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110182E9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x110182EB: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x110182EE: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x110182F1: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x110182F3: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110182F6: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110182FA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018303; /* 0x110182FC: je 0x11018303 */
L_110182FE:
    eax = MEM32(ecx); /* 0x110182FE: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11018300: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11018303:
    PUSH32(esp, edi); /* 0x11018303: push edi */
    ecx = esi; /* 0x11018304: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x11018306: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x11018309: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x1101830E: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11018311: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x11018318: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1101837C; /* 0x1101831A: je 0x1101837c */
L_1101831C:
    eax = ebp + (-0x1C); /* 0x1101831C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1101831F: push eax */
    eax = MEM32(esi); /* 0x11018320: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11018322: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018325: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x11018327: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1101832C: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1101832D: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_110157D5); /* 0x11018331: call 0x110157d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11018336: pop ecx */
    ecx = ebp + (-0x1C); /* 0x11018337: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x1101833A: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x1101833C: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11018341: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11018344: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x11018346: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x11018349: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x1101834B: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x1101834C: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11018350: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018353: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11018355: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x11018359: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1101835A: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x1101835D: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11018361: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11018362: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x11018366: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x11018369: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x1101836C: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1101836F: push ecx */
    ecx = ebx; /* 0x11018370: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x11018372: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x11018375: mov dword ptr [ebp - 4], 1 */
L_1101837C:
    eax = MEM32(esi); /* 0x1101837C: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101837E: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101837F: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018382: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018385: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018387: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101838C: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101838E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018392: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018395: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018399: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110183A2; /* 0x1101839B: je 0x110183a2 */
L_1101839D:
    eax = MEM32(ecx); /* 0x1101839D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101839F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110183A2:
    eax = esi; /* 0x110183A2: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110183A4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x110183A9: ret 4 */
L_110183D7:
    esi = MEM32(ebp + (-0x14)); /* 0x110183D7: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110183DA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110183DC: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101837C; /* 0x110183E3: jmp 0x1101837c */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x110183D7u: goto L_110183D7;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}

void sub_110183AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110183ACu);

L_110183AC:
    ecx = MEM32(ebp + (-0x14)); /* 0x110183AC: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110183AF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x110183B1: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x110183B3: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x110183B6: add edx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0xC); /* 0x110183B8: mov eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110183BB: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x38), edi */ /* 0x110183BE: cmp dword ptr [edx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110183C6; /* 0x110183C1: jne 0x110183c6 */
L_110183C3:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x110183C3: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110183C6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x110183C6: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = eax; /* 0x110183C9: mov dword ptr [edx + 0xc], eax */
    /* test MEM32(edx + 0x10), eax */ /* 0x110183CC: test dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110183E5; /* 0x110183CF: jne 0x110183e5 */
L_110183D1:
    eax = 0x110183D7u; /* 0x110183D1: mov eax, 0x110183d7 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110183D6: ret  */
L_110183E5:
    PUSH32(esp, edi); /* 0x110183E5: push edi */
    PUSH32(esp, edi); /* 0x110183E6: push edi */
    RECOMP_CALL(sub_1103B33A); /* 0x110183E7: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x110183ECu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110183D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110183D7u);

    goto L_110183D7;
L_1101837C:
    eax = MEM32(esi); /* 0x1101837C: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1101837E: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1101837F: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018382: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018385: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x11018387: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1101838C: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1101838E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x11018392: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x11018395: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x11018399: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110183A2; /* 0x1101839B: je 0x110183a2 */
L_1101839D:
    eax = MEM32(ecx); /* 0x1101839D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1101839F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110183A2:
    eax = esi; /* 0x110183A2: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110183A4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110183A9: ret 4 */
L_110183D7:
    esi = MEM32(ebp + (-0x14)); /* 0x110183D7: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110183DA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110183DC: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_1101837C; /* 0x110183E3: jmp 0x1101837c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_110183ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110183EDu);
    RECOMP_EH_ENTER();

L_110183ED:
    PUSH32(esp, 0x28u); /* 0x110183ED: push 0x28 */
    eax = 0x1103D577u; /* 0x110183EF: mov eax, 0x1103d577 */
    RECOMP_CALL(sub_1103B3DB); /* 0x110183F4: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110183F9: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x110183FB: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110183FE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = esi; /* 0x11018400: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = edi; /* 0x11018403: mov dword ptr [ebp - 0x18], edi */
    eax = MEM32(esi); /* 0x11018406: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x11018408: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x1101840B: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x1101840F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018418; /* 0x11018411: je 0x11018418 */
L_11018413:
    eax = MEM32(ecx); /* 0x11018413: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11018415: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11018418:
    PUSH32(esp, edi); /* 0x11018418: push edi */
    ecx = esi; /* 0x11018419: mov ecx, esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1101841B: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_11010675); /* 0x1101841E: call 0x11010675 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x11018423: mov byte ptr [ebp - 0x20], al */
    MEM32(ebp + (-0x4)) = 1; /* 0x11018426: mov dword ptr [ebp - 4], 1 */
    /* test LO8(eax), LO8(eax) */ /* 0x1101842D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11018491; /* 0x1101842F: je 0x11018491 */
L_11018431:
    eax = ebp + (-0x1C); /* 0x11018431: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11018434: push eax */
    eax = MEM32(esi); /* 0x11018435: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x11018437: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101843A: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100F94A); /* 0x1101843C: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11018441: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11018442: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_110157D5); /* 0x11018446: call 0x110157d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1101844B: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1101844C: lea ecx, [ebp - 0x1c] */
    ebx = eax; /* 0x1101844F: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x11018451: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11018456: push dword ptr [ebp + 8] */
    ecx = MEM32(esi); /* 0x11018459: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x1101845B: lea edx, [ebp - 0x18] */
    eax = MEM32(ebx); /* 0x1101845E: mov eax, dword ptr [ebx] */
    PUSH32(esp, edx); /* 0x11018460: push edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x11018461: mov byte ptr [ebp - 0x28], 1 */
    ecx = MEM32(ecx + 0x4); /* 0x11018465: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x11018468: add ecx, esi */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1101846A: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x1101846E: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1101846F: push dword ptr [ebp - 0x28] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x11018472: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11018476: push edi */
    MEM8(ebp + (-0x30)) = (uint8_t)((CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11018477: sete byte ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1101847B: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x1101847E: push dword ptr [ecx + 0x38] */
    ecx = ebp + (-0x34); /* 0x11018481: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x11018484: push ecx */
    ecx = ebx; /* 0x11018485: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x11018487: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x1101848A: mov dword ptr [ebp - 4], 1 */
L_11018491:
    eax = MEM32(esi); /* 0x11018491: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x11018493: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x11018494: push dword ptr [ebp - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11018497: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1101849A: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110102F8); /* 0x1101849C: call 0x110102f8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x110184A1: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110184A3: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x110184A7: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + esi + 0x38); /* 0x110184AA: mov ecx, dword ptr [eax + esi + 0x38] */
    /* test ecx, ecx */ /* 0x110184AE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110184B7; /* 0x110184B0: je 0x110184b7 */
L_110184B2:
    eax = MEM32(ecx); /* 0x110184B2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x110184B4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_110184B7:
    eax = esi; /* 0x110184B7: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110184B9: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* 0x110184BE: ret 4 */
L_110184EC:
    esi = MEM32(ebp + (-0x14)); /* 0x110184EC: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110184EF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x110184F1: mov dword ptr [ebp - 4], 1 */
    RECOMP_BACKEDGE();
    goto L_11018491; /* 0x110184F8: jmp 0x11018491 */
    { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x110184ECu: goto L_110184EC;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_EH_LEAVE(); RECOMP_REGS_OUT(); return; }
    }
    RECOMP_EH_LEAVE(); RECOMP_REGS_OUT();
}
