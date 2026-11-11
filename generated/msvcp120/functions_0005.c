#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_110084D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110084D4u);

L_110084D4:
    ecx = 0x110663F8u; /* 0x110084D4: mov ecx, 0x110663f8 */
    goto L_1102CFDC; /* 0x110084D9: jmp 0x1102cfdc */
L_1102CFDC:
    PUSH32(esp, esi); /* 0x1102CFDC: push esi */
    esi = MEM32(0x110665C4); /* 0x1102CFDD: mov esi, dword ptr [0x110665c4] */
    edx = 0x110663A8u; /* 0x1102CFE3: mov edx, 0x110663a8 */
    MEM32(0x110665C8) = edx; /* 0x1102CFE8: mov dword ptr [0x110665c8], edx */
    PUSH32(esp, edi); /* 0x1102CFEE: push edi */
    edi = ecx; /* 0x1102CFEF: mov edi, ecx */
    /* test esi, esi */ /* 0x1102CFF1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D004; /* 0x1102CFF3: je 0x1102d004 */
L_1102CFF5:
    eax = MEM32(esi); /* 0x1102CFF5: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1102CFF7: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + 0x3C) = edx; /* 0x1102CFFA: mov dword ptr [eax + esi + 0x3c], edx */
    edx = MEM32(0x110665C8); /* 0x1102CFFE: mov edx, dword ptr [0x110665c8] */
L_1102D004:
    ecx = MEM32(0x110665CC); /* 0x1102D004: mov ecx, dword ptr [0x110665cc] */
    /* test ecx, ecx */ /* 0x1102D00A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D01D; /* 0x1102D00C: je 0x1102d01d */
L_1102D00E:
    eax = MEM32(ecx); /* 0x1102D00E: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x1102D010: mov eax, dword ptr [eax + 4] */
    MEM32(eax + ecx + 0x3C) = edx; /* 0x1102D013: mov dword ptr [eax + ecx + 0x3c], edx */
    edx = MEM32(0x110665C8); /* 0x1102D017: mov edx, dword ptr [0x110665c8] */
L_1102D01D:
    ecx = MEM32(0x110665D0); /* 0x1102D01D: mov ecx, dword ptr [0x110665d0] */
    /* test ecx, ecx */ /* 0x1102D023: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D030; /* 0x1102D025: je 0x1102d030 */
L_1102D027:
    eax = MEM32(ecx); /* 0x1102D027: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x1102D029: mov eax, dword ptr [eax + 4] */
    MEM32(eax + ecx + 0x3C) = edx; /* 0x1102D02C: mov dword ptr [eax + ecx + 0x3c], edx */
L_1102D030:
    eax = edi; /* 0x1102D030: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1102D032: pop edi */
    esi = POP32_VAL(esp); /* 0x1102D033: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D034: ret  */
    RECOMP_REGS_OUT();
}

void sub_110084DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110084DEu);

L_110084DE:
    ecx = 0x110663FBu; /* 0x110084DE: mov ecx, 0x110663fb */
    RECOMP_CALL(sub_1102FE53); /* 0x110084E3: call 0x1102fe53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F723u); /* 0x110084E8: push 0x1103f723 */
    RECOMP_CALL(sub_1103B2EB); /* 0x110084ED: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110084F2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110084F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_110084F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110084F4u);

L_110084F4:
    PUSH32(esp, 1); /* 0x110084F4: push 1 */
    PUSH32(esp, 0); /* 0x110084F6: push 0 */
    PUSH32(esp, 0x11066400u); /* 0x110084F8: push 0x11066400 */
    ecx = 0x110663A8u; /* 0x110084FD: mov ecx, 0x110663a8 */
    RECOMP_CALL(sub_11016854); /* 0x11008502: call 0x11016854 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F72Du); /* 0x11008507: push 0x1103f72d */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100850C: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008511: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008512: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008513(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008513u);

L_11008513:
    RECOMP_ICALL(MEM32(0x1106931C)); /* 0x11008513: call dword ptr [0x1106931c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x11008519: add eax, 0x20 */
    _flag_k = FK_ADD;
    ecx = 0x11066400u; /* 0x1100851C: mov ecx, 0x11066400 */
    PUSH32(esp, eax); /* 0x11008521: push eax */
    RECOMP_CALL(sub_1102CACA); /* 0x11008522: call 0x1102caca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F737u); /* 0x11008527: push 0x1103f737 */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100852C: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008531: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008532: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008533(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008533u);

L_11008533:
    eax = MEM32(0x110664B8); /* 0x11008533: mov eax, dword ptr [0x110664b8] */
    MEM32(0x110665C4) = 0x110664B8u; /* 0x11008538: mov dword ptr [0x110665c4], 0x110664b8 */
    ecx = MEM32(eax + 0x4); /* 0x11008542: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(0x110665C8); /* 0x11008545: mov eax, dword ptr [0x110665c8] */
    MEM32(ecx + 0x110664F4) = eax; /* 0x1100854A: mov dword ptr [ecx + 0x110664f4], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008550: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008551(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008551u);

L_11008551:
    ecx = 0x1106645Bu; /* 0x11008551: mov ecx, 0x1106645b */
    RECOMP_CALL(sub_1102FE53); /* 0x11008556: call 0x1102fe53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F741u); /* 0x1100855B: push 0x1103f741 */
    RECOMP_CALL(sub_1103B2EB); /* 0x11008560: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008565: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008566: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008567(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008567u);

L_11008567:
    PUSH32(esp, 1); /* 0x11008567: push 1 */
    PUSH32(esp, 0); /* 0x11008569: push 0 */
    PUSH32(esp, 0x11066460u); /* 0x1100856B: push 0x11066460 */
    ecx = 0x110664B8u; /* 0x11008570: mov ecx, 0x110664b8 */
    RECOMP_CALL(sub_11016430); /* 0x11008575: call 0x11016430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F74Bu); /* 0x1100857A: push 0x1103f74b */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100857F: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008584: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008585: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008586(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008586u);

L_11008586:
    RECOMP_ICALL(MEM32(0x1106931C)); /* 0x11008586: call dword ptr [0x1106931c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1100858C: push eax */
    ecx = 0x11066460u; /* 0x1100858D: mov ecx, 0x11066460 */
    RECOMP_CALL(sub_1102CACA); /* 0x11008592: call 0x1102caca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F755u); /* 0x11008597: push 0x1103f755 */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100859C: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110085A1: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110085A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_110085A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110085A3u);

L_110085A3:
    eax = MEM32(0x11066518); /* 0x110085A3: mov eax, dword ptr [0x11066518] */
    MEM32(0x110665D0) = 0x11066518u; /* 0x110085A8: mov dword ptr [0x110665d0], 0x11066518 */
    ecx = MEM32(eax + 0x4); /* 0x110085B2: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(0x110665C8); /* 0x110085B5: mov eax, dword ptr [0x110665c8] */
    MEM32(ecx + 0x11066554) = eax; /* 0x110085BA: mov dword ptr [ecx + 0x11066554], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110085C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_110085C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110085C1u);

L_110085C1:
    ecx = 0x1106656Bu; /* 0x110085C1: mov ecx, 0x1106656b */
    RECOMP_CALL(sub_1102FE53); /* 0x110085C6: call 0x1102fe53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F75Fu); /* 0x110085CB: push 0x1103f75f */
    RECOMP_CALL(sub_1103B2EB); /* 0x110085D0: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110085D5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110085D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_110085D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110085D7u);

L_110085D7:
    PUSH32(esp, 1); /* 0x110085D7: push 1 */
    PUSH32(esp, 0); /* 0x110085D9: push 0 */
    PUSH32(esp, 0x11066570u); /* 0x110085DB: push 0x11066570 */
    ecx = 0x11066518u; /* 0x110085E0: mov ecx, 0x11066518 */
    RECOMP_CALL(sub_11016854); /* 0x110085E5: call 0x11016854 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F769u); /* 0x110085EA: push 0x1103f769 */
    RECOMP_CALL(sub_1103B2EB); /* 0x110085EF: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110085F4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110085F5: ret  */
    RECOMP_REGS_OUT();
}

void sub_110085F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110085F6u);

L_110085F6:
    RECOMP_ICALL(MEM32(0x1106931C)); /* 0x110085F6: call dword ptr [0x1106931c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x110085FC: add eax, 0x40 */
    _flag_k = FK_ADD;
    ecx = 0x11066570u; /* 0x110085FF: mov ecx, 0x11066570 */
    PUSH32(esp, eax); /* 0x11008604: push eax */
    RECOMP_CALL(sub_1102CACA); /* 0x11008605: call 0x1102caca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F773u); /* 0x1100860A: push 0x1103f773 */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100860F: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008614: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008615: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008616(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008616u);

L_11008616:
    ecx = 0x110665D8u; /* 0x11008616: mov ecx, 0x110665d8 */
    goto L_1102D1CD; /* 0x1100861B: jmp 0x1102d1cd */
L_1102D1CD:
    eax = MEM32(0x11066638); /* 0x1102D1CD: mov eax, dword ptr [0x11066638] */
    PUSH32(esp, esi); /* 0x1102D1D2: push esi */
    esi = 0x11066638u; /* 0x1102D1D3: mov esi, 0x11066638 */
    MEM32(0x110662AC) = esi; /* 0x1102D1D8: mov dword ptr [0x110662ac], esi */
    edx = MEM32(eax + 0x4); /* 0x1102D1DE: mov edx, dword ptr [eax + 4] */
    eax = MEM32(0x110662A8); /* 0x1102D1E1: mov eax, dword ptr [0x110662a8] */
    MEM32(edx + 0x11066674) = eax; /* 0x1102D1E6: mov dword ptr [edx + 0x11066674], eax */
    eax = MEM32(0x11066638); /* 0x1102D1EC: mov eax, dword ptr [0x11066638] */
    eax = MEM32(eax + 0x4); /* 0x1102D1F1: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)((MEM32(eax + esi + 0x14) | 2)); _flag_b = (uint32_t)((MEM32(eax + esi + 0x14) | 2));
    MEM32(eax + esi + 0x14) = MEM32(eax + esi + 0x14) | 2; /* 0x1102D1F4: or dword ptr [eax + esi + 0x14], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x1102D1F9: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x1102D1FB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D1FC: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008620u);

L_11008620:
    ecx = 0x110665DBu; /* 0x11008620: mov ecx, 0x110665db */
    RECOMP_CALL(sub_1102FE53); /* 0x11008625: call 0x1102fe53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F77Du); /* 0x1100862A: push 0x1103f77d */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100862F: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008634: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008635: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008636(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008636u);

L_11008636:
    PUSH32(esp, 1); /* 0x11008636: push 1 */
    PUSH32(esp, 0); /* 0x11008638: push 0 */
    PUSH32(esp, 0x110665E0u); /* 0x1100863A: push 0x110665e0 */
    ecx = 0x11066638u; /* 0x1100863F: mov ecx, 0x11066638 */
    RECOMP_CALL(sub_110169AF); /* 0x11008644: call 0x110169af */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F787u); /* 0x11008649: push 0x1103f787 */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100864E: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008653: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008654: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008655(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008655u);

L_11008655:
    RECOMP_ICALL(MEM32(0x1106931C)); /* 0x11008655: call dword ptr [0x1106931c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x1100865B: add eax, 0x40 */
    _flag_k = FK_ADD;
    ecx = 0x110665E0u; /* 0x1100865E: mov ecx, 0x110665e0 */
    PUSH32(esp, eax); /* 0x11008663: push eax */
    RECOMP_CALL(sub_1102D194); /* 0x11008664: call 0x1102d194 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F791u); /* 0x11008669: push 0x1103f791 */
    RECOMP_CALL(sub_1103B2EB); /* 0x1100866E: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008673: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008674: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008675(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008675u);

L_11008675:
    eax = MEM32(0x110666F0); /* 0x11008675: mov eax, dword ptr [0x110666f0] */
    MEM32(0x110662A4) = 0x110666F0u; /* 0x1100867A: mov dword ptr [0x110662a4], 0x110666f0 */
    ecx = MEM32(eax + 0x4); /* 0x11008684: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(0x110662A8); /* 0x11008687: mov eax, dword ptr [0x110662a8] */
    MEM32(ecx + 0x1106672C) = eax; /* 0x1100868C: mov dword ptr [ecx + 0x1106672c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008692: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008693(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008693u);

L_11008693:
    ecx = 0x11066693u; /* 0x11008693: mov ecx, 0x11066693 */
    RECOMP_CALL(sub_1102FE53); /* 0x11008698: call 0x1102fe53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F79Bu); /* 0x1100869D: push 0x1103f79b */
    RECOMP_CALL(sub_1103B2EB); /* 0x110086A2: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110086A7: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110086A8: ret  */
    RECOMP_REGS_OUT();
}

void sub_110086A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110086A9u);

L_110086A9:
    PUSH32(esp, 1); /* 0x110086A9: push 1 */
    PUSH32(esp, 0); /* 0x110086AB: push 0 */
    PUSH32(esp, 0x11066698u); /* 0x110086AD: push 0x11066698 */
    ecx = 0x110666F0u; /* 0x110086B2: mov ecx, 0x110666f0 */
    RECOMP_CALL(sub_11016606); /* 0x110086B7: call 0x11016606 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F7A5u); /* 0x110086BC: push 0x1103f7a5 */
    RECOMP_CALL(sub_1103B2EB); /* 0x110086C1: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110086C6: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110086C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_110086C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110086C8u);

L_110086C8:
    RECOMP_ICALL(MEM32(0x1106931C)); /* 0x110086C8: call dword ptr [0x1106931c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110086CE: push eax */
    ecx = 0x11066698u; /* 0x110086CF: mov ecx, 0x11066698 */
    RECOMP_CALL(sub_1102D194); /* 0x110086D4: call 0x1102d194 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F7AFu); /* 0x110086D9: push 0x1103f7af */
    RECOMP_CALL(sub_1103B2EB); /* 0x110086DE: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110086E3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110086E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_110086E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110086E5u);

L_110086E5:
    eax = MEM32(0x11066750); /* 0x110086E5: mov eax, dword ptr [0x11066750] */
    MEM32(0x110662B0) = 0x11066750u; /* 0x110086EA: mov dword ptr [0x110662b0], 0x11066750 */
    ecx = MEM32(eax + 0x4); /* 0x110086F4: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(0x110662A8); /* 0x110086F7: mov eax, dword ptr [0x110662a8] */
    MEM32(ecx + 0x1106678C) = eax; /* 0x110086FC: mov dword ptr [ecx + 0x1106678c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008702: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008703(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008703u);

L_11008703:
    ecx = 0x110667A3u; /* 0x11008703: mov ecx, 0x110667a3 */
    RECOMP_CALL(sub_1102FE53); /* 0x11008708: call 0x1102fe53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F7B9u); /* 0x1100870D: push 0x1103f7b9 */
    RECOMP_CALL(sub_1103B2EB); /* 0x11008712: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008717: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008718: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008719(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008719u);

L_11008719:
    PUSH32(esp, 1); /* 0x11008719: push 1 */
    PUSH32(esp, 0); /* 0x1100871B: push 0 */
    PUSH32(esp, 0x110667A8u); /* 0x1100871D: push 0x110667a8 */
    ecx = 0x11066750u; /* 0x11008722: mov ecx, 0x11066750 */
    RECOMP_CALL(sub_110169AF); /* 0x11008727: call 0x110169af */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F7C3u); /* 0x1100872C: push 0x1103f7c3 */
    RECOMP_CALL(sub_1103B2EB); /* 0x11008731: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008736: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008737: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008738(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008738u);

L_11008738:
    RECOMP_ICALL(MEM32(0x1106931C)); /* 0x11008738: call dword ptr [0x1106931c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x1100873E: add eax, 0x40 */
    _flag_k = FK_ADD;
    ecx = 0x110667A8u; /* 0x11008741: mov ecx, 0x110667a8 */
    PUSH32(esp, eax); /* 0x11008746: push eax */
    RECOMP_CALL(sub_1102D194); /* 0x11008747: call 0x1102d194 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F7CDu); /* 0x1100874C: push 0x1103f7cd */
    RECOMP_CALL(sub_1103B2EB); /* 0x11008751: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008756: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008757: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008758(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008758u);

L_11008758:
    ecx = 0x11066850u; /* 0x11008758: mov ecx, 0x11066850 */
    goto L_1102D6EB; /* 0x1100875D: jmp 0x1102d6eb */
L_1102D6EB:
    PUSH32(esp, esi); /* 0x1102D6EB: push esi */
    esi = MEM32(0x110662A4); /* 0x1102D6EC: mov esi, dword ptr [0x110662a4] */
    edx = 0x11066800u; /* 0x1102D6F2: mov edx, 0x11066800 */
    MEM32(0x110662A8) = edx; /* 0x1102D6F7: mov dword ptr [0x110662a8], edx */
    PUSH32(esp, edi); /* 0x1102D6FD: push edi */
    edi = ecx; /* 0x1102D6FE: mov edi, ecx */
    /* test esi, esi */ /* 0x1102D700: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D713; /* 0x1102D702: je 0x1102d713 */
L_1102D704:
    eax = MEM32(esi); /* 0x1102D704: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1102D706: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + 0x3C) = edx; /* 0x1102D709: mov dword ptr [eax + esi + 0x3c], edx */
    edx = MEM32(0x110662A8); /* 0x1102D70D: mov edx, dword ptr [0x110662a8] */
L_1102D713:
    ecx = MEM32(0x110662AC); /* 0x1102D713: mov ecx, dword ptr [0x110662ac] */
    /* test ecx, ecx */ /* 0x1102D719: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D72C; /* 0x1102D71B: je 0x1102d72c */
L_1102D71D:
    eax = MEM32(ecx); /* 0x1102D71D: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x1102D71F: mov eax, dword ptr [eax + 4] */
    MEM32(eax + ecx + 0x3C) = edx; /* 0x1102D722: mov dword ptr [eax + ecx + 0x3c], edx */
    edx = MEM32(0x110662A8); /* 0x1102D726: mov edx, dword ptr [0x110662a8] */
L_1102D72C:
    ecx = MEM32(0x110662B0); /* 0x1102D72C: mov ecx, dword ptr [0x110662b0] */
    /* test ecx, ecx */ /* 0x1102D732: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1102D73F; /* 0x1102D734: je 0x1102d73f */
L_1102D736:
    eax = MEM32(ecx); /* 0x1102D736: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x1102D738: mov eax, dword ptr [eax + 4] */
    MEM32(eax + ecx + 0x3C) = edx; /* 0x1102D73B: mov dword ptr [eax + ecx + 0x3c], edx */
L_1102D73F:
    eax = edi; /* 0x1102D73F: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1102D741: pop edi */
    esi = POP32_VAL(esp); /* 0x1102D742: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102D743: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008762(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008762u);

L_11008762:
    ecx = 0x11066853u; /* 0x11008762: mov ecx, 0x11066853 */
    RECOMP_CALL(sub_1102FE53); /* 0x11008767: call 0x1102fe53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F7D7u); /* 0x1100876C: push 0x1103f7d7 */
    RECOMP_CALL(sub_1103B2EB); /* 0x11008771: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008776: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008777: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008778(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008778u);

L_11008778:
    PUSH32(esp, 1); /* 0x11008778: push 1 */
    PUSH32(esp, 0); /* 0x1100877A: push 0 */
    PUSH32(esp, 0x11066858u); /* 0x1100877C: push 0x11066858 */
    ecx = 0x11066800u; /* 0x11008781: mov ecx, 0x11066800 */
    RECOMP_CALL(sub_110169AF); /* 0x11008786: call 0x110169af */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F7E1u); /* 0x1100878B: push 0x1103f7e1 */
    RECOMP_CALL(sub_1103B2EB); /* 0x11008790: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008795: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008796: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008797(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008797u);

L_11008797:
    RECOMP_ICALL(MEM32(0x1106931C)); /* 0x11008797: call dword ptr [0x1106931c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1100879D: add eax, 0x20 */
    _flag_k = FK_ADD;
    ecx = 0x11066858u; /* 0x110087A0: mov ecx, 0x11066858 */
    PUSH32(esp, eax); /* 0x110087A5: push eax */
    RECOMP_CALL(sub_1102D194); /* 0x110087A6: call 0x1102d194 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F7EBu); /* 0x110087AB: push 0x1103f7eb */
    RECOMP_CALL(sub_1103B2EB); /* 0x110087B0: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110087B5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110087B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_110087B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110087B7u);

L_110087B7:
    ecx = 0x11068A00u; /* 0x110087B7: mov ecx, 0x11068a00 */
    RECOMP_CALL(sub_1102FE53); /* 0x110087BC: call 0x1102fe53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1103F7F5u); /* 0x110087C1: push 0x1103f7f5 */
    RECOMP_CALL(sub_1103B2EB); /* 0x110087C6: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110087CB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110087CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_110087CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110087CDu);

L_110087CD:
    PUSH32(esp, 0x1103F7FFu); /* 0x110087CD: push 0x1103f7ff */
    RECOMP_CALL(sub_1103B2EB); /* 0x110087D2: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110087D7: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110087D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_110087D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110087D9u);

L_110087D9:
    PUSH32(esp, 0x1103F809u); /* 0x110087D9: push 0x1103f809 */
    RECOMP_CALL(sub_1103B2EB); /* 0x110087DE: call 0x1103b2eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110087E3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110087E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_110087F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110087F0u);

L_110087F0:
    eax = ecx; /* 0x110087F0: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110087F2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110087F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110087F5u);

L_110087F5:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110087F5: ret  */
    RECOMP_REGS_OUT();
}

void sub_110087F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110087F6u);

L_110087F6:
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110087F6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110087F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110087F9u);

L_110087F9:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x110087F9: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x110087FC: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110087FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_110087FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110087FFu);

L_110087FF:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x110087FF: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x11008802: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11008804: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11008807(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008807u);

L_11008807:
    eax = MEM32(ecx); /* 0x11008807: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x11008809: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100880E; /* 0x1100880B: jne 0x1100880e */
L_1100880D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100880D: ret  */
L_1100880E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1100880E: add eax, 4 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008811: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008812(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008812u);

L_11008812:
    PUSH32(esp, ebp); /* 0x11008812: push ebp */
    ebp = esp; /* 0x11008813: mov ebp, esp */
    edx = MEM32(ecx); /* 0x11008815: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x11008817: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11008818: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x1100881B: mov eax, dword ptr [esi] */
    MEM32(ecx) = eax; /* 0x1100881D: mov dword ptr [ecx], eax */
    MEM32(esi) = edx; /* 0x1100881F: mov dword ptr [esi], edx */
    eax = MEM32(ecx); /* 0x11008821: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x11008823: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008829; /* 0x11008825: je 0x11008829 */
L_11008827:
    MEM32(eax) = ecx; /* 0x11008827: mov dword ptr [eax], ecx */
L_11008829:
    eax = MEM32(esi); /* 0x11008829: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x1100882B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008831; /* 0x1100882D: je 0x11008831 */
L_1100882F:
    MEM32(eax) = esi; /* 0x1100882F: mov dword ptr [eax], esi */
L_11008831:
    esi = POP32_VAL(esp); /* 0x11008831: pop esi */
    ebp = POP32_VAL(esp); /* 0x11008832: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11008833: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11008836(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008836u);

L_11008836:
    PUSH32(esp, ebp); /* 0x11008836: push ebp */
    ebp = esp; /* 0x11008837: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11008839: push esi */
    esi = ecx; /* 0x1100883A: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x110692E0)); /* 0x1100883C: call dword ptr [0x110692e0] */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x11008842: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008850; /* 0x11008846: je 0x11008850 */
L_11008848:
    PUSH32(esp, esi); /* 0x11008848: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x11008849: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100884F: pop ecx */
L_11008850:
    eax = esi; /* 0x11008850: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11008852: pop esi */
    ebp = POP32_VAL(esp); /* 0x11008853: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11008854: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100885D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100885Du);

L_1100885D:
    eax = MEM32(ecx + 0x4); /* 0x1100885D: mov eax, dword ptr [ecx + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008860: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008861(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008861u);

L_11008861:
    PUSH32(esp, ebp); /* 0x11008861: push ebp */
    ebp = esp; /* 0x11008862: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x11008864: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x11008868: push esi */
    esi = ecx; /* 0x11008869: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008896; /* 0x1100886B: je 0x11008896 */
L_1100886D:
    PUSH32(esp, edi); /* 0x1100886D: push edi */
    PUSH32(esp, 0x11008A47u); /* 0x1100886E: push 0x11008a47 */
    edi = esi + (-0x4); /* 0x11008873: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x11008876: push dword ptr [edi] */
    PUSH32(esp, 0x170u); /* 0x11008878: push 0x170 */
    PUSH32(esp, esi); /* 0x1100887D: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1100887E: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x11008883: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008891; /* 0x11008887: je 0x11008891 */
L_11008889:
    PUSH32(esp, edi); /* 0x11008889: push edi */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x1100888A: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008890: pop ecx */
L_11008891:
    eax = edi; /* 0x11008891: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x11008893: pop edi */
    goto L_110088AB; /* 0x11008894: jmp 0x110088ab */
L_11008896:
    RECOMP_CALL(sub_11008A47); /* 0x11008896: call 0x11008a47 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100889B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110088A9; /* 0x1100889F: je 0x110088a9 */
L_110088A1:
    PUSH32(esp, esi); /* 0x110088A1: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x110088A2: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110088A8: pop ecx */
L_110088A9:
    eax = esi; /* 0x110088A9: mov eax, esi */
L_110088AB:
    esi = POP32_VAL(esp); /* 0x110088AB: pop esi */
    ebp = POP32_VAL(esp); /* 0x110088AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110088AD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110088B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110088B0u);

L_110088B0:
    PUSH32(esp, ebp); /* 0x110088B0: push ebp */
    ebp = esp; /* 0x110088B1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x110088B3: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax), 3 */ /* 0x110088B6: cmp dword ptr [eax], 3 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110088C4; /* 0x110088B9: je 0x110088c4 */
L_110088BB:
    /* cmp MEM32(eax), 4 */ /* 0x110088BB: cmp dword ptr [eax], 4 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110088C4; /* 0x110088BE: je 0x110088c4 */
L_110088C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110088C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x110088C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110088C3: ret  */
L_110088C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110088C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110088C6: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x110088C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110088C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_110088C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110088C9u);

L_110088C9:
    PUSH32(esp, ebp); /* 0x110088C9: push ebp */
    ebp = esp; /* 0x110088CA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110088CC: push esi */
    esi = MEM32(ebp + 0x8); /* 0x110088CD: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x110088D0: push esi */
    RECOMP_CALL(sub_110088B0); /* 0x110088D1: call 0x110088b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110088D6: pop ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x110088D7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110088E4; /* 0x110088D9: jne 0x110088e4 */
L_110088DB:
    /* cmp MEM32(esi), 2 */ /* 0x110088DB: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110088E4; /* 0x110088DE: je 0x110088e4 */
L_110088E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110088E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110088E7; /* 0x110088E2: jmp 0x110088e7 */
L_110088E4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110088E4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110088E6: inc eax */
    _flag_k = FK_INC;
L_110088E7:
    esi = POP32_VAL(esp); /* 0x110088E7: pop esi */
    ebp = POP32_VAL(esp); /* 0x110088E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110088E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_110088EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110088EAu);

L_110088EA:
    PUSH32(esp, 8); /* 0x110088EA: push 8 */
    eax = 0x1103BE57u; /* 0x110088EC: mov eax, 0x1103be57 */
    RECOMP_CALL(sub_1103B372); /* 0x110088F1: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x110088F6: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x110088F8: mov dword ptr [ebp - 0x14], edi */
    esi = edi + 0x8; /* 0x110088FB: lea esi, [edi + 8] */
    MEM32(edi) = 0x11003F9Cu; /* 0x110088FE: mov dword ptr [edi], 0x11003f9c */
    ecx = esi; /* 0x11008904: mov ecx, esi */
    RECOMP_CALL(sub_1100930C); /* 0x11008906: call 0x1100930c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100890B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100890D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100890F: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x11008910: mov dword ptr [ebp - 4], ebx */
    MEM32(edi + 0x160) = eax; /* 0x11008913: mov dword ptr [edi + 0x160], eax */
    MEM32(edi + 0x164) = eax; /* 0x11008919: mov dword ptr [edi + 0x164], eax */
    eax = edi; /* 0x1100891F: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11008921: cdq  */
    PUSH32(esp, edx); /* 0x11008922: push edx */
    PUSH32(esp, eax); /* 0x11008923: push eax */
    PUSH32(esp, edx); /* 0x11008924: push edx */
    PUSH32(esp, eax); /* 0x11008925: push eax */
    PUSH32(esp, ebx); /* 0x11008926: push ebx */
    MEM32(edi + 0x168) = ebx; /* 0x11008927: mov dword ptr [edi + 0x168], ebx */
    MEM32(edi + 0x16C) = ebx; /* 0x1100892D: mov dword ptr [edi + 0x16c], ebx */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x11008933: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11008939: add esp, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1100893C: mov dword ptr [ebp - 0x10], ebx */
    /* test esi, esi */ /* 0x1100893F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008949; /* 0x11008941: je 0x11008949 */
L_11008943:
    ebx = edi + 0xF0; /* 0x11008943: lea ebx, [edi + 0xf0] */
L_11008949:
    edx = ebp + (-0x10); /* 0x11008949: lea edx, [ebp - 0x10] */
    ecx = ebx; /* 0x1100894C: mov ecx, ebx */
    RECOMP_CALL(sub_1100D102); /* 0x1100894E: call 0x1100d102 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11008953: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11008955: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100895A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100895B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100895Bu);

L_1100895B:
    PUSH32(esp, 8); /* 0x1100895B: push 8 */
    eax = 0x1103BE57u; /* 0x1100895D: mov eax, 0x1103be57 */
    RECOMP_CALL(sub_1103B372); /* 0x11008962: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11008967: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x11008969: mov dword ptr [ebp - 0x14], edi */
    esi = edi + 0x8; /* 0x1100896C: lea esi, [edi + 8] */
    MEM32(edi) = 0x11003F9Cu; /* 0x1100896F: mov dword ptr [edi], 0x11003f9c */
    ecx = esi; /* 0x11008975: mov ecx, esi */
    RECOMP_CALL(sub_1100930C); /* 0x11008977: call 0x1100930c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100897C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100897E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11008980: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x11008981: mov dword ptr [ebp - 4], ebx */
    MEM32(edi + 0x160) = eax; /* 0x11008984: mov dword ptr [edi + 0x160], eax */
    MEM32(edi + 0x164) = eax; /* 0x1100898A: mov dword ptr [edi + 0x164], eax */
    eax = MEM32(ebp + 0x8); /* 0x11008990: mov eax, dword ptr [ebp + 8] */
    MEM32(edi + 0x168) = eax; /* 0x11008993: mov dword ptr [edi + 0x168], eax */
    eax = edi; /* 0x11008999: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100899B: cdq  */
    PUSH32(esp, edx); /* 0x1100899C: push edx */
    PUSH32(esp, eax); /* 0x1100899D: push eax */
    PUSH32(esp, edx); /* 0x1100899E: push edx */
    PUSH32(esp, eax); /* 0x1100899F: push eax */
    PUSH32(esp, ebx); /* 0x110089A0: push ebx */
    MEM32(edi + 0x16C) = ebx; /* 0x110089A1: mov dword ptr [edi + 0x16c], ebx */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x110089A7: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x110089AD: add esp, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ebx; /* 0x110089B0: mov dword ptr [ebp - 0x10], ebx */
    /* test esi, esi */ /* 0x110089B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110089BD; /* 0x110089B5: je 0x110089bd */
L_110089B7:
    ebx = edi + 0xF0; /* 0x110089B7: lea ebx, [edi + 0xf0] */
L_110089BD:
    edx = ebp + (-0x10); /* 0x110089BD: lea edx, [ebp - 0x10] */
    ecx = ebx; /* 0x110089C0: mov ecx, ebx */
    RECOMP_CALL(sub_1100D102); /* 0x110089C2: call 0x1100d102 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x110089C7: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x110089C9: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110089CE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110089D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110089D1u);

L_110089D1:
    PUSH32(esp, 8); /* 0x110089D1: push 8 */
    eax = 0x1103BE57u; /* 0x110089D3: mov eax, 0x1103be57 */
    RECOMP_CALL(sub_1103B372); /* 0x110089D8: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x110089DD: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x110089DF: mov dword ptr [ebp - 0x14], edi */
    esi = edi + 0x8; /* 0x110089E2: lea esi, [edi + 8] */
    MEM32(edi) = 0x11003F9Cu; /* 0x110089E5: mov dword ptr [edi], 0x11003f9c */
    ecx = esi; /* 0x110089EB: mov ecx, esi */
    RECOMP_CALL(sub_1100930C); /* 0x110089ED: call 0x1100930c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110089F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110089F4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110089F6: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x110089F7: mov dword ptr [ebp - 4], ebx */
    MEM32(edi + 0x160) = eax; /* 0x110089FA: mov dword ptr [edi + 0x160], eax */
    MEM32(edi + 0x164) = eax; /* 0x11008A00: mov dword ptr [edi + 0x164], eax */
    eax = MEM32(ebp + 0x8); /* 0x11008A06: mov eax, dword ptr [ebp + 8] */
    MEM32(edi + 0x16C) = eax; /* 0x11008A09: mov dword ptr [edi + 0x16c], eax */
    eax = edi; /* 0x11008A0F: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11008A11: cdq  */
    PUSH32(esp, edx); /* 0x11008A12: push edx */
    PUSH32(esp, eax); /* 0x11008A13: push eax */
    PUSH32(esp, edx); /* 0x11008A14: push edx */
    PUSH32(esp, eax); /* 0x11008A15: push eax */
    PUSH32(esp, ebx); /* 0x11008A16: push ebx */
    MEM32(edi + 0x168) = ebx; /* 0x11008A17: mov dword ptr [edi + 0x168], ebx */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x11008A1D: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11008A23: add esp, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11008A26: mov dword ptr [ebp - 0x10], ebx */
    /* test esi, esi */ /* 0x11008A29: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008A33; /* 0x11008A2B: je 0x11008a33 */
L_11008A2D:
    ebx = edi + 0xF0; /* 0x11008A2D: lea ebx, [edi + 0xf0] */
L_11008A33:
    edx = ebp + (-0x10); /* 0x11008A33: lea edx, [ebp - 0x10] */
    ecx = ebx; /* 0x11008A36: mov ecx, ebx */
    RECOMP_CALL(sub_1100D102); /* 0x11008A38: call 0x1100d102 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11008A3D: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11008A3F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11008A44: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11008A47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008A47u);

L_11008A47:
    PUSH32(esp, 4); /* 0x11008A47: push 4 */
    eax = 0x1103BE7Du; /* 0x11008A49: mov eax, 0x1103be7d */
    RECOMP_CALL(sub_1103B372); /* 0x11008A4E: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11008A53: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11008A55: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11003F9Cu; /* 0x11008A58: mov dword ptr [esi], 0x11003f9c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11008A5E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x11008A62: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11008A64: cdq  */
    PUSH32(esp, edx); /* 0x11008A65: push edx */
    PUSH32(esp, eax); /* 0x11008A66: push eax */
    PUSH32(esp, 3); /* 0x11008A67: push 3 */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x11008A69: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11008A6F: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x8; /* 0x11008A73: lea ecx, [esi + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11008A76: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_110093D8); /* 0x11008A79: call 0x110093d8 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x11008A7E: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008A83: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008A84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008A84u);

L_11008A84:
    eax = ecx + 0x8; /* 0x11008A84: lea eax, [ecx + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008A87: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008A88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008A88u);

L_11008A88:
    PUSH32(esp, ecx); /* 0x11008A88: push ecx */
    PUSH32(esp, 0); /* 0x11008A89: push 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x11008A8B: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x11008A8E: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1100CB8A); /* 0x11008A91: call 0x1100cb8a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008A96: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11008A97: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008A98: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008A99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008A99u);

L_11008A99:
    PUSH32(esp, ebp); /* 0x11008A99: push ebp */
    ebp = esp; /* 0x11008A9A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x11008A9C: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x11008A9F: push ecx */
    PUSH32(esp, ebx); /* 0x11008AA0: push ebx */
    PUSH32(esp, esi); /* 0x11008AA1: push esi */
    esi = ecx; /* 0x11008AA2: mov esi, ecx */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x11008AA4: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x11008AA7: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11008AA8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x11008AAA: push edi */
    ebx = esi + 0x8; /* 0x11008AAB: lea ebx, [esi + 8] */
    ecx = ebx; /* 0x11008AAE: mov ecx, ebx */
    RECOMP_CALL(sub_1100CB8A); /* 0x11008AB0: call 0x1100cb8a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008AB5: pop ecx */
    /* test eax, eax */ /* 0x11008AB6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008ABE; /* 0x11008AB8: je 0x11008abe */
L_11008ABA:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11008ABA: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_11008B2F; /* 0x11008ABC: jmp 0x11008b2f */
L_11008ABE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11008ABE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x160; /* 0x11008AC0: lea ecx, [esi + 0x160] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11008AC6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11008AC8: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x11008AC9: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x11008ACD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008ABA; /* 0x11008ACF: je 0x11008aba */
L_11008AD1:
    eax = esi; /* 0x11008AD1: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11008AD3: cdq  */
    PUSH32(esp, edx); /* 0x11008AD4: push edx */
    PUSH32(esp, eax); /* 0x11008AD5: push eax */
    PUSH32(esp, 4); /* 0x11008AD6: push 4 */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x11008AD8: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11008ADE: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0xC) = 1; /* 0x11008AE1: mov dword ptr [esp + 0xc], 1 */
    /* test ebx, ebx */ /* 0x11008AE9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008AF3; /* 0x11008AEB: je 0x11008af3 */
L_11008AED:
    edi = esi + 0xF0; /* 0x11008AED: lea edi, [esi + 0xf0] */
L_11008AF3:
    edx = esp + 0xC; /* 0x11008AF3: lea edx, [esp + 0xc] */
    ecx = edi; /* 0x11008AF7: mov ecx, edi */
    RECOMP_CALL(sub_1100D102); /* 0x11008AF9: call 0x1100d102 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x16C); /* 0x11008AFE: mov ecx, dword ptr [esi + 0x16c] */
    PUSH32(esp, esi); /* 0x11008B04: push esi */
    PUSH32(esp, 0x11009140u); /* 0x11008B05: push 0x11009140 */
    /* test ecx, ecx */ /* 0x11008B0A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008B14; /* 0x11008B0C: je 0x11008b14 */
L_11008B0E:
    eax = MEM32(ecx); /* 0x11008B0E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x11008B10: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    goto L_11008B2D; /* 0x11008B12: jmp 0x11008b2d */
L_11008B14:
    ecx = MEM32(esi + 0x168); /* 0x11008B14: mov ecx, dword ptr [esi + 0x168] */
    /* test ecx, ecx */ /* 0x11008B1A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008B25; /* 0x11008B1C: je 0x11008b25 */
L_11008B1E:
    eax = MEM32(ecx); /* 0x11008B1E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x11008B20: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    goto L_11008B2D; /* 0x11008B23: jmp 0x11008b2d */
L_11008B25:
    RECOMP_ICALL(MEM32(0x11069200)); /* 0x11008B25: call dword ptr [0x11069200] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008B2B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11008B2C: pop ecx */
L_11008B2D:
    SET_LO8(eax, 1); /* 0x11008B2D: mov al, 1 */
L_11008B2F:
    edi = POP32_VAL(esp); /* 0x11008B2F: pop edi */
    esi = POP32_VAL(esp); /* 0x11008B30: pop esi */
    ebx = POP32_VAL(esp); /* 0x11008B31: pop ebx */
    esp = ebp; /* 0x11008B32: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11008B34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008B35: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008B36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008B36u);

L_11008B36:
    PUSH32(esp, ebp); /* 0x11008B36: push ebp */
    ebp = esp; /* 0x11008B37: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x11008B39: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x11008B3C: push -1 */
    PUSH32(esp, 0x1103BEA8u); /* 0x11008B3E: push 0x1103bea8 */
    eax = MEM32(FS_BASE + (0)); /* 0x11008B43: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x11008B49: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x11008B4A: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11008B4D: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x11008B52: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x20) = eax; /* 0x11008B54: mov dword ptr [esp + 0x20], eax */
    PUSH32(esp, ebx); /* 0x11008B58: push ebx */
    PUSH32(esp, esi); /* 0x11008B59: push esi */
    PUSH32(esp, edi); /* 0x11008B5A: push edi */
    eax = MEM32(0x110631D0); /* 0x11008B5B: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x11008B60: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11008B62: push eax */
    eax = esp + 0x38; /* 0x11008B63: lea eax, [esp + 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x11008B67: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x11008B6D: mov edi, ecx */
    RECOMP_CALL(sub_11008A88); /* 0x11008B6F: call 0x11008a88 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11008B74: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edi + 0x160; /* 0x11008B76: lea edx, [edi + 0x160] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11008B7C: inc ecx */
    _flag_k = FK_INC;
    ebx = eax; /* 0x11008B7D: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11008B7F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x11008B81: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x11008B83: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x11008B87: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11008BC4; /* 0x11008B89: je 0x11008bc4 */
L_11008B8B:
    eax = esp + 0x14; /* 0x11008B8B: lea eax, [esp + 0x14] */
    MEM32(esp + 0x14) = 0x11004254u; /* 0x11008B8F: mov dword ptr [esp + 0x14], 0x11004254 */
    MEM32(esp + 0x18) = 0x110088C9u; /* 0x11008B97: mov dword ptr [esp + 0x18], 0x110088c9 */
    MEM32(esp + 0x24) = eax; /* 0x11008B9F: mov dword ptr [esp + 0x24], eax */
    MEM32(esp + 0x40) = ecx; /* 0x11008BA3: mov dword ptr [esp + 0x40], ecx */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x11008BA7: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11008BAA: push eax */
    ecx = edi + 0x8; /* 0x11008BAB: lea ecx, [edi + 8] */
    RECOMP_CALL(sub_1100CB8A); /* 0x11008BAE: call 0x1100cb8a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esp + 0x44) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x44) | 0xFFFFFFFFu));
    MEM32(esp + 0x44) = MEM32(esp + 0x44) | 0xFFFFFFFFu; /* 0x11008BB3: or dword ptr [esp + 0x44], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x11008BB8: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x11008BBA: pop ecx */
    ecx = esp + 0x14; /* 0x11008BBB: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_1100A32D); /* 0x11008BBF: call 0x1100a32d */
    RECOMP_FLAGS_IN();
L_11008BC4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11008BC4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x164; /* 0x11008BC6: lea eax, [edi + 0x164] */
    { uint32_t _tmp = MEM32(eax); /* 0x11008BCC: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    /* cmp ebx, 4 */ /* 0x11008BCE: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11008BFC; /* 0x11008BD1: je 0x11008bfc */
L_11008BD3:
    PUSH32(esp, 3); /* 0x11008BD3: push 3 */
    eax = POP32_VAL(esp); /* 0x11008BD5: pop eax */
    /* cmp ebx, eax */ /* 0x11008BD6: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11008BFC; /* 0x11008BD8: je 0x11008bfc */
L_11008BDA:
    MEM32(esp + 0x10) = eax; /* 0x11008BDA: mov dword ptr [esp + 0x10], eax */
    eax = edi + 0x8; /* 0x11008BDE: lea eax, [edi + 8] */
    /* test eax, eax */ /* 0x11008BE1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008BED; /* 0x11008BE3: je 0x11008bed */
L_11008BE5:
    ecx = edi + 0xF0; /* 0x11008BE5: lea ecx, [edi + 0xf0] */
    goto L_11008BEF; /* 0x11008BEB: jmp 0x11008bef */
L_11008BED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11008BED: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_11008BEF:
    edx = esp + 0x10; /* 0x11008BEF: lea edx, [esp + 0x10] */
    RECOMP_CALL(sub_1100D102); /* 0x11008BF3: call 0x1100d102 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x11008BF8: mov al, 1 */
    goto L_11008BFE; /* 0x11008BFA: jmp 0x11008bfe */
L_11008BFC:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11008BFC: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11008BFE:
    ecx = MEM32(esp + 0x38); /* 0x11008BFE: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x11008C02: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x11008C09: pop ecx */
    edi = POP32_VAL(esp); /* 0x11008C0A: pop edi */
    esi = POP32_VAL(esp); /* 0x11008C0B: pop esi */
    ebx = POP32_VAL(esp); /* 0x11008C0C: pop ebx */
    ecx = MEM32(esp + 0x20); /* 0x11008C0D: mov ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x11008C11: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x11008C13: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11008C18: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11008C1A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008C1B: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008C1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008C1Cu);

L_11008C1C:
    PUSH32(esp, ebp); /* 0x11008C1C: push ebp */
    ebp = esp; /* 0x11008C1D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x11008C1F: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x11008C22: push -1 */
    PUSH32(esp, 0x1103BEA8u); /* 0x11008C24: push 0x1103bea8 */
    eax = MEM32(FS_BASE + (0)); /* 0x11008C29: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x11008C2F: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x11008C30: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11008C33: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x11008C38: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x20) = eax; /* 0x11008C3A: mov dword ptr [esp + 0x20], eax */
    PUSH32(esp, ebx); /* 0x11008C3E: push ebx */
    PUSH32(esp, esi); /* 0x11008C3F: push esi */
    PUSH32(esp, edi); /* 0x11008C40: push edi */
    eax = MEM32(0x110631D0); /* 0x11008C41: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x11008C46: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11008C48: push eax */
    eax = esp + 0x38; /* 0x11008C49: lea eax, [esp + 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x11008C4D: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x11008C53: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11008C55: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edi + 0x160; /* 0x11008C57: lea edx, [edi + 0x160] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11008C5D: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11008C5E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x11008C60: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x11008C62: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x11008C66: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11008C8C; /* 0x11008C68: jne 0x11008c8c */
L_11008C6A:
    eax = edi + 0x8; /* 0x11008C6A: lea eax, [edi + 8] */
    MEM32(esp + 0x10) = 4; /* 0x11008C6D: mov dword ptr [esp + 0x10], 4 */
    /* test eax, eax */ /* 0x11008C75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008C81; /* 0x11008C77: je 0x11008c81 */
L_11008C79:
    ecx = edi + 0xF0; /* 0x11008C79: lea ecx, [edi + 0xf0] */
    goto L_11008C83; /* 0x11008C7F: jmp 0x11008c83 */
L_11008C81:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11008C81: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_11008C83:
    edx = esp + 0x10; /* 0x11008C83: lea edx, [esp + 0x10] */
    RECOMP_CALL(sub_1100D102); /* 0x11008C87: call 0x1100d102 */
    RECOMP_FLAGS_IN();
L_11008C8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11008C8C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x164; /* 0x11008C8E: lea ecx, [edi + 0x164] */
    eax = ebx; /* 0x11008C94: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x11008C96: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x11008C9A: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11008CD6; /* 0x11008C9C: jne 0x11008cd6 */
L_11008C9E:
    eax = esp + 0x14; /* 0x11008C9E: lea eax, [esp + 0x14] */
    MEM32(esp + 0x14) = 0x11004254u; /* 0x11008CA2: mov dword ptr [esp + 0x14], 0x11004254 */
    MEM32(esp + 0x18) = 0x110088B0u; /* 0x11008CAA: mov dword ptr [esp + 0x18], 0x110088b0 */
    MEM32(esp + 0x24) = eax; /* 0x11008CB2: mov dword ptr [esp + 0x24], eax */
    ecx = eax; /* 0x11008CB6: mov ecx, eax */
    MEM32(esp + 0x40) = ebx; /* 0x11008CB8: mov dword ptr [esp + 0x40], ebx */
    PUSH32(esp, ecx); /* 0x11008CBC: push ecx */
    ecx = edi + 0x8; /* 0x11008CBD: lea ecx, [edi + 8] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x11008CC0: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1100CB8A); /* 0x11008CC3: call 0x1100cb8a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008CC8: pop ecx */
    ecx = esp + 0x14; /* 0x11008CC9: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_1100A32D); /* 0x11008CCD: call 0x1100a32d */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, LO8(ebx)); /* 0x11008CD2: mov al, bl */
    goto L_11008CD8; /* 0x11008CD4: jmp 0x11008cd8 */
L_11008CD6:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11008CD6: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11008CD8:
    ecx = MEM32(esp + 0x38); /* 0x11008CD8: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x11008CDC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x11008CE3: pop ecx */
    edi = POP32_VAL(esp); /* 0x11008CE4: pop edi */
    esi = POP32_VAL(esp); /* 0x11008CE5: pop esi */
    ebx = POP32_VAL(esp); /* 0x11008CE6: pop ebx */
    ecx = MEM32(esp + 0x20); /* 0x11008CE7: mov ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x11008CEB: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x11008CED: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11008CF2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11008CF4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008CF5: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008CF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008CF6u);

L_11008CF6:
    PUSH32(esp, ebp); /* 0x11008CF6: push ebp */
    ebp = esp; /* 0x11008CF7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x11008CF9: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x11008CFC: push -1 */
    PUSH32(esp, 0x1103BEE0u); /* 0x11008CFE: push 0x1103bee0 */
    eax = MEM32(FS_BASE + (0)); /* 0x11008D03: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x11008D09: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x11008D0A: sub esp, 0x38 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11008D0D: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x11008D12: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x30) = eax; /* 0x11008D14: mov dword ptr [esp + 0x30], eax */
    PUSH32(esp, esi); /* 0x11008D18: push esi */
    eax = MEM32(0x110631D0); /* 0x11008D19: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x11008D1E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11008D20: push eax */
    eax = esp + 0x40; /* 0x11008D21: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x11008D25: mov dword ptr fs:[0], eax */
    ecx = MEM32(ebp + 0x8); /* 0x11008D2B: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x11008D2E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11008D60; /* 0x11008D30: jne 0x11008d60 */
L_11008D32:
    eax = esp + 0xC; /* 0x11008D32: lea eax, [esp + 0xc] */
    MEM32(esp + 0xC) = 0x1100387Cu; /* 0x11008D36: mov dword ptr [esp + 0xc], 0x1100387c */
    PUSH32(esp, eax); /* 0x11008D3E: push eax */
    ecx = esp + 0x14; /* 0x11008D3F: lea ecx, [esp + 0x14] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11008D43: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x11008D49: push 0x11045568 */
    eax = esp + 0x14; /* 0x11008D4E: lea eax, [esp + 0x14] */
    MEM32(esp + 0x14) = 0x11001470u; /* 0x11008D52: mov dword ptr [esp + 0x14], 0x11001470 */
    PUSH32(esp, eax); /* 0x11008D5A: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11008D5B: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11008D60:
    eax = esp + 0x1C; /* 0x11008D60: lea eax, [esp + 0x1c] */
    MEM32(esp + 0x1C) = 0x11004254u; /* 0x11008D64: mov dword ptr [esp + 0x1c], 0x11004254 */
    MEM32(esp + 0x20) = 0x110088B0u; /* 0x11008D6C: mov dword ptr [esp + 0x20], 0x110088b0 */
    MEM32(esp + 0x2C) = eax; /* 0x11008D74: mov dword ptr [esp + 0x2c], eax */
    edx = MEM32(ebp + 0xC); /* 0x11008D78: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x11008D7B: add ecx, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x11008D7E: push eax */
    MEM32(esp + 0x4C) = 1; /* 0x11008D7F: mov dword ptr [esp + 0x4c], 1 */
    RECOMP_CALL(sub_1100CB8A); /* 0x11008D87: call 0x1100cb8a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008D8C: pop ecx */
    ecx = esp + 0x1C; /* 0x11008D8D: lea ecx, [esp + 0x1c] */
    esi = eax; /* 0x11008D91: mov esi, eax */
    RECOMP_CALL(sub_1100A32D); /* 0x11008D93: call 0x1100a32d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11008D98: mov eax, esi */
    ecx = MEM32(esp + 0x40); /* 0x11008D9A: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x11008D9E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x11008DA5: pop ecx */
    esi = POP32_VAL(esp); /* 0x11008DA6: pop esi */
    ecx = MEM32(esp + 0x30); /* 0x11008DA7: mov ecx, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x11008DAB: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x11008DAD: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11008DB2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11008DB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008DB5: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008DB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008DB6u);

L_11008DB6:
    PUSH32(esp, ebp); /* 0x11008DB6: push ebp */
    ebp = esp; /* 0x11008DB7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11008DB9: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11008DBA: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x11008DBD: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x110692E4)); /* 0x11008DBF: call dword ptr [0x110692e4] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11001470u; /* 0x11008DC5: mov dword ptr [esi], 0x11001470 */
    eax = esi; /* 0x11008DCB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11008DCD: pop esi */
    ebp = POP32_VAL(esp); /* 0x11008DCE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11008DCF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11008DEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008DEEu);

L_11008DEE:
    PUSH32(esp, ebp); /* 0x11008DEE: push ebp */
    ebp = esp; /* 0x11008DEF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x11008DF1: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x11008DF4: push -1 */
    PUSH32(esp, 0x1103BF3Fu); /* 0x11008DF6: push 0x1103bf3f */
    eax = MEM32(FS_BASE + (0)); /* 0x11008DFB: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x11008E01: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2D8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2D8u; /* 0x11008E02: sub esp, 0x2d8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11008E08: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x11008E0D: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x2D0) = eax; /* 0x11008E0F: mov dword ptr [esp + 0x2d0], eax */
    PUSH32(esp, ebx); /* 0x11008E16: push ebx */
    PUSH32(esp, esi); /* 0x11008E17: push esi */
    PUSH32(esp, edi); /* 0x11008E18: push edi */
    eax = MEM32(0x110631D0); /* 0x11008E19: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x11008E1E: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11008E20: push eax */
    eax = esp + 0x2E8; /* 0x11008E21: lea eax, [esp + 0x2e8] */
    MEM32(FS_BASE + (0)) = eax; /* 0x11008E28: mov dword ptr fs:[0], eax */
    ecx = MEM32(ebp + 0xC); /* 0x11008E2E: mov ecx, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x10); /* 0x11008E31: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(esp + 0x24) = ecx; /* 0x11008E34: mov dword ptr [esp + 0x24], ecx */
    /* test ecx, ecx */ /* 0x11008E38: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11008E6A; /* 0x11008E3A: jne 0x11008e6a */
L_11008E3C:
    eax = esp + 0x2C; /* 0x11008E3C: lea eax, [esp + 0x2c] */
    MEM32(esp + 0x2C) = 0x11003884u; /* 0x11008E40: mov dword ptr [esp + 0x2c], 0x11003884 */
    PUSH32(esp, eax); /* 0x11008E48: push eax */
    ecx = esp + 0x18; /* 0x11008E49: lea ecx, [esp + 0x18] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11008E4D: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x14) = 0x11001470u; /* 0x11008E53: mov dword ptr [esp + 0x14], 0x11001470 */
    eax = esp + 0x14; /* 0x11008E5B: lea eax, [esp + 0x14] */
    PUSH32(esp, 0x11045568u); /* 0x11008E5F: push 0x11045568 */
L_11008E64:
    PUSH32(esp, eax); /* 0x11008E64: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11008E65: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11008E6A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11008E6A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x11008E6C: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11008E7D; /* 0x11008E6F: jbe 0x11008e7d */
L_11008E71:
    /* cmp MEM32(ecx + eax * 4), 0 */ /* 0x11008E71: cmp dword ptr [ecx + eax*4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + eax * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11008ECE; /* 0x11008E75: je 0x11008ece */
L_11008E77:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11008E77: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x11008E78: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11008E71; /* 0x11008E7B: jb 0x11008e71 */
L_11008E7D:
    ecx = esp + 0x16C; /* 0x11008E7D: lea ecx, [esp + 0x16c] */
    RECOMP_CALL(sub_1100A351); /* 0x11008E84: call 0x1100a351 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11008E89: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp + 0x20; /* 0x11008E8B: lea eax, [esp + 0x20] */
    MEM32(esp + 0x2F0) = ecx; /* 0x11008E8F: mov dword ptr [esp + 0x2f0], ecx */
    MEM32(esp + 0x14) = eax; /* 0x11008E96: mov dword ptr [esp + 0x14], eax */
    eax = ebp + 0x8; /* 0x11008E9A: lea eax, [ebp + 8] */
    MEM32(esp + 0x18) = eax; /* 0x11008E9D: mov dword ptr [esp + 0x18], eax */
    eax = esp + 0x16C; /* 0x11008EA1: lea eax, [esp + 0x16c] */
    MEM32(esp + 0x20) = ecx; /* 0x11008EA8: mov dword ptr [esp + 0x20], ecx */
    MEM32(esp + 0x1C) = eax; /* 0x11008EAC: mov dword ptr [esp + 0x1c], eax */
    MEM32(esp + 0x54) = ecx; /* 0x11008EB0: mov dword ptr [esp + 0x54], ecx */
    PUSH32(esp, 0x14u); /* 0x11008EB4: push 0x14 */
    MEM8(esp + 0x2F4) = (uint8_t)(1); /* 0x11008EB6: mov byte ptr [esp + 0x2f4], 1 */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x11008EBE: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008EC4: pop ecx */
    /* test eax, eax */ /* 0x11008EC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11008EFB; /* 0x11008EC7: jne 0x11008efb */
L_11008EC9:
    RECOMP_CALL(sub_1101163C); /* 0x11008EC9: call 0x1101163c */
    RECOMP_FLAGS_IN();
L_11008ECE:
    eax = esp + 0x28; /* 0x11008ECE: lea eax, [esp + 0x28] */
    MEM32(esp + 0x28) = 0x11003884u; /* 0x11008ED2: mov dword ptr [esp + 0x28], 0x11003884 */
    PUSH32(esp, eax); /* 0x11008EDA: push eax */
    ecx = esp + 0x3C; /* 0x11008EDB: lea ecx, [esp + 0x3c] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11008EDF: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0x11001470u; /* 0x11008EE5: mov dword ptr [esp + 0x38], 0x11001470 */
    eax = esp + 0x38; /* 0x11008EED: lea eax, [esp + 0x38] */
    PUSH32(esp, 0x11045568u); /* 0x11008EF1: push 0x11045568 */
    RECOMP_BACKEDGE();
    goto L_11008E64; /* 0x11008EF6: jmp 0x11008e64 */
L_11008EFB:
    MEM32(eax) = 0x11004014u; /* 0x11008EFB: mov dword ptr [eax], 0x11004014 */
    edi = eax + 0x4; /* 0x11008F01: lea edi, [eax + 4] */
    esi = esp + 0x14; /* 0x11008F04: lea esi, [esp + 0x14] */
    MEM32(esp + 0x54) = eax; /* 0x11008F08: mov dword ptr [esp + 0x54], eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x11008F0C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x11008F0D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x11008F0E: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = esp + 0x44; /* 0x11008F0F: lea eax, [esp + 0x44] */
    MEM8(esp + 0x2F0) = (uint8_t)(2); /* 0x11008F13: mov byte ptr [esp + 0x2f0], 2 */
    PUSH32(esp, eax); /* 0x11008F1B: push eax */
    ecx = esp + 0x60; /* 0x11008F1C: lea ecx, [esp + 0x60] */
    RECOMP_CALL(sub_1100A8E4); /* 0x11008F20: call 0x1100a8e4 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x44; /* 0x11008F25: lea ecx, [esp + 0x44] */
    MEM8(esp + 0x2F0) = (uint8_t)(4); /* 0x11008F29: mov byte ptr [esp + 0x2f0], 4 */
    RECOMP_CALL(sub_1100A32D); /* 0x11008F31: call 0x1100a32d */
    RECOMP_FLAGS_IN();
    eax = esp + 0x5C; /* 0x11008F36: lea eax, [esp + 0x5c] */
    PUSH32(esp, eax); /* 0x11008F3A: push eax */
    PUSH32(esp, MEM32(esp + 0x28)); /* 0x11008F3B: push dword ptr [esp + 0x28] */
    ecx = esp + 0x38; /* 0x11008F3F: lea ecx, [esp + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11008F43: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100AD2F); /* 0x11008F46: call 0x1100ad2f */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x14); /* 0x11008F4B: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x11008F4E: push ecx */
    ecx = esp + 0x170; /* 0x11008F4F: lea ecx, [esp + 0x170] */
    MEM8(esp + 0x2F4) = (uint8_t)(5); /* 0x11008F56: mov byte ptr [esp + 0x2f4], 5 */
    RECOMP_CALL(sub_1100CC2C); /* 0x11008F5E: call 0x1100cc2c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11008F63: pop ecx */
    /* test ebx, ebx */ /* 0x11008F64: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008F89; /* 0x11008F66: je 0x11008f89 */
L_11008F68:
    ecx = MEM32(ebp + 0x8); /* 0x11008F68: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x11008F6B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11008F89; /* 0x11008F6D: je 0x11008f89 */
L_11008F6F:
    edx = MEM32(esp + 0x34); /* 0x11008F6F: mov edx, dword ptr [esp + 0x34] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x11008F73: sub edx, ebx */
    _flag_k = FK_CMP;
L_11008F75:
    eax = MEM32(edx + ebx); /* 0x11008F75: mov eax, dword ptr [edx + ebx] */
    eax = MEM32(eax + 0x140); /* 0x11008F78: mov eax, dword ptr [eax + 0x140] */
    eax = MEM32(eax + 0x8); /* 0x11008F7E: mov eax, dword ptr [eax + 8] */
    MEM32(ebx) = eax; /* 0x11008F81: mov dword ptr [ebx], eax */
    ebx = ebx + 0x4; /* 0x11008F83: lea ebx, [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x11008F86: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_11008F75; /* 0x11008F87: jne 0x11008f75 */
L_11008F89:
    ecx = esp + 0x30; /* 0x11008F89: lea ecx, [esp + 0x30] */
    MEM8(esp + 0x2F0) = (uint8_t)(4); /* 0x11008F8D: mov byte ptr [esp + 0x2f0], 4 */
    RECOMP_CALL(sub_1100ADEE); /* 0x11008F95: call 0x1100adee */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x5C; /* 0x11008F9A: lea ecx, [esp + 0x5c] */
    MEM8(esp + 0x2F0) = (uint8_t)(0); /* 0x11008F9E: mov byte ptr [esp + 0x2f0], 0 */
    RECOMP_CALL(sub_1100AA24); /* 0x11008FA6: call 0x1100aa24 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esp + 0x2F0) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x2F0) | 0xFFFFFFFFu));
    MEM32(esp + 0x2F0) = MEM32(esp + 0x2F0) | 0xFFFFFFFFu; /* 0x11008FAB: or dword ptr [esp + 0x2f0], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp + 0x16C; /* 0x11008FB3: lea ecx, [esp + 0x16c] */
    RECOMP_CALL(sub_1100A3F0); /* 0x11008FBA: call 0x1100a3f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x2E8); /* 0x11008FBF: mov ecx, dword ptr [esp + 0x2e8] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x11008FC6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x11008FCD: pop ecx */
    edi = POP32_VAL(esp); /* 0x11008FCE: pop edi */
    esi = POP32_VAL(esp); /* 0x11008FCF: pop esi */
    ebx = POP32_VAL(esp); /* 0x11008FD0: pop ebx */
    ecx = MEM32(esp + 0x2D0); /* 0x11008FD1: mov ecx, dword ptr [esp + 0x2d0] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x11008FD8: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x11008FDA: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11008FDF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11008FE1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11008FE2: ret  */
    RECOMP_REGS_OUT();
}

void sub_11008FE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11008FE5u);

L_11008FE5:
    PUSH32(esp, ebp); /* 0x11008FE5: push ebp */
    ebp = esp; /* 0x11008FE6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x11008FE8: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x11008FEB: push -1 */
    PUSH32(esp, 0x1103BF83u); /* 0x11008FED: push 0x1103bf83 */
    eax = MEM32(FS_BASE + (0)); /* 0x11008FF2: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x11008FF8: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1A4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1A4u; /* 0x11008FF9: sub esp, 0x1a4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11008FFF: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x11009004: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x19C) = eax; /* 0x11009006: mov dword ptr [esp + 0x19c], eax */
    PUSH32(esp, ebx); /* 0x1100900D: push ebx */
    PUSH32(esp, esi); /* 0x1100900E: push esi */
    eax = MEM32(0x110631D0); /* 0x1100900F: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x11009014: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11009016: push eax */
    eax = esp + 0x1B0; /* 0x11009017: lea eax, [esp + 0x1b0] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1100901E: mov dword ptr fs:[0], eax */
    esi = MEM32(ebp + 0xC); /* 0x11009024: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x14); /* 0x11009027: mov eax, dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + 0x10); /* 0x1100902A: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(esp + 0x10) = eax; /* 0x1100902D: mov dword ptr [esp + 0x10], eax */
    /* test esi, esi */ /* 0x11009031: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11009063; /* 0x11009033: jne 0x11009063 */
L_11009035:
    eax = esp + 0x14; /* 0x11009035: lea eax, [esp + 0x14] */
    MEM32(esp + 0x14) = 0x11003884u; /* 0x11009039: mov dword ptr [esp + 0x14], 0x11003884 */
    PUSH32(esp, eax); /* 0x11009041: push eax */
    ecx = esp + 0x20; /* 0x11009042: lea ecx, [esp + 0x20] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11009046: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x1C) = 0x11001470u; /* 0x1100904C: mov dword ptr [esp + 0x1c], 0x11001470 */
    eax = esp + 0x1C; /* 0x11009054: lea eax, [esp + 0x1c] */
    PUSH32(esp, 0x11045568u); /* 0x11009058: push 0x11045568 */
L_1100905D:
    PUSH32(esp, eax); /* 0x1100905D: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100905E: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11009063:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11009063: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x11009065: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1100907A; /* 0x11009068: jbe 0x1100907a */
L_1100906A:
    /* cmp MEM32(esi + eax * 4), 0 */ /* 0x1100906A: cmp dword ptr [esi + eax*4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11009113; /* 0x1100906E: je 0x11009113 */
L_11009074:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11009074: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x11009075: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1100906A; /* 0x11009078: jb 0x1100906a */
L_1100907A:
    ecx = esp + 0x34; /* 0x1100907A: lea ecx, [esp + 0x34] */
    RECOMP_CALL(sub_1100A351); /* 0x1100907E: call 0x1100a351 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esp + 0x1B8)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x1B8) = MEM32(esp + 0x1B8) & 0; /* 0x11009083: and dword ptr [esp + 0x1b8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp + 0x11C; /* 0x1100908B: lea eax, [esp + 0x11c] */
    PUSH32(esp, eax); /* 0x11009092: push eax */
    PUSH32(esp, esi); /* 0x11009093: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11009094: push dword ptr [ebp + 8] */
    ecx = esp + 0x20; /* 0x11009097: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_1100AD2F); /* 0x1100909B: call 0x1100ad2f */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x18); /* 0x110090A0: mov edx, dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x110090A3: push ecx */
    ecx = esp + 0x38; /* 0x110090A4: lea ecx, [esp + 0x38] */
    MEM8(esp + 0x1BC) = (uint8_t)(1); /* 0x110090A8: mov byte ptr [esp + 0x1bc], 1 */
    RECOMP_CALL(sub_1100CC2C); /* 0x110090B0: call 0x1100cc2c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110090B5: pop ecx */
    ecx = MEM32(esp + 0x10); /* 0x110090B6: mov ecx, dword ptr [esp + 0x10] */
    MEM32(ecx) = eax; /* 0x110090BA: mov dword ptr [ecx], eax */
    ecx = MEM32(esp + 0x18); /* 0x110090BC: mov ecx, dword ptr [esp + 0x18] */
    eax = MEM32(ecx + eax * 4); /* 0x110090C0: mov eax, dword ptr [ecx + eax*4] */
    ecx = esp + 0x14; /* 0x110090C3: lea ecx, [esp + 0x14] */
    eax = MEM32(eax + 0x140); /* 0x110090C7: mov eax, dword ptr [eax + 0x140] */
    eax = MEM32(eax + 0x8); /* 0x110090CD: mov eax, dword ptr [eax + 8] */
    MEM32(ebx) = eax; /* 0x110090D0: mov dword ptr [ebx], eax */
    MEM8(esp + 0x1B8) = (uint8_t)(0); /* 0x110090D2: mov byte ptr [esp + 0x1b8], 0 */
    RECOMP_CALL(sub_1100ADEE); /* 0x110090DA: call 0x1100adee */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esp + 0x1B8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x1B8) | 0xFFFFFFFFu));
    MEM32(esp + 0x1B8) = MEM32(esp + 0x1B8) | 0xFFFFFFFFu; /* 0x110090DF: or dword ptr [esp + 0x1b8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp + 0x34; /* 0x110090E7: lea ecx, [esp + 0x34] */
    RECOMP_CALL(sub_1100A3F0); /* 0x110090EB: call 0x1100a3f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x1B0); /* 0x110090F0: mov ecx, dword ptr [esp + 0x1b0] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x110090F7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x110090FE: pop ecx */
    esi = POP32_VAL(esp); /* 0x110090FF: pop esi */
    ebx = POP32_VAL(esp); /* 0x11009100: pop ebx */
    ecx = MEM32(esp + 0x19C); /* 0x11009101: mov ecx, dword ptr [esp + 0x19c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x11009108: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1100910A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1100910F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11009111: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11009112: ret  */
L_11009113:
    eax = esp + 0x10; /* 0x11009113: lea eax, [esp + 0x10] */
    MEM32(esp + 0x10) = 0x11003884u; /* 0x11009117: mov dword ptr [esp + 0x10], 0x11003884 */
    PUSH32(esp, eax); /* 0x1100911F: push eax */
    ecx = esp + 0x2C; /* 0x11009120: lea ecx, [esp + 0x2c] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11009124: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x28) = 0x11001470u; /* 0x1100912A: mov dword ptr [esp + 0x28], 0x11001470 */
    eax = esp + 0x28; /* 0x11009132: lea eax, [esp + 0x28] */
    PUSH32(esp, 0x11045568u); /* 0x11009136: push 0x11045568 */
    RECOMP_BACKEDGE();
    goto L_1100905D; /* 0x1100913B: jmp 0x1100905d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11009140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009140u);

L_11009140:
    PUSH32(esp, ebp); /* 0x11009140: push ebp */
    ebp = esp; /* 0x11009141: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x11009143: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x11009146: push ecx */
    PUSH32(esp, ecx); /* 0x11009147: push ecx */
    PUSH32(esp, ebx); /* 0x11009148: push ebx */
    PUSH32(esp, esi); /* 0x11009149: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1100914A: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100914D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1100914F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11009151: inc eax */
    _flag_k = FK_INC;
    ecx = esi + 0x164; /* 0x11009152: lea ecx, [esi + 0x164] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x11009158: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x1100915C: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esi + 0x8; /* 0x1100915F: lea eax, [esi + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_110091B5; /* 0x11009162: jne 0x110091b5 */
L_11009164:
    MEM32(esp + 0xC) = 2; /* 0x11009164: mov dword ptr [esp + 0xc], 2 */
    /* test eax, eax */ /* 0x1100916C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009178; /* 0x1100916E: je 0x11009178 */
L_11009170:
    ecx = esi + 0xF0; /* 0x11009170: lea ecx, [esi + 0xf0] */
    goto L_1100917A; /* 0x11009176: jmp 0x1100917a */
L_11009178:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11009178: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100917A:
    edx = esp + 0xC; /* 0x1100917A: lea edx, [esp + 0xc] */
    RECOMP_CALL(sub_1100D102); /* 0x1100917E: call 0x1100d102 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11009183: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11009185: cdq  */
    ebx = edx; /* 0x11009186: mov ebx, edx */
    MEM32(esp + 0xC) = eax; /* 0x11009188: mov dword ptr [esp + 0xc], eax */
    PUSH32(esp, ebx); /* 0x1100918C: push ebx */
    PUSH32(esp, eax); /* 0x1100918D: push eax */
    PUSH32(esp, 1); /* 0x1100918E: push 1 */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x11009190: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi); /* 0x11009196: mov esi, dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11009198: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x1100919B: mov ecx, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(esi + 0x4)); /* 0x1100919E: call dword ptr [esi + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110091A1: push 0 */
    PUSH32(esp, ebx); /* 0x110091A3: push ebx */
    PUSH32(esp, MEM32(esp + 0x14)); /* 0x110091A4: push dword ptr [esp + 0x14] */
    PUSH32(esp, 2); /* 0x110091A8: push 2 */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x110091AA: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110091B0: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_110091D4; /* 0x110091B3: jmp 0x110091d4 */
L_110091B5:
    MEM32(esp + 0xC) = 4; /* 0x110091B5: mov dword ptr [esp + 0xc], 4 */
    /* test eax, eax */ /* 0x110091BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110091C9; /* 0x110091BF: je 0x110091c9 */
L_110091C1:
    ecx = esi + 0xF0; /* 0x110091C1: lea ecx, [esi + 0xf0] */
    goto L_110091CB; /* 0x110091C7: jmp 0x110091cb */
L_110091C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110091C9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_110091CB:
    edx = esp + 0xC; /* 0x110091CB: lea edx, [esp + 0xc] */
    RECOMP_CALL(sub_1100D102); /* 0x110091CF: call 0x1100d102 */
    RECOMP_FLAGS_IN();
L_110091D4:
    esi = POP32_VAL(esp); /* 0x110091D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x110091D5: pop ebx */
    esp = ebp; /* 0x110091D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110091D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110091D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_110091DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110091DAu);

L_110091DA:
    PUSH32(esp, 2); /* 0x110091DA: push 2 */
    MEM32(ecx) = 0x11003D0Cu; /* 0x110091DC: mov dword ptr [ecx], 0x11003d0c */
    edx = 0x11068E70u; /* 0x110091E2: mov edx, 0x11068e70 */
    eax = POP32_VAL(esp); /* 0x110091E7: pop eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edx), _sum = MEM32(edx) + eax; eax = _old; MEM32(edx) = _sum; } /* 0x110091E8: lock xadd dword ptr [edx], eax */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x4) = eax; /* 0x110091EC: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x110091EF: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110091F1: ret  */
    RECOMP_REGS_OUT();
}

void sub_110091F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110091F2u);

L_110091F2:
    PUSH32(esp, ebp); /* 0x110091F2: push ebp */
    ebp = esp; /* 0x110091F3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x110091F5: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x4) = eax; /* 0x110091F8: mov dword ptr [ecx + 4], eax */
    eax = ecx; /* 0x110091FB: mov eax, ecx */
    MEM32(ecx) = 0x11003D0Cu; /* 0x110091FD: mov dword ptr [ecx], 0x11003d0c */
    ebp = POP32_VAL(esp); /* 0x11009203: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009204: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11009207(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009207u);

L_11009207:
    PUSH32(esp, ebp); /* 0x11009207: push ebp */
    ebp = esp; /* 0x11009208: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100920A: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(ecx) = 0x110041F4u; /* 0x1100920D: mov dword ptr [ecx], 0x110041f4 */
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x11009213: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100921D; /* 0x11009217: jne 0x1100921d */
L_11009219:
    esp = ebp; /* 0x11009219: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100921B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100921C: ret  */
L_1100921D:
    PUSH32(esp, 0x1100388Cu); /* 0x1100921D: push 0x1100388c */
    ecx = ebp + (-0xC); /* 0x11009222: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x11009225: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100922B: push 0x1104550c */
    eax = ebp + (-0xC); /* 0x11009230: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x11009233: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11009234: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11009239u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100923A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100923Au);

L_1100923A:
    PUSH32(esp, ebp); /* 0x1100923A: push ebp */
    ebp = esp; /* 0x1100923B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100923D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x11009240: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x11009243: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009250; /* 0x11009245: je 0x11009250 */
L_11009247:
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x11009247: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11009256; /* 0x1100924B: jne 0x11009256 */
L_1100924D:
    MEM32(ecx + 0x4) = eax; /* 0x1100924D: mov dword ptr [ecx + 4], eax */
L_11009250:
    esp = ebp; /* 0x11009250: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11009252: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009253: ret 4 */
L_11009256:
    PUSH32(esp, 0x110038C4u); /* 0x11009256: push 0x110038c4 */
    ecx = ebp + (-0xC); /* 0x1100925B: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x11069204)); /* 0x1100925E: call dword ptr [0x11069204] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104552Cu); /* 0x11009264: push 0x1104552c */
    eax = ebp + (-0xC); /* 0x11009269: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100926C: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100926D: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11009272u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11009273(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009273u);

L_11009273:
    PUSH32(esp, ebp); /* 0x11009273: push ebp */
    ebp = esp; /* 0x11009274: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11009276: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x11009279: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100928A; /* 0x1100927B: je 0x1100928a */
L_1100927D:
    /* cmp MEM32(ecx + 0x4), eax */ /* 0x1100927D: cmp dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100928A; /* 0x11009280: jne 0x1100928a */
L_11009282:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x11009282: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, 1); /* 0x11009286: mov al, 1 */
    goto L_1100928C; /* 0x11009288: jmp 0x1100928c */
L_1100928A:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1100928A: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1100928C:
    ebp = POP32_VAL(esp); /* 0x1100928C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100928D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11009290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009290u);

L_11009290:
    PUSH32(esp, ebp); /* 0x11009290: push ebp */
    ebp = esp; /* 0x11009291: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11009293: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x11009296: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110092A4; /* 0x11009298: je 0x110092a4 */
L_1100929A:
    /* cmp MEM32(ecx + 0x4), eax */ /* 0x1100929A: cmp dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110092A4; /* 0x1100929D: jne 0x110092a4 */
L_1100929F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100929F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110092A1: inc eax */
    _flag_k = FK_INC;
    goto L_110092A6; /* 0x110092A2: jmp 0x110092a6 */
L_110092A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110092A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_110092A6:
    ebp = POP32_VAL(esp); /* 0x110092A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110092A7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110092AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110092AAu);

L_110092AA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110092AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x4), eax */ /* 0x110092AC: cmp dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x110092AF: setne al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110092B2: ret  */
    RECOMP_REGS_OUT();
}

void sub_110092B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110092B3u);

L_110092B3:
    PUSH32(esp, ebp); /* 0x110092B3: push ebp */
    ebp = esp; /* 0x110092B4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110092B6: push esi */
    PUSH32(esp, edi); /* 0x110092B7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x110092B8: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) & 0; /* 0x110092BB: and dword ptr [edi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi + 0x4; /* 0x110092BF: lea esi, [edi + 4] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x110092C2: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = ecx; /* 0x110092C5: mov dword ptr [edi], ecx */
    edx = MEM32(ecx); /* 0x110092C7: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x110092C9: push esi */
    RECOMP_ICALL(MEM32(edx + 0x14)); /* 0x110092CA: call dword ptr [edx + 0x14] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x110092CD: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x110092CF: pop edi */
    esi = POP32_VAL(esp); /* 0x110092D0: pop esi */
    ebp = POP32_VAL(esp); /* 0x110092D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110092D2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110092D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110092D5u);

L_110092D5:
    PUSH32(esp, ebp); /* 0x110092D5: push ebp */
    ebp = esp; /* 0x110092D6: mov ebp, esp */
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x110092D8: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110092E3; /* 0x110092DC: jne 0x110092e3 */
L_110092DE:
    eax = MEM32(ebp + 0x8); /* 0x110092DE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x110092E1: inc dword ptr [eax] */
    _flag_k = FK_INC;
L_110092E3:
    ebp = POP32_VAL(esp); /* 0x110092E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110092E4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110092E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110092E7u);

L_110092E7:
    PUSH32(esp, ebp); /* 0x110092E7: push ebp */
    ebp = esp; /* 0x110092E8: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x110092EA: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110092F5; /* 0x110092EE: jne 0x110092f5 */
L_110092F0:
    eax = MEM32(ecx + 0x4); /* 0x110092F0: mov eax, dword ptr [ecx + 4] */
    goto L_110092F7; /* 0x110092F3: jmp 0x110092f7 */
L_110092F5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110092F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_110092F7:
    ebp = POP32_VAL(esp); /* 0x110092F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110092F8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11009302(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009302u);

L_11009302:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11009302: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11009304: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100930C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100930Cu);

L_1100930C:
    PUSH32(esp, 0x20u); /* 0x1100930C: push 0x20 */
    eax = 0x1103BFDFu; /* 0x1100930E: mov eax, 0x1103bfdf */
    RECOMP_CALL(sub_1103B3A5); /* 0x11009313: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11009318: mov edi, ecx */
    MEM32(ebp + (-0x2C)) = edi; /* 0x1100931A: mov dword ptr [ebp - 0x2c], edi */
    RECOMP_CALL(sub_1100C420); /* 0x1100931D: call 0x1100c420 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11009322: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = edi + 0xE8; /* 0x11009326: lea ebx, [edi + 0xe8] */
    MEM32(ebx) = 0x11004218u; /* 0x1100932C: mov dword ptr [ebx], 0x11004218 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11009332: mov byte ptr [ebp - 4], 1 */
    ecx = edi + 0xEC; /* 0x11009336: lea ecx, [edi + 0xec] */
    MEM32(edi) = 0x11004190u; /* 0x1100933C: mov dword ptr [edi], 0x11004190 */
    MEM32(ebx) = 0x11003C70u; /* 0x11009342: mov dword ptr [ebx], 0x11003c70 */
    RECOMP_CALL(sub_1100C5AA); /* 0x11009348: call 0x1100c5aa */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1100934D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x13C) = ecx; /* 0x1100934F: mov dword ptr [edi + 0x13c], ecx */
    MEM8(edi + 0x140) = (uint8_t)(LO8(ecx)); /* 0x11009355: mov byte ptr [edi + 0x140], cl */
    MEM32(ebp + (-0x4)) = 2; /* 0x1100935B: mov dword ptr [ebp - 4], 2 */
    MEM32(edi) = 0x11003ED4u; /* 0x11009362: mov dword ptr [edi], 0x11003ed4 */
    MEM32(ebx) = 0x11004474u; /* 0x11009368: mov dword ptr [ebx], 0x11004474 */
    MEM32(edi + 0x148) = ecx; /* 0x1100936E: mov dword ptr [edi + 0x148], ecx */
    MEM32(edi + 0x14C) = ecx; /* 0x11009374: mov dword ptr [edi + 0x14c], ecx */
    MEM8(edi + 0x150) = (uint8_t)(LO8(ecx)); /* 0x1100937A: mov byte ptr [edi + 0x150], cl */
    eax = ebp + (-0x28); /* 0x11009380: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x28)) = 0x11003C50u; /* 0x11009383: mov dword ptr [ebp - 0x28], 0x11003c50 */
    MEM32(ebp + (-0x24)) = edi; /* 0x1100938A: mov dword ptr [ebp - 0x24], edi */
    MEM32(ebp + (-0x18)) = eax; /* 0x1100938D: mov dword ptr [ebp - 0x18], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x11009390: mov byte ptr [ebp - 4], 4 */
    MEM32(edi + 0x5C) = ecx; /* 0x11009394: mov dword ptr [edi + 0x5c], ecx */
    MEM32(edi + 0x60) = ecx; /* 0x11009397: mov dword ptr [edi + 0x60], ecx */
    ecx = edi + 0x70; /* 0x1100939A: lea ecx, [edi + 0x70] */
    PUSH32(esp, eax); /* 0x1100939D: push eax */
    RECOMP_CALL(sub_1100B3B0); /* 0x1100939E: call 0x1100b3b0 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x64) = 0; /* 0x110093A3: mov dword ptr [edi + 0x64], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x110093AA: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ebp + (-0x18)); /* 0x110093AE: mov ecx, dword ptr [ebp - 0x18] */
    /* test ecx, ecx */ /* 0x110093B1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110093CA; /* 0x110093B3: je 0x110093ca */
L_110093B5:
    esi = MEM32(ecx); /* 0x110093B5: mov esi, dword ptr [ecx] */
    eax = ebp + (-0x28); /* 0x110093B7: lea eax, [ebp - 0x28] */
    /* cmp ecx, eax */ /* 0x110093BA: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x110093BC: setne dl */
    edx = (uint32_t)LO8(edx); /* 0x110093BF: movzx edx, dl */
    PUSH32(esp, edx); /* 0x110093C2: push edx */
    RECOMP_ICALL(MEM32(esi + 0x10)); /* 0x110093C3: call dword ptr [esi + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x110093C6: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110093CA:
    MEM32(edi + 0x138) = ebx; /* 0x110093CA: mov dword ptr [edi + 0x138], ebx */
    eax = edi; /* 0x110093D0: mov eax, edi */
    RECOMP_CALL(sub_1103B354); /* 0x110093D2: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110093D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_110093D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110093D8u);

L_110093D8:
    PUSH32(esp, 4); /* 0x110093D8: push 4 */
    eax = 0x1103C00Cu; /* 0x110093DA: mov eax, 0x1103c00c */
    RECOMP_CALL(sub_1103B372); /* 0x110093DF: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110093E4: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x110093E6: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11003ED4u; /* 0x110093E9: mov dword ptr [esi], 0x11003ed4 */
    MEM32(esi + 0xE8) = 0x11004474u; /* 0x110093EF: mov dword ptr [esi + 0xe8], 0x11004474 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110093F9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1100B23F); /* 0x110093FD: call 0x1100b23f */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x148); /* 0x11009402: mov eax, dword ptr [esi + 0x148] */
    /* test eax, eax */ /* 0x11009408: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009432; /* 0x1100940A: je 0x11009432 */
L_1100940C:
    ecx = MEM32(esi + 0x14C); /* 0x1100940C: mov ecx, dword ptr [esi + 0x14c] */
    /* test ecx, ecx */ /* 0x11009412: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009421; /* 0x11009414: je 0x11009421 */
L_11009416:
    /* cmp ecx, eax */ /* 0x11009416: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11009421; /* 0x11009418: je 0x11009421 */
L_1100941A:
    eax = MEM32(ecx); /* 0x1100941A: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100941C: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100941E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11009421:
    ecx = MEM32(esi + 0x148); /* 0x11009421: mov ecx, dword ptr [esi + 0x148] */
    /* test ecx, ecx */ /* 0x11009427: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009432; /* 0x11009429: je 0x11009432 */
L_1100942B:
    eax = MEM32(ecx); /* 0x1100942B: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100942D: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100942F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11009432:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11009432: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x11009436: mov ecx, esi */
    RECOMP_CALL(sub_1100984E); /* 0x11009438: call 0x1100984e */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100943D: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11009442: ret  */
    RECOMP_REGS_OUT();
}

void sub_11009443(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009443u);

L_11009443:
    PUSH32(esp, ebp); /* 0x11009443: push ebp */
    ebp = esp; /* 0x11009444: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x11009446: push ebx */
    PUSH32(esp, esi); /* 0x11009447: push esi */
    PUSH32(esp, edi); /* 0x11009448: push edi */
    edi = ecx; /* 0x11009449: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100944B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = edi + 0xE8; /* 0x1100944D: lea ebx, [edi + 0xe8] */
    /* test edi, edi */ /* 0x11009453: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11009459; /* 0x11009455: jne 0x11009459 */
L_11009457:
    ebx = esi; /* 0x11009457: mov ebx, esi */
L_11009459:
    ecx = MEM32(ebp + 0xC); /* 0x11009459: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1100945C: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1100945F: push ebx */
    edx = MEM32(ecx); /* 0x11009460: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x11009462: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x11009465: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x11009468: mov edx, eax */
    /* test edx, edx */ /* 0x1100946A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009482; /* 0x1100946C: je 0x11009482 */
L_1100946E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1100946E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx + 0x10; /* 0x11009470: lea eax, [edx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11009473: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x11009474: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x11009478: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x1100947A: mov ecx, edi */
    PUSH32(esp, edx); /* 0x1100947C: push edx */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x1100947D: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    goto L_11009485; /* 0x11009480: jmp 0x11009485 */
L_11009482:
    PUSH32(esp, 3); /* 0x11009482: push 3 */
    esi = POP32_VAL(esp); /* 0x11009484: pop esi */
L_11009485:
    edi = POP32_VAL(esp); /* 0x11009485: pop edi */
    eax = esi; /* 0x11009486: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11009488: pop esi */
    ebx = POP32_VAL(esp); /* 0x11009489: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1100948A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100948B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100948E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100948Eu);

L_1100948E:
    PUSH32(esp, ebp); /* 0x1100948E: push ebp */
    ebp = esp; /* 0x1100948F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11009491: push esi */
    esi = ecx; /* 0x11009492: mov esi, ecx */
    PUSH32(esp, edi); /* 0x11009494: push edi */
    /* test esi, esi */ /* 0x11009495: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110094A1; /* 0x11009497: je 0x110094a1 */
L_11009499:
    edi = esi + 0xE8; /* 0x11009499: lea edi, [esi + 0xe8] */
    goto L_110094A3; /* 0x1100949F: jmp 0x110094a3 */
L_110094A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110094A1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110094A3:
    ecx = MEM32(ebp + 0xC); /* 0x110094A3: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x110094A6: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x110094A9: push edi */
    edx = MEM32(ecx); /* 0x110094AA: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x110094AC: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x110094AF: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x110094B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110094CC; /* 0x110094B4: je 0x110094cc */
L_110094B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x110094B6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax + 0x10; /* 0x110094B8: lea ecx, [eax + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x110094BB: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + edx; edx = _old; MEM32(ecx) = _sum; } /* 0x110094BC: lock xadd dword ptr [ecx], edx */
    _flag_k = FK_ADD;
    edx = MEM32(esi); /* 0x110094C0: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x110094C2: mov ecx, esi */
    PUSH32(esp, eax); /* 0x110094C4: push eax */
    RECOMP_ICALL(MEM32(edx + 0x50)); /* 0x110094C5: call dword ptr [edx + 0x50] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110094C8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110094CF; /* 0x110094CA: jmp 0x110094cf */
L_110094CC:
    PUSH32(esp, 3); /* 0x110094CC: push 3 */
    eax = POP32_VAL(esp); /* 0x110094CE: pop eax */
L_110094CF:
    edi = POP32_VAL(esp); /* 0x110094CF: pop edi */
    esi = POP32_VAL(esp); /* 0x110094D0: pop esi */
    ebp = POP32_VAL(esp); /* 0x110094D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110094D2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_110094D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110094D5u);

L_110094D5:
    SET_LO8(eax, 1); /* 0x110094D5: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110094D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_110094D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110094D8u);

L_110094D8:
    PUSH32(esp, ebp); /* 0x110094D8: push ebp */
    ebp = esp; /* 0x110094D9: mov ebp, esp */
    PUSH32(esp, edi); /* 0x110094DB: push edi */
    edi = ecx; /* 0x110094DC: mov edi, ecx */
    eax = MEM32(edi + 0x148); /* 0x110094DE: mov eax, dword ptr [edi + 0x148] */
    /* test eax, eax */ /* 0x110094E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009516; /* 0x110094E6: je 0x11009516 */
L_110094E8:
    eax = MEM32(eax + 0x4); /* 0x110094E8: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x110094EB: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110094EC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x110094EE: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11009513; /* 0x110094F1: jne 0x11009513 */
L_110094F3:
    PUSH32(esp, 0x14u); /* 0x110094F3: push 0x14 */
    RECOMP_ICALL(MEM32(0x110690DC)); /* 0x110094F5: call dword ptr [0x110690dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110094FB: pop ecx */
    ecx = eax; /* 0x110094FC: mov ecx, eax */
    /* test ecx, ecx */ /* 0x110094FE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009513; /* 0x11009500: je 0x11009513 */
L_11009502:
    eax = MEM32(edi + 0x148); /* 0x11009502: mov eax, dword ptr [edi + 0x148] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x11009508: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1100950B: push eax */
    RECOMP_CALL(sub_1100B705); /* 0x1100950C: call 0x1100b705 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11009511: mov esi, eax */
L_11009513:
    eax = esi; /* 0x11009513: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11009515: pop esi */
L_11009516:
    edi = POP32_VAL(esp); /* 0x11009516: pop edi */
    ebp = POP32_VAL(esp); /* 0x11009517: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009518: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100951B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100951Bu);

L_1100951B:
    PUSH32(esp, ebp); /* 0x1100951B: push ebp */
    ebp = esp; /* 0x1100951C: mov ebp, esp */
    edx = MEM32(ecx + 0x148); /* 0x1100951E: mov edx, dword ptr [ecx + 0x148] */
    /* test edx, edx */ /* 0x11009524: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009544; /* 0x11009526: je 0x11009544 */
L_11009528:
    eax = MEM32(edx + 0x4); /* 0x11009528: mov eax, dword ptr [edx + 4] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1100952B: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11009544; /* 0x1100952E: jne 0x11009544 */
L_11009530:
    MEM32(ecx + 0x14C) = edx; /* 0x11009530: mov dword ptr [ecx + 0x14c], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11009536: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x11009538: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1100953B: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edx), _sum = MEM32(edx) + ecx; ecx = _old; MEM32(edx) = _sum; } /* 0x1100953C: lock xadd dword ptr [edx], ecx */
    _flag_k = FK_ADD;
    SET_LO8(eax, 1); /* 0x11009540: mov al, 1 */
    goto L_11009546; /* 0x11009542: jmp 0x11009546 */
L_11009544:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11009544: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11009546:
    ebp = POP32_VAL(esp); /* 0x11009546: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009547: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100954A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100954Au);

L_1100954A:
    PUSH32(esp, ebp); /* 0x1100954A: push ebp */
    ebp = esp; /* 0x1100954B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100954D: push esi */
    esi = ecx; /* 0x1100954E: mov esi, ecx */
    ecx = MEM32(esi + 0x14C); /* 0x11009550: mov ecx, dword ptr [esi + 0x14c] */
    /* test ecx, ecx */ /* 0x11009556: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009566; /* 0x11009558: je 0x11009566 */
L_1100955A:
    eax = MEM32(ecx + 0x4); /* 0x1100955A: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1100955D: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11009566; /* 0x11009560: je 0x11009566 */
L_11009562:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11009562: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110095B8; /* 0x11009564: jmp 0x110095b8 */
L_11009566:
    eax = MEM32(ecx + 0x8); /* 0x11009566: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, edi); /* 0x11009569: push edi */
    PUSH32(esp, 0x14u); /* 0x1100956A: push 0x14 */
    MEM32(ebp + 0x8) = eax; /* 0x1100956C: mov dword ptr [ebp + 8], eax */
    RECOMP_ICALL(MEM32(0x110690DC)); /* 0x1100956F: call dword ptr [0x110690dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11009575: pop ecx */
    /* test eax, eax */ /* 0x11009576: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009589; /* 0x11009578: je 0x11009589 */
L_1100957A:
    ecx = ebp + 0x8; /* 0x1100957A: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1100957D: push ecx */
    ecx = eax; /* 0x1100957E: mov ecx, eax */
    RECOMP_CALL(sub_1100B705); /* 0x11009580: call 0x1100b705 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x11009585: mov edi, eax */
    goto L_1100958B; /* 0x11009587: jmp 0x1100958b */
L_11009589:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11009589: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100958B:
    eax = MEM32(esi + 0x14C); /* 0x1100958B: mov eax, dword ptr [esi + 0x14c] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x11009591: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x11009594: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x11009597: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_110095AE; /* 0x1100959B: jne 0x110095ae */
L_1100959D:
    ecx = MEM32(esi + 0x14C); /* 0x1100959D: mov ecx, dword ptr [esi + 0x14c] */
    /* test ecx, ecx */ /* 0x110095A3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110095AE; /* 0x110095A5: je 0x110095ae */
L_110095A7:
    eax = MEM32(ecx); /* 0x110095A7: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x110095A9: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110095AB: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_110095AE:
    _flag_a = (uint32_t)(MEM32(esi + 0x14C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x14C) = MEM32(esi + 0x14C) & 0; /* 0x110095AE: and dword ptr [esi + 0x14c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x110095B5: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x110095B7: pop edi */
L_110095B8:
    esi = POP32_VAL(esp); /* 0x110095B8: pop esi */
    ebp = POP32_VAL(esp); /* 0x110095B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110095BA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110095BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110095BDu);

L_110095BD:
    PUSH32(esp, ebp); /* 0x110095BD: push ebp */
    ebp = esp; /* 0x110095BE: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x110095C0: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x110095C3: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x110095C6: push esi */
    esi = ecx; /* 0x110095C7: mov esi, ecx */
    ecx = MEM32(esi + 0x14C); /* 0x110095C9: mov ecx, dword ptr [esi + 0x14c] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x110095CF: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110095FF; /* 0x110095D2: jne 0x110095ff */
L_110095D4:
    eax = ecx + 0x10; /* 0x110095D4: lea eax, [ecx + 0x10] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x110095D7: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x110095DA: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_110095F1; /* 0x110095DE: jne 0x110095f1 */
L_110095E0:
    ecx = MEM32(esi + 0x14C); /* 0x110095E0: mov ecx, dword ptr [esi + 0x14c] */
    /* test ecx, ecx */ /* 0x110095E6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110095F1; /* 0x110095E8: je 0x110095f1 */
L_110095EA:
    eax = MEM32(ecx); /* 0x110095EA: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x110095EC: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110095EE: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_110095F1:
    _flag_a = (uint32_t)(MEM32(esi + 0x14C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x14C) = MEM32(esi + 0x14C) & 0; /* 0x110095F1: and dword ptr [esi + 0x14c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x110095F8: pop esi */
    esp = ebp; /* 0x110095F9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110095FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110095FC: ret 4 */
L_110095FF:
    ecx = ebp + (-0xC); /* 0x110095FF: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x11069208)); /* 0x11009602: call dword ptr [0x11069208] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104551Cu); /* 0x11009608: push 0x1104551c */
    eax = ebp + (-0xC); /* 0x1100960D: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x11009610: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11009611: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11009616u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11009617(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009617u);

L_11009617:
    PUSH32(esp, ebp); /* 0x11009617: push ebp */
    ebp = esp; /* 0x11009618: mov ebp, esp */
    edx = ecx; /* 0x1100961A: mov edx, ecx */
    PUSH32(esp, esi); /* 0x1100961C: push esi */
    esi = MEM32(edx + 0x148); /* 0x1100961D: mov esi, dword ptr [edx + 0x148] */
    /* test esi, esi */ /* 0x11009623: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009631; /* 0x11009625: je 0x11009631 */
L_11009627:
    ecx = MEM32(ebp + 0x8); /* 0x11009627: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x1100962A: push edx */
    PUSH32(esp, esi); /* 0x1100962B: push esi */
    eax = MEM32(ecx); /* 0x1100962C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100962E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11009631:
    esi = POP32_VAL(esp); /* 0x11009631: pop esi */
    ebp = POP32_VAL(esp); /* 0x11009632: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009633: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11009636(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009636u);

L_11009636:
    PUSH32(esp, ebp); /* 0x11009636: push ebp */
    ebp = esp; /* 0x11009637: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x11009639: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100963C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100963E: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x1100963F: push ebx */
    PUSH32(esp, esi); /* 0x11009640: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11009641: mov esi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x11009644: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x11009646: push edi */
    ecx = esi + 0x10; /* 0x11009647: lea ecx, [esi + 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1100964A: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x148); /* 0x1100964E: mov eax, dword ptr [ebx + 0x148] */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x11009654: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x11009657: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009677; /* 0x11009659: je 0x11009677 */
L_1100965B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1100965B: add eax, 0x10 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x1100965E: mov ecx, edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x11009660: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_11009677; /* 0x11009664: jne 0x11009677 */
L_11009666:
    ecx = MEM32(ebx + 0x148); /* 0x11009666: mov ecx, dword ptr [ebx + 0x148] */
    /* test ecx, ecx */ /* 0x1100966C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009677; /* 0x1100966E: je 0x11009677 */
L_11009670:
    eax = MEM32(ecx); /* 0x11009670: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x11009672: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11009674: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_11009677:
    ecx = ebx + 0xC; /* 0x11009677: lea ecx, [ebx + 0xc] */
    MEM32(ebx + 0x148) = esi; /* 0x1100967A: mov dword ptr [ebx + 0x148], esi */
    eax = MEM32(ecx); /* 0x11009680: mov eax, dword ptr [ecx] */
    edx = ebp + (-0xC); /* 0x11009682: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x11009685: push edx */
    MEM8(ebx + 0x150) = (uint8_t)(1); /* 0x11009686: mov byte ptr [ebx + 0x150], 1 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1100968D: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    goto L_110096B8; /* 0x11009690: jmp 0x110096b8 */
L_11009692:
    ecx = MEM32(ebp + (-0xC)); /* 0x11009692: mov ecx, dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x11009695: push dword ptr [ebp - 8] */
    eax = MEM32(ecx); /* 0x11009698: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100969A: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1100969D: mov dword ptr [ebp - 4], eax */
    ecx = eax; /* 0x110096A0: mov ecx, eax */
    PUSH32(esp, ebx); /* 0x110096A2: push ebx */
    PUSH32(esp, esi); /* 0x110096A3: push esi */
    edx = MEM32(eax); /* 0x110096A4: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x110096A6: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x110096A9: mov ecx, dword ptr [ebp - 0xc] */
    edx = ebp + (-0x8); /* 0x110096AC: lea edx, [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x110096AF: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x110096B2: push edx */
    eax = MEM32(ecx); /* 0x110096B3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x110096B5: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_110096B8:
    ecx = MEM32(ebp + (-0xC)); /* 0x110096B8: mov ecx, dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x110096BB: push dword ptr [ebp - 8] */
    eax = MEM32(ecx); /* 0x110096BE: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x110096C0: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x110096C3: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x110096C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11009692; /* 0x110096C8: jne 0x11009692 */
L_110096CA:
    eax = esi + 0x10; /* 0x110096CA: lea eax, [esi + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edi; edi = _old; MEM32(eax) = _sum; } /* 0x110096CD: lock xadd dword ptr [eax], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x110096D1: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_110096E1; /* 0x110096D2: jne 0x110096e1 */
L_110096D4:
    /* test esi, esi */ /* 0x110096D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110096E1; /* 0x110096D6: je 0x110096e1 */
L_110096D8:
    eax = MEM32(esi); /* 0x110096D8: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x110096DA: mov ecx, esi */
    PUSH32(esp, 1); /* 0x110096DC: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110096DE: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_110096E1:
    edi = POP32_VAL(esp); /* 0x110096E1: pop edi */
    esi = POP32_VAL(esp); /* 0x110096E2: pop esi */
    ebx = POP32_VAL(esp); /* 0x110096E3: pop ebx */
    esp = ebp; /* 0x110096E4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110096E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110096E7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110096EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110096EAu);

L_110096EA:
    PUSH32(esp, 0x10u); /* 0x110096EA: push 0x10 */
    eax = 0x1103C032u; /* 0x110096EC: mov eax, 0x1103c032 */
    RECOMP_CALL(sub_1103B372); /* 0x110096F1: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x110096F6: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x110096F8: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x1100444Cu; /* 0x110096FB: mov dword ptr [esi], 0x1100444c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11009701: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x11009703: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_110097C8); /* 0x11009706: call 0x110097c8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1100970B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100972B; /* 0x1100970D: je 0x1100972b */
L_1100970F:
    PUSH32(esp, 0x1100388Cu); /* 0x1100970F: push 0x1100388c */
    ecx = ebp + (-0x1C); /* 0x11009714: lea ecx, [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x11009717: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100971D: push 0x1104550c */
    eax = ebp + (-0x1C); /* 0x11009722: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11009725: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11009726: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100972B:
    /* cmp MEM32(esi + 0x8), edi */ /* 0x1100972B: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11009743; /* 0x1100972E: je 0x11009743 */
L_11009730:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x11009730: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x11009733: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11009739: pop ecx */
    MEM32(esi + 0x8) = edi; /* 0x1100973A: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x1100973D: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = edi; /* 0x11009740: mov dword ptr [esi + 0x10], edi */
L_11009743:
    RECOMP_CALL(sub_1103B340); /* 0x11009743: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11009748: ret  */
    RECOMP_REGS_OUT();
}

void sub_11009749(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009749u);

L_11009749:
    PUSH32(esp, ebp); /* 0x11009749: push ebp */
    ebp = esp; /* 0x1100974A: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1100974C: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11009758; /* 0x11009750: je 0x11009758 */
L_11009752:
    ebp = POP32_VAL(esp); /* 0x11009752: pop ebp */
    goto L_1100B147; /* 0x11009753: jmp 0x1100b147 */
L_11009758:
    ebp = POP32_VAL(esp); /* 0x11009758: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009759: ret 4 */
L_1100B147:
    PUSH32(esp, ebp); /* 0x1100B147: push ebp */
    ebp = esp; /* 0x1100B148: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1100B14A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1100B14D: push ebx */
    PUSH32(esp, esi); /* 0x1100B14E: push esi */
    esi = ecx; /* 0x1100B14F: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1100B151: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100B152: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = edi; /* 0x1100B154: mov ebx, edi */
    /* cmp MEM32(esi + 0x4), 0xFFFFFFFFu */ /* 0x1100B156: cmp dword ptr [esi + 4], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(esi + 0xC); /* 0x1100B15A: mov edx, dword ptr [esi + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100B16B; /* 0x1100B15D: je 0x1100b16b */
L_1100B15F:
    eax = edx + 0x1; /* 0x1100B15F: lea eax, [edx + 1] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x1100B162: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1100B205; /* 0x1100B165: ja 0x1100b205 */
L_1100B16B:
    ecx = edi; /* 0x1100B16B: mov ecx, edi */
    /* test edx, edx */ /* 0x1100B16D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B198; /* 0x1100B16F: je 0x1100b198 */
L_1100B171:
    eax = MEM32(esi + 0x8); /* 0x1100B171: mov eax, dword ptr [esi + 8] */
    /* cmp MEM32(eax + ecx * 4), edi */ /* 0x1100B174: cmp dword ptr [eax + ecx*4], edi */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100B187; /* 0x1100B177: je 0x1100b187 */
L_1100B179:
    edx = MEM32(ebp + 0x8); /* 0x1100B179: mov edx, dword ptr [ebp + 8] */
    ebx = ecx + 0x1; /* 0x1100B17C: lea ebx, [ecx + 1] */
    /* cmp MEM32(eax + ecx * 4), edx */ /* 0x1100B17F: cmp dword ptr [eax + ecx*4], edx */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(esi + 0xC); /* 0x1100B182: mov edx, dword ptr [esi + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100B205; /* 0x1100B185: je 0x1100b205 */
L_1100B187:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1100B187: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x1100B188: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1100B171; /* 0x1100B18A: jb 0x1100b171 */
L_1100B18C:
    /* cmp ebx, edx */ /* 0x1100B18C: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1100B198; /* 0x1100B18E: jae 0x1100b198 */
L_1100B190:
    ecx = MEM32(ebp + 0x8); /* 0x1100B190: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + ebx * 4) = ecx; /* 0x1100B193: mov dword ptr [eax + ebx*4], ecx */
    goto L_1100B1FC; /* 0x1100B196: jmp 0x1100b1fc */
L_1100B198:
    eax = MEM32(esi + 0xC); /* 0x1100B198: mov eax, dword ptr [esi + 0xc] */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x1100B19B: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1100B1ED; /* 0x1100B19E: jb 0x1100b1ed */
L_1100B1A0:
    eax = eax * 2 + 0x2; /* 0x1100B1A0: lea eax, [eax*2 + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1100B1A7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1100B1A9: push 4 */
    edx = POP32_VAL(esp); /* 0x1100B1AB: pop edx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1100B1AC: mov dword ptr [ebp - 4], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1100B1AF: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1100B1B1: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1100B1B4: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1100B1B6: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1100B1B8: push ecx */
    RECOMP_CALL(sub_110306E8); /* 0x1100B1B9: call 0x110306e8 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1100B1BE: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1100B1C0: pop ecx */
    /* cmp MEM32(esi + 0x8), edi */ /* 0x1100B1C1: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100B1E4; /* 0x1100B1C4: je 0x1100b1e4 */
L_1100B1C6:
    /* cmp MEM32(esi + 0x10), edi */ /* 0x1100B1C6: cmp dword ptr [esi + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1100B1DA; /* 0x1100B1C9: jbe 0x1100b1da */
L_1100B1CB:
    eax = MEM32(esi + 0x8); /* 0x1100B1CB: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax + edi * 4); /* 0x1100B1CE: mov eax, dword ptr [eax + edi*4] */
    MEM32(ebx + edi * 4) = eax; /* 0x1100B1D1: mov dword ptr [ebx + edi*4], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1100B1D4: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x10) */ /* 0x1100B1D5: cmp edi, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1100B1CB; /* 0x1100B1D8: jb 0x1100b1cb */
L_1100B1DA:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1100B1DA: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x1100B1DD: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100B1E3: pop ecx */
L_1100B1E4:
    eax = MEM32(ebp + (-0x4)); /* 0x1100B1E4: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0x8) = ebx; /* 0x1100B1E7: mov dword ptr [esi + 8], ebx */
    MEM32(esi + 0x10) = eax; /* 0x1100B1EA: mov dword ptr [esi + 0x10], eax */
L_1100B1ED:
    ecx = MEM32(esi + 0xC); /* 0x1100B1ED: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(esi + 0x8); /* 0x1100B1F0: mov eax, dword ptr [esi + 8] */
    edx = MEM32(ebp + 0x8); /* 0x1100B1F3: mov edx, dword ptr [ebp + 8] */
    MEM32(eax + ecx * 4) = edx; /* 0x1100B1F6: mov dword ptr [eax + ecx*4], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x1100B1F9: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
L_1100B1FC:
    edi = POP32_VAL(esp); /* 0x1100B1FC: pop edi */
    esi = POP32_VAL(esp); /* 0x1100B1FD: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100B1FE: pop ebx */
    esp = ebp; /* 0x1100B1FF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100B201: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B202: ret 4 */
L_1100B205:
    PUSH32(esp, 0x110038C4u); /* 0x1100B205: push 0x110038c4 */
    ecx = ebp + (-0x10); /* 0x1100B20A: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x11069204)); /* 0x1100B20D: call dword ptr [0x11069204] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104552Cu); /* 0x1100B213: push 0x1104552c */
    eax = ebp + (-0x10); /* 0x1100B218: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1100B21B: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100B21C: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100B221u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100975C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100975Cu);

L_1100975C:
    PUSH32(esp, ebp); /* 0x1100975C: push ebp */
    ebp = esp; /* 0x1100975D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100975F: mov eax, dword ptr [ebp + 8] */
    edx = ecx; /* 0x11009762: mov edx, ecx */
    /* test eax, eax */ /* 0x11009764: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100976C; /* 0x11009766: jne 0x1100976c */
L_11009768:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11009768: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_110097A0; /* 0x1100976A: jmp 0x110097a0 */
L_1100976C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1100976C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1100976E: push esi */
    esi = ecx; /* 0x1100976F: mov esi, ecx */
    /* cmp MEM32(edx + 0xC), ecx */ /* 0x11009771: cmp dword ptr [edx + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1100979D; /* 0x11009774: jbe 0x1100979d */
L_11009776:
    PUSH32(esp, edi); /* 0x11009776: push edi */
    edi = MEM32(edx + 0x8); /* 0x11009777: mov edi, dword ptr [edx + 8] */
L_1100977A:
    /* cmp MEM32(edi + esi * 4), eax */ /* 0x1100977A: cmp dword ptr [edi + esi*4], eax */
    _flag_a = (uint32_t)(MEM32(edi + esi * 4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11009787; /* 0x1100977D: je 0x11009787 */
L_1100977F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1100977F: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edx + 0xC) */ /* 0x11009780: cmp esi, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1100977A; /* 0x11009783: jb 0x1100977a */
L_11009785:
    goto L_1100979C; /* 0x11009785: jmp 0x1100979c */
L_11009787:
    eax = edi; /* 0x11009787: mov eax, edi */
    MEM32(eax + esi * 4) = ecx; /* 0x11009789: mov dword ptr [eax + esi*4], ecx */
    /* cmp MEM32(edx + 0x4), 0xFFFFFFFFu */ /* 0x1100978C: cmp dword ptr [edx + 4], -1 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100979A; /* 0x11009790: je 0x1100979a */
L_11009792:
    /* cmp MEM32(edx + 0x4), ecx */ /* 0x11009792: cmp dword ptr [edx + 4], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1100979A; /* 0x11009795: jbe 0x1100979a */
L_11009797:
    MEM32(edx + 0x4) = ecx; /* 0x11009797: mov dword ptr [edx + 4], ecx */
L_1100979A:
    SET_LO8(ecx, 1); /* 0x1100979A: mov cl, 1 */
L_1100979C:
    edi = POP32_VAL(esp); /* 0x1100979C: pop edi */
L_1100979D:
    SET_LO8(eax, LO8(ecx)); /* 0x1100979D: mov al, cl */
    esi = POP32_VAL(esp); /* 0x1100979F: pop esi */
L_110097A0:
    ebp = POP32_VAL(esp); /* 0x110097A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110097A1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110097A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110097A4u);

L_110097A4:
    PUSH32(esp, ebp); /* 0x110097A4: push ebp */
    ebp = esp; /* 0x110097A5: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x110097A7: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110097B1; /* 0x110097AB: jne 0x110097b1 */
L_110097AD:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x110097AD: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_110097C4; /* 0x110097AF: jmp 0x110097c4 */
L_110097B1:
    eax = MEM32(ecx); /* 0x110097B1: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x110097B3: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110097B4: push dword ptr [ebp + 8] */
    esi = MEM32(ecx + 0xC); /* 0x110097B7: mov esi, dword ptr [ecx + 0xc] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x110097BA: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x110097BD: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x110097BF: pop esi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x110097C0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x110097C2: neg eax */
    _flag_k = FK_CMP;
L_110097C4:
    ebp = POP32_VAL(esp); /* 0x110097C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110097C5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110097C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110097C8u);

L_110097C8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110097C8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x110097CA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0xC), eax */ /* 0x110097CC: cmp dword ptr [ecx + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_110097E3; /* 0x110097CF: jbe 0x110097e3 */
L_110097D1:
    PUSH32(esp, esi); /* 0x110097D1: push esi */
    esi = MEM32(ecx + 0x8); /* 0x110097D2: mov esi, dword ptr [ecx + 8] */
L_110097D5:
    /* cmp MEM32(esi + edx * 4), 0 */ /* 0x110097D5: cmp dword ptr [esi + edx*4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + edx * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110097DC; /* 0x110097D9: je 0x110097dc */
L_110097DB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110097DB: inc eax */
    _flag_k = FK_INC;
L_110097DC:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x110097DC: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ecx + 0xC) */ /* 0x110097DD: cmp edx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_110097D5; /* 0x110097E0: jb 0x110097d5 */
L_110097E2:
    esi = POP32_VAL(esp); /* 0x110097E2: pop esi */
L_110097E3:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110097E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_110097E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110097E4u);

L_110097E4:
    PUSH32(esp, ebp); /* 0x110097E4: push ebp */
    ebp = esp; /* 0x110097E5: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x110097E7: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x110097EA: push esi */
    esi = MEM32(ecx + 0xC); /* 0x110097EB: mov esi, dword ptr [ecx + 0xc] */
    /* cmp MEM32(edx), esi */ /* 0x110097EE: cmp dword ptr [edx], esi */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11009808; /* 0x110097F0: jae 0x11009808 */
L_110097F2:
    PUSH32(esp, edi); /* 0x110097F2: push edi */
L_110097F3:
    edi = MEM32(edx); /* 0x110097F3: mov edi, dword ptr [edx] */
    eax = MEM32(ecx + 0x8); /* 0x110097F5: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM32(eax + edi * 4), 0 */ /* 0x110097F8: cmp dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11009807; /* 0x110097FC: jne 0x11009807 */
L_110097FE:
    eax = edi + 0x1; /* 0x110097FE: lea eax, [edi + 1] */
    MEM32(edx) = eax; /* 0x11009801: mov dword ptr [edx], eax */
    /* cmp eax, esi */ /* 0x11009803: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_110097F3; /* 0x11009805: jb 0x110097f3 */
L_11009807:
    edi = POP32_VAL(esp); /* 0x11009807: pop edi */
L_11009808:
    esi = POP32_VAL(esp); /* 0x11009808: pop esi */
    ebp = POP32_VAL(esp); /* 0x11009809: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100980A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100980D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100980Du);

L_1100980D:
    PUSH32(esp, ebp); /* 0x1100980D: push ebp */
    ebp = esp; /* 0x1100980E: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x11009810: mov edx, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(ecx + 0xC) */ /* 0x11009813: cmp edx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11009820; /* 0x11009816: jae 0x11009820 */
L_11009818:
    eax = MEM32(ecx + 0x8); /* 0x11009818: mov eax, dword ptr [ecx + 8] */
    eax = MEM32(eax + edx * 4); /* 0x1100981B: mov eax, dword ptr [eax + edx*4] */
    goto L_11009822; /* 0x1100981E: jmp 0x11009822 */
L_11009820:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11009820: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_11009822:
    ebp = POP32_VAL(esp); /* 0x11009822: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009823: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11009826(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009826u);

L_11009826:
    PUSH32(esp, ebp); /* 0x11009826: push ebp */
    ebp = esp; /* 0x11009827: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11009829: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0xC), eax */ /* 0x1100982B: cmp dword ptr [ecx + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11009843; /* 0x1100982E: jbe 0x11009843 */
L_11009830:
    edx = MEM32(ecx + 0x8); /* 0x11009830: mov edx, dword ptr [ecx + 8] */
    PUSH32(esp, esi); /* 0x11009833: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11009834: mov esi, dword ptr [ebp + 8] */
L_11009837:
    /* cmp MEM32(edx + eax * 4), esi */ /* 0x11009837: cmp dword ptr [edx + eax*4], esi */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11009842; /* 0x1100983A: je 0x11009842 */
L_1100983C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100983C: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ecx + 0xC) */ /* 0x1100983D: cmp eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11009837; /* 0x11009840: jb 0x11009837 */
L_11009842:
    esi = POP32_VAL(esp); /* 0x11009842: pop esi */
L_11009843:
    ebp = POP32_VAL(esp); /* 0x11009843: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009844: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100984E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100984Eu);

L_1100984E:
    PUSH32(esp, 4); /* 0x1100984E: push 4 */
    eax = 0x1103C071u; /* 0x11009850: mov eax, 0x1103c071 */
    RECOMP_CALL(sub_1103B372); /* 0x11009855: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100985A: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100985C: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11004190u; /* 0x1100985F: mov dword ptr [esi], 0x11004190 */
    MEM32(esi + 0xE8) = 0x11003C70u; /* 0x11009865: mov dword ptr [esi + 0xe8], 0x11003c70 */
    MEM32(ebp + (-0x4)) = 2; /* 0x1100986F: mov dword ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1100B23F); /* 0x11009876: call 0x1100b23f */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0x13C); /* 0x1100987B: mov edi, dword ptr [esi + 0x13c] */
    /* test edi, edi */ /* 0x11009881: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009894; /* 0x11009883: je 0x11009894 */
L_11009885:
    ecx = edi; /* 0x11009885: mov ecx, edi */
    RECOMP_CALL(sub_1100A32D); /* 0x11009887: call 0x1100a32d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1100988C: push edi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100988D: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11009893: pop ecx */
L_11009894:
    ecx = esi + 0xEC; /* 0x11009894: lea ecx, [esi + 0xec] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100989A: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100B45D); /* 0x1100989E: call 0x1100b45d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110098A3: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x110098A7: mov ecx, esi */
    MEM32(esi + 0xE8) = 0x11004218u; /* 0x110098A9: mov dword ptr [esi + 0xe8], 0x11004218 */
    RECOMP_CALL(sub_11009B05); /* 0x110098B3: call 0x11009b05 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x110098B8: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110098BD: ret  */
    RECOMP_REGS_OUT();
}

void sub_110098BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110098BEu);

L_110098BE:
    PUSH32(esp, ebp); /* 0x110098BE: push ebp */
    ebp = esp; /* 0x110098BF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x110098C1: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x110098C4: push esi */
    PUSH32(esp, edi); /* 0x110098C5: push edi */
    edi = MEM32(ebp + 0x8); /* 0x110098C6: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x110098C9: mov esi, ecx */
    /* test edi, edi */ /* 0x110098CB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009937; /* 0x110098CD: je 0x11009937 */
L_110098CF:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x110098CF: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110098FA; /* 0x110098D3: jne 0x110098fa */
L_110098D5:
    eax = ebp + (-0x4); /* 0x110098D5: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x110038D8u; /* 0x110098D8: mov dword ptr [ebp - 4], 0x110038d8 */
    PUSH32(esp, eax); /* 0x110098DF: push eax */
    ecx = ebp + (-0x1C); /* 0x110098E0: lea ecx, [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x110098E3: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = 0x11001470u; /* 0x110098E9: mov dword ptr [ebp - 0x1c], 0x11001470 */
    eax = ebp + (-0x1C); /* 0x110098F0: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x11045568u); /* 0x110098F3: push 0x11045568 */
    goto L_1100995A; /* 0x110098F8: jmp 0x1100995a */
L_110098FA:
    /* cmp MEM8(esi + 0x58), 0 */ /* 0x110098FA: cmp byte ptr [esi + 0x58], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11009905; /* 0x110098FE: je 0x11009905 */
L_11009900:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11009900: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11009902: inc eax */
    _flag_k = FK_INC;
    goto L_1100992F; /* 0x11009903: jmp 0x1100992f */
L_11009905:
    eax = MEM32(esi + 0x54); /* 0x11009905: mov eax, dword ptr [esi + 0x54] */
    /* test eax, eax */ /* 0x11009908: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009920; /* 0x1100990A: je 0x11009920 */
L_1100990C:
    ecx = MEM32(eax + 0x10); /* 0x1100990C: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x1100990F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009960; /* 0x11009911: je 0x11009960 */
L_11009913:
    edx = MEM32(ecx); /* 0x11009913: mov edx, dword ptr [ecx] */
    eax = edi + 0x8; /* 0x11009915: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x11009918: push eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x11009919: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100991C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009900; /* 0x1100991E: je 0x11009900 */
L_11009920:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11009920: push dword ptr [ebp + 0xc] */
    ecx = esi + (-0xE8); /* 0x11009923: lea ecx, [esi - 0xe8] */
    eax = MEM32(ecx); /* 0x11009929: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x1100992B: push edi */
    RECOMP_ICALL(MEM32(eax + 0x58)); /* 0x1100992C: call dword ptr [eax + 0x58] */
    RECOMP_FLAGS_IN();
L_1100992F:
    edi = POP32_VAL(esp); /* 0x1100992F: pop edi */
    esi = POP32_VAL(esp); /* 0x11009930: pop esi */
    esp = ebp; /* 0x11009931: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11009933: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11009934: ret 8 */
L_11009937:
    eax = ebp + 0x8; /* 0x11009937: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x110038CCu; /* 0x1100993A: mov dword ptr [ebp + 8], 0x110038cc */
    PUSH32(esp, eax); /* 0x11009941: push eax */
    ecx = ebp + (-0x10); /* 0x11009942: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11009945: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = 0x11001470u; /* 0x1100994B: mov dword ptr [ebp - 0x10], 0x11001470 */
    eax = ebp + (-0x10); /* 0x11009952: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0x11045568u); /* 0x11009955: push 0x11045568 */
L_1100995A:
    PUSH32(esp, eax); /* 0x1100995A: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100995B: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11009960:
    RECOMP_CALL(sub_11013989); /* 0x11009960: call 0x11013989 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11009965u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11009966(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009966u);

L_11009966:
    PUSH32(esp, ebp); /* 0x11009966: push ebp */
    ebp = esp; /* 0x11009967: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x11009969: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100996C: push esi */
    PUSH32(esp, edi); /* 0x1100996D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1100996E: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x11009971: mov esi, ecx */
    /* test edi, edi */ /* 0x11009973: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110099DF; /* 0x11009975: je 0x110099df */
L_11009977:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x11009977: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110099A2; /* 0x1100997B: jne 0x110099a2 */
L_1100997D:
    eax = ebp + (-0x4); /* 0x1100997D: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x110038D8u; /* 0x11009980: mov dword ptr [ebp - 4], 0x110038d8 */
    PUSH32(esp, eax); /* 0x11009987: push eax */
    ecx = ebp + (-0x1C); /* 0x11009988: lea ecx, [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100998B: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = 0x11001470u; /* 0x11009991: mov dword ptr [ebp - 0x1c], 0x11001470 */
    eax = ebp + (-0x1C); /* 0x11009998: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0x11045568u); /* 0x1100999B: push 0x11045568 */
    goto L_11009A02; /* 0x110099A0: jmp 0x11009a02 */
L_110099A2:
    /* cmp MEM8(esi + 0x58), 0 */ /* 0x110099A2: cmp byte ptr [esi + 0x58], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110099AD; /* 0x110099A6: je 0x110099ad */
L_110099A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110099A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110099AA: inc eax */
    _flag_k = FK_INC;
    goto L_110099D7; /* 0x110099AB: jmp 0x110099d7 */
L_110099AD:
    eax = MEM32(esi + 0x54); /* 0x110099AD: mov eax, dword ptr [esi + 0x54] */
    /* test eax, eax */ /* 0x110099B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110099C8; /* 0x110099B2: je 0x110099c8 */
L_110099B4:
    ecx = MEM32(eax + 0x10); /* 0x110099B4: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x110099B7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009A08; /* 0x110099B9: je 0x11009a08 */
L_110099BB:
    edx = MEM32(ecx); /* 0x110099BB: mov edx, dword ptr [ecx] */
    eax = edi + 0x8; /* 0x110099BD: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x110099C0: push eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x110099C1: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110099C4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_110099A8; /* 0x110099C6: je 0x110099a8 */
L_110099C8:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110099C8: push dword ptr [ebp + 0xc] */
    ecx = esi + (-0xE8); /* 0x110099CB: lea ecx, [esi - 0xe8] */
    eax = MEM32(ecx); /* 0x110099D1: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x110099D3: push edi */
    RECOMP_ICALL(MEM32(eax + 0x5C)); /* 0x110099D4: call dword ptr [eax + 0x5c] */
    RECOMP_FLAGS_IN();
L_110099D7:
    edi = POP32_VAL(esp); /* 0x110099D7: pop edi */
    esi = POP32_VAL(esp); /* 0x110099D8: pop esi */
    esp = ebp; /* 0x110099D9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110099DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110099DC: ret 8 */
L_110099DF:
    eax = ebp + 0x8; /* 0x110099DF: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x110038CCu; /* 0x110099E2: mov dword ptr [ebp + 8], 0x110038cc */
    PUSH32(esp, eax); /* 0x110099E9: push eax */
    ecx = ebp + (-0x10); /* 0x110099EA: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x110099ED: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = 0x11001470u; /* 0x110099F3: mov dword ptr [ebp - 0x10], 0x11001470 */
    eax = ebp + (-0x10); /* 0x110099FA: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0x11045568u); /* 0x110099FD: push 0x11045568 */
L_11009A02:
    PUSH32(esp, eax); /* 0x11009A02: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11009A03: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11009A08:
    RECOMP_CALL(sub_11013989); /* 0x11009A08: call 0x11013989 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11009A0Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11009A0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009A0Eu);

L_11009A0E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11009A0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11009A10: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11009A11: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11009A14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009A14u);

L_11009A14:
    PUSH32(esp, ebp); /* 0x11009A14: push ebp */
    ebp = esp; /* 0x11009A15: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11009A17: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11009A18: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x11009A1B: mov esi, ecx */
    ecx = esi + 0x4; /* 0x11009A1D: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_1100B497); /* 0x11009A20: call 0x1100b497 */
    RECOMP_FLAGS_IN();
    eax = esi + (-0xE8); /* 0x11009A25: lea eax, [esi - 0xe8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11009A2B: cdq  */
    PUSH32(esp, edx); /* 0x11009A2C: push edx */
    PUSH32(esp, eax); /* 0x11009A2D: push eax */
    eax = MEM32(ebp + 0x8); /* 0x11009A2E: mov eax, dword ptr [ebp + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11009A31: cdq  */
    PUSH32(esp, edx); /* 0x11009A32: push edx */
    PUSH32(esp, eax); /* 0x11009A33: push eax */
    PUSH32(esp, 5); /* 0x11009A34: push 5 */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x11009A36: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11009A3C: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x11009A3F: pop esi */
    ebp = POP32_VAL(esp); /* 0x11009A40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009A41: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11009A44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009A44u);

L_11009A44:
    PUSH32(esp, ebp); /* 0x11009A44: push ebp */
    ebp = esp; /* 0x11009A45: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11009A47: push esi */
    esi = ecx; /* 0x11009A48: mov esi, ecx */
    eax = esi + (-0xE8); /* 0x11009A4A: lea eax, [esi - 0xe8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11009A50: cdq  */
    PUSH32(esp, edx); /* 0x11009A51: push edx */
    PUSH32(esp, eax); /* 0x11009A52: push eax */
    eax = MEM32(ebp + 0x8); /* 0x11009A53: mov eax, dword ptr [ebp + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11009A56: cdq  */
    PUSH32(esp, edx); /* 0x11009A57: push edx */
    PUSH32(esp, eax); /* 0x11009A58: push eax */
    PUSH32(esp, 6); /* 0x11009A59: push 6 */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x11009A5B: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11009A61: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = esi + 0x4; /* 0x11009A64: lea ecx, [esi + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11009A67: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100B4EB); /* 0x11009A6A: call 0x1100b4eb */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x11009A6F: pop esi */
    ebp = POP32_VAL(esp); /* 0x11009A70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009A71: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11009A74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009A74u);

L_11009A74:
    PUSH32(esp, 0x1Cu); /* 0x11009A74: push 0x1c */
    eax = 0x1103C094u; /* 0x11009A76: mov eax, 0x1103c094 */
    RECOMP_CALL(sub_1103B372); /* 0x11009A7B: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11009A80: mov esi, ecx */
    eax = ebp + (-0x28); /* 0x11009A82: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x11009A85: push eax */
    ecx = esi + 0x4; /* 0x11009A86: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_1100B572); /* 0x11009A89: call 0x1100b572 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11009A8E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x14)); /* 0x11009A92: mov eax, dword ptr [ebp - 0x14] */
L_11009A95:
    ecx = ebp + (-0x10); /* 0x11009A95: lea ecx, [ebp - 0x10] */
    edx = MEM32(ebp + (-0x24)); /* 0x11009A98: mov edx, dword ptr [ebp - 0x24] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x11009A9B: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11009AA3; /* 0x11009A9E: jae 0x11009aa3 */
L_11009AA0:
    ecx = edx + eax * 4; /* 0x11009AA0: lea ecx, [edx + eax*4] */
L_11009AA3:
    /* cmp MEM32(ecx), 0 */ /* 0x11009AA3: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11009AD0; /* 0x11009AA6: je 0x11009ad0 */
L_11009AA8:
    ecx = ebp + (-0x10); /* 0x11009AA8: lea ecx, [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x11009AAB: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11009AB3; /* 0x11009AAE: jae 0x11009ab3 */
L_11009AB0:
    ecx = edx + eax * 4; /* 0x11009AB0: lea ecx, [edx + eax*4] */
L_11009AB3:
    ecx = MEM32(ecx); /* 0x11009AB3: mov ecx, dword ptr [ecx] */
    edx = esi + (-0xE8); /* 0x11009AB5: lea edx, [esi - 0xe8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x11009ABB: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x11009ABD: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(ecx); /* 0x11009ABF: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x11009AC1: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x11009AC3: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x11009AC4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x11009AC7: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11009ACA: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x14)) = eax; /* 0x11009ACB: mov dword ptr [ebp - 0x14], eax */
    RECOMP_BACKEDGE();
    goto L_11009A95; /* 0x11009ACE: jmp 0x11009a95 */
L_11009AD0:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11009AD0: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x11009AD4: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1100B730); /* 0x11009AD7: call 0x1100b730 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x11009ADC: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11009AE1: ret  */
    RECOMP_REGS_OUT();
}

void sub_11009AE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009AE2u);

L_11009AE2:
    PUSH32(esp, ebp); /* 0x11009AE2: push ebp */
    ebp = esp; /* 0x11009AE3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x11009AE5: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = ebp + (-0xC); /* 0x11009AE8: lea ecx, [ebp - 0xc] */
    PUSH32(esp, 0x110038E8u); /* 0x11009AEB: push 0x110038e8 */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x11009AF0: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x11009AF6: push 0x1104550c */
    eax = ebp + (-0xC); /* 0x11009AFB: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x11009AFE: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11009AFF: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11009B04u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11009B05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009B05u);

L_11009B05:
    PUSH32(esp, 4); /* 0x11009B05: push 4 */
    eax = 0x1103C0DBu; /* 0x11009B07: mov eax, 0x1103c0db */
    RECOMP_CALL(sub_1103B372); /* 0x11009B0C: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11009B11: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11009B13: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11004274u; /* 0x11009B16: mov dword ptr [esi], 0x11004274 */
    PUSH32(esp, 3); /* 0x11009B1C: push 3 */
    ecx = POP32_VAL(esp); /* 0x11009B1E: pop ecx */
    eax = esi; /* 0x11009B1F: mov eax, esi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x11009B21: mov dword ptr [ebp - 4], ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11009B24: cdq  */
    PUSH32(esp, edx); /* 0x11009B25: push edx */
    PUSH32(esp, eax); /* 0x11009B26: push eax */
    PUSH32(esp, ecx); /* 0x11009B27: push ecx */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x11009B28: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11009B2E: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11009B31: mov byte ptr [ebp - 4], 2 */
    ecx = esi + 0xB8; /* 0x11009B35: lea ecx, [esi + 0xb8] */
    RECOMP_ICALL(MEM32(0x110690F0)); /* 0x11009B3B: call dword ptr [0x110690f0] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x20; /* 0x11009B41: lea ecx, [esi + 0x20] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11009B44: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11009FD3); /* 0x11009B48: call 0x11009fd3 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0xC; /* 0x11009B4D: lea ecx, [esi + 0xc] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x11009B50: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_110096EA); /* 0x11009B54: call 0x110096ea */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11003FA8u; /* 0x11009B59: mov dword ptr [esi], 0x11003fa8 */
    RECOMP_CALL(sub_1103B340); /* 0x11009B5F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11009B64: ret  */
    RECOMP_REGS_OUT();
}

void sub_11009B65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009B65u);

L_11009B65:
    PUSH32(esp, 0x28u); /* 0x11009B65: push 0x28 */
    eax = 0x1103C0FFu; /* 0x11009B67: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x11009B6C: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11009B71: mov esi, ecx */
    eax = esi + 0xB8; /* 0x11009B73: lea eax, [esi + 0xb8] */
    PUSH32(esp, eax); /* 0x11009B79: push eax */
    ecx = ebp + (-0x34); /* 0x11009B7A: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x11009B7D: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11009B83: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x11009B87: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x11009B8A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11009BB7; /* 0x11009B8C: jne 0x11009bb7 */
L_11009B8E:
    eax = ebp + 0x8; /* 0x11009B8E: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x11003944u; /* 0x11009B91: mov dword ptr [ebp + 8], 0x11003944 */
    PUSH32(esp, eax); /* 0x11009B98: push eax */
    ecx = ebp + (-0x18); /* 0x11009B99: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11009B9C: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x11009BA2: push 0x11045568 */
    eax = ebp + (-0x18); /* 0x11009BA7: lea eax, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = 0x11001470u; /* 0x11009BAA: mov dword ptr [ebp - 0x18], 0x11001470 */
    PUSH32(esp, eax); /* 0x11009BB1: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11009BB2: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11009BB7:
    ecx = esi + 0xC; /* 0x11009BB7: lea ecx, [esi + 0xc] */
    eax = MEM32(ecx); /* 0x11009BBA: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x11009BBC: push edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x11009BBD: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x11009BBF: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x11009BC1: mov ecx, edi */
    PUSH32(esp, esi); /* 0x11009BC3: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11009BC4: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11009BC7: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x11009BC9: mov ecx, esi */
    PUSH32(esp, edi); /* 0x11009BCB: push edi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11009BCC: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11009BCF: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x11009BD3: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x11009BD6: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x11009BDC: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009BE1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11009BE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009BE4u);

L_11009BE4:
    PUSH32(esp, 0x28u); /* 0x11009BE4: push 0x28 */
    eax = 0x1103C0FFu; /* 0x11009BE6: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x11009BEB: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11009BF0: mov edi, ecx */
    eax = edi + 0xB8; /* 0x11009BF2: lea eax, [edi + 0xb8] */
    PUSH32(esp, eax); /* 0x11009BF8: push eax */
    ecx = ebp + (-0x34); /* 0x11009BF9: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x11009BFC: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11009C02: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x11009C06: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x11009C09: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11009C36; /* 0x11009C0B: jne 0x11009c36 */
L_11009C0D:
    eax = ebp + 0x8; /* 0x11009C0D: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x11003944u; /* 0x11009C10: mov dword ptr [ebp + 8], 0x11003944 */
    PUSH32(esp, eax); /* 0x11009C17: push eax */
    ecx = ebp + (-0x18); /* 0x11009C18: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11009C1B: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x11009C21: push 0x11045568 */
    eax = ebp + (-0x18); /* 0x11009C26: lea eax, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = 0x11001470u; /* 0x11009C29: mov dword ptr [ebp - 0x18], 0x11001470 */
    PUSH32(esp, eax); /* 0x11009C30: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11009C31: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11009C36:
    ecx = edi + 0xC; /* 0x11009C36: lea ecx, [edi + 0xc] */
    eax = MEM32(ecx); /* 0x11009C39: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x11009C3B: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11009C3C: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11009C3F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009C4B; /* 0x11009C41: je 0x11009c4b */
L_11009C43:
    eax = MEM32(esi); /* 0x11009C43: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x11009C45: mov ecx, esi */
    PUSH32(esp, edi); /* 0x11009C47: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x11009C48: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_11009C4B:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11009C4B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x11009C4F: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x11009C52: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x11009C58: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009C5D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11009C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009C60u);

L_11009C60:
    PUSH32(esp, 0x28u); /* 0x11009C60: push 0x28 */
    eax = 0x1103C0FFu; /* 0x11009C62: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x11009C67: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11009C6C: mov esi, ecx */
    eax = esi + 0xB8; /* 0x11009C6E: lea eax, [esi + 0xb8] */
    PUSH32(esp, eax); /* 0x11009C74: push eax */
    ecx = ebp + (-0x34); /* 0x11009C75: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x11009C78: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11009C7E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0xC; /* 0x11009C82: lea ecx, [esi + 0xc] */
    eax = MEM32(ecx); /* 0x11009C85: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x18); /* 0x11009C87: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x11009C8A: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11009C8B: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    goto L_11009CB5; /* 0x11009C8E: jmp 0x11009cb5 */
L_11009C90:
    ecx = MEM32(ebp + (-0x18)); /* 0x11009C90: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x11009C93: push dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x11009C96: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x11009C98: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x11009C9B: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x11009C9D: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11009C9F: push eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x11009CA0: mov dword ptr [ebp - 0x10], eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x11009CA3: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x11009CA6: mov ecx, dword ptr [ebp - 0x18] */
    edx = ebp + (-0x14); /* 0x11009CA9: lea edx, [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x11009CAC: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x11009CAF: push edx */
    eax = MEM32(ecx); /* 0x11009CB0: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x11009CB2: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_11009CB5:
    ecx = MEM32(ebp + (-0x18)); /* 0x11009CB5: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x11009CB8: push dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x11009CBB: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x11009CBD: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x11009CC0: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x11009CC3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11009C90; /* 0x11009CC5: jne 0x11009c90 */
L_11009CC7:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11009CC7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x11009CCB: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x11009CCE: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x11009CD4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11009CD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_11009CDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009CDAu);

L_11009CDA:
    PUSH32(esp, ebp); /* 0x11009CDA: push ebp */
    ebp = esp; /* 0x11009CDB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x11009CDD: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x11009CE0: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11009CF4; /* 0x11009CE4: je 0x11009cf4 */
L_11009CE6:
    eax = MEM32(ecx); /* 0x11009CE6: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11009CE8: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x11009CEB: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11009CEE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11009CF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11009CF1: ret 8 */
L_11009CF4:
    eax = ebp + 0xC; /* 0x11009CF4: lea eax, [ebp + 0xc] */
    MEM32(ebp + 0xC) = 0x11003944u; /* 0x11009CF7: mov dword ptr [ebp + 0xc], 0x11003944 */
    PUSH32(esp, eax); /* 0x11009CFE: push eax */
    ecx = ebp + (-0xC); /* 0x11009CFF: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11009D02: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x11009D08: push 0x11045568 */
    eax = ebp + (-0xC); /* 0x11009D0D: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x11001470u; /* 0x11009D10: mov dword ptr [ebp - 0xc], 0x11001470 */
    PUSH32(esp, eax); /* 0x11009D17: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11009D18: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11009D1Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
