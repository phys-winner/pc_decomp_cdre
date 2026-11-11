#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1103246F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103246Fu);

L_1103246F:
    PUSH32(esp, 0x38u); /* 0x1103246F: push 0x38 */
    eax = 0x1103E215u; /* 0x11032471: mov eax, 0x1103e215 */
    RECOMP_CALL(sub_1103B372); /* 0x11032476: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103247B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1103247D: mov dword ptr [ebp - 0x10], ebx */
    edi = MEM32(ebp + 0x8); /* 0x11032480: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x11032483: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110324EA; /* 0x11032485: je 0x110324ea */
L_11032487:
    /* cmp MEM32(edi), ebx */ /* 0x11032487: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110324EA; /* 0x11032489: jne 0x110324ea */
L_1103248B:
    PUSH32(esp, 0x58u); /* 0x1103248B: push 0x58 */
    RECOMP_CALL(sub_1103B120); /* 0x1103248D: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11032492: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11032494: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x11032495: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x11032498: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1103249B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110324D9; /* 0x1103249D: je 0x110324d9 */
L_1103249F:
    ecx = MEM32(ebp + 0xC); /* 0x1103249F: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x110324A2: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110324A7: push eax */
    ecx = ebp + (-0x44); /* 0x110324A8: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x110324AB: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x110324B0: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x110324B4: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = ebx; /* 0x110324B5: mov dword ptr [ebp - 0x10], ebx */
    PUSH32(esp, ebx); /* 0x110324B8: push ebx */
    PUSH32(esp, eax); /* 0x110324B9: push eax */
    ecx = esi; /* 0x110324BA: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 2; /* 0x110324BC: mov dword ptr [ebp - 4], 2 */
    MEM32(esi) = 0x110033F4u; /* 0x110324C3: mov dword ptr [esi], 0x110033f4 */
    MEM8(esi + 0x28) = (uint8_t)(LO8(ebx)); /* 0x110324C9: mov byte ptr [esi + 0x28], bl */
    RECOMP_CALL(sub_11033B54); /* 0x110324CC: call 0x11033b54 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1100345Cu; /* 0x110324D1: mov dword ptr [esi], 0x1100345c */
    goto L_110324DB; /* 0x110324D7: jmp 0x110324db */
L_110324D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110324D9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110324DB:
    MEM32(edi) = esi; /* 0x110324DB: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x110324DD: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110324EA; /* 0x110324E0: je 0x110324ea */
L_110324E2:
    ecx = ebp + (-0x44); /* 0x110324E2: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x110324E5: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_110324EA:
    PUSH32(esp, 3); /* 0x110324EA: push 3 */
    eax = POP32_VAL(esp); /* 0x110324EC: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x110324ED: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110324F2: ret  */
    RECOMP_REGS_OUT();
}

void sub_110324F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110324F3u);

L_110324F3:
    PUSH32(esp, 0x38u); /* 0x110324F3: push 0x38 */
    eax = 0x1103E215u; /* 0x110324F5: mov eax, 0x1103e215 */
    RECOMP_CALL(sub_1103B372); /* 0x110324FA: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110324FF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11032501: mov dword ptr [ebp - 0x10], ebx */
    edi = MEM32(ebp + 0x8); /* 0x11032504: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x11032507: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103256F; /* 0x11032509: je 0x1103256f */
L_1103250B:
    /* cmp MEM32(edi), ebx */ /* 0x1103250B: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103256F; /* 0x1103250D: jne 0x1103256f */
L_1103250F:
    PUSH32(esp, 0x58u); /* 0x1103250F: push 0x58 */
    RECOMP_CALL(sub_1103B120); /* 0x11032511: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11032516: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11032518: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x11032519: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1103251C: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1103251F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103255E; /* 0x11032521: je 0x1103255e */
L_11032523:
    ecx = MEM32(ebp + 0xC); /* 0x11032523: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x11032526: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1103252B: push eax */
    ecx = ebp + (-0x44); /* 0x1103252C: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1103252F: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x11032534: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11032538: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11032539: mov dword ptr [ebp - 0x10], ebx */
    PUSH32(esp, ebx); /* 0x1103253C: push ebx */
    PUSH32(esp, eax); /* 0x1103253D: push eax */
    ecx = esi; /* 0x1103253E: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 2; /* 0x11032540: mov dword ptr [ebp - 4], 2 */
    MEM32(esi) = 0x110033F4u; /* 0x11032547: mov dword ptr [esi], 0x110033f4 */
    MEM8(esi + 0x28) = (uint8_t)(0); /* 0x1103254D: mov byte ptr [esi + 0x28], 0 */
    RECOMP_CALL(sub_11033B54); /* 0x11032551: call 0x11033b54 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11003428u; /* 0x11032556: mov dword ptr [esi], 0x11003428 */
    goto L_11032560; /* 0x1103255C: jmp 0x11032560 */
L_1103255E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1103255E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11032560:
    MEM32(edi) = esi; /* 0x11032560: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x11032562: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103256F; /* 0x11032565: je 0x1103256f */
L_11032567:
    ecx = ebp + (-0x44); /* 0x11032567: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1103256A: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1103256F:
    PUSH32(esp, 3); /* 0x1103256F: push 3 */
    eax = POP32_VAL(esp); /* 0x11032571: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x11032572: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11032577: ret  */
    RECOMP_REGS_OUT();
}

void sub_11032578(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11032578u);

L_11032578:
    PUSH32(esp, 0x178u); /* 0x11032578: push 0x178 */
    eax = 0x1103F105u; /* 0x1103257D: mov eax, 0x1103f105 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11032582: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11032587: mov eax, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + 0x10); /* 0x1103258A: mov ebx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x18); /* 0x1103258D: mov ecx, dword ptr [ebp + 0x18] */
    edi = MEM32(ebp + 0xC); /* 0x11032590: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x180)) = eax; /* 0x11032593: mov dword ptr [ebp - 0x180], eax */
    eax = MEM32(ebp + 0x1C); /* 0x11032599: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x154)) = eax; /* 0x1103259C: mov dword ptr [ebp - 0x154], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110325A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x138)) = ebx; /* 0x110325A4: mov dword ptr [ebp - 0x138], ebx */
    MEM32(ebp + (-0x160)) = ecx; /* 0x110325AA: mov dword ptr [ebp - 0x160], ecx */
    MEM32(ebp + (-0x140)) = eax; /* 0x110325B0: mov dword ptr [ebp - 0x140], eax */
    MEM32(ebp + (-0x150)) = eax; /* 0x110325B6: mov dword ptr [ebp - 0x150], eax */
    /* cmp MEM8(ebp + 0x14), LO8(eax) */ /* 0x110325BC: cmp byte ptr [ebp + 0x14], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110325E8; /* 0x110325BF: je 0x110325e8 */
L_110325C1:
    eax = ebp + (-0x174); /* 0x110325C1: lea eax, [ebp - 0x174] */
    PUSH32(esp, eax); /* 0x110325C7: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110325C8: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110325CD: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110325D1: push eax */
    RECOMP_CALL(sub_1103199B); /* 0x110325D2: call 0x1103199b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110325D7: pop ecx */
    esi = eax; /* 0x110325D8: mov esi, eax */
    ecx = ebp + (-0x174); /* 0x110325DA: lea ecx, [ebp - 0x174] */
    MEM32(ebp + (-0x148)) = esi; /* 0x110325E0: mov dword ptr [ebp - 0x148], esi */
    goto L_11032610; /* 0x110325E6: jmp 0x11032610 */
L_110325E8:
    eax = ebp + (-0x178); /* 0x110325E8: lea eax, [ebp - 0x178] */
    PUSH32(esp, eax); /* 0x110325EE: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110325EF: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110325F4: push eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x110325F5: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11031A35); /* 0x110325FC: call 0x11031a35 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11032601: pop ecx */
    esi = eax; /* 0x11032602: mov esi, eax */
    MEM32(ebp + (-0x148)) = eax; /* 0x11032604: mov dword ptr [ebp - 0x148], eax */
    ecx = ebp + (-0x178); /* 0x1103260A: lea ecx, [ebp - 0x178] */
L_11032610:
    RECOMP_CALL(sub_1100E431); /* 0x11032610: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0; /* 0x11032615: and dword ptr [ebp - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11032619: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x141)) = (uint8_t)(LO8(eax)); /* 0x1103261B: mov byte ptr [ebp - 0x141], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11032621: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x131)) = (uint8_t)(0); /* 0x11032623: mov byte ptr [ebp - 0x131], 0 */
    MEM32(ebp + (-0x2C)) = 7; /* 0x1103262A: mov dword ptr [ebp - 0x2c], 7 */
    MEM16(ebp + (-0x40)) = (uint16_t)(LO16(eax)); /* 0x11032631: mov word ptr [ebp - 0x40], ax */
    eax = MEM32(esi); /* 0x11032635: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x158); /* 0x11032637: lea ecx, [ebp - 0x158] */
    PUSH32(esp, ecx); /* 0x1103263D: push ecx */
    ecx = esi; /* 0x1103263E: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 2; /* 0x11032640: mov dword ptr [ebp - 4], 2 */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x11032647: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x1103264A: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x1103264E: mov dword ptr [ebp - 0x44], 0xf */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x11032655: mov byte ptr [ebp - 0x58], 0 */
    ecx = MEM32(ebp + (-0x160)); /* 0x11032659: mov ecx, dword ptr [ebp - 0x160] */
    eax = ebp + (-0x16C); /* 0x1103265F: lea eax, [ebp - 0x16c] */
    PUSH32(esp, eax); /* 0x11032665: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11032666: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_1100F94A); /* 0x1103266A: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1103266F: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x11032670: mov byte ptr [ebp - 4], 4 */
    RECOMP_CALL(sub_1101103E); /* 0x11032674: call 0x1101103e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11032679: pop ecx */
    ecx = ebp + (-0x16C); /* 0x1103267A: lea ecx, [ebp - 0x16c] */
    MEM32(ebp + (-0x15C)) = eax; /* 0x11032680: mov dword ptr [ebp - 0x15c], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11032686: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_1100E431); /* 0x1103268A: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x15C)); /* 0x1103268F: mov eax, dword ptr [ebp - 0x15c] */
    ecx = eax; /* 0x11032695: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0x154))); /* 0x11032697: push dword ptr [ebp - 0x154] */
    PUSH32(esp, 0x110035C7u); /* 0x1103269D: push 0x110035c7 */
    edx = MEM32(eax); /* 0x110326A2: mov edx, dword ptr [eax] */
    PUSH32(esp, 0x110035BCu); /* 0x110326A4: push 0x110035bc */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x110326A9: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x13C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x13C)) = MEM32(ebp + (-0x13C)) & 0; /* 0x110326AC: and dword ptr [ebp - 0x13c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(ebp + (-0x131))); /* 0x110326B3: mov al, byte ptr [ebp - 0x131] */
L_110326B9:
    /* cmp MEM32(ebp + (-0x13C)), 4 */ /* 0x110326B9: cmp dword ptr [ebp - 0x13c], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x13C))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103270F; /* 0x110326C0: jae 0x1103270f */
L_110326C2:
    eax = MEM32(ebp + (-0x13C)); /* 0x110326C2: mov eax, dword ptr [ebp - 0x13c] */
    eax = (int32_t)(int8_t)MEM8(ebp + eax + (-0x158)); /* 0x110326C8: movsx eax, byte ptr [ebp + eax - 0x158] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x110326D0: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11032E7C; /* 0x110326D3: je 0x11032e7c */
L_110326D9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x110326D9: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11032D66; /* 0x110326DC: je 0x11032d66 */
L_110326E2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x110326E2: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11032AC9; /* 0x110326E5: je 0x11032ac9 */
L_110326EB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x4Bu; /* 0x110326EB: sub eax, 0x4b */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11032743; /* 0x110326EE: je 0x11032743 */
L_110326F0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x110326F0: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x110326F1: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11032E7C; /* 0x110326F2: je 0x11032e7c */
L_110326F8:
    eax = MEM32(ebp + (-0x13C)); /* 0x110326F8: mov eax, dword ptr [ebp - 0x13c] */
L_110326FE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110326FE: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x13C)) = eax; /* 0x110326FF: mov dword ptr [ebp - 0x13c], eax */
    SET_LO8(eax, MEM8(ebp + (-0x131))); /* 0x11032705: mov al, byte ptr [ebp - 0x131] */
    /* test LO8(eax), LO8(eax) */ /* 0x1103270B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_110326B9; /* 0x1103270D: je 0x110326b9 */
L_1103270F:
    /* test LO8(eax), LO8(eax) */ /* 0x1103270F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11032F91; /* 0x11032711: jne 0x11032f91 */
L_11032717:
    ebx = MEM32(ebp + (-0x30)); /* 0x11032717: mov ebx, dword ptr [ebp - 0x30] */
    /* cmp ebx, 1 */ /* 0x1103271A: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11032F77; /* 0x1103271D: jbe 0x11032f77 */
L_11032723:
    edx = MEM32(ebp + (-0x2C)); /* 0x11032723: mov edx, dword ptr [ebp - 0x2c] */
    ecx = MEM32(ebp + (-0x40)); /* 0x11032726: mov ecx, dword ptr [ebp - 0x40] */
    esi = ecx; /* 0x11032729: mov esi, ecx */
    /* cmp edx, 8 */ /* 0x1103272B: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103273C; /* 0x1103272E: jae 0x1103273c */
L_11032730:
    esi = ebp + (-0x40); /* 0x11032730: lea esi, [ebp - 0x40] */
L_11032733:
    /* cmp edx, 8 */ /* 0x11032733: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11032F17; /* 0x11032736: jb 0x11032f17 */
L_1103273C:
    eax = ecx; /* 0x1103273C: mov eax, ecx */
    goto L_11032F1A; /* 0x1103273E: jmp 0x11032f1a */
L_11032743:
    eax = MEM32(esi); /* 0x11032743: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x11032745: mov ecx, esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14C)) = MEM32(ebp + (-0x14C)) & 0; /* 0x11032747: and dword ptr [ebp - 0x14c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1103274E: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x11032751: mov ebx, eax */
    ecx = esi; /* 0x11032753: mov ecx, esi */
    eax = ebp + (-0x70); /* 0x11032755: lea eax, [ebp - 0x70] */
    MEM32(ebp + (-0x164)) = ebx; /* 0x11032758: mov dword ptr [ebp - 0x164], ebx */
    PUSH32(esp, eax); /* 0x1103275E: push eax */
    RECOMP_CALL(sub_110292E9); /* 0x1103275F: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x60)), 0 */ /* 0x11032764: cmp dword ptr [ebp - 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x11032768: mov byte ptr [ebp - 4], 0xa */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11032956; /* 0x1103276C: je 0x11032956 */
L_11032772:
    eax = MEM32(esi); /* 0x11032772: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x11032774: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11032776: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11032779: movzx eax, ax */
    MEM32(ebp + (-0x17C)) = eax; /* 0x1103277C: mov dword ptr [ebp - 0x17c], eax */
    /* test LO16(eax), LO16(eax) */ /* 0x11032782: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032956; /* 0x11032785: je 0x11032956 */
L_1103278B:
    /* cmp MEM32(ebp + (-0x5C)), 0x10u */ /* 0x1103278B: cmp dword ptr [ebp - 0x5c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x70)); /* 0x1103278F: mov eax, dword ptr [ebp - 0x70] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11032797; /* 0x11032792: jae 0x11032797 */
L_11032794:
    eax = ebp + (-0x70); /* 0x11032794: lea eax, [ebp - 0x70] */
L_11032797:
    /* cmp MEM8(eax), 0x7Fu */ /* 0x11032797: cmp byte ptr [eax], 0x7f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_11032956; /* 0x1103279A: jae 0x11032956 */
L_110327A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110327A0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x110327A2: mov dword ptr [ebp - 0x14], 0xf */
    PUSH32(esp, ebx); /* 0x110327A9: push ebx */
    PUSH32(esp, 1); /* 0x110327AA: push 1 */
    ecx = ebp + (-0x28); /* 0x110327AC: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x110327AF: mov dword ptr [ebp - 0x18], ebx */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(ebx)); /* 0x110327B2: mov byte ptr [ebp - 0x28], bl */
    RECOMP_CALL(sub_11014076); /* 0x110327B5: call 0x11014076 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x110327BA: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x110327C0: mov ecx, edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x110327C2: mov byte ptr [ebp - 4], 0xb */
    esi = ebx; /* 0x110327C6: mov esi, ebx */
    RECOMP_CALL(sub_110278AC); /* 0x110327C8: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110327CD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110328BD; /* 0x110327CF: jne 0x110328bd */
L_110327D5:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x110327D5: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110327E2; /* 0x110327D9: jne 0x110327e2 */
L_110327DB:
    ecx = edi; /* 0x110327DB: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x110327DD: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_110327E2:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x110327E2: movzx eax, word ptr [edi + 6] */
    PUSH32(esp, eax); /* 0x110327E6: push eax */
    PUSH32(esp, MEM32(ebp + (-0x154))); /* 0x110327E7: push dword ptr [ebp - 0x154] */
    RECOMP_CALL(sub_1101503D); /* 0x110327ED: call 0x1101503d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110327F2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110327F3: pop ecx */
    /* cmp eax, 0xAu */ /* 0x110327F4: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11032837; /* 0x110327F7: jae 0x11032837 */
L_110327F9:
    SET_LO8(eax, MEM8(eax + 0x110035BC)); /* 0x110327F9: mov al, byte ptr [eax + 0x110035bc] */
    ecx = ebp + (-0x58); /* 0x110327FF: lea ecx, [ebp - 0x58] */
    MEM8(ebp + (-0x168)) = (uint8_t)(LO8(eax)); /* 0x11032802: mov byte ptr [ebp - 0x168], al */
    PUSH32(esp, MEM32(ebp + (-0x168))); /* 0x11032808: push dword ptr [ebp - 0x168] */
    PUSH32(esp, 1); /* 0x1103280E: push 1 */
    RECOMP_CALL(sub_11014015); /* 0x11032810: call 0x11014015 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11032815: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x11032819: mov eax, dword ptr [ebp - 0x28] */
    ecx = eax; /* 0x1103281C: mov ecx, eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11032823; /* 0x1103281E: jae 0x11032823 */
L_11032820:
    ecx = ebp + (-0x28); /* 0x11032820: lea ecx, [ebp - 0x28] */
L_11032823:
    /* cmp MEM8(ecx + esi), 0x7Fu */ /* 0x11032823: cmp byte ptr [ecx + esi], 0x7f */
    _flag_a = (uint32_t)(MEM8(ecx + esi)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103287A; /* 0x11032827: je 0x1103287a */
L_11032829:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11032829: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11032832; /* 0x1103282D: jae 0x11032832 */
L_1103282F:
    eax = ebp + (-0x28); /* 0x1103282F: lea eax, [ebp - 0x28] */
L_11032832:
    _flag_a = (uint32_t)(MEM8(eax + esi)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(eax + esi) = (uint8_t)(MEM8(eax + esi) + 1); /* 0x11032832: inc byte ptr [eax + esi] */
    _flag_k = FK_NARROW(FK_INC, 24);
    goto L_1103287A; /* 0x11032835: jmp 0x1103287a */
L_11032837:
    ecx = MEM32(ebp + (-0x14)); /* 0x11032837: mov ecx, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x28)); /* 0x1103283A: mov ebx, dword ptr [ebp - 0x28] */
    eax = ebx; /* 0x1103283D: mov eax, ebx */
    /* cmp ecx, 0x10u */ /* 0x1103283F: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11032847; /* 0x11032842: jae 0x11032847 */
L_11032844:
    eax = ebp + (-0x28); /* 0x11032844: lea eax, [ebp - 0x28] */
L_11032847:
    /* cmp MEM8(eax + esi), 0 */ /* 0x11032847: cmp byte ptr [eax + esi], 0 */
    _flag_a = (uint32_t)(MEM8(eax + esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103289C; /* 0x1103284B: je 0x1103289c */
L_1103284D:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1103284D: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032860; /* 0x11032851: jne 0x11032860 */
L_11032853:
    ecx = edi; /* 0x11032853: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x11032855: call 0x11022515 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x28)); /* 0x1103285A: mov ebx, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1103285D: mov ecx, dword ptr [ebp - 0x14] */
L_11032860:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x11032860: movzx eax, word ptr [edi + 6] */
    /* cmp LO16(eax), MEM16(ebp + (-0x17C)) */ /* 0x11032864: cmp ax, word ptr [ebp - 0x17c] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x17C))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103289C; /* 0x1103286B: jne 0x1103289c */
L_1103286D:
    PUSH32(esp, 0); /* 0x1103286D: push 0 */
    PUSH32(esp, 1); /* 0x1103286F: push 1 */
    ecx = ebp + (-0x28); /* 0x11032871: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11014015); /* 0x11032874: call 0x11014015 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11032879: inc esi */
    _flag_k = FK_INC;
L_1103287A:
    ecx = edi; /* 0x1103287A: mov ecx, edi */
    RECOMP_CALL(sub_11021838); /* 0x1103287C: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x11032881: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x11032887: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x11032889: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1103288E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_110327D5; /* 0x11032890: je 0x110327d5 */
L_11032896:
    ebx = MEM32(ebp + (-0x28)); /* 0x11032896: mov ebx, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x14)); /* 0x11032899: mov ecx, dword ptr [ebp - 0x14] */
L_1103289C:
    /* test esi, esi */ /* 0x1103289C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110328C0; /* 0x1103289E: je 0x110328c0 */
L_110328A0:
    eax = ebx; /* 0x110328A0: mov eax, ebx */
    /* cmp ecx, 0x10u */ /* 0x110328A2: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110328AA; /* 0x110328A5: jae 0x110328aa */
L_110328A7:
    eax = ebp + (-0x28); /* 0x110328A7: lea eax, [ebp - 0x28] */
L_110328AA:
    /* cmp MEM8(eax + esi), 0 */ /* 0x110328AA: cmp byte ptr [eax + esi], 0 */
    _flag_a = (uint32_t)(MEM8(eax + esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_110328B3; /* 0x110328AE: jle 0x110328b3 */
L_110328B0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x110328B0: inc esi */
    _flag_k = FK_INC;
    goto L_110328C0; /* 0x110328B1: jmp 0x110328c0 */
L_110328B3:
    SET_LO8(eax, 1); /* 0x110328B3: mov al, 1 */
    MEM8(ebp + (-0x131)) = (uint8_t)(LO8(eax)); /* 0x110328B5: mov byte ptr [ebp - 0x131], al */
    goto L_110328C6; /* 0x110328BB: jmp 0x110328c6 */
L_110328BD:
    ebx = MEM32(ebp + (-0x28)); /* 0x110328BD: mov ebx, dword ptr [ebp - 0x28] */
L_110328C0:
    SET_LO8(eax, MEM8(ebp + (-0x131))); /* 0x110328C0: mov al, byte ptr [ebp - 0x131] */
L_110328C6:
    /* cmp MEM32(ebp + (-0x5C)), 0x10u */ /* 0x110328C6: cmp dword ptr [ebp - 0x5c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x70)); /* 0x110328CA: mov edx, dword ptr [ebp - 0x70] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110328D2; /* 0x110328CD: jae 0x110328d2 */
L_110328CF:
    edx = ebp + (-0x70); /* 0x110328CF: lea edx, [ebp - 0x70] */
L_110328D2:
    /* test LO8(eax), LO8(eax) */ /* 0x110328D2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11032917; /* 0x110328D4: jne 0x11032917 */
L_110328D6:
    /* test esi, esi */ /* 0x110328D6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032944; /* 0x110328D8: je 0x11032944 */
L_110328DA:
    SET_LO8(ecx, MEM8(edx)); /* 0x110328DA: mov cl, byte ptr [edx] */
    /* cmp LO8(ecx), 0x7Fu */ /* 0x110328DC: cmp cl, 0x7f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11032944; /* 0x110328DF: je 0x11032944 */
L_110328E1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x110328E1: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_110328F4; /* 0x110328E2: je 0x110328f4 */
L_110328E4:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x110328E4: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebx; /* 0x110328E8: mov eax, ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110328EF; /* 0x110328EA: jae 0x110328ef */
L_110328EC:
    eax = ebp + (-0x28); /* 0x110328EC: lea eax, [ebp - 0x28] */
L_110328EF:
    /* cmp LO8(ecx), MEM8(eax + esi) */ /* 0x110328EF: cmp cl, byte ptr [eax + esi] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032910; /* 0x110328F2: jne 0x11032910 */
L_110328F4:
    /* test esi, esi */ /* 0x110328F4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11032907; /* 0x110328F6: jne 0x11032907 */
L_110328F8:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x110328F8: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebx; /* 0x110328FC: mov eax, ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11032903; /* 0x110328FE: jae 0x11032903 */
L_11032900:
    eax = ebp + (-0x28); /* 0x11032900: lea eax, [ebp - 0x28] */
L_11032903:
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x11032903: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_11032910; /* 0x11032905: jl 0x11032910 */
L_11032907:
    /* cmp MEM8(edx + 0x1), 0 */ /* 0x11032907: cmp byte ptr [edx + 1], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_110328D6; /* 0x1103290B: jle 0x110328d6 */
L_1103290D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1103290D: inc edx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_110328D6; /* 0x1103290E: jmp 0x110328d6 */
L_11032910:
    MEM8(ebp + (-0x131)) = (uint8_t)(1); /* 0x11032910: mov byte ptr [ebp - 0x131], 1 */
L_11032917:
    PUSH32(esp, 0); /* 0x11032917: push 0 */
    PUSH32(esp, 1); /* 0x11032919: push 1 */
    ecx = ebp + (-0x28); /* 0x1103291B: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x1103291E: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_11032923:
    PUSH32(esp, 0); /* 0x11032923: push 0 */
    PUSH32(esp, 1); /* 0x11032925: push 1 */
    ecx = ebp + (-0x70); /* 0x11032927: lea ecx, [ebp - 0x70] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1103292A: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_11010630); /* 0x1103292E: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_11032933:
    esi = MEM32(ebp + (-0x148)); /* 0x11032933: mov esi, dword ptr [ebp - 0x148] */
L_11032939:
    ebx = MEM32(ebp + (-0x138)); /* 0x11032939: mov ebx, dword ptr [ebp - 0x138] */
    RECOMP_BACKEDGE();
    goto L_110326F8; /* 0x1103293F: jmp 0x110326f8 */
L_11032944:
    PUSH32(esp, 0); /* 0x11032944: push 0 */
    PUSH32(esp, 1); /* 0x11032946: push 1 */
    ecx = ebp + (-0x28); /* 0x11032948: lea ecx, [ebp - 0x28] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x1103294B: mov byte ptr [ebp - 4], 0xa */
    RECOMP_CALL(sub_11010630); /* 0x1103294F: call 0x11010630 */
    RECOMP_FLAGS_IN();
    goto L_110329C1; /* 0x11032954: jmp 0x110329c1 */
L_11032956:
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x11032956: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x1103295C: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x1103295E: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11032963: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110329CD; /* 0x11032965: jne 0x110329cd */
L_11032967:
    esi = MEM32(ebp + (-0x138)); /* 0x11032967: mov esi, dword ptr [ebp - 0x138] */
    ebx = MEM32(ebp + (-0x154)); /* 0x1103296D: mov ebx, dword ptr [ebp - 0x154] */
L_11032973:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x11032973: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032980; /* 0x11032977: jne 0x11032980 */
L_11032979:
    ecx = edi; /* 0x11032979: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x1103297B: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11032980:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x11032980: movzx eax, word ptr [edi + 6] */
    PUSH32(esp, eax); /* 0x11032984: push eax */
    PUSH32(esp, ebx); /* 0x11032985: push ebx */
    RECOMP_CALL(sub_1101503D); /* 0x11032986: call 0x1101503d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103298B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103298C: pop ecx */
    /* cmp eax, 0xAu */ /* 0x1103298D: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110329C1; /* 0x11032990: jae 0x110329c1 */
L_11032992:
    SET_LO8(eax, MEM8(eax + 0x110035BC)); /* 0x11032992: mov al, byte ptr [eax + 0x110035bc] */
    ecx = ebp + (-0x58); /* 0x11032998: lea ecx, [ebp - 0x58] */
    MEM8(ebp + (-0x184)) = (uint8_t)(LO8(eax)); /* 0x1103299B: mov byte ptr [ebp - 0x184], al */
    PUSH32(esp, MEM32(ebp + (-0x184))); /* 0x110329A1: push dword ptr [ebp - 0x184] */
    PUSH32(esp, 1); /* 0x110329A7: push 1 */
    RECOMP_CALL(sub_11014015); /* 0x110329A9: call 0x11014015 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x110329AE: mov ecx, edi */
    RECOMP_CALL(sub_11021838); /* 0x110329B0: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110329B5: push esi */
    ecx = edi; /* 0x110329B6: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x110329B8: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110329BD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032973; /* 0x110329BF: je 0x11032973 */
L_110329C1:
    esi = MEM32(ebp + (-0x148)); /* 0x110329C1: mov esi, dword ptr [ebp - 0x148] */
    ebx = MEM32(ebp + (-0x164)); /* 0x110329C7: mov ebx, dword ptr [ebp - 0x164] */
L_110329CD:
    eax = MEM32(esi); /* 0x110329CD: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x110329CF: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x110329D1: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x110329D4: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x110329DA: mov ecx, edi */
    esi = (uint32_t)LO16(eax); /* 0x110329DC: movzx esi, ax */
    RECOMP_CALL(sub_110278AC); /* 0x110329DF: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110329E4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11032A93; /* 0x110329E6: jne 0x11032a93 */
L_110329EC:
    /* test LO16(esi), LO16(esi) */ /* 0x110329EC: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032A93; /* 0x110329EF: je 0x11032a93 */
L_110329F5:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x110329F5: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032A01; /* 0x110329F8: jne 0x11032a01 */
L_110329FA:
    ecx = edi; /* 0x110329FA: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x110329FC: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11032A01:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x11032A01: movzx eax, word ptr [edi + 6] */
    /* cmp LO16(eax), LO16(esi) */ /* 0x11032A05: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032A93; /* 0x11032A08: jne 0x11032a93 */
L_11032A0E:
    ecx = edi; /* 0x11032A0E: mov ecx, edi */
    RECOMP_CALL(sub_11021838); /* 0x11032A10: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x11032A15: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x11032A1B: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x11032A1D: call 0x110278ac */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x14C)); /* 0x11032A22: mov esi, dword ptr [ebp - 0x14c] */
L_11032A28:
    /* test LO8(eax), LO8(eax) */ /* 0x11032A28: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11032A86; /* 0x11032A2A: jne 0x11032a86 */
L_11032A2C:
    /* cmp esi, ebx */ /* 0x11032A2C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11032A99; /* 0x11032A2E: jge 0x11032a99 */
L_11032A30:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x11032A30: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032A3C; /* 0x11032A33: jne 0x11032a3c */
L_11032A35:
    ecx = edi; /* 0x11032A35: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x11032A37: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11032A3C:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x11032A3C: movzx eax, word ptr [edi + 6] */
    PUSH32(esp, eax); /* 0x11032A40: push eax */
    PUSH32(esp, MEM32(ebp + (-0x154))); /* 0x11032A41: push dword ptr [ebp - 0x154] */
    RECOMP_CALL(sub_1101503D); /* 0x11032A47: call 0x1101503d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11032A4C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11032A4D: pop ecx */
    /* cmp eax, 0xAu */ /* 0x11032A4E: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11032A86; /* 0x11032A51: jae 0x11032a86 */
L_11032A53:
    SET_LO8(eax, MEM8(eax + 0x110035BC)); /* 0x11032A53: mov al, byte ptr [eax + 0x110035bc] */
    ecx = ebp + (-0x58); /* 0x11032A59: lea ecx, [ebp - 0x58] */
    MEM8(ebp + (-0x170)) = (uint8_t)(LO8(eax)); /* 0x11032A5C: mov byte ptr [ebp - 0x170], al */
    PUSH32(esp, MEM32(ebp + (-0x170))); /* 0x11032A62: push dword ptr [ebp - 0x170] */
    PUSH32(esp, 1); /* 0x11032A68: push 1 */
    RECOMP_CALL(sub_11014015); /* 0x11032A6A: call 0x11014015 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x11032A6F: mov ecx, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11032A71: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_11021838); /* 0x11032A72: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x11032A77: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x11032A7D: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x11032A7F: call 0x110278ac */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11032A28; /* 0x11032A84: jmp 0x11032a28 */
L_11032A86:
    /* cmp esi, ebx */ /* 0x11032A86: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11032A99; /* 0x11032A88: jge 0x11032a99 */
L_11032A8A:
    MEM8(ebp + (-0x131)) = (uint8_t)(1); /* 0x11032A8A: mov byte ptr [ebp - 0x131], 1 */
    goto L_11032A99; /* 0x11032A91: jmp 0x11032a99 */
L_11032A93:
    esi = MEM32(ebp + (-0x14C)); /* 0x11032A93: mov esi, dword ptr [ebp - 0x14c] */
L_11032A99:
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x11032A99: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032AAB; /* 0x11032A9D: jne 0x11032aab */
L_11032A9F:
    MEM8(ebp + (-0x131)) = (uint8_t)(1); /* 0x11032A9F: mov byte ptr [ebp - 0x131], 1 */
    RECOMP_BACKEDGE();
    goto L_11032923; /* 0x11032AA6: jmp 0x11032923 */
L_11032AAB:
    /* cmp esi, ebx */ /* 0x11032AAB: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_11032923; /* 0x11032AAD: jge 0x11032923 */
L_11032AB3:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x11032AB3: sub ebx, esi */
    _flag_k = FK_CMP;
L_11032AB5:
    PUSH32(esp, 0x30u); /* 0x11032AB5: push 0x30 */
    PUSH32(esp, 1); /* 0x11032AB7: push 1 */
    ecx = ebp + (-0x58); /* 0x11032AB9: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_11014015); /* 0x11032ABC: call 0x11014015 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x11032AC1: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_11032AB5; /* 0x11032AC2: jne 0x11032ab5 */
L_11032AC4:
    RECOMP_BACKEDGE();
    goto L_11032923; /* 0x11032AC4: jmp 0x11032923 */
L_11032AC9:
    PUSH32(esp, ebx); /* 0x11032AC9: push ebx */
    ecx = edi; /* 0x11032ACA: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x11032ACC: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11032AD1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110326F8; /* 0x11032AD3: jne 0x110326f8 */
L_11032AD9:
    eax = ebp + (-0xA0); /* 0x11032AD9: lea eax, [ebp - 0xa0] */
    ecx = esi; /* 0x11032ADF: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11032AE1: push eax */
    RECOMP_CALL(sub_1102BC05); /* 0x11032AE2: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x11032AE7: mov ecx, dword ptr [ebp - 0x140] */
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x11032AED: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x11032AF0: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x11032AF4: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x140)) = ecx; /* 0x11032AF8: mov dword ptr [ebp - 0x140], ecx */
    MEM32(ebp + (-0x150)) = ecx; /* 0x11032AFE: mov dword ptr [ebp - 0x150], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_11032B5A; /* 0x11032B04: jbe 0x11032b5a */
L_11032B06:
    eax = ebp + (-0x88); /* 0x11032B06: lea eax, [ebp - 0x88] */
    ecx = esi; /* 0x11032B0C: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11032B0E: push eax */
    RECOMP_CALL(sub_1102BC05); /* 0x11032B0F: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11032B14: mov esi, eax */
    ecx = MEM32(ebp + (-0x140)); /* 0x11032B16: mov ecx, dword ptr [ebp - 0x140] */
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x11032B1C: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 7; /* 0x11032B1F: mov dword ptr [ebp - 4], 7 */
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11032B26: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x140)) = ecx; /* 0x11032B2A: mov dword ptr [ebp - 0x140], ecx */
    MEM32(ebp + (-0x150)) = ecx; /* 0x11032B30: mov dword ptr [ebp - 0x150], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_11032B3A; /* 0x11032B36: jb 0x11032b3a */
L_11032B38:
    esi = MEM32(esi); /* 0x11032B38: mov esi, dword ptr [esi] */
L_11032B3A:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x11032B3A: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032B4D; /* 0x11032B3E: jne 0x11032b4d */
L_11032B40:
    ecx = edi; /* 0x11032B40: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x11032B42: call 0x11022515 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x11032B47: mov ecx, dword ptr [ebp - 0x140] */
L_11032B4D:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x11032B4D: movzx eax, word ptr [edi + 6] */
    /* cmp MEM16(esi), LO16(eax) */ /* 0x11032B51: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032B5A; /* 0x11032B54: jne 0x11032b5a */
L_11032B56:
    SET_LO8(ebx, 1); /* 0x11032B56: mov bl, 1 */
    goto L_11032B5C; /* 0x11032B58: jmp 0x11032b5c */
L_11032B5A:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x11032B5A: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11032B5C:
    /* test LO8(ecx), 2 */ /* 0x11032B5C: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032B7F; /* 0x11032B5F: je 0x11032b7f */
L_11032B61:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ecx = ecx & 0xFFFFFFFDu; /* 0x11032B61: and ecx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x11032B64: push 0 */
    MEM32(ebp + (-0x140)) = ecx; /* 0x11032B66: mov dword ptr [ebp - 0x140], ecx */
    ecx = ebp + (-0x88); /* 0x11032B6C: lea ecx, [ebp - 0x88] */
    PUSH32(esp, 1); /* 0x11032B72: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x11032B74: call 0x1102261d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x11032B79: mov ecx, dword ptr [ebp - 0x140] */
L_11032B7F:
    MEM32(ebp + (-0x4)) = 3; /* 0x11032B7F: mov dword ptr [ebp - 4], 3 */
    /* test LO8(ecx), 1 */ /* 0x11032B86: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032BA3; /* 0x11032B89: je 0x11032ba3 */
L_11032B8B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x11032B8B: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x11032B8E: push 0 */
    MEM32(ebp + (-0x140)) = ecx; /* 0x11032B90: mov dword ptr [ebp - 0x140], ecx */
    ecx = ebp + (-0xA0); /* 0x11032B96: lea ecx, [ebp - 0xa0] */
    PUSH32(esp, 1); /* 0x11032B9C: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x11032B9E: call 0x1102261d */
    RECOMP_FLAGS_IN();
L_11032BA3:
    /* test LO8(ebx), LO8(ebx) */ /* 0x11032BA3: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032BDF; /* 0x11032BA5: je 0x11032bdf */
L_11032BA7:
    ecx = edi; /* 0x11032BA7: mov ecx, edi */
    RECOMP_CALL(sub_11021838); /* 0x11032BA9: call 0x11021838 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x148)); /* 0x11032BAE: mov esi, dword ptr [ebp - 0x148] */
    eax = ebp + (-0xD0); /* 0x11032BB4: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x11032BBA: push eax */
    ecx = esi; /* 0x11032BBB: mov ecx, esi */
    RECOMP_CALL(sub_1102BC05); /* 0x11032BBD: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11032BC2: push eax */
    ecx = ebp + (-0x40); /* 0x11032BC3: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_11031EF1); /* 0x11032BC6: call 0x11031ef1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11032BCB: push 0 */
    PUSH32(esp, 1); /* 0x11032BCD: push 1 */
    ecx = ebp + (-0xD0); /* 0x11032BCF: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_1102261D); /* 0x11032BD5: call 0x1102261d */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11032939; /* 0x11032BDA: jmp 0x11032939 */
L_11032BDF:
    esi = MEM32(ebp + (-0x148)); /* 0x11032BDF: mov esi, dword ptr [ebp - 0x148] */
    eax = ebp + (-0x130); /* 0x11032BE5: lea eax, [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x11032BEB: push eax */
    ecx = esi; /* 0x11032BEC: mov ecx, esi */
    RECOMP_CALL(sub_110380BA); /* 0x11032BEE: call 0x110380ba */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x11032BF3: mov ecx, dword ptr [ebp - 0x140] */
    _flag_a = (uint32_t)((ecx | 4)); _flag_b = (uint32_t)((ecx | 4));
    ecx = ecx | 4; /* 0x11032BF9: or ecx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x11032BFC: mov byte ptr [ebp - 4], 8 */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x11032C00: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x140)) = ecx; /* 0x11032C04: mov dword ptr [ebp - 0x140], ecx */
    MEM32(ebp + (-0x150)) = ecx; /* 0x11032C0A: mov dword ptr [ebp - 0x150], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_11032C66; /* 0x11032C10: jbe 0x11032c66 */
L_11032C12:
    eax = ebp + (-0x100); /* 0x11032C12: lea eax, [ebp - 0x100] */
    ecx = esi; /* 0x11032C18: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11032C1A: push eax */
    RECOMP_CALL(sub_110380BA); /* 0x11032C1B: call 0x110380ba */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11032C20: mov esi, eax */
    ecx = MEM32(ebp + (-0x140)); /* 0x11032C22: mov ecx, dword ptr [ebp - 0x140] */
    _flag_a = (uint32_t)((ecx | 8)); _flag_b = (uint32_t)((ecx | 8));
    ecx = ecx | 8; /* 0x11032C28: or ecx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 9; /* 0x11032C2B: mov dword ptr [ebp - 4], 9 */
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11032C32: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x140)) = ecx; /* 0x11032C36: mov dword ptr [ebp - 0x140], ecx */
    MEM32(ebp + (-0x150)) = ecx; /* 0x11032C3C: mov dword ptr [ebp - 0x150], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_11032C46; /* 0x11032C42: jb 0x11032c46 */
L_11032C44:
    esi = MEM32(esi); /* 0x11032C44: mov esi, dword ptr [esi] */
L_11032C46:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x11032C46: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032C59; /* 0x11032C4A: jne 0x11032c59 */
L_11032C4C:
    ecx = edi; /* 0x11032C4C: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x11032C4E: call 0x11022515 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x11032C53: mov ecx, dword ptr [ebp - 0x140] */
L_11032C59:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x11032C59: movzx eax, word ptr [edi + 6] */
    /* cmp MEM16(esi), LO16(eax) */ /* 0x11032C5D: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032C66; /* 0x11032C60: jne 0x11032c66 */
L_11032C62:
    SET_LO8(ebx, 1); /* 0x11032C62: mov bl, 1 */
    goto L_11032C68; /* 0x11032C64: jmp 0x11032c68 */
L_11032C66:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x11032C66: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11032C68:
    /* test LO8(ecx), 8 */ /* 0x11032C68: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032C8B; /* 0x11032C6B: je 0x11032c8b */
L_11032C6D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF7u);
    ecx = ecx & 0xFFFFFFF7u; /* 0x11032C6D: and ecx, 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x11032C70: push 0 */
    MEM32(ebp + (-0x140)) = ecx; /* 0x11032C72: mov dword ptr [ebp - 0x140], ecx */
    ecx = ebp + (-0x100); /* 0x11032C78: lea ecx, [ebp - 0x100] */
    PUSH32(esp, 1); /* 0x11032C7E: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x11032C80: call 0x1102261d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x11032C85: mov ecx, dword ptr [ebp - 0x140] */
L_11032C8B:
    MEM32(ebp + (-0x4)) = 3; /* 0x11032C8B: mov dword ptr [ebp - 4], 3 */
    /* test LO8(ecx), 4 */ /* 0x11032C92: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032CAF; /* 0x11032C95: je 0x11032caf */
L_11032C97:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFBu);
    ecx = ecx & 0xFFFFFFFBu; /* 0x11032C97: and ecx, 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x11032C9A: push 0 */
    MEM32(ebp + (-0x140)) = ecx; /* 0x11032C9C: mov dword ptr [ebp - 0x140], ecx */
    ecx = ebp + (-0x130); /* 0x11032CA2: lea ecx, [ebp - 0x130] */
    PUSH32(esp, 1); /* 0x11032CA8: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x11032CAA: call 0x1102261d */
    RECOMP_FLAGS_IN();
L_11032CAF:
    /* test LO8(ebx), LO8(ebx) */ /* 0x11032CAF: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032CF2; /* 0x11032CB1: je 0x11032cf2 */
L_11032CB3:
    ecx = edi; /* 0x11032CB3: mov ecx, edi */
    RECOMP_CALL(sub_11021838); /* 0x11032CB5: call 0x11021838 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x148)); /* 0x11032CBA: mov esi, dword ptr [ebp - 0x148] */
    eax = ebp + (-0xB8); /* 0x11032CC0: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x11032CC6: push eax */
    ecx = esi; /* 0x11032CC7: mov ecx, esi */
    RECOMP_CALL(sub_110380BA); /* 0x11032CC9: call 0x110380ba */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11032CCE: push eax */
    ecx = ebp + (-0x40); /* 0x11032CCF: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_11031EF1); /* 0x11032CD2: call 0x11031ef1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11032CD7: push 0 */
    PUSH32(esp, 1); /* 0x11032CD9: push 1 */
    ecx = ebp + (-0xB8); /* 0x11032CDB: lea ecx, [ebp - 0xb8] */
    RECOMP_CALL(sub_1102261D); /* 0x11032CE1: call 0x1102261d */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x141)) = (uint8_t)(1); /* 0x11032CE6: mov byte ptr [ebp - 0x141], 1 */
    RECOMP_BACKEDGE();
    goto L_11032939; /* 0x11032CED: jmp 0x11032939 */
L_11032CF2:
    ebx = MEM32(ebp + (-0x148)); /* 0x11032CF2: mov ebx, dword ptr [ebp - 0x148] */
    eax = ebp + (-0x118); /* 0x11032CF8: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x11032CFE: push eax */
    ecx = ebx; /* 0x11032CFF: mov ecx, ebx */
    RECOMP_CALL(sub_1102BC05); /* 0x11032D01: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11032D06: push 0 */
    PUSH32(esp, 1); /* 0x11032D08: push 1 */
    ecx = ebp + (-0x118); /* 0x11032D0A: lea ecx, [ebp - 0x118] */
    esi = MEM32(eax + 0x10); /* 0x11032D10: mov esi, dword ptr [eax + 0x10] */
    RECOMP_CALL(sub_1102261D); /* 0x11032D13: call 0x1102261d */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x11032D18: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032933; /* 0x11032D1A: je 0x11032933 */
L_11032D20:
    eax = ebp + (-0xE8); /* 0x11032D20: lea eax, [ebp - 0xe8] */
    ecx = ebx; /* 0x11032D26: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x11032D28: push eax */
    RECOMP_CALL(sub_110380BA); /* 0x11032D29: call 0x110380ba */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11032D2E: push 0 */
    PUSH32(esp, 1); /* 0x11032D30: push 1 */
    ecx = ebp + (-0xE8); /* 0x11032D32: lea ecx, [ebp - 0xe8] */
    esi = MEM32(eax + 0x10); /* 0x11032D38: mov esi, dword ptr [eax + 0x10] */
    RECOMP_CALL(sub_1102261D); /* 0x11032D3B: call 0x1102261d */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x138)); /* 0x11032D40: mov ebx, dword ptr [ebp - 0x138] */
    /* test esi, esi */ /* 0x11032D46: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x13C)); /* 0x11032D48: mov eax, dword ptr [ebp - 0x13c] */
    esi = MEM32(ebp + (-0x148)); /* 0x11032D4E: mov esi, dword ptr [ebp - 0x148] */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110326FE; /* 0x11032D54: jne 0x110326fe */
L_11032D5A:
    MEM8(ebp + (-0x141)) = (uint8_t)(1); /* 0x11032D5A: mov byte ptr [ebp - 0x141], 1 */
    RECOMP_BACKEDGE();
    goto L_110326FE; /* 0x11032D61: jmp 0x110326fe */
L_11032D66:
    eax = ebp + (-0x28); /* 0x11032D66: lea eax, [ebp - 0x28] */
    ecx = esi; /* 0x11032D69: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11032D6B: push eax */
    RECOMP_CALL(sub_11037B56); /* 0x11032D6C: call 0x11037b56 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x160)); /* 0x11032D71: mov eax, dword ptr [ebp - 0x160] */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x11032D77: mov byte ptr [ebp - 4], 5 */
    /* test MEM8(eax + 0x14), 8 */ /* 0x11032D7B: test byte ptr [eax + 0x14], 8 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11032DAE; /* 0x11032D7F: jne 0x11032dae */
L_11032D81:
    PUSH32(esp, ebx); /* 0x11032D81: push ebx */
    ecx = edi; /* 0x11032D82: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x11032D84: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11032D89: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11032DAE; /* 0x11032D8B: jne 0x11032dae */
L_11032D8D:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x11032D8D: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032D99; /* 0x11032D90: jne 0x11032d99 */
L_11032D92:
    ecx = edi; /* 0x11032D92: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x11032D94: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11032D99:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11032D99: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = (uint32_t)MEM16(edi + 0x6); /* 0x11032D9D: movzx ecx, word ptr [edi + 6] */
    eax = MEM32(ebp + (-0x28)); /* 0x11032DA1: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11032DA9; /* 0x11032DA4: jae 0x11032da9 */
L_11032DA6:
    eax = ebp + (-0x28); /* 0x11032DA6: lea eax, [ebp - 0x28] */
L_11032DA9:
    /* cmp LO16(ecx), MEM16(eax) */ /* 0x11032DA9: cmp cx, word ptr [eax] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032DEA; /* 0x11032DAC: jne 0x11032dea */
L_11032DAE:
    /* cmp MEM32(ebp + (-0x13C)), 3 */ /* 0x11032DAE: cmp dword ptr [ebp - 0x13c], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x13C))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032DF4; /* 0x11032DB5: jne 0x11032df4 */
L_11032DB7:
    /* cmp MEM32(ebp + (-0x30)), 1 */ /* 0x11032DB7: cmp dword ptr [ebp - 0x30], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11032DF4; /* 0x11032DBB: ja 0x11032df4 */
L_11032DBD:
    PUSH32(esp, ebx); /* 0x11032DBD: push ebx */
    ecx = edi; /* 0x11032DBE: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x11032DC0: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11032DC5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11032DEA; /* 0x11032DC7: jne 0x11032dea */
L_11032DC9:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x11032DC9: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032DD5; /* 0x11032DCC: jne 0x11032dd5 */
L_11032DCE:
    ecx = edi; /* 0x11032DCE: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x11032DD0: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11032DD5:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11032DD5: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = (uint32_t)MEM16(edi + 0x6); /* 0x11032DD9: movzx ecx, word ptr [edi + 6] */
    eax = MEM32(ebp + (-0x28)); /* 0x11032DDD: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11032DE5; /* 0x11032DE0: jae 0x11032de5 */
L_11032DE2:
    eax = ebp + (-0x28); /* 0x11032DE2: lea eax, [ebp - 0x28] */
L_11032DE5:
    /* cmp LO16(ecx), MEM16(eax) */ /* 0x11032DE5: cmp cx, word ptr [eax] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11032DF4; /* 0x11032DE8: je 0x11032df4 */
L_11032DEA:
    PUSH32(esp, 0); /* 0x11032DEA: push 0 */
    ecx = ebp + (-0x28); /* 0x11032DEC: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_110278E7); /* 0x11032DEF: call 0x110278e7 */
    RECOMP_FLAGS_IN();
L_11032DF4:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11032DF4: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x28)); /* 0x11032DF8: mov esi, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11032E38; /* 0x11032DFB: jae 0x11032e38 */
L_11032DFD:
    esi = ebp + (-0x28); /* 0x11032DFD: lea esi, [ebp - 0x28] */
    goto L_11032E38; /* 0x11032E00: jmp 0x11032e38 */
L_11032E02:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11032E02: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x11032E06: mov ecx, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11032E0E; /* 0x11032E09: jae 0x11032e0e */
L_11032E0B:
    ecx = ebp + (-0x28); /* 0x11032E0B: lea ecx, [ebp - 0x28] */
L_11032E0E:
    eax = MEM32(ebp + (-0x18)); /* 0x11032E0E: mov eax, dword ptr [ebp - 0x18] */
    eax = ecx + eax * 2; /* 0x11032E11: lea eax, [ecx + eax*2] */
    /* cmp esi, eax */ /* 0x11032E14: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11032E44; /* 0x11032E16: je 0x11032e44 */
L_11032E18:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x11032E18: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032E25; /* 0x11032E1C: jne 0x11032e25 */
L_11032E1E:
    ecx = edi; /* 0x11032E1E: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x11032E20: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11032E25:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x11032E25: movzx eax, word ptr [edi + 6] */
    /* cmp LO16(eax), MEM16(esi) */ /* 0x11032E29: cmp ax, word ptr [esi] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032E44; /* 0x11032E2C: jne 0x11032e44 */
L_11032E2E:
    ecx = edi; /* 0x11032E2E: mov ecx, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x11032E30: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11021838); /* 0x11032E33: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_11032E38:
    PUSH32(esp, ebx); /* 0x11032E38: push ebx */
    ecx = edi; /* 0x11032E39: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x11032E3B: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11032E40: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032E02; /* 0x11032E42: je 0x11032e02 */
L_11032E44:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11032E44: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x11032E48: mov ecx, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11032E50; /* 0x11032E4B: jae 0x11032e50 */
L_11032E4D:
    ecx = ebp + (-0x28); /* 0x11032E4D: lea ecx, [ebp - 0x28] */
L_11032E50:
    eax = MEM32(ebp + (-0x18)); /* 0x11032E50: mov eax, dword ptr [ebp - 0x18] */
    eax = ecx + eax * 2; /* 0x11032E53: lea eax, [ecx + eax*2] */
    /* cmp esi, eax */ /* 0x11032E56: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11032E61; /* 0x11032E58: je 0x11032e61 */
L_11032E5A:
    MEM8(ebp + (-0x131)) = (uint8_t)(1); /* 0x11032E5A: mov byte ptr [ebp - 0x131], 1 */
L_11032E61:
    PUSH32(esp, 0); /* 0x11032E61: push 0 */
    PUSH32(esp, 1); /* 0x11032E63: push 1 */
    ecx = ebp + (-0x28); /* 0x11032E65: lea ecx, [ebp - 0x28] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11032E68: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_1102261D); /* 0x11032E6C: call 0x1102261d */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x148)); /* 0x11032E71: mov esi, dword ptr [ebp - 0x148] */
    RECOMP_BACKEDGE();
    goto L_110326F8; /* 0x11032E77: jmp 0x110326f8 */
L_11032E7C:
    eax = MEM32(ebp + (-0x13C)); /* 0x11032E7C: mov eax, dword ptr [ebp - 0x13c] */
    /* cmp eax, 3 */ /* 0x11032E82: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110326FE; /* 0x11032E85: je 0x110326fe */
L_11032E8B:
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x11032E8B: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x11032E91: mov ecx, edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x11032E93: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_110278AC); /* 0x11032E95: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11032E9A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11032EE2; /* 0x11032E9C: jne 0x11032ee2 */
L_11032E9E:
    esi = MEM32(ebp + (-0x138)); /* 0x11032E9E: mov esi, dword ptr [ebp - 0x138] */
L_11032EA4:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x11032EA4: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032EB1; /* 0x11032EA8: jne 0x11032eb1 */
L_11032EAA:
    ecx = edi; /* 0x11032EAA: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x11032EAC: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11032EB1:
    ecx = MEM32(ebp + (-0x15C)); /* 0x11032EB1: mov ecx, dword ptr [ebp - 0x15c] */
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x11032EB7: movzx eax, word ptr [edi + 6] */
    PUSH32(esp, eax); /* 0x11032EBB: push eax */
    PUSH32(esp, 0x48u); /* 0x11032EBC: push 0x48 */
    edx = MEM32(ecx); /* 0x11032EBE: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x11032EC0: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11032EC3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032EDC; /* 0x11032EC5: je 0x11032edc */
L_11032EC7:
    ecx = edi; /* 0x11032EC7: mov ecx, edi */
    SET_LO8(ebx, 1); /* 0x11032EC9: mov bl, 1 */
    RECOMP_CALL(sub_11021838); /* 0x11032ECB: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11032ED0: push esi */
    ecx = edi; /* 0x11032ED1: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x11032ED3: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11032ED8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032EA4; /* 0x11032EDA: je 0x11032ea4 */
L_11032EDC:
    esi = MEM32(ebp + (-0x148)); /* 0x11032EDC: mov esi, dword ptr [ebp - 0x148] */
L_11032EE2:
    eax = MEM32(ebp + (-0x13C)); /* 0x11032EE2: mov eax, dword ptr [ebp - 0x13c] */
    /* cmp MEM8(ebp + eax + (-0x158)), 0x20u */ /* 0x11032EE8: cmp byte ptr [ebp + eax - 0x158], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0x158))) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032F0C; /* 0x11032EF0: jne 0x11032f0c */
L_11032EF2:
    /* test LO8(ebx), LO8(ebx) */ /* 0x11032EF2: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = MEM32(ebp + (-0x138)); /* 0x11032EF4: mov ebx, dword ptr [ebp - 0x138] */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110326FE; /* 0x11032EFA: jne 0x110326fe */
L_11032F00:
    MEM8(ebp + (-0x131)) = (uint8_t)(1); /* 0x11032F00: mov byte ptr [ebp - 0x131], 1 */
    RECOMP_BACKEDGE();
    goto L_110326FE; /* 0x11032F07: jmp 0x110326fe */
L_11032F0C:
    ebx = MEM32(ebp + (-0x138)); /* 0x11032F0C: mov ebx, dword ptr [ebp - 0x138] */
    RECOMP_BACKEDGE();
    goto L_110326FE; /* 0x11032F12: jmp 0x110326fe */
L_11032F17:
    eax = ebp + (-0x40); /* 0x11032F17: lea eax, [ebp - 0x40] */
L_11032F1A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x11032F1A: add esi, 2 */
    _flag_k = FK_ADD;
    eax = eax + ebx * 2; /* 0x11032F1D: lea eax, [eax + ebx*2] */
    /* cmp esi, eax */ /* 0x11032F20: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11032F68; /* 0x11032F22: je 0x11032f68 */
L_11032F24:
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x11032F24: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x11032F2A: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x11032F2C: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11032F31: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11032F5F; /* 0x11032F33: jne 0x11032f5f */
L_11032F35:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x11032F35: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032F41; /* 0x11032F38: jne 0x11032f41 */
L_11032F3A:
    ecx = edi; /* 0x11032F3A: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x11032F3C: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11032F41:
    SET_LO16(eax, MEM16(edi + 0x6)); /* 0x11032F41: mov ax, word ptr [edi + 6] */
    /* cmp LO16(eax), MEM16(esi) */ /* 0x11032F45: cmp ax, word ptr [esi] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032F5F; /* 0x11032F48: jne 0x11032f5f */
L_11032F4A:
    ecx = edi; /* 0x11032F4A: mov ecx, edi */
    RECOMP_CALL(sub_11021838); /* 0x11032F4C: call 0x11021838 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x2C)); /* 0x11032F51: mov edx, dword ptr [ebp - 0x2c] */
    ebx = MEM32(ebp + (-0x30)); /* 0x11032F54: mov ebx, dword ptr [ebp - 0x30] */
    ecx = MEM32(ebp + (-0x40)); /* 0x11032F57: mov ecx, dword ptr [ebp - 0x40] */
    RECOMP_BACKEDGE();
    goto L_11032733; /* 0x11032F5A: jmp 0x11032733 */
L_11032F5F:
    edx = MEM32(ebp + (-0x2C)); /* 0x11032F5F: mov edx, dword ptr [ebp - 0x2c] */
    ebx = MEM32(ebp + (-0x30)); /* 0x11032F62: mov ebx, dword ptr [ebp - 0x30] */
    ecx = MEM32(ebp + (-0x40)); /* 0x11032F65: mov ecx, dword ptr [ebp - 0x40] */
L_11032F68:
    /* cmp edx, 8 */ /* 0x11032F68: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11032F70; /* 0x11032F6B: jae 0x11032f70 */
L_11032F6D:
    ecx = ebp + (-0x40); /* 0x11032F6D: lea ecx, [ebp - 0x40] */
L_11032F70:
    eax = ecx + ebx * 2; /* 0x11032F70: lea eax, [ecx + ebx*2] */
    /* cmp esi, eax */ /* 0x11032F73: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11032F91; /* 0x11032F75: jne 0x11032f91 */
L_11032F77:
    SET_LO8(eax, MEM8(ebp + (-0x141))); /* 0x11032F77: mov al, byte ptr [ebp - 0x141] */
    /* test LO8(eax), LO8(eax) */ /* 0x11032F7D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11032F9B; /* 0x11032F7F: je 0x11032f9b */
L_11032F81:
    PUSH32(esp, 0x2Du); /* 0x11032F81: push 0x2d */
    PUSH32(esp, 1); /* 0x11032F83: push 1 */
    PUSH32(esp, 0); /* 0x11032F85: push 0 */
    ecx = ebp + (-0x58); /* 0x11032F87: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_110297AC); /* 0x11032F8A: call 0x110297ac */
    RECOMP_FLAGS_IN();
    goto L_11032F9B; /* 0x11032F8F: jmp 0x11032f9b */
L_11032F91:
    PUSH32(esp, 0); /* 0x11032F91: push 0 */
    ecx = ebp + (-0x58); /* 0x11032F93: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_11010B2D); /* 0x11032F96: call 0x11010b2d */
    RECOMP_FLAGS_IN();
L_11032F9B:
    ebx = MEM32(ebp + (-0x180)); /* 0x11032F9B: mov ebx, dword ptr [ebp - 0x180] */
    eax = ebp + (-0x58); /* 0x11032FA1: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x11032FA4: push eax */
    ecx = ebx; /* 0x11032FA5: mov ecx, ebx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0; /* 0x11032FA7: and dword ptr [ebx + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x14) = 0xFu; /* 0x11032FAB: mov dword ptr [ebx + 0x14], 0xf */
    MEM8(ebx) = (uint8_t)(0); /* 0x11032FB2: mov byte ptr [ebx], 0 */
    RECOMP_CALL(sub_11010405); /* 0x11032FB5: call 0x11010405 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11032FBA: push 0 */
    PUSH32(esp, 1); /* 0x11032FBC: push 1 */
    ecx = ebp + (-0x58); /* 0x11032FBE: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_11010630); /* 0x11032FC1: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11032FC6: push 0 */
    PUSH32(esp, 1); /* 0x11032FC8: push 1 */
    ecx = ebp + (-0x40); /* 0x11032FCA: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_1102261D); /* 0x11032FCD: call 0x1102261d */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x11032FD2: mov eax, ebx */
    RECOMP_CALL(sub_1103B354); /* 0x11032FD4: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x11032FD9: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_11032FDC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11032FDCu);

L_11032FDC:
    PUSH32(esp, 0x178u); /* 0x11032FDC: push 0x178 */
    eax = 0x1103F105u; /* 0x11032FE1: mov eax, 0x1103f105 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11032FE6: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11032FEB: mov eax, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + 0x10); /* 0x11032FEE: mov ebx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x18); /* 0x11032FF1: mov ecx, dword ptr [ebp + 0x18] */
    edi = MEM32(ebp + 0xC); /* 0x11032FF4: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x180)) = eax; /* 0x11032FF7: mov dword ptr [ebp - 0x180], eax */
    eax = MEM32(ebp + 0x1C); /* 0x11032FFD: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x154)) = eax; /* 0x11033000: mov dword ptr [ebp - 0x154], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11033006: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x138)) = ebx; /* 0x11033008: mov dword ptr [ebp - 0x138], ebx */
    MEM32(ebp + (-0x160)) = ecx; /* 0x1103300E: mov dword ptr [ebp - 0x160], ecx */
    MEM32(ebp + (-0x140)) = eax; /* 0x11033014: mov dword ptr [ebp - 0x140], eax */
    MEM32(ebp + (-0x150)) = eax; /* 0x1103301A: mov dword ptr [ebp - 0x150], eax */
    /* cmp MEM8(ebp + 0x14), LO8(eax) */ /* 0x11033020: cmp byte ptr [ebp + 0x14], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103304C; /* 0x11033023: je 0x1103304c */
L_11033025:
    eax = ebp + (-0x174); /* 0x11033025: lea eax, [ebp - 0x174] */
    PUSH32(esp, eax); /* 0x1103302B: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1103302C: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11033031: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11033035: push eax */
    RECOMP_CALL(sub_11031ACF); /* 0x11033036: call 0x11031acf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103303B: pop ecx */
    esi = eax; /* 0x1103303C: mov esi, eax */
    ecx = ebp + (-0x174); /* 0x1103303E: lea ecx, [ebp - 0x174] */
    MEM32(ebp + (-0x148)) = esi; /* 0x11033044: mov dword ptr [ebp - 0x148], esi */
    goto L_11033074; /* 0x1103304A: jmp 0x11033074 */
L_1103304C:
    eax = ebp + (-0x178); /* 0x1103304C: lea eax, [ebp - 0x178] */
    PUSH32(esp, eax); /* 0x11033052: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11033053: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11033058: push eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x11033059: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11031B69); /* 0x11033060: call 0x11031b69 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11033065: pop ecx */
    esi = eax; /* 0x11033066: mov esi, eax */
    MEM32(ebp + (-0x148)) = eax; /* 0x11033068: mov dword ptr [ebp - 0x148], eax */
    ecx = ebp + (-0x178); /* 0x1103306E: lea ecx, [ebp - 0x178] */
L_11033074:
    RECOMP_CALL(sub_1100E431); /* 0x11033074: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0; /* 0x11033079: and dword ptr [ebp - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1103307D: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x141)) = (uint8_t)(LO8(eax)); /* 0x1103307F: mov byte ptr [ebp - 0x141], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11033085: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x131)) = (uint8_t)(0); /* 0x11033087: mov byte ptr [ebp - 0x131], 0 */
    MEM32(ebp + (-0x2C)) = 7; /* 0x1103308E: mov dword ptr [ebp - 0x2c], 7 */
    MEM16(ebp + (-0x40)) = (uint16_t)(LO16(eax)); /* 0x11033095: mov word ptr [ebp - 0x40], ax */
    eax = MEM32(esi); /* 0x11033099: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x158); /* 0x1103309B: lea ecx, [ebp - 0x158] */
    PUSH32(esp, ecx); /* 0x110330A1: push ecx */
    ecx = esi; /* 0x110330A2: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 2; /* 0x110330A4: mov dword ptr [ebp - 4], 2 */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x110330AB: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x110330AE: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x110330B2: mov dword ptr [ebp - 0x44], 0xf */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x110330B9: mov byte ptr [ebp - 0x58], 0 */
    ecx = MEM32(ebp + (-0x160)); /* 0x110330BD: mov ecx, dword ptr [ebp - 0x160] */
    eax = ebp + (-0x16C); /* 0x110330C3: lea eax, [ebp - 0x16c] */
    PUSH32(esp, eax); /* 0x110330C9: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x110330CA: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_1100F94A); /* 0x110330CE: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110330D3: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x110330D4: mov byte ptr [ebp - 4], 4 */
    RECOMP_CALL(sub_11010FA4); /* 0x110330D8: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110330DD: pop ecx */
    ecx = ebp + (-0x16C); /* 0x110330DE: lea ecx, [ebp - 0x16c] */
    MEM32(ebp + (-0x15C)) = eax; /* 0x110330E4: mov dword ptr [ebp - 0x15c], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x110330EA: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_1100E431); /* 0x110330EE: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x15C)); /* 0x110330F3: mov eax, dword ptr [ebp - 0x15c] */
    ecx = eax; /* 0x110330F9: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0x154))); /* 0x110330FB: push dword ptr [ebp - 0x154] */
    PUSH32(esp, 0x110035BBu); /* 0x11033101: push 0x110035bb */
    edx = MEM32(eax); /* 0x11033106: mov edx, dword ptr [eax] */
    PUSH32(esp, 0x110035B0u); /* 0x11033108: push 0x110035b0 */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x1103310D: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x13C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x13C)) = MEM32(ebp + (-0x13C)) & 0; /* 0x11033110: and dword ptr [ebp - 0x13c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(ebp + (-0x131))); /* 0x11033117: mov al, byte ptr [ebp - 0x131] */
L_1103311D:
    /* cmp MEM32(ebp + (-0x13C)), 4 */ /* 0x1103311D: cmp dword ptr [ebp - 0x13c], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x13C))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11033173; /* 0x11033124: jae 0x11033173 */
L_11033126:
    eax = MEM32(ebp + (-0x13C)); /* 0x11033126: mov eax, dword ptr [ebp - 0x13c] */
    eax = (int32_t)(int8_t)MEM8(ebp + eax + (-0x158)); /* 0x1103312C: movsx eax, byte ptr [ebp + eax - 0x158] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x11033134: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_110338E0; /* 0x11033137: je 0x110338e0 */
L_1103313D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x1103313D: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_110337CA; /* 0x11033140: je 0x110337ca */
L_11033146:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x11033146: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1103352D; /* 0x11033149: je 0x1103352d */
L_1103314F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x4Bu; /* 0x1103314F: sub eax, 0x4b */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_110331A7; /* 0x11033152: je 0x110331a7 */
L_11033154:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11033154: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11033155: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_110338E0; /* 0x11033156: je 0x110338e0 */
L_1103315C:
    eax = MEM32(ebp + (-0x13C)); /* 0x1103315C: mov eax, dword ptr [ebp - 0x13c] */
L_11033162:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11033162: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x13C)) = eax; /* 0x11033163: mov dword ptr [ebp - 0x13c], eax */
    SET_LO8(eax, MEM8(ebp + (-0x131))); /* 0x11033169: mov al, byte ptr [ebp - 0x131] */
    /* test LO8(eax), LO8(eax) */ /* 0x1103316F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103311D; /* 0x11033171: je 0x1103311d */
L_11033173:
    /* test LO8(eax), LO8(eax) */ /* 0x11033173: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110339F5; /* 0x11033175: jne 0x110339f5 */
L_1103317B:
    ebx = MEM32(ebp + (-0x30)); /* 0x1103317B: mov ebx, dword ptr [ebp - 0x30] */
    /* cmp ebx, 1 */ /* 0x1103317E: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_110339DB; /* 0x11033181: jbe 0x110339db */
L_11033187:
    edx = MEM32(ebp + (-0x2C)); /* 0x11033187: mov edx, dword ptr [ebp - 0x2c] */
    ecx = MEM32(ebp + (-0x40)); /* 0x1103318A: mov ecx, dword ptr [ebp - 0x40] */
    esi = ecx; /* 0x1103318D: mov esi, ecx */
    /* cmp edx, 8 */ /* 0x1103318F: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110331A0; /* 0x11033192: jae 0x110331a0 */
L_11033194:
    esi = ebp + (-0x40); /* 0x11033194: lea esi, [ebp - 0x40] */
L_11033197:
    /* cmp edx, 8 */ /* 0x11033197: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1103397B; /* 0x1103319A: jb 0x1103397b */
L_110331A0:
    eax = ecx; /* 0x110331A0: mov eax, ecx */
    goto L_1103397E; /* 0x110331A2: jmp 0x1103397e */
L_110331A7:
    eax = MEM32(esi); /* 0x110331A7: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x110331A9: mov ecx, esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14C)) = MEM32(ebp + (-0x14C)) & 0; /* 0x110331AB: and dword ptr [ebp - 0x14c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x110331B2: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x110331B5: mov ebx, eax */
    ecx = esi; /* 0x110331B7: mov ecx, esi */
    eax = ebp + (-0x70); /* 0x110331B9: lea eax, [ebp - 0x70] */
    MEM32(ebp + (-0x164)) = ebx; /* 0x110331BC: mov dword ptr [ebp - 0x164], ebx */
    PUSH32(esp, eax); /* 0x110331C2: push eax */
    RECOMP_CALL(sub_110292E9); /* 0x110331C3: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x60)), 0 */ /* 0x110331C8: cmp dword ptr [ebp - 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x110331CC: mov byte ptr [ebp - 4], 0xa */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110333BA; /* 0x110331D0: je 0x110333ba */
L_110331D6:
    eax = MEM32(esi); /* 0x110331D6: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x110331D8: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x110331DA: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x110331DD: movzx eax, ax */
    MEM32(ebp + (-0x17C)) = eax; /* 0x110331E0: mov dword ptr [ebp - 0x17c], eax */
    /* test LO16(eax), LO16(eax) */ /* 0x110331E6: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110333BA; /* 0x110331E9: je 0x110333ba */
L_110331EF:
    /* cmp MEM32(ebp + (-0x5C)), 0x10u */ /* 0x110331EF: cmp dword ptr [ebp - 0x5c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x70)); /* 0x110331F3: mov eax, dword ptr [ebp - 0x70] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110331FB; /* 0x110331F6: jae 0x110331fb */
L_110331F8:
    eax = ebp + (-0x70); /* 0x110331F8: lea eax, [ebp - 0x70] */
L_110331FB:
    /* cmp MEM8(eax), 0x7Fu */ /* 0x110331FB: cmp byte ptr [eax], 0x7f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_110333BA; /* 0x110331FE: jae 0x110333ba */
L_11033204:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11033204: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x11033206: mov dword ptr [ebp - 0x14], 0xf */
    PUSH32(esp, ebx); /* 0x1103320D: push ebx */
    PUSH32(esp, 1); /* 0x1103320E: push 1 */
    ecx = ebp + (-0x28); /* 0x11033210: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x11033213: mov dword ptr [ebp - 0x18], ebx */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(ebx)); /* 0x11033216: mov byte ptr [ebp - 0x28], bl */
    RECOMP_CALL(sub_11014076); /* 0x11033219: call 0x11014076 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x1103321E: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x11033224: mov ecx, edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x11033226: mov byte ptr [ebp - 4], 0xb */
    esi = ebx; /* 0x1103322A: mov esi, ebx */
    RECOMP_CALL(sub_110278AC); /* 0x1103322C: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11033231: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11033321; /* 0x11033233: jne 0x11033321 */
L_11033239:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x11033239: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11033246; /* 0x1103323D: jne 0x11033246 */
L_1103323F:
    ecx = edi; /* 0x1103323F: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x11033241: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11033246:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x11033246: movzx eax, word ptr [edi + 6] */
    PUSH32(esp, eax); /* 0x1103324A: push eax */
    PUSH32(esp, MEM32(ebp + (-0x154))); /* 0x1103324B: push dword ptr [ebp - 0x154] */
    RECOMP_CALL(sub_1101503D); /* 0x11033251: call 0x1101503d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11033256: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11033257: pop ecx */
    /* cmp eax, 0xAu */ /* 0x11033258: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103329B; /* 0x1103325B: jae 0x1103329b */
L_1103325D:
    SET_LO8(eax, MEM8(eax + 0x110035B0)); /* 0x1103325D: mov al, byte ptr [eax + 0x110035b0] */
    ecx = ebp + (-0x58); /* 0x11033263: lea ecx, [ebp - 0x58] */
    MEM8(ebp + (-0x168)) = (uint8_t)(LO8(eax)); /* 0x11033266: mov byte ptr [ebp - 0x168], al */
    PUSH32(esp, MEM32(ebp + (-0x168))); /* 0x1103326C: push dword ptr [ebp - 0x168] */
    PUSH32(esp, 1); /* 0x11033272: push 1 */
    RECOMP_CALL(sub_11014015); /* 0x11033274: call 0x11014015 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11033279: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x1103327D: mov eax, dword ptr [ebp - 0x28] */
    ecx = eax; /* 0x11033280: mov ecx, eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11033287; /* 0x11033282: jae 0x11033287 */
L_11033284:
    ecx = ebp + (-0x28); /* 0x11033284: lea ecx, [ebp - 0x28] */
L_11033287:
    /* cmp MEM8(ecx + esi), 0x7Fu */ /* 0x11033287: cmp byte ptr [ecx + esi], 0x7f */
    _flag_a = (uint32_t)(MEM8(ecx + esi)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110332DE; /* 0x1103328B: je 0x110332de */
L_1103328D:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1103328D: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11033296; /* 0x11033291: jae 0x11033296 */
L_11033293:
    eax = ebp + (-0x28); /* 0x11033293: lea eax, [ebp - 0x28] */
L_11033296:
    _flag_a = (uint32_t)(MEM8(eax + esi)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(eax + esi) = (uint8_t)(MEM8(eax + esi) + 1); /* 0x11033296: inc byte ptr [eax + esi] */
    _flag_k = FK_NARROW(FK_INC, 24);
    goto L_110332DE; /* 0x11033299: jmp 0x110332de */
L_1103329B:
    ecx = MEM32(ebp + (-0x14)); /* 0x1103329B: mov ecx, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x28)); /* 0x1103329E: mov ebx, dword ptr [ebp - 0x28] */
    eax = ebx; /* 0x110332A1: mov eax, ebx */
    /* cmp ecx, 0x10u */ /* 0x110332A3: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110332AB; /* 0x110332A6: jae 0x110332ab */
L_110332A8:
    eax = ebp + (-0x28); /* 0x110332A8: lea eax, [ebp - 0x28] */
L_110332AB:
    /* cmp MEM8(eax + esi), 0 */ /* 0x110332AB: cmp byte ptr [eax + esi], 0 */
    _flag_a = (uint32_t)(MEM8(eax + esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11033300; /* 0x110332AF: je 0x11033300 */
L_110332B1:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x110332B1: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110332C4; /* 0x110332B5: jne 0x110332c4 */
L_110332B7:
    ecx = edi; /* 0x110332B7: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x110332B9: call 0x11022515 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x28)); /* 0x110332BE: mov ebx, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x14)); /* 0x110332C1: mov ecx, dword ptr [ebp - 0x14] */
L_110332C4:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x110332C4: movzx eax, word ptr [edi + 6] */
    /* cmp LO16(eax), MEM16(ebp + (-0x17C)) */ /* 0x110332C8: cmp ax, word ptr [ebp - 0x17c] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x17C))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11033300; /* 0x110332CF: jne 0x11033300 */
L_110332D1:
    PUSH32(esp, 0); /* 0x110332D1: push 0 */
    PUSH32(esp, 1); /* 0x110332D3: push 1 */
    ecx = ebp + (-0x28); /* 0x110332D5: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11014015); /* 0x110332D8: call 0x11014015 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x110332DD: inc esi */
    _flag_k = FK_INC;
L_110332DE:
    ecx = edi; /* 0x110332DE: mov ecx, edi */
    RECOMP_CALL(sub_11021838); /* 0x110332E0: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x110332E5: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x110332EB: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x110332ED: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110332F2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033239; /* 0x110332F4: je 0x11033239 */
L_110332FA:
    ebx = MEM32(ebp + (-0x28)); /* 0x110332FA: mov ebx, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x14)); /* 0x110332FD: mov ecx, dword ptr [ebp - 0x14] */
L_11033300:
    /* test esi, esi */ /* 0x11033300: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033324; /* 0x11033302: je 0x11033324 */
L_11033304:
    eax = ebx; /* 0x11033304: mov eax, ebx */
    /* cmp ecx, 0x10u */ /* 0x11033306: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103330E; /* 0x11033309: jae 0x1103330e */
L_1103330B:
    eax = ebp + (-0x28); /* 0x1103330B: lea eax, [ebp - 0x28] */
L_1103330E:
    /* cmp MEM8(eax + esi), 0 */ /* 0x1103330E: cmp byte ptr [eax + esi], 0 */
    _flag_a = (uint32_t)(MEM8(eax + esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_11033317; /* 0x11033312: jle 0x11033317 */
L_11033314:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11033314: inc esi */
    _flag_k = FK_INC;
    goto L_11033324; /* 0x11033315: jmp 0x11033324 */
L_11033317:
    SET_LO8(eax, 1); /* 0x11033317: mov al, 1 */
    MEM8(ebp + (-0x131)) = (uint8_t)(LO8(eax)); /* 0x11033319: mov byte ptr [ebp - 0x131], al */
    goto L_1103332A; /* 0x1103331F: jmp 0x1103332a */
L_11033321:
    ebx = MEM32(ebp + (-0x28)); /* 0x11033321: mov ebx, dword ptr [ebp - 0x28] */
L_11033324:
    SET_LO8(eax, MEM8(ebp + (-0x131))); /* 0x11033324: mov al, byte ptr [ebp - 0x131] */
L_1103332A:
    /* cmp MEM32(ebp + (-0x5C)), 0x10u */ /* 0x1103332A: cmp dword ptr [ebp - 0x5c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x70)); /* 0x1103332E: mov edx, dword ptr [ebp - 0x70] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11033336; /* 0x11033331: jae 0x11033336 */
L_11033333:
    edx = ebp + (-0x70); /* 0x11033333: lea edx, [ebp - 0x70] */
L_11033336:
    /* test LO8(eax), LO8(eax) */ /* 0x11033336: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103337B; /* 0x11033338: jne 0x1103337b */
L_1103333A:
    /* test esi, esi */ /* 0x1103333A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110333A8; /* 0x1103333C: je 0x110333a8 */
L_1103333E:
    SET_LO8(ecx, MEM8(edx)); /* 0x1103333E: mov cl, byte ptr [edx] */
    /* cmp LO8(ecx), 0x7Fu */ /* 0x11033340: cmp cl, 0x7f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110333A8; /* 0x11033343: je 0x110333a8 */
L_11033345:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x11033345: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11033358; /* 0x11033346: je 0x11033358 */
L_11033348:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11033348: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebx; /* 0x1103334C: mov eax, ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11033353; /* 0x1103334E: jae 0x11033353 */
L_11033350:
    eax = ebp + (-0x28); /* 0x11033350: lea eax, [ebp - 0x28] */
L_11033353:
    /* cmp LO8(ecx), MEM8(eax + esi) */ /* 0x11033353: cmp cl, byte ptr [eax + esi] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11033374; /* 0x11033356: jne 0x11033374 */
L_11033358:
    /* test esi, esi */ /* 0x11033358: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103336B; /* 0x1103335A: jne 0x1103336b */
L_1103335C:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1103335C: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebx; /* 0x11033360: mov eax, ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11033367; /* 0x11033362: jae 0x11033367 */
L_11033364:
    eax = ebp + (-0x28); /* 0x11033364: lea eax, [ebp - 0x28] */
L_11033367:
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x11033367: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_11033374; /* 0x11033369: jl 0x11033374 */
L_1103336B:
    /* cmp MEM8(edx + 0x1), 0 */ /* 0x1103336B: cmp byte ptr [edx + 1], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103333A; /* 0x1103336F: jle 0x1103333a */
L_11033371:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11033371: inc edx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1103333A; /* 0x11033372: jmp 0x1103333a */
L_11033374:
    MEM8(ebp + (-0x131)) = (uint8_t)(1); /* 0x11033374: mov byte ptr [ebp - 0x131], 1 */
L_1103337B:
    PUSH32(esp, 0); /* 0x1103337B: push 0 */
    PUSH32(esp, 1); /* 0x1103337D: push 1 */
    ecx = ebp + (-0x28); /* 0x1103337F: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x11033382: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_11033387:
    PUSH32(esp, 0); /* 0x11033387: push 0 */
    PUSH32(esp, 1); /* 0x11033389: push 1 */
    ecx = ebp + (-0x70); /* 0x1103338B: lea ecx, [ebp - 0x70] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1103338E: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_11010630); /* 0x11033392: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_11033397:
    esi = MEM32(ebp + (-0x148)); /* 0x11033397: mov esi, dword ptr [ebp - 0x148] */
L_1103339D:
    ebx = MEM32(ebp + (-0x138)); /* 0x1103339D: mov ebx, dword ptr [ebp - 0x138] */
    RECOMP_BACKEDGE();
    goto L_1103315C; /* 0x110333A3: jmp 0x1103315c */
L_110333A8:
    PUSH32(esp, 0); /* 0x110333A8: push 0 */
    PUSH32(esp, 1); /* 0x110333AA: push 1 */
    ecx = ebp + (-0x28); /* 0x110333AC: lea ecx, [ebp - 0x28] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x110333AF: mov byte ptr [ebp - 4], 0xa */
    RECOMP_CALL(sub_11010630); /* 0x110333B3: call 0x11010630 */
    RECOMP_FLAGS_IN();
    goto L_11033425; /* 0x110333B8: jmp 0x11033425 */
L_110333BA:
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x110333BA: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x110333C0: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x110333C2: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110333C7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11033431; /* 0x110333C9: jne 0x11033431 */
L_110333CB:
    esi = MEM32(ebp + (-0x138)); /* 0x110333CB: mov esi, dword ptr [ebp - 0x138] */
    ebx = MEM32(ebp + (-0x154)); /* 0x110333D1: mov ebx, dword ptr [ebp - 0x154] */
L_110333D7:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x110333D7: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110333E4; /* 0x110333DB: jne 0x110333e4 */
L_110333DD:
    ecx = edi; /* 0x110333DD: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x110333DF: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_110333E4:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x110333E4: movzx eax, word ptr [edi + 6] */
    PUSH32(esp, eax); /* 0x110333E8: push eax */
    PUSH32(esp, ebx); /* 0x110333E9: push ebx */
    RECOMP_CALL(sub_1101503D); /* 0x110333EA: call 0x1101503d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110333EF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110333F0: pop ecx */
    /* cmp eax, 0xAu */ /* 0x110333F1: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11033425; /* 0x110333F4: jae 0x11033425 */
L_110333F6:
    SET_LO8(eax, MEM8(eax + 0x110035B0)); /* 0x110333F6: mov al, byte ptr [eax + 0x110035b0] */
    ecx = ebp + (-0x58); /* 0x110333FC: lea ecx, [ebp - 0x58] */
    MEM8(ebp + (-0x184)) = (uint8_t)(LO8(eax)); /* 0x110333FF: mov byte ptr [ebp - 0x184], al */
    PUSH32(esp, MEM32(ebp + (-0x184))); /* 0x11033405: push dword ptr [ebp - 0x184] */
    PUSH32(esp, 1); /* 0x1103340B: push 1 */
    RECOMP_CALL(sub_11014015); /* 0x1103340D: call 0x11014015 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x11033412: mov ecx, edi */
    RECOMP_CALL(sub_11021838); /* 0x11033414: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11033419: push esi */
    ecx = edi; /* 0x1103341A: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x1103341C: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11033421: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_110333D7; /* 0x11033423: je 0x110333d7 */
L_11033425:
    esi = MEM32(ebp + (-0x148)); /* 0x11033425: mov esi, dword ptr [ebp - 0x148] */
    ebx = MEM32(ebp + (-0x164)); /* 0x1103342B: mov ebx, dword ptr [ebp - 0x164] */
L_11033431:
    eax = MEM32(esi); /* 0x11033431: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x11033433: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x11033435: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x11033438: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x1103343E: mov ecx, edi */
    esi = (uint32_t)LO16(eax); /* 0x11033440: movzx esi, ax */
    RECOMP_CALL(sub_110278AC); /* 0x11033443: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11033448: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110334F7; /* 0x1103344A: jne 0x110334f7 */
L_11033450:
    /* test LO16(esi), LO16(esi) */ /* 0x11033450: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110334F7; /* 0x11033453: je 0x110334f7 */
L_11033459:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x11033459: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11033465; /* 0x1103345C: jne 0x11033465 */
L_1103345E:
    ecx = edi; /* 0x1103345E: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x11033460: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11033465:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x11033465: movzx eax, word ptr [edi + 6] */
    /* cmp LO16(eax), LO16(esi) */ /* 0x11033469: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110334F7; /* 0x1103346C: jne 0x110334f7 */
L_11033472:
    ecx = edi; /* 0x11033472: mov ecx, edi */
    RECOMP_CALL(sub_11021838); /* 0x11033474: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x11033479: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x1103347F: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x11033481: call 0x110278ac */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x14C)); /* 0x11033486: mov esi, dword ptr [ebp - 0x14c] */
L_1103348C:
    /* test LO8(eax), LO8(eax) */ /* 0x1103348C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110334EA; /* 0x1103348E: jne 0x110334ea */
L_11033490:
    /* cmp esi, ebx */ /* 0x11033490: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_110334FD; /* 0x11033492: jge 0x110334fd */
L_11033494:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x11033494: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110334A0; /* 0x11033497: jne 0x110334a0 */
L_11033499:
    ecx = edi; /* 0x11033499: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x1103349B: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_110334A0:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x110334A0: movzx eax, word ptr [edi + 6] */
    PUSH32(esp, eax); /* 0x110334A4: push eax */
    PUSH32(esp, MEM32(ebp + (-0x154))); /* 0x110334A5: push dword ptr [ebp - 0x154] */
    RECOMP_CALL(sub_1101503D); /* 0x110334AB: call 0x1101503d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110334B0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110334B1: pop ecx */
    /* cmp eax, 0xAu */ /* 0x110334B2: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110334EA; /* 0x110334B5: jae 0x110334ea */
L_110334B7:
    SET_LO8(eax, MEM8(eax + 0x110035B0)); /* 0x110334B7: mov al, byte ptr [eax + 0x110035b0] */
    ecx = ebp + (-0x58); /* 0x110334BD: lea ecx, [ebp - 0x58] */
    MEM8(ebp + (-0x170)) = (uint8_t)(LO8(eax)); /* 0x110334C0: mov byte ptr [ebp - 0x170], al */
    PUSH32(esp, MEM32(ebp + (-0x170))); /* 0x110334C6: push dword ptr [ebp - 0x170] */
    PUSH32(esp, 1); /* 0x110334CC: push 1 */
    RECOMP_CALL(sub_11014015); /* 0x110334CE: call 0x11014015 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x110334D3: mov ecx, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x110334D5: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_11021838); /* 0x110334D6: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x110334DB: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x110334E1: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x110334E3: call 0x110278ac */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1103348C; /* 0x110334E8: jmp 0x1103348c */
L_110334EA:
    /* cmp esi, ebx */ /* 0x110334EA: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_110334FD; /* 0x110334EC: jge 0x110334fd */
L_110334EE:
    MEM8(ebp + (-0x131)) = (uint8_t)(1); /* 0x110334EE: mov byte ptr [ebp - 0x131], 1 */
    goto L_110334FD; /* 0x110334F5: jmp 0x110334fd */
L_110334F7:
    esi = MEM32(ebp + (-0x14C)); /* 0x110334F7: mov esi, dword ptr [ebp - 0x14c] */
L_110334FD:
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x110334FD: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103350F; /* 0x11033501: jne 0x1103350f */
L_11033503:
    MEM8(ebp + (-0x131)) = (uint8_t)(1); /* 0x11033503: mov byte ptr [ebp - 0x131], 1 */
    RECOMP_BACKEDGE();
    goto L_11033387; /* 0x1103350A: jmp 0x11033387 */
L_1103350F:
    /* cmp esi, ebx */ /* 0x1103350F: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_11033387; /* 0x11033511: jge 0x11033387 */
L_11033517:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x11033517: sub ebx, esi */
    _flag_k = FK_CMP;
L_11033519:
    PUSH32(esp, 0x30u); /* 0x11033519: push 0x30 */
    PUSH32(esp, 1); /* 0x1103351B: push 1 */
    ecx = ebp + (-0x58); /* 0x1103351D: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_11014015); /* 0x11033520: call 0x11014015 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x11033525: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_11033519; /* 0x11033526: jne 0x11033519 */
L_11033528:
    RECOMP_BACKEDGE();
    goto L_11033387; /* 0x11033528: jmp 0x11033387 */
L_1103352D:
    PUSH32(esp, ebx); /* 0x1103352D: push ebx */
    ecx = edi; /* 0x1103352E: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x11033530: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11033535: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103315C; /* 0x11033537: jne 0x1103315c */
L_1103353D:
    eax = ebp + (-0xA0); /* 0x1103353D: lea eax, [ebp - 0xa0] */
    ecx = esi; /* 0x11033543: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11033545: push eax */
    RECOMP_CALL(sub_1102BC05); /* 0x11033546: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x1103354B: mov ecx, dword ptr [ebp - 0x140] */
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x11033551: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x11033554: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x11033558: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x140)) = ecx; /* 0x1103355C: mov dword ptr [ebp - 0x140], ecx */
    MEM32(ebp + (-0x150)) = ecx; /* 0x11033562: mov dword ptr [ebp - 0x150], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_110335BE; /* 0x11033568: jbe 0x110335be */
L_1103356A:
    eax = ebp + (-0x88); /* 0x1103356A: lea eax, [ebp - 0x88] */
    ecx = esi; /* 0x11033570: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11033572: push eax */
    RECOMP_CALL(sub_1102BC05); /* 0x11033573: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11033578: mov esi, eax */
    ecx = MEM32(ebp + (-0x140)); /* 0x1103357A: mov ecx, dword ptr [ebp - 0x140] */
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x11033580: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 7; /* 0x11033583: mov dword ptr [ebp - 4], 7 */
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x1103358A: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x140)) = ecx; /* 0x1103358E: mov dword ptr [ebp - 0x140], ecx */
    MEM32(ebp + (-0x150)) = ecx; /* 0x11033594: mov dword ptr [ebp - 0x150], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_1103359E; /* 0x1103359A: jb 0x1103359e */
L_1103359C:
    esi = MEM32(esi); /* 0x1103359C: mov esi, dword ptr [esi] */
L_1103359E:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1103359E: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110335B1; /* 0x110335A2: jne 0x110335b1 */
L_110335A4:
    ecx = edi; /* 0x110335A4: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x110335A6: call 0x11022515 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x110335AB: mov ecx, dword ptr [ebp - 0x140] */
L_110335B1:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x110335B1: movzx eax, word ptr [edi + 6] */
    /* cmp MEM16(esi), LO16(eax) */ /* 0x110335B5: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110335BE; /* 0x110335B8: jne 0x110335be */
L_110335BA:
    SET_LO8(ebx, 1); /* 0x110335BA: mov bl, 1 */
    goto L_110335C0; /* 0x110335BC: jmp 0x110335c0 */
L_110335BE:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x110335BE: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_110335C0:
    /* test LO8(ecx), 2 */ /* 0x110335C0: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110335E3; /* 0x110335C3: je 0x110335e3 */
L_110335C5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ecx = ecx & 0xFFFFFFFDu; /* 0x110335C5: and ecx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x110335C8: push 0 */
    MEM32(ebp + (-0x140)) = ecx; /* 0x110335CA: mov dword ptr [ebp - 0x140], ecx */
    ecx = ebp + (-0x88); /* 0x110335D0: lea ecx, [ebp - 0x88] */
    PUSH32(esp, 1); /* 0x110335D6: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x110335D8: call 0x1102261d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x110335DD: mov ecx, dword ptr [ebp - 0x140] */
L_110335E3:
    MEM32(ebp + (-0x4)) = 3; /* 0x110335E3: mov dword ptr [ebp - 4], 3 */
    /* test LO8(ecx), 1 */ /* 0x110335EA: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033607; /* 0x110335ED: je 0x11033607 */
L_110335EF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x110335EF: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x110335F2: push 0 */
    MEM32(ebp + (-0x140)) = ecx; /* 0x110335F4: mov dword ptr [ebp - 0x140], ecx */
    ecx = ebp + (-0xA0); /* 0x110335FA: lea ecx, [ebp - 0xa0] */
    PUSH32(esp, 1); /* 0x11033600: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x11033602: call 0x1102261d */
    RECOMP_FLAGS_IN();
L_11033607:
    /* test LO8(ebx), LO8(ebx) */ /* 0x11033607: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033643; /* 0x11033609: je 0x11033643 */
L_1103360B:
    ecx = edi; /* 0x1103360B: mov ecx, edi */
    RECOMP_CALL(sub_11021838); /* 0x1103360D: call 0x11021838 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x148)); /* 0x11033612: mov esi, dword ptr [ebp - 0x148] */
    eax = ebp + (-0xD0); /* 0x11033618: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x1103361E: push eax */
    ecx = esi; /* 0x1103361F: mov ecx, esi */
    RECOMP_CALL(sub_1102BC05); /* 0x11033621: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11033626: push eax */
    ecx = ebp + (-0x40); /* 0x11033627: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_11031EF1); /* 0x1103362A: call 0x11031ef1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1103362F: push 0 */
    PUSH32(esp, 1); /* 0x11033631: push 1 */
    ecx = ebp + (-0xD0); /* 0x11033633: lea ecx, [ebp - 0xd0] */
    RECOMP_CALL(sub_1102261D); /* 0x11033639: call 0x1102261d */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1103339D; /* 0x1103363E: jmp 0x1103339d */
L_11033643:
    esi = MEM32(ebp + (-0x148)); /* 0x11033643: mov esi, dword ptr [ebp - 0x148] */
    eax = ebp + (-0x130); /* 0x11033649: lea eax, [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x1103364F: push eax */
    ecx = esi; /* 0x11033650: mov ecx, esi */
    RECOMP_CALL(sub_110380BA); /* 0x11033652: call 0x110380ba */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x11033657: mov ecx, dword ptr [ebp - 0x140] */
    _flag_a = (uint32_t)((ecx | 4)); _flag_b = (uint32_t)((ecx | 4));
    ecx = ecx | 4; /* 0x1103365D: or ecx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x11033660: mov byte ptr [ebp - 4], 8 */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x11033664: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x140)) = ecx; /* 0x11033668: mov dword ptr [ebp - 0x140], ecx */
    MEM32(ebp + (-0x150)) = ecx; /* 0x1103366E: mov dword ptr [ebp - 0x150], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_110336CA; /* 0x11033674: jbe 0x110336ca */
L_11033676:
    eax = ebp + (-0x100); /* 0x11033676: lea eax, [ebp - 0x100] */
    ecx = esi; /* 0x1103367C: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1103367E: push eax */
    RECOMP_CALL(sub_110380BA); /* 0x1103367F: call 0x110380ba */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11033684: mov esi, eax */
    ecx = MEM32(ebp + (-0x140)); /* 0x11033686: mov ecx, dword ptr [ebp - 0x140] */
    _flag_a = (uint32_t)((ecx | 8)); _flag_b = (uint32_t)((ecx | 8));
    ecx = ecx | 8; /* 0x1103368C: or ecx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 9; /* 0x1103368F: mov dword ptr [ebp - 4], 9 */
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11033696: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x140)) = ecx; /* 0x1103369A: mov dword ptr [ebp - 0x140], ecx */
    MEM32(ebp + (-0x150)) = ecx; /* 0x110336A0: mov dword ptr [ebp - 0x150], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_110336AA; /* 0x110336A6: jb 0x110336aa */
L_110336A8:
    esi = MEM32(esi); /* 0x110336A8: mov esi, dword ptr [esi] */
L_110336AA:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x110336AA: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110336BD; /* 0x110336AE: jne 0x110336bd */
L_110336B0:
    ecx = edi; /* 0x110336B0: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x110336B2: call 0x11022515 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x110336B7: mov ecx, dword ptr [ebp - 0x140] */
L_110336BD:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x110336BD: movzx eax, word ptr [edi + 6] */
    /* cmp MEM16(esi), LO16(eax) */ /* 0x110336C1: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110336CA; /* 0x110336C4: jne 0x110336ca */
L_110336C6:
    SET_LO8(ebx, 1); /* 0x110336C6: mov bl, 1 */
    goto L_110336CC; /* 0x110336C8: jmp 0x110336cc */
L_110336CA:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x110336CA: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_110336CC:
    /* test LO8(ecx), 8 */ /* 0x110336CC: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110336EF; /* 0x110336CF: je 0x110336ef */
L_110336D1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF7u);
    ecx = ecx & 0xFFFFFFF7u; /* 0x110336D1: and ecx, 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x110336D4: push 0 */
    MEM32(ebp + (-0x140)) = ecx; /* 0x110336D6: mov dword ptr [ebp - 0x140], ecx */
    ecx = ebp + (-0x100); /* 0x110336DC: lea ecx, [ebp - 0x100] */
    PUSH32(esp, 1); /* 0x110336E2: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x110336E4: call 0x1102261d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x110336E9: mov ecx, dword ptr [ebp - 0x140] */
L_110336EF:
    MEM32(ebp + (-0x4)) = 3; /* 0x110336EF: mov dword ptr [ebp - 4], 3 */
    /* test LO8(ecx), 4 */ /* 0x110336F6: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033713; /* 0x110336F9: je 0x11033713 */
L_110336FB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFBu);
    ecx = ecx & 0xFFFFFFFBu; /* 0x110336FB: and ecx, 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x110336FE: push 0 */
    MEM32(ebp + (-0x140)) = ecx; /* 0x11033700: mov dword ptr [ebp - 0x140], ecx */
    ecx = ebp + (-0x130); /* 0x11033706: lea ecx, [ebp - 0x130] */
    PUSH32(esp, 1); /* 0x1103370C: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x1103370E: call 0x1102261d */
    RECOMP_FLAGS_IN();
L_11033713:
    /* test LO8(ebx), LO8(ebx) */ /* 0x11033713: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033756; /* 0x11033715: je 0x11033756 */
L_11033717:
    ecx = edi; /* 0x11033717: mov ecx, edi */
    RECOMP_CALL(sub_11021838); /* 0x11033719: call 0x11021838 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x148)); /* 0x1103371E: mov esi, dword ptr [ebp - 0x148] */
    eax = ebp + (-0xB8); /* 0x11033724: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x1103372A: push eax */
    ecx = esi; /* 0x1103372B: mov ecx, esi */
    RECOMP_CALL(sub_110380BA); /* 0x1103372D: call 0x110380ba */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11033732: push eax */
    ecx = ebp + (-0x40); /* 0x11033733: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_11031EF1); /* 0x11033736: call 0x11031ef1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1103373B: push 0 */
    PUSH32(esp, 1); /* 0x1103373D: push 1 */
    ecx = ebp + (-0xB8); /* 0x1103373F: lea ecx, [ebp - 0xb8] */
    RECOMP_CALL(sub_1102261D); /* 0x11033745: call 0x1102261d */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x141)) = (uint8_t)(1); /* 0x1103374A: mov byte ptr [ebp - 0x141], 1 */
    RECOMP_BACKEDGE();
    goto L_1103339D; /* 0x11033751: jmp 0x1103339d */
L_11033756:
    ebx = MEM32(ebp + (-0x148)); /* 0x11033756: mov ebx, dword ptr [ebp - 0x148] */
    eax = ebp + (-0x118); /* 0x1103375C: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x11033762: push eax */
    ecx = ebx; /* 0x11033763: mov ecx, ebx */
    RECOMP_CALL(sub_1102BC05); /* 0x11033765: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1103376A: push 0 */
    PUSH32(esp, 1); /* 0x1103376C: push 1 */
    ecx = ebp + (-0x118); /* 0x1103376E: lea ecx, [ebp - 0x118] */
    esi = MEM32(eax + 0x10); /* 0x11033774: mov esi, dword ptr [eax + 0x10] */
    RECOMP_CALL(sub_1102261D); /* 0x11033777: call 0x1102261d */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1103377C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033397; /* 0x1103377E: je 0x11033397 */
L_11033784:
    eax = ebp + (-0xE8); /* 0x11033784: lea eax, [ebp - 0xe8] */
    ecx = ebx; /* 0x1103378A: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x1103378C: push eax */
    RECOMP_CALL(sub_110380BA); /* 0x1103378D: call 0x110380ba */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11033792: push 0 */
    PUSH32(esp, 1); /* 0x11033794: push 1 */
    ecx = ebp + (-0xE8); /* 0x11033796: lea ecx, [ebp - 0xe8] */
    esi = MEM32(eax + 0x10); /* 0x1103379C: mov esi, dword ptr [eax + 0x10] */
    RECOMP_CALL(sub_1102261D); /* 0x1103379F: call 0x1102261d */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x138)); /* 0x110337A4: mov ebx, dword ptr [ebp - 0x138] */
    /* test esi, esi */ /* 0x110337AA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x13C)); /* 0x110337AC: mov eax, dword ptr [ebp - 0x13c] */
    esi = MEM32(ebp + (-0x148)); /* 0x110337B2: mov esi, dword ptr [ebp - 0x148] */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11033162; /* 0x110337B8: jne 0x11033162 */
L_110337BE:
    MEM8(ebp + (-0x141)) = (uint8_t)(1); /* 0x110337BE: mov byte ptr [ebp - 0x141], 1 */
    RECOMP_BACKEDGE();
    goto L_11033162; /* 0x110337C5: jmp 0x11033162 */
L_110337CA:
    eax = ebp + (-0x28); /* 0x110337CA: lea eax, [ebp - 0x28] */
    ecx = esi; /* 0x110337CD: mov ecx, esi */
    PUSH32(esp, eax); /* 0x110337CF: push eax */
    RECOMP_CALL(sub_11037B56); /* 0x110337D0: call 0x11037b56 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x160)); /* 0x110337D5: mov eax, dword ptr [ebp - 0x160] */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x110337DB: mov byte ptr [ebp - 4], 5 */
    /* test MEM8(eax + 0x14), 8 */ /* 0x110337DF: test byte ptr [eax + 0x14], 8 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11033812; /* 0x110337E3: jne 0x11033812 */
L_110337E5:
    PUSH32(esp, ebx); /* 0x110337E5: push ebx */
    ecx = edi; /* 0x110337E6: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x110337E8: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110337ED: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11033812; /* 0x110337EF: jne 0x11033812 */
L_110337F1:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x110337F1: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110337FD; /* 0x110337F4: jne 0x110337fd */
L_110337F6:
    ecx = edi; /* 0x110337F6: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x110337F8: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_110337FD:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x110337FD: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = (uint32_t)MEM16(edi + 0x6); /* 0x11033801: movzx ecx, word ptr [edi + 6] */
    eax = MEM32(ebp + (-0x28)); /* 0x11033805: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103380D; /* 0x11033808: jae 0x1103380d */
L_1103380A:
    eax = ebp + (-0x28); /* 0x1103380A: lea eax, [ebp - 0x28] */
L_1103380D:
    /* cmp LO16(ecx), MEM16(eax) */ /* 0x1103380D: cmp cx, word ptr [eax] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103384E; /* 0x11033810: jne 0x1103384e */
L_11033812:
    /* cmp MEM32(ebp + (-0x13C)), 3 */ /* 0x11033812: cmp dword ptr [ebp - 0x13c], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x13C))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11033858; /* 0x11033819: jne 0x11033858 */
L_1103381B:
    /* cmp MEM32(ebp + (-0x30)), 1 */ /* 0x1103381B: cmp dword ptr [ebp - 0x30], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11033858; /* 0x1103381F: ja 0x11033858 */
L_11033821:
    PUSH32(esp, ebx); /* 0x11033821: push ebx */
    ecx = edi; /* 0x11033822: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x11033824: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11033829: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103384E; /* 0x1103382B: jne 0x1103384e */
L_1103382D:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x1103382D: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11033839; /* 0x11033830: jne 0x11033839 */
L_11033832:
    ecx = edi; /* 0x11033832: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x11033834: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11033839:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11033839: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = (uint32_t)MEM16(edi + 0x6); /* 0x1103383D: movzx ecx, word ptr [edi + 6] */
    eax = MEM32(ebp + (-0x28)); /* 0x11033841: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11033849; /* 0x11033844: jae 0x11033849 */
L_11033846:
    eax = ebp + (-0x28); /* 0x11033846: lea eax, [ebp - 0x28] */
L_11033849:
    /* cmp LO16(ecx), MEM16(eax) */ /* 0x11033849: cmp cx, word ptr [eax] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11033858; /* 0x1103384C: je 0x11033858 */
L_1103384E:
    PUSH32(esp, 0); /* 0x1103384E: push 0 */
    ecx = ebp + (-0x28); /* 0x11033850: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_110278E7); /* 0x11033853: call 0x110278e7 */
    RECOMP_FLAGS_IN();
L_11033858:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11033858: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x28)); /* 0x1103385C: mov esi, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103389C; /* 0x1103385F: jae 0x1103389c */
L_11033861:
    esi = ebp + (-0x28); /* 0x11033861: lea esi, [ebp - 0x28] */
    goto L_1103389C; /* 0x11033864: jmp 0x1103389c */
L_11033866:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11033866: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x1103386A: mov ecx, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11033872; /* 0x1103386D: jae 0x11033872 */
L_1103386F:
    ecx = ebp + (-0x28); /* 0x1103386F: lea ecx, [ebp - 0x28] */
L_11033872:
    eax = MEM32(ebp + (-0x18)); /* 0x11033872: mov eax, dword ptr [ebp - 0x18] */
    eax = ecx + eax * 2; /* 0x11033875: lea eax, [ecx + eax*2] */
    /* cmp esi, eax */ /* 0x11033878: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110338A8; /* 0x1103387A: je 0x110338a8 */
L_1103387C:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x1103387C: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11033889; /* 0x11033880: jne 0x11033889 */
L_11033882:
    ecx = edi; /* 0x11033882: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x11033884: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11033889:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x11033889: movzx eax, word ptr [edi + 6] */
    /* cmp LO16(eax), MEM16(esi) */ /* 0x1103388D: cmp ax, word ptr [esi] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110338A8; /* 0x11033890: jne 0x110338a8 */
L_11033892:
    ecx = edi; /* 0x11033892: mov ecx, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x11033894: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_11021838); /* 0x11033897: call 0x11021838 */
    RECOMP_FLAGS_IN();
L_1103389C:
    PUSH32(esp, ebx); /* 0x1103389C: push ebx */
    ecx = edi; /* 0x1103389D: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x1103389F: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110338A4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033866; /* 0x110338A6: je 0x11033866 */
L_110338A8:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x110338A8: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x110338AC: mov ecx, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110338B4; /* 0x110338AF: jae 0x110338b4 */
L_110338B1:
    ecx = ebp + (-0x28); /* 0x110338B1: lea ecx, [ebp - 0x28] */
L_110338B4:
    eax = MEM32(ebp + (-0x18)); /* 0x110338B4: mov eax, dword ptr [ebp - 0x18] */
    eax = ecx + eax * 2; /* 0x110338B7: lea eax, [ecx + eax*2] */
    /* cmp esi, eax */ /* 0x110338BA: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110338C5; /* 0x110338BC: je 0x110338c5 */
L_110338BE:
    MEM8(ebp + (-0x131)) = (uint8_t)(1); /* 0x110338BE: mov byte ptr [ebp - 0x131], 1 */
L_110338C5:
    PUSH32(esp, 0); /* 0x110338C5: push 0 */
    PUSH32(esp, 1); /* 0x110338C7: push 1 */
    ecx = ebp + (-0x28); /* 0x110338C9: lea ecx, [ebp - 0x28] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x110338CC: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_1102261D); /* 0x110338D0: call 0x1102261d */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x148)); /* 0x110338D5: mov esi, dword ptr [ebp - 0x148] */
    RECOMP_BACKEDGE();
    goto L_1103315C; /* 0x110338DB: jmp 0x1103315c */
L_110338E0:
    eax = MEM32(ebp + (-0x13C)); /* 0x110338E0: mov eax, dword ptr [ebp - 0x13c] */
    /* cmp eax, 3 */ /* 0x110338E6: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11033162; /* 0x110338E9: je 0x11033162 */
L_110338EF:
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x110338EF: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x110338F5: mov ecx, edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x110338F7: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_110278AC); /* 0x110338F9: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110338FE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11033946; /* 0x11033900: jne 0x11033946 */
L_11033902:
    esi = MEM32(ebp + (-0x138)); /* 0x11033902: mov esi, dword ptr [ebp - 0x138] */
L_11033908:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x11033908: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11033915; /* 0x1103390C: jne 0x11033915 */
L_1103390E:
    ecx = edi; /* 0x1103390E: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x11033910: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_11033915:
    ecx = MEM32(ebp + (-0x15C)); /* 0x11033915: mov ecx, dword ptr [ebp - 0x15c] */
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x1103391B: movzx eax, word ptr [edi + 6] */
    PUSH32(esp, eax); /* 0x1103391F: push eax */
    PUSH32(esp, 0x48u); /* 0x11033920: push 0x48 */
    edx = MEM32(ecx); /* 0x11033922: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x11033924: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11033927: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033940; /* 0x11033929: je 0x11033940 */
L_1103392B:
    ecx = edi; /* 0x1103392B: mov ecx, edi */
    SET_LO8(ebx, 1); /* 0x1103392D: mov bl, 1 */
    RECOMP_CALL(sub_11021838); /* 0x1103392F: call 0x11021838 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11033934: push esi */
    ecx = edi; /* 0x11033935: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x11033937: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1103393C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033908; /* 0x1103393E: je 0x11033908 */
L_11033940:
    esi = MEM32(ebp + (-0x148)); /* 0x11033940: mov esi, dword ptr [ebp - 0x148] */
L_11033946:
    eax = MEM32(ebp + (-0x13C)); /* 0x11033946: mov eax, dword ptr [ebp - 0x13c] */
    /* cmp MEM8(ebp + eax + (-0x158)), 0x20u */ /* 0x1103394C: cmp byte ptr [ebp + eax - 0x158], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0x158))) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11033970; /* 0x11033954: jne 0x11033970 */
L_11033956:
    /* test LO8(ebx), LO8(ebx) */ /* 0x11033956: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = MEM32(ebp + (-0x138)); /* 0x11033958: mov ebx, dword ptr [ebp - 0x138] */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11033162; /* 0x1103395E: jne 0x11033162 */
L_11033964:
    MEM8(ebp + (-0x131)) = (uint8_t)(1); /* 0x11033964: mov byte ptr [ebp - 0x131], 1 */
    RECOMP_BACKEDGE();
    goto L_11033162; /* 0x1103396B: jmp 0x11033162 */
L_11033970:
    ebx = MEM32(ebp + (-0x138)); /* 0x11033970: mov ebx, dword ptr [ebp - 0x138] */
    RECOMP_BACKEDGE();
    goto L_11033162; /* 0x11033976: jmp 0x11033162 */
L_1103397B:
    eax = ebp + (-0x40); /* 0x1103397B: lea eax, [ebp - 0x40] */
L_1103397E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1103397E: add esi, 2 */
    _flag_k = FK_ADD;
    eax = eax + ebx * 2; /* 0x11033981: lea eax, [eax + ebx*2] */
    /* cmp esi, eax */ /* 0x11033984: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110339CC; /* 0x11033986: je 0x110339cc */
L_11033988:
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x11033988: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x1103398E: mov ecx, edi */
    RECOMP_CALL(sub_110278AC); /* 0x11033990: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11033995: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110339C3; /* 0x11033997: jne 0x110339c3 */
L_11033999:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x11033999: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110339A5; /* 0x1103399C: jne 0x110339a5 */
L_1103399E:
    ecx = edi; /* 0x1103399E: mov ecx, edi */
    RECOMP_CALL(sub_11022515); /* 0x110339A0: call 0x11022515 */
    RECOMP_FLAGS_IN();
L_110339A5:
    SET_LO16(eax, MEM16(edi + 0x6)); /* 0x110339A5: mov ax, word ptr [edi + 6] */
    /* cmp LO16(eax), MEM16(esi) */ /* 0x110339A9: cmp ax, word ptr [esi] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110339C3; /* 0x110339AC: jne 0x110339c3 */
L_110339AE:
    ecx = edi; /* 0x110339AE: mov ecx, edi */
    RECOMP_CALL(sub_11021838); /* 0x110339B0: call 0x11021838 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x2C)); /* 0x110339B5: mov edx, dword ptr [ebp - 0x2c] */
    ebx = MEM32(ebp + (-0x30)); /* 0x110339B8: mov ebx, dword ptr [ebp - 0x30] */
    ecx = MEM32(ebp + (-0x40)); /* 0x110339BB: mov ecx, dword ptr [ebp - 0x40] */
    RECOMP_BACKEDGE();
    goto L_11033197; /* 0x110339BE: jmp 0x11033197 */
L_110339C3:
    edx = MEM32(ebp + (-0x2C)); /* 0x110339C3: mov edx, dword ptr [ebp - 0x2c] */
    ebx = MEM32(ebp + (-0x30)); /* 0x110339C6: mov ebx, dword ptr [ebp - 0x30] */
    ecx = MEM32(ebp + (-0x40)); /* 0x110339C9: mov ecx, dword ptr [ebp - 0x40] */
L_110339CC:
    /* cmp edx, 8 */ /* 0x110339CC: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110339D4; /* 0x110339CF: jae 0x110339d4 */
L_110339D1:
    ecx = ebp + (-0x40); /* 0x110339D1: lea ecx, [ebp - 0x40] */
L_110339D4:
    eax = ecx + ebx * 2; /* 0x110339D4: lea eax, [ecx + ebx*2] */
    /* cmp esi, eax */ /* 0x110339D7: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110339F5; /* 0x110339D9: jne 0x110339f5 */
L_110339DB:
    SET_LO8(eax, MEM8(ebp + (-0x141))); /* 0x110339DB: mov al, byte ptr [ebp - 0x141] */
    /* test LO8(eax), LO8(eax) */ /* 0x110339E1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110339FF; /* 0x110339E3: je 0x110339ff */
L_110339E5:
    PUSH32(esp, 0x2Du); /* 0x110339E5: push 0x2d */
    PUSH32(esp, 1); /* 0x110339E7: push 1 */
    PUSH32(esp, 0); /* 0x110339E9: push 0 */
    ecx = ebp + (-0x58); /* 0x110339EB: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_110297AC); /* 0x110339EE: call 0x110297ac */
    RECOMP_FLAGS_IN();
    goto L_110339FF; /* 0x110339F3: jmp 0x110339ff */
L_110339F5:
    PUSH32(esp, 0); /* 0x110339F5: push 0 */
    ecx = ebp + (-0x58); /* 0x110339F7: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_11010B2D); /* 0x110339FA: call 0x11010b2d */
    RECOMP_FLAGS_IN();
L_110339FF:
    ebx = MEM32(ebp + (-0x180)); /* 0x110339FF: mov ebx, dword ptr [ebp - 0x180] */
    eax = ebp + (-0x58); /* 0x11033A05: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x11033A08: push eax */
    ecx = ebx; /* 0x11033A09: mov ecx, ebx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0; /* 0x11033A0B: and dword ptr [ebx + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x14) = 0xFu; /* 0x11033A0F: mov dword ptr [ebx + 0x14], 0xf */
    MEM8(ebx) = (uint8_t)(0); /* 0x11033A16: mov byte ptr [ebx], 0 */
    RECOMP_CALL(sub_11010405); /* 0x11033A19: call 0x11010405 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11033A1E: push 0 */
    PUSH32(esp, 1); /* 0x11033A20: push 1 */
    ecx = ebp + (-0x58); /* 0x11033A22: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_11010630); /* 0x11033A25: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11033A2A: push 0 */
    PUSH32(esp, 1); /* 0x11033A2C: push 1 */
    ecx = ebp + (-0x40); /* 0x11033A2E: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_1102261D); /* 0x11033A31: call 0x1102261d */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x11033A36: mov eax, ebx */
    RECOMP_CALL(sub_1103B354); /* 0x11033A38: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x11033A3D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_11033A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11033A40u);

L_11033A40:
    PUSH32(esp, ebp); /* 0x11033A40: push ebp */
    ebp = esp; /* 0x11033A41: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11033A43: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x811C9DC5u; /* 0x11033A45: mov ecx, 0x811c9dc5 */
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x11033A4A: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11033A66; /* 0x11033A4D: jbe 0x11033a66 */
L_11033A4F:
    PUSH32(esp, esi); /* 0x11033A4F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11033A50: mov esi, dword ptr [ebp + 8] */
L_11033A53:
    eax = (uint32_t)MEM8(edx + esi); /* 0x11033A53: movzx eax, byte ptr [edx + esi] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x11033A57: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x01000193u); /* 0x11033A59: imul ecx, eax, 0x1000193 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11033A5F: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x11033A60: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11033A53; /* 0x11033A63: jb 0x11033a53 */
L_11033A65:
    esi = POP32_VAL(esp); /* 0x11033A65: pop esi */
L_11033A66:
    eax = ecx; /* 0x11033A66: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x11033A68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11033A69: ret  */
    RECOMP_REGS_OUT();
}

void sub_11033A6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11033A6Au);

L_11033A6A:
    PUSH32(esp, 0x34u); /* 0x11033A6A: push 0x34 */
    eax = 0x1103F12Du; /* 0x11033A6C: mov eax, 0x1103f12d */
    RECOMP_CALL(sub_1103B3DB); /* 0x11033A71: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x11033A76: mov ebx, ecx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x11033A78: mov dword ptr [ebp - 0x14], ebx */
    eax = ebp + (-0x40); /* 0x11033A7B: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11033A7E: push eax */
    RECOMP_CALL(sub_1102DA53); /* 0x11033A7F: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xBu); /* 0x11033A84: push 0xb */
    ecx = POP32_VAL(esp); /* 0x11033A86: pop ecx */
    esi = eax; /* 0x11033A87: mov esi, eax */
    edi = ebx + 0x2C; /* 0x11033A89: lea edi, [ebx + 0x2c] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x11033A8C: rep movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x110692D4)); /* 0x11033A8E: call dword ptr [0x110692d4] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x11033A94: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11033A96: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x2C; /* 0x11033A98: lea eax, [ebx + 0x2c] */
    MEM32(ebx + 0x8) = esi; /* 0x11033A9B: mov dword ptr [ebx + 8], esi */
    PUSH32(esp, eax); /* 0x11033A9E: push eax */
    MEM32(ebx + 0x10) = esi; /* 0x11033A9F: mov dword ptr [ebx + 0x10], esi */
    MEM32(ebx + 0x14) = esi; /* 0x11033AA2: mov dword ptr [ebx + 0x14], esi */
    MEM32(ebx + 0x18) = esi; /* 0x11033AA5: mov dword ptr [ebx + 0x18], esi */
    PUSH32(esp, esi); /* 0x11033AA8: push esi */
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x11033AA9: push dword ptr [edi + 0x1c] */
    MEM32(ebp + (-0x4)) = esi; /* 0x11033AAC: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_110156AE); /* 0x11033AAF: call 0x110156ae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11033AB4: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x8) = eax; /* 0x11033AB7: mov dword ptr [ebx + 8], eax */
    ecx = ebx; /* 0x11033ABA: mov ecx, ebx */
    PUSH32(esp, edi); /* 0x11033ABC: push edi */
    PUSH32(esp, esi); /* 0x11033ABD: push esi */
    RECOMP_CALL(sub_1103134C); /* 0x11033ABE: call 0x1103134c */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebx + 0x28), 0 */ /* 0x11033AC3: cmp byte ptr [ebx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x28)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11033ACE; /* 0x11033AC7: je 0x11033ace */
L_11033AC9:
    SET_LO8(eax, MEM8(edi + 0x28)); /* 0x11033AC9: mov al, byte ptr [edi + 0x28] */
    goto L_11033AD1; /* 0x11033ACC: jmp 0x11033ad1 */
L_11033ACE:
    SET_LO8(eax, MEM8(edi + 0x29)); /* 0x11033ACE: mov al, byte ptr [edi + 0x29] */
L_11033AD1:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x11033AD1: movsx eax, al */
    MEM32(ebx + 0x1C) = eax; /* 0x11033AD4: mov dword ptr [ebx + 0x1c], eax */
    /* test eax, eax */ /* 0x11033AD7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11033AE0; /* 0x11033AD9: js 0x11033ae0 */
L_11033ADB:
    /* cmp eax, 0x7Fu */ /* 0x11033ADB: cmp eax, 0x7f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11033AE3; /* 0x11033ADE: jl 0x11033ae3 */
L_11033AE0:
    MEM32(ebx + 0x1C) = esi; /* 0x11033AE0: mov dword ptr [ebx + 0x1c], esi */
L_11033AE3:
    eax = (int32_t)(int8_t)MEM8(edi + 0x2E); /* 0x11033AE3: movsx eax, byte ptr [edi + 0x2e] */
    esi = ebx + 0x20; /* 0x11033AE7: lea esi, [ebx + 0x20] */
    PUSH32(esp, eax); /* 0x11033AEA: push eax */
    eax = (int32_t)(int8_t)MEM8(edi + 0x2A); /* 0x11033AEB: movsx eax, byte ptr [edi + 0x2a] */
    ecx = ebx; /* 0x11033AEF: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x11033AF1: push eax */
    eax = (int32_t)(int8_t)MEM8(edi + 0x2B); /* 0x11033AF2: movsx eax, byte ptr [edi + 0x2b] */
    PUSH32(esp, eax); /* 0x11033AF6: push eax */
    PUSH32(esp, esi); /* 0x11033AF7: push esi */
    RECOMP_CALL(sub_1103755E); /* 0x11033AF8: call 0x1103755e */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int8_t)MEM8(edi + 0x2F); /* 0x11033AFD: movsx eax, byte ptr [edi + 0x2f] */
    ecx = ebx + 0x24; /* 0x11033B01: lea ecx, [ebx + 0x24] */
    PUSH32(esp, eax); /* 0x11033B04: push eax */
    eax = (int32_t)(int8_t)MEM8(edi + 0x2C); /* 0x11033B05: movsx eax, byte ptr [edi + 0x2c] */
    PUSH32(esp, eax); /* 0x11033B09: push eax */
    eax = (int32_t)(int8_t)MEM8(edi + 0x2D); /* 0x11033B0A: movsx eax, byte ptr [edi + 0x2d] */
    PUSH32(esp, eax); /* 0x11033B0E: push eax */
    PUSH32(esp, ecx); /* 0x11033B0F: push ecx */
    ecx = ebx; /* 0x11033B10: mov ecx, ebx */
    RECOMP_CALL(sub_1103755E); /* 0x11033B12: call 0x1103755e */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x11033B17: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11033B3A; /* 0x11033B1B: je 0x11033b3a */
L_11033B1D:
    PUSH32(esp, 4); /* 0x11033B1D: push 4 */
    edi = 0x110035C8u; /* 0x11033B1F: mov edi, 0x110035c8 */
    PUSH32(esp, edi); /* 0x11033B24: push edi */
    PUSH32(esp, esi); /* 0x11033B25: push esi */
    RECOMP_CALL(sub_1103B300); /* 0x11033B26: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x11033B2B: push 4 */
    eax = ebx + 0x24; /* 0x11033B2D: lea eax, [ebx + 0x24] */
    PUSH32(esp, edi); /* 0x11033B30: push edi */
    PUSH32(esp, eax); /* 0x11033B31: push eax */
    RECOMP_CALL(sub_1103B300); /* 0x11033B32: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11033B37: add esp, 0x18 */
    _flag_k = FK_ADD;
L_11033B3A:
    RECOMP_CALL(sub_1103B340); /* 0x11033B3A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11033B3F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11033B54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11033B54u);

L_11033B54:
    PUSH32(esp, 0x34u); /* 0x11033B54: push 0x34 */
    eax = 0x1103F148u; /* 0x11033B56: mov eax, 0x1103f148 */
    RECOMP_CALL(sub_1103B3DB); /* 0x11033B5B: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x11033B60: mov ebx, ecx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x11033B62: mov dword ptr [ebp - 0x14], ebx */
    eax = ebp + (-0x40); /* 0x11033B65: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11033B68: push eax */
    RECOMP_CALL(sub_1102DA53); /* 0x11033B69: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xBu); /* 0x11033B6E: push 0xb */
    ecx = POP32_VAL(esp); /* 0x11033B70: pop ecx */
    esi = eax; /* 0x11033B71: mov esi, eax */
    edi = ebx + 0x2C; /* 0x11033B73: lea edi, [ebx + 0x2c] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x11033B76: rep movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x110692D4)); /* 0x11033B78: call dword ptr [0x110692d4] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x11033B7E: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11033B80: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x2C; /* 0x11033B82: lea eax, [ebx + 0x2c] */
    MEM32(ebx + 0x8) = esi; /* 0x11033B85: mov dword ptr [ebx + 8], esi */
    PUSH32(esp, eax); /* 0x11033B88: push eax */
    MEM32(ebx + 0x10) = esi; /* 0x11033B89: mov dword ptr [ebx + 0x10], esi */
    MEM32(ebx + 0x14) = esi; /* 0x11033B8C: mov dword ptr [ebx + 0x14], esi */
    MEM32(ebx + 0x18) = esi; /* 0x11033B8F: mov dword ptr [ebx + 0x18], esi */
    PUSH32(esp, esi); /* 0x11033B92: push esi */
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x11033B93: push dword ptr [edi + 0x1c] */
    MEM32(ebp + (-0x4)) = esi; /* 0x11033B96: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_110156AE); /* 0x11033B99: call 0x110156ae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11033B9E: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x8) = eax; /* 0x11033BA1: mov dword ptr [ebx + 8], eax */
    ecx = ebx; /* 0x11033BA4: mov ecx, ebx */
    PUSH32(esp, edi); /* 0x11033BA6: push edi */
    PUSH32(esp, esi); /* 0x11033BA7: push esi */
    RECOMP_CALL(sub_110313DE); /* 0x11033BA8: call 0x110313de */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebx + 0x28), 0 */ /* 0x11033BAD: cmp byte ptr [ebx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x28)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11033BB8; /* 0x11033BB1: je 0x11033bb8 */
L_11033BB3:
    SET_LO8(eax, MEM8(edi + 0x28)); /* 0x11033BB3: mov al, byte ptr [edi + 0x28] */
    goto L_11033BBB; /* 0x11033BB6: jmp 0x11033bbb */
L_11033BB8:
    SET_LO8(eax, MEM8(edi + 0x29)); /* 0x11033BB8: mov al, byte ptr [edi + 0x29] */
L_11033BBB:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x11033BBB: movsx eax, al */
    MEM32(ebx + 0x1C) = eax; /* 0x11033BBE: mov dword ptr [ebx + 0x1c], eax */
    /* test eax, eax */ /* 0x11033BC1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11033BCA; /* 0x11033BC3: js 0x11033bca */
L_11033BC5:
    /* cmp eax, 0x7Fu */ /* 0x11033BC5: cmp eax, 0x7f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11033BCD; /* 0x11033BC8: jl 0x11033bcd */
L_11033BCA:
    MEM32(ebx + 0x1C) = esi; /* 0x11033BCA: mov dword ptr [ebx + 0x1c], esi */
L_11033BCD:
    eax = (int32_t)(int8_t)MEM8(edi + 0x2E); /* 0x11033BCD: movsx eax, byte ptr [edi + 0x2e] */
    esi = ebx + 0x20; /* 0x11033BD1: lea esi, [ebx + 0x20] */
    PUSH32(esp, eax); /* 0x11033BD4: push eax */
    eax = (int32_t)(int8_t)MEM8(edi + 0x2A); /* 0x11033BD5: movsx eax, byte ptr [edi + 0x2a] */
    ecx = ebx; /* 0x11033BD9: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x11033BDB: push eax */
    eax = (int32_t)(int8_t)MEM8(edi + 0x2B); /* 0x11033BDC: movsx eax, byte ptr [edi + 0x2b] */
    PUSH32(esp, eax); /* 0x11033BE0: push eax */
    PUSH32(esp, esi); /* 0x11033BE1: push esi */
    RECOMP_CALL(sub_1103755E); /* 0x11033BE2: call 0x1103755e */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int8_t)MEM8(edi + 0x2F); /* 0x11033BE7: movsx eax, byte ptr [edi + 0x2f] */
    ecx = ebx + 0x24; /* 0x11033BEB: lea ecx, [ebx + 0x24] */
    PUSH32(esp, eax); /* 0x11033BEE: push eax */
    eax = (int32_t)(int8_t)MEM8(edi + 0x2C); /* 0x11033BEF: movsx eax, byte ptr [edi + 0x2c] */
    PUSH32(esp, eax); /* 0x11033BF3: push eax */
    eax = (int32_t)(int8_t)MEM8(edi + 0x2D); /* 0x11033BF4: movsx eax, byte ptr [edi + 0x2d] */
    PUSH32(esp, eax); /* 0x11033BF8: push eax */
    PUSH32(esp, ecx); /* 0x11033BF9: push ecx */
    ecx = ebx; /* 0x11033BFA: mov ecx, ebx */
    RECOMP_CALL(sub_1103755E); /* 0x11033BFC: call 0x1103755e */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x11033C01: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11033C24; /* 0x11033C05: je 0x11033c24 */
L_11033C07:
    PUSH32(esp, 4); /* 0x11033C07: push 4 */
    edi = 0x110035C8u; /* 0x11033C09: mov edi, 0x110035c8 */
    PUSH32(esp, edi); /* 0x11033C0E: push edi */
    PUSH32(esp, esi); /* 0x11033C0F: push esi */
    RECOMP_CALL(sub_1103B300); /* 0x11033C10: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x11033C15: push 4 */
    eax = ebx + 0x24; /* 0x11033C17: lea eax, [ebx + 0x24] */
    PUSH32(esp, edi); /* 0x11033C1A: push edi */
    PUSH32(esp, eax); /* 0x11033C1B: push eax */
    RECOMP_CALL(sub_1103B300); /* 0x11033C1C: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11033C21: add esp, 0x18 */
    _flag_k = FK_ADD;
L_11033C24:
    RECOMP_CALL(sub_1103B340); /* 0x11033C24: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11033C29: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11033C3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11033C3Eu);

L_11033C3E:
    PUSH32(esp, 0xCu); /* 0x11033C3E: push 0xc */
    eax = 0x1103F1A3u; /* 0x11033C40: mov eax, 0x1103f1a3 */
    RECOMP_CALL(sub_1103B372); /* 0x11033C45: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x11033C4A: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11033C4D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x14); /* 0x11033C4F: mov edi, dword ptr [ebp + 0x14] */
    ecx = eax; /* 0x11033C52: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    ecx = ecx & 2; /* 0x11033C54: and ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ebx; /* 0x11033C57: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x11033C5A: mov dword ptr [ebp - 0x14], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033CC3; /* 0x11033C5D: je 0x11033cc3 */
L_11033C5F:
    /* test edi, edi */ /* 0x11033C5F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11033CA1; /* 0x11033C61: jne 0x11033ca1 */
L_11033C63:
    PUSH32(esp, 0x44u); /* 0x11033C63: push 0x44 */
    RECOMP_CALL(sub_1103B120); /* 0x11033C65: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11033C6A: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11033C6C: pop ecx */
    /* test esi, esi */ /* 0x11033C6D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033C86; /* 0x11033C6F: je 0x11033c86 */
L_11033C71:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11033C71: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x11033C74: mov ecx, esi */
    MEM32(esi + 0x4) = ebx; /* 0x11033C76: mov dword ptr [esi + 4], ebx */
    MEM32(esi) = 0x110015F0u; /* 0x11033C79: mov dword ptr [esi], 0x110015f0 */
    RECOMP_CALL(sub_1100EFF0); /* 0x11033C7F: call 0x1100eff0 */
    RECOMP_FLAGS_IN();
    goto L_11033C88; /* 0x11033C84: jmp 0x11033c88 */
L_11033C86:
    esi = ebx; /* 0x11033C86: mov esi, ebx */
L_11033C88:
    ecx = 0x11068A94u; /* 0x11033C88: mov ecx, 0x11068a94 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033C8D: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11033C92: push eax */
    PUSH32(esp, esi); /* 0x11033C93: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033C94: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033C97: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11033C9C: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11033CC0; /* 0x11033C9F: jmp 0x11033cc0 */
L_11033CA1:
    ecx = 0x11068A94u; /* 0x11033CA1: mov ecx, 0x11068a94 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033CA6: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11033CAB: push edi */
    esi = eax; /* 0x11033CAC: mov esi, eax */
    RECOMP_CALL(sub_1101103E); /* 0x11033CAE: call 0x1101103e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11033CB3: push esi */
    PUSH32(esp, eax); /* 0x11033CB4: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033CB5: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033CB8: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11033CBD: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11033CC0:
    eax = MEM32(ebp + 0xC); /* 0x11033CC0: mov eax, dword ptr [ebp + 0xc] */
L_11033CC3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x11033CC3: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x11033CC6: mov dword ptr [ebp - 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033D25; /* 0x11033CC9: je 0x11033d25 */
L_11033CCB:
    /* test edi, edi */ /* 0x11033CCB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11033D03; /* 0x11033CCD: jne 0x11033d03 */
L_11033CCF:
    PUSH32(esp, 8); /* 0x11033CCF: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x11033CD1: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11033CD6: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11033CD8: pop ecx */
    /* test esi, esi */ /* 0x11033CD9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033CE8; /* 0x11033CDB: je 0x11033ce8 */
L_11033CDD:
    MEM32(esi + 0x4) = ebx; /* 0x11033CDD: mov dword ptr [esi + 4], ebx */
    MEM32(esi) = 0x110020C4u; /* 0x11033CE0: mov dword ptr [esi], 0x110020c4 */
    goto L_11033CEA; /* 0x11033CE6: jmp 0x11033cea */
L_11033CE8:
    esi = ebx; /* 0x11033CE8: mov esi, ebx */
L_11033CEA:
    ecx = 0x11066204u; /* 0x11033CEA: mov ecx, 0x11066204 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033CEF: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11033CF4: push eax */
    PUSH32(esp, esi); /* 0x11033CF5: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033CF6: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033CF9: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11033CFE: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11033D22; /* 0x11033D01: jmp 0x11033d22 */
L_11033D03:
    ecx = 0x11066204u; /* 0x11033D03: mov ecx, 0x11066204 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033D08: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11033D0D: push edi */
    esi = eax; /* 0x11033D0E: mov esi, eax */
    RECOMP_CALL(sub_1101586F); /* 0x11033D10: call 0x1101586f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11033D15: push esi */
    PUSH32(esp, eax); /* 0x11033D16: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033D17: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033D1A: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11033D1F: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11033D22:
    eax = MEM32(ebp + (-0x10)); /* 0x11033D22: mov eax, dword ptr [ebp - 0x10] */
L_11033D25:
    /* test eax, eax */ /* 0x11033D25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033DFF; /* 0x11033D27: je 0x11033dff */
L_11033D2D:
    /* test edi, edi */ /* 0x11033D2D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11033D65; /* 0x11033D2F: jne 0x11033d65 */
L_11033D31:
    PUSH32(esp, 8); /* 0x11033D31: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x11033D33: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11033D38: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11033D3A: pop ecx */
    /* test esi, esi */ /* 0x11033D3B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033D4A; /* 0x11033D3D: je 0x11033d4a */
L_11033D3F:
    MEM32(esi + 0x4) = ebx; /* 0x11033D3F: mov dword ptr [esi + 4], ebx */
    MEM32(esi) = 0x11002100u; /* 0x11033D42: mov dword ptr [esi], 0x11002100 */
    goto L_11033D4C; /* 0x11033D48: jmp 0x11033d4c */
L_11033D4A:
    esi = ebx; /* 0x11033D4A: mov esi, ebx */
L_11033D4C:
    ecx = 0x11066208u; /* 0x11033D4C: mov ecx, 0x11066208 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033D51: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11033D56: push eax */
    PUSH32(esp, esi); /* 0x11033D57: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033D58: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033D5B: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11033D60: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11033D84; /* 0x11033D63: jmp 0x11033d84 */
L_11033D65:
    ecx = 0x11066208u; /* 0x11033D65: mov ecx, 0x11066208 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033D6A: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11033D6F: push edi */
    esi = eax; /* 0x11033D70: mov esi, eax */
    RECOMP_CALL(sub_11015A3D); /* 0x11033D72: call 0x11015a3d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11033D77: push esi */
    PUSH32(esp, eax); /* 0x11033D78: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033D79: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033D7C: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11033D81: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11033D84:
    eax = MEM32(ebp + (-0x10)); /* 0x11033D84: mov eax, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x11033D87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033DFF; /* 0x11033D89: je 0x11033dff */
L_11033D8B:
    /* test edi, edi */ /* 0x11033D8B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11033DE0; /* 0x11033D8D: jne 0x11033de0 */
L_11033D8F:
    PUSH32(esp, 0x18u); /* 0x11033D8F: push 0x18 */
    RECOMP_CALL(sub_1103B120); /* 0x11033D91: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11033D96: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11033D98: pop ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11033D99: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 7; /* 0x11033D9C: mov dword ptr [ebp - 4], 7 */
    /* test esi, esi */ /* 0x11033DA3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033DC1; /* 0x11033DA5: je 0x11033dc1 */
L_11033DA7:
    MEM32(esi + 0x4) = ebx; /* 0x11033DA7: mov dword ptr [esi + 4], ebx */
    PUSH32(esp, ebx); /* 0x11033DAA: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11033DAB: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x11033DAE: mov ecx, esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x11033DB0: mov byte ptr [ebp - 4], 8 */
    MEM32(esi) = 0x110020A0u; /* 0x11033DB4: mov dword ptr [esi], 0x110020a0 */
    RECOMP_CALL(sub_11021966); /* 0x11033DBA: call 0x11021966 */
    RECOMP_FLAGS_IN();
    goto L_11033DC3; /* 0x11033DBF: jmp 0x11033dc3 */
L_11033DC1:
    esi = ebx; /* 0x11033DC1: mov esi, ebx */
L_11033DC3:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11033DC3: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x11066200u; /* 0x11033DC7: mov ecx, 0x11066200 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033DCC: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11033DD1: push eax */
    PUSH32(esp, esi); /* 0x11033DD2: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033DD3: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033DD6: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11033DDB: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11033DFF; /* 0x11033DDE: jmp 0x11033dff */
L_11033DE0:
    ecx = 0x11066200u; /* 0x11033DE0: mov ecx, 0x11066200 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033DE5: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11033DEA: push edi */
    esi = eax; /* 0x11033DEB: mov esi, eax */
    RECOMP_CALL(sub_11015C0B); /* 0x11033DED: call 0x11015c0b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11033DF2: push esi */
    PUSH32(esp, eax); /* 0x11033DF3: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033DF4: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033DF7: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11033DFC: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11033DFF:
    PUSH32(esp, ebx); /* 0x11033DFF: push ebx */
    PUSH32(esp, ebx); /* 0x11033E00: push ebx */
    RECOMP_CALL(sub_11031FAA); /* 0x11033E01: call 0x11031faa */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11033E06: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x11033E08: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11033E09: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11033E0A: inc edx */
    _flag_k = FK_INC;
    ecx = eax; /* 0x11033E0B: mov ecx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x11033E0D: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x11033E0D: shl edx, cl */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x11033E0F: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    /* test MEM32(ebp + 0xC), edx */ /* 0x11033E11: test dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033E78; /* 0x11033E14: je 0x11033e78 */
L_11033E16:
    /* test edi, edi */ /* 0x11033E16: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11033E59; /* 0x11033E18: jne 0x11033e59 */
L_11033E1A:
    PUSH32(esp, 0x10u); /* 0x11033E1A: push 0x10 */
    RECOMP_CALL(sub_1103B120); /* 0x11033E1C: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11033E21: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11033E23: pop ecx */
    /* test esi, esi */ /* 0x11033E24: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033E3E; /* 0x11033E26: je 0x11033e3e */
L_11033E28:
    MEM32(esi + 0x4) = ebx; /* 0x11033E28: mov dword ptr [esi + 4], ebx */
    MEM32(esi) = 0x11003490u; /* 0x11033E2B: mov dword ptr [esi], 0x11003490 */
    RECOMP_CALL(sub_1102D8EF); /* 0x11033E31: call 0x1102d8ef */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x11033E36: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0xC) = edx; /* 0x11033E39: mov dword ptr [esi + 0xc], edx */
    goto L_11033E40; /* 0x11033E3C: jmp 0x11033e40 */
L_11033E3E:
    esi = ebx; /* 0x11033E3E: mov esi, ebx */
L_11033E40:
    ecx = 0x11066268u; /* 0x11033E40: mov ecx, 0x11066268 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033E45: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11033E4A: push eax */
    PUSH32(esp, esi); /* 0x11033E4B: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033E4C: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033E4F: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11033E54: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11033E78; /* 0x11033E57: jmp 0x11033e78 */
L_11033E59:
    ecx = 0x11066268u; /* 0x11033E59: mov ecx, 0x11066268 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033E5E: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11033E63: push edi */
    esi = eax; /* 0x11033E64: mov esi, eax */
    RECOMP_CALL(sub_110314CB); /* 0x11033E66: call 0x110314cb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11033E6B: push esi */
    PUSH32(esp, eax); /* 0x11033E6C: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033E6D: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033E70: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11033E75: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11033E78:
    edx = MEM32(ebp + 0xC); /* 0x11033E78: mov edx, dword ptr [ebp + 0xc] */
    /* test LO8(edx), 0x20u */ /* 0x11033E7B: test dl, 0x20 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033EDA; /* 0x11033E7E: je 0x11033eda */
L_11033E80:
    /* test edi, edi */ /* 0x11033E80: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11033EB8; /* 0x11033E82: jne 0x11033eb8 */
L_11033E84:
    PUSH32(esp, 8); /* 0x11033E84: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x11033E86: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11033E8B: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11033E8D: pop ecx */
    /* test esi, esi */ /* 0x11033E8E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033E9D; /* 0x11033E90: je 0x11033e9d */
L_11033E92:
    MEM32(esi + 0x4) = ebx; /* 0x11033E92: mov dword ptr [esi + 4], ebx */
    MEM32(esi) = 0x110034ACu; /* 0x11033E95: mov dword ptr [esi], 0x110034ac */
    goto L_11033E9F; /* 0x11033E9B: jmp 0x11033e9f */
L_11033E9D:
    esi = ebx; /* 0x11033E9D: mov esi, ebx */
L_11033E9F:
    ecx = 0x11066214u; /* 0x11033E9F: mov ecx, 0x11066214 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033EA4: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11033EA9: push eax */
    PUSH32(esp, esi); /* 0x11033EAA: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033EAB: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033EAE: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11033EB3: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11033ED7; /* 0x11033EB6: jmp 0x11033ed7 */
L_11033EB8:
    ecx = 0x11066214u; /* 0x11033EB8: mov ecx, 0x11066214 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033EBD: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11033EC2: push edi */
    esi = eax; /* 0x11033EC3: mov esi, eax */
    RECOMP_CALL(sub_110315FF); /* 0x11033EC5: call 0x110315ff */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11033ECA: push esi */
    PUSH32(esp, eax); /* 0x11033ECB: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033ECC: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033ECF: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11033ED4: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11033ED7:
    edx = MEM32(ebp + 0xC); /* 0x11033ED7: mov edx, dword ptr [ebp + 0xc] */
L_11033EDA:
    eax = edx; /* 0x11033EDA: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x11033EDC: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x11033EDF: mov dword ptr [ebp - 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033F3E; /* 0x11033EE2: je 0x11033f3e */
L_11033EE4:
    /* test edi, edi */ /* 0x11033EE4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11033F1C; /* 0x11033EE6: jne 0x11033f1c */
L_11033EE8:
    PUSH32(esp, 8); /* 0x11033EE8: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x11033EEA: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11033EEF: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11033EF1: pop ecx */
    /* test esi, esi */ /* 0x11033EF2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033F01; /* 0x11033EF4: je 0x11033f01 */
L_11033EF6:
    MEM32(esi + 0x4) = ebx; /* 0x11033EF6: mov dword ptr [esi + 4], ebx */
    MEM32(esi) = 0x110034C8u; /* 0x11033EF9: mov dword ptr [esi], 0x110034c8 */
    goto L_11033F03; /* 0x11033EFF: jmp 0x11033f03 */
L_11033F01:
    esi = ebx; /* 0x11033F01: mov esi, ebx */
L_11033F03:
    ecx = 0x11066240u; /* 0x11033F03: mov ecx, 0x11066240 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033F08: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11033F0D: push eax */
    PUSH32(esp, esi); /* 0x11033F0E: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033F0F: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033F12: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11033F17: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11033F3B; /* 0x11033F1A: jmp 0x11033f3b */
L_11033F1C:
    ecx = 0x11066240u; /* 0x11033F1C: mov ecx, 0x11066240 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033F21: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11033F26: push edi */
    esi = eax; /* 0x11033F27: mov esi, eax */
    RECOMP_CALL(sub_11031733); /* 0x11033F29: call 0x11031733 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11033F2E: push esi */
    PUSH32(esp, eax); /* 0x11033F2F: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033F30: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033F33: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11033F38: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11033F3B:
    eax = MEM32(ebp + (-0x10)); /* 0x11033F3B: mov eax, dword ptr [ebp - 0x10] */
L_11033F3E:
    /* test eax, eax */ /* 0x11033F3E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110340AA; /* 0x11033F40: je 0x110340aa */
L_11033F46:
    /* test edi, edi */ /* 0x11033F46: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11033F7E; /* 0x11033F48: jne 0x11033f7e */
L_11033F4A:
    PUSH32(esp, 8); /* 0x11033F4A: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x11033F4C: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11033F51: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11033F53: pop ecx */
    /* test esi, esi */ /* 0x11033F54: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033F63; /* 0x11033F56: je 0x11033f63 */
L_11033F58:
    MEM32(esi + 0x4) = ebx; /* 0x11033F58: mov dword ptr [esi + 4], ebx */
    MEM32(esi) = 0x110034E0u; /* 0x11033F5B: mov dword ptr [esi], 0x110034e0 */
    goto L_11033F65; /* 0x11033F61: jmp 0x11033f65 */
L_11033F63:
    esi = ebx; /* 0x11033F63: mov esi, ebx */
L_11033F65:
    ecx = 0x11066244u; /* 0x11033F65: mov ecx, 0x11066244 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033F6A: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11033F6F: push eax */
    PUSH32(esp, esi); /* 0x11033F70: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033F71: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033F74: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11033F79: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11033F9D; /* 0x11033F7C: jmp 0x11033f9d */
L_11033F7E:
    ecx = 0x11066244u; /* 0x11033F7E: mov ecx, 0x11066244 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033F83: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11033F88: push edi */
    esi = eax; /* 0x11033F89: mov esi, eax */
    RECOMP_CALL(sub_11031867); /* 0x11033F8B: call 0x11031867 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11033F90: push esi */
    PUSH32(esp, eax); /* 0x11033F91: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033F92: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033F95: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11033F9A: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11033F9D:
    eax = MEM32(ebp + (-0x10)); /* 0x11033F9D: mov eax, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x11033FA0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110340AA; /* 0x11033FA2: je 0x110340aa */
L_11033FA8:
    /* test edi, edi */ /* 0x11033FA8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11034006; /* 0x11033FAA: jne 0x11034006 */
L_11033FAC:
    PUSH32(esp, 0x58u); /* 0x11033FAC: push 0x58 */
    RECOMP_CALL(sub_1103B120); /* 0x11033FAE: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11033FB3: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11033FB5: pop ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x11033FB6: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x4)) = 0x10u; /* 0x11033FB9: mov dword ptr [ebp - 4], 0x10 */
    /* test esi, esi */ /* 0x11033FC0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11033FE7; /* 0x11033FC2: je 0x11033fe7 */
L_11033FC4:
    MEM32(esi + 0x4) = ebx; /* 0x11033FC4: mov dword ptr [esi + 4], ebx */
    PUSH32(esp, ebx); /* 0x11033FC7: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11033FC8: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x11033FCB: mov ecx, esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x11u); /* 0x11033FCD: mov byte ptr [ebp - 4], 0x11 */
    MEM32(esi) = 0x110034F8u; /* 0x11033FD1: mov dword ptr [esi], 0x110034f8 */
    MEM8(esi + 0x28) = (uint8_t)(LO8(ebx)); /* 0x11033FD7: mov byte ptr [esi + 0x28], bl */
    RECOMP_CALL(sub_11033A6A); /* 0x11033FDA: call 0x11033a6a */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1100352Cu; /* 0x11033FDF: mov dword ptr [esi], 0x1100352c */
    goto L_11033FE9; /* 0x11033FE5: jmp 0x11033fe9 */
L_11033FE7:
    esi = ebx; /* 0x11033FE7: mov esi, ebx */
L_11033FE9:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11033FE9: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x1106623Cu; /* 0x11033FED: mov ecx, 0x1106623c */
    RECOMP_CALL(sub_1100E2D9); /* 0x11033FF2: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11033FF7: push eax */
    PUSH32(esp, esi); /* 0x11033FF8: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11033FF9: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11033FFC: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11034001: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11034025; /* 0x11034004: jmp 0x11034025 */
L_11034006:
    ecx = 0x1106623Cu; /* 0x11034006: mov ecx, 0x1106623c */
    RECOMP_CALL(sub_1100E2D9); /* 0x1103400B: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11034010: push edi */
    esi = eax; /* 0x11034011: mov esi, eax */
    RECOMP_CALL(sub_11031A35); /* 0x11034013: call 0x11031a35 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11034018: push esi */
    PUSH32(esp, eax); /* 0x11034019: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103401A: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x1103401D: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11034022: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11034025:
    eax = MEM32(ebp + (-0x10)); /* 0x11034025: mov eax, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x11034028: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110340AA; /* 0x1103402A: je 0x110340aa */
L_1103402C:
    /* test edi, edi */ /* 0x1103402C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103408B; /* 0x1103402E: jne 0x1103408b */
L_11034030:
    PUSH32(esp, 0x58u); /* 0x11034030: push 0x58 */
    RECOMP_CALL(sub_1103B120); /* 0x11034032: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11034037: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11034039: pop ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1103403A: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x4)) = 0x16u; /* 0x1103403D: mov dword ptr [ebp - 4], 0x16 */
    /* test esi, esi */ /* 0x11034044: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103406C; /* 0x11034046: je 0x1103406c */
L_11034048:
    MEM32(esi + 0x4) = ebx; /* 0x11034048: mov dword ptr [esi + 4], ebx */
    PUSH32(esp, ebx); /* 0x1103404B: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103404C: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1103404F: mov ecx, esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x17u); /* 0x11034051: mov byte ptr [ebp - 4], 0x17 */
    MEM32(esi) = 0x110034F8u; /* 0x11034055: mov dword ptr [esi], 0x110034f8 */
    MEM8(esi + 0x28) = (uint8_t)(1); /* 0x1103405B: mov byte ptr [esi + 0x28], 1 */
    RECOMP_CALL(sub_11033A6A); /* 0x1103405F: call 0x11033a6a */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11003560u; /* 0x11034064: mov dword ptr [esi], 0x11003560 */
    goto L_1103406E; /* 0x1103406A: jmp 0x1103406e */
L_1103406C:
    esi = ebx; /* 0x1103406C: mov esi, ebx */
L_1103406E:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1103406E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x11066238u; /* 0x11034072: mov ecx, 0x11066238 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034077: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1103407C: push eax */
    PUSH32(esp, esi); /* 0x1103407D: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103407E: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11034081: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11034086: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_110340AA; /* 0x11034089: jmp 0x110340aa */
L_1103408B:
    ecx = 0x11066238u; /* 0x1103408B: mov ecx, 0x11066238 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034090: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11034095: push edi */
    esi = eax; /* 0x11034096: mov esi, eax */
    RECOMP_CALL(sub_1103199B); /* 0x11034098: call 0x1103199b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1103409D: push esi */
    PUSH32(esp, eax); /* 0x1103409E: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103409F: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x110340A2: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110340A7: add esp, 0x10 */
    _flag_k = FK_ADD;
L_110340AA:
    eax = MEM32(ebp + 0xC); /* 0x110340AA: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x110340AD: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x110340B0: mov dword ptr [ebp + 0xc], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103411F; /* 0x110340B3: je 0x1103411f */
L_110340B5:
    /* test edi, edi */ /* 0x110340B5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110340FD; /* 0x110340B7: jne 0x110340fd */
L_110340B9:
    PUSH32(esp, 0x44u); /* 0x110340B9: push 0x44 */
    RECOMP_CALL(sub_1103B120); /* 0x110340BB: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110340C0: pop ecx */
    MEM32(ebp + (-0x18)) = eax; /* 0x110340C1: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x4)) = 0x1Bu; /* 0x110340C4: mov dword ptr [ebp - 4], 0x1b */
    /* test eax, eax */ /* 0x110340CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110340DE; /* 0x110340CD: je 0x110340de */
L_110340CF:
    PUSH32(esp, ebx); /* 0x110340CF: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110340D0: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x110340D3: mov ecx, eax */
    RECOMP_CALL(sub_1101703C); /* 0x110340D5: call 0x1101703c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110340DA: mov esi, eax */
    goto L_110340E0; /* 0x110340DC: jmp 0x110340e0 */
L_110340DE:
    esi = ebx; /* 0x110340DE: mov esi, ebx */
L_110340E0:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110340E0: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x11066258u; /* 0x110340E4: mov ecx, 0x11066258 */
    RECOMP_CALL(sub_1100E2D9); /* 0x110340E9: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110340EE: push eax */
    PUSH32(esp, esi); /* 0x110340EF: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110340F0: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x110340F3: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110340F8: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1103411C; /* 0x110340FB: jmp 0x1103411c */
L_110340FD:
    ecx = 0x11066258u; /* 0x110340FD: mov ecx, 0x11066258 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034102: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11034107: push edi */
    esi = eax; /* 0x11034108: mov esi, eax */
    RECOMP_CALL(sub_11031C03); /* 0x1103410A: call 0x11031c03 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1103410F: push esi */
    PUSH32(esp, eax); /* 0x11034110: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034111: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11034114: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11034119: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1103411C:
    eax = MEM32(ebp + 0xC); /* 0x1103411C: mov eax, dword ptr [ebp + 0xc] */
L_1103411F:
    /* test eax, eax */ /* 0x1103411F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11034187; /* 0x11034121: je 0x11034187 */
L_11034123:
    /* test edi, edi */ /* 0x11034123: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11034168; /* 0x11034125: jne 0x11034168 */
L_11034127:
    PUSH32(esp, 0xCu); /* 0x11034127: push 0xc */
    RECOMP_CALL(sub_1103B120); /* 0x11034129: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1103412E: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11034130: pop ecx */
    /* test esi, esi */ /* 0x11034131: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103414D; /* 0x11034133: je 0x1103414d */
L_11034135:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11034135: push dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = ebx; /* 0x11034138: mov dword ptr [esi + 4], ebx */
    ecx = esi; /* 0x1103413B: mov ecx, esi */
    MEM32(esi) = 0x11002274u; /* 0x1103413D: mov dword ptr [esi], 0x11002274 */
    MEM32(esi + 0x8) = ebx; /* 0x11034143: mov dword ptr [esi + 8], ebx */
    RECOMP_CALL(sub_11021C5F); /* 0x11034146: call 0x11021c5f */
    RECOMP_FLAGS_IN();
    goto L_1103414F; /* 0x1103414B: jmp 0x1103414f */
L_1103414D:
    esi = ebx; /* 0x1103414D: mov esi, ebx */
L_1103414F:
    ecx = 0x1106625Cu; /* 0x1103414F: mov ecx, 0x1106625c */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034154: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11034159: push eax */
    PUSH32(esp, esi); /* 0x1103415A: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103415B: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x1103415E: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11034163: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11034187; /* 0x11034166: jmp 0x11034187 */
L_11034168:
    ecx = 0x1106625Cu; /* 0x11034168: mov ecx, 0x1106625c */
    RECOMP_CALL(sub_1100E2D9); /* 0x1103416D: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11034172: push edi */
    esi = eax; /* 0x11034173: mov esi, eax */
    RECOMP_CALL(sub_11031D37); /* 0x11034175: call 0x11031d37 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1103417A: push esi */
    PUSH32(esp, eax); /* 0x1103417B: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103417C: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x1103417F: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11034184: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11034187:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x11034187: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110341E2; /* 0x1103418B: je 0x110341e2 */
L_1103418D:
    /* test edi, edi */ /* 0x1103418D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110341C3; /* 0x1103418F: jne 0x110341c3 */
L_11034191:
    PUSH32(esp, 0x34u); /* 0x11034191: push 0x34 */
    RECOMP_CALL(sub_1103B120); /* 0x11034193: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11034198: pop ecx */
    /* test eax, eax */ /* 0x11034199: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110341AA; /* 0x1103419B: je 0x110341aa */
L_1103419D:
    PUSH32(esp, ebx); /* 0x1103419D: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103419E: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x110341A1: mov ecx, eax */
    RECOMP_CALL(sub_1100EA25); /* 0x110341A3: call 0x1100ea25 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x110341A8: mov ebx, eax */
L_110341AA:
    ecx = 0x11068A80u; /* 0x110341AA: mov ecx, 0x11068a80 */
    RECOMP_CALL(sub_1100E2D9); /* 0x110341AF: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110341B4: push eax */
    PUSH32(esp, ebx); /* 0x110341B5: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110341B6: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x110341B9: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110341BE: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_110341E2; /* 0x110341C1: jmp 0x110341e2 */
L_110341C3:
    ecx = 0x11068A80u; /* 0x110341C3: mov ecx, 0x11068a80 */
    RECOMP_CALL(sub_1100E2D9); /* 0x110341C8: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x110341CD: push edi */
    esi = eax; /* 0x110341CE: mov esi, eax */
    RECOMP_CALL(sub_1102CA30); /* 0x110341D0: call 0x1102ca30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110341D5: push esi */
    PUSH32(esp, eax); /* 0x110341D6: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110341D7: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x110341DA: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110341DF: add esp, 0x10 */
    _flag_k = FK_ADD;
L_110341E2:
    RECOMP_CALL(sub_1103B340); /* 0x110341E2: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110341E7: ret  */
    RECOMP_REGS_OUT();
}

void sub_110341E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110341E8u);

L_110341E8:
    PUSH32(esp, 0xCu); /* 0x110341E8: push 0xc */
    eax = 0x1103F1A3u; /* 0x110341EA: mov eax, 0x1103f1a3 */
    RECOMP_CALL(sub_1103B372); /* 0x110341EF: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x110341F4: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110341F7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x14); /* 0x110341F9: mov edi, dword ptr [ebp + 0x14] */
    ecx = eax; /* 0x110341FC: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    ecx = ecx & 2; /* 0x110341FE: and ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ebx; /* 0x11034201: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x11034204: mov dword ptr [ebp - 0x14], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103426D; /* 0x11034207: je 0x1103426d */
L_11034209:
    /* test edi, edi */ /* 0x11034209: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103424B; /* 0x1103420B: jne 0x1103424b */
L_1103420D:
    PUSH32(esp, 0x44u); /* 0x1103420D: push 0x44 */
    RECOMP_CALL(sub_1103B120); /* 0x1103420F: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11034214: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11034216: pop ecx */
    /* test esi, esi */ /* 0x11034217: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11034230; /* 0x11034219: je 0x11034230 */
L_1103421B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103421B: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1103421E: mov ecx, esi */
    MEM32(esi + 0x4) = ebx; /* 0x11034220: mov dword ptr [esi + 4], ebx */
    MEM32(esi) = 0x110015B0u; /* 0x11034223: mov dword ptr [esi], 0x110015b0 */
    RECOMP_CALL(sub_1100EFF0); /* 0x11034229: call 0x1100eff0 */
    RECOMP_FLAGS_IN();
    goto L_11034232; /* 0x1103422E: jmp 0x11034232 */
L_11034230:
    esi = ebx; /* 0x11034230: mov esi, ebx */
L_11034232:
    ecx = 0x11068A88u; /* 0x11034232: mov ecx, 0x11068a88 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034237: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1103423C: push eax */
    PUSH32(esp, esi); /* 0x1103423D: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103423E: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11034241: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11034246: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1103426A; /* 0x11034249: jmp 0x1103426a */
L_1103424B:
    ecx = 0x11068A88u; /* 0x1103424B: mov ecx, 0x11068a88 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034250: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11034255: push edi */
    esi = eax; /* 0x11034256: mov esi, eax */
    RECOMP_CALL(sub_11010FA4); /* 0x11034258: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1103425D: push esi */
    PUSH32(esp, eax); /* 0x1103425E: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103425F: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11034262: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11034267: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1103426A:
    eax = MEM32(ebp + 0xC); /* 0x1103426A: mov eax, dword ptr [ebp + 0xc] */
L_1103426D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x1103426D: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x11034270: mov dword ptr [ebp - 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_110342CF; /* 0x11034273: je 0x110342cf */
L_11034275:
    /* test edi, edi */ /* 0x11034275: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110342AD; /* 0x11034277: jne 0x110342ad */
L_11034279:
    PUSH32(esp, 8); /* 0x11034279: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1103427B: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11034280: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11034282: pop ecx */
    /* test esi, esi */ /* 0x11034283: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11034292; /* 0x11034285: je 0x11034292 */
L_11034287:
    MEM32(esi + 0x4) = ebx; /* 0x11034287: mov dword ptr [esi + 4], ebx */
    MEM32(esi) = 0x11002034u; /* 0x1103428A: mov dword ptr [esi], 0x11002034 */
    goto L_11034294; /* 0x11034290: jmp 0x11034294 */
L_11034292:
    esi = ebx; /* 0x11034292: mov esi, ebx */
L_11034294:
    ecx = 0x110661F8u; /* 0x11034294: mov ecx, 0x110661f8 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034299: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1103429E: push eax */
    PUSH32(esp, esi); /* 0x1103429F: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110342A0: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x110342A3: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110342A8: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_110342CC; /* 0x110342AB: jmp 0x110342cc */
L_110342AD:
    ecx = 0x110661F8u; /* 0x110342AD: mov ecx, 0x110661f8 */
    RECOMP_CALL(sub_1100E2D9); /* 0x110342B2: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x110342B7: push edi */
    esi = eax; /* 0x110342B8: mov esi, eax */
    RECOMP_CALL(sub_11015909); /* 0x110342BA: call 0x11015909 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110342BF: push esi */
    PUSH32(esp, eax); /* 0x110342C0: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110342C1: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x110342C4: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110342C9: add esp, 0x10 */
    _flag_k = FK_ADD;
L_110342CC:
    eax = MEM32(ebp + (-0x10)); /* 0x110342CC: mov eax, dword ptr [ebp - 0x10] */
L_110342CF:
    /* test eax, eax */ /* 0x110342CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110343A9; /* 0x110342D1: je 0x110343a9 */
L_110342D7:
    /* test edi, edi */ /* 0x110342D7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103430F; /* 0x110342D9: jne 0x1103430f */
L_110342DB:
    PUSH32(esp, 8); /* 0x110342DB: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x110342DD: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110342E2: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x110342E4: pop ecx */
    /* test esi, esi */ /* 0x110342E5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110342F4; /* 0x110342E7: je 0x110342f4 */
L_110342E9:
    MEM32(esi + 0x4) = ebx; /* 0x110342E9: mov dword ptr [esi + 4], ebx */
    MEM32(esi) = 0x11002070u; /* 0x110342EC: mov dword ptr [esi], 0x11002070 */
    goto L_110342F6; /* 0x110342F2: jmp 0x110342f6 */
L_110342F4:
    esi = ebx; /* 0x110342F4: mov esi, ebx */
L_110342F6:
    ecx = 0x110661FCu; /* 0x110342F6: mov ecx, 0x110661fc */
    RECOMP_CALL(sub_1100E2D9); /* 0x110342FB: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11034300: push eax */
    PUSH32(esp, esi); /* 0x11034301: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034302: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11034305: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103430A: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1103432E; /* 0x1103430D: jmp 0x1103432e */
L_1103430F:
    ecx = 0x110661FCu; /* 0x1103430F: mov ecx, 0x110661fc */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034314: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11034319: push edi */
    esi = eax; /* 0x1103431A: mov esi, eax */
    RECOMP_CALL(sub_11015AD7); /* 0x1103431C: call 0x11015ad7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11034321: push esi */
    PUSH32(esp, eax); /* 0x11034322: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034323: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11034326: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103432B: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1103432E:
    eax = MEM32(ebp + (-0x10)); /* 0x1103432E: mov eax, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x11034331: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110343A9; /* 0x11034333: je 0x110343a9 */
L_11034335:
    /* test edi, edi */ /* 0x11034335: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103438A; /* 0x11034337: jne 0x1103438a */
L_11034339:
    PUSH32(esp, 0x18u); /* 0x11034339: push 0x18 */
    RECOMP_CALL(sub_1103B120); /* 0x1103433B: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11034340: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11034342: pop ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x11034343: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 7; /* 0x11034346: mov dword ptr [ebp - 4], 7 */
    /* test esi, esi */ /* 0x1103434D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103436B; /* 0x1103434F: je 0x1103436b */
L_11034351:
    MEM32(esi + 0x4) = ebx; /* 0x11034351: mov dword ptr [esi + 4], ebx */
    PUSH32(esp, ebx); /* 0x11034354: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11034355: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x11034358: mov ecx, esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x1103435A: mov byte ptr [ebp - 4], 8 */
    MEM32(esi) = 0x11002010u; /* 0x1103435E: mov dword ptr [esi], 0x11002010 */
    RECOMP_CALL(sub_11021A60); /* 0x11034364: call 0x11021a60 */
    RECOMP_FLAGS_IN();
    goto L_1103436D; /* 0x11034369: jmp 0x1103436d */
L_1103436B:
    esi = ebx; /* 0x1103436B: mov esi, ebx */
L_1103436D:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1103436D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x11065F14u; /* 0x11034371: mov ecx, 0x11065f14 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034376: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1103437B: push eax */
    PUSH32(esp, esi); /* 0x1103437C: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103437D: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11034380: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11034385: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_110343A9; /* 0x11034388: jmp 0x110343a9 */
L_1103438A:
    ecx = 0x11065F14u; /* 0x1103438A: mov ecx, 0x11065f14 */
    RECOMP_CALL(sub_1100E2D9); /* 0x1103438F: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11034394: push edi */
    esi = eax; /* 0x11034395: mov esi, eax */
    RECOMP_CALL(sub_11015CA5); /* 0x11034397: call 0x11015ca5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1103439C: push esi */
    PUSH32(esp, eax); /* 0x1103439D: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103439E: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x110343A1: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110343A6: add esp, 0x10 */
    _flag_k = FK_ADD;
L_110343A9:
    PUSH32(esp, ebx); /* 0x110343A9: push ebx */
    PUSH32(esp, ebx); /* 0x110343AA: push ebx */
    RECOMP_CALL(sub_11032050); /* 0x110343AB: call 0x11032050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x110343B0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x110343B2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110343B3: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x110343B4: inc edx */
    _flag_k = FK_INC;
    ecx = eax; /* 0x110343B5: mov ecx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x110343B7: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x110343B7: shl edx, cl */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x110343B9: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    /* test MEM32(ebp + 0xC), edx */ /* 0x110343BB: test dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11034422; /* 0x110343BE: je 0x11034422 */
L_110343C0:
    /* test edi, edi */ /* 0x110343C0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11034403; /* 0x110343C2: jne 0x11034403 */
L_110343C4:
    PUSH32(esp, 0x10u); /* 0x110343C4: push 0x10 */
    RECOMP_CALL(sub_1103B120); /* 0x110343C6: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110343CB: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x110343CD: pop ecx */
    /* test esi, esi */ /* 0x110343CE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110343E8; /* 0x110343D0: je 0x110343e8 */
L_110343D2:
    MEM32(esi + 0x4) = ebx; /* 0x110343D2: mov dword ptr [esi + 4], ebx */
    MEM32(esi) = 0x1100338Cu; /* 0x110343D5: mov dword ptr [esi], 0x1100338c */
    RECOMP_CALL(sub_1102D8EF); /* 0x110343DB: call 0x1102d8ef */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x110343E0: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0xC) = edx; /* 0x110343E3: mov dword ptr [esi + 0xc], edx */
    goto L_110343EA; /* 0x110343E6: jmp 0x110343ea */
L_110343E8:
    esi = ebx; /* 0x110343E8: mov esi, ebx */
L_110343EA:
    ecx = 0x11066264u; /* 0x110343EA: mov ecx, 0x11066264 */
    RECOMP_CALL(sub_1100E2D9); /* 0x110343EF: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110343F4: push eax */
    PUSH32(esp, esi); /* 0x110343F5: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110343F6: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x110343F9: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110343FE: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11034422; /* 0x11034401: jmp 0x11034422 */
L_11034403:
    ecx = 0x11066264u; /* 0x11034403: mov ecx, 0x11066264 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034408: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1103440D: push edi */
    esi = eax; /* 0x1103440E: mov esi, eax */
    RECOMP_CALL(sub_11031565); /* 0x11034410: call 0x11031565 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11034415: push esi */
    PUSH32(esp, eax); /* 0x11034416: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034417: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x1103441A: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103441F: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11034422:
    edx = MEM32(ebp + 0xC); /* 0x11034422: mov edx, dword ptr [ebp + 0xc] */
    /* test LO8(edx), 0x20u */ /* 0x11034425: test dl, 0x20 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11034484; /* 0x11034428: je 0x11034484 */
L_1103442A:
    /* test edi, edi */ /* 0x1103442A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11034462; /* 0x1103442C: jne 0x11034462 */
L_1103442E:
    PUSH32(esp, 8); /* 0x1103442E: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x11034430: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11034435: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11034437: pop ecx */
    /* test esi, esi */ /* 0x11034438: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11034447; /* 0x1103443A: je 0x11034447 */
L_1103443C:
    MEM32(esi + 0x4) = ebx; /* 0x1103443C: mov dword ptr [esi + 4], ebx */
    MEM32(esi) = 0x110033A8u; /* 0x1103443F: mov dword ptr [esi], 0x110033a8 */
    goto L_11034449; /* 0x11034445: jmp 0x11034449 */
L_11034447:
    esi = ebx; /* 0x11034447: mov esi, ebx */
L_11034449:
    ecx = 0x11066210u; /* 0x11034449: mov ecx, 0x11066210 */
    RECOMP_CALL(sub_1100E2D9); /* 0x1103444E: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11034453: push eax */
    PUSH32(esp, esi); /* 0x11034454: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034455: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11034458: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103445D: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11034481; /* 0x11034460: jmp 0x11034481 */
L_11034462:
    ecx = 0x11066210u; /* 0x11034462: mov ecx, 0x11066210 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034467: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1103446C: push edi */
    esi = eax; /* 0x1103446D: mov esi, eax */
    RECOMP_CALL(sub_11031699); /* 0x1103446F: call 0x11031699 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11034474: push esi */
    PUSH32(esp, eax); /* 0x11034475: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034476: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11034479: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103447E: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11034481:
    edx = MEM32(ebp + 0xC); /* 0x11034481: mov edx, dword ptr [ebp + 0xc] */
L_11034484:
    eax = edx; /* 0x11034484: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x11034486: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x11034489: mov dword ptr [ebp - 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_110344E8; /* 0x1103448C: je 0x110344e8 */
L_1103448E:
    /* test edi, edi */ /* 0x1103448E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110344C6; /* 0x11034490: jne 0x110344c6 */
L_11034492:
    PUSH32(esp, 8); /* 0x11034492: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x11034494: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11034499: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1103449B: pop ecx */
    /* test esi, esi */ /* 0x1103449C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110344AB; /* 0x1103449E: je 0x110344ab */
L_110344A0:
    MEM32(esi + 0x4) = ebx; /* 0x110344A0: mov dword ptr [esi + 4], ebx */
    MEM32(esi) = 0x110033C4u; /* 0x110344A3: mov dword ptr [esi], 0x110033c4 */
    goto L_110344AD; /* 0x110344A9: jmp 0x110344ad */
L_110344AB:
    esi = ebx; /* 0x110344AB: mov esi, ebx */
L_110344AD:
    ecx = 0x11066230u; /* 0x110344AD: mov ecx, 0x11066230 */
    RECOMP_CALL(sub_1100E2D9); /* 0x110344B2: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110344B7: push eax */
    PUSH32(esp, esi); /* 0x110344B8: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110344B9: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x110344BC: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110344C1: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_110344E5; /* 0x110344C4: jmp 0x110344e5 */
L_110344C6:
    ecx = 0x11066230u; /* 0x110344C6: mov ecx, 0x11066230 */
    RECOMP_CALL(sub_1100E2D9); /* 0x110344CB: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x110344D0: push edi */
    esi = eax; /* 0x110344D1: mov esi, eax */
    RECOMP_CALL(sub_110317CD); /* 0x110344D3: call 0x110317cd */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110344D8: push esi */
    PUSH32(esp, eax); /* 0x110344D9: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110344DA: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x110344DD: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110344E2: add esp, 0x10 */
    _flag_k = FK_ADD;
L_110344E5:
    eax = MEM32(ebp + (-0x10)); /* 0x110344E5: mov eax, dword ptr [ebp - 0x10] */
L_110344E8:
    /* test eax, eax */ /* 0x110344E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11034654; /* 0x110344EA: je 0x11034654 */
L_110344F0:
    /* test edi, edi */ /* 0x110344F0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11034528; /* 0x110344F2: jne 0x11034528 */
L_110344F4:
    PUSH32(esp, 8); /* 0x110344F4: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x110344F6: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110344FB: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x110344FD: pop ecx */
    /* test esi, esi */ /* 0x110344FE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103450D; /* 0x11034500: je 0x1103450d */
L_11034502:
    MEM32(esi + 0x4) = ebx; /* 0x11034502: mov dword ptr [esi + 4], ebx */
    MEM32(esi) = 0x110033DCu; /* 0x11034505: mov dword ptr [esi], 0x110033dc */
    goto L_1103450F; /* 0x1103450B: jmp 0x1103450f */
L_1103450D:
    esi = ebx; /* 0x1103450D: mov esi, ebx */
L_1103450F:
    ecx = 0x11066234u; /* 0x1103450F: mov ecx, 0x11066234 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034514: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11034519: push eax */
    PUSH32(esp, esi); /* 0x1103451A: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103451B: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x1103451E: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11034523: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11034547; /* 0x11034526: jmp 0x11034547 */
L_11034528:
    ecx = 0x11066234u; /* 0x11034528: mov ecx, 0x11066234 */
    RECOMP_CALL(sub_1100E2D9); /* 0x1103452D: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11034532: push edi */
    esi = eax; /* 0x11034533: mov esi, eax */
    RECOMP_CALL(sub_11031901); /* 0x11034535: call 0x11031901 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1103453A: push esi */
    PUSH32(esp, eax); /* 0x1103453B: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103453C: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x1103453F: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11034544: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11034547:
    eax = MEM32(ebp + (-0x10)); /* 0x11034547: mov eax, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x1103454A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11034654; /* 0x1103454C: je 0x11034654 */
L_11034552:
    /* test edi, edi */ /* 0x11034552: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110345B0; /* 0x11034554: jne 0x110345b0 */
L_11034556:
    PUSH32(esp, 0x58u); /* 0x11034556: push 0x58 */
    RECOMP_CALL(sub_1103B120); /* 0x11034558: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1103455D: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1103455F: pop ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x11034560: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x4)) = 0x10u; /* 0x11034563: mov dword ptr [ebp - 4], 0x10 */
    /* test esi, esi */ /* 0x1103456A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11034591; /* 0x1103456C: je 0x11034591 */
L_1103456E:
    MEM32(esi + 0x4) = ebx; /* 0x1103456E: mov dword ptr [esi + 4], ebx */
    PUSH32(esp, ebx); /* 0x11034571: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11034572: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x11034575: mov ecx, esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x11u); /* 0x11034577: mov byte ptr [ebp - 4], 0x11 */
    MEM32(esi) = 0x110033F4u; /* 0x1103457B: mov dword ptr [esi], 0x110033f4 */
    MEM8(esi + 0x28) = (uint8_t)(LO8(ebx)); /* 0x11034581: mov byte ptr [esi + 0x28], bl */
    RECOMP_CALL(sub_11033B54); /* 0x11034584: call 0x11033b54 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11003428u; /* 0x11034589: mov dword ptr [esi], 0x11003428 */
    goto L_11034593; /* 0x1103458F: jmp 0x11034593 */
L_11034591:
    esi = ebx; /* 0x11034591: mov esi, ebx */
L_11034593:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11034593: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x1106622Cu; /* 0x11034597: mov ecx, 0x1106622c */
    RECOMP_CALL(sub_1100E2D9); /* 0x1103459C: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110345A1: push eax */
    PUSH32(esp, esi); /* 0x110345A2: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110345A3: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x110345A6: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110345AB: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_110345CF; /* 0x110345AE: jmp 0x110345cf */
L_110345B0:
    ecx = 0x1106622Cu; /* 0x110345B0: mov ecx, 0x1106622c */
    RECOMP_CALL(sub_1100E2D9); /* 0x110345B5: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x110345BA: push edi */
    esi = eax; /* 0x110345BB: mov esi, eax */
    RECOMP_CALL(sub_11031B69); /* 0x110345BD: call 0x11031b69 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110345C2: push esi */
    PUSH32(esp, eax); /* 0x110345C3: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110345C4: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x110345C7: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110345CC: add esp, 0x10 */
    _flag_k = FK_ADD;
L_110345CF:
    eax = MEM32(ebp + (-0x10)); /* 0x110345CF: mov eax, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x110345D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11034654; /* 0x110345D4: je 0x11034654 */
L_110345D6:
    /* test edi, edi */ /* 0x110345D6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11034635; /* 0x110345D8: jne 0x11034635 */
L_110345DA:
    PUSH32(esp, 0x58u); /* 0x110345DA: push 0x58 */
    RECOMP_CALL(sub_1103B120); /* 0x110345DC: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110345E1: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x110345E3: pop ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x110345E4: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x4)) = 0x16u; /* 0x110345E7: mov dword ptr [ebp - 4], 0x16 */
    /* test esi, esi */ /* 0x110345EE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11034616; /* 0x110345F0: je 0x11034616 */
L_110345F2:
    MEM32(esi + 0x4) = ebx; /* 0x110345F2: mov dword ptr [esi + 4], ebx */
    PUSH32(esp, ebx); /* 0x110345F5: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110345F6: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x110345F9: mov ecx, esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x17u); /* 0x110345FB: mov byte ptr [ebp - 4], 0x17 */
    MEM32(esi) = 0x110033F4u; /* 0x110345FF: mov dword ptr [esi], 0x110033f4 */
    MEM8(esi + 0x28) = (uint8_t)(1); /* 0x11034605: mov byte ptr [esi + 0x28], 1 */
    RECOMP_CALL(sub_11033B54); /* 0x11034609: call 0x11033b54 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1100345Cu; /* 0x1103460E: mov dword ptr [esi], 0x1100345c */
    goto L_11034618; /* 0x11034614: jmp 0x11034618 */
L_11034616:
    esi = ebx; /* 0x11034616: mov esi, ebx */
L_11034618:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11034618: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x11066228u; /* 0x1103461C: mov ecx, 0x11066228 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034621: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11034626: push eax */
    PUSH32(esp, esi); /* 0x11034627: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034628: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x1103462B: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11034630: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11034654; /* 0x11034633: jmp 0x11034654 */
L_11034635:
    ecx = 0x11066228u; /* 0x11034635: mov ecx, 0x11066228 */
    RECOMP_CALL(sub_1100E2D9); /* 0x1103463A: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1103463F: push edi */
    esi = eax; /* 0x11034640: mov esi, eax */
    RECOMP_CALL(sub_11031ACF); /* 0x11034642: call 0x11031acf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11034647: push esi */
    PUSH32(esp, eax); /* 0x11034648: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034649: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x1103464C: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11034651: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11034654:
    eax = MEM32(ebp + 0xC); /* 0x11034654: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x11034657: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x1103465A: mov dword ptr [ebp + 0xc], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_110346C9; /* 0x1103465D: je 0x110346c9 */
L_1103465F:
    /* test edi, edi */ /* 0x1103465F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110346A7; /* 0x11034661: jne 0x110346a7 */
L_11034663:
    PUSH32(esp, 0x44u); /* 0x11034663: push 0x44 */
    RECOMP_CALL(sub_1103B120); /* 0x11034665: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103466A: pop ecx */
    MEM32(ebp + (-0x18)) = eax; /* 0x1103466B: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x4)) = 0x1Bu; /* 0x1103466E: mov dword ptr [ebp - 4], 0x1b */
    /* test eax, eax */ /* 0x11034675: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11034688; /* 0x11034677: je 0x11034688 */
L_11034679:
    PUSH32(esp, ebx); /* 0x11034679: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103467A: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x1103467D: mov ecx, eax */
    RECOMP_CALL(sub_1101710B); /* 0x1103467F: call 0x1101710b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11034684: mov esi, eax */
    goto L_1103468A; /* 0x11034686: jmp 0x1103468a */
L_11034688:
    esi = ebx; /* 0x11034688: mov esi, ebx */
L_1103468A:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1103468A: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x11066250u; /* 0x1103468E: mov ecx, 0x11066250 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034693: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11034698: push eax */
    PUSH32(esp, esi); /* 0x11034699: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103469A: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x1103469D: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110346A2: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_110346C6; /* 0x110346A5: jmp 0x110346c6 */
L_110346A7:
    ecx = 0x11066250u; /* 0x110346A7: mov ecx, 0x11066250 */
    RECOMP_CALL(sub_1100E2D9); /* 0x110346AC: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x110346B1: push edi */
    esi = eax; /* 0x110346B2: mov esi, eax */
    RECOMP_CALL(sub_11031C9D); /* 0x110346B4: call 0x11031c9d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110346B9: push esi */
    PUSH32(esp, eax); /* 0x110346BA: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110346BB: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x110346BE: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110346C3: add esp, 0x10 */
    _flag_k = FK_ADD;
L_110346C6:
    eax = MEM32(ebp + 0xC); /* 0x110346C6: mov eax, dword ptr [ebp + 0xc] */
L_110346C9:
    /* test eax, eax */ /* 0x110346C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11034731; /* 0x110346CB: je 0x11034731 */
L_110346CD:
    /* test edi, edi */ /* 0x110346CD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11034712; /* 0x110346CF: jne 0x11034712 */
L_110346D1:
    PUSH32(esp, 0xCu); /* 0x110346D1: push 0xc */
    RECOMP_CALL(sub_1103B120); /* 0x110346D3: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110346D8: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x110346DA: pop ecx */
    /* test esi, esi */ /* 0x110346DB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110346F7; /* 0x110346DD: je 0x110346f7 */
L_110346DF:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110346DF: push dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = ebx; /* 0x110346E2: mov dword ptr [esi + 4], ebx */
    ecx = esi; /* 0x110346E5: mov ecx, esi */
    MEM32(esi) = 0x11002234u; /* 0x110346E7: mov dword ptr [esi], 0x11002234 */
    MEM32(esi + 0x8) = ebx; /* 0x110346ED: mov dword ptr [esi + 8], ebx */
    RECOMP_CALL(sub_11021C5F); /* 0x110346F0: call 0x11021c5f */
    RECOMP_FLAGS_IN();
    goto L_110346F9; /* 0x110346F5: jmp 0x110346f9 */
L_110346F7:
    esi = ebx; /* 0x110346F7: mov esi, ebx */
L_110346F9:
    ecx = 0x11066254u; /* 0x110346F9: mov ecx, 0x11066254 */
    RECOMP_CALL(sub_1100E2D9); /* 0x110346FE: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11034703: push eax */
    PUSH32(esp, esi); /* 0x11034704: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034705: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11034708: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103470D: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11034731; /* 0x11034710: jmp 0x11034731 */
L_11034712:
    ecx = 0x11066254u; /* 0x11034712: mov ecx, 0x11066254 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034717: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1103471C: push edi */
    esi = eax; /* 0x1103471D: mov esi, eax */
    RECOMP_CALL(sub_11031DD1); /* 0x1103471F: call 0x11031dd1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11034724: push esi */
    PUSH32(esp, eax); /* 0x11034725: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034726: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11034729: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103472E: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11034731:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x11034731: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103478C; /* 0x11034735: je 0x1103478c */
L_11034737:
    /* test edi, edi */ /* 0x11034737: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103476D; /* 0x11034739: jne 0x1103476d */
L_1103473B:
    PUSH32(esp, 0x34u); /* 0x1103473B: push 0x34 */
    RECOMP_CALL(sub_1103B120); /* 0x1103473D: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11034742: pop ecx */
    /* test eax, eax */ /* 0x11034743: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11034754; /* 0x11034745: je 0x11034754 */
L_11034747:
    PUSH32(esp, ebx); /* 0x11034747: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11034748: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x1103474B: mov ecx, eax */
    RECOMP_CALL(sub_1100E61D); /* 0x1103474D: call 0x1100e61d */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x11034752: mov ebx, eax */
L_11034754:
    ecx = 0x11068A8Cu; /* 0x11034754: mov ecx, 0x11068a8c */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034759: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1103475E: push eax */
    PUSH32(esp, ebx); /* 0x1103475F: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034760: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11034763: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11034768: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1103478C; /* 0x1103476B: jmp 0x1103478c */
L_1103476D:
    ecx = 0x11068A8Cu; /* 0x1103476D: mov ecx, 0x11068a8c */
    RECOMP_CALL(sub_1100E2D9); /* 0x11034772: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11034777: push edi */
    esi = eax; /* 0x11034778: mov esi, eax */
    RECOMP_CALL(sub_1102D0FA); /* 0x1103477A: call 0x1102d0fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1103477F: push esi */
    PUSH32(esp, eax); /* 0x11034780: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034781: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1102C459); /* 0x11034784: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11034789: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1103478C:
    RECOMP_CALL(sub_1103B340); /* 0x1103478C: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11034791: ret  */
    RECOMP_REGS_OUT();
}

void sub_11034792(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11034792u);

L_11034792:
    PUSH32(esp, ebp); /* 0x11034792: push ebp */
    ebp = esp; /* 0x11034793: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11034795: push esi */
    esi = MEM32(ebp + 0x18); /* 0x11034796: mov esi, dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x11034799: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110347B8; /* 0x1103479B: je 0x110347b8 */
L_1103479D:
    eax = MEM32(ebp + 0x14); /* 0x1103479D: mov eax, dword ptr [ebp + 0x14] */
L_110347A0:
    eax = (uint32_t)MEM16(eax); /* 0x110347A0: movzx eax, word ptr [eax] */
    ecx = ebp + 0xC; /* 0x110347A3: lea ecx, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110347A6: push eax */
    RECOMP_CALL(sub_1101778E); /* 0x110347A7: call 0x1101778e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x110347AC: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x110347AF: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = eax; /* 0x110347B2: mov dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x110347B5: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_110347A0; /* 0x110347B6: jne 0x110347a0 */
L_110347B8:
    eax = MEM32(ebp + 0x8); /* 0x110347B8: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x110347BB: mov ecx, dword ptr [ebp + 0xc] */
    esi = POP32_VAL(esp); /* 0x110347BE: pop esi */
    MEM32(eax) = ecx; /* 0x110347BF: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110347C1: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x110347C4: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x110347C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110347C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_110347C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110347C9u);

L_110347C9:
    PUSH32(esp, 0xD8u); /* 0x110347C9: push 0xd8 */
    eax = 0x1103F1F4u; /* 0x110347CE: mov eax, 0x1103f1f4 */
    RECOMP_CALL(sub_1103B3A5); /* 0x110347D3: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x110347D8: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x18); /* 0x110347DB: mov esi, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0xA4)) = eax; /* 0x110347DE: mov dword ptr [ebp - 0xa4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x110347E4: mov eax, dword ptr [ebp + 0x1c] */
    eax = (uint32_t)LO16(eax); /* 0x110347E7: movzx eax, ax */
    MEM32(ebp + (-0x8C)) = eax; /* 0x110347EA: mov dword ptr [ebp - 0x8c], eax */
    eax = MEM32(ebp + 0x3C); /* 0x110347F0: mov eax, dword ptr [ebp + 0x3c] */
    eax = (uint32_t)LO16(eax); /* 0x110347F3: movzx eax, ax */
    MEM32(ebp + (-0x88)) = esi; /* 0x110347F6: mov dword ptr [ebp - 0x88], esi */
    MEM32(ebp + (-0x98)) = eax; /* 0x110347FC: mov dword ptr [ebp - 0x98], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11034802: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x11034806: mov ecx, esi */
    /* cmp MEM8(ebp + 0x14), 0 */ /* 0x11034808: cmp byte ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11034835; /* 0x1103480C: je 0x11034835 */
L_1103480E:
    eax = ebp + (-0x9C); /* 0x1103480E: lea eax, [ebp - 0x9c] */
    PUSH32(esp, eax); /* 0x11034814: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11034815: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1103481A: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1103481B: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1103199B); /* 0x1103481F: call 0x1103199b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11034824: pop ecx */
    ebx = eax; /* 0x11034825: mov ebx, eax */
    ecx = ebp + (-0x9C); /* 0x11034827: lea ecx, [ebp - 0x9c] */
    MEM32(ebp + (-0x84)) = ebx; /* 0x1103482D: mov dword ptr [ebp - 0x84], ebx */
    goto L_1103485A; /* 0x11034833: jmp 0x1103485a */
L_11034835:
    eax = ebp + (-0xA0); /* 0x11034835: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x1103483B: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x1103483C: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11034841: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11034842: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11031A35); /* 0x11034846: call 0x11031a35 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103484B: pop ecx */
    ebx = eax; /* 0x1103484C: mov ebx, eax */
    MEM32(ebp + (-0x84)) = eax; /* 0x1103484E: mov dword ptr [ebp - 0x84], eax */
    ecx = ebp + (-0xA0); /* 0x11034854: lea ecx, [ebp - 0xa0] */
L_1103485A:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1103485A: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_1100E431); /* 0x1103485E: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x11034863: lea eax, [ebp - 0x40] */
    ecx = ebx; /* 0x11034866: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x11034868: push eax */
    RECOMP_CALL(sub_110292E9); /* 0x11034869: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x1103486E: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11034870: mov ecx, ebx */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11034872: mov byte ptr [ebp - 4], 3 */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x11034876: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11034879: cdq  */
    edi = eax; /* 0x1103487A: mov edi, eax */
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x1103487C: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x1103487E: sub edi, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x78)) = edi; /* 0x11034880: mov dword ptr [ebp - 0x78], edi */
    /* cmp MEM32(ebp + 0x34), edi */ /* 0x11034883: cmp dword ptr [ebp + 0x34], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110348A4; /* 0x11034886: ja 0x110348a4 */
L_11034888:
    PUSH32(esp, MEM32(ebp + (-0x98))); /* 0x11034888: push dword ptr [ebp - 0x98] */
    ecx = edi; /* 0x1103488E: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0x34); /* 0x11034890: sub ecx, dword ptr [ebp + 0x34] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11034893: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, ecx); /* 0x11034894: push ecx */
    PUSH32(esp, 0); /* 0x11034895: push 0 */
    ecx = ebp + 0x24; /* 0x11034897: lea ecx, [ebp + 0x24] */
    RECOMP_CALL(sub_1102985D); /* 0x1103489A: call 0x1102985d */
    RECOMP_FLAGS_IN();
    goto L_11034925; /* 0x1103489F: jmp 0x11034925 */
L_110348A4:
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x110348A4: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x40)); /* 0x110348A8: mov eax, dword ptr [ebp - 0x40] */
    ecx = eax; /* 0x110348AB: mov ecx, eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110348B2; /* 0x110348AD: jae 0x110348b2 */
L_110348AF:
    ecx = ebp + (-0x40); /* 0x110348AF: lea ecx, [ebp - 0x40] */
L_110348B2:
    /* cmp MEM8(ecx), 0x7Fu */ /* 0x110348B2: cmp byte ptr [ecx], 0x7f */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11034925; /* 0x110348B5: je 0x11034925 */
L_110348B7:
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x110348B7: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110348C0; /* 0x110348BB: jae 0x110348c0 */
L_110348BD:
    eax = ebp + (-0x40); /* 0x110348BD: lea eax, [ebp - 0x40] */
L_110348C0:
    /* cmp MEM8(eax), 0 */ /* 0x110348C0: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_11034925; /* 0x110348C3: jle 0x11034925 */
L_110348C5:
    eax = MEM32(ebx); /* 0x110348C5: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x110348C7: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x110348C9: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x110348CC: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x40)); /* 0x110348D0: mov edi, dword ptr [ebp - 0x40] */
    eax = (uint32_t)LO16(eax); /* 0x110348D3: movzx eax, ax */
    MEM32(ebp + (-0x7C)) = eax; /* 0x110348D6: mov dword ptr [ebp - 0x7c], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110348DE; /* 0x110348D9: jae 0x110348de */
L_110348DB:
    edi = ebp + (-0x40); /* 0x110348DB: lea edi, [ebp - 0x40] */
L_110348DE:
    esi = MEM32(ebp + 0x34); /* 0x110348DE: mov esi, dword ptr [ebp + 0x34] */
    SET_LO8(eax, MEM8(edi)); /* 0x110348E1: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x78)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x78)); /* 0x110348E3: sub esi, dword ptr [ebp - 0x78] */
    _flag_k = FK_CMP;
    /* cmp LO8(eax), 0x7Fu */ /* 0x110348E6: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103491C; /* 0x110348E8: je 0x1103491c */
L_110348EA:
    ebx = MEM32(ebp + (-0x7C)); /* 0x110348EA: mov ebx, dword ptr [ebp - 0x7c] */
L_110348ED:
    /* test LO8(eax), LO8(eax) */ /* 0x110348ED: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11034916; /* 0x110348EF: jle 0x11034916 */
L_110348F1:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x110348F1: movsx eax, al */
    /* cmp eax, esi */ /* 0x110348F4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11034916; /* 0x110348F6: jae 0x11034916 */
L_110348F8:
    PUSH32(esp, ebx); /* 0x110348F8: push ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x110348F9: sub esi, eax */
    _flag_k = FK_CMP;
    ecx = ebp + 0x24; /* 0x110348FB: lea ecx, [ebp + 0x24] */
    PUSH32(esp, 1); /* 0x110348FE: push 1 */
    PUSH32(esp, esi); /* 0x11034900: push esi */
    RECOMP_CALL(sub_1102985D); /* 0x11034901: call 0x1102985d */
    RECOMP_FLAGS_IN();
    eax = edi + 0x1; /* 0x11034906: lea eax, [edi + 1] */
    /* cmp MEM8(eax), 0 */ /* 0x11034909: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_11034910; /* 0x1103490C: jle 0x11034910 */
L_1103490E:
    edi = eax; /* 0x1103490E: mov edi, eax */
L_11034910:
    SET_LO8(eax, MEM8(edi)); /* 0x11034910: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x11034912: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_110348ED; /* 0x11034914: jne 0x110348ed */
L_11034916:
    ebx = MEM32(ebp + (-0x84)); /* 0x11034916: mov ebx, dword ptr [ebp - 0x84] */
L_1103491C:
    esi = MEM32(ebp + (-0x88)); /* 0x1103491C: mov esi, dword ptr [ebp - 0x88] */
    edi = MEM32(ebp + (-0x78)); /* 0x11034922: mov edi, dword ptr [ebp - 0x78] */
L_11034925:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x11034925: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11034929: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x1103492B: mov dword ptr [ebp - 0x14], 7 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x11034932: mov word ptr [ebp - 0x28], ax */
    /* cmp MEM8(ebp + 0x20), 0 */ /* 0x11034936: cmp byte ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x20)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = ebp + (-0x7C); /* 0x1103493A: lea ecx, [ebp - 0x7c] */
    eax = MEM32(ebx); /* 0x1103493D: mov eax, dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x1103493F: push ecx */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x11034940: mov byte ptr [ebp - 4], 4 */
    ecx = ebx; /* 0x11034944: mov ecx, ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11034961; /* 0x11034946: je 0x11034961 */
L_11034948:
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x11034948: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x7C)); /* 0x1103494B: mov eax, dword ptr [ebp - 0x7c] */
    ecx = ebx; /* 0x1103494E: mov ecx, ebx */
    MEM32(ebp + (-0x84)) = eax; /* 0x11034950: mov dword ptr [ebp - 0x84], eax */
    eax = ebp + (-0x70); /* 0x11034956: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x11034959: push eax */
    RECOMP_CALL(sub_110380BA); /* 0x1103495A: call 0x110380ba */
    RECOMP_FLAGS_IN();
    goto L_11034978; /* 0x1103495F: jmp 0x11034978 */
L_11034961:
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11034961: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x7C)); /* 0x11034964: mov eax, dword ptr [ebp - 0x7c] */
    ecx = ebx; /* 0x11034967: mov ecx, ebx */
    MEM32(ebp + (-0x84)) = eax; /* 0x11034969: mov dword ptr [ebp - 0x84], eax */
    eax = ebp + (-0x70); /* 0x1103496F: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x11034972: push eax */
    RECOMP_CALL(sub_1102BC05); /* 0x11034973: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
L_11034978:
    PUSH32(esp, eax); /* 0x11034978: push eax */
    ecx = ebp + (-0x28); /* 0x11034979: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11031EF1); /* 0x1103497C: call 0x11031ef1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11034981: push 0 */
    PUSH32(esp, 1); /* 0x11034983: push 1 */
    ecx = ebp + (-0x70); /* 0x11034985: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_1102261D); /* 0x11034988: call 0x1102261d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x1103498D: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11034991: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = 7; /* 0x11034993: mov dword ptr [ebp - 0x44], 7 */
    MEM16(ebp + (-0x58)) = (uint16_t)(LO16(eax)); /* 0x1103499A: mov word ptr [ebp - 0x58], ax */
    /* test MEM8(esi + 0x14), 8 */ /* 0x1103499E: test byte ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x110349A2: mov byte ptr [ebp - 4], 5 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_110349C8; /* 0x110349A6: je 0x110349c8 */
L_110349A8:
    eax = ebp + (-0x70); /* 0x110349A8: lea eax, [ebp - 0x70] */
    ecx = ebx; /* 0x110349AB: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x110349AD: push eax */
    RECOMP_CALL(sub_11037B56); /* 0x110349AE: call 0x11037b56 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110349B3: push eax */
    ecx = ebp + (-0x58); /* 0x110349B4: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_11031EF1); /* 0x110349B7: call 0x11031ef1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110349BC: push 0 */
    PUSH32(esp, 1); /* 0x110349BE: push 1 */
    ecx = ebp + (-0x70); /* 0x110349C0: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_1102261D); /* 0x110349C3: call 0x1102261d */
    RECOMP_FLAGS_IN();
L_110349C8:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x110349C8: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110349CA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x71)) = (uint8_t)(LO8(edx)); /* 0x110349CC: mov byte ptr [ebp - 0x71], dl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110349CF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110349D1:
    eax = (int32_t)(int8_t)MEM8(ebp + esi + (-0x84)); /* 0x110349D1: movsx eax, byte ptr [ebp + esi - 0x84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x110349D9: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11034A20; /* 0x110349DC: je 0x11034a20 */
L_110349DE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x110349DE: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11034A1B; /* 0x110349E1: je 0x11034a1b */
L_110349E3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x110349E3: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11034A16; /* 0x110349E6: je 0x11034a16 */
L_110349E8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x4Bu; /* 0x110349E8: sub eax, 0x4b */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_110349F3; /* 0x110349EB: je 0x110349f3 */
L_110349ED:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x110349ED: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x110349EE: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11034A21; /* 0x110349EF: je 0x11034a21 */
L_110349F1:
    goto L_11034A2B; /* 0x110349F1: jmp 0x11034a2b */
L_110349F3:
    /* cmp MEM32(ebp + 0x34), edi */ /* 0x110349F3: cmp dword ptr [ebp + 0x34], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11034A00; /* 0x110349F6: ja 0x11034a00 */
L_110349F8:
    edx = edi; /* 0x110349F8: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + 0x34); /* 0x110349FA: sub edx, dword ptr [ebp + 0x34] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x110349FD: inc edx */
    _flag_k = FK_INC;
    goto L_11034A02; /* 0x110349FE: jmp 0x11034a02 */
L_11034A00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11034A00: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_11034A02:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11034A02: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x11034A04: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x11034A06: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x11034A08: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x34); /* 0x11034A0A: add eax, dword ptr [ebp + 0x34] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x11034A0D: add eax, edx */
    _flag_k = FK_ADD;
    SET_LO8(edx, MEM8(ebp + (-0x71))); /* 0x11034A0F: mov dl, byte ptr [ebp - 0x71] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x11034A12: add ecx, eax */
    _flag_k = FK_ADD;
    goto L_11034A2B; /* 0x11034A14: jmp 0x11034a2b */
L_11034A16:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x18)); /* 0x11034A16: add ecx, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    goto L_11034A2B; /* 0x11034A19: jmp 0x11034a2b */
L_11034A1B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x48)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x48)); /* 0x11034A1B: add ecx, dword ptr [ebp - 0x48] */
    _flag_k = FK_ADD;
    goto L_11034A2B; /* 0x11034A1E: jmp 0x11034a2b */
L_11034A20:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11034A20: inc ecx */
    _flag_k = FK_INC;
L_11034A21:
    /* cmp esi, 3 */ /* 0x11034A21: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11034A2B; /* 0x11034A24: je 0x11034a2b */
L_11034A26:
    SET_LO8(edx, 1); /* 0x11034A26: mov dl, 1 */
    MEM8(ebp + (-0x71)) = (uint8_t)(LO8(edx)); /* 0x11034A28: mov byte ptr [ebp - 0x71], dl */
L_11034A2B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11034A2B: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 4 */ /* 0x11034A2C: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_110349D1; /* 0x11034A2F: jb 0x110349d1 */
L_11034A31:
    esi = MEM32(ebp + (-0x88)); /* 0x11034A31: mov esi, dword ptr [ebp - 0x88] */
    /* cmp MEM32(esi + 0x24), 0 */ /* 0x11034A37: cmp dword ptr [esi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11034A50; /* 0x11034A3B: jl 0x11034a50 */
L_11034A3D:
    if (CMP_G(_flag_a, _flag_b)) goto L_11034A45; /* 0x11034A3D: jg 0x11034a45 */
L_11034A3F:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x11034A3F: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11034A50; /* 0x11034A43: jbe 0x11034a50 */
L_11034A45:
    eax = MEM32(esi + 0x20); /* 0x11034A45: mov eax, dword ptr [esi + 0x20] */
    /* cmp eax, ecx */ /* 0x11034A48: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11034A50; /* 0x11034A4A: jbe 0x11034a50 */
L_11034A4C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x11034A4C: sub eax, ecx */
    _flag_k = FK_CMP;
    goto L_11034A52; /* 0x11034A4E: jmp 0x11034a52 */
L_11034A50:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11034A50: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_11034A52:
    ecx = MEM32(esi + 0x14); /* 0x11034A52: mov ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1C0u);
    ecx = ecx & 0x1C0u; /* 0x11034A55: and ecx, 0x1c0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x78)) = eax; /* 0x11034A5B: mov dword ptr [ebp - 0x78], eax */
    MEM32(ebp + (-0x80)) = ecx; /* 0x11034A5E: mov dword ptr [ebp - 0x80], ecx */
    /* cmp ecx, 0x40u */ /* 0x11034A61: cmp ecx, 0x40 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11034AA2; /* 0x11034A64: je 0x11034aa2 */
L_11034A66:
    /* cmp ecx, 0x100u */ /* 0x11034A66: cmp ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11034A72; /* 0x11034A6C: jne 0x11034a72 */
L_11034A6E:
    /* test LO8(edx), LO8(edx) */ /* 0x11034A6E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11034AA2; /* 0x11034A70: jne 0x11034aa2 */
L_11034A72:
    PUSH32(esp, eax); /* 0x11034A72: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x11034A73: push dword ptr [ebp - 0x8c] */
    eax = ebp + (-0x94); /* 0x11034A79: lea eax, [ebp - 0x94] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034A7F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11034A82: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11034A85: push eax */
    RECOMP_CALL(sub_11035293); /* 0x11034A86: call 0x11035293 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x80)); /* 0x11034A8B: mov ecx, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11034A8E: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x78)) = MEM32(ebp + (-0x78)) & 0; /* 0x11034A91: and dword ptr [ebp - 0x78], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax); /* 0x11034A95: mov edx, dword ptr [eax] */
    MEM32(ebp + 0xC) = edx; /* 0x11034A97: mov dword ptr [ebp + 0xc], edx */
    esi = MEM32(eax + 0x4); /* 0x11034A9A: mov esi, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = esi; /* 0x11034A9D: mov dword ptr [ebp + 0x10], esi */
    goto L_11034AA8; /* 0x11034AA0: jmp 0x11034aa8 */
L_11034AA2:
    esi = MEM32(ebp + 0x10); /* 0x11034AA2: mov esi, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x11034AA5: mov edx, dword ptr [ebp + 0xc] */
L_11034AA8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11034AA8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x7C)) = eax; /* 0x11034AAA: mov dword ptr [ebp - 0x7c], eax */
L_11034AAD:
    eax = (int32_t)(int8_t)MEM8(ebp + eax + (-0x84)); /* 0x11034AAD: movsx eax, byte ptr [ebp + eax - 0x84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x11034AB5: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11034C23; /* 0x11034AB8: je 0x11034c23 */
L_11034ABE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x11034ABE: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11034C08; /* 0x11034AC1: je 0x11034c08 */
L_11034AC7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x11034AC7: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11034BE4; /* 0x11034ACA: je 0x11034be4 */
L_11034AD0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x4Bu; /* 0x11034AD0: sub eax, 0x4b */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11034AE2; /* 0x11034AD3: je 0x11034ae2 */
L_11034AD5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11034AD5: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11034AD6: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11034C55; /* 0x11034AD7: je 0x11034c55 */
L_11034ADD:
    goto L_11034C89; /* 0x11034ADD: jmp 0x11034c89 */
L_11034AE2:
    /* test edi, edi */ /* 0x11034AE2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11034B0C; /* 0x11034AE4: jne 0x11034b0c */
L_11034AE6:
    /* cmp MEM32(ebp + 0x38), 8 */ /* 0x11034AE6: cmp dword ptr [ebp + 0x38], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x24); /* 0x11034AEA: mov eax, dword ptr [ebp + 0x24] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11034AF2; /* 0x11034AED: jae 0x11034af2 */
L_11034AEF:
    eax = ebp + 0x24; /* 0x11034AEF: lea eax, [ebp + 0x24] */
L_11034AF2:
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x11034AF2: push dword ptr [ebp + 0x34] */
    PUSH32(esp, eax); /* 0x11034AF5: push eax */
    eax = ebp + (-0xE4); /* 0x11034AF6: lea eax, [ebp - 0xe4] */
L_11034AFC:
    PUSH32(esp, esi); /* 0x11034AFC: push esi */
    PUSH32(esp, edx); /* 0x11034AFD: push edx */
L_11034AFE:
    PUSH32(esp, eax); /* 0x11034AFE: push eax */
    RECOMP_CALL(sub_11034792); /* 0x11034AFF: call 0x11034792 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11034B04: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_11034C7B; /* 0x11034B07: jmp 0x11034c7b */
L_11034B0C:
    /* cmp MEM32(ebp + 0x34), edi */ /* 0x11034B0C: cmp dword ptr [ebp + 0x34], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11034B79; /* 0x11034B0F: ja 0x11034b79 */
L_11034B11:
    esi = MEM32(ebp + (-0x98)); /* 0x11034B11: mov esi, dword ptr [ebp - 0x98] */
    ecx = ebp + 0xC; /* 0x11034B17: lea ecx, [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11034B1A: push esi */
    RECOMP_CALL(sub_1101778E); /* 0x11034B1B: call 0x1101778e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x11034B20: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11034B22: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x11034B24: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11034B27: movzx eax, ax */
    ecx = ebp + 0xC; /* 0x11034B2A: lea ecx, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11034B2D: push eax */
    RECOMP_CALL(sub_1101778E); /* 0x11034B2E: call 0x1101778e */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11034B33: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x34); /* 0x11034B35: sub eax, dword ptr [ebp + 0x34] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x11034B38: push eax */
    PUSH32(esp, esi); /* 0x11034B39: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034B3A: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0xCC); /* 0x11034B3D: lea eax, [ebp - 0xcc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11034B43: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11034B46: push eax */
    RECOMP_CALL(sub_11035293); /* 0x11034B47: call 0x11035293 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x24); /* 0x11034B4C: mov ecx, dword ptr [ebp + 0x24] */
    edx = eax; /* 0x11034B4F: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11034B51: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x38), 8 */ /* 0x11034B54: cmp dword ptr [ebp + 0x38], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edx); /* 0x11034B58: mov eax, dword ptr [edx] */
    MEM32(ebp + 0xC) = eax; /* 0x11034B5A: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(edx + 0x4); /* 0x11034B5D: mov eax, dword ptr [edx + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x11034B60: mov dword ptr [ebp + 0x10], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11034B68; /* 0x11034B63: jae 0x11034b68 */
L_11034B65:
    ecx = ebp + 0x24; /* 0x11034B65: lea ecx, [ebp + 0x24] */
L_11034B68:
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x11034B68: push dword ptr [ebp + 0x34] */
    eax = ebp + (-0xBC); /* 0x11034B6B: lea eax, [ebp - 0xbc] */
    PUSH32(esp, ecx); /* 0x11034B71: push ecx */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x11034B72: push dword ptr [edx + 4] */
    PUSH32(esp, MEM32(edx)); /* 0x11034B75: push dword ptr [edx] */
    RECOMP_BACKEDGE();
    goto L_11034AFE; /* 0x11034B77: jmp 0x11034afe */
L_11034B79:
    /* cmp MEM32(ebp + 0x38), 8 */ /* 0x11034B79: cmp dword ptr [ebp + 0x38], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x24); /* 0x11034B7D: mov ecx, dword ptr [ebp + 0x24] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11034B85; /* 0x11034B80: jae 0x11034b85 */
L_11034B82:
    ecx = ebp + 0x24; /* 0x11034B82: lea ecx, [ebp + 0x24] */
L_11034B85:
    eax = MEM32(ebp + 0x34); /* 0x11034B85: mov eax, dword ptr [ebp + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x11034B88: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x11034B8A: push eax */
    PUSH32(esp, ecx); /* 0x11034B8B: push ecx */
    PUSH32(esp, esi); /* 0x11034B8C: push esi */
    PUSH32(esp, edx); /* 0x11034B8D: push edx */
    eax = ebp + (-0xC4); /* 0x11034B8E: lea eax, [ebp - 0xc4] */
    PUSH32(esp, eax); /* 0x11034B94: push eax */
    RECOMP_CALL(sub_11034792); /* 0x11034B95: call 0x11034792 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x11034B9A: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11034B9C: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x11034B9F: mov eax, dword ptr [ecx] */
    MEM32(ebp + 0xC) = eax; /* 0x11034BA1: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ecx + 0x4); /* 0x11034BA4: mov eax, dword ptr [ecx + 4] */
    ecx = ebx; /* 0x11034BA7: mov ecx, ebx */
    MEM32(ebp + 0x10) = eax; /* 0x11034BA9: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ebx); /* 0x11034BAC: mov eax, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x11034BAE: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11034BB1: movzx eax, ax */
    ecx = ebp + 0xC; /* 0x11034BB4: lea ecx, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11034BB7: push eax */
    RECOMP_CALL(sub_1101778E); /* 0x11034BB8: call 0x1101778e */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x38), 8 */ /* 0x11034BBD: cmp dword ptr [ebp + 0x38], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x24); /* 0x11034BC1: mov ecx, dword ptr [ebp + 0x24] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11034BC9; /* 0x11034BC4: jae 0x11034bc9 */
L_11034BC6:
    ecx = ebp + 0x24; /* 0x11034BC6: lea ecx, [ebp + 0x24] */
L_11034BC9:
    eax = MEM32(ebp + 0x34); /* 0x11034BC9: mov eax, dword ptr [ebp + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x11034BCC: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11034BCE: push edi */
    eax = ecx + eax * 2; /* 0x11034BCF: lea eax, [ecx + eax*2] */
    PUSH32(esp, eax); /* 0x11034BD2: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034BD3: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0xD4); /* 0x11034BD6: lea eax, [ebp - 0xd4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11034BDC: push dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_11034AFE; /* 0x11034BDF: jmp 0x11034afe */
L_11034BE4:
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x11034BE4: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11034C89; /* 0x11034BE8: jbe 0x11034c89 */
L_11034BEE:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11034BEE: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x11034BF2: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11034BFA; /* 0x11034BF5: jae 0x11034bfa */
L_11034BF7:
    eax = ebp + (-0x28); /* 0x11034BF7: lea eax, [ebp - 0x28] */
L_11034BFA:
    PUSH32(esp, 1); /* 0x11034BFA: push 1 */
    PUSH32(esp, eax); /* 0x11034BFC: push eax */
    eax = ebp + (-0xB4); /* 0x11034BFD: lea eax, [ebp - 0xb4] */
    RECOMP_BACKEDGE();
    goto L_11034AFC; /* 0x11034C03: jmp 0x11034afc */
L_11034C08:
    /* cmp MEM32(ebp + (-0x44)), 8 */ /* 0x11034C08: cmp dword ptr [ebp - 0x44], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x58)); /* 0x11034C0C: mov eax, dword ptr [ebp - 0x58] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11034C14; /* 0x11034C0F: jae 0x11034c14 */
L_11034C11:
    eax = ebp + (-0x58); /* 0x11034C11: lea eax, [ebp - 0x58] */
L_11034C14:
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x11034C14: push dword ptr [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x11034C17: push eax */
    eax = ebp + (-0xDC); /* 0x11034C18: lea eax, [ebp - 0xdc] */
    RECOMP_BACKEDGE();
    goto L_11034AFC; /* 0x11034C1E: jmp 0x11034afc */
L_11034C23:
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x11034C23: push dword ptr [ebp - 0x8c] */
    ecx = ebp + (-0x94); /* 0x11034C29: lea ecx, [ebp - 0x94] */
    MEM32(ebp + (-0x94)) = edx; /* 0x11034C2F: mov dword ptr [ebp - 0x94], edx */
    MEM32(ebp + (-0x90)) = esi; /* 0x11034C35: mov dword ptr [ebp - 0x90], esi */
    RECOMP_CALL(sub_1101778E); /* 0x11034C3B: call 0x1101778e */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x94)); /* 0x11034C40: mov edx, dword ptr [ebp - 0x94] */
    esi = MEM32(ebp + (-0x90)); /* 0x11034C46: mov esi, dword ptr [ebp - 0x90] */
    ecx = MEM32(ebp + (-0x80)); /* 0x11034C4C: mov ecx, dword ptr [ebp - 0x80] */
    MEM32(ebp + 0xC) = edx; /* 0x11034C4F: mov dword ptr [ebp + 0xc], edx */
    MEM32(ebp + 0x10) = esi; /* 0x11034C52: mov dword ptr [ebp + 0x10], esi */
L_11034C55:
    /* cmp ecx, 0x100u */ /* 0x11034C55: cmp ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11034C89; /* 0x11034C5B: jne 0x11034c89 */
L_11034C5D:
    PUSH32(esp, MEM32(ebp + (-0x78))); /* 0x11034C5D: push dword ptr [ebp - 0x78] */
    eax = ebp + (-0xAC); /* 0x11034C60: lea eax, [ebp - 0xac] */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x11034C66: push dword ptr [ebp - 0x8c] */
    PUSH32(esp, esi); /* 0x11034C6C: push esi */
    PUSH32(esp, edx); /* 0x11034C6D: push edx */
    PUSH32(esp, eax); /* 0x11034C6E: push eax */
    RECOMP_CALL(sub_11035293); /* 0x11034C6F: call 0x11035293 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11034C74: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x78)) = MEM32(ebp + (-0x78)) & 0; /* 0x11034C77: and dword ptr [ebp - 0x78], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11034C7B:
    edx = MEM32(eax); /* 0x11034C7B: mov edx, dword ptr [eax] */
    ecx = MEM32(ebp + (-0x80)); /* 0x11034C7D: mov ecx, dword ptr [ebp - 0x80] */
    MEM32(ebp + 0xC) = edx; /* 0x11034C80: mov dword ptr [ebp + 0xc], edx */
    esi = MEM32(eax + 0x4); /* 0x11034C83: mov esi, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = esi; /* 0x11034C86: mov dword ptr [ebp + 0x10], esi */
L_11034C89:
    eax = MEM32(ebp + (-0x7C)); /* 0x11034C89: mov eax, dword ptr [ebp - 0x7c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11034C8C: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x7C)) = eax; /* 0x11034C8D: mov dword ptr [ebp - 0x7c], eax */
    /* cmp eax, 4 */ /* 0x11034C90: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11034AAD; /* 0x11034C93: jb 0x11034aad */
L_11034C99:
    /* cmp MEM32(ebp + (-0x18)), 1 */ /* 0x11034C99: cmp dword ptr [ebp - 0x18], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11034CD0; /* 0x11034C9D: jbe 0x11034cd0 */
L_11034C9F:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11034C9F: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x11034CA3: mov ecx, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11034CAB; /* 0x11034CA6: jae 0x11034cab */
L_11034CA8:
    ecx = ebp + (-0x28); /* 0x11034CA8: lea ecx, [ebp - 0x28] */
L_11034CAB:
    eax = MEM32(ebp + (-0x18)); /* 0x11034CAB: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x11034CAE: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11034CB1: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x11034CB2: push eax */
    PUSH32(esp, ecx); /* 0x11034CB3: push ecx */
    PUSH32(esp, esi); /* 0x11034CB4: push esi */
    PUSH32(esp, edx); /* 0x11034CB5: push edx */
    eax = ebp + (-0xAC); /* 0x11034CB6: lea eax, [ebp - 0xac] */
    PUSH32(esp, eax); /* 0x11034CBC: push eax */
    RECOMP_CALL(sub_11034792); /* 0x11034CBD: call 0x11034792 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11034CC2: add esp, 0x14 */
    _flag_k = FK_ADD;
    edx = MEM32(eax); /* 0x11034CC5: mov edx, dword ptr [eax] */
    MEM32(ebp + 0xC) = edx; /* 0x11034CC7: mov dword ptr [ebp + 0xc], edx */
    esi = MEM32(eax + 0x4); /* 0x11034CCA: mov esi, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = esi; /* 0x11034CCD: mov dword ptr [ebp + 0x10], esi */
L_11034CD0:
    PUSH32(esp, MEM32(ebp + (-0x78))); /* 0x11034CD0: push dword ptr [ebp - 0x78] */
    eax = MEM32(ebp + (-0x88)); /* 0x11034CD3: mov eax, dword ptr [ebp - 0x88] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11034CD9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x11034CDB: push dword ptr [ebp - 0x8c] */
    PUSH32(esp, esi); /* 0x11034CE1: push esi */
    esi = MEM32(ebp + (-0xA4)); /* 0x11034CE2: mov esi, dword ptr [ebp - 0xa4] */
    PUSH32(esp, edx); /* 0x11034CE8: push edx */
    PUSH32(esp, esi); /* 0x11034CE9: push esi */
    MEM32(eax + 0x20) = ebx; /* 0x11034CEA: mov dword ptr [eax + 0x20], ebx */
    MEM32(eax + 0x24) = ebx; /* 0x11034CED: mov dword ptr [eax + 0x24], ebx */
    RECOMP_CALL(sub_11035293); /* 0x11034CF0: call 0x11035293 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11034CF5: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x58); /* 0x11034CF8: lea ecx, [ebp - 0x58] */
    PUSH32(esp, ebx); /* 0x11034CFB: push ebx */
    PUSH32(esp, 1); /* 0x11034CFC: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x11034CFE: call 0x1102261d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11034D03: push ebx */
    PUSH32(esp, 1); /* 0x11034D04: push 1 */
    ecx = ebp + (-0x28); /* 0x11034D06: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1102261D); /* 0x11034D09: call 0x1102261d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11034D0E: push ebx */
    PUSH32(esp, 1); /* 0x11034D0F: push 1 */
    ecx = ebp + (-0x40); /* 0x11034D11: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_11010630); /* 0x11034D14: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11034D19: push ebx */
    PUSH32(esp, 1); /* 0x11034D1A: push 1 */
    ecx = ebp + 0x24; /* 0x11034D1C: lea ecx, [ebp + 0x24] */
    RECOMP_CALL(sub_1102261D); /* 0x11034D1F: call 0x1102261d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11034D24: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x11034D26: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 60; { RECOMP_REGS_OUT(); return; } /* 0x11034D2B: ret 0x38 */
    RECOMP_REGS_OUT();
}

void sub_11034D2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11034D2Eu);

L_11034D2E:
    PUSH32(esp, 0xD8u); /* 0x11034D2E: push 0xd8 */
    eax = 0x1103F1F4u; /* 0x11034D33: mov eax, 0x1103f1f4 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11034D38: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11034D3D: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x18); /* 0x11034D40: mov esi, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0xA4)) = eax; /* 0x11034D43: mov dword ptr [ebp - 0xa4], eax */
    eax = MEM32(ebp + 0x1C); /* 0x11034D49: mov eax, dword ptr [ebp + 0x1c] */
    eax = (uint32_t)LO16(eax); /* 0x11034D4C: movzx eax, ax */
    MEM32(ebp + (-0x8C)) = eax; /* 0x11034D4F: mov dword ptr [ebp - 0x8c], eax */
    eax = MEM32(ebp + 0x3C); /* 0x11034D55: mov eax, dword ptr [ebp + 0x3c] */
    eax = (uint32_t)LO16(eax); /* 0x11034D58: movzx eax, ax */
    MEM32(ebp + (-0x88)) = esi; /* 0x11034D5B: mov dword ptr [ebp - 0x88], esi */
    MEM32(ebp + (-0x98)) = eax; /* 0x11034D61: mov dword ptr [ebp - 0x98], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11034D67: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x11034D6B: mov ecx, esi */
    /* cmp MEM8(ebp + 0x14), 0 */ /* 0x11034D6D: cmp byte ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11034D9A; /* 0x11034D71: je 0x11034d9a */
L_11034D73:
    eax = ebp + (-0x9C); /* 0x11034D73: lea eax, [ebp - 0x9c] */
    PUSH32(esp, eax); /* 0x11034D79: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11034D7A: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11034D7F: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x11034D80: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11031ACF); /* 0x11034D84: call 0x11031acf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11034D89: pop ecx */
    ebx = eax; /* 0x11034D8A: mov ebx, eax */
    ecx = ebp + (-0x9C); /* 0x11034D8C: lea ecx, [ebp - 0x9c] */
    MEM32(ebp + (-0x84)) = ebx; /* 0x11034D92: mov dword ptr [ebp - 0x84], ebx */
    goto L_11034DBF; /* 0x11034D98: jmp 0x11034dbf */
L_11034D9A:
    eax = ebp + (-0xA0); /* 0x11034D9A: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x11034DA0: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11034DA1: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11034DA6: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11034DA7: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11031B69); /* 0x11034DAB: call 0x11031b69 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11034DB0: pop ecx */
    ebx = eax; /* 0x11034DB1: mov ebx, eax */
    MEM32(ebp + (-0x84)) = eax; /* 0x11034DB3: mov dword ptr [ebp - 0x84], eax */
    ecx = ebp + (-0xA0); /* 0x11034DB9: lea ecx, [ebp - 0xa0] */
L_11034DBF:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x11034DBF: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_1100E431); /* 0x11034DC3: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x11034DC8: lea eax, [ebp - 0x40] */
    ecx = ebx; /* 0x11034DCB: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x11034DCD: push eax */
    RECOMP_CALL(sub_110292E9); /* 0x11034DCE: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x11034DD3: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11034DD5: mov ecx, ebx */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11034DD7: mov byte ptr [ebp - 4], 3 */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x11034DDB: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11034DDE: cdq  */
    edi = eax; /* 0x11034DDF: mov edi, eax */
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x11034DE1: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x11034DE3: sub edi, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x78)) = edi; /* 0x11034DE5: mov dword ptr [ebp - 0x78], edi */
    /* cmp MEM32(ebp + 0x34), edi */ /* 0x11034DE8: cmp dword ptr [ebp + 0x34], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11034E09; /* 0x11034DEB: ja 0x11034e09 */
L_11034DED:
    PUSH32(esp, MEM32(ebp + (-0x98))); /* 0x11034DED: push dword ptr [ebp - 0x98] */
    ecx = edi; /* 0x11034DF3: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0x34); /* 0x11034DF5: sub ecx, dword ptr [ebp + 0x34] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11034DF8: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, ecx); /* 0x11034DF9: push ecx */
    PUSH32(esp, 0); /* 0x11034DFA: push 0 */
    ecx = ebp + 0x24; /* 0x11034DFC: lea ecx, [ebp + 0x24] */
    RECOMP_CALL(sub_1102985D); /* 0x11034DFF: call 0x1102985d */
    RECOMP_FLAGS_IN();
    goto L_11034E8A; /* 0x11034E04: jmp 0x11034e8a */
L_11034E09:
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x11034E09: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x40)); /* 0x11034E0D: mov eax, dword ptr [ebp - 0x40] */
    ecx = eax; /* 0x11034E10: mov ecx, eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11034E17; /* 0x11034E12: jae 0x11034e17 */
L_11034E14:
    ecx = ebp + (-0x40); /* 0x11034E14: lea ecx, [ebp - 0x40] */
L_11034E17:
    /* cmp MEM8(ecx), 0x7Fu */ /* 0x11034E17: cmp byte ptr [ecx], 0x7f */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11034E8A; /* 0x11034E1A: je 0x11034e8a */
L_11034E1C:
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x11034E1C: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11034E25; /* 0x11034E20: jae 0x11034e25 */
L_11034E22:
    eax = ebp + (-0x40); /* 0x11034E22: lea eax, [ebp - 0x40] */
L_11034E25:
    /* cmp MEM8(eax), 0 */ /* 0x11034E25: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_11034E8A; /* 0x11034E28: jle 0x11034e8a */
L_11034E2A:
    eax = MEM32(ebx); /* 0x11034E2A: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11034E2C: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11034E2E: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x11034E31: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x40)); /* 0x11034E35: mov edi, dword ptr [ebp - 0x40] */
    eax = (uint32_t)LO16(eax); /* 0x11034E38: movzx eax, ax */
    MEM32(ebp + (-0x7C)) = eax; /* 0x11034E3B: mov dword ptr [ebp - 0x7c], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11034E43; /* 0x11034E3E: jae 0x11034e43 */
L_11034E40:
    edi = ebp + (-0x40); /* 0x11034E40: lea edi, [ebp - 0x40] */
L_11034E43:
    esi = MEM32(ebp + 0x34); /* 0x11034E43: mov esi, dword ptr [ebp + 0x34] */
    SET_LO8(eax, MEM8(edi)); /* 0x11034E46: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x78)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x78)); /* 0x11034E48: sub esi, dword ptr [ebp - 0x78] */
    _flag_k = FK_CMP;
    /* cmp LO8(eax), 0x7Fu */ /* 0x11034E4B: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11034E81; /* 0x11034E4D: je 0x11034e81 */
L_11034E4F:
    ebx = MEM32(ebp + (-0x7C)); /* 0x11034E4F: mov ebx, dword ptr [ebp - 0x7c] */
L_11034E52:
    /* test LO8(eax), LO8(eax) */ /* 0x11034E52: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11034E7B; /* 0x11034E54: jle 0x11034e7b */
L_11034E56:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x11034E56: movsx eax, al */
    /* cmp eax, esi */ /* 0x11034E59: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11034E7B; /* 0x11034E5B: jae 0x11034e7b */
L_11034E5D:
    PUSH32(esp, ebx); /* 0x11034E5D: push ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x11034E5E: sub esi, eax */
    _flag_k = FK_CMP;
    ecx = ebp + 0x24; /* 0x11034E60: lea ecx, [ebp + 0x24] */
    PUSH32(esp, 1); /* 0x11034E63: push 1 */
    PUSH32(esp, esi); /* 0x11034E65: push esi */
    RECOMP_CALL(sub_1102985D); /* 0x11034E66: call 0x1102985d */
    RECOMP_FLAGS_IN();
    eax = edi + 0x1; /* 0x11034E6B: lea eax, [edi + 1] */
    /* cmp MEM8(eax), 0 */ /* 0x11034E6E: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_11034E75; /* 0x11034E71: jle 0x11034e75 */
L_11034E73:
    edi = eax; /* 0x11034E73: mov edi, eax */
L_11034E75:
    SET_LO8(eax, MEM8(edi)); /* 0x11034E75: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x11034E77: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_11034E52; /* 0x11034E79: jne 0x11034e52 */
L_11034E7B:
    ebx = MEM32(ebp + (-0x84)); /* 0x11034E7B: mov ebx, dword ptr [ebp - 0x84] */
L_11034E81:
    esi = MEM32(ebp + (-0x88)); /* 0x11034E81: mov esi, dword ptr [ebp - 0x88] */
    edi = MEM32(ebp + (-0x78)); /* 0x11034E87: mov edi, dword ptr [ebp - 0x78] */
L_11034E8A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x11034E8A: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11034E8E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 7; /* 0x11034E90: mov dword ptr [ebp - 0x14], 7 */
    MEM16(ebp + (-0x28)) = (uint16_t)(LO16(eax)); /* 0x11034E97: mov word ptr [ebp - 0x28], ax */
    /* cmp MEM8(ebp + 0x20), 0 */ /* 0x11034E9B: cmp byte ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x20)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = ebp + (-0x7C); /* 0x11034E9F: lea ecx, [ebp - 0x7c] */
    eax = MEM32(ebx); /* 0x11034EA2: mov eax, dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x11034EA4: push ecx */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x11034EA5: mov byte ptr [ebp - 4], 4 */
    ecx = ebx; /* 0x11034EA9: mov ecx, ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11034EC6; /* 0x11034EAB: je 0x11034ec6 */
L_11034EAD:
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x11034EAD: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x7C)); /* 0x11034EB0: mov eax, dword ptr [ebp - 0x7c] */
    ecx = ebx; /* 0x11034EB3: mov ecx, ebx */
    MEM32(ebp + (-0x84)) = eax; /* 0x11034EB5: mov dword ptr [ebp - 0x84], eax */
    eax = ebp + (-0x70); /* 0x11034EBB: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x11034EBE: push eax */
    RECOMP_CALL(sub_110380BA); /* 0x11034EBF: call 0x110380ba */
    RECOMP_FLAGS_IN();
    goto L_11034EDD; /* 0x11034EC4: jmp 0x11034edd */
L_11034EC6:
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x11034EC6: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x7C)); /* 0x11034EC9: mov eax, dword ptr [ebp - 0x7c] */
    ecx = ebx; /* 0x11034ECC: mov ecx, ebx */
    MEM32(ebp + (-0x84)) = eax; /* 0x11034ECE: mov dword ptr [ebp - 0x84], eax */
    eax = ebp + (-0x70); /* 0x11034ED4: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x11034ED7: push eax */
    RECOMP_CALL(sub_1102BC05); /* 0x11034ED8: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
L_11034EDD:
    PUSH32(esp, eax); /* 0x11034EDD: push eax */
    ecx = ebp + (-0x28); /* 0x11034EDE: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11031EF1); /* 0x11034EE1: call 0x11031ef1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11034EE6: push 0 */
    PUSH32(esp, 1); /* 0x11034EE8: push 1 */
    ecx = ebp + (-0x70); /* 0x11034EEA: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_1102261D); /* 0x11034EED: call 0x1102261d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x11034EF2: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11034EF6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = 7; /* 0x11034EF8: mov dword ptr [ebp - 0x44], 7 */
    MEM16(ebp + (-0x58)) = (uint16_t)(LO16(eax)); /* 0x11034EFF: mov word ptr [ebp - 0x58], ax */
    /* test MEM8(esi + 0x14), 8 */ /* 0x11034F03: test byte ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x11034F07: mov byte ptr [ebp - 4], 5 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_11034F2D; /* 0x11034F0B: je 0x11034f2d */
L_11034F0D:
    eax = ebp + (-0x70); /* 0x11034F0D: lea eax, [ebp - 0x70] */
    ecx = ebx; /* 0x11034F10: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x11034F12: push eax */
    RECOMP_CALL(sub_11037B56); /* 0x11034F13: call 0x11037b56 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11034F18: push eax */
    ecx = ebp + (-0x58); /* 0x11034F19: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_11031EF1); /* 0x11034F1C: call 0x11031ef1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11034F21: push 0 */
    PUSH32(esp, 1); /* 0x11034F23: push 1 */
    ecx = ebp + (-0x70); /* 0x11034F25: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_1102261D); /* 0x11034F28: call 0x1102261d */
    RECOMP_FLAGS_IN();
L_11034F2D:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x11034F2D: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11034F2F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x71)) = (uint8_t)(LO8(edx)); /* 0x11034F31: mov byte ptr [ebp - 0x71], dl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11034F34: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11034F36:
    eax = (int32_t)(int8_t)MEM8(ebp + esi + (-0x84)); /* 0x11034F36: movsx eax, byte ptr [ebp + esi - 0x84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x11034F3E: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11034F85; /* 0x11034F41: je 0x11034f85 */
L_11034F43:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x11034F43: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11034F80; /* 0x11034F46: je 0x11034f80 */
L_11034F48:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x11034F48: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11034F7B; /* 0x11034F4B: je 0x11034f7b */
L_11034F4D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x4Bu; /* 0x11034F4D: sub eax, 0x4b */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11034F58; /* 0x11034F50: je 0x11034f58 */
L_11034F52:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11034F52: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11034F53: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11034F86; /* 0x11034F54: je 0x11034f86 */
L_11034F56:
    goto L_11034F90; /* 0x11034F56: jmp 0x11034f90 */
L_11034F58:
    /* cmp MEM32(ebp + 0x34), edi */ /* 0x11034F58: cmp dword ptr [ebp + 0x34], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11034F65; /* 0x11034F5B: ja 0x11034f65 */
L_11034F5D:
    edx = edi; /* 0x11034F5D: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + 0x34); /* 0x11034F5F: sub edx, dword ptr [ebp + 0x34] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11034F62: inc edx */
    _flag_k = FK_INC;
    goto L_11034F67; /* 0x11034F63: jmp 0x11034f67 */
L_11034F65:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11034F65: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_11034F67:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11034F67: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x11034F69: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x11034F6B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x11034F6D: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x34); /* 0x11034F6F: add eax, dword ptr [ebp + 0x34] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x11034F72: add eax, edx */
    _flag_k = FK_ADD;
    SET_LO8(edx, MEM8(ebp + (-0x71))); /* 0x11034F74: mov dl, byte ptr [ebp - 0x71] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x11034F77: add ecx, eax */
    _flag_k = FK_ADD;
    goto L_11034F90; /* 0x11034F79: jmp 0x11034f90 */
L_11034F7B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x18)); /* 0x11034F7B: add ecx, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    goto L_11034F90; /* 0x11034F7E: jmp 0x11034f90 */
L_11034F80:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x48)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x48)); /* 0x11034F80: add ecx, dword ptr [ebp - 0x48] */
    _flag_k = FK_ADD;
    goto L_11034F90; /* 0x11034F83: jmp 0x11034f90 */
L_11034F85:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11034F85: inc ecx */
    _flag_k = FK_INC;
L_11034F86:
    /* cmp esi, 3 */ /* 0x11034F86: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11034F90; /* 0x11034F89: je 0x11034f90 */
L_11034F8B:
    SET_LO8(edx, 1); /* 0x11034F8B: mov dl, 1 */
    MEM8(ebp + (-0x71)) = (uint8_t)(LO8(edx)); /* 0x11034F8D: mov byte ptr [ebp - 0x71], dl */
L_11034F90:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11034F90: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 4 */ /* 0x11034F91: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11034F36; /* 0x11034F94: jb 0x11034f36 */
L_11034F96:
    esi = MEM32(ebp + (-0x88)); /* 0x11034F96: mov esi, dword ptr [ebp - 0x88] */
    /* cmp MEM32(esi + 0x24), 0 */ /* 0x11034F9C: cmp dword ptr [esi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11034FB5; /* 0x11034FA0: jl 0x11034fb5 */
L_11034FA2:
    if (CMP_G(_flag_a, _flag_b)) goto L_11034FAA; /* 0x11034FA2: jg 0x11034faa */
L_11034FA4:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x11034FA4: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11034FB5; /* 0x11034FA8: jbe 0x11034fb5 */
L_11034FAA:
    eax = MEM32(esi + 0x20); /* 0x11034FAA: mov eax, dword ptr [esi + 0x20] */
    /* cmp eax, ecx */ /* 0x11034FAD: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11034FB5; /* 0x11034FAF: jbe 0x11034fb5 */
L_11034FB1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x11034FB1: sub eax, ecx */
    _flag_k = FK_CMP;
    goto L_11034FB7; /* 0x11034FB3: jmp 0x11034fb7 */
L_11034FB5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11034FB5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_11034FB7:
    ecx = MEM32(esi + 0x14); /* 0x11034FB7: mov ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1C0u);
    ecx = ecx & 0x1C0u; /* 0x11034FBA: and ecx, 0x1c0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x78)) = eax; /* 0x11034FC0: mov dword ptr [ebp - 0x78], eax */
    MEM32(ebp + (-0x80)) = ecx; /* 0x11034FC3: mov dword ptr [ebp - 0x80], ecx */
    /* cmp ecx, 0x40u */ /* 0x11034FC6: cmp ecx, 0x40 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11035007; /* 0x11034FC9: je 0x11035007 */
L_11034FCB:
    /* cmp ecx, 0x100u */ /* 0x11034FCB: cmp ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11034FD7; /* 0x11034FD1: jne 0x11034fd7 */
L_11034FD3:
    /* test LO8(edx), LO8(edx) */ /* 0x11034FD3: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11035007; /* 0x11034FD5: jne 0x11035007 */
L_11034FD7:
    PUSH32(esp, eax); /* 0x11034FD7: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x11034FD8: push dword ptr [ebp - 0x8c] */
    eax = ebp + (-0x94); /* 0x11034FDE: lea eax, [ebp - 0x94] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11034FE4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11034FE7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11034FEA: push eax */
    RECOMP_CALL(sub_11035293); /* 0x11034FEB: call 0x11035293 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x80)); /* 0x11034FF0: mov ecx, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11034FF3: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x78)) = MEM32(ebp + (-0x78)) & 0; /* 0x11034FF6: and dword ptr [ebp - 0x78], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax); /* 0x11034FFA: mov edx, dword ptr [eax] */
    MEM32(ebp + 0xC) = edx; /* 0x11034FFC: mov dword ptr [ebp + 0xc], edx */
    esi = MEM32(eax + 0x4); /* 0x11034FFF: mov esi, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = esi; /* 0x11035002: mov dword ptr [ebp + 0x10], esi */
    goto L_1103500D; /* 0x11035005: jmp 0x1103500d */
L_11035007:
    esi = MEM32(ebp + 0x10); /* 0x11035007: mov esi, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x1103500A: mov edx, dword ptr [ebp + 0xc] */
L_1103500D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103500D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x7C)) = eax; /* 0x1103500F: mov dword ptr [ebp - 0x7c], eax */
L_11035012:
    eax = (int32_t)(int8_t)MEM8(ebp + eax + (-0x84)); /* 0x11035012: movsx eax, byte ptr [ebp + eax - 0x84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x1103501A: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11035188; /* 0x1103501D: je 0x11035188 */
L_11035023:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x11035023: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1103516D; /* 0x11035026: je 0x1103516d */
L_1103502C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x1103502C: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11035149; /* 0x1103502F: je 0x11035149 */
L_11035035:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x4Bu; /* 0x11035035: sub eax, 0x4b */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11035047; /* 0x11035038: je 0x11035047 */
L_1103503A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1103503A: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1103503B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_110351BA; /* 0x1103503C: je 0x110351ba */
L_11035042:
    goto L_110351EE; /* 0x11035042: jmp 0x110351ee */
L_11035047:
    /* test edi, edi */ /* 0x11035047: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11035071; /* 0x11035049: jne 0x11035071 */
L_1103504B:
    /* cmp MEM32(ebp + 0x38), 8 */ /* 0x1103504B: cmp dword ptr [ebp + 0x38], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x24); /* 0x1103504F: mov eax, dword ptr [ebp + 0x24] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11035057; /* 0x11035052: jae 0x11035057 */
L_11035054:
    eax = ebp + 0x24; /* 0x11035054: lea eax, [ebp + 0x24] */
L_11035057:
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x11035057: push dword ptr [ebp + 0x34] */
    PUSH32(esp, eax); /* 0x1103505A: push eax */
    eax = ebp + (-0xE4); /* 0x1103505B: lea eax, [ebp - 0xe4] */
L_11035061:
    PUSH32(esp, esi); /* 0x11035061: push esi */
    PUSH32(esp, edx); /* 0x11035062: push edx */
L_11035063:
    PUSH32(esp, eax); /* 0x11035063: push eax */
    RECOMP_CALL(sub_11034792); /* 0x11035064: call 0x11034792 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11035069: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_110351E0; /* 0x1103506C: jmp 0x110351e0 */
L_11035071:
    /* cmp MEM32(ebp + 0x34), edi */ /* 0x11035071: cmp dword ptr [ebp + 0x34], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110350DE; /* 0x11035074: ja 0x110350de */
L_11035076:
    esi = MEM32(ebp + (-0x98)); /* 0x11035076: mov esi, dword ptr [ebp - 0x98] */
    ecx = ebp + 0xC; /* 0x1103507C: lea ecx, [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1103507F: push esi */
    RECOMP_CALL(sub_1101778E); /* 0x11035080: call 0x1101778e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x11035085: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11035087: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x11035089: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x1103508C: movzx eax, ax */
    ecx = ebp + 0xC; /* 0x1103508F: lea ecx, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11035092: push eax */
    RECOMP_CALL(sub_1101778E); /* 0x11035093: call 0x1101778e */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11035098: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x34); /* 0x1103509A: sub eax, dword ptr [ebp + 0x34] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1103509D: push eax */
    PUSH32(esp, esi); /* 0x1103509E: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103509F: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0xCC); /* 0x110350A2: lea eax, [ebp - 0xcc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110350A8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110350AB: push eax */
    RECOMP_CALL(sub_11035293); /* 0x110350AC: call 0x11035293 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x24); /* 0x110350B1: mov ecx, dword ptr [ebp + 0x24] */
    edx = eax; /* 0x110350B4: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x110350B6: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x38), 8 */ /* 0x110350B9: cmp dword ptr [ebp + 0x38], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edx); /* 0x110350BD: mov eax, dword ptr [edx] */
    MEM32(ebp + 0xC) = eax; /* 0x110350BF: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(edx + 0x4); /* 0x110350C2: mov eax, dword ptr [edx + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x110350C5: mov dword ptr [ebp + 0x10], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110350CD; /* 0x110350C8: jae 0x110350cd */
L_110350CA:
    ecx = ebp + 0x24; /* 0x110350CA: lea ecx, [ebp + 0x24] */
L_110350CD:
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x110350CD: push dword ptr [ebp + 0x34] */
    eax = ebp + (-0xBC); /* 0x110350D0: lea eax, [ebp - 0xbc] */
    PUSH32(esp, ecx); /* 0x110350D6: push ecx */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x110350D7: push dword ptr [edx + 4] */
    PUSH32(esp, MEM32(edx)); /* 0x110350DA: push dword ptr [edx] */
    RECOMP_BACKEDGE();
    goto L_11035063; /* 0x110350DC: jmp 0x11035063 */
L_110350DE:
    /* cmp MEM32(ebp + 0x38), 8 */ /* 0x110350DE: cmp dword ptr [ebp + 0x38], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x24); /* 0x110350E2: mov ecx, dword ptr [ebp + 0x24] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110350EA; /* 0x110350E5: jae 0x110350ea */
L_110350E7:
    ecx = ebp + 0x24; /* 0x110350E7: lea ecx, [ebp + 0x24] */
L_110350EA:
    eax = MEM32(ebp + 0x34); /* 0x110350EA: mov eax, dword ptr [ebp + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x110350ED: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x110350EF: push eax */
    PUSH32(esp, ecx); /* 0x110350F0: push ecx */
    PUSH32(esp, esi); /* 0x110350F1: push esi */
    PUSH32(esp, edx); /* 0x110350F2: push edx */
    eax = ebp + (-0xC4); /* 0x110350F3: lea eax, [ebp - 0xc4] */
    PUSH32(esp, eax); /* 0x110350F9: push eax */
    RECOMP_CALL(sub_11034792); /* 0x110350FA: call 0x11034792 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x110350FF: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11035101: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x11035104: mov eax, dword ptr [ecx] */
    MEM32(ebp + 0xC) = eax; /* 0x11035106: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ecx + 0x4); /* 0x11035109: mov eax, dword ptr [ecx + 4] */
    ecx = ebx; /* 0x1103510C: mov ecx, ebx */
    MEM32(ebp + 0x10) = eax; /* 0x1103510E: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ebx); /* 0x11035111: mov eax, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x11035113: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x11035116: movzx eax, ax */
    ecx = ebp + 0xC; /* 0x11035119: lea ecx, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1103511C: push eax */
    RECOMP_CALL(sub_1101778E); /* 0x1103511D: call 0x1101778e */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x38), 8 */ /* 0x11035122: cmp dword ptr [ebp + 0x38], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x24); /* 0x11035126: mov ecx, dword ptr [ebp + 0x24] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103512E; /* 0x11035129: jae 0x1103512e */
L_1103512B:
    ecx = ebp + 0x24; /* 0x1103512B: lea ecx, [ebp + 0x24] */
L_1103512E:
    eax = MEM32(ebp + 0x34); /* 0x1103512E: mov eax, dword ptr [ebp + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x11035131: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x11035133: push edi */
    eax = ecx + eax * 2; /* 0x11035134: lea eax, [ecx + eax*2] */
    PUSH32(esp, eax); /* 0x11035137: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11035138: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0xD4); /* 0x1103513B: lea eax, [ebp - 0xd4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11035141: push dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_11035063; /* 0x11035144: jmp 0x11035063 */
L_11035149:
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x11035149: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_110351EE; /* 0x1103514D: jbe 0x110351ee */
L_11035153:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11035153: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x11035157: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103515F; /* 0x1103515A: jae 0x1103515f */
L_1103515C:
    eax = ebp + (-0x28); /* 0x1103515C: lea eax, [ebp - 0x28] */
L_1103515F:
    PUSH32(esp, 1); /* 0x1103515F: push 1 */
    PUSH32(esp, eax); /* 0x11035161: push eax */
    eax = ebp + (-0xB4); /* 0x11035162: lea eax, [ebp - 0xb4] */
    RECOMP_BACKEDGE();
    goto L_11035061; /* 0x11035168: jmp 0x11035061 */
L_1103516D:
    /* cmp MEM32(ebp + (-0x44)), 8 */ /* 0x1103516D: cmp dword ptr [ebp - 0x44], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x58)); /* 0x11035171: mov eax, dword ptr [ebp - 0x58] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11035179; /* 0x11035174: jae 0x11035179 */
L_11035176:
    eax = ebp + (-0x58); /* 0x11035176: lea eax, [ebp - 0x58] */
L_11035179:
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x11035179: push dword ptr [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x1103517C: push eax */
    eax = ebp + (-0xDC); /* 0x1103517D: lea eax, [ebp - 0xdc] */
    RECOMP_BACKEDGE();
    goto L_11035061; /* 0x11035183: jmp 0x11035061 */
L_11035188:
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x11035188: push dword ptr [ebp - 0x8c] */
    ecx = ebp + (-0x94); /* 0x1103518E: lea ecx, [ebp - 0x94] */
    MEM32(ebp + (-0x94)) = edx; /* 0x11035194: mov dword ptr [ebp - 0x94], edx */
    MEM32(ebp + (-0x90)) = esi; /* 0x1103519A: mov dword ptr [ebp - 0x90], esi */
    RECOMP_CALL(sub_1101778E); /* 0x110351A0: call 0x1101778e */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x94)); /* 0x110351A5: mov edx, dword ptr [ebp - 0x94] */
    esi = MEM32(ebp + (-0x90)); /* 0x110351AB: mov esi, dword ptr [ebp - 0x90] */
    ecx = MEM32(ebp + (-0x80)); /* 0x110351B1: mov ecx, dword ptr [ebp - 0x80] */
    MEM32(ebp + 0xC) = edx; /* 0x110351B4: mov dword ptr [ebp + 0xc], edx */
    MEM32(ebp + 0x10) = esi; /* 0x110351B7: mov dword ptr [ebp + 0x10], esi */
L_110351BA:
    /* cmp ecx, 0x100u */ /* 0x110351BA: cmp ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110351EE; /* 0x110351C0: jne 0x110351ee */
L_110351C2:
    PUSH32(esp, MEM32(ebp + (-0x78))); /* 0x110351C2: push dword ptr [ebp - 0x78] */
    eax = ebp + (-0xAC); /* 0x110351C5: lea eax, [ebp - 0xac] */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x110351CB: push dword ptr [ebp - 0x8c] */
    PUSH32(esp, esi); /* 0x110351D1: push esi */
    PUSH32(esp, edx); /* 0x110351D2: push edx */
    PUSH32(esp, eax); /* 0x110351D3: push eax */
    RECOMP_CALL(sub_11035293); /* 0x110351D4: call 0x11035293 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x110351D9: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x78)) = MEM32(ebp + (-0x78)) & 0; /* 0x110351DC: and dword ptr [ebp - 0x78], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110351E0:
    edx = MEM32(eax); /* 0x110351E0: mov edx, dword ptr [eax] */
    ecx = MEM32(ebp + (-0x80)); /* 0x110351E2: mov ecx, dword ptr [ebp - 0x80] */
    MEM32(ebp + 0xC) = edx; /* 0x110351E5: mov dword ptr [ebp + 0xc], edx */
    esi = MEM32(eax + 0x4); /* 0x110351E8: mov esi, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = esi; /* 0x110351EB: mov dword ptr [ebp + 0x10], esi */
L_110351EE:
    eax = MEM32(ebp + (-0x7C)); /* 0x110351EE: mov eax, dword ptr [ebp - 0x7c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110351F1: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x7C)) = eax; /* 0x110351F2: mov dword ptr [ebp - 0x7c], eax */
    /* cmp eax, 4 */ /* 0x110351F5: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11035012; /* 0x110351F8: jb 0x11035012 */
L_110351FE:
    /* cmp MEM32(ebp + (-0x18)), 1 */ /* 0x110351FE: cmp dword ptr [ebp - 0x18], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11035235; /* 0x11035202: jbe 0x11035235 */
L_11035204:
    /* cmp MEM32(ebp + (-0x14)), 8 */ /* 0x11035204: cmp dword ptr [ebp - 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x11035208: mov ecx, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11035210; /* 0x1103520B: jae 0x11035210 */
L_1103520D:
    ecx = ebp + (-0x28); /* 0x1103520D: lea ecx, [ebp - 0x28] */
L_11035210:
    eax = MEM32(ebp + (-0x18)); /* 0x11035210: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x11035213: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11035216: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x11035217: push eax */
    PUSH32(esp, ecx); /* 0x11035218: push ecx */
    PUSH32(esp, esi); /* 0x11035219: push esi */
    PUSH32(esp, edx); /* 0x1103521A: push edx */
    eax = ebp + (-0xAC); /* 0x1103521B: lea eax, [ebp - 0xac] */
    PUSH32(esp, eax); /* 0x11035221: push eax */
    RECOMP_CALL(sub_11034792); /* 0x11035222: call 0x11034792 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11035227: add esp, 0x14 */
    _flag_k = FK_ADD;
    edx = MEM32(eax); /* 0x1103522A: mov edx, dword ptr [eax] */
    MEM32(ebp + 0xC) = edx; /* 0x1103522C: mov dword ptr [ebp + 0xc], edx */
    esi = MEM32(eax + 0x4); /* 0x1103522F: mov esi, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = esi; /* 0x11035232: mov dword ptr [ebp + 0x10], esi */
L_11035235:
    PUSH32(esp, MEM32(ebp + (-0x78))); /* 0x11035235: push dword ptr [ebp - 0x78] */
    eax = MEM32(ebp + (-0x88)); /* 0x11035238: mov eax, dword ptr [ebp - 0x88] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103523E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x11035240: push dword ptr [ebp - 0x8c] */
    PUSH32(esp, esi); /* 0x11035246: push esi */
    esi = MEM32(ebp + (-0xA4)); /* 0x11035247: mov esi, dword ptr [ebp - 0xa4] */
    PUSH32(esp, edx); /* 0x1103524D: push edx */
    PUSH32(esp, esi); /* 0x1103524E: push esi */
    MEM32(eax + 0x20) = ebx; /* 0x1103524F: mov dword ptr [eax + 0x20], ebx */
    MEM32(eax + 0x24) = ebx; /* 0x11035252: mov dword ptr [eax + 0x24], ebx */
    RECOMP_CALL(sub_11035293); /* 0x11035255: call 0x11035293 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1103525A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x58); /* 0x1103525D: lea ecx, [ebp - 0x58] */
    PUSH32(esp, ebx); /* 0x11035260: push ebx */
    PUSH32(esp, 1); /* 0x11035261: push 1 */
    RECOMP_CALL(sub_1102261D); /* 0x11035263: call 0x1102261d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11035268: push ebx */
    PUSH32(esp, 1); /* 0x11035269: push 1 */
    ecx = ebp + (-0x28); /* 0x1103526B: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1102261D); /* 0x1103526E: call 0x1102261d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11035273: push ebx */
    PUSH32(esp, 1); /* 0x11035274: push 1 */
    ecx = ebp + (-0x40); /* 0x11035276: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_11010630); /* 0x11035279: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1103527E: push ebx */
    PUSH32(esp, 1); /* 0x1103527F: push 1 */
    ecx = ebp + 0x24; /* 0x11035281: lea ecx, [ebp + 0x24] */
    RECOMP_CALL(sub_1102261D); /* 0x11035284: call 0x1102261d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11035289: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x1103528B: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 60; { RECOMP_REGS_OUT(); return; } /* 0x11035290: ret 0x38 */
    RECOMP_REGS_OUT();
}

void sub_11035293(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035293u);

L_11035293:
    PUSH32(esp, ebp); /* 0x11035293: push ebp */
    ebp = esp; /* 0x11035294: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11035296: push esi */
    esi = MEM32(ebp + 0x18); /* 0x11035297: mov esi, dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x1103529A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110352AC; /* 0x1103529C: je 0x110352ac */
L_1103529E:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1103529E: push dword ptr [ebp + 0x14] */
    ecx = ebp + 0xC; /* 0x110352A1: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_1101778E); /* 0x110352A4: call 0x1101778e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x110352A9: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1103529E; /* 0x110352AA: jne 0x1103529e */
L_110352AC:
    eax = MEM32(ebp + 0x8); /* 0x110352AC: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x110352AF: mov ecx, dword ptr [ebp + 0xc] */
    esi = POP32_VAL(esp); /* 0x110352B2: pop esi */
    MEM32(eax) = ecx; /* 0x110352B3: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110352B5: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x110352B8: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x110352BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110352BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_110352BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110352BDu);

L_110352BD:
    PUSH32(esp, esi); /* 0x110352BD: push esi */
    esi = ecx; /* 0x110352BE: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x110352C0: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_1103B312); /* 0x110352C3: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x110352C8: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_1103B312); /* 0x110352CB: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x110352D0: push dword ptr [esi + 0x14] */
    RECOMP_CALL(sub_1103B312); /* 0x110352D3: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x110352D8: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_1103B312); /* 0x110352DB: call 0x1103b312 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110352E0: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x110352E3: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110352E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_110352E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110352E5u);

L_110352E5:
    PUSH32(esp, ebp); /* 0x110352E5: push ebp */
    ebp = esp; /* 0x110352E6: mov ebp, esp */
    eax = ecx + 0x8; /* 0x110352E8: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x110352EB: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110352EC: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110352EF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110352F2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110352F5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103144A); /* 0x110352F8: call 0x1103144a */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x110352FD: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x110352FF: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x11035302: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1103530B; /* 0x11035304: jns 0x1103530b */
L_11035306:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x11035306: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11035312; /* 0x11035309: jmp 0x11035312 */
L_1103530B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103530B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1103530D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1103530F: setne al */
L_11035312:
    ebp = POP32_VAL(esp); /* 0x11035312: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x11035313: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_11035316(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035316u);

L_11035316:
    PUSH32(esp, ebp); /* 0x11035316: push ebp */
    ebp = esp; /* 0x11035317: mov ebp, esp */
    eax = ecx + 0x8; /* 0x11035319: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1103531C: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1103531D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11035320: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11035323: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11035326: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103A473); /* 0x11035329: call 0x1103a473 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1103532E: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11035330: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x11035333: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1103533C; /* 0x11035335: jns 0x1103533c */
L_11035337:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x11035337: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11035343; /* 0x1103533A: jmp 0x11035343 */
L_1103533C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103533C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1103533E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11035340: setne al */
L_11035343:
    ebp = POP32_VAL(esp); /* 0x11035343: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x11035344: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_11035347(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035347u);

L_11035347:
    SET_LO16(eax, MEM16(ecx + 0xC)); /* 0x11035347: mov ax, word ptr [ecx + 0xc] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103534B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103534C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103534Cu);

L_1103534C:
    eax = MEM32(ecx + 0x1C); /* 0x1103534C: mov eax, dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103534F: ret  */
    RECOMP_REGS_OUT();
}

void sub_11035350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035350u);

L_11035350:
    PUSH32(esp, ebp); /* 0x11035350: push ebp */
    ebp = esp; /* 0x11035351: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11035353: push ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11035354: push dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x8); /* 0x11035357: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1103535A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_11031E6B); /* 0x1103535E: call 0x11031e6b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11035363: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x11035366: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11035368: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x11035369: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1103536C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103536Cu);

L_1103536C:
    PUSH32(esp, 0x40u); /* 0x1103536C: push 0x40 */
    eax = 0x1103F224u; /* 0x1103536E: mov eax, 0x1103f224 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11035373: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x28); /* 0x11035378: mov edx, dword ptr [ebp + 0x28] */
    eax = MEM32(ebp + 0x20); /* 0x1103537B: mov eax, dword ptr [ebp + 0x20] */
    ebx = MEM32(ebp + 0x8); /* 0x1103537E: mov ebx, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x24); /* 0x11035381: mov esi, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x48)) = edx; /* 0x11035384: mov dword ptr [ebp - 0x48], edx */
    edx = ebp + (-0x28); /* 0x11035387: lea edx, [ebp - 0x28] */
    PUSH32(esp, edx); /* 0x1103538A: push edx */
    PUSH32(esp, eax); /* 0x1103538B: push eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1103538C: push dword ptr [ebp + 0x1c] */
    eax = ebp + 0x14; /* 0x1103538F: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11035392: push eax */
    eax = ebp + 0xC; /* 0x11035393: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11035396: push eax */
    eax = ebp + (-0x40); /* 0x11035397: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1103539A: push eax */
    RECOMP_CALL(sub_11032578); /* 0x1103539B: call 0x11032578 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110353A0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x14; /* 0x110353A4: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110353A7: push eax */
    ecx = ebp + 0xC; /* 0x110353A8: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x110353AB: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110353B0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110353B7; /* 0x110353B2: je 0x110353b7 */
L_110353B4:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x110353B4: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110353B7:
    /* cmp MEM32(ebp + (-0x30)), 0 */ /* 0x110353B7: cmp dword ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110353F4; /* 0x110353BB: je 0x110353f4 */
L_110353BD:
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x110353BD: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x40)); /* 0x110353C1: mov edi, dword ptr [ebp - 0x40] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110353C9; /* 0x110353C4: jae 0x110353c9 */
L_110353C6:
    edi = ebp + (-0x40); /* 0x110353C6: lea edi, [ebp - 0x40] */
L_110353C9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x110353C9: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x44); /* 0x110353CD: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x110353D0: push eax */
    PUSH32(esp, 0); /* 0x110353D1: push 0 */
    eax = ebp + (-0x4C); /* 0x110353D3: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x110353D6: push eax */
    PUSH32(esp, edi); /* 0x110353D7: push edi */
    RECOMP_CALL(sub_11030BB4); /* 0x110353D8: call 0x11030bb4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110353DD: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4C)), edi */ /* 0x110353E0: cmp dword ptr [ebp - 0x4c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110353F2; /* 0x110353E3: je 0x110353f2 */
L_110353E5:
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x110353E5: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110353F2; /* 0x110353E9: jne 0x110353f2 */
L_110353EB:
    eax = MEM32(ebp + (-0x48)); /* 0x110353EB: mov eax, dword ptr [ebp - 0x48] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x110353EE: fstp qword ptr [eax] */
    goto L_110353F7; /* 0x110353F0: jmp 0x110353f7 */
L_110353F2:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110353F2: fstp st(0) */
L_110353F4:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x110353F4: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110353F7:
    ecx = MEM32(ebp + 0xC); /* 0x110353F7: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebx) = ecx; /* 0x110353FA: mov dword ptr [ebx], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110353FC: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x110353FF: push 0 */
    MEM32(ebx + 0x4) = ecx; /* 0x11035401: mov dword ptr [ebx + 4], ecx */
    ecx = ebp + (-0x40); /* 0x11035404: lea ecx, [ebp - 0x40] */
    PUSH32(esp, 1); /* 0x11035407: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x11035409: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1103540E: mov eax, ebx */
    RECOMP_CALL(sub_1103B354); /* 0x11035410: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x11035415: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_11035418(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035418u);

L_11035418:
    PUSH32(esp, 0x38u); /* 0x11035418: push 0x38 */
    eax = 0x1103F251u; /* 0x1103541A: mov eax, 0x1103f251 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1103541F: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11035424: mov eax, dword ptr [ebp + 8] */
    edx = ebp + (-0x28); /* 0x11035427: lea edx, [ebp - 0x28] */
    edi = MEM32(ebp + 0x24); /* 0x1103542A: mov edi, dword ptr [ebp + 0x24] */
    esi = MEM32(ebp + 0x28); /* 0x1103542D: mov esi, dword ptr [ebp + 0x28] */
    PUSH32(esp, edx); /* 0x11035430: push edx */
    MEM32(ebp + (-0x44)) = eax; /* 0x11035431: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + 0x20); /* 0x11035434: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x11035437: push eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11035438: push dword ptr [ebp + 0x1c] */
    eax = ebp + 0x14; /* 0x1103543B: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1103543E: push eax */
    eax = ebp + 0xC; /* 0x1103543F: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11035442: push eax */
    eax = ebp + (-0x40); /* 0x11035443: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11035446: push eax */
    RECOMP_CALL(sub_11032578); /* 0x11035447: call 0x11032578 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1103544C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x14; /* 0x11035450: lea eax, [ebp + 0x14] */
    ebx = MEM32(ebp + (-0x30)); /* 0x11035453: mov ebx, dword ptr [ebp - 0x30] */
    ecx = ebp + 0xC; /* 0x11035456: lea ecx, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11035459: push eax */
    RECOMP_CALL(sub_110278AC); /* 0x1103545A: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1103545F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11035466; /* 0x11035461: je 0x11035466 */
L_11035463:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x11035463: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11035466:
    /* test ebx, ebx */ /* 0x11035466: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103546F; /* 0x11035468: jne 0x1103546f */
L_1103546A:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x1103546A: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110354D0; /* 0x1103546D: jmp 0x110354d0 */
L_1103546F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1103546F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x11035471: mov ecx, esi */
    PUSH32(esp, edi); /* 0x11035473: push edi */
    PUSH32(esp, ebx); /* 0x11035474: push ebx */
    RECOMP_CALL(sub_11035D95); /* 0x11035475: call 0x11035d95 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x1103547A: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x40)); /* 0x1103547E: mov eax, dword ptr [ebp - 0x40] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11035486; /* 0x11035481: jae 0x11035486 */
L_11035483:
    eax = ebp + (-0x40); /* 0x11035483: lea eax, [ebp - 0x40] */
L_11035486:
    /* cmp MEM8(eax), 0x2Du */ /* 0x11035486: cmp byte ptr [eax], 0x2d */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110354CC; /* 0x11035489: jne 0x110354cc */
L_1103548B:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x1103548B: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11035495; /* 0x1103548F: jb 0x11035495 */
L_11035491:
    ecx = MEM32(esi); /* 0x11035491: mov ecx, dword ptr [esi] */
    goto L_11035497; /* 0x11035493: jmp 0x11035497 */
L_11035495:
    ecx = esi; /* 0x11035495: mov ecx, esi */
L_11035497:
    SET_LO16(eax, MEM16(ebp + (-0x14))); /* 0x11035497: mov ax, word ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1103549B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1103549D: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x110354A0: inc edi */
    _flag_k = FK_INC;
    goto L_110354CC; /* 0x110354A1: jmp 0x110354cc */
L_110354A3:
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x110354A3: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x40)); /* 0x110354A7: mov eax, dword ptr [ebp - 0x40] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110354AF; /* 0x110354AA: jae 0x110354af */
L_110354AC:
    eax = ebp + (-0x40); /* 0x110354AC: lea eax, [ebp - 0x40] */
L_110354AF:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x110354AF: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110354B9; /* 0x110354B3: jb 0x110354b9 */
L_110354B5:
    ecx = MEM32(esi); /* 0x110354B5: mov ecx, dword ptr [esi] */
    goto L_110354BB; /* 0x110354B7: jmp 0x110354bb */
L_110354B9:
    ecx = esi; /* 0x110354B9: mov ecx, esi */
L_110354BB:
    eax = (int32_t)(int8_t)MEM8(eax + edi); /* 0x110354BB: movsx eax, byte ptr [eax + edi] */
    SET_LO16(eax, MEM16(ebp + eax * 2 + (-0x88))); /* 0x110354BF: mov ax, word ptr [ebp + eax*2 - 0x88] */
    MEM16(ecx + edi * 2) = (uint16_t)(LO16(eax)); /* 0x110354C7: mov word ptr [ecx + edi*2], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x110354CB: inc edi */
    _flag_k = FK_INC;
L_110354CC:
    /* cmp edi, ebx */ /* 0x110354CC: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_110354A3; /* 0x110354CE: jb 0x110354a3 */
L_110354D0:
    ebx = MEM32(ebp + (-0x44)); /* 0x110354D0: mov ebx, dword ptr [ebp - 0x44] */
    ecx = MEM32(ebp + 0xC); /* 0x110354D3: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x110354D6: push 0 */
    PUSH32(esp, 1); /* 0x110354D8: push 1 */
    MEM32(ebx) = ecx; /* 0x110354DA: mov dword ptr [ebx], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110354DC: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = ecx; /* 0x110354DF: mov dword ptr [ebx + 4], ecx */
    ecx = ebp + (-0x40); /* 0x110354E2: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_11010630); /* 0x110354E5: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x110354EA: mov eax, ebx */
    RECOMP_CALL(sub_1103B354); /* 0x110354EC: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x110354F1: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_110354F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110354F4u);

L_110354F4:
    PUSH32(esp, 0x40u); /* 0x110354F4: push 0x40 */
    eax = 0x1103F224u; /* 0x110354F6: mov eax, 0x1103f224 */
    RECOMP_CALL(sub_1103B3A5); /* 0x110354FB: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x28); /* 0x11035500: mov edx, dword ptr [ebp + 0x28] */
    eax = MEM32(ebp + 0x20); /* 0x11035503: mov eax, dword ptr [ebp + 0x20] */
    ebx = MEM32(ebp + 0x8); /* 0x11035506: mov ebx, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x24); /* 0x11035509: mov esi, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x48)) = edx; /* 0x1103550C: mov dword ptr [ebp - 0x48], edx */
    edx = ebp + (-0x28); /* 0x1103550F: lea edx, [ebp - 0x28] */
    PUSH32(esp, edx); /* 0x11035512: push edx */
    PUSH32(esp, eax); /* 0x11035513: push eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11035514: push dword ptr [ebp + 0x1c] */
    eax = ebp + 0x14; /* 0x11035517: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1103551A: push eax */
    eax = ebp + 0xC; /* 0x1103551B: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1103551E: push eax */
    eax = ebp + (-0x40); /* 0x1103551F: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11035522: push eax */
    RECOMP_CALL(sub_11032FDC); /* 0x11035523: call 0x11032fdc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11035528: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x14; /* 0x1103552C: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x1103552F: push eax */
    ecx = ebp + 0xC; /* 0x11035530: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_110278AC); /* 0x11035533: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11035538: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103553F; /* 0x1103553A: je 0x1103553f */
L_1103553C:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x1103553C: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103553F:
    /* cmp MEM32(ebp + (-0x30)), 0 */ /* 0x1103553F: cmp dword ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103557C; /* 0x11035543: je 0x1103557c */
L_11035545:
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x11035545: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x40)); /* 0x11035549: mov edi, dword ptr [ebp - 0x40] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11035551; /* 0x1103554C: jae 0x11035551 */
L_1103554E:
    edi = ebp + (-0x40); /* 0x1103554E: lea edi, [ebp - 0x40] */
L_11035551:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0; /* 0x11035551: and dword ptr [ebp - 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x44); /* 0x11035555: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x11035558: push eax */
    PUSH32(esp, 0); /* 0x11035559: push 0 */
    eax = ebp + (-0x4C); /* 0x1103555B: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1103555E: push eax */
    PUSH32(esp, edi); /* 0x1103555F: push edi */
    RECOMP_CALL(sub_11030BB4); /* 0x11035560: call 0x11030bb4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11035565: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4C)), edi */ /* 0x11035568: cmp dword ptr [ebp - 0x4c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103557A; /* 0x1103556B: je 0x1103557a */
L_1103556D:
    /* cmp MEM32(ebp + (-0x44)), 0 */ /* 0x1103556D: cmp dword ptr [ebp - 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103557A; /* 0x11035571: jne 0x1103557a */
L_11035573:
    eax = MEM32(ebp + (-0x48)); /* 0x11035573: mov eax, dword ptr [ebp - 0x48] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x11035576: fstp qword ptr [eax] */
    goto L_1103557F; /* 0x11035578: jmp 0x1103557f */
L_1103557A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103557A: fstp st(0) */
L_1103557C:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x1103557C: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103557F:
    ecx = MEM32(ebp + 0xC); /* 0x1103557F: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebx) = ecx; /* 0x11035582: mov dword ptr [ebx], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11035584: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x11035587: push 0 */
    MEM32(ebx + 0x4) = ecx; /* 0x11035589: mov dword ptr [ebx + 4], ecx */
    ecx = ebp + (-0x40); /* 0x1103558C: lea ecx, [ebp - 0x40] */
    PUSH32(esp, 1); /* 0x1103558F: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x11035591: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x11035596: mov eax, ebx */
    RECOMP_CALL(sub_1103B354); /* 0x11035598: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1103559D: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_110355A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110355A0u);

L_110355A0:
    PUSH32(esp, 0x38u); /* 0x110355A0: push 0x38 */
    eax = 0x1103F251u; /* 0x110355A2: mov eax, 0x1103f251 */
    RECOMP_CALL(sub_1103B3A5); /* 0x110355A7: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x110355AC: mov eax, dword ptr [ebp + 8] */
    edx = ebp + (-0x28); /* 0x110355AF: lea edx, [ebp - 0x28] */
    edi = MEM32(ebp + 0x24); /* 0x110355B2: mov edi, dword ptr [ebp + 0x24] */
    esi = MEM32(ebp + 0x28); /* 0x110355B5: mov esi, dword ptr [ebp + 0x28] */
    PUSH32(esp, edx); /* 0x110355B8: push edx */
    MEM32(ebp + (-0x44)) = eax; /* 0x110355B9: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + 0x20); /* 0x110355BC: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x110355BF: push eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110355C0: push dword ptr [ebp + 0x1c] */
    eax = ebp + 0x14; /* 0x110355C3: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x110355C6: push eax */
    eax = ebp + 0xC; /* 0x110355C7: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110355CA: push eax */
    eax = ebp + (-0x40); /* 0x110355CB: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x110355CE: push eax */
    RECOMP_CALL(sub_11032FDC); /* 0x110355CF: call 0x11032fdc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110355D4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x14; /* 0x110355D8: lea eax, [ebp + 0x14] */
    ebx = MEM32(ebp + (-0x30)); /* 0x110355DB: mov ebx, dword ptr [ebp - 0x30] */
    ecx = ebp + 0xC; /* 0x110355DE: lea ecx, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110355E1: push eax */
    RECOMP_CALL(sub_110278AC); /* 0x110355E2: call 0x110278ac */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110355E7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110355EE; /* 0x110355E9: je 0x110355ee */
L_110355EB:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x110355EB: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110355EE:
    /* test ebx, ebx */ /* 0x110355EE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110355F7; /* 0x110355F0: jne 0x110355f7 */
L_110355F2:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x110355F2: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11035658; /* 0x110355F5: jmp 0x11035658 */
L_110355F7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110355F7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x110355F9: mov ecx, esi */
    PUSH32(esp, edi); /* 0x110355FB: push edi */
    PUSH32(esp, ebx); /* 0x110355FC: push ebx */
    RECOMP_CALL(sub_11035D95); /* 0x110355FD: call 0x11035d95 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x11035602: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x40)); /* 0x11035606: mov eax, dword ptr [ebp - 0x40] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103560E; /* 0x11035609: jae 0x1103560e */
L_1103560B:
    eax = ebp + (-0x40); /* 0x1103560B: lea eax, [ebp - 0x40] */
L_1103560E:
    /* cmp MEM8(eax), 0x2Du */ /* 0x1103560E: cmp byte ptr [eax], 0x2d */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11035654; /* 0x11035611: jne 0x11035654 */
L_11035613:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11035613: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1103561D; /* 0x11035617: jb 0x1103561d */
L_11035619:
    ecx = MEM32(esi); /* 0x11035619: mov ecx, dword ptr [esi] */
    goto L_1103561F; /* 0x1103561B: jmp 0x1103561f */
L_1103561D:
    ecx = esi; /* 0x1103561D: mov ecx, esi */
L_1103561F:
    SET_LO16(eax, MEM16(ebp + (-0x14))); /* 0x1103561F: mov ax, word ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11035623: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x11035625: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11035628: inc edi */
    _flag_k = FK_INC;
    goto L_11035654; /* 0x11035629: jmp 0x11035654 */
L_1103562B:
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x1103562B: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x40)); /* 0x1103562F: mov eax, dword ptr [ebp - 0x40] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11035637; /* 0x11035632: jae 0x11035637 */
L_11035634:
    eax = ebp + (-0x40); /* 0x11035634: lea eax, [ebp - 0x40] */
L_11035637:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11035637: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11035641; /* 0x1103563B: jb 0x11035641 */
L_1103563D:
    ecx = MEM32(esi); /* 0x1103563D: mov ecx, dword ptr [esi] */
    goto L_11035643; /* 0x1103563F: jmp 0x11035643 */
L_11035641:
    ecx = esi; /* 0x11035641: mov ecx, esi */
L_11035643:
    eax = (int32_t)(int8_t)MEM8(eax + edi); /* 0x11035643: movsx eax, byte ptr [eax + edi] */
    SET_LO16(eax, MEM16(ebp + eax * 2 + (-0x88))); /* 0x11035647: mov ax, word ptr [ebp + eax*2 - 0x88] */
    MEM16(ecx + edi * 2) = (uint16_t)(LO16(eax)); /* 0x1103564F: mov word ptr [ecx + edi*2], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11035653: inc edi */
    _flag_k = FK_INC;
L_11035654:
    /* cmp edi, ebx */ /* 0x11035654: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1103562B; /* 0x11035656: jb 0x1103562b */
L_11035658:
    ebx = MEM32(ebp + (-0x44)); /* 0x11035658: mov ebx, dword ptr [ebp - 0x44] */
    ecx = MEM32(ebp + 0xC); /* 0x1103565B: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1103565E: push 0 */
    PUSH32(esp, 1); /* 0x11035660: push 1 */
    MEM32(ebx) = ecx; /* 0x11035662: mov dword ptr [ebx], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11035664: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = ecx; /* 0x11035667: mov dword ptr [ebx + 4], ecx */
    ecx = ebp + (-0x40); /* 0x1103566A: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_11010630); /* 0x1103566D: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x11035672: mov eax, ebx */
    RECOMP_CALL(sub_1103B354); /* 0x11035674: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x11035679: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_1103567C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103567Cu);

L_1103567C:
    PUSH32(esp, ebp); /* 0x1103567C: push ebp */
    ebp = esp; /* 0x1103567D: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1103567F: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x8); /* 0x11035682: sub eax, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x11035685: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11035688: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11035689: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11033A40); /* 0x1103568C: call 0x11033a40 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11035691: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11035692: pop ecx */
    ebp = POP32_VAL(esp); /* 0x11035693: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11035694: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11035697(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035697u);

L_11035697:
    PUSH32(esp, ebp); /* 0x11035697: push ebp */
    ebp = esp; /* 0x11035698: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1103569A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x24); /* 0x1103569D: mov ecx, dword ptr [ecx + 0x24] */
    MEM32(eax) = ecx; /* 0x110356A0: mov dword ptr [eax], ecx */
    ebp = POP32_VAL(esp); /* 0x110356A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110356A3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110356A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110356A6u);

L_110356A6:
    PUSH32(esp, ebp); /* 0x110356A6: push ebp */
    ebp = esp; /* 0x110356A7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110356A9: push ecx */
    PUSH32(esp, MEM32(ecx + 0x18)); /* 0x110356AA: push dword ptr [ecx + 0x18] */
    ecx = MEM32(ebp + 0x8); /* 0x110356AD: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110356B0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_11016CBD); /* 0x110356B4: call 0x11016cbd */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x110356B9: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x110356BC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110356BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110356BF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110356C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110356C2u);

L_110356C2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x110356C2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110356C5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_110356C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110356C8u);

L_110356C8:
    PUSH32(esp, ebp); /* 0x110356C8: push ebp */
    ebp = esp; /* 0x110356C9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x110356CB: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x20); /* 0x110356CE: mov ecx, dword ptr [ecx + 0x20] */
    MEM32(eax) = ecx; /* 0x110356D1: mov dword ptr [eax], ecx */
    ebp = POP32_VAL(esp); /* 0x110356D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110356D4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110356D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110356D7u);

L_110356D7:
    PUSH32(esp, ebp); /* 0x110356D7: push ebp */
    ebp = esp; /* 0x110356D8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110356DA: push ecx */
    PUSH32(esp, MEM32(ecx + 0x14)); /* 0x110356DB: push dword ptr [ecx + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x110356DE: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110356E1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_11016CBD); /* 0x110356E5: call 0x11016cbd */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x110356EA: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x110356ED: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110356EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110356F0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110356F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110356F3u);

L_110356F3:
    PUSH32(esp, 0x48u); /* 0x110356F3: push 0x48 */
    eax = 0x1103F2BBu; /* 0x110356F5: mov eax, 0x1103f2bb */
    RECOMP_CALL(sub_1103B3A5); /* 0x110356FA: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x54)) = ecx; /* 0x110356FF: mov dword ptr [ebp - 0x54], ecx */
    eax = MEM32(ebp + 0x8); /* 0x11035702: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x44); /* 0x11035705: lea ecx, [ebp - 0x44] */
    edi = MEM32(ebp + 0x20); /* 0x11035708: mov edi, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1103570B: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + 0x18); /* 0x1103570E: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x11035711: push ecx */
    ecx = eax; /* 0x11035712: mov ecx, eax */
    MEM32(ebp + (-0x50)) = eax; /* 0x11035714: mov dword ptr [ebp - 0x50], eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11035717: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1103571C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11035720: push eax */
    RECOMP_CALL(sub_1101103E); /* 0x11035721: call 0x1101103e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11035726: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1103572A: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1103572C: pop ecx */
    ecx = ebp + (-0x44); /* 0x1103572D: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100E431); /* 0x11035730: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x11035735: mov edx, dword ptr [esi] */
    eax = ebp + (-0x28); /* 0x11035737: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1103573A: push eax */
    PUSH32(esp, 0x110035AFu); /* 0x1103573B: push 0x110035af */
    PUSH32(esp, 0x110035A4u); /* 0x11035740: push 0x110035a4 */
    ecx = esi; /* 0x11035745: mov ecx, esi */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x11035747: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103574A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x48)) = (uint8_t)(0); /* 0x1103574C: mov byte ptr [ebp - 0x48], 0 */
    /* cmp MEM32(edi + 0x10), ebx */ /* 0x11035750: cmp dword ptr [edi + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11035771; /* 0x11035753: je 0x11035771 */
L_11035755:
    /* cmp MEM32(edi + 0x14), 8 */ /* 0x11035755: cmp dword ptr [edi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1103575F; /* 0x11035759: jb 0x1103575f */
L_1103575B:
    eax = MEM32(edi); /* 0x1103575B: mov eax, dword ptr [edi] */
    goto L_11035761; /* 0x1103575D: jmp 0x11035761 */
L_1103575F:
    eax = edi; /* 0x1103575F: mov eax, edi */
L_11035761:
    SET_LO16(eax, MEM16(eax)); /* 0x11035761: mov ax, word ptr [eax] */
    /* cmp LO16(eax), MEM16(ebp + (-0x14)) */ /* 0x11035764: cmp ax, word ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x14))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11035771; /* 0x11035768: jne 0x11035771 */
L_1103576A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103576A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x48)) = (uint8_t)(1); /* 0x1103576C: mov byte ptr [ebp - 0x48], 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11035770: inc ebx */
    _flag_k = FK_INC;
L_11035771:
    esi = ebx; /* 0x11035771: mov esi, ebx */
    /* cmp ebx, MEM32(edi + 0x10) */ /* 0x11035773: cmp ebx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103579F; /* 0x11035776: jae 0x1103579f */
L_11035778:
    /* cmp MEM32(edi + 0x14), 8 */ /* 0x11035778: cmp dword ptr [edi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11035782; /* 0x1103577C: jb 0x11035782 */
L_1103577E:
    eax = MEM32(edi); /* 0x1103577E: mov eax, dword ptr [edi] */
    goto L_11035784; /* 0x11035780: jmp 0x11035784 */
L_11035782:
    eax = edi; /* 0x11035782: mov eax, edi */
L_11035784:
    eax = (uint32_t)MEM16(eax + esi * 2); /* 0x11035784: movzx eax, word ptr [eax + esi*2] */
    PUSH32(esp, eax); /* 0x11035788: push eax */
    eax = ebp + (-0x28); /* 0x11035789: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1103578C: push eax */
    RECOMP_CALL(sub_1101503D); /* 0x1103578D: call 0x1101503d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11035792: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11035793: pop ecx */
    /* cmp eax, 0xAu */ /* 0x11035794: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103579F; /* 0x11035797: jae 0x1103579f */
L_11035799:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11035799: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x10) */ /* 0x1103579A: cmp esi, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11035778; /* 0x1103579D: jb 0x11035778 */
L_1103579F:
    /* cmp MEM32(edi + 0x14), 8 */ /* 0x1103579F: cmp dword ptr [edi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110357A7; /* 0x110357A3: jb 0x110357a7 */
L_110357A5:
    edi = MEM32(edi); /* 0x110357A5: mov edi, dword ptr [edi] */
L_110357A7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x110357A7: sub esi, ebx */
    _flag_k = FK_CMP;
    eax = edi + ebx * 2; /* 0x110357A9: lea eax, [edi + ebx*2] */
    PUSH32(esp, esi); /* 0x110357AC: push esi */
    PUSH32(esp, eax); /* 0x110357AD: push eax */
    ecx = ebp + (-0x40); /* 0x110357AE: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_11031E93); /* 0x110357B1: call 0x11031e93 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110357B6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x110357B8: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x30)), 0 */ /* 0x110357B9: cmp dword ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x110357BD: mov dword ptr [ebp - 4], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_110357CE; /* 0x110357C0: jne 0x110357ce */
L_110357C2:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x110357C2: push dword ptr [ebp - 0x28] */
    ecx = ebp + (-0x40); /* 0x110357C5: lea ecx, [ebp - 0x40] */
    PUSH32(esp, edi); /* 0x110357C8: push edi */
    RECOMP_CALL(sub_110226A3); /* 0x110357C9: call 0x110226a3 */
    RECOMP_FLAGS_IN();
L_110357CE:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x110357CE: push dword ptr [ebp - 0x28] */
    eax = ebp + (-0x40); /* 0x110357D1: lea eax, [ebp - 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x110357D4: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x110357D7: mov ecx, esp */
    PUSH32(esp, eax); /* 0x110357D9: push eax */
    RECOMP_CALL(sub_11031E6B); /* 0x110357DA: call 0x11031e6b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x110357DF: push dword ptr [ebp - 0x48] */
    esi = MEM32(ebp + (-0x4C)); /* 0x110357E2: mov esi, dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x110357E5: push dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + (-0x54)); /* 0x110357E8: mov ecx, dword ptr [ebp - 0x54] */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x110357EB: push dword ptr [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x110357EE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110357F1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110357F4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x110357F7: push esi */
    RECOMP_CALL(sub_110347C9); /* 0x110357F8: call 0x110347c9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110357FD: push 0 */
    PUSH32(esp, edi); /* 0x110357FF: push edi */
    ecx = ebp + (-0x40); /* 0x11035800: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_1102261D); /* 0x11035803: call 0x1102261d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11035808: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x1103580A: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1103580F: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_11035812(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035812u);

L_11035812:
    PUSH32(esp, 0x5Cu); /* 0x11035812: push 0x5c */
    eax = 0x1103F286u; /* 0x11035814: mov eax, 0x1103f286 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11035819: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x68)) = ecx; /* 0x1103581E: mov dword ptr [ebp - 0x68], ecx */
    fp_push(0.0); /* 0x11035821: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x20)); /* 0x11035823: fld qword ptr [ebp + 0x20] */
    eax = MEM32(ebp + 0x18); /* 0x11035826: mov eax, dword ptr [ebp + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11035829: fcom st(1) */
    esi = MEM32(ebp + 0x8); /* 0x1103582B: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x54)) = eax; /* 0x1103582E: mov dword ptr [ebp - 0x54], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11035831: fnstsw ax */
    MEM8(ebp + (-0x60)) = (uint8_t)(0); /* 0x11035833: mov byte ptr [ebp - 0x60], 0 */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11035837: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x11035839: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11035844; /* 0x1103583C: jp 0x11035844 */
L_1103583E:
    MEM8(ebp + (-0x60)) = (uint8_t)(1); /* 0x1103583E: mov byte ptr [ebp - 0x60], 1 */
    _st[0] = -_st[0]; /* 0x11035842: fchs  */
L_11035844:
    fp_push(*(double*)ADDR(0x11002438)); /* 0x11035844: fld qword ptr [0x11002438] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1103584A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103584C: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103584E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11035850: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11035879; /* 0x11035853: jp 0x11035879 */
L_11035855:
    fp_push(*(double*)ADDR(0x11002430)); /* 0x11035855: fld qword ptr [0x11002430] */
    goto L_1103585F; /* 0x1103585B: jmp 0x1103585f */
L_1103585D:
    fp_xch(1); /* 0x1103585D: fxch st(1) */
L_1103585F:
    /* cmp edi, 0x1388u */ /* 0x1103585F: cmp edi, 0x1388 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110358AA; /* 0x11035865: jae 0x110358aa */
L_11035867:
    _st[2] /= _st[0]; /* 0x11035867: fdiv st(2), st(0) */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xAu; /* 0x11035869: add edi, 0xa */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x1103586C: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1103586E: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11035870: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11035872: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103585D; /* 0x11035875: jnp 0x1103585d */
L_11035877:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11035877: fstp st(0) */
L_11035879:
    PUSH32(esp, ecx); /* 0x11035879: push ecx */
    PUSH32(esp, ecx); /* 0x1103587A: push ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103587B: fstp st(0) */
    eax = ebp + (-0x38); /* 0x1103587D: lea eax, [ebp - 0x38] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11035880: fstp qword ptr [esp] */
    PUSH32(esp, 0x11003590u); /* 0x11035883: push 0x11003590 */
    PUSH32(esp, 0x28u); /* 0x11035888: push 0x28 */
    PUSH32(esp, eax); /* 0x1103588A: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x1103588B: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x11035891: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11035893: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x11035896: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_110358AE; /* 0x11035898: jns 0x110358ae */
L_1103589A:
    ecx = MEM32(ebp + 0xC); /* 0x1103589A: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(esi) = ecx; /* 0x1103589D: mov dword ptr [esi], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1103589F: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x4) = ecx; /* 0x110358A2: mov dword ptr [esi + 4], ecx */
    goto L_1103596A; /* 0x110358A5: jmp 0x1103596a */
L_110358AA:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x110358AA: fstp st(1) */
    RECOMP_BACKEDGE();
    goto L_11035879; /* 0x110358AC: jmp 0x11035879 */
L_110358AE:
    ecx = MEM32(ebp + (-0x54)); /* 0x110358AE: mov ecx, dword ptr [ebp - 0x54] */
    eax = ebp + (-0x64); /* 0x110358B1: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x110358B4: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110358B5: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110358BA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110358BE: push eax */
    RECOMP_CALL(sub_1101103E); /* 0x110358BF: call 0x1101103e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110358C4: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x110358C8: pop ecx */
    ecx = ebp + (-0x64); /* 0x110358C9: lea ecx, [ebp - 0x64] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x110358CC: mov dword ptr [ebp - 0x5c], eax */
    RECOMP_CALL(sub_1100E431); /* 0x110358CF: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x5C)); /* 0x110358D4: mov eax, dword ptr [ebp - 0x5c] */
    ecx = eax; /* 0x110358D7: mov ecx, eax */
    PUSH32(esp, 0x30u); /* 0x110358D9: push 0x30 */
    edx = MEM32(eax); /* 0x110358DB: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x30)); /* 0x110358DD: call dword ptr [edx + 0x30] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x40)) = MEM32(ebp + (-0x40)) & 0; /* 0x110358E0: and dword ptr [ebp - 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x50); /* 0x110358E4: lea ecx, [ebp - 0x50] */
    eax = (uint32_t)LO16(eax); /* 0x110358E7: movzx eax, ax */
    MEM32(ebp + (-0x58)) = eax; /* 0x110358EA: mov dword ptr [ebp - 0x58], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110358ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110358EF: push eax */
    PUSH32(esp, ebx); /* 0x110358F0: push ebx */
    MEM32(ebp + (-0x3C)) = 7; /* 0x110358F1: mov dword ptr [ebp - 0x3c], 7 */
    MEM16(ebp + (-0x50)) = (uint16_t)(LO16(eax)); /* 0x110358F8: mov word ptr [ebp - 0x50], ax */
    RECOMP_CALL(sub_1102283F); /* 0x110358FC: call 0x1102283f */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x3C)), 8 */ /* 0x11035901: cmp dword ptr [ebp - 0x3c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x50)); /* 0x11035905: mov eax, dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11035908: mov dword ptr [ebp - 4], 1 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11035914; /* 0x1103590F: jae 0x11035914 */
L_11035911:
    eax = ebp + (-0x50); /* 0x11035911: lea eax, [ebp - 0x50] */
L_11035914:
    ecx = MEM32(ebp + (-0x5C)); /* 0x11035914: mov ecx, dword ptr [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x11035917: push eax */
    eax = ebp + (-0x38); /* 0x11035918: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1103591B: add eax, ebx */
    _flag_k = FK_ADD;
    edx = MEM32(ecx); /* 0x1103591D: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x1103591F: push eax */
    eax = ebp + (-0x38); /* 0x11035920: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11035923: push eax */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x11035924: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x58)); /* 0x11035927: mov ebx, dword ptr [ebp - 0x58] */
    ecx = ebp + (-0x50); /* 0x1103592A: lea ecx, [ebp - 0x50] */
    PUSH32(esp, ebx); /* 0x1103592D: push ebx */
    PUSH32(esp, edi); /* 0x1103592E: push edi */
    RECOMP_CALL(sub_110226A3); /* 0x1103592F: call 0x110226a3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11035934: push ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x11035935: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x50); /* 0x11035938: lea eax, [ebp - 0x50] */
    ecx = esp; /* 0x1103593B: mov ecx, esp */
    PUSH32(esp, eax); /* 0x1103593D: push eax */
    RECOMP_CALL(sub_11031E6B); /* 0x1103593E: call 0x11031e6b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x11035943: push dword ptr [ebp - 0x60] */
    ecx = MEM32(ebp + (-0x68)); /* 0x11035946: mov ecx, dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11035949: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1103594C: push dword ptr [ebp - 0x54] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1103594F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11035952: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11035955: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11035958: push esi */
    RECOMP_CALL(sub_110347C9); /* 0x11035959: call 0x110347c9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1103595E: push 0 */
    PUSH32(esp, 1); /* 0x11035960: push 1 */
    ecx = ebp + (-0x50); /* 0x11035962: lea ecx, [ebp - 0x50] */
    RECOMP_CALL(sub_1102261D); /* 0x11035965: call 0x1102261d */
    RECOMP_FLAGS_IN();
L_1103596A:
    eax = esi; /* 0x1103596A: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x1103596C: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11035971: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11035974(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035974u);

L_11035974:
    PUSH32(esp, 0x48u); /* 0x11035974: push 0x48 */
    eax = 0x1103F2BBu; /* 0x11035976: mov eax, 0x1103f2bb */
    RECOMP_CALL(sub_1103B3A5); /* 0x1103597B: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x54)) = ecx; /* 0x11035980: mov dword ptr [ebp - 0x54], ecx */
    eax = MEM32(ebp + 0x8); /* 0x11035983: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x44); /* 0x11035986: lea ecx, [ebp - 0x44] */
    edi = MEM32(ebp + 0x20); /* 0x11035989: mov edi, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1103598C: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + 0x18); /* 0x1103598F: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x11035992: push ecx */
    ecx = eax; /* 0x11035993: mov ecx, eax */
    MEM32(ebp + (-0x50)) = eax; /* 0x11035995: mov dword ptr [ebp - 0x50], eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11035998: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1103599D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110359A1: push eax */
    RECOMP_CALL(sub_11010FA4); /* 0x110359A2: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110359A7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x110359AB: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x110359AD: pop ecx */
    ecx = ebp + (-0x44); /* 0x110359AE: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100E431); /* 0x110359B1: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x110359B6: mov edx, dword ptr [esi] */
    eax = ebp + (-0x28); /* 0x110359B8: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x110359BB: push eax */
    PUSH32(esp, 0x110035A3u); /* 0x110359BC: push 0x110035a3 */
    PUSH32(esp, 0x11003598u); /* 0x110359C1: push 0x11003598 */
    ecx = esi; /* 0x110359C6: mov ecx, esi */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x110359C8: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110359CB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x48)) = (uint8_t)(0); /* 0x110359CD: mov byte ptr [ebp - 0x48], 0 */
    /* cmp MEM32(edi + 0x10), ebx */ /* 0x110359D1: cmp dword ptr [edi + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110359F2; /* 0x110359D4: je 0x110359f2 */
L_110359D6:
    /* cmp MEM32(edi + 0x14), 8 */ /* 0x110359D6: cmp dword ptr [edi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_110359E0; /* 0x110359DA: jb 0x110359e0 */
L_110359DC:
    eax = MEM32(edi); /* 0x110359DC: mov eax, dword ptr [edi] */
    goto L_110359E2; /* 0x110359DE: jmp 0x110359e2 */
L_110359E0:
    eax = edi; /* 0x110359E0: mov eax, edi */
L_110359E2:
    SET_LO16(eax, MEM16(eax)); /* 0x110359E2: mov ax, word ptr [eax] */
    /* cmp LO16(eax), MEM16(ebp + (-0x14)) */ /* 0x110359E5: cmp ax, word ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x14))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110359F2; /* 0x110359E9: jne 0x110359f2 */
L_110359EB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110359EB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x48)) = (uint8_t)(1); /* 0x110359ED: mov byte ptr [ebp - 0x48], 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x110359F1: inc ebx */
    _flag_k = FK_INC;
L_110359F2:
    esi = ebx; /* 0x110359F2: mov esi, ebx */
    /* cmp ebx, MEM32(edi + 0x10) */ /* 0x110359F4: cmp ebx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11035A20; /* 0x110359F7: jae 0x11035a20 */
L_110359F9:
    /* cmp MEM32(edi + 0x14), 8 */ /* 0x110359F9: cmp dword ptr [edi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11035A03; /* 0x110359FD: jb 0x11035a03 */
L_110359FF:
    eax = MEM32(edi); /* 0x110359FF: mov eax, dword ptr [edi] */
    goto L_11035A05; /* 0x11035A01: jmp 0x11035a05 */
L_11035A03:
    eax = edi; /* 0x11035A03: mov eax, edi */
L_11035A05:
    eax = (uint32_t)MEM16(eax + esi * 2); /* 0x11035A05: movzx eax, word ptr [eax + esi*2] */
    PUSH32(esp, eax); /* 0x11035A09: push eax */
    eax = ebp + (-0x28); /* 0x11035A0A: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x11035A0D: push eax */
    RECOMP_CALL(sub_1101503D); /* 0x11035A0E: call 0x1101503d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11035A13: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11035A14: pop ecx */
    /* cmp eax, 0xAu */ /* 0x11035A15: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11035A20; /* 0x11035A18: jae 0x11035a20 */
L_11035A1A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11035A1A: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x10) */ /* 0x11035A1B: cmp esi, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_110359F9; /* 0x11035A1E: jb 0x110359f9 */
L_11035A20:
    /* cmp MEM32(edi + 0x14), 8 */ /* 0x11035A20: cmp dword ptr [edi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11035A28; /* 0x11035A24: jb 0x11035a28 */
L_11035A26:
    edi = MEM32(edi); /* 0x11035A26: mov edi, dword ptr [edi] */
L_11035A28:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x11035A28: sub esi, ebx */
    _flag_k = FK_CMP;
    eax = edi + ebx * 2; /* 0x11035A2A: lea eax, [edi + ebx*2] */
    PUSH32(esp, esi); /* 0x11035A2D: push esi */
    PUSH32(esp, eax); /* 0x11035A2E: push eax */
    ecx = ebp + (-0x40); /* 0x11035A2F: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_11031E93); /* 0x11035A32: call 0x11031e93 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11035A37: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11035A39: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x30)), 0 */ /* 0x11035A3A: cmp dword ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x11035A3E: mov dword ptr [ebp - 4], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_11035A4F; /* 0x11035A41: jne 0x11035a4f */
L_11035A43:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11035A43: push dword ptr [ebp - 0x28] */
    ecx = ebp + (-0x40); /* 0x11035A46: lea ecx, [ebp - 0x40] */
    PUSH32(esp, edi); /* 0x11035A49: push edi */
    RECOMP_CALL(sub_110226A3); /* 0x11035A4A: call 0x110226a3 */
    RECOMP_FLAGS_IN();
L_11035A4F:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x11035A4F: push dword ptr [ebp - 0x28] */
    eax = ebp + (-0x40); /* 0x11035A52: lea eax, [ebp - 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x11035A55: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x11035A58: mov ecx, esp */
    PUSH32(esp, eax); /* 0x11035A5A: push eax */
    RECOMP_CALL(sub_11031E6B); /* 0x11035A5B: call 0x11031e6b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x11035A60: push dword ptr [ebp - 0x48] */
    esi = MEM32(ebp + (-0x4C)); /* 0x11035A63: mov esi, dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11035A66: push dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + (-0x54)); /* 0x11035A69: mov ecx, dword ptr [ebp - 0x54] */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x11035A6C: push dword ptr [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11035A6F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11035A72: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11035A75: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11035A78: push esi */
    RECOMP_CALL(sub_11034D2E); /* 0x11035A79: call 0x11034d2e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11035A7E: push 0 */
    PUSH32(esp, edi); /* 0x11035A80: push edi */
    ecx = ebp + (-0x40); /* 0x11035A81: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_1102261D); /* 0x11035A84: call 0x1102261d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11035A89: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x11035A8B: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x11035A90: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_11035A93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035A93u);

L_11035A93:
    PUSH32(esp, 0x5Cu); /* 0x11035A93: push 0x5c */
    eax = 0x1103F286u; /* 0x11035A95: mov eax, 0x1103f286 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11035A9A: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x68)) = ecx; /* 0x11035A9F: mov dword ptr [ebp - 0x68], ecx */
    fp_push(0.0); /* 0x11035AA2: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x20)); /* 0x11035AA4: fld qword ptr [ebp + 0x20] */
    eax = MEM32(ebp + 0x18); /* 0x11035AA7: mov eax, dword ptr [ebp + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11035AAA: fcom st(1) */
    esi = MEM32(ebp + 0x8); /* 0x11035AAC: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x54)) = eax; /* 0x11035AAF: mov dword ptr [ebp - 0x54], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11035AB2: fnstsw ax */
    MEM8(ebp + (-0x60)) = (uint8_t)(0); /* 0x11035AB4: mov byte ptr [ebp - 0x60], 0 */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11035AB8: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x11035ABA: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11035AC5; /* 0x11035ABD: jp 0x11035ac5 */
L_11035ABF:
    MEM8(ebp + (-0x60)) = (uint8_t)(1); /* 0x11035ABF: mov byte ptr [ebp - 0x60], 1 */
    _st[0] = -_st[0]; /* 0x11035AC3: fchs  */
L_11035AC5:
    fp_push(*(double*)ADDR(0x11002438)); /* 0x11035AC5: fld qword ptr [0x11002438] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11035ACB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11035ACD: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11035ACF: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11035AD1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11035AFA; /* 0x11035AD4: jp 0x11035afa */
L_11035AD6:
    fp_push(*(double*)ADDR(0x11002430)); /* 0x11035AD6: fld qword ptr [0x11002430] */
    goto L_11035AE0; /* 0x11035ADC: jmp 0x11035ae0 */
L_11035ADE:
    fp_xch(1); /* 0x11035ADE: fxch st(1) */
L_11035AE0:
    /* cmp edi, 0x1388u */ /* 0x11035AE0: cmp edi, 0x1388 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11035B2B; /* 0x11035AE6: jae 0x11035b2b */
L_11035AE8:
    _st[2] /= _st[0]; /* 0x11035AE8: fdiv st(2), st(0) */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xAu; /* 0x11035AEA: add edi, 0xa */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x11035AED: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x11035AEF: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11035AF1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11035AF3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11035ADE; /* 0x11035AF6: jnp 0x11035ade */
L_11035AF8:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11035AF8: fstp st(0) */
L_11035AFA:
    PUSH32(esp, ecx); /* 0x11035AFA: push ecx */
    PUSH32(esp, ecx); /* 0x11035AFB: push ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11035AFC: fstp st(0) */
    eax = ebp + (-0x38); /* 0x11035AFE: lea eax, [ebp - 0x38] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11035B01: fstp qword ptr [esp] */
    PUSH32(esp, 0x11003590u); /* 0x11035B04: push 0x11003590 */
    PUSH32(esp, 0x28u); /* 0x11035B09: push 0x28 */
    PUSH32(esp, eax); /* 0x11035B0B: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x11035B0C: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x11035B12: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11035B14: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x11035B17: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11035B2F; /* 0x11035B19: jns 0x11035b2f */
L_11035B1B:
    ecx = MEM32(ebp + 0xC); /* 0x11035B1B: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(esi) = ecx; /* 0x11035B1E: mov dword ptr [esi], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11035B20: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x4) = ecx; /* 0x11035B23: mov dword ptr [esi + 4], ecx */
    goto L_11035BEB; /* 0x11035B26: jmp 0x11035beb */
L_11035B2B:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11035B2B: fstp st(1) */
    RECOMP_BACKEDGE();
    goto L_11035AFA; /* 0x11035B2D: jmp 0x11035afa */
L_11035B2F:
    ecx = MEM32(ebp + (-0x54)); /* 0x11035B2F: mov ecx, dword ptr [ebp - 0x54] */
    eax = ebp + (-0x64); /* 0x11035B32: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x11035B35: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11035B36: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11035B3B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11035B3F: push eax */
    RECOMP_CALL(sub_11010FA4); /* 0x11035B40: call 0x11010fa4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11035B45: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x11035B49: pop ecx */
    ecx = ebp + (-0x64); /* 0x11035B4A: lea ecx, [ebp - 0x64] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x11035B4D: mov dword ptr [ebp - 0x5c], eax */
    RECOMP_CALL(sub_1100E431); /* 0x11035B50: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x5C)); /* 0x11035B55: mov eax, dword ptr [ebp - 0x5c] */
    ecx = eax; /* 0x11035B58: mov ecx, eax */
    PUSH32(esp, 0x30u); /* 0x11035B5A: push 0x30 */
    edx = MEM32(eax); /* 0x11035B5C: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x30)); /* 0x11035B5E: call dword ptr [edx + 0x30] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x40)) = MEM32(ebp + (-0x40)) & 0; /* 0x11035B61: and dword ptr [ebp - 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x50); /* 0x11035B65: lea ecx, [ebp - 0x50] */
    eax = (uint32_t)LO16(eax); /* 0x11035B68: movzx eax, ax */
    MEM32(ebp + (-0x58)) = eax; /* 0x11035B6B: mov dword ptr [ebp - 0x58], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11035B6E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11035B70: push eax */
    PUSH32(esp, ebx); /* 0x11035B71: push ebx */
    MEM32(ebp + (-0x3C)) = 7; /* 0x11035B72: mov dword ptr [ebp - 0x3c], 7 */
    MEM16(ebp + (-0x50)) = (uint16_t)(LO16(eax)); /* 0x11035B79: mov word ptr [ebp - 0x50], ax */
    RECOMP_CALL(sub_1102283F); /* 0x11035B7D: call 0x1102283f */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x3C)), 8 */ /* 0x11035B82: cmp dword ptr [ebp - 0x3c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x50)); /* 0x11035B86: mov eax, dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11035B89: mov dword ptr [ebp - 4], 1 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11035B95; /* 0x11035B90: jae 0x11035b95 */
L_11035B92:
    eax = ebp + (-0x50); /* 0x11035B92: lea eax, [ebp - 0x50] */
L_11035B95:
    ecx = MEM32(ebp + (-0x5C)); /* 0x11035B95: mov ecx, dword ptr [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x11035B98: push eax */
    eax = ebp + (-0x38); /* 0x11035B99: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x11035B9C: add eax, ebx */
    _flag_k = FK_ADD;
    edx = MEM32(ecx); /* 0x11035B9E: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x11035BA0: push eax */
    eax = ebp + (-0x38); /* 0x11035BA1: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11035BA4: push eax */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x11035BA5: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x58)); /* 0x11035BA8: mov ebx, dword ptr [ebp - 0x58] */
    ecx = ebp + (-0x50); /* 0x11035BAB: lea ecx, [ebp - 0x50] */
    PUSH32(esp, ebx); /* 0x11035BAE: push ebx */
    PUSH32(esp, edi); /* 0x11035BAF: push edi */
    RECOMP_CALL(sub_110226A3); /* 0x11035BB0: call 0x110226a3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11035BB5: push ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x11035BB6: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x50); /* 0x11035BB9: lea eax, [ebp - 0x50] */
    ecx = esp; /* 0x11035BBC: mov ecx, esp */
    PUSH32(esp, eax); /* 0x11035BBE: push eax */
    RECOMP_CALL(sub_11031E6B); /* 0x11035BBF: call 0x11031e6b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x11035BC4: push dword ptr [ebp - 0x60] */
    ecx = MEM32(ebp + (-0x68)); /* 0x11035BC7: mov ecx, dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11035BCA: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x11035BCD: push dword ptr [ebp - 0x54] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11035BD0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11035BD3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11035BD6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11035BD9: push esi */
    RECOMP_CALL(sub_11034D2E); /* 0x11035BDA: call 0x11034d2e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11035BDF: push 0 */
    PUSH32(esp, 1); /* 0x11035BE1: push 1 */
    ecx = ebp + (-0x50); /* 0x11035BE3: lea ecx, [ebp - 0x50] */
    RECOMP_CALL(sub_1102261D); /* 0x11035BE6: call 0x1102261d */
    RECOMP_FLAGS_IN();
L_11035BEB:
    eax = esi; /* 0x11035BEB: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x11035BED: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x11035BF2: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11035BF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035BF5u);

L_11035BF5:
    SET_LO16(eax, MEM16(ecx + 0xE)); /* 0x11035BF5: mov ax, word ptr [ecx + 0xe] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11035BF9: ret  */
    RECOMP_REGS_OUT();
}

void sub_11035BFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035BFAu);

L_11035BFA:
    PUSH32(esp, 4); /* 0x11035BFA: push 4 */
    eax = 0x1103F2F9u; /* 0x11035BFC: mov eax, 0x1103f2f9 */
    RECOMP_CALL(sub_1103B372); /* 0x11035C01: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11035C06: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11035C08: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11035C0A: mov dword ptr [ebp - 0x10], ebx */
    esi = MEM32(ebp + 0x8); /* 0x11035C0D: mov esi, dword ptr [ebp + 8] */
    MEM32(esi + 0x14) = 7; /* 0x11035C10: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = ebx; /* 0x11035C17: mov dword ptr [esi + 0x10], ebx */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x11035C1A: mov word ptr [esi], ax */
    eax = MEM32(ebp + 0x10); /* 0x11035C1D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x11035C20: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x11035C23: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(ebp + (-0x4)) = ebx; /* 0x11035C25: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x10)) = 1; /* 0x11035C28: mov dword ptr [ebp - 0x10], 1 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_11035C75; /* 0x11035C2F: je 0x11035c75 */
L_11035C31:
    edi = ecx + 0x8; /* 0x11035C31: lea edi, [ecx + 8] */
L_11035C34:
    PUSH32(esp, ebx); /* 0x11035C34: push ebx */
    PUSH32(esp, eax); /* 0x11035C35: push eax */
    ecx = esi; /* 0x11035C36: mov ecx, esi */
    RECOMP_CALL(sub_11035D95); /* 0x11035C38: call 0x11035d95 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11035C3D: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11035C47; /* 0x11035C41: jb 0x11035c47 */
L_11035C43:
    eax = MEM32(esi); /* 0x11035C43: mov eax, dword ptr [esi] */
    goto L_11035C49; /* 0x11035C45: jmp 0x11035c49 */
L_11035C47:
    eax = esi; /* 0x11035C47: mov eax, esi */
L_11035C49:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11035C49: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(esi + 0x10); /* 0x11035C4D: mov edx, dword ptr [esi + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_11035C56; /* 0x11035C50: jb 0x11035c56 */
L_11035C52:
    ecx = MEM32(esi); /* 0x11035C52: mov ecx, dword ptr [esi] */
    goto L_11035C58; /* 0x11035C54: jmp 0x11035c58 */
L_11035C56:
    ecx = esi; /* 0x11035C56: mov ecx, esi */
L_11035C58:
    PUSH32(esp, edi); /* 0x11035C58: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11035C59: push dword ptr [ebp + 0x10] */
    eax = eax + edx * 2; /* 0x11035C5C: lea eax, [eax + edx*2] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11035C5F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11035C62: push eax */
    PUSH32(esp, ecx); /* 0x11035C63: push ecx */
    RECOMP_CALL(sub_11031497); /* 0x11035C64: call 0x11031497 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11035C69: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x11035C6C: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11035C75; /* 0x11035C6F: jbe 0x11035c75 */
L_11035C71:
    /* test eax, eax */ /* 0x11035C71: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11035C34; /* 0x11035C73: jne 0x11035c34 */
L_11035C75:
    PUSH32(esp, ebx); /* 0x11035C75: push ebx */
    PUSH32(esp, eax); /* 0x11035C76: push eax */
    ecx = esi; /* 0x11035C77: mov ecx, esi */
    RECOMP_CALL(sub_11035D95); /* 0x11035C79: call 0x11035d95 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11035C7E: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11035C80: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11035C85: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11035C88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035C88u);

L_11035C88:
    PUSH32(esp, 4); /* 0x11035C88: push 4 */
    eax = 0x1103F2F9u; /* 0x11035C8A: mov eax, 0x1103f2f9 */
    RECOMP_CALL(sub_1103B372); /* 0x11035C8F: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11035C94: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11035C96: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11035C98: mov dword ptr [ebp - 0x10], ebx */
    esi = MEM32(ebp + 0x8); /* 0x11035C9B: mov esi, dword ptr [ebp + 8] */
    MEM32(esi + 0x14) = 7; /* 0x11035C9E: mov dword ptr [esi + 0x14], 7 */
    MEM32(esi + 0x10) = ebx; /* 0x11035CA5: mov dword ptr [esi + 0x10], ebx */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x11035CA8: mov word ptr [esi], ax */
    eax = MEM32(ebp + 0x10); /* 0x11035CAB: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x11035CAE: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x11035CB1: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(ebp + (-0x4)) = ebx; /* 0x11035CB3: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x10)) = 1; /* 0x11035CB6: mov dword ptr [ebp - 0x10], 1 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_11035D03; /* 0x11035CBD: je 0x11035d03 */
L_11035CBF:
    edi = ecx + 0x8; /* 0x11035CBF: lea edi, [ecx + 8] */
L_11035CC2:
    PUSH32(esp, ebx); /* 0x11035CC2: push ebx */
    PUSH32(esp, eax); /* 0x11035CC3: push eax */
    ecx = esi; /* 0x11035CC4: mov ecx, esi */
    RECOMP_CALL(sub_11035D95); /* 0x11035CC6: call 0x11035d95 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11035CCB: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11035CD5; /* 0x11035CCF: jb 0x11035cd5 */
L_11035CD1:
    eax = MEM32(esi); /* 0x11035CD1: mov eax, dword ptr [esi] */
    goto L_11035CD7; /* 0x11035CD3: jmp 0x11035cd7 */
L_11035CD5:
    eax = esi; /* 0x11035CD5: mov eax, esi */
L_11035CD7:
    /* cmp MEM32(esi + 0x14), 8 */ /* 0x11035CD7: cmp dword ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(esi + 0x10); /* 0x11035CDB: mov edx, dword ptr [esi + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_11035CE4; /* 0x11035CDE: jb 0x11035ce4 */
L_11035CE0:
    ecx = MEM32(esi); /* 0x11035CE0: mov ecx, dword ptr [esi] */
    goto L_11035CE6; /* 0x11035CE2: jmp 0x11035ce6 */
L_11035CE4:
    ecx = esi; /* 0x11035CE4: mov ecx, esi */
L_11035CE6:
    PUSH32(esp, edi); /* 0x11035CE6: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11035CE7: push dword ptr [ebp + 0x10] */
    eax = eax + edx * 2; /* 0x11035CEA: lea eax, [eax + edx*2] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11035CED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11035CF0: push eax */
    PUSH32(esp, ecx); /* 0x11035CF1: push ecx */
    RECOMP_CALL(sub_1103A518); /* 0x11035CF2: call 0x1103a518 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11035CF7: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x11035CFA: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11035D03; /* 0x11035CFD: jbe 0x11035d03 */
L_11035CFF:
    /* test eax, eax */ /* 0x11035CFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11035CC2; /* 0x11035D01: jne 0x11035cc2 */
L_11035D03:
    PUSH32(esp, ebx); /* 0x11035D03: push ebx */
    PUSH32(esp, eax); /* 0x11035D04: push eax */
    ecx = esi; /* 0x11035D05: mov ecx, esi */
    RECOMP_CALL(sub_11035D95); /* 0x11035D07: call 0x11035d95 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11035D0C: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11035D0E: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x11035D13: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_11035D16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035D16u);

L_11035D16:
    PUSH32(esp, 0x38u); /* 0x11035D16: push 0x38 */
    eax = 0x1103F32Du; /* 0x11035D18: mov eax, 0x1103f32d */
    RECOMP_CALL(sub_1103B3A5); /* 0x11035D1D: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x11035D22: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11035D25: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = edx; /* 0x11035D27: mov dword ptr [ebp - 0x44], edx */
    eax = MEM32(ecx); /* 0x11035D2A: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x11035D2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11035D45; /* 0x11035D2E: jne 0x11035d45 */
L_11035D30:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x11035D30: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = edx; /* 0x11035D37: mov dword ptr [ebp - 0x18], edx */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(edx)); /* 0x11035D3A: mov byte ptr [ebp - 0x28], dl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11035D3D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x28); /* 0x11035D3F: lea eax, [ebp - 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11035D42: inc ebx */
    _flag_k = FK_INC;
    goto L_11035D5B; /* 0x11035D43: jmp 0x11035d5b */
L_11035D45:
    ecx = MEM32(eax + 0x18); /* 0x11035D45: mov ecx, dword ptr [eax + 0x18] */
    /* test ecx, ecx */ /* 0x11035D48: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11035D4F; /* 0x11035D4A: jne 0x11035d4f */
L_11035D4C:
    ecx = eax + 0x1C; /* 0x11035D4C: lea ecx, [eax + 0x1c] */
L_11035D4F:
    PUSH32(esp, ecx); /* 0x11035D4F: push ecx */
    ecx = ebp + (-0x40); /* 0x11035D50: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_11010191); /* 0x11035D53: call 0x11010191 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x11035D58: push 2 */
    ebx = POP32_VAL(esp); /* 0x11035D5A: pop ebx */
L_11035D5B:
    PUSH32(esp, eax); /* 0x11035D5B: push eax */
    ecx = esi; /* 0x11035D5C: mov ecx, esi */
    RECOMP_CALL(sub_110101C0); /* 0x11035D5E: call 0x110101c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ebx | 4)); _flag_b = (uint32_t)((ebx | 4));
    ebx = ebx | 4; /* 0x11035D63: or ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ebx), 2 */ /* 0x11035D66: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11035D7A; /* 0x11035D69: je 0x11035d7a */
L_11035D6B:
    PUSH32(esp, 0); /* 0x11035D6B: push 0 */
    PUSH32(esp, 1); /* 0x11035D6D: push 1 */
    ecx = ebp + (-0x40); /* 0x11035D6F: lea ecx, [ebp - 0x40] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ebx = ebx & 0xFFFFFFFDu; /* 0x11035D72: and ebx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_11010630); /* 0x11035D75: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_11035D7A:
    /* test LO8(ebx), 1 */ /* 0x11035D7A: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11035D8B; /* 0x11035D7D: je 0x11035d8b */
L_11035D7F:
    PUSH32(esp, 0); /* 0x11035D7F: push 0 */
    PUSH32(esp, 1); /* 0x11035D81: push 1 */
    ecx = ebp + (-0x28); /* 0x11035D83: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x11035D86: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_11035D8B:
    eax = esi; /* 0x11035D8B: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x11035D8D: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11035D92: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11035D95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035D95u);

L_11035D95:
    PUSH32(esp, ebp); /* 0x11035D95: push ebp */
    ebp = esp; /* 0x11035D96: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x11035D98: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x10) */ /* 0x11035D9B: cmp eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11035DB3; /* 0x11035D9E: ja 0x11035db3 */
L_11035DA0:
    /* cmp MEM32(ecx + 0x14), 8 */ /* 0x11035DA0: cmp dword ptr [ecx + 0x14], 8 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx + 0x10) = eax; /* 0x11035DA4: mov dword ptr [ecx + 0x10], eax */
    if (CMP_B(_flag_a, _flag_b)) goto L_11035DAB; /* 0x11035DA7: jb 0x11035dab */
L_11035DA9:
    ecx = MEM32(ecx); /* 0x11035DA9: mov ecx, dword ptr [ecx] */
L_11035DAB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x11035DAB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx + eax * 2) = (uint16_t)(LO16(edx)); /* 0x11035DAD: mov word ptr [ecx + eax*2], dx */
    goto L_11035DBF; /* 0x11035DB1: jmp 0x11035dbf */
L_11035DB3:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11035DB3: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x10); /* 0x11035DB6: sub eax, dword ptr [ecx + 0x10] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x11035DB9: push eax */
    RECOMP_CALL(sub_110226A3); /* 0x11035DBA: call 0x110226a3 */
    RECOMP_FLAGS_IN();
L_11035DBF:
    ebp = POP32_VAL(esp); /* 0x11035DBF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11035DC0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11035DC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035DC3u);

L_11035DC3:
    PUSH32(esp, ebp); /* 0x11035DC3: push ebp */
    ebp = esp; /* 0x11035DC4: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x11035DC6: push ebx */
    PUSH32(esp, esi); /* 0x11035DC7: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11035DC8: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11035DCB: push edi */
    edi = ecx; /* 0x11035DCC: mov edi, ecx */
    /* cmp MEM8(edi + 0x28), 0 */ /* 0x11035DCE: cmp byte ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x28)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11035DD9; /* 0x11035DD2: je 0x11035dd9 */
L_11035DD4:
    eax = MEM32(esi + 0xC); /* 0x11035DD4: mov eax, dword ptr [esi + 0xc] */
    goto L_11035DDC; /* 0x11035DD7: jmp 0x11035ddc */
L_11035DD9:
    eax = MEM32(esi + 0x10); /* 0x11035DD9: mov eax, dword ptr [esi + 0x10] */
L_11035DDC:
    ebx = edi + 0x2C; /* 0x11035DDC: lea ebx, [edi + 0x2c] */
    PUSH32(esp, ebx); /* 0x11035DDF: push ebx */
    PUSH32(esp, 0); /* 0x11035DE0: push 0 */
    PUSH32(esp, eax); /* 0x11035DE2: push eax */
    RECOMP_CALL(sub_110156AE); /* 0x11035DE3: call 0x110156ae */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x10) = eax; /* 0x11035DE8: mov dword ptr [edi + 0x10], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11035DEB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi + 0x2E), 4 */ /* 0x11035DEE: cmp byte ptr [esi + 0x2e], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2E)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x110048B6u; /* 0x11035DF2: mov eax, 0x110048b6 */
    if (CMP_A(_flag_a, _flag_b)) goto L_11035DFC; /* 0x11035DF7: ja 0x11035dfc */
L_11035DF9:
    eax = MEM32(esi + 0x20); /* 0x11035DF9: mov eax, dword ptr [esi + 0x20] */
L_11035DFC:
    PUSH32(esp, ebx); /* 0x11035DFC: push ebx */
    PUSH32(esp, 0); /* 0x11035DFD: push 0 */
    PUSH32(esp, eax); /* 0x11035DFF: push eax */
    RECOMP_CALL(sub_110156AE); /* 0x11035E00: call 0x110156ae */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x14) = eax; /* 0x11035E05: mov dword ptr [edi + 0x14], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11035E08: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi + 0x2F), 4 */ /* 0x11035E0B: cmp byte ptr [esi + 0x2f], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2F)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 0x11003654u; /* 0x11035E0F: mov eax, 0x11003654 */
    if (CMP_A(_flag_a, _flag_b)) goto L_11035E19; /* 0x11035E14: ja 0x11035e19 */
L_11035E16:
    eax = MEM32(esi + 0x24); /* 0x11035E16: mov eax, dword ptr [esi + 0x24] */
L_11035E19:
    PUSH32(esp, ebx); /* 0x11035E19: push ebx */
    PUSH32(esp, 0); /* 0x11035E1A: push 0 */
    PUSH32(esp, eax); /* 0x11035E1C: push eax */
    RECOMP_CALL(sub_110156AE); /* 0x11035E1D: call 0x110156ae */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x18) = eax; /* 0x11035E22: mov dword ptr [edi + 0x18], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11035E25: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x14); /* 0x11035E28: mov eax, dword ptr [esi + 0x14] */
    SET_LO8(eax, MEM8(eax)); /* 0x11035E2B: mov al, byte ptr [eax] */
    MEM8(edi + 0xC) = (uint8_t)(LO8(eax)); /* 0x11035E2D: mov byte ptr [edi + 0xc], al */
    eax = MEM32(esi + 0x18); /* 0x11035E30: mov eax, dword ptr [esi + 0x18] */
    SET_LO8(eax, MEM8(eax)); /* 0x11035E33: mov al, byte ptr [eax] */
    MEM8(edi + 0xD) = (uint8_t)(LO8(eax)); /* 0x11035E35: mov byte ptr [edi + 0xd], al */
    edi = POP32_VAL(esp); /* 0x11035E38: pop edi */
    esi = POP32_VAL(esp); /* 0x11035E39: pop esi */
    ebx = POP32_VAL(esp); /* 0x11035E3A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x11035E3B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11035E3C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11035E3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035E3Fu);

L_11035E3F:
    PUSH32(esp, 0x14u); /* 0x11035E3F: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11035E41: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11035E46: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11035E4B: push 0 */
    ecx = ebp + (-0x14); /* 0x11035E4D: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11035E50: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068B1C); /* 0x11035E55: mov edi, dword ptr [0x11068b1c] */
    ecx = 0x11066260u; /* 0x11035E5B: mov ecx, 0x11066260 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11035E60: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11035E64: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11035E67: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11035E6C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11035E6F: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11035E70: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11035E75: mov esi, eax */
    /* test esi, esi */ /* 0x11035E77: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11035EC9; /* 0x11035E79: jne 0x11035ec9 */
L_11035E7B:
    /* test edi, edi */ /* 0x11035E7B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11035E83; /* 0x11035E7D: je 0x11035e83 */
L_11035E7F:
    esi = edi; /* 0x11035E7F: mov esi, edi */
    goto L_11035EC9; /* 0x11035E81: jmp 0x11035ec9 */
L_11035E83:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11035E83: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11035E86: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11035E89: push eax */
    RECOMP_CALL(sub_110363B9); /* 0x11035E8A: call 0x110363b9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11035E8F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11035E90: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11035E91: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11035EB2; /* 0x11035E94: jne 0x11035eb2 */
L_11035E96:
    PUSH32(esp, 0x11004970u); /* 0x11035E96: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11035E9B: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11035E9E: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11035EA4: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11035EA9: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11035EAC: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11035EAD: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11035EB2:
    esi = MEM32(ebp + (-0x10)); /* 0x11035EB2: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11035EB5: mov ecx, esi */
    MEM32(0x11068B1C) = esi; /* 0x11035EB7: mov dword ptr [0x11068b1c], esi */
    eax = MEM32(esi); /* 0x11035EBD: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11035EBF: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11035EC2: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11035EC3: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11035EC8: pop ecx */
L_11035EC9:
    ecx = ebp + (-0x14); /* 0x11035EC9: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11035ECC: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11035ED1: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11035ED3: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11035ED8: ret  */
    RECOMP_REGS_OUT();
}

void sub_11035ED9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035ED9u);

L_11035ED9:
    PUSH32(esp, 0x14u); /* 0x11035ED9: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11035EDB: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11035EE0: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11035EE5: push 0 */
    ecx = ebp + (-0x14); /* 0x11035EE7: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11035EEA: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068B20); /* 0x11035EEF: mov edi, dword ptr [0x11068b20] */
    ecx = 0x1106620Cu; /* 0x11035EF5: mov ecx, 0x1106620c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11035EFA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11035EFE: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11035F01: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11035F06: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11035F09: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11035F0A: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11035F0F: mov esi, eax */
    /* test esi, esi */ /* 0x11035F11: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11035F63; /* 0x11035F13: jne 0x11035f63 */
L_11035F15:
    /* test edi, edi */ /* 0x11035F15: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11035F1D; /* 0x11035F17: je 0x11035f1d */
L_11035F19:
    esi = edi; /* 0x11035F19: mov esi, edi */
    goto L_11035F63; /* 0x11035F1B: jmp 0x11035f63 */
L_11035F1D:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11035F1D: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11035F20: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11035F23: push eax */
    RECOMP_CALL(sub_1103645F); /* 0x11035F24: call 0x1103645f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11035F29: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11035F2A: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11035F2B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11035F4C; /* 0x11035F2E: jne 0x11035f4c */
L_11035F30:
    PUSH32(esp, 0x11004970u); /* 0x11035F30: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11035F35: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11035F38: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11035F3E: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11035F43: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11035F46: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11035F47: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11035F4C:
    esi = MEM32(ebp + (-0x10)); /* 0x11035F4C: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11035F4F: mov ecx, esi */
    MEM32(0x11068B20) = esi; /* 0x11035F51: mov dword ptr [0x11068b20], esi */
    eax = MEM32(esi); /* 0x11035F57: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11035F59: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11035F5C: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11035F5D: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11035F62: pop ecx */
L_11035F63:
    ecx = ebp + (-0x14); /* 0x11035F63: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11035F66: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11035F6B: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11035F6D: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11035F72: ret  */
    RECOMP_REGS_OUT();
}

void sub_11035F73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11035F73u);

L_11035F73:
    PUSH32(esp, 0x14u); /* 0x11035F73: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11035F75: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11035F7A: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11035F7F: push 0 */
    ecx = ebp + (-0x14); /* 0x11035F81: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11035F84: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068B24); /* 0x11035F89: mov edi, dword ptr [0x11068b24] */
    ecx = 0x11066220u; /* 0x11035F8F: mov ecx, 0x11066220 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11035F94: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11035F98: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11035F9B: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11035FA0: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11035FA3: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11035FA4: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11035FA9: mov esi, eax */
    /* test esi, esi */ /* 0x11035FAB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11035FFD; /* 0x11035FAD: jne 0x11035ffd */
L_11035FAF:
    /* test edi, edi */ /* 0x11035FAF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11035FB7; /* 0x11035FB1: je 0x11035fb7 */
L_11035FB3:
    esi = edi; /* 0x11035FB3: mov esi, edi */
    goto L_11035FFD; /* 0x11035FB5: jmp 0x11035ffd */
L_11035FB7:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11035FB7: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11035FBA: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11035FBD: push eax */
    RECOMP_CALL(sub_110364C7); /* 0x11035FBE: call 0x110364c7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11035FC3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11035FC4: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11035FC5: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11035FE6; /* 0x11035FC8: jne 0x11035fe6 */
L_11035FCA:
    PUSH32(esp, 0x11004970u); /* 0x11035FCA: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11035FCF: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11035FD2: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11035FD8: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11035FDD: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11035FE0: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11035FE1: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11035FE6:
    esi = MEM32(ebp + (-0x10)); /* 0x11035FE6: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11035FE9: mov ecx, esi */
    MEM32(0x11068B24) = esi; /* 0x11035FEB: mov dword ptr [0x11068b24], esi */
    eax = MEM32(esi); /* 0x11035FF1: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11035FF3: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11035FF6: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11035FF7: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11035FFC: pop ecx */
L_11035FFD:
    ecx = ebp + (-0x14); /* 0x11035FFD: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11036000: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11036005: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11036007: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103600C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103600D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103600Du);

L_1103600D:
    PUSH32(esp, 0x14u); /* 0x1103600D: push 0x14 */
    eax = 0x1103EFF4u; /* 0x1103600F: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11036014: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11036019: push 0 */
    ecx = ebp + (-0x14); /* 0x1103601B: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x1103601E: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068B28); /* 0x11036023: mov edi, dword ptr [0x11068b28] */
    ecx = 0x11066224u; /* 0x11036029: mov ecx, 0x11066224 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1103602E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11036032: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11036035: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1103603A: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1103603D: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x1103603E: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11036043: mov esi, eax */
    /* test esi, esi */ /* 0x11036045: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11036097; /* 0x11036047: jne 0x11036097 */
L_11036049:
    /* test edi, edi */ /* 0x11036049: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036051; /* 0x1103604B: je 0x11036051 */
L_1103604D:
    esi = edi; /* 0x1103604D: mov esi, edi */
    goto L_11036097; /* 0x1103604F: jmp 0x11036097 */
L_11036051:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11036051: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11036054: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11036057: push eax */
    RECOMP_CALL(sub_1103652F); /* 0x11036058: call 0x1103652f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103605D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103605E: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1103605F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036080; /* 0x11036062: jne 0x11036080 */
L_11036064:
    PUSH32(esp, 0x11004970u); /* 0x11036064: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11036069: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x1103606C: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11036072: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11036077: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1103607A: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1103607B: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11036080:
    esi = MEM32(ebp + (-0x10)); /* 0x11036080: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11036083: mov ecx, esi */
    MEM32(0x11068B28) = esi; /* 0x11036085: mov dword ptr [0x11068b28], esi */
    eax = MEM32(esi); /* 0x1103608B: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1103608D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11036090: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x11036091: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11036096: pop ecx */
L_11036097:
    ecx = ebp + (-0x14); /* 0x11036097: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x1103609A: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1103609F: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110360A1: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110360A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_110360A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110360A7u);

L_110360A7:
    PUSH32(esp, 0x14u); /* 0x110360A7: push 0x14 */
    eax = 0x1103EFF4u; /* 0x110360A9: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x110360AE: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110360B3: push 0 */
    ecx = ebp + (-0x14); /* 0x110360B5: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x110360B8: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068B30); /* 0x110360BD: mov edi, dword ptr [0x11068b30] */
    ecx = 0x11066218u; /* 0x110360C3: mov ecx, 0x11066218 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110360C8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x110360CC: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x110360CF: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x110360D4: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x110360D7: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x110360D8: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110360DD: mov esi, eax */
    /* test esi, esi */ /* 0x110360DF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11036131; /* 0x110360E1: jne 0x11036131 */
L_110360E3:
    /* test edi, edi */ /* 0x110360E3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110360EB; /* 0x110360E5: je 0x110360eb */
L_110360E7:
    esi = edi; /* 0x110360E7: mov esi, edi */
    goto L_11036131; /* 0x110360E9: jmp 0x11036131 */
L_110360EB:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110360EB: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x110360EE: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110360F1: push eax */
    RECOMP_CALL(sub_11036597); /* 0x110360F2: call 0x11036597 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110360F7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110360F8: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x110360F9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103611A; /* 0x110360FC: jne 0x1103611a */
L_110360FE:
    PUSH32(esp, 0x11004970u); /* 0x110360FE: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11036103: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x11036106: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x1103610C: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11036111: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11036114: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11036115: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1103611A:
    esi = MEM32(ebp + (-0x10)); /* 0x1103611A: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x1103611D: mov ecx, esi */
    MEM32(0x11068B30) = esi; /* 0x1103611F: mov dword ptr [0x11068b30], esi */
    eax = MEM32(esi); /* 0x11036125: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x11036127: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1103612A: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x1103612B: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11036130: pop ecx */
L_11036131:
    ecx = ebp + (-0x14); /* 0x11036131: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11036134: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11036139: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1103613B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11036140: ret  */
    RECOMP_REGS_OUT();
}

void sub_11036141(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11036141u);

L_11036141:
    PUSH32(esp, 0x14u); /* 0x11036141: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11036143: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x11036148: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1103614D: push 0 */
    ecx = ebp + (-0x14); /* 0x1103614F: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11036152: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068B2C); /* 0x11036157: mov edi, dword ptr [0x11068b2c] */
    ecx = 0x1106621Cu; /* 0x1103615D: mov ecx, 0x1106621c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11036162: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11036166: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11036169: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1103616E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11036171: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x11036172: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11036177: mov esi, eax */
    /* test esi, esi */ /* 0x11036179: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110361CB; /* 0x1103617B: jne 0x110361cb */
L_1103617D:
    /* test edi, edi */ /* 0x1103617D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036185; /* 0x1103617F: je 0x11036185 */
L_11036181:
    esi = edi; /* 0x11036181: mov esi, edi */
    goto L_110361CB; /* 0x11036183: jmp 0x110361cb */
L_11036185:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11036185: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11036188: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1103618B: push eax */
    RECOMP_CALL(sub_1103661B); /* 0x1103618C: call 0x1103661b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11036191: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11036192: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x11036193: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110361B4; /* 0x11036196: jne 0x110361b4 */
L_11036198:
    PUSH32(esp, 0x11004970u); /* 0x11036198: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x1103619D: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x110361A0: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x110361A6: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x110361AB: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x110361AE: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x110361AF: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_110361B4:
    esi = MEM32(ebp + (-0x10)); /* 0x110361B4: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x110361B7: mov ecx, esi */
    MEM32(0x11068B2C) = esi; /* 0x110361B9: mov dword ptr [0x11068b2c], esi */
    eax = MEM32(esi); /* 0x110361BF: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110361C1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110361C4: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x110361C5: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110361CA: pop ecx */
L_110361CB:
    ecx = ebp + (-0x14); /* 0x110361CB: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x110361CE: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110361D3: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110361D5: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110361DA: ret  */
    RECOMP_REGS_OUT();
}

void sub_110361DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110361DBu);

L_110361DB:
    PUSH32(esp, 0x14u); /* 0x110361DB: push 0x14 */
    eax = 0x1103EFF4u; /* 0x110361DD: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x110361E2: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110361E7: push 0 */
    ecx = ebp + (-0x14); /* 0x110361E9: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x110361EC: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068B34); /* 0x110361F1: mov edi, dword ptr [0x11068b34] */
    ecx = 0x11066248u; /* 0x110361F7: mov ecx, 0x11066248 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110361FC: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x11036200: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x11036203: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x11036208: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1103620B: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x1103620C: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11036211: mov esi, eax */
    /* test esi, esi */ /* 0x11036213: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11036265; /* 0x11036215: jne 0x11036265 */
L_11036217:
    /* test edi, edi */ /* 0x11036217: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103621F; /* 0x11036219: je 0x1103621f */
L_1103621B:
    esi = edi; /* 0x1103621B: mov esi, edi */
    goto L_11036265; /* 0x1103621D: jmp 0x11036265 */
L_1103621F:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103621F: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x11036222: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11036225: push eax */
    RECOMP_CALL(sub_1101DF78); /* 0x11036226: call 0x1101df78 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103622B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103622C: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1103622D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103624E; /* 0x11036230: jne 0x1103624e */
L_11036232:
    PUSH32(esp, 0x11004970u); /* 0x11036232: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x11036237: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x1103623A: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x11036240: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x11036245: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x11036248: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11036249: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1103624E:
    esi = MEM32(ebp + (-0x10)); /* 0x1103624E: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x11036251: mov ecx, esi */
    MEM32(0x11068B34) = esi; /* 0x11036253: mov dword ptr [0x11068b34], esi */
    eax = MEM32(esi); /* 0x11036259: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1103625B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1103625E: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x1103625F: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11036264: pop ecx */
L_11036265:
    ecx = ebp + (-0x14); /* 0x11036265: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11036268: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1103626D: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1103626F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11036274: ret  */
    RECOMP_REGS_OUT();
}

void sub_11036275(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11036275u);

L_11036275:
    PUSH32(esp, 0x14u); /* 0x11036275: push 0x14 */
    eax = 0x1103EFF4u; /* 0x11036277: mov eax, 0x1103eff4 */
    RECOMP_CALL(sub_1103B372); /* 0x1103627C: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11036281: push 0 */
    ecx = ebp + (-0x14); /* 0x11036283: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FE81); /* 0x11036286: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x11068B38); /* 0x1103628B: mov edi, dword ptr [0x11068b38] */
    ecx = 0x1106624Cu; /* 0x11036291: mov ecx, 0x1106624c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11036296: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x1103629A: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1100E2D9); /* 0x1103629D: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x110362A2: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x110362A5: push eax */
    RECOMP_CALL(sub_1100E492); /* 0x110362A6: call 0x1100e492 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110362AB: mov esi, eax */
    /* test esi, esi */ /* 0x110362AD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110362FF; /* 0x110362AF: jne 0x110362ff */
L_110362B1:
    /* test edi, edi */ /* 0x110362B1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110362B9; /* 0x110362B3: je 0x110362b9 */
L_110362B5:
    esi = edi; /* 0x110362B5: mov esi, edi */
    goto L_110362FF; /* 0x110362B7: jmp 0x110362ff */
L_110362B9:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110362B9: push dword ptr [ebp + 8] */
    eax = ebp + (-0x10); /* 0x110362BC: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x110362BF: push eax */
    RECOMP_CALL(sub_1101E0BC); /* 0x110362C0: call 0x1101e0bc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110362C5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110362C6: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x110362C7: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110362E8; /* 0x110362CA: jne 0x110362e8 */
L_110362CC:
    PUSH32(esp, 0x11004970u); /* 0x110362CC: push 0x11004970 */
    ecx = ebp + (-0x20); /* 0x110362D1: lea ecx, [ebp - 0x20] */
    RECOMP_ICALL(MEM32(0x110692D8)); /* 0x110362D4: call dword ptr [0x110692d8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104562Cu); /* 0x110362DA: push 0x1104562c */
    eax = ebp + (-0x20); /* 0x110362DF: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x110362E2: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x110362E3: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_110362E8:
    esi = MEM32(ebp + (-0x10)); /* 0x110362E8: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x110362EB: mov ecx, esi */
    MEM32(0x11068B38) = esi; /* 0x110362ED: mov dword ptr [0x11068b38], esi */
    eax = MEM32(esi); /* 0x110362F3: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x110362F5: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110362F8: push esi */
    RECOMP_CALL(sub_110303F3); /* 0x110362F9: call 0x110303f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110362FE: pop ecx */
L_110362FF:
    ecx = ebp + (-0x14); /* 0x110362FF: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1102FEC6); /* 0x11036302: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11036307: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x11036309: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103630E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103630F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103630Fu);

L_1103630F:
    PUSH32(esp, esi); /* 0x1103630F: push esi */
    esi = ecx; /* 0x11036310: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x11036312: push dword ptr [esi + 0xc] */
    MEM32(esi) = 0x1100365Cu; /* 0x11036315: mov dword ptr [esi], 0x1100365c */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1103631B: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11036321: pop ecx */
    MEM32(esi) = 0x110014CCu; /* 0x11036322: mov dword ptr [esi], 0x110014cc */
    esi = POP32_VAL(esp); /* 0x11036328: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11036329: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103632A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103632Au);

L_1103632A:
    PUSH32(esp, ebp); /* 0x1103632A: push ebp */
    ebp = esp; /* 0x1103632B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1103632D: push esi */
    esi = ecx; /* 0x1103632E: mov esi, ecx */
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x11036330: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11036348; /* 0x11036333: je 0x11036348 */
L_11036335:
    PUSH32(esp, 0); /* 0x11036335: push 0 */
    PUSH32(esp, 1); /* 0x11036337: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x11036339: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103633E: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x11036341: mov ecx, esi */
    RECOMP_CALL(sub_11010405); /* 0x11036343: call 0x11010405 */
    RECOMP_FLAGS_IN();
L_11036348:
    eax = esi; /* 0x11036348: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1103634A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1103634B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1103634C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1103634F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103634Fu);

L_1103634F:
    PUSH32(esp, ebp); /* 0x1103634F: push ebp */
    ebp = esp; /* 0x11036350: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11036352: push esi */
    esi = ecx; /* 0x11036353: mov esi, ecx */
    RECOMP_CALL(sub_1103630F); /* 0x11036355: call 0x1103630f */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1103635A: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036367; /* 0x1103635E: je 0x11036367 */
L_11036360:
    PUSH32(esp, esi); /* 0x11036360: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x11036361: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11036366: pop ecx */
L_11036367:
    eax = esi; /* 0x11036367: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11036369: pop esi */
    ebp = POP32_VAL(esp); /* 0x1103636A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1103636B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1103636E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103636Eu);

L_1103636E:
    PUSH32(esp, ebp); /* 0x1103636E: push ebp */
    ebp = esp; /* 0x1103636F: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x11036371: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x11036375: push esi */
    esi = ecx; /* 0x11036376: mov esi, ecx */
    MEM32(esi) = 0x110014CCu; /* 0x11036378: mov dword ptr [esi], 0x110014cc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036387; /* 0x1103637E: je 0x11036387 */
L_11036380:
    PUSH32(esp, esi); /* 0x11036380: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x11036381: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11036386: pop ecx */
L_11036387:
    eax = esi; /* 0x11036387: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x11036389: pop esi */
    ebp = POP32_VAL(esp); /* 0x1103638A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1103638B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1103638E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103638Eu);

L_1103638E:
    PUSH32(esp, ebp); /* 0x1103638E: push ebp */
    ebp = esp; /* 0x1103638F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11036391: push esi */
    esi = ecx; /* 0x11036392: mov esi, ecx */
    MEM32(esi) = 0x110036C4u; /* 0x11036394: mov dword ptr [esi], 0x110036c4 */
    RECOMP_CALL(sub_110352BD); /* 0x1103639A: call 0x110352bd */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1103639F: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x110014CCu; /* 0x110363A3: mov dword ptr [esi], 0x110014cc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_110363B2; /* 0x110363A9: je 0x110363b2 */
L_110363AB:
    PUSH32(esp, esi); /* 0x110363AB: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x110363AC: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110363B1: pop ecx */
L_110363B2:
    eax = esi; /* 0x110363B2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x110363B4: pop esi */
    ebp = POP32_VAL(esp); /* 0x110363B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110363B6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110363B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110363B9u);

L_110363B9:
    PUSH32(esp, 0x5Cu); /* 0x110363B9: push 0x5c */
    eax = 0x1103F375u; /* 0x110363BB: mov eax, 0x1103f375 */
    RECOMP_CALL(sub_1103B3A5); /* 0x110363C0: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x110363C5: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110363C8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x110363CA: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x30)) = eax; /* 0x110363CD: mov dword ptr [ebp - 0x30], eax */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x110363D0: mov dword ptr [ebp - 0x2c], ebx */
    /* test edi, edi */ /* 0x110363D3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036456; /* 0x110363D5: je 0x11036456 */
L_110363D7:
    /* cmp MEM32(edi), ebx */ /* 0x110363D7: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036456; /* 0x110363D9: jne 0x11036456 */
L_110363DB:
    PUSH32(esp, 0x10u); /* 0x110363DB: push 0x10 */
    RECOMP_CALL(sub_1103B120); /* 0x110363DD: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110363E2: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x110363E4: pop ecx */
    MEM32(ebp + (-0x34)) = esi; /* 0x110363E5: mov dword ptr [ebp - 0x34], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x110363E8: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x110363EB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036431; /* 0x110363ED: je 0x11036431 */
L_110363EF:
    ecx = MEM32(ebp + (-0x30)); /* 0x110363EF: mov ecx, dword ptr [ebp - 0x30] */
    eax = ebp + (-0x28); /* 0x110363F2: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x110363F5: push eax */
    RECOMP_CALL(sub_11035D16); /* 0x110363F6: call 0x11035d16 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x110363FB: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x110363FF: mov byte ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x2C)) = 1; /* 0x11036403: mov dword ptr [ebp - 0x2c], 1 */
    if (CMP_B(_flag_a, _flag_b)) goto L_1103640E; /* 0x1103640A: jb 0x1103640e */
L_1103640C:
    eax = MEM32(eax); /* 0x1103640C: mov eax, dword ptr [eax] */
L_1103640E:
    PUSH32(esp, eax); /* 0x1103640E: push eax */
    ecx = ebp + (-0x68); /* 0x1103640F: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_1100DEDB); /* 0x11036412: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x11036417: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x1103641B: push 3 */
    ebx = POP32_VAL(esp); /* 0x1103641D: pop ebx */
    MEM32(esi) = 0x1100365Cu; /* 0x1103641E: mov dword ptr [esi], 0x1100365c */
    RECOMP_CALL(sub_1102D8EF); /* 0x11036424: call 0x1102d8ef */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x11036429: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0xC) = edx; /* 0x1103642C: mov dword ptr [esi + 0xc], edx */
    goto L_11036433; /* 0x1103642F: jmp 0x11036433 */
L_11036431:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11036431: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11036433:
    MEM32(edi) = esi; /* 0x11036433: mov dword ptr [edi], esi */
    /* test LO8(ebx), 2 */ /* 0x11036435: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036445; /* 0x11036438: je 0x11036445 */
L_1103643A:
    ecx = ebp + (-0x68); /* 0x1103643A: lea ecx, [ebp - 0x68] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ebx = ebx & 0xFFFFFFFDu; /* 0x1103643D: and ebx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1100DFF5); /* 0x11036440: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_11036445:
    /* test LO8(ebx), 1 */ /* 0x11036445: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036456; /* 0x11036448: je 0x11036456 */
L_1103644A:
    PUSH32(esp, 0); /* 0x1103644A: push 0 */
    PUSH32(esp, 1); /* 0x1103644C: push 1 */
    ecx = ebp + (-0x28); /* 0x1103644E: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x11036451: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_11036456:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11036456: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11036458: inc eax */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1103B354); /* 0x11036459: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103645E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103645F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103645Fu);

L_1103645F:
    PUSH32(esp, 0x38u); /* 0x1103645F: push 0x38 */
    eax = 0x1103F019u; /* 0x11036461: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x11036466: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1103646B: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103646E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11036470: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x11036473: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110364BE; /* 0x11036475: je 0x110364be */
L_11036477:
    /* cmp MEM32(edi), ebx */ /* 0x11036477: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110364BE; /* 0x11036479: jne 0x110364be */
L_1103647B:
    PUSH32(esp, 8); /* 0x1103647B: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1103647D: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11036482: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11036484: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x11036485: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x11036488: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1103648B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110364AD; /* 0x1103648D: je 0x110364ad */
L_1103648F:
    ecx = MEM32(ebp + 0xC); /* 0x1103648F: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x11036492: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11036497: push eax */
    ecx = ebp + (-0x44); /* 0x11036498: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1103649B: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x110364A0: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x11003678u; /* 0x110364A1: mov dword ptr [esi], 0x11003678 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x110364A7: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110364AF; /* 0x110364AB: jmp 0x110364af */
L_110364AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110364AD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110364AF:
    MEM32(edi) = esi; /* 0x110364AF: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x110364B1: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110364BE; /* 0x110364B4: je 0x110364be */
L_110364B6:
    ecx = ebp + (-0x44); /* 0x110364B6: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x110364B9: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_110364BE:
    PUSH32(esp, 6); /* 0x110364BE: push 6 */
    eax = POP32_VAL(esp); /* 0x110364C0: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x110364C1: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110364C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_110364C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110364C7u);

L_110364C7:
    PUSH32(esp, 0x38u); /* 0x110364C7: push 0x38 */
    eax = 0x1103F019u; /* 0x110364C9: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x110364CE: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x110364D3: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110364D6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x110364D8: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x110364DB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036526; /* 0x110364DD: je 0x11036526 */
L_110364DF:
    /* cmp MEM32(edi), ebx */ /* 0x110364DF: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036526; /* 0x110364E1: jne 0x11036526 */
L_110364E3:
    PUSH32(esp, 8); /* 0x110364E3: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x110364E5: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110364EA: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x110364EC: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x110364ED: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x110364F0: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x110364F3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036515; /* 0x110364F5: je 0x11036515 */
L_110364F7:
    ecx = MEM32(ebp + 0xC); /* 0x110364F7: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x110364FA: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110364FF: push eax */
    ecx = ebp + (-0x44); /* 0x11036500: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x11036503: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11036508: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x11003694u; /* 0x11036509: mov dword ptr [esi], 0x11003694 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1103650F: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11036517; /* 0x11036513: jmp 0x11036517 */
L_11036515:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11036515: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11036517:
    MEM32(edi) = esi; /* 0x11036517: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x11036519: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036526; /* 0x1103651C: je 0x11036526 */
L_1103651E:
    ecx = ebp + (-0x44); /* 0x1103651E: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11036521: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_11036526:
    PUSH32(esp, 3); /* 0x11036526: push 3 */
    eax = POP32_VAL(esp); /* 0x11036528: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x11036529: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103652E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103652F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103652Fu);

L_1103652F:
    PUSH32(esp, 0x38u); /* 0x1103652F: push 0x38 */
    eax = 0x1103F019u; /* 0x11036531: mov eax, 0x1103f019 */
    RECOMP_CALL(sub_1103B372); /* 0x11036536: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1103653B: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103653E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11036540: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x11036543: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103658E; /* 0x11036545: je 0x1103658e */
L_11036547:
    /* cmp MEM32(edi), ebx */ /* 0x11036547: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103658E; /* 0x11036549: jne 0x1103658e */
L_1103654B:
    PUSH32(esp, 8); /* 0x1103654B: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1103654D: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11036552: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11036554: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x11036555: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x11036558: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1103655B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103657D; /* 0x1103655D: je 0x1103657d */
L_1103655F:
    ecx = MEM32(ebp + 0xC); /* 0x1103655F: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x11036562: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11036567: push eax */
    ecx = ebp + (-0x44); /* 0x11036568: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1103656B: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11036570: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x110036ACu; /* 0x11036571: mov dword ptr [esi], 0x110036ac */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x11036577: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1103657F; /* 0x1103657B: jmp 0x1103657f */
L_1103657D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1103657D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103657F:
    MEM32(edi) = esi; /* 0x1103657F: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x11036581: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103658E; /* 0x11036584: je 0x1103658e */
L_11036586:
    ecx = ebp + (-0x44); /* 0x11036586: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11036589: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1103658E:
    PUSH32(esp, 3); /* 0x1103658E: push 3 */
    eax = POP32_VAL(esp); /* 0x11036590: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x11036591: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11036596: ret  */
    RECOMP_REGS_OUT();
}

void sub_11036597(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11036597u);

L_11036597:
    PUSH32(esp, 0x38u); /* 0x11036597: push 0x38 */
    eax = 0x1103E215u; /* 0x11036599: mov eax, 0x1103e215 */
    RECOMP_CALL(sub_1103B372); /* 0x1103659E: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x110365A3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x110365A5: mov dword ptr [ebp - 0x10], ebx */
    edi = MEM32(ebp + 0x8); /* 0x110365A8: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x110365AB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036612; /* 0x110365AD: je 0x11036612 */
L_110365AF:
    /* cmp MEM32(edi), ebx */ /* 0x110365AF: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036612; /* 0x110365B1: jne 0x11036612 */
L_110365B3:
    PUSH32(esp, 0x58u); /* 0x110365B3: push 0x58 */
    RECOMP_CALL(sub_1103B120); /* 0x110365B5: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110365BA: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x110365BC: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x110365BD: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x110365C0: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x110365C3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036601; /* 0x110365C5: je 0x11036601 */
L_110365C7:
    ecx = MEM32(ebp + 0xC); /* 0x110365C7: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x110365CA: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110365CF: push eax */
    ecx = ebp + (-0x44); /* 0x110365D0: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x110365D3: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x110365D8: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x110365DC: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = ebx; /* 0x110365DD: mov dword ptr [ebp - 0x10], ebx */
    PUSH32(esp, ebx); /* 0x110365E0: push ebx */
    PUSH32(esp, eax); /* 0x110365E1: push eax */
    ecx = esi; /* 0x110365E2: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 2; /* 0x110365E4: mov dword ptr [ebp - 4], 2 */
    MEM32(esi) = 0x110036C4u; /* 0x110365EB: mov dword ptr [esi], 0x110036c4 */
    MEM8(esi + 0x28) = (uint8_t)(LO8(ebx)); /* 0x110365F1: mov byte ptr [esi + 0x28], bl */
    RECOMP_CALL(sub_110370F0); /* 0x110365F4: call 0x110370f0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1100372Cu; /* 0x110365F9: mov dword ptr [esi], 0x1100372c */
    goto L_11036603; /* 0x110365FF: jmp 0x11036603 */
L_11036601:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11036601: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11036603:
    MEM32(edi) = esi; /* 0x11036603: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x11036605: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036612; /* 0x11036608: je 0x11036612 */
L_1103660A:
    ecx = ebp + (-0x44); /* 0x1103660A: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1103660D: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_11036612:
    PUSH32(esp, 3); /* 0x11036612: push 3 */
    eax = POP32_VAL(esp); /* 0x11036614: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x11036615: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103661A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103661B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103661Bu);

L_1103661B:
    PUSH32(esp, 0x38u); /* 0x1103661B: push 0x38 */
    eax = 0x1103E215u; /* 0x1103661D: mov eax, 0x1103e215 */
    RECOMP_CALL(sub_1103B372); /* 0x11036622: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11036627: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11036629: mov dword ptr [ebp - 0x10], ebx */
    edi = MEM32(ebp + 0x8); /* 0x1103662C: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1103662F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036697; /* 0x11036631: je 0x11036697 */
L_11036633:
    /* cmp MEM32(edi), ebx */ /* 0x11036633: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036697; /* 0x11036635: jne 0x11036697 */
L_11036637:
    PUSH32(esp, 0x58u); /* 0x11036637: push 0x58 */
    RECOMP_CALL(sub_1103B120); /* 0x11036639: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1103663E: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11036640: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x11036641: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x11036644: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x11036647: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036686; /* 0x11036649: je 0x11036686 */
L_1103664B:
    ecx = MEM32(ebp + 0xC); /* 0x1103664B: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1103664E: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11036653: push eax */
    ecx = ebp + (-0x44); /* 0x11036654: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x11036657: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1103665C: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11036660: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11036661: mov dword ptr [ebp - 0x10], ebx */
    PUSH32(esp, ebx); /* 0x11036664: push ebx */
    PUSH32(esp, eax); /* 0x11036665: push eax */
    ecx = esi; /* 0x11036666: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 2; /* 0x11036668: mov dword ptr [ebp - 4], 2 */
    MEM32(esi) = 0x110036C4u; /* 0x1103666F: mov dword ptr [esi], 0x110036c4 */
    MEM8(esi + 0x28) = (uint8_t)(0); /* 0x11036675: mov byte ptr [esi + 0x28], 0 */
    RECOMP_CALL(sub_110370F0); /* 0x11036679: call 0x110370f0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x110036F8u; /* 0x1103667E: mov dword ptr [esi], 0x110036f8 */
    goto L_11036688; /* 0x11036684: jmp 0x11036688 */
L_11036686:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11036686: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11036688:
    MEM32(edi) = esi; /* 0x11036688: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1103668A: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036697; /* 0x1103668D: je 0x11036697 */
L_1103668F:
    ecx = ebp + (-0x44); /* 0x1103668F: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x11036692: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_11036697:
    PUSH32(esp, 3); /* 0x11036697: push 3 */
    eax = POP32_VAL(esp); /* 0x11036699: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1103669A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103669F: ret  */
    RECOMP_REGS_OUT();
}

void sub_110366A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110366A0u);

L_110366A0:
    PUSH32(esp, 0x184u); /* 0x110366A0: push 0x184 */
    eax = 0x1103F46Bu; /* 0x110366A5: mov eax, 0x1103f46b */
    RECOMP_CALL(sub_1103B3A5); /* 0x110366AA: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x110366AF: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x10); /* 0x110366B2: mov esi, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x18); /* 0x110366B5: mov ecx, dword ptr [ebp + 0x18] */
    edi = MEM32(ebp + 0xC); /* 0x110366B8: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x178)) = eax; /* 0x110366BB: mov dword ptr [ebp - 0x178], eax */
    eax = MEM32(ebp + 0x1C); /* 0x110366C1: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x154)) = eax; /* 0x110366C4: mov dword ptr [ebp - 0x154], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110366CA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x138)) = esi; /* 0x110366CC: mov dword ptr [ebp - 0x138], esi */
    MEM32(ebp + (-0x164)) = ecx; /* 0x110366D2: mov dword ptr [ebp - 0x164], ecx */
    MEM32(ebp + (-0x140)) = eax; /* 0x110366D8: mov dword ptr [ebp - 0x140], eax */
    MEM32(ebp + (-0x158)) = eax; /* 0x110366DE: mov dword ptr [ebp - 0x158], eax */
    /* cmp MEM8(ebp + 0x14), LO8(eax) */ /* 0x110366E4: cmp byte ptr [ebp + 0x14], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11036710; /* 0x110366E7: je 0x11036710 */
L_110366E9:
    eax = ebp + (-0x190); /* 0x110366E9: lea eax, [ebp - 0x190] */
    PUSH32(esp, eax); /* 0x110366EF: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x110366F0: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110366F5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110366F9: push eax */
    RECOMP_CALL(sub_110360A7); /* 0x110366FA: call 0x110360a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110366FF: pop ecx */
    ebx = eax; /* 0x11036700: mov ebx, eax */
    ecx = ebp + (-0x190); /* 0x11036702: lea ecx, [ebp - 0x190] */
    MEM32(ebp + (-0x148)) = ebx; /* 0x11036708: mov dword ptr [ebp - 0x148], ebx */
    goto L_11036738; /* 0x1103670E: jmp 0x11036738 */
L_11036710:
    eax = ebp + (-0x180); /* 0x11036710: lea eax, [ebp - 0x180] */
    PUSH32(esp, eax); /* 0x11036716: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11036717: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1103671C: push eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x1103671D: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11036141); /* 0x11036724: call 0x11036141 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11036729: pop ecx */
    ebx = eax; /* 0x1103672A: mov ebx, eax */
    MEM32(ebp + (-0x148)) = eax; /* 0x1103672C: mov dword ptr [ebp - 0x148], eax */
    ecx = ebp + (-0x180); /* 0x11036732: lea ecx, [ebp - 0x180] */
L_11036738:
    RECOMP_CALL(sub_1100E431); /* 0x11036738: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103673D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x1103673F: mov dword ptr [ebp - 0x2c], 0xf */
    MEM8(ebp + (-0x131)) = (uint8_t)(LO8(ecx)); /* 0x11036746: mov byte ptr [ebp - 0x131], cl */
    MEM8(ebp + (-0x141)) = (uint8_t)(LO8(ecx)); /* 0x1103674C: mov byte ptr [ebp - 0x141], cl */
    MEM32(ebp + (-0x30)) = ecx; /* 0x11036752: mov dword ptr [ebp - 0x30], ecx */
    MEM8(ebp + (-0x40)) = (uint8_t)(LO8(ecx)); /* 0x11036755: mov byte ptr [ebp - 0x40], cl */
    eax = MEM32(ebx); /* 0x11036758: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x168); /* 0x1103675A: lea ecx, [ebp - 0x168] */
    PUSH32(esp, ecx); /* 0x11036760: push ecx */
    ecx = ebx; /* 0x11036761: mov ecx, ebx */
    MEM32(ebp + (-0x4)) = 2; /* 0x11036763: mov dword ptr [ebp - 4], 2 */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1103676A: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x1103676D: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x11036771: mov dword ptr [ebp - 0x44], 0xf */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x11036778: mov byte ptr [ebp - 0x58], 0 */
    ecx = MEM32(ebp + (-0x164)); /* 0x1103677C: mov ecx, dword ptr [ebp - 0x164] */
    eax = ebp + (-0x188); /* 0x11036782: lea eax, [ebp - 0x188] */
    PUSH32(esp, eax); /* 0x11036788: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11036789: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_1100F94A); /* 0x1103678D: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11036792: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x11036793: mov byte ptr [ebp - 4], 4 */
    RECOMP_CALL(sub_11010F0A); /* 0x11036797: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103679C: pop ecx */
    ecx = ebp + (-0x188); /* 0x1103679D: lea ecx, [ebp - 0x188] */
    MEM32(ebp + (-0x15C)) = eax; /* 0x110367A3: mov dword ptr [ebp - 0x15c], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x110367A9: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_1100E431); /* 0x110367AD: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x15C)); /* 0x110367B2: mov eax, dword ptr [ebp - 0x15c] */
    ecx = eax; /* 0x110367B8: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0x154))); /* 0x110367BA: push dword ptr [ebp - 0x154] */
    PUSH32(esp, 0x11003773u); /* 0x110367C0: push 0x11003773 */
    edx = MEM32(eax); /* 0x110367C5: mov edx, dword ptr [eax] */
    PUSH32(esp, 0x11003768u); /* 0x110367C7: push 0x11003768 */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x110367CC: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x13C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x13C)) = MEM32(ebp + (-0x13C)) & 0; /* 0x110367CF: and dword ptr [ebp - 0x13c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(ebp + (-0x131))); /* 0x110367D6: mov al, byte ptr [ebp - 0x131] */
L_110367DC:
    /* cmp MEM32(ebp + (-0x13C)), 4 */ /* 0x110367DC: cmp dword ptr [ebp - 0x13c], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x13C))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11036A54; /* 0x110367E3: jae 0x11036a54 */
L_110367E9:
    eax = MEM32(ebp + (-0x13C)); /* 0x110367E9: mov eax, dword ptr [ebp - 0x13c] */
    eax = (int32_t)(int8_t)MEM8(ebp + eax + (-0x168)); /* 0x110367EF: movsx eax, byte ptr [ebp + eax - 0x168] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x110367F7: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1103681B; /* 0x110367FA: je 0x1103681b */
L_110367FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x110367FC: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11036EAE; /* 0x110367FF: je 0x11036eae */
L_11036805:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x11036805: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11036C1B; /* 0x11036808: je 0x11036c1b */
L_1103680E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x4Bu; /* 0x1103680E: sub eax, 0x4b */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11036831; /* 0x11036811: je 0x11036831 */
L_11036813:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11036813: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11036814: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_11036A39; /* 0x11036815: jne 0x11036a39 */
L_1103681B:
    eax = MEM32(ebp + (-0x13C)); /* 0x1103681B: mov eax, dword ptr [ebp - 0x13c] */
    /* cmp eax, 3 */ /* 0x11036821: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11036A3F; /* 0x11036824: je 0x11036a3f */
L_1103682A:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x1103682A: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_11036FEF; /* 0x1103682C: jmp 0x11036fef */
L_11036831:
    eax = MEM32(ebx); /* 0x11036831: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11036833: mov ecx, ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x150))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x150)) = MEM32(ebp + (-0x150)) & 0; /* 0x11036835: and dword ptr [ebp - 0x150], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1103683C: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1103683F: mov esi, eax */
    ecx = ebx; /* 0x11036841: mov ecx, ebx */
    eax = ebp + (-0x70); /* 0x11036843: lea eax, [ebp - 0x70] */
    MEM32(ebp + (-0x160)) = esi; /* 0x11036846: mov dword ptr [ebp - 0x160], esi */
    PUSH32(esp, eax); /* 0x1103684C: push eax */
    RECOMP_CALL(sub_110292E9); /* 0x1103684D: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x60)), 0 */ /* 0x11036852: cmp dword ptr [ebp - 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x11036856: mov byte ptr [ebp - 4], 0xa */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11036A9A; /* 0x1103685A: je 0x11036a9a */
L_11036860:
    eax = MEM32(ebx); /* 0x11036860: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11036862: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x11036864: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x149)) = (uint8_t)(LO8(eax)); /* 0x11036867: mov byte ptr [ebp - 0x149], al */
    /* test LO8(eax), LO8(eax) */ /* 0x1103686D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036A9A; /* 0x1103686F: je 0x11036a9a */
L_11036875:
    /* cmp MEM32(ebp + (-0x5C)), 0x10u */ /* 0x11036875: cmp dword ptr [ebp - 0x5c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x70)); /* 0x11036879: mov ecx, dword ptr [ebp - 0x70] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11036881; /* 0x1103687C: jae 0x11036881 */
L_1103687E:
    ecx = ebp + (-0x70); /* 0x1103687E: lea ecx, [ebp - 0x70] */
L_11036881:
    /* cmp MEM8(ecx), 0x7Fu */ /* 0x11036881: cmp byte ptr [ecx], 0x7f */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_11036A9A; /* 0x11036884: jae 0x11036a9a */
L_1103688A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103688A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x1103688C: mov dword ptr [ebp - 0x14], 0xf */
    PUSH32(esp, ebx); /* 0x11036893: push ebx */
    PUSH32(esp, 1); /* 0x11036894: push 1 */
    ecx = ebp + (-0x28); /* 0x11036896: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x11036899: mov dword ptr [ebp - 0x18], ebx */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(ebx)); /* 0x1103689C: mov byte ptr [ebp - 0x28], bl */
    RECOMP_CALL(sub_11014076); /* 0x1103689F: call 0x11014076 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x110368A4: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x110368AA: mov ecx, edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x110368AC: mov byte ptr [ebp - 4], 0xb */
    esi = ebx; /* 0x110368B0: mov esi, ebx */
    RECOMP_CALL(sub_11027871); /* 0x110368B2: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x110368B7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110369AF; /* 0x110368B9: jne 0x110369af */
L_110368BF:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x110368BF: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110368CC; /* 0x110368C3: jne 0x110368cc */
L_110368C5:
    ecx = edi; /* 0x110368C5: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x110368C7: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_110368CC:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x110368CC: mov al, byte ptr [edi + 5] */
    MEM8(ebp + (-0x16C)) = (uint8_t)(LO8(eax)); /* 0x110368CF: mov byte ptr [ebp - 0x16c], al */
    PUSH32(esp, MEM32(ebp + (-0x16C))); /* 0x110368D5: push dword ptr [ebp - 0x16c] */
    PUSH32(esp, MEM32(ebp + (-0x154))); /* 0x110368DB: push dword ptr [ebp - 0x154] */
    RECOMP_CALL(sub_1101501B); /* 0x110368E1: call 0x1101501b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110368E6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110368E7: pop ecx */
    /* cmp eax, 0xAu */ /* 0x110368E8: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103692B; /* 0x110368EB: jae 0x1103692b */
L_110368ED:
    SET_LO8(eax, MEM8(eax + 0x11003768)); /* 0x110368ED: mov al, byte ptr [eax + 0x11003768] */
    ecx = ebp + (-0x58); /* 0x110368F3: lea ecx, [ebp - 0x58] */
    MEM8(ebp + (-0x174)) = (uint8_t)(LO8(eax)); /* 0x110368F6: mov byte ptr [ebp - 0x174], al */
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x110368FC: push dword ptr [ebp - 0x174] */
    PUSH32(esp, 1); /* 0x11036902: push 1 */
    RECOMP_CALL(sub_11014015); /* 0x11036904: call 0x11014015 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11036909: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x1103690D: mov ecx, dword ptr [ebp - 0x28] */
    eax = ecx; /* 0x11036910: mov eax, ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11036917; /* 0x11036912: jae 0x11036917 */
L_11036914:
    eax = ebp + (-0x28); /* 0x11036914: lea eax, [ebp - 0x28] */
L_11036917:
    /* cmp MEM8(eax + esi), 0x7Fu */ /* 0x11036917: cmp byte ptr [eax + esi], 0x7f */
    _flag_a = (uint32_t)(MEM8(eax + esi)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103696C; /* 0x1103691B: je 0x1103696c */
L_1103691D:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x1103691D: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11036926; /* 0x11036921: jae 0x11036926 */
L_11036923:
    ecx = ebp + (-0x28); /* 0x11036923: lea ecx, [ebp - 0x28] */
L_11036926:
    _flag_a = (uint32_t)(MEM8(ecx + esi)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(ecx + esi) = (uint8_t)(MEM8(ecx + esi) + 1); /* 0x11036926: inc byte ptr [ecx + esi] */
    _flag_k = FK_NARROW(FK_INC, 24);
    goto L_1103696C; /* 0x11036929: jmp 0x1103696c */
L_1103692B:
    ecx = MEM32(ebp + (-0x14)); /* 0x1103692B: mov ecx, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x28)); /* 0x1103692E: mov ebx, dword ptr [ebp - 0x28] */
    eax = ebx; /* 0x11036931: mov eax, ebx */
    /* cmp ecx, 0x10u */ /* 0x11036933: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103693B; /* 0x11036936: jae 0x1103693b */
L_11036938:
    eax = ebp + (-0x28); /* 0x11036938: lea eax, [ebp - 0x28] */
L_1103693B:
    /* cmp MEM8(eax + esi), 0 */ /* 0x1103693B: cmp byte ptr [eax + esi], 0 */
    _flag_a = (uint32_t)(MEM8(eax + esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103698E; /* 0x1103693F: je 0x1103698e */
L_11036941:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x11036941: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036954; /* 0x11036945: jne 0x11036954 */
L_11036947:
    ecx = edi; /* 0x11036947: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x11036949: call 0x110224f1 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x28)); /* 0x1103694E: mov ebx, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x14)); /* 0x11036951: mov ecx, dword ptr [ebp - 0x14] */
L_11036954:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x11036954: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(ebp + (-0x149)) */ /* 0x11036957: cmp al, byte ptr [ebp - 0x149] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x149))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103698E; /* 0x1103695D: jne 0x1103698e */
L_1103695F:
    PUSH32(esp, 0); /* 0x1103695F: push 0 */
    PUSH32(esp, 1); /* 0x11036961: push 1 */
    ecx = ebp + (-0x28); /* 0x11036963: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11014015); /* 0x11036966: call 0x11014015 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103696B: inc esi */
    _flag_k = FK_INC;
L_1103696C:
    ecx = edi; /* 0x1103696C: mov ecx, edi */
    RECOMP_CALL(sub_11021816); /* 0x1103696E: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x11036973: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x11036979: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x1103697B: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11036980: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_110368BF; /* 0x11036982: je 0x110368bf */
L_11036988:
    ebx = MEM32(ebp + (-0x28)); /* 0x11036988: mov ebx, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1103698B: mov ecx, dword ptr [ebp - 0x14] */
L_1103698E:
    /* test esi, esi */ /* 0x1103698E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110369B2; /* 0x11036990: je 0x110369b2 */
L_11036992:
    eax = ebx; /* 0x11036992: mov eax, ebx */
    /* cmp ecx, 0x10u */ /* 0x11036994: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103699C; /* 0x11036997: jae 0x1103699c */
L_11036999:
    eax = ebp + (-0x28); /* 0x11036999: lea eax, [ebp - 0x28] */
L_1103699C:
    /* cmp MEM8(eax + esi), 0 */ /* 0x1103699C: cmp byte ptr [eax + esi], 0 */
    _flag_a = (uint32_t)(MEM8(eax + esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_110369A5; /* 0x110369A0: jle 0x110369a5 */
L_110369A2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x110369A2: inc esi */
    _flag_k = FK_INC;
    goto L_110369B2; /* 0x110369A3: jmp 0x110369b2 */
L_110369A5:
    SET_LO8(eax, 1); /* 0x110369A5: mov al, 1 */
    MEM8(ebp + (-0x131)) = (uint8_t)(LO8(eax)); /* 0x110369A7: mov byte ptr [ebp - 0x131], al */
    goto L_110369B8; /* 0x110369AD: jmp 0x110369b8 */
L_110369AF:
    ebx = MEM32(ebp + (-0x28)); /* 0x110369AF: mov ebx, dword ptr [ebp - 0x28] */
L_110369B2:
    SET_LO8(eax, MEM8(ebp + (-0x131))); /* 0x110369B2: mov al, byte ptr [ebp - 0x131] */
L_110369B8:
    /* cmp MEM32(ebp + (-0x5C)), 0x10u */ /* 0x110369B8: cmp dword ptr [ebp - 0x5c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x70)); /* 0x110369BC: mov edx, dword ptr [ebp - 0x70] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110369C4; /* 0x110369BF: jae 0x110369c4 */
L_110369C1:
    edx = ebp + (-0x70); /* 0x110369C1: lea edx, [ebp - 0x70] */
L_110369C4:
    /* test LO8(eax), LO8(eax) */ /* 0x110369C4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11036A11; /* 0x110369C6: jne 0x11036a11 */
L_110369C8:
    /* test esi, esi */ /* 0x110369C8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036A88; /* 0x110369CA: je 0x11036a88 */
L_110369D0:
    SET_LO8(ecx, MEM8(edx)); /* 0x110369D0: mov cl, byte ptr [edx] */
    /* cmp LO8(ecx), 0x7Fu */ /* 0x110369D2: cmp cl, 0x7f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11036A88; /* 0x110369D5: je 0x11036a88 */
L_110369DB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x110369DB: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_110369EE; /* 0x110369DC: je 0x110369ee */
L_110369DE:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x110369DE: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebx; /* 0x110369E2: mov eax, ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110369E9; /* 0x110369E4: jae 0x110369e9 */
L_110369E6:
    eax = ebp + (-0x28); /* 0x110369E6: lea eax, [ebp - 0x28] */
L_110369E9:
    /* cmp LO8(ecx), MEM8(eax + esi) */ /* 0x110369E9: cmp cl, byte ptr [eax + esi] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036A0A; /* 0x110369EC: jne 0x11036a0a */
L_110369EE:
    /* test esi, esi */ /* 0x110369EE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11036A01; /* 0x110369F0: jne 0x11036a01 */
L_110369F2:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x110369F2: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebx; /* 0x110369F6: mov eax, ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110369FD; /* 0x110369F8: jae 0x110369fd */
L_110369FA:
    eax = ebp + (-0x28); /* 0x110369FA: lea eax, [ebp - 0x28] */
L_110369FD:
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x110369FD: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_11036A0A; /* 0x110369FF: jl 0x11036a0a */
L_11036A01:
    /* cmp MEM8(edx + 0x1), 0 */ /* 0x11036A01: cmp byte ptr [edx + 1], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_110369C8; /* 0x11036A05: jle 0x110369c8 */
L_11036A07:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11036A07: inc edx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_110369C8; /* 0x11036A08: jmp 0x110369c8 */
L_11036A0A:
    MEM8(ebp + (-0x131)) = (uint8_t)(1); /* 0x11036A0A: mov byte ptr [ebp - 0x131], 1 */
L_11036A11:
    PUSH32(esp, 0); /* 0x11036A11: push 0 */
    PUSH32(esp, 1); /* 0x11036A13: push 1 */
    ecx = ebp + (-0x28); /* 0x11036A15: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x11036A18: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_11036A1D:
    PUSH32(esp, 0); /* 0x11036A1D: push 0 */
    PUSH32(esp, 1); /* 0x11036A1F: push 1 */
    ecx = ebp + (-0x70); /* 0x11036A21: lea ecx, [ebp - 0x70] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11036A24: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_11010630); /* 0x11036A28: call 0x11010630 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x148)); /* 0x11036A2D: mov ebx, dword ptr [ebp - 0x148] */
L_11036A33:
    esi = MEM32(ebp + (-0x138)); /* 0x11036A33: mov esi, dword ptr [ebp - 0x138] */
L_11036A39:
    eax = MEM32(ebp + (-0x13C)); /* 0x11036A39: mov eax, dword ptr [ebp - 0x13c] */
L_11036A3F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11036A3F: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x13C)) = eax; /* 0x11036A40: mov dword ptr [ebp - 0x13c], eax */
    SET_LO8(eax, MEM8(ebp + (-0x131))); /* 0x11036A46: mov al, byte ptr [ebp - 0x131] */
    /* test LO8(eax), LO8(eax) */ /* 0x11036A4C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_110367DC; /* 0x11036A4E: je 0x110367dc */
L_11036A54:
    /* test LO8(eax), LO8(eax) */ /* 0x11036A54: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110370A5; /* 0x11036A56: jne 0x110370a5 */
L_11036A5C:
    ebx = MEM32(ebp + (-0x30)); /* 0x11036A5C: mov ebx, dword ptr [ebp - 0x30] */
    /* cmp ebx, 1 */ /* 0x11036A5F: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1103708B; /* 0x11036A62: jbe 0x1103708b */
L_11036A68:
    edx = MEM32(ebp + (-0x2C)); /* 0x11036A68: mov edx, dword ptr [ebp - 0x2c] */
    ecx = MEM32(ebp + (-0x40)); /* 0x11036A6B: mov ecx, dword ptr [ebp - 0x40] */
    esi = ecx; /* 0x11036A6E: mov esi, ecx */
    /* cmp edx, 0x10u */ /* 0x11036A70: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11036A81; /* 0x11036A73: jae 0x11036a81 */
L_11036A75:
    esi = ebp + (-0x40); /* 0x11036A75: lea esi, [ebp - 0x40] */
L_11036A78:
    /* cmp edx, 0x10u */ /* 0x11036A78: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11037030; /* 0x11036A7B: jb 0x11037030 */
L_11036A81:
    eax = ecx; /* 0x11036A81: mov eax, ecx */
    goto L_11037033; /* 0x11036A83: jmp 0x11037033 */
L_11036A88:
    PUSH32(esp, 0); /* 0x11036A88: push 0 */
    PUSH32(esp, 1); /* 0x11036A8A: push 1 */
    ecx = ebp + (-0x28); /* 0x11036A8C: lea ecx, [ebp - 0x28] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x11036A8F: mov byte ptr [ebp - 4], 0xa */
    RECOMP_CALL(sub_11010630); /* 0x11036A93: call 0x11010630 */
    RECOMP_FLAGS_IN();
    goto L_11036B0F; /* 0x11036A98: jmp 0x11036b0f */
L_11036A9A:
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x11036A9A: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x11036AA0: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x11036AA2: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11036AA7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11036B1B; /* 0x11036AA9: jne 0x11036b1b */
L_11036AAB:
    ebx = MEM32(ebp + (-0x138)); /* 0x11036AAB: mov ebx, dword ptr [ebp - 0x138] */
    esi = MEM32(ebp + (-0x154)); /* 0x11036AB1: mov esi, dword ptr [ebp - 0x154] */
L_11036AB7:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x11036AB7: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036AC4; /* 0x11036ABB: jne 0x11036ac4 */
L_11036ABD:
    ecx = edi; /* 0x11036ABD: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x11036ABF: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11036AC4:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x11036AC4: mov al, byte ptr [edi + 5] */
    MEM8(ebp + (-0x184)) = (uint8_t)(LO8(eax)); /* 0x11036AC7: mov byte ptr [ebp - 0x184], al */
    PUSH32(esp, MEM32(ebp + (-0x184))); /* 0x11036ACD: push dword ptr [ebp - 0x184] */
    PUSH32(esp, esi); /* 0x11036AD3: push esi */
    RECOMP_CALL(sub_1101501B); /* 0x11036AD4: call 0x1101501b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11036AD9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11036ADA: pop ecx */
    /* cmp eax, 0xAu */ /* 0x11036ADB: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11036B0F; /* 0x11036ADE: jae 0x11036b0f */
L_11036AE0:
    SET_LO8(eax, MEM8(eax + 0x11003768)); /* 0x11036AE0: mov al, byte ptr [eax + 0x11003768] */
    ecx = ebp + (-0x58); /* 0x11036AE6: lea ecx, [ebp - 0x58] */
    MEM8(ebp + (-0x17C)) = (uint8_t)(LO8(eax)); /* 0x11036AE9: mov byte ptr [ebp - 0x17c], al */
    PUSH32(esp, MEM32(ebp + (-0x17C))); /* 0x11036AEF: push dword ptr [ebp - 0x17c] */
    PUSH32(esp, 1); /* 0x11036AF5: push 1 */
    RECOMP_CALL(sub_11014015); /* 0x11036AF7: call 0x11014015 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x11036AFC: mov ecx, edi */
    RECOMP_CALL(sub_11021816); /* 0x11036AFE: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11036B03: push ebx */
    ecx = edi; /* 0x11036B04: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x11036B06: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11036B0B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036AB7; /* 0x11036B0D: je 0x11036ab7 */
L_11036B0F:
    ebx = MEM32(ebp + (-0x148)); /* 0x11036B0F: mov ebx, dword ptr [ebp - 0x148] */
    esi = MEM32(ebp + (-0x160)); /* 0x11036B15: mov esi, dword ptr [ebp - 0x160] */
L_11036B1B:
    eax = MEM32(ebx); /* 0x11036B1B: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11036B1D: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x11036B1F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x11036B22: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x11036B28: mov ecx, edi */
    SET_LO8(ebx, LO8(eax)); /* 0x11036B2A: mov bl, al */
    RECOMP_CALL(sub_11027871); /* 0x11036B2C: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11036B31: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11036BE5; /* 0x11036B33: jne 0x11036be5 */
L_11036B39:
    /* test LO8(ebx), LO8(ebx) */ /* 0x11036B39: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036BE5; /* 0x11036B3B: je 0x11036be5 */
L_11036B41:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x11036B41: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036B4D; /* 0x11036B44: jne 0x11036b4d */
L_11036B46:
    ecx = edi; /* 0x11036B46: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x11036B48: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11036B4D:
    /* cmp MEM8(edi + 0x5), LO8(ebx) */ /* 0x11036B4D: cmp byte ptr [edi + 5], bl */
    _flag_a = (uint32_t)(MEM8(edi + 0x5)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036BE5; /* 0x11036B50: jne 0x11036be5 */
L_11036B56:
    ecx = edi; /* 0x11036B56: mov ecx, edi */
    RECOMP_CALL(sub_11021816); /* 0x11036B58: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x11036B5D: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x11036B63: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x11036B65: call 0x11027871 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x150)); /* 0x11036B6A: mov ebx, dword ptr [ebp - 0x150] */
L_11036B70:
    /* test LO8(eax), LO8(eax) */ /* 0x11036B70: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11036BD8; /* 0x11036B72: jne 0x11036bd8 */
L_11036B74:
    /* cmp ebx, esi */ /* 0x11036B74: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11036BEB; /* 0x11036B76: jge 0x11036beb */
L_11036B78:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x11036B78: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036B84; /* 0x11036B7B: jne 0x11036b84 */
L_11036B7D:
    ecx = edi; /* 0x11036B7D: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x11036B7F: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11036B84:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x11036B84: mov al, byte ptr [edi + 5] */
    MEM8(ebp + (-0x18C)) = (uint8_t)(LO8(eax)); /* 0x11036B87: mov byte ptr [ebp - 0x18c], al */
    PUSH32(esp, MEM32(ebp + (-0x18C))); /* 0x11036B8D: push dword ptr [ebp - 0x18c] */
    PUSH32(esp, MEM32(ebp + (-0x154))); /* 0x11036B93: push dword ptr [ebp - 0x154] */
    RECOMP_CALL(sub_1101501B); /* 0x11036B99: call 0x1101501b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11036B9E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11036B9F: pop ecx */
    /* cmp eax, 0xAu */ /* 0x11036BA0: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11036BD8; /* 0x11036BA3: jae 0x11036bd8 */
L_11036BA5:
    SET_LO8(eax, MEM8(eax + 0x11003768)); /* 0x11036BA5: mov al, byte ptr [eax + 0x11003768] */
    ecx = ebp + (-0x58); /* 0x11036BAB: lea ecx, [ebp - 0x58] */
    MEM8(ebp + (-0x170)) = (uint8_t)(LO8(eax)); /* 0x11036BAE: mov byte ptr [ebp - 0x170], al */
    PUSH32(esp, MEM32(ebp + (-0x170))); /* 0x11036BB4: push dword ptr [ebp - 0x170] */
    PUSH32(esp, 1); /* 0x11036BBA: push 1 */
    RECOMP_CALL(sub_11014015); /* 0x11036BBC: call 0x11014015 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x11036BC1: mov ecx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11036BC3: inc ebx */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_11021816); /* 0x11036BC4: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x11036BC9: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x11036BCF: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x11036BD1: call 0x11027871 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11036B70; /* 0x11036BD6: jmp 0x11036b70 */
L_11036BD8:
    /* cmp ebx, esi */ /* 0x11036BD8: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11036BEB; /* 0x11036BDA: jge 0x11036beb */
L_11036BDC:
    MEM8(ebp + (-0x131)) = (uint8_t)(1); /* 0x11036BDC: mov byte ptr [ebp - 0x131], 1 */
    goto L_11036BEB; /* 0x11036BE3: jmp 0x11036beb */
L_11036BE5:
    ebx = MEM32(ebp + (-0x150)); /* 0x11036BE5: mov ebx, dword ptr [ebp - 0x150] */
L_11036BEB:
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x11036BEB: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036BFD; /* 0x11036BEF: jne 0x11036bfd */
L_11036BF1:
    MEM8(ebp + (-0x131)) = (uint8_t)(1); /* 0x11036BF1: mov byte ptr [ebp - 0x131], 1 */
    RECOMP_BACKEDGE();
    goto L_11036A1D; /* 0x11036BF8: jmp 0x11036a1d */
L_11036BFD:
    /* cmp ebx, esi */ /* 0x11036BFD: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_11036A1D; /* 0x11036BFF: jge 0x11036a1d */
L_11036C05:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x11036C05: sub esi, ebx */
    _flag_k = FK_CMP;
L_11036C07:
    PUSH32(esp, 0x30u); /* 0x11036C07: push 0x30 */
    PUSH32(esp, 1); /* 0x11036C09: push 1 */
    ecx = ebp + (-0x58); /* 0x11036C0B: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_11014015); /* 0x11036C0E: call 0x11014015 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x11036C13: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_11036C07; /* 0x11036C14: jne 0x11036c07 */
L_11036C16:
    RECOMP_BACKEDGE();
    goto L_11036A1D; /* 0x11036C16: jmp 0x11036a1d */
L_11036C1B:
    PUSH32(esp, esi); /* 0x11036C1B: push esi */
    ecx = edi; /* 0x11036C1C: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x11036C1E: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11036C23: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11036A39; /* 0x11036C25: jne 0x11036a39 */
L_11036C2B:
    eax = ebp + (-0xE8); /* 0x11036C2B: lea eax, [ebp - 0xe8] */
    ecx = ebx; /* 0x11036C31: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x11036C33: push eax */
    RECOMP_CALL(sub_1102BC05); /* 0x11036C34: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x11036C39: mov ecx, dword ptr [ebp - 0x140] */
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x11036C3F: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x11036C42: mov byte ptr [ebp - 4], 6 */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x11036C46: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x140)) = ecx; /* 0x11036C4A: mov dword ptr [ebp - 0x140], ecx */
    MEM32(ebp + (-0x158)) = ecx; /* 0x11036C50: mov dword ptr [ebp - 0x158], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_11036CAA; /* 0x11036C56: jbe 0x11036caa */
L_11036C58:
    eax = ebp + (-0xB8); /* 0x11036C58: lea eax, [ebp - 0xb8] */
    ecx = ebx; /* 0x11036C5E: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x11036C60: push eax */
    RECOMP_CALL(sub_1102BC05); /* 0x11036C61: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11036C66: mov esi, eax */
    ecx = MEM32(ebp + (-0x140)); /* 0x11036C68: mov ecx, dword ptr [ebp - 0x140] */
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x11036C6E: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 7; /* 0x11036C71: mov dword ptr [ebp - 4], 7 */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x11036C78: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x140)) = ecx; /* 0x11036C7C: mov dword ptr [ebp - 0x140], ecx */
    MEM32(ebp + (-0x158)) = ecx; /* 0x11036C82: mov dword ptr [ebp - 0x158], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_11036C8C; /* 0x11036C88: jb 0x11036c8c */
L_11036C8A:
    esi = MEM32(esi); /* 0x11036C8A: mov esi, dword ptr [esi] */
L_11036C8C:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x11036C8C: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036C9F; /* 0x11036C90: jne 0x11036c9f */
L_11036C92:
    ecx = edi; /* 0x11036C92: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x11036C94: call 0x110224f1 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x11036C99: mov ecx, dword ptr [ebp - 0x140] */
L_11036C9F:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x11036C9F: mov al, byte ptr [edi + 5] */
    /* cmp MEM8(esi), LO8(eax) */ /* 0x11036CA2: cmp byte ptr [esi], al */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036CAA; /* 0x11036CA4: jne 0x11036caa */
L_11036CA6:
    SET_LO8(ebx, 1); /* 0x11036CA6: mov bl, 1 */
    goto L_11036CAC; /* 0x11036CA8: jmp 0x11036cac */
L_11036CAA:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x11036CAA: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11036CAC:
    /* test LO8(ecx), 2 */ /* 0x11036CAC: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036CCF; /* 0x11036CAF: je 0x11036ccf */
L_11036CB1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ecx = ecx & 0xFFFFFFFDu; /* 0x11036CB1: and ecx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x11036CB4: push 0 */
    MEM32(ebp + (-0x140)) = ecx; /* 0x11036CB6: mov dword ptr [ebp - 0x140], ecx */
    ecx = ebp + (-0xB8); /* 0x11036CBC: lea ecx, [ebp - 0xb8] */
    PUSH32(esp, 1); /* 0x11036CC2: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x11036CC4: call 0x11010630 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x11036CC9: mov ecx, dword ptr [ebp - 0x140] */
L_11036CCF:
    MEM32(ebp + (-0x4)) = 3; /* 0x11036CCF: mov dword ptr [ebp - 4], 3 */
    /* test LO8(ecx), 1 */ /* 0x11036CD6: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036CF3; /* 0x11036CD9: je 0x11036cf3 */
L_11036CDB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x11036CDB: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x11036CDE: push 0 */
    MEM32(ebp + (-0x140)) = ecx; /* 0x11036CE0: mov dword ptr [ebp - 0x140], ecx */
    ecx = ebp + (-0xE8); /* 0x11036CE6: lea ecx, [ebp - 0xe8] */
    PUSH32(esp, 1); /* 0x11036CEC: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x11036CEE: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_11036CF3:
    /* test LO8(ebx), LO8(ebx) */ /* 0x11036CF3: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036D2F; /* 0x11036CF5: je 0x11036d2f */
L_11036CF7:
    ecx = edi; /* 0x11036CF7: mov ecx, edi */
    RECOMP_CALL(sub_11021816); /* 0x11036CF9: call 0x11021816 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x148)); /* 0x11036CFE: mov ebx, dword ptr [ebp - 0x148] */
    eax = ebp + (-0x118); /* 0x11036D04: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x11036D0A: push eax */
    ecx = ebx; /* 0x11036D0B: mov ecx, ebx */
    RECOMP_CALL(sub_1102BC05); /* 0x11036D0D: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11036D12: push eax */
    ecx = ebp + (-0x40); /* 0x11036D13: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_1103632A); /* 0x11036D16: call 0x1103632a */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x118); /* 0x11036D1B: lea ecx, [ebp - 0x118] */
L_11036D21:
    PUSH32(esp, 0); /* 0x11036D21: push 0 */
    PUSH32(esp, 1); /* 0x11036D23: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x11036D25: call 0x11010630 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_11036A33; /* 0x11036D2A: jmp 0x11036a33 */
L_11036D2F:
    esi = MEM32(ebp + (-0x148)); /* 0x11036D2F: mov esi, dword ptr [ebp - 0x148] */
    eax = ebp + (-0x100); /* 0x11036D35: lea eax, [ebp - 0x100] */
    PUSH32(esp, eax); /* 0x11036D3B: push eax */
    ecx = esi; /* 0x11036D3C: mov ecx, esi */
    RECOMP_CALL(sub_110380BA); /* 0x11036D3E: call 0x110380ba */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x11036D43: mov ecx, dword ptr [ebp - 0x140] */
    _flag_a = (uint32_t)((ecx | 4)); _flag_b = (uint32_t)((ecx | 4));
    ecx = ecx | 4; /* 0x11036D49: or ecx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x11036D4C: mov byte ptr [ebp - 4], 8 */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x11036D50: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x140)) = ecx; /* 0x11036D54: mov dword ptr [ebp - 0x140], ecx */
    MEM32(ebp + (-0x158)) = ecx; /* 0x11036D5A: mov dword ptr [ebp - 0x158], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_11036DB4; /* 0x11036D60: jbe 0x11036db4 */
L_11036D62:
    eax = ebp + (-0x130); /* 0x11036D62: lea eax, [ebp - 0x130] */
    ecx = esi; /* 0x11036D68: mov ecx, esi */
    PUSH32(esp, eax); /* 0x11036D6A: push eax */
    RECOMP_CALL(sub_110380BA); /* 0x11036D6B: call 0x110380ba */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11036D70: mov esi, eax */
    ecx = MEM32(ebp + (-0x140)); /* 0x11036D72: mov ecx, dword ptr [ebp - 0x140] */
    _flag_a = (uint32_t)((ecx | 8)); _flag_b = (uint32_t)((ecx | 8));
    ecx = ecx | 8; /* 0x11036D78: or ecx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 9; /* 0x11036D7B: mov dword ptr [ebp - 4], 9 */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x11036D82: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x140)) = ecx; /* 0x11036D86: mov dword ptr [ebp - 0x140], ecx */
    MEM32(ebp + (-0x158)) = ecx; /* 0x11036D8C: mov dword ptr [ebp - 0x158], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_11036D96; /* 0x11036D92: jb 0x11036d96 */
L_11036D94:
    esi = MEM32(esi); /* 0x11036D94: mov esi, dword ptr [esi] */
L_11036D96:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x11036D96: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036DA9; /* 0x11036D9A: jne 0x11036da9 */
L_11036D9C:
    ecx = edi; /* 0x11036D9C: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x11036D9E: call 0x110224f1 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x11036DA3: mov ecx, dword ptr [ebp - 0x140] */
L_11036DA9:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x11036DA9: mov al, byte ptr [edi + 5] */
    /* cmp MEM8(esi), LO8(eax) */ /* 0x11036DAC: cmp byte ptr [esi], al */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036DB4; /* 0x11036DAE: jne 0x11036db4 */
L_11036DB0:
    SET_LO8(ebx, 1); /* 0x11036DB0: mov bl, 1 */
    goto L_11036DB6; /* 0x11036DB2: jmp 0x11036db6 */
L_11036DB4:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x11036DB4: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_11036DB6:
    /* test LO8(ecx), 8 */ /* 0x11036DB6: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036DD9; /* 0x11036DB9: je 0x11036dd9 */
L_11036DBB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF7u);
    ecx = ecx & 0xFFFFFFF7u; /* 0x11036DBB: and ecx, 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x11036DBE: push 0 */
    MEM32(ebp + (-0x140)) = ecx; /* 0x11036DC0: mov dword ptr [ebp - 0x140], ecx */
    ecx = ebp + (-0x130); /* 0x11036DC6: lea ecx, [ebp - 0x130] */
    PUSH32(esp, 1); /* 0x11036DCC: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x11036DCE: call 0x11010630 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x140)); /* 0x11036DD3: mov ecx, dword ptr [ebp - 0x140] */
L_11036DD9:
    MEM32(ebp + (-0x4)) = 3; /* 0x11036DD9: mov dword ptr [ebp - 4], 3 */
    /* test LO8(ecx), 4 */ /* 0x11036DE0: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036DFD; /* 0x11036DE3: je 0x11036dfd */
L_11036DE5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFBu);
    ecx = ecx & 0xFFFFFFFBu; /* 0x11036DE5: and ecx, 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x11036DE8: push 0 */
    MEM32(ebp + (-0x140)) = ecx; /* 0x11036DEA: mov dword ptr [ebp - 0x140], ecx */
    ecx = ebp + (-0x100); /* 0x11036DF0: lea ecx, [ebp - 0x100] */
    PUSH32(esp, 1); /* 0x11036DF6: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x11036DF8: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_11036DFD:
    /* test LO8(ebx), LO8(ebx) */ /* 0x11036DFD: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036E40; /* 0x11036DFF: je 0x11036e40 */
L_11036E01:
    ecx = edi; /* 0x11036E01: mov ecx, edi */
    RECOMP_CALL(sub_11021816); /* 0x11036E03: call 0x11021816 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x148)); /* 0x11036E08: mov ebx, dword ptr [ebp - 0x148] */
    eax = ebp + (-0xA0); /* 0x11036E0E: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x11036E14: push eax */
    ecx = ebx; /* 0x11036E15: mov ecx, ebx */
    RECOMP_CALL(sub_110380BA); /* 0x11036E17: call 0x110380ba */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11036E1C: push eax */
    ecx = ebp + (-0x40); /* 0x11036E1D: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_1103632A); /* 0x11036E20: call 0x1103632a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11036E25: push 0 */
    PUSH32(esp, 1); /* 0x11036E27: push 1 */
    ecx = ebp + (-0xA0); /* 0x11036E29: lea ecx, [ebp - 0xa0] */
    RECOMP_CALL(sub_11010630); /* 0x11036E2F: call 0x11010630 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x141)) = (uint8_t)(1); /* 0x11036E34: mov byte ptr [ebp - 0x141], 1 */
    RECOMP_BACKEDGE();
    goto L_11036A33; /* 0x11036E3B: jmp 0x11036a33 */
L_11036E40:
    ebx = MEM32(ebp + (-0x148)); /* 0x11036E40: mov ebx, dword ptr [ebp - 0x148] */
    eax = ebp + (-0xD0); /* 0x11036E46: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x11036E4C: push eax */
    ecx = ebx; /* 0x11036E4D: mov ecx, ebx */
    RECOMP_CALL(sub_1102BC05); /* 0x11036E4F: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11036E54: push 0 */
    PUSH32(esp, 1); /* 0x11036E56: push 1 */
    ecx = ebp + (-0xD0); /* 0x11036E58: lea ecx, [ebp - 0xd0] */
    esi = MEM32(eax + 0x10); /* 0x11036E5E: mov esi, dword ptr [eax + 0x10] */
    RECOMP_CALL(sub_11010630); /* 0x11036E61: call 0x11010630 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x11036E66: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036A33; /* 0x11036E68: je 0x11036a33 */
L_11036E6E:
    eax = ebp + (-0x88); /* 0x11036E6E: lea eax, [ebp - 0x88] */
    ecx = ebx; /* 0x11036E74: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x11036E76: push eax */
    RECOMP_CALL(sub_110380BA); /* 0x11036E77: call 0x110380ba */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11036E7C: push 0 */
    PUSH32(esp, 1); /* 0x11036E7E: push 1 */
    ecx = ebp + (-0x88); /* 0x11036E80: lea ecx, [ebp - 0x88] */
    esi = MEM32(eax + 0x10); /* 0x11036E86: mov esi, dword ptr [eax + 0x10] */
    RECOMP_CALL(sub_11010630); /* 0x11036E89: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x13C)); /* 0x11036E8E: mov eax, dword ptr [ebp - 0x13c] */
    /* test esi, esi */ /* 0x11036E94: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x138)); /* 0x11036E96: mov esi, dword ptr [ebp - 0x138] */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11036A3F; /* 0x11036E9C: jne 0x11036a3f */
L_11036EA2:
    MEM8(ebp + (-0x141)) = (uint8_t)(1); /* 0x11036EA2: mov byte ptr [ebp - 0x141], 1 */
    RECOMP_BACKEDGE();
    goto L_11036A3F; /* 0x11036EA9: jmp 0x11036a3f */
L_11036EAE:
    eax = ebp + (-0x28); /* 0x11036EAE: lea eax, [ebp - 0x28] */
    ecx = ebx; /* 0x11036EB1: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x11036EB3: push eax */
    RECOMP_CALL(sub_11037B56); /* 0x11036EB4: call 0x11037b56 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x164)); /* 0x11036EB9: mov eax, dword ptr [ebp - 0x164] */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x11036EBF: mov byte ptr [ebp - 4], 5 */
    /* test MEM8(eax + 0x14), 8 */ /* 0x11036EC3: test byte ptr [eax + 0x14], 8 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11036EF4; /* 0x11036EC7: jne 0x11036ef4 */
L_11036EC9:
    PUSH32(esp, esi); /* 0x11036EC9: push esi */
    ecx = edi; /* 0x11036ECA: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x11036ECC: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11036ED1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11036EF4; /* 0x11036ED3: jne 0x11036ef4 */
L_11036ED5:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x11036ED5: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036EE1; /* 0x11036ED8: jne 0x11036ee1 */
L_11036EDA:
    ecx = edi; /* 0x11036EDA: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x11036EDC: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11036EE1:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11036EE1: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, MEM8(edi + 0x5)); /* 0x11036EE5: mov cl, byte ptr [edi + 5] */
    eax = MEM32(ebp + (-0x28)); /* 0x11036EE8: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11036EF0; /* 0x11036EEB: jae 0x11036ef0 */
L_11036EED:
    eax = ebp + (-0x28); /* 0x11036EED: lea eax, [ebp - 0x28] */
L_11036EF0:
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x11036EF0: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036F2E; /* 0x11036EF2: jne 0x11036f2e */
L_11036EF4:
    /* cmp MEM32(ebp + (-0x13C)), 3 */ /* 0x11036EF4: cmp dword ptr [ebp - 0x13c], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x13C))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036F38; /* 0x11036EFB: jne 0x11036f38 */
L_11036EFD:
    /* cmp MEM32(ebp + (-0x30)), 1 */ /* 0x11036EFD: cmp dword ptr [ebp - 0x30], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11036F38; /* 0x11036F01: ja 0x11036f38 */
L_11036F03:
    PUSH32(esp, esi); /* 0x11036F03: push esi */
    ecx = edi; /* 0x11036F04: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x11036F06: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11036F0B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11036F2E; /* 0x11036F0D: jne 0x11036f2e */
L_11036F0F:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x11036F0F: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036F1B; /* 0x11036F12: jne 0x11036f1b */
L_11036F14:
    ecx = edi; /* 0x11036F14: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x11036F16: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11036F1B:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11036F1B: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, MEM8(edi + 0x5)); /* 0x11036F1F: mov cl, byte ptr [edi + 5] */
    eax = MEM32(ebp + (-0x28)); /* 0x11036F22: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11036F2A; /* 0x11036F25: jae 0x11036f2a */
L_11036F27:
    eax = ebp + (-0x28); /* 0x11036F27: lea eax, [ebp - 0x28] */
L_11036F2A:
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x11036F2A: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11036F38; /* 0x11036F2C: je 0x11036f38 */
L_11036F2E:
    PUSH32(esp, 0); /* 0x11036F2E: push 0 */
    ecx = ebp + (-0x28); /* 0x11036F30: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010B2D); /* 0x11036F33: call 0x11010b2d */
    RECOMP_FLAGS_IN();
L_11036F38:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11036F38: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x28)); /* 0x11036F3C: mov esi, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11036F44; /* 0x11036F3F: jae 0x11036f44 */
L_11036F41:
    esi = ebp + (-0x28); /* 0x11036F41: lea esi, [ebp - 0x28] */
L_11036F44:
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x11036F44: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x11036F4A: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x11036F4C: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11036F51: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11036F9E; /* 0x11036F53: jne 0x11036f9e */
L_11036F55:
    ebx = MEM32(ebp + (-0x138)); /* 0x11036F55: mov ebx, dword ptr [ebp - 0x138] */
L_11036F5B:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11036F5B: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x11036F5F: mov ecx, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11036F67; /* 0x11036F62: jae 0x11036f67 */
L_11036F64:
    ecx = ebp + (-0x28); /* 0x11036F64: lea ecx, [ebp - 0x28] */
L_11036F67:
    eax = MEM32(ebp + (-0x18)); /* 0x11036F67: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x11036F6A: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x11036F6C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11036F98; /* 0x11036F6E: je 0x11036f98 */
L_11036F70:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x11036F70: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036F7D; /* 0x11036F74: jne 0x11036f7d */
L_11036F76:
    ecx = edi; /* 0x11036F76: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x11036F78: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11036F7D:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x11036F7D: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(esi) */ /* 0x11036F80: cmp al, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036F98; /* 0x11036F82: jne 0x11036f98 */
L_11036F84:
    ecx = edi; /* 0x11036F84: mov ecx, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11036F86: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_11021816); /* 0x11036F87: call 0x11021816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11036F8C: push ebx */
    ecx = edi; /* 0x11036F8D: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x11036F8F: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11036F94: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036F5B; /* 0x11036F96: je 0x11036f5b */
L_11036F98:
    ebx = MEM32(ebp + (-0x148)); /* 0x11036F98: mov ebx, dword ptr [ebp - 0x148] */
L_11036F9E:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11036F9E: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x11036FA2: mov ecx, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11036FAA; /* 0x11036FA5: jae 0x11036faa */
L_11036FA7:
    ecx = ebp + (-0x28); /* 0x11036FA7: lea ecx, [ebp - 0x28] */
L_11036FAA:
    eax = MEM32(ebp + (-0x18)); /* 0x11036FAA: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x11036FAD: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x11036FAF: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11036FBA; /* 0x11036FB1: je 0x11036fba */
L_11036FB3:
    MEM8(ebp + (-0x131)) = (uint8_t)(1); /* 0x11036FB3: mov byte ptr [ebp - 0x131], 1 */
L_11036FBA:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11036FBA: mov byte ptr [ebp - 4], 3 */
    ecx = ebp + (-0x28); /* 0x11036FBE: lea ecx, [ebp - 0x28] */
    RECOMP_BACKEDGE();
    goto L_11036D21; /* 0x11036FC1: jmp 0x11036d21 */
L_11036FC6:
    /* cmp MEM8(edi + 0x4), 0 */ /* 0x11036FC6: cmp byte ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11036FD3; /* 0x11036FCA: jne 0x11036fd3 */
L_11036FCC:
    ecx = edi; /* 0x11036FCC: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x11036FCE: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11036FD3:
    eax = MEM32(ebp + (-0x15C)); /* 0x11036FD3: mov eax, dword ptr [ebp - 0x15c] */
    ecx = (uint32_t)MEM8(edi + 0x5); /* 0x11036FD9: movzx ecx, byte ptr [edi + 5] */
    eax = MEM32(eax + 0xC); /* 0x11036FDD: mov eax, dword ptr [eax + 0xc] */
    /* test MEM8(eax + ecx * 2), 0x48u */ /* 0x11036FE0: test byte ptr [eax + ecx*2], 0x48 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 2)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036FFB; /* 0x11036FE4: je 0x11036ffb */
L_11036FE6:
    ecx = edi; /* 0x11036FE6: mov ecx, edi */
    SET_LO8(ebx, 1); /* 0x11036FE8: mov bl, 1 */
    RECOMP_CALL(sub_11021816); /* 0x11036FEA: call 0x11021816 */
    RECOMP_FLAGS_IN();
L_11036FEF:
    PUSH32(esp, esi); /* 0x11036FEF: push esi */
    ecx = edi; /* 0x11036FF0: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x11036FF2: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11036FF7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11036FC6; /* 0x11036FF9: je 0x11036fc6 */
L_11036FFB:
    eax = MEM32(ebp + (-0x13C)); /* 0x11036FFB: mov eax, dword ptr [ebp - 0x13c] */
    /* cmp MEM8(ebp + eax + (-0x168)), 0x20u */ /* 0x11037001: cmp byte ptr [ebp + eax - 0x168], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0x168))) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11037025; /* 0x11037009: jne 0x11037025 */
L_1103700B:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1103700B: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = MEM32(ebp + (-0x148)); /* 0x1103700D: mov ebx, dword ptr [ebp - 0x148] */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11036A3F; /* 0x11037013: jne 0x11036a3f */
L_11037019:
    MEM8(ebp + (-0x131)) = (uint8_t)(1); /* 0x11037019: mov byte ptr [ebp - 0x131], 1 */
    RECOMP_BACKEDGE();
    goto L_11036A3F; /* 0x11037020: jmp 0x11036a3f */
L_11037025:
    ebx = MEM32(ebp + (-0x148)); /* 0x11037025: mov ebx, dword ptr [ebp - 0x148] */
    RECOMP_BACKEDGE();
    goto L_11036A3F; /* 0x1103702B: jmp 0x11036a3f */
L_11037030:
    eax = ebp + (-0x40); /* 0x11037030: lea eax, [ebp - 0x40] */
L_11037033:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11037033: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x11037034: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x11037036: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103707C; /* 0x11037038: je 0x1103707c */
L_1103703A:
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x1103703A: push dword ptr [ebp - 0x138] */
    ecx = edi; /* 0x11037040: mov ecx, edi */
    RECOMP_CALL(sub_11027871); /* 0x11037042: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11037047: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11037073; /* 0x11037049: jne 0x11037073 */
L_1103704B:
    /* cmp MEM8(edi + 0x4), LO8(eax) */ /* 0x1103704B: cmp byte ptr [edi + 4], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11037057; /* 0x1103704E: jne 0x11037057 */
L_11037050:
    ecx = edi; /* 0x11037050: mov ecx, edi */
    RECOMP_CALL(sub_110224F1); /* 0x11037052: call 0x110224f1 */
    RECOMP_FLAGS_IN();
L_11037057:
    SET_LO8(eax, MEM8(edi + 0x5)); /* 0x11037057: mov al, byte ptr [edi + 5] */
    /* cmp LO8(eax), MEM8(esi) */ /* 0x1103705A: cmp al, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11037073; /* 0x1103705C: jne 0x11037073 */
L_1103705E:
    ecx = edi; /* 0x1103705E: mov ecx, edi */
    RECOMP_CALL(sub_11021816); /* 0x11037060: call 0x11021816 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x2C)); /* 0x11037065: mov edx, dword ptr [ebp - 0x2c] */
    ebx = MEM32(ebp + (-0x30)); /* 0x11037068: mov ebx, dword ptr [ebp - 0x30] */
    ecx = MEM32(ebp + (-0x40)); /* 0x1103706B: mov ecx, dword ptr [ebp - 0x40] */
    RECOMP_BACKEDGE();
    goto L_11036A78; /* 0x1103706E: jmp 0x11036a78 */
L_11037073:
    edx = MEM32(ebp + (-0x2C)); /* 0x11037073: mov edx, dword ptr [ebp - 0x2c] */
    ebx = MEM32(ebp + (-0x30)); /* 0x11037076: mov ebx, dword ptr [ebp - 0x30] */
    ecx = MEM32(ebp + (-0x40)); /* 0x11037079: mov ecx, dword ptr [ebp - 0x40] */
L_1103707C:
    /* cmp edx, 0x10u */ /* 0x1103707C: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11037084; /* 0x1103707F: jae 0x11037084 */
L_11037081:
    ecx = ebp + (-0x40); /* 0x11037081: lea ecx, [ebp - 0x40] */
L_11037084:
    eax = ebx + ecx; /* 0x11037084: lea eax, [ebx + ecx] */
    /* cmp esi, eax */ /* 0x11037087: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110370A5; /* 0x11037089: jne 0x110370a5 */
L_1103708B:
    SET_LO8(eax, MEM8(ebp + (-0x141))); /* 0x1103708B: mov al, byte ptr [ebp - 0x141] */
    /* test LO8(eax), LO8(eax) */ /* 0x11037091: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110370AF; /* 0x11037093: je 0x110370af */
L_11037095:
    PUSH32(esp, 0x2Du); /* 0x11037095: push 0x2d */
    PUSH32(esp, 1); /* 0x11037097: push 1 */
    PUSH32(esp, 0); /* 0x11037099: push 0 */
    ecx = ebp + (-0x58); /* 0x1103709B: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_110297AC); /* 0x1103709E: call 0x110297ac */
    RECOMP_FLAGS_IN();
    goto L_110370AF; /* 0x110370A3: jmp 0x110370af */
L_110370A5:
    PUSH32(esp, 0); /* 0x110370A5: push 0 */
    ecx = ebp + (-0x58); /* 0x110370A7: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_11010B2D); /* 0x110370AA: call 0x11010b2d */
    RECOMP_FLAGS_IN();
L_110370AF:
    ebx = MEM32(ebp + (-0x178)); /* 0x110370AF: mov ebx, dword ptr [ebp - 0x178] */
    eax = ebp + (-0x58); /* 0x110370B5: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x110370B8: push eax */
    ecx = ebx; /* 0x110370B9: mov ecx, ebx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0; /* 0x110370BB: and dword ptr [ebx + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x14) = 0xFu; /* 0x110370BF: mov dword ptr [ebx + 0x14], 0xf */
    MEM8(ebx) = (uint8_t)(0); /* 0x110370C6: mov byte ptr [ebx], 0 */
    RECOMP_CALL(sub_11010405); /* 0x110370C9: call 0x11010405 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110370CE: push 0 */
    PUSH32(esp, 1); /* 0x110370D0: push 1 */
    ecx = ebp + (-0x58); /* 0x110370D2: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_11010630); /* 0x110370D5: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110370DA: push 0 */
    PUSH32(esp, 1); /* 0x110370DC: push 1 */
    ecx = ebp + (-0x40); /* 0x110370DE: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_11010630); /* 0x110370E1: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x110370E6: mov eax, ebx */
    RECOMP_CALL(sub_1103B354); /* 0x110370E8: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x110370ED: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_110370F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110370F0u);

L_110370F0:
    PUSH32(esp, 0x34u); /* 0x110370F0: push 0x34 */
    eax = 0x1103F493u; /* 0x110370F2: mov eax, 0x1103f493 */
    RECOMP_CALL(sub_1103B3DB); /* 0x110370F7: call 0x1103b3db */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x110370FC: mov ebx, ecx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x110370FE: mov dword ptr [ebp - 0x14], ebx */
    eax = ebp + (-0x40); /* 0x11037101: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11037104: push eax */
    RECOMP_CALL(sub_1102DA53); /* 0x11037105: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xBu); /* 0x1103710A: push 0xb */
    ecx = POP32_VAL(esp); /* 0x1103710C: pop ecx */
    esi = eax; /* 0x1103710D: mov esi, eax */
    edi = ebx + 0x2C; /* 0x1103710F: lea edi, [ebx + 0x2c] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x11037112: rep movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x110692D4)); /* 0x11037114: call dword ptr [0x110692d4] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1103711A: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1103711C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x2C; /* 0x1103711E: lea eax, [ebx + 0x2c] */
    MEM32(ebx + 0x8) = esi; /* 0x11037121: mov dword ptr [ebx + 8], esi */
    PUSH32(esp, eax); /* 0x11037124: push eax */
    MEM32(ebx + 0x10) = esi; /* 0x11037125: mov dword ptr [ebx + 0x10], esi */
    MEM32(ebx + 0x14) = esi; /* 0x11037128: mov dword ptr [ebx + 0x14], esi */
    MEM32(ebx + 0x18) = esi; /* 0x1103712B: mov dword ptr [ebx + 0x18], esi */
    PUSH32(esp, esi); /* 0x1103712E: push esi */
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x1103712F: push dword ptr [edi + 0x1c] */
    MEM32(ebp + (-0x4)) = esi; /* 0x11037132: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_110156AE); /* 0x11037135: call 0x110156ae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103713A: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x8) = eax; /* 0x1103713D: mov dword ptr [ebx + 8], eax */
    ecx = ebx; /* 0x11037140: mov ecx, ebx */
    PUSH32(esp, edi); /* 0x11037142: push edi */
    PUSH32(esp, esi); /* 0x11037143: push esi */
    RECOMP_CALL(sub_11035DC3); /* 0x11037144: call 0x11035dc3 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebx + 0x28), 0 */ /* 0x11037149: cmp byte ptr [ebx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x28)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11037154; /* 0x1103714D: je 0x11037154 */
L_1103714F:
    SET_LO8(eax, MEM8(edi + 0x28)); /* 0x1103714F: mov al, byte ptr [edi + 0x28] */
    goto L_11037157; /* 0x11037152: jmp 0x11037157 */
L_11037154:
    SET_LO8(eax, MEM8(edi + 0x29)); /* 0x11037154: mov al, byte ptr [edi + 0x29] */
L_11037157:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x11037157: movsx eax, al */
    MEM32(ebx + 0x1C) = eax; /* 0x1103715A: mov dword ptr [ebx + 0x1c], eax */
    /* test eax, eax */ /* 0x1103715D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11037166; /* 0x1103715F: js 0x11037166 */
L_11037161:
    /* cmp eax, 0x7Fu */ /* 0x11037161: cmp eax, 0x7f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_11037169; /* 0x11037164: jl 0x11037169 */
L_11037166:
    MEM32(ebx + 0x1C) = esi; /* 0x11037166: mov dword ptr [ebx + 0x1c], esi */
L_11037169:
    eax = (int32_t)(int8_t)MEM8(edi + 0x2E); /* 0x11037169: movsx eax, byte ptr [edi + 0x2e] */
    esi = ebx + 0x20; /* 0x1103716D: lea esi, [ebx + 0x20] */
    PUSH32(esp, eax); /* 0x11037170: push eax */
    eax = (int32_t)(int8_t)MEM8(edi + 0x2A); /* 0x11037171: movsx eax, byte ptr [edi + 0x2a] */
    ecx = ebx; /* 0x11037175: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x11037177: push eax */
    eax = (int32_t)(int8_t)MEM8(edi + 0x2B); /* 0x11037178: movsx eax, byte ptr [edi + 0x2b] */
    PUSH32(esp, eax); /* 0x1103717C: push eax */
    PUSH32(esp, esi); /* 0x1103717D: push esi */
    RECOMP_CALL(sub_1103755E); /* 0x1103717E: call 0x1103755e */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int8_t)MEM8(edi + 0x2F); /* 0x11037183: movsx eax, byte ptr [edi + 0x2f] */
    ecx = ebx + 0x24; /* 0x11037187: lea ecx, [ebx + 0x24] */
    PUSH32(esp, eax); /* 0x1103718A: push eax */
    eax = (int32_t)(int8_t)MEM8(edi + 0x2C); /* 0x1103718B: movsx eax, byte ptr [edi + 0x2c] */
    PUSH32(esp, eax); /* 0x1103718F: push eax */
    eax = (int32_t)(int8_t)MEM8(edi + 0x2D); /* 0x11037190: movsx eax, byte ptr [edi + 0x2d] */
    PUSH32(esp, eax); /* 0x11037194: push eax */
    PUSH32(esp, ecx); /* 0x11037195: push ecx */
    ecx = ebx; /* 0x11037196: mov ecx, ebx */
    RECOMP_CALL(sub_1103755E); /* 0x11037198: call 0x1103755e */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x1103719D: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110371C0; /* 0x110371A1: je 0x110371c0 */
L_110371A3:
    PUSH32(esp, 4); /* 0x110371A3: push 4 */
    edi = 0x110035C8u; /* 0x110371A5: mov edi, 0x110035c8 */
    PUSH32(esp, edi); /* 0x110371AA: push edi */
    PUSH32(esp, esi); /* 0x110371AB: push esi */
    RECOMP_CALL(sub_1103B300); /* 0x110371AC: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x110371B1: push 4 */
    eax = ebx + 0x24; /* 0x110371B3: lea eax, [ebx + 0x24] */
    PUSH32(esp, edi); /* 0x110371B6: push edi */
    PUSH32(esp, eax); /* 0x110371B7: push eax */
    RECOMP_CALL(sub_1103B300); /* 0x110371B8: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x110371BD: add esp, 0x18 */
    _flag_k = FK_ADD;
L_110371C0:
    RECOMP_CALL(sub_1103B340); /* 0x110371C0: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110371C5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_110371DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110371DAu);

L_110371DA:
    PUSH32(esp, 8); /* 0x110371DA: push 8 */
    eax = 0x1103F4DCu; /* 0x110371DC: mov eax, 0x1103f4dc */
    RECOMP_CALL(sub_1103B372); /* 0x110371E1: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110371E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x110371E8: push eax */
    PUSH32(esp, eax); /* 0x110371E9: push eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x110371EA: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_110363B9); /* 0x110371ED: call 0x110363b9 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x14); /* 0x110371F2: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x110371F5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x10); /* 0x110371F7: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x110371FA: inc edx */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x110371FB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110371FC: pop ecx */
    ecx = eax; /* 0x110371FD: mov ecx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x110371FF: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x110371FF: shl edx, cl */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x11037201: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    /* test MEM32(ebp + 0xC), edx */ /* 0x11037203: test dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11037266; /* 0x11037206: je 0x11037266 */
L_11037208:
    /* test edi, edi */ /* 0x11037208: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11037249; /* 0x1103720A: jne 0x11037249 */
L_1103720C:
    PUSH32(esp, 0x10u); /* 0x1103720C: push 0x10 */
    RECOMP_CALL(sub_1103B120); /* 0x1103720E: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11037213: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11037215: pop ecx */
    /* test esi, esi */ /* 0x11037216: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11037230; /* 0x11037218: je 0x11037230 */
L_1103721A:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & edi; /* 0x1103721A: and dword ptr [esi + 4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x1100365Cu; /* 0x1103721D: mov dword ptr [esi], 0x1100365c */
    RECOMP_CALL(sub_1102D8EF); /* 0x11037223: call 0x1102d8ef */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x11037228: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0xC) = edx; /* 0x1103722B: mov dword ptr [esi + 0xc], edx */
    goto L_11037232; /* 0x1103722E: jmp 0x11037232 */
L_11037230:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11037230: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11037232:
    ecx = 0x11066260u; /* 0x11037232: mov ecx, 0x11066260 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11037237: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1103723C: push eax */
    PUSH32(esp, esi); /* 0x1103723D: push esi */
    PUSH32(esp, ebx); /* 0x1103723E: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x1103723F: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11037244: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11037266; /* 0x11037247: jmp 0x11037266 */
L_11037249:
    ecx = 0x11066260u; /* 0x11037249: mov ecx, 0x11066260 */
    RECOMP_CALL(sub_1100E2D9); /* 0x1103724E: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11037253: push edi */
    esi = eax; /* 0x11037254: mov esi, eax */
    RECOMP_CALL(sub_11035E3F); /* 0x11037256: call 0x11035e3f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1103725B: push esi */
    PUSH32(esp, eax); /* 0x1103725C: push eax */
    PUSH32(esp, ebx); /* 0x1103725D: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x1103725E: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11037263: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11037266:
    eax = MEM32(ebp + 0xC); /* 0x11037266: mov eax, dword ptr [ebp + 0xc] */
    /* test LO8(eax), 0x20u */ /* 0x11037269: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110372C3; /* 0x1103726B: je 0x110372c3 */
L_1103726D:
    /* test edi, edi */ /* 0x1103726D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110372A3; /* 0x1103726F: jne 0x110372a3 */
L_11037271:
    PUSH32(esp, 8); /* 0x11037271: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x11037273: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11037278: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1103727A: pop ecx */
    /* test esi, esi */ /* 0x1103727B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103728A; /* 0x1103727D: je 0x1103728a */
L_1103727F:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & edi; /* 0x1103727F: and dword ptr [esi + 4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x11003678u; /* 0x11037282: mov dword ptr [esi], 0x11003678 */
    goto L_1103728C; /* 0x11037288: jmp 0x1103728c */
L_1103728A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1103728A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103728C:
    ecx = 0x1106620Cu; /* 0x1103728C: mov ecx, 0x1106620c */
    RECOMP_CALL(sub_1100E2D9); /* 0x11037291: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11037296: push eax */
    PUSH32(esp, esi); /* 0x11037297: push esi */
    PUSH32(esp, ebx); /* 0x11037298: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x11037299: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103729E: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_110372C0; /* 0x110372A1: jmp 0x110372c0 */
L_110372A3:
    ecx = 0x1106620Cu; /* 0x110372A3: mov ecx, 0x1106620c */
    RECOMP_CALL(sub_1100E2D9); /* 0x110372A8: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x110372AD: push edi */
    esi = eax; /* 0x110372AE: mov esi, eax */
    RECOMP_CALL(sub_11035ED9); /* 0x110372B0: call 0x11035ed9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110372B5: push esi */
    PUSH32(esp, eax); /* 0x110372B6: push eax */
    PUSH32(esp, ebx); /* 0x110372B7: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x110372B8: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110372BD: add esp, 0x10 */
    _flag_k = FK_ADD;
L_110372C0:
    eax = MEM32(ebp + 0xC); /* 0x110372C0: mov eax, dword ptr [ebp + 0xc] */
L_110372C3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x110372C3: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x110372C6: mov dword ptr [ebp - 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_11037321; /* 0x110372C9: je 0x11037321 */
L_110372CB:
    /* test edi, edi */ /* 0x110372CB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11037301; /* 0x110372CD: jne 0x11037301 */
L_110372CF:
    PUSH32(esp, 8); /* 0x110372CF: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x110372D1: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110372D6: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x110372D8: pop ecx */
    /* test esi, esi */ /* 0x110372D9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110372E8; /* 0x110372DB: je 0x110372e8 */
L_110372DD:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & edi; /* 0x110372DD: and dword ptr [esi + 4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x11003694u; /* 0x110372E0: mov dword ptr [esi], 0x11003694 */
    goto L_110372EA; /* 0x110372E6: jmp 0x110372ea */
L_110372E8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110372E8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110372EA:
    ecx = 0x11066220u; /* 0x110372EA: mov ecx, 0x11066220 */
    RECOMP_CALL(sub_1100E2D9); /* 0x110372EF: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110372F4: push eax */
    PUSH32(esp, esi); /* 0x110372F5: push esi */
    PUSH32(esp, ebx); /* 0x110372F6: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x110372F7: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110372FC: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1103731E; /* 0x110372FF: jmp 0x1103731e */
L_11037301:
    ecx = 0x11066220u; /* 0x11037301: mov ecx, 0x11066220 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11037306: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1103730B: push edi */
    esi = eax; /* 0x1103730C: mov esi, eax */
    RECOMP_CALL(sub_11035F73); /* 0x1103730E: call 0x11035f73 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11037313: push esi */
    PUSH32(esp, eax); /* 0x11037314: push eax */
    PUSH32(esp, ebx); /* 0x11037315: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x11037316: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103731B: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1103731E:
    eax = MEM32(ebp + (-0x10)); /* 0x1103731E: mov eax, dword ptr [ebp - 0x10] */
L_11037321:
    /* test eax, eax */ /* 0x11037321: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11037483; /* 0x11037323: je 0x11037483 */
L_11037329:
    /* test edi, edi */ /* 0x11037329: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103735F; /* 0x1103732B: jne 0x1103735f */
L_1103732D:
    PUSH32(esp, 8); /* 0x1103732D: push 8 */
    RECOMP_CALL(sub_1103B120); /* 0x1103732F: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11037334: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11037336: pop ecx */
    /* test esi, esi */ /* 0x11037337: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11037346; /* 0x11037339: je 0x11037346 */
L_1103733B:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & edi; /* 0x1103733B: and dword ptr [esi + 4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x110036ACu; /* 0x1103733E: mov dword ptr [esi], 0x110036ac */
    goto L_11037348; /* 0x11037344: jmp 0x11037348 */
L_11037346:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11037346: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11037348:
    ecx = 0x11066224u; /* 0x11037348: mov ecx, 0x11066224 */
    RECOMP_CALL(sub_1100E2D9); /* 0x1103734D: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11037352: push eax */
    PUSH32(esp, esi); /* 0x11037353: push esi */
    PUSH32(esp, ebx); /* 0x11037354: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x11037355: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103735A: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1103737C; /* 0x1103735D: jmp 0x1103737c */
L_1103735F:
    ecx = 0x11066224u; /* 0x1103735F: mov ecx, 0x11066224 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11037364: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11037369: push edi */
    esi = eax; /* 0x1103736A: mov esi, eax */
    RECOMP_CALL(sub_1103600D); /* 0x1103736C: call 0x1103600d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11037371: push esi */
    PUSH32(esp, eax); /* 0x11037372: push eax */
    PUSH32(esp, ebx); /* 0x11037373: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x11037374: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11037379: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1103737C:
    eax = MEM32(ebp + (-0x10)); /* 0x1103737C: mov eax, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x1103737F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11037483; /* 0x11037381: je 0x11037483 */
L_11037387:
    /* test edi, edi */ /* 0x11037387: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110373E5; /* 0x11037389: jne 0x110373e5 */
L_1103738B:
    PUSH32(esp, 0x58u); /* 0x1103738B: push 0x58 */
    RECOMP_CALL(sub_1103B120); /* 0x1103738D: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11037392: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11037394: pop ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11037395: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 7; /* 0x11037398: mov dword ptr [ebp - 4], 7 */
    /* test esi, esi */ /* 0x1103739F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110373C8; /* 0x110373A1: je 0x110373c8 */
L_110373A3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110373A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x110373A5: mov dword ptr [esi + 4], eax */
    PUSH32(esp, eax); /* 0x110373A8: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110373A9: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x110373AC: mov ecx, esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x110373AE: mov byte ptr [ebp - 4], 8 */
    MEM32(esi) = 0x110036C4u; /* 0x110373B2: mov dword ptr [esi], 0x110036c4 */
    MEM8(esi + 0x28) = (uint8_t)(LO8(eax)); /* 0x110373B8: mov byte ptr [esi + 0x28], al */
    RECOMP_CALL(sub_110370F0); /* 0x110373BB: call 0x110370f0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x110036F8u; /* 0x110373C0: mov dword ptr [esi], 0x110036f8 */
    goto L_110373CA; /* 0x110373C6: jmp 0x110373ca */
L_110373C8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110373C8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110373CA:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110373CA: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x1106621Cu; /* 0x110373CE: mov ecx, 0x1106621c */
    RECOMP_CALL(sub_1100E2D9); /* 0x110373D3: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110373D8: push eax */
    PUSH32(esp, esi); /* 0x110373D9: push esi */
    PUSH32(esp, ebx); /* 0x110373DA: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x110373DB: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110373E0: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11037402; /* 0x110373E3: jmp 0x11037402 */
L_110373E5:
    ecx = 0x1106621Cu; /* 0x110373E5: mov ecx, 0x1106621c */
    RECOMP_CALL(sub_1100E2D9); /* 0x110373EA: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x110373EF: push edi */
    esi = eax; /* 0x110373F0: mov esi, eax */
    RECOMP_CALL(sub_11036141); /* 0x110373F2: call 0x11036141 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110373F7: push esi */
    PUSH32(esp, eax); /* 0x110373F8: push eax */
    PUSH32(esp, ebx); /* 0x110373F9: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x110373FA: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110373FF: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11037402:
    eax = MEM32(ebp + (-0x10)); /* 0x11037402: mov eax, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x11037405: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11037483; /* 0x11037407: je 0x11037483 */
L_11037409:
    /* test edi, edi */ /* 0x11037409: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11037466; /* 0x1103740B: jne 0x11037466 */
L_1103740D:
    PUSH32(esp, 0x58u); /* 0x1103740D: push 0x58 */
    RECOMP_CALL(sub_1103B120); /* 0x1103740F: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11037414: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11037416: pop ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x11037417: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0xDu; /* 0x1103741A: mov dword ptr [ebp - 4], 0xd */
    /* test esi, esi */ /* 0x11037421: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11037449; /* 0x11037423: je 0x11037449 */
L_11037425:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & edi; /* 0x11037425: and dword ptr [esi + 4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x11037428: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11037429: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1103742C: mov ecx, esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x1103742E: mov byte ptr [ebp - 4], 0xe */
    MEM32(esi) = 0x110036C4u; /* 0x11037432: mov dword ptr [esi], 0x110036c4 */
    MEM8(esi + 0x28) = (uint8_t)(1); /* 0x11037438: mov byte ptr [esi + 0x28], 1 */
    RECOMP_CALL(sub_110370F0); /* 0x1103743C: call 0x110370f0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1100372Cu; /* 0x11037441: mov dword ptr [esi], 0x1100372c */
    goto L_1103744B; /* 0x11037447: jmp 0x1103744b */
L_11037449:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11037449: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103744B:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1103744B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x11066218u; /* 0x1103744F: mov ecx, 0x11066218 */
    RECOMP_CALL(sub_1100E2D9); /* 0x11037454: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11037459: push eax */
    PUSH32(esp, esi); /* 0x1103745A: push esi */
    PUSH32(esp, ebx); /* 0x1103745B: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x1103745C: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11037461: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11037483; /* 0x11037464: jmp 0x11037483 */
L_11037466:
    ecx = 0x11066218u; /* 0x11037466: mov ecx, 0x11066218 */
    RECOMP_CALL(sub_1100E2D9); /* 0x1103746B: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11037470: push edi */
    esi = eax; /* 0x11037471: mov esi, eax */
    RECOMP_CALL(sub_110360A7); /* 0x11037473: call 0x110360a7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11037478: push esi */
    PUSH32(esp, eax); /* 0x11037479: push eax */
    PUSH32(esp, ebx); /* 0x1103747A: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x1103747B: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11037480: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11037483:
    eax = MEM32(ebp + 0xC); /* 0x11037483: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x11037486: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x11037489: mov dword ptr [ebp + 0xc], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_110374F4; /* 0x1103748C: je 0x110374f4 */
L_1103748E:
    /* test edi, edi */ /* 0x1103748E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110374D4; /* 0x11037490: jne 0x110374d4 */
L_11037492:
    PUSH32(esp, 0x44u); /* 0x11037492: push 0x44 */
    RECOMP_CALL(sub_1103B120); /* 0x11037494: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11037499: pop ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1103749A: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x4)) = 0x12u; /* 0x1103749D: mov dword ptr [ebp - 4], 0x12 */
    /* test eax, eax */ /* 0x110374A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110374B7; /* 0x110374A6: je 0x110374b7 */
L_110374A8:
    PUSH32(esp, edi); /* 0x110374A8: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110374A9: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x110374AC: mov ecx, eax */
    RECOMP_CALL(sub_11016F6D); /* 0x110374AE: call 0x11016f6d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x110374B3: mov esi, eax */
    goto L_110374B9; /* 0x110374B5: jmp 0x110374b9 */
L_110374B7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110374B7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110374B9:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x110374B9: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x11066248u; /* 0x110374BD: mov ecx, 0x11066248 */
    RECOMP_CALL(sub_1100E2D9); /* 0x110374C2: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x110374C7: push eax */
    PUSH32(esp, esi); /* 0x110374C8: push esi */
    PUSH32(esp, ebx); /* 0x110374C9: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x110374CA: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110374CF: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_110374F1; /* 0x110374D2: jmp 0x110374f1 */
L_110374D4:
    ecx = 0x11066248u; /* 0x110374D4: mov ecx, 0x11066248 */
    RECOMP_CALL(sub_1100E2D9); /* 0x110374D9: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x110374DE: push edi */
    esi = eax; /* 0x110374DF: mov esi, eax */
    RECOMP_CALL(sub_110361DB); /* 0x110374E1: call 0x110361db */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x110374E6: push esi */
    PUSH32(esp, eax); /* 0x110374E7: push eax */
    PUSH32(esp, ebx); /* 0x110374E8: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x110374E9: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110374EE: add esp, 0x10 */
    _flag_k = FK_ADD;
L_110374F1:
    eax = MEM32(ebp + 0xC); /* 0x110374F1: mov eax, dword ptr [ebp + 0xc] */
L_110374F4:
    /* test eax, eax */ /* 0x110374F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11037558; /* 0x110374F6: je 0x11037558 */
L_110374F8:
    /* test edi, edi */ /* 0x110374F8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103753B; /* 0x110374FA: jne 0x1103753b */
L_110374FC:
    PUSH32(esp, 0xCu); /* 0x110374FC: push 0xc */
    RECOMP_CALL(sub_1103B120); /* 0x110374FE: call 0x1103b120 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x11037503: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11037505: pop ecx */
    /* test esi, esi */ /* 0x11037506: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11037522; /* 0x11037508: je 0x11037522 */
L_1103750A:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & edi; /* 0x1103750A: and dword ptr [esi + 4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1103750D: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103750F: push dword ptr [ebp + 8] */
    MEM32(esi) = 0x110021F4u; /* 0x11037512: mov dword ptr [esi], 0x110021f4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & edi; /* 0x11037518: and dword ptr [esi + 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_11021C33); /* 0x1103751B: call 0x11021c33 */
    RECOMP_FLAGS_IN();
    goto L_11037524; /* 0x11037520: jmp 0x11037524 */
L_11037522:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11037522: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_11037524:
    ecx = 0x1106624Cu; /* 0x11037524: mov ecx, 0x1106624c */
    RECOMP_CALL(sub_1100E2D9); /* 0x11037529: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1103752E: push eax */
    PUSH32(esp, esi); /* 0x1103752F: push esi */
    PUSH32(esp, ebx); /* 0x11037530: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x11037531: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11037536: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_11037558; /* 0x11037539: jmp 0x11037558 */
L_1103753B:
    ecx = 0x1106624Cu; /* 0x1103753B: mov ecx, 0x1106624c */
    RECOMP_CALL(sub_1100E2D9); /* 0x11037540: call 0x1100e2d9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x11037545: push edi */
    esi = eax; /* 0x11037546: mov esi, eax */
    RECOMP_CALL(sub_11036275); /* 0x11037548: call 0x11036275 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1103754D: push esi */
    PUSH32(esp, eax); /* 0x1103754E: push eax */
    PUSH32(esp, ebx); /* 0x1103754F: push ebx */
    RECOMP_CALL(sub_1102C459); /* 0x11037550: call 0x1102c459 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11037555: add esp, 0x10 */
    _flag_k = FK_ADD;
L_11037558:
    RECOMP_CALL(sub_1103B340); /* 0x11037558: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103755D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103755E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103755Eu);

L_1103755E:
    PUSH32(esp, ebp); /* 0x1103755E: push ebp */
    ebp = esp; /* 0x1103755F: mov ebp, esp */
    /* cmp MEM8(ecx + 0x28), 0 */ /* 0x11037561: cmp byte ptr [ecx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x28)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103758F; /* 0x11037565: jne 0x1103758f */
L_11037567:
    eax = MEM32(ebp + 0xC); /* 0x11037567: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 2 */ /* 0x1103756A: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1103758F; /* 0x1103756D: ja 0x1103758f */
L_1103756F:
    ecx = MEM32(ebp + 0x10); /* 0x1103756F: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, 1 */ /* 0x11037572: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1103758F; /* 0x11037575: ja 0x1103758f */
L_11037577:
    /* cmp MEM32(ebp + 0x14), 4 */ /* 0x11037577: cmp dword ptr [ebp + 0x14], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1103758F; /* 0x1103757B: ja 0x1103758f */
L_1103757D:
    eax = ecx + eax * 2; /* 0x1103757D: lea eax, [ecx + eax*2] */
    eax = (uint32_t)((int32_t)eax * (int32_t)5); /* 0x11037580: imul eax, eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14); /* 0x11037583: add eax, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    eax = eax * 4 + 0x110035D8; /* 0x11037586: lea eax, [eax*4 + 0x110035d8] */
    goto L_11037594; /* 0x1103758D: jmp 0x11037594 */
L_1103758F:
    eax = 0x110035C8u; /* 0x1103758F: mov eax, 0x110035c8 */
L_11037594:
    PUSH32(esp, 4); /* 0x11037594: push 4 */
    PUSH32(esp, eax); /* 0x11037596: push eax */
    PUSH32(esp, 4); /* 0x11037597: push 4 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11037599: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x110690BC)); /* 0x1103759C: call dword ptr [0x110690bc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110375A2: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x110375A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x110375A6: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_110375A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110375A9u);

L_110375A9:
    PUSH32(esp, ebp); /* 0x110375A9: push ebp */
    ebp = esp; /* 0x110375AA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110375AC: push esi */
    esi = MEM32(ebp + 0x18); /* 0x110375AD: mov esi, dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x110375B0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110375CD; /* 0x110375B2: je 0x110375cd */
L_110375B4:
    eax = MEM32(ebp + 0x14); /* 0x110375B4: mov eax, dword ptr [ebp + 0x14] */
L_110375B7:
    eax = (uint32_t)MEM8(eax); /* 0x110375B7: movzx eax, byte ptr [eax] */
    ecx = ebp + 0xC; /* 0x110375BA: lea ecx, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x110375BD: push eax */
    RECOMP_CALL(sub_1101776A); /* 0x110375BE: call 0x1101776a */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x110375C3: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110375C6: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = eax; /* 0x110375C7: mov dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x110375CA: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_110375B7; /* 0x110375CB: jne 0x110375b7 */
L_110375CD:
    eax = MEM32(ebp + 0x8); /* 0x110375CD: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x110375D0: mov ecx, dword ptr [ebp + 0xc] */
    esi = POP32_VAL(esp); /* 0x110375D3: pop esi */
    MEM32(eax) = ecx; /* 0x110375D4: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x110375D6: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x110375D9: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x110375DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110375DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_110375DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110375DEu);

L_110375DE:
    PUSH32(esp, 0xE0u); /* 0x110375DE: push 0xe0 */
    eax = 0x1103F52Du; /* 0x110375E3: mov eax, 0x1103f52d */
    RECOMP_CALL(sub_1103B3A5); /* 0x110375E8: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x110375ED: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x18); /* 0x110375F0: mov esi, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x9C)) = eax; /* 0x110375F3: mov dword ptr [ebp - 0x9c], eax */
    eax = MEM32(ebp + 0x1C); /* 0x110375F9: mov eax, dword ptr [ebp + 0x1c] */
    MEM8(ebp + (-0x84)) = (uint8_t)(LO8(eax)); /* 0x110375FC: mov byte ptr [ebp - 0x84], al */
    eax = MEM32(ebp + 0x3C); /* 0x11037602: mov eax, dword ptr [ebp + 0x3c] */
    MEM32(ebp + (-0x88)) = esi; /* 0x11037605: mov dword ptr [ebp - 0x88], esi */
    MEM8(ebp + (-0x8C)) = (uint8_t)(LO8(eax)); /* 0x1103760B: mov byte ptr [ebp - 0x8c], al */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11037611: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x11037615: mov ecx, esi */
    /* cmp MEM8(ebp + 0x14), 0 */ /* 0x11037617: cmp byte ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103763C; /* 0x1103761B: je 0x1103763c */
L_1103761D:
    eax = ebp + (-0xAC); /* 0x1103761D: lea eax, [ebp - 0xac] */
    PUSH32(esp, eax); /* 0x11037623: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11037624: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11037629: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1103762A: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_110360A7); /* 0x1103762E: call 0x110360a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11037633: pop ecx */
    ecx = ebp + (-0xAC); /* 0x11037634: lea ecx, [ebp - 0xac] */
    goto L_11037659; /* 0x1103763A: jmp 0x11037659 */
L_1103763C:
    eax = ebp + (-0xA4); /* 0x1103763C: lea eax, [ebp - 0xa4] */
    PUSH32(esp, eax); /* 0x11037642: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11037643: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x11037648: push eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x11037649: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_11036141); /* 0x1103764D: call 0x11036141 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11037652: pop ecx */
    ecx = ebp + (-0xA4); /* 0x11037653: lea ecx, [ebp - 0xa4] */
L_11037659:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x11037659: mov byte ptr [ebp - 4], 0 */
    ebx = eax; /* 0x1103765D: mov ebx, eax */
    RECOMP_CALL(sub_1100E431); /* 0x1103765F: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x11037664: lea eax, [ebp - 0x40] */
    ecx = ebx; /* 0x11037667: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x11037669: push eax */
    RECOMP_CALL(sub_110292E9); /* 0x1103766A: call 0x110292e9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x1103766F: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x11037671: mov ecx, ebx */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11037673: mov byte ptr [ebp - 4], 3 */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x11037677: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1103767A: cdq  */
    edi = eax; /* 0x1103767B: mov edi, eax */
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x1103767D: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x1103767F: sub edi, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x78)) = edi; /* 0x11037681: mov dword ptr [ebp - 0x78], edi */
    /* cmp MEM32(ebp + 0x34), edi */ /* 0x11037684: cmp dword ptr [ebp + 0x34], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110376A2; /* 0x11037687: ja 0x110376a2 */
L_11037689:
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x11037689: push dword ptr [ebp - 0x8c] */
    eax = edi; /* 0x1103768F: mov eax, edi */
    ecx = ebp + 0x24; /* 0x11037691: lea ecx, [ebp + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x34); /* 0x11037694: sub eax, dword ptr [ebp + 0x34] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11037697: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x11037698: push eax */
    PUSH32(esp, 0); /* 0x11037699: push 0 */
    RECOMP_CALL(sub_110297AC); /* 0x1103769B: call 0x110297ac */
    RECOMP_FLAGS_IN();
    goto L_11037715; /* 0x110376A0: jmp 0x11037715 */
L_110376A2:
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x110376A2: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x40)); /* 0x110376A6: mov eax, dword ptr [ebp - 0x40] */
    ecx = eax; /* 0x110376A9: mov ecx, eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110376B0; /* 0x110376AB: jae 0x110376b0 */
L_110376AD:
    ecx = ebp + (-0x40); /* 0x110376AD: lea ecx, [ebp - 0x40] */
L_110376B0:
    /* cmp MEM8(ecx), 0x7Fu */ /* 0x110376B0: cmp byte ptr [ecx], 0x7f */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11037715; /* 0x110376B3: je 0x11037715 */
L_110376B5:
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x110376B5: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_110376BE; /* 0x110376B9: jae 0x110376be */
L_110376BB:
    eax = ebp + (-0x40); /* 0x110376BB: lea eax, [ebp - 0x40] */
L_110376BE:
    /* cmp MEM8(eax), 0 */ /* 0x110376BE: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_11037715; /* 0x110376C1: jle 0x11037715 */
L_110376C3:
    eax = MEM32(ebx); /* 0x110376C3: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x110376C5: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x110376C7: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x110376CA: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x40)); /* 0x110376CE: mov edi, dword ptr [ebp - 0x40] */
    MEM8(ebp + (-0x7C)) = (uint8_t)(LO8(eax)); /* 0x110376D1: mov byte ptr [ebp - 0x7c], al */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110376D9; /* 0x110376D4: jae 0x110376d9 */
L_110376D6:
    edi = ebp + (-0x40); /* 0x110376D6: lea edi, [ebp - 0x40] */
L_110376D9:
    esi = MEM32(ebp + 0x34); /* 0x110376D9: mov esi, dword ptr [ebp + 0x34] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x78)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x78)); /* 0x110376DC: sub esi, dword ptr [ebp - 0x78] */
    _flag_k = FK_CMP;
L_110376DF:
    SET_LO8(eax, MEM8(edi)); /* 0x110376DF: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x7Fu */ /* 0x110376E1: cmp al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103770C; /* 0x110376E3: je 0x1103770c */
L_110376E5:
    /* test LO8(eax), LO8(eax) */ /* 0x110376E5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1103770C; /* 0x110376E7: jle 0x1103770c */
L_110376E9:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x110376E9: movsx eax, al */
    /* cmp eax, esi */ /* 0x110376EC: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1103770C; /* 0x110376EE: jae 0x1103770c */
L_110376F0:
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x110376F0: push dword ptr [ebp - 0x7c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x110376F3: sub esi, eax */
    _flag_k = FK_CMP;
    ecx = ebp + 0x24; /* 0x110376F5: lea ecx, [ebp + 0x24] */
    PUSH32(esp, 1); /* 0x110376F8: push 1 */
    PUSH32(esp, esi); /* 0x110376FA: push esi */
    RECOMP_CALL(sub_110297AC); /* 0x110376FB: call 0x110297ac */
    RECOMP_FLAGS_IN();
    eax = edi + 0x1; /* 0x11037700: lea eax, [edi + 1] */
    /* cmp MEM8(eax), 0 */ /* 0x11037703: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_110376DF; /* 0x11037706: jle 0x110376df */
L_11037708:
    edi = eax; /* 0x11037708: mov edi, eax */
    RECOMP_BACKEDGE();
    goto L_110376DF; /* 0x1103770A: jmp 0x110376df */
L_1103770C:
    esi = MEM32(ebp + (-0x88)); /* 0x1103770C: mov esi, dword ptr [ebp - 0x88] */
    edi = MEM32(ebp + (-0x78)); /* 0x11037712: mov edi, dword ptr [ebp - 0x78] */
L_11037715:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x11037715: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x11037719: mov dword ptr [ebp - 0x14], 0xf */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x11037720: mov byte ptr [ebp - 0x28], 0 */
    /* cmp MEM8(ebp + 0x20), 0 */ /* 0x11037724: cmp byte ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x20)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = ebp + (-0x7C); /* 0x11037728: lea ecx, [ebp - 0x7c] */
    eax = MEM32(ebx); /* 0x1103772B: mov eax, dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x1103772D: push ecx */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x1103772E: mov byte ptr [ebp - 4], 4 */
    ecx = ebx; /* 0x11037732: mov ecx, ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103774F; /* 0x11037734: je 0x1103774f */
L_11037736:
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x11037736: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x7C)); /* 0x11037739: mov eax, dword ptr [ebp - 0x7c] */
    ecx = ebx; /* 0x1103773C: mov ecx, ebx */
    MEM32(ebp + (-0x90)) = eax; /* 0x1103773E: mov dword ptr [ebp - 0x90], eax */
    eax = ebp + (-0x70); /* 0x11037744: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x11037747: push eax */
    RECOMP_CALL(sub_110380BA); /* 0x11037748: call 0x110380ba */
    RECOMP_FLAGS_IN();
    goto L_11037766; /* 0x1103774D: jmp 0x11037766 */
L_1103774F:
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1103774F: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x7C)); /* 0x11037752: mov eax, dword ptr [ebp - 0x7c] */
    ecx = ebx; /* 0x11037755: mov ecx, ebx */
    MEM32(ebp + (-0x90)) = eax; /* 0x11037757: mov dword ptr [ebp - 0x90], eax */
    eax = ebp + (-0x70); /* 0x1103775D: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x11037760: push eax */
    RECOMP_CALL(sub_1102BC05); /* 0x11037761: call 0x1102bc05 */
    RECOMP_FLAGS_IN();
L_11037766:
    PUSH32(esp, eax); /* 0x11037766: push eax */
    ecx = ebp + (-0x28); /* 0x11037767: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1103632A); /* 0x1103776A: call 0x1103632a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1103776F: push 0 */
    PUSH32(esp, 1); /* 0x11037771: push 1 */
    ecx = ebp + (-0x70); /* 0x11037773: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_11010630); /* 0x11037776: call 0x11010630 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) & 0; /* 0x1103777B: and dword ptr [ebp - 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x1103777F: mov dword ptr [ebp - 0x44], 0xf */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x11037786: mov byte ptr [ebp - 0x58], 0 */
    /* test MEM8(esi + 0x14), 8 */ /* 0x1103778A: test byte ptr [esi + 0x14], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x1103778E: mov byte ptr [ebp - 4], 5 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_110377B4; /* 0x11037792: je 0x110377b4 */
L_11037794:
    eax = ebp + (-0x70); /* 0x11037794: lea eax, [ebp - 0x70] */
    ecx = ebx; /* 0x11037797: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x11037799: push eax */
    RECOMP_CALL(sub_11037B56); /* 0x1103779A: call 0x11037b56 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1103779F: push eax */
    ecx = ebp + (-0x58); /* 0x110377A0: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_1103632A); /* 0x110377A3: call 0x1103632a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x110377A8: push 0 */
    PUSH32(esp, 1); /* 0x110377AA: push 1 */
    ecx = ebp + (-0x70); /* 0x110377AC: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_11010630); /* 0x110377AF: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_110377B4:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x110377B4: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110377B6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x71)) = (uint8_t)(LO8(edx)); /* 0x110377B8: mov byte ptr [ebp - 0x71], dl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x110377BB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_110377BD:
    eax = (int32_t)(int8_t)MEM8(ebp + esi + (-0x90)); /* 0x110377BD: movsx eax, byte ptr [ebp + esi - 0x90] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x110377C5: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1103780C; /* 0x110377C8: je 0x1103780c */
L_110377CA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x110377CA: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11037807; /* 0x110377CD: je 0x11037807 */
L_110377CF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x110377CF: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11037802; /* 0x110377D2: je 0x11037802 */
L_110377D4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x4Bu; /* 0x110377D4: sub eax, 0x4b */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_110377DF; /* 0x110377D7: je 0x110377df */
L_110377D9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x110377D9: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x110377DA: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1103780D; /* 0x110377DB: je 0x1103780d */
L_110377DD:
    goto L_11037817; /* 0x110377DD: jmp 0x11037817 */
L_110377DF:
    /* cmp MEM32(ebp + 0x34), edi */ /* 0x110377DF: cmp dword ptr [ebp + 0x34], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110377EC; /* 0x110377E2: ja 0x110377ec */
L_110377E4:
    edx = edi; /* 0x110377E4: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + 0x34); /* 0x110377E6: sub edx, dword ptr [ebp + 0x34] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x110377E9: inc edx */
    _flag_k = FK_INC;
    goto L_110377EE; /* 0x110377EA: jmp 0x110377ee */
L_110377EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x110377EC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_110377EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110377EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x110377F0: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x110377F2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x110377F4: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x34); /* 0x110377F6: add eax, dword ptr [ebp + 0x34] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x110377F9: add eax, edx */
    _flag_k = FK_ADD;
    SET_LO8(edx, MEM8(ebp + (-0x71))); /* 0x110377FB: mov dl, byte ptr [ebp - 0x71] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x110377FE: add ecx, eax */
    _flag_k = FK_ADD;
    goto L_11037817; /* 0x11037800: jmp 0x11037817 */
L_11037802:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x18)); /* 0x11037802: add ecx, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    goto L_11037817; /* 0x11037805: jmp 0x11037817 */
L_11037807:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x48)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x48)); /* 0x11037807: add ecx, dword ptr [ebp - 0x48] */
    _flag_k = FK_ADD;
    goto L_11037817; /* 0x1103780A: jmp 0x11037817 */
L_1103780C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1103780C: inc ecx */
    _flag_k = FK_INC;
L_1103780D:
    /* cmp esi, 3 */ /* 0x1103780D: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11037817; /* 0x11037810: je 0x11037817 */
L_11037812:
    SET_LO8(edx, 1); /* 0x11037812: mov dl, 1 */
    MEM8(ebp + (-0x71)) = (uint8_t)(LO8(edx)); /* 0x11037814: mov byte ptr [ebp - 0x71], dl */
L_11037817:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11037817: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 4 */ /* 0x11037818: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_110377BD; /* 0x1103781B: jb 0x110377bd */
L_1103781D:
    esi = MEM32(ebp + (-0x88)); /* 0x1103781D: mov esi, dword ptr [ebp - 0x88] */
    /* cmp MEM32(esi + 0x24), 0 */ /* 0x11037823: cmp dword ptr [esi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1103783C; /* 0x11037827: jl 0x1103783c */
L_11037829:
    if (CMP_G(_flag_a, _flag_b)) goto L_11037831; /* 0x11037829: jg 0x11037831 */
L_1103782B:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x1103782B: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1103783C; /* 0x1103782F: jbe 0x1103783c */
L_11037831:
    eax = MEM32(esi + 0x20); /* 0x11037831: mov eax, dword ptr [esi + 0x20] */
    /* cmp eax, ecx */ /* 0x11037834: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1103783C; /* 0x11037836: jbe 0x1103783c */
L_11037838:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x11037838: sub eax, ecx */
    _flag_k = FK_CMP;
    goto L_1103783E; /* 0x1103783A: jmp 0x1103783e */
L_1103783C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103783C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1103783E:
    ecx = MEM32(esi + 0x14); /* 0x1103783E: mov ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1C0u);
    ecx = ecx & 0x1C0u; /* 0x11037841: and ecx, 0x1c0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x78)) = eax; /* 0x11037847: mov dword ptr [ebp - 0x78], eax */
    MEM32(ebp + (-0x80)) = ecx; /* 0x1103784A: mov dword ptr [ebp - 0x80], ecx */
    /* cmp ecx, 0x40u */ /* 0x1103784D: cmp ecx, 0x40 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103788E; /* 0x11037850: je 0x1103788e */
L_11037852:
    /* cmp ecx, 0x100u */ /* 0x11037852: cmp ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103785E; /* 0x11037858: jne 0x1103785e */
L_1103785A:
    /* test LO8(edx), LO8(edx) */ /* 0x1103785A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103788E; /* 0x1103785C: jne 0x1103788e */
L_1103785E:
    PUSH32(esp, eax); /* 0x1103785E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x1103785F: push dword ptr [ebp - 0x84] */
    eax = ebp + (-0x98); /* 0x11037865: lea eax, [ebp - 0x98] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103786B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1103786E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11037871: push eax */
    RECOMP_CALL(sub_11037B2C); /* 0x11037872: call 0x11037b2c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x80)); /* 0x11037877: mov ecx, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1103787A: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x78)) = MEM32(ebp + (-0x78)) & 0; /* 0x1103787D: and dword ptr [ebp - 0x78], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax); /* 0x11037881: mov edx, dword ptr [eax] */
    MEM32(ebp + 0xC) = edx; /* 0x11037883: mov dword ptr [ebp + 0xc], edx */
    esi = MEM32(eax + 0x4); /* 0x11037886: mov esi, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = esi; /* 0x11037889: mov dword ptr [ebp + 0x10], esi */
    goto L_11037894; /* 0x1103788C: jmp 0x11037894 */
L_1103788E:
    esi = MEM32(ebp + 0x10); /* 0x1103788E: mov esi, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x11037891: mov edx, dword ptr [ebp + 0xc] */
L_11037894:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11037894: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x7C)) = eax; /* 0x11037896: mov dword ptr [ebp - 0x7c], eax */
L_11037899:
    eax = (int32_t)(int8_t)MEM8(ebp + eax + (-0x90)); /* 0x11037899: movsx eax, byte ptr [ebp + eax - 0x90] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x110378A1: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11037A23; /* 0x110378A4: je 0x11037a23 */
L_110378AA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x110378AA: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_11037A08; /* 0x110378AD: je 0x11037a08 */
L_110378B3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x110378B3: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_110379E4; /* 0x110378B6: je 0x110379e4 */
L_110378BC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x4Bu; /* 0x110378BC: sub eax, 0x4b */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_110378CE; /* 0x110378BF: je 0x110378ce */
L_110378C1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x110378C1: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x110378C2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_11037A55; /* 0x110378C3: je 0x11037a55 */
L_110378C9:
    goto L_11037A89; /* 0x110378C9: jmp 0x11037a89 */
L_110378CE:
    /* test edi, edi */ /* 0x110378CE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110378F8; /* 0x110378D0: jne 0x110378f8 */
L_110378D2:
    /* cmp MEM32(ebp + 0x38), 0x10u */ /* 0x110378D2: cmp dword ptr [ebp + 0x38], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x24); /* 0x110378D6: mov eax, dword ptr [ebp + 0x24] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110378DE; /* 0x110378D9: jae 0x110378de */
L_110378DB:
    eax = ebp + 0x24; /* 0x110378DB: lea eax, [ebp + 0x24] */
L_110378DE:
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x110378DE: push dword ptr [ebp + 0x34] */
    PUSH32(esp, eax); /* 0x110378E1: push eax */
    eax = ebp + (-0xEC); /* 0x110378E2: lea eax, [ebp - 0xec] */
L_110378E8:
    PUSH32(esp, esi); /* 0x110378E8: push esi */
    PUSH32(esp, edx); /* 0x110378E9: push edx */
L_110378EA:
    PUSH32(esp, eax); /* 0x110378EA: push eax */
    RECOMP_CALL(sub_110375A9); /* 0x110378EB: call 0x110375a9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x110378F0: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_11037A7B; /* 0x110378F3: jmp 0x11037a7b */
L_110378F8:
    /* cmp MEM32(ebp + 0x34), edi */ /* 0x110378F8: cmp dword ptr [ebp + 0x34], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x34)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_11037974; /* 0x110378FB: ja 0x11037974 */
L_110378FD:
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x110378FD: push dword ptr [ebp - 0x8c] */
    ecx = ebp + 0xC; /* 0x11037903: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_1101776A); /* 0x11037906: call 0x1101776a */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x1103790B: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x1103790D: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1103790F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0xA0)) = (uint8_t)(LO8(eax)); /* 0x11037912: mov byte ptr [ebp - 0xa0], al */
    ecx = ebp + 0xC; /* 0x11037918: lea ecx, [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x1103791B: push dword ptr [ebp - 0xa0] */
    RECOMP_CALL(sub_1101776A); /* 0x11037921: call 0x1101776a */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11037926: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x34); /* 0x11037928: sub eax, dword ptr [ebp + 0x34] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1103792B: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x1103792C: push dword ptr [ebp - 0x8c] */
    eax = ebp + (-0xD4); /* 0x11037932: lea eax, [ebp - 0xd4] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11037938: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1103793B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1103793E: push eax */
    RECOMP_CALL(sub_11037B2C); /* 0x1103793F: call 0x11037b2c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x24); /* 0x11037944: mov ecx, dword ptr [ebp + 0x24] */
    edx = eax; /* 0x11037947: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11037949: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x38), 0x10u */ /* 0x1103794C: cmp dword ptr [ebp + 0x38], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edx); /* 0x11037950: mov eax, dword ptr [edx] */
    MEM32(ebp + 0xC) = eax; /* 0x11037952: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(edx + 0x4); /* 0x11037955: mov eax, dword ptr [edx + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x11037958: mov dword ptr [ebp + 0x10], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11037960; /* 0x1103795B: jae 0x11037960 */
L_1103795D:
    ecx = ebp + 0x24; /* 0x1103795D: lea ecx, [ebp + 0x24] */
L_11037960:
    PUSH32(esp, MEM32(ebp + 0x34)); /* 0x11037960: push dword ptr [ebp + 0x34] */
    eax = ebp + (-0xC4); /* 0x11037963: lea eax, [ebp - 0xc4] */
    PUSH32(esp, ecx); /* 0x11037969: push ecx */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x1103796A: push dword ptr [edx + 4] */
    PUSH32(esp, MEM32(edx)); /* 0x1103796D: push dword ptr [edx] */
    RECOMP_BACKEDGE();
    goto L_110378EA; /* 0x1103796F: jmp 0x110378ea */
L_11037974:
    /* cmp MEM32(ebp + 0x38), 0x10u */ /* 0x11037974: cmp dword ptr [ebp + 0x38], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x24); /* 0x11037978: mov ecx, dword ptr [ebp + 0x24] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11037980; /* 0x1103797B: jae 0x11037980 */
L_1103797D:
    ecx = ebp + 0x24; /* 0x1103797D: lea ecx, [ebp + 0x24] */
L_11037980:
    eax = MEM32(ebp + 0x34); /* 0x11037980: mov eax, dword ptr [ebp + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x11037983: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x11037985: push eax */
    PUSH32(esp, ecx); /* 0x11037986: push ecx */
    PUSH32(esp, esi); /* 0x11037987: push esi */
    PUSH32(esp, edx); /* 0x11037988: push edx */
    eax = ebp + (-0xCC); /* 0x11037989: lea eax, [ebp - 0xcc] */
    PUSH32(esp, eax); /* 0x1103798F: push eax */
    RECOMP_CALL(sub_110375A9); /* 0x11037990: call 0x110375a9 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x11037995: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11037997: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x1103799A: mov eax, dword ptr [ecx] */
    MEM32(ebp + 0xC) = eax; /* 0x1103799C: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ecx + 0x4); /* 0x1103799F: mov eax, dword ptr [ecx + 4] */
    ecx = ebx; /* 0x110379A2: mov ecx, ebx */
    MEM32(ebp + 0x10) = eax; /* 0x110379A4: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ebx); /* 0x110379A7: mov eax, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x110379A9: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0xA8)) = (uint8_t)(LO8(eax)); /* 0x110379AC: mov byte ptr [ebp - 0xa8], al */
    ecx = ebp + 0xC; /* 0x110379B2: lea ecx, [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0xA8))); /* 0x110379B5: push dword ptr [ebp - 0xa8] */
    RECOMP_CALL(sub_1101776A); /* 0x110379BB: call 0x1101776a */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x38), 0x10u */ /* 0x110379C0: cmp dword ptr [ebp + 0x38], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x24); /* 0x110379C4: mov eax, dword ptr [ebp + 0x24] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110379CC; /* 0x110379C7: jae 0x110379cc */
L_110379C9:
    eax = ebp + 0x24; /* 0x110379C9: lea eax, [ebp + 0x24] */
L_110379CC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x110379CC: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x34); /* 0x110379CE: add eax, dword ptr [ebp + 0x34] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x110379D1: push edi */
    PUSH32(esp, eax); /* 0x110379D2: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x110379D3: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0xDC); /* 0x110379D6: lea eax, [ebp - 0xdc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110379DC: push dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_110378EA; /* 0x110379DF: jmp 0x110378ea */
L_110379E4:
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x110379E4: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11037A89; /* 0x110379E8: jbe 0x11037a89 */
L_110379EE:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x110379EE: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x28)); /* 0x110379F2: mov eax, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_110379FA; /* 0x110379F5: jae 0x110379fa */
L_110379F7:
    eax = ebp + (-0x28); /* 0x110379F7: lea eax, [ebp - 0x28] */
L_110379FA:
    PUSH32(esp, 1); /* 0x110379FA: push 1 */
    PUSH32(esp, eax); /* 0x110379FC: push eax */
    eax = ebp + (-0xBC); /* 0x110379FD: lea eax, [ebp - 0xbc] */
    RECOMP_BACKEDGE();
    goto L_110378E8; /* 0x11037A03: jmp 0x110378e8 */
L_11037A08:
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x11037A08: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x58)); /* 0x11037A0C: mov eax, dword ptr [ebp - 0x58] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11037A14; /* 0x11037A0F: jae 0x11037a14 */
L_11037A11:
    eax = ebp + (-0x58); /* 0x11037A11: lea eax, [ebp - 0x58] */
L_11037A14:
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x11037A14: push dword ptr [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x11037A17: push eax */
    eax = ebp + (-0xE4); /* 0x11037A18: lea eax, [ebp - 0xe4] */
    RECOMP_BACKEDGE();
    goto L_110378E8; /* 0x11037A1E: jmp 0x110378e8 */
L_11037A23:
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x11037A23: push dword ptr [ebp - 0x84] */
    ecx = ebp + (-0x98); /* 0x11037A29: lea ecx, [ebp - 0x98] */
    MEM32(ebp + (-0x98)) = edx; /* 0x11037A2F: mov dword ptr [ebp - 0x98], edx */
    MEM32(ebp + (-0x94)) = esi; /* 0x11037A35: mov dword ptr [ebp - 0x94], esi */
    RECOMP_CALL(sub_1101776A); /* 0x11037A3B: call 0x1101776a */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x98)); /* 0x11037A40: mov edx, dword ptr [ebp - 0x98] */
    esi = MEM32(ebp + (-0x94)); /* 0x11037A46: mov esi, dword ptr [ebp - 0x94] */
    ecx = MEM32(ebp + (-0x80)); /* 0x11037A4C: mov ecx, dword ptr [ebp - 0x80] */
    MEM32(ebp + 0xC) = edx; /* 0x11037A4F: mov dword ptr [ebp + 0xc], edx */
    MEM32(ebp + 0x10) = esi; /* 0x11037A52: mov dword ptr [ebp + 0x10], esi */
L_11037A55:
    /* cmp ecx, 0x100u */ /* 0x11037A55: cmp ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11037A89; /* 0x11037A5B: jne 0x11037a89 */
L_11037A5D:
    PUSH32(esp, MEM32(ebp + (-0x78))); /* 0x11037A5D: push dword ptr [ebp - 0x78] */
    eax = ebp + (-0xB4); /* 0x11037A60: lea eax, [ebp - 0xb4] */
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x11037A66: push dword ptr [ebp - 0x84] */
    PUSH32(esp, esi); /* 0x11037A6C: push esi */
    PUSH32(esp, edx); /* 0x11037A6D: push edx */
    PUSH32(esp, eax); /* 0x11037A6E: push eax */
    RECOMP_CALL(sub_11037B2C); /* 0x11037A6F: call 0x11037b2c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11037A74: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x78)) = MEM32(ebp + (-0x78)) & 0; /* 0x11037A77: and dword ptr [ebp - 0x78], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11037A7B:
    edx = MEM32(eax); /* 0x11037A7B: mov edx, dword ptr [eax] */
    ecx = MEM32(ebp + (-0x80)); /* 0x11037A7D: mov ecx, dword ptr [ebp - 0x80] */
    MEM32(ebp + 0xC) = edx; /* 0x11037A80: mov dword ptr [ebp + 0xc], edx */
    esi = MEM32(eax + 0x4); /* 0x11037A83: mov esi, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = esi; /* 0x11037A86: mov dword ptr [ebp + 0x10], esi */
L_11037A89:
    eax = MEM32(ebp + (-0x7C)); /* 0x11037A89: mov eax, dword ptr [ebp - 0x7c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11037A8C: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x7C)) = eax; /* 0x11037A8D: mov dword ptr [ebp - 0x7c], eax */
    /* cmp eax, 4 */ /* 0x11037A90: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11037899; /* 0x11037A93: jb 0x11037899 */
L_11037A99:
    /* cmp MEM32(ebp + (-0x18)), 1 */ /* 0x11037A99: cmp dword ptr [ebp - 0x18], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_11037ACE; /* 0x11037A9D: jbe 0x11037ace */
L_11037A9F:
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x11037A9F: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x11037AA3: mov ecx, dword ptr [ebp - 0x28] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11037AAB; /* 0x11037AA6: jae 0x11037aab */
L_11037AA8:
    ecx = ebp + (-0x28); /* 0x11037AA8: lea ecx, [ebp - 0x28] */
L_11037AAB:
    eax = MEM32(ebp + (-0x18)); /* 0x11037AAB: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11037AAE: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x11037AAF: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x11037AB0: push eax */
    PUSH32(esp, ecx); /* 0x11037AB1: push ecx */
    PUSH32(esp, esi); /* 0x11037AB2: push esi */
    PUSH32(esp, edx); /* 0x11037AB3: push edx */
    eax = ebp + (-0xB4); /* 0x11037AB4: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x11037ABA: push eax */
    RECOMP_CALL(sub_110375A9); /* 0x11037ABB: call 0x110375a9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11037AC0: add esp, 0x14 */
    _flag_k = FK_ADD;
    edx = MEM32(eax); /* 0x11037AC3: mov edx, dword ptr [eax] */
    MEM32(ebp + 0xC) = edx; /* 0x11037AC5: mov dword ptr [ebp + 0xc], edx */
    esi = MEM32(eax + 0x4); /* 0x11037AC8: mov esi, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = esi; /* 0x11037ACB: mov dword ptr [ebp + 0x10], esi */
L_11037ACE:
    PUSH32(esp, MEM32(ebp + (-0x78))); /* 0x11037ACE: push dword ptr [ebp - 0x78] */
    eax = MEM32(ebp + (-0x88)); /* 0x11037AD1: mov eax, dword ptr [ebp - 0x88] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11037AD7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x11037AD9: push dword ptr [ebp - 0x84] */
    PUSH32(esp, esi); /* 0x11037ADF: push esi */
    esi = MEM32(ebp + (-0x9C)); /* 0x11037AE0: mov esi, dword ptr [ebp - 0x9c] */
    PUSH32(esp, edx); /* 0x11037AE6: push edx */
    PUSH32(esp, esi); /* 0x11037AE7: push esi */
    MEM32(eax + 0x20) = ebx; /* 0x11037AE8: mov dword ptr [eax + 0x20], ebx */
    MEM32(eax + 0x24) = ebx; /* 0x11037AEB: mov dword ptr [eax + 0x24], ebx */
    RECOMP_CALL(sub_11037B2C); /* 0x11037AEE: call 0x11037b2c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11037AF3: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x58); /* 0x11037AF6: lea ecx, [ebp - 0x58] */
    PUSH32(esp, ebx); /* 0x11037AF9: push ebx */
    PUSH32(esp, 1); /* 0x11037AFA: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x11037AFC: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11037B01: push ebx */
    PUSH32(esp, 1); /* 0x11037B02: push 1 */
    ecx = ebp + (-0x28); /* 0x11037B04: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x11037B07: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11037B0C: push ebx */
    PUSH32(esp, 1); /* 0x11037B0D: push 1 */
    ecx = ebp + (-0x40); /* 0x11037B0F: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_11010630); /* 0x11037B12: call 0x11010630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x11037B17: push ebx */
    PUSH32(esp, 1); /* 0x11037B18: push 1 */
    ecx = ebp + 0x24; /* 0x11037B1A: lea ecx, [ebp + 0x24] */
    RECOMP_CALL(sub_11010630); /* 0x11037B1D: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11037B22: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x11037B24: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 60; { RECOMP_REGS_OUT(); return; } /* 0x11037B29: ret 0x38 */
    RECOMP_REGS_OUT();
}

void sub_11037B2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11037B2Cu);

L_11037B2C:
    PUSH32(esp, ebp); /* 0x11037B2C: push ebp */
    ebp = esp; /* 0x11037B2D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11037B2F: push esi */
    esi = MEM32(ebp + 0x18); /* 0x11037B30: mov esi, dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x11037B33: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11037B45; /* 0x11037B35: je 0x11037b45 */
L_11037B37:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11037B37: push dword ptr [ebp + 0x14] */
    ecx = ebp + 0xC; /* 0x11037B3A: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_1101776A); /* 0x11037B3D: call 0x1101776a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x11037B42: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_11037B37; /* 0x11037B43: jne 0x11037b37 */
L_11037B45:
    eax = MEM32(ebp + 0x8); /* 0x11037B45: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x11037B48: mov ecx, dword ptr [ebp + 0xc] */
    esi = POP32_VAL(esp); /* 0x11037B4B: pop esi */
    MEM32(eax) = ecx; /* 0x11037B4C: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11037B4E: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x11037B51: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x11037B54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11037B55: ret  */
    RECOMP_REGS_OUT();
}

void sub_11037B56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11037B56u);

L_11037B56:
    PUSH32(esp, ebp); /* 0x11037B56: push ebp */
    ebp = esp; /* 0x11037B57: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11037B59: push ecx */
    edx = MEM32(ecx); /* 0x11037B5A: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11037B5C: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11037B5F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x11037B63: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11037B66: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x11037B69: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11037B6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11037B6C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11037B6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11037B6Fu);

L_11037B6F:
    PUSH32(esp, ebp); /* 0x11037B6F: push ebp */
    ebp = esp; /* 0x11037B70: mov ebp, esp */
    eax = ecx + 0x8; /* 0x11037B72: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x11037B75: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11037B76: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11037B79: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11037B7C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11037B7F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1102D913); /* 0x11037B82: call 0x1102d913 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x11037B87: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11037B89: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x11037B8C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11037B95; /* 0x11037B8E: jns 0x11037b95 */
L_11037B90:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x11037B90: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11037B9C; /* 0x11037B93: jmp 0x11037b9c */
L_11037B95:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11037B95: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x11037B97: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x11037B99: setne al */
L_11037B9C:
    ebp = POP32_VAL(esp); /* 0x11037B9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x11037B9D: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_11037BA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11037BA0u);

L_11037BA0:
    PUSH32(esp, ebp); /* 0x11037BA0: push ebp */
    ebp = esp; /* 0x11037BA1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11037BA3: push ecx */
    PUSH32(esp, MEM32(ecx + 0x10)); /* 0x11037BA4: push dword ptr [ecx + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x11037BA7: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11037BAA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_11010191); /* 0x11037BAE: call 0x11010191 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11037BB3: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x11037BB6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11037BB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11037BB9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11037BBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11037BBCu);

L_11037BBC:
    PUSH32(esp, ebp); /* 0x11037BBC: push ebp */
    ebp = esp; /* 0x11037BBD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11037BBF: push ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x11037BC0: push dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x8); /* 0x11037BC3: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11037BC6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1101016B); /* 0x11037BCA: call 0x1101016b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11037BCF: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x11037BD2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11037BD4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x11037BD5: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_11037BD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11037BD8u);

L_11037BD8:
    PUSH32(esp, 0x34u); /* 0x11037BD8: push 0x34 */
    eax = 0x1103F55Du; /* 0x11037BDA: mov eax, 0x1103f55d */
    RECOMP_CALL(sub_1103B3A5); /* 0x11037BDF: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x28); /* 0x11037BE4: mov edx, dword ptr [ebp + 0x28] */
    eax = MEM32(ebp + 0x20); /* 0x11037BE7: mov eax, dword ptr [ebp + 0x20] */
    ebx = MEM32(ebp + 0x8); /* 0x11037BEA: mov ebx, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x24); /* 0x11037BED: mov esi, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x3C)) = edx; /* 0x11037BF0: mov dword ptr [ebp - 0x3c], edx */
    edx = ebp + (-0x1C); /* 0x11037BF3: lea edx, [ebp - 0x1c] */
    PUSH32(esp, edx); /* 0x11037BF6: push edx */
    PUSH32(esp, eax); /* 0x11037BF7: push eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11037BF8: push dword ptr [ebp + 0x1c] */
    eax = ebp + 0x14; /* 0x11037BFB: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11037BFE: push eax */
    eax = ebp + 0xC; /* 0x11037BFF: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11037C02: push eax */
    eax = ebp + (-0x34); /* 0x11037C03: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x11037C06: push eax */
    RECOMP_CALL(sub_110366A0); /* 0x11037C07: call 0x110366a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11037C0C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x14; /* 0x11037C10: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11037C13: push eax */
    ecx = ebp + 0xC; /* 0x11037C14: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_11027871); /* 0x11037C17: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11037C1C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11037C23; /* 0x11037C1E: je 0x11037c23 */
L_11037C20:
    _flag_a = (uint32_t)((MEM32(esi) | 1)); _flag_b = (uint32_t)((MEM32(esi) | 1));
    MEM32(esi) = MEM32(esi) | 1; /* 0x11037C20: or dword ptr [esi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11037C23:
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x11037C23: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11037C60; /* 0x11037C27: je 0x11037c60 */
L_11037C29:
    /* cmp MEM32(ebp + (-0x20)), 0x10u */ /* 0x11037C29: cmp dword ptr [ebp - 0x20], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x34)); /* 0x11037C2D: mov edi, dword ptr [ebp - 0x34] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11037C35; /* 0x11037C30: jae 0x11037c35 */
L_11037C32:
    edi = ebp + (-0x34); /* 0x11037C32: lea edi, [ebp - 0x34] */
L_11037C35:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0; /* 0x11037C35: and dword ptr [ebp - 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x38); /* 0x11037C39: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11037C3C: push eax */
    PUSH32(esp, 0); /* 0x11037C3D: push 0 */
    eax = ebp + (-0x40); /* 0x11037C3F: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x11037C42: push eax */
    PUSH32(esp, edi); /* 0x11037C43: push edi */
    RECOMP_CALL(sub_11030BB4); /* 0x11037C44: call 0x11030bb4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11037C49: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x40)), edi */ /* 0x11037C4C: cmp dword ptr [ebp - 0x40], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11037C5E; /* 0x11037C4F: je 0x11037c5e */
L_11037C51:
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x11037C51: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11037C5E; /* 0x11037C55: jne 0x11037c5e */
L_11037C57:
    eax = MEM32(ebp + (-0x3C)); /* 0x11037C57: mov eax, dword ptr [ebp - 0x3c] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x11037C5A: fstp qword ptr [eax] */
    goto L_11037C63; /* 0x11037C5C: jmp 0x11037c63 */
L_11037C5E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11037C5E: fstp st(0) */
L_11037C60:
    _flag_a = (uint32_t)((MEM32(esi) | 2)); _flag_b = (uint32_t)((MEM32(esi) | 2));
    MEM32(esi) = MEM32(esi) | 2; /* 0x11037C60: or dword ptr [esi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11037C63:
    ecx = MEM32(ebp + 0xC); /* 0x11037C63: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebx) = ecx; /* 0x11037C66: mov dword ptr [ebx], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11037C68: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x11037C6B: push 0 */
    MEM32(ebx + 0x4) = ecx; /* 0x11037C6D: mov dword ptr [ebx + 4], ecx */
    ecx = ebp + (-0x34); /* 0x11037C70: lea ecx, [ebp - 0x34] */
    PUSH32(esp, 1); /* 0x11037C73: push 1 */
    RECOMP_CALL(sub_11010630); /* 0x11037C75: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x11037C7A: mov eax, ebx */
    RECOMP_CALL(sub_1103B354); /* 0x11037C7C: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x11037C81: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_11037C84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11037C84u);

L_11037C84:
    PUSH32(esp, 0x2Cu); /* 0x11037C84: push 0x2c */
    eax = 0x1103F58Au; /* 0x11037C86: mov eax, 0x1103f58a */
    RECOMP_CALL(sub_1103B3A5); /* 0x11037C8B: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11037C90: mov eax, dword ptr [ebp + 8] */
    edx = ebp + (-0x1C); /* 0x11037C93: lea edx, [ebp - 0x1c] */
    edi = MEM32(ebp + 0x24); /* 0x11037C96: mov edi, dword ptr [ebp + 0x24] */
    esi = MEM32(ebp + 0x28); /* 0x11037C99: mov esi, dword ptr [ebp + 0x28] */
    PUSH32(esp, edx); /* 0x11037C9C: push edx */
    MEM32(ebp + (-0x38)) = eax; /* 0x11037C9D: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(ebp + 0x20); /* 0x11037CA0: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x11037CA3: push eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11037CA4: push dword ptr [ebp + 0x1c] */
    eax = ebp + 0x14; /* 0x11037CA7: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x11037CAA: push eax */
    eax = ebp + 0xC; /* 0x11037CAB: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11037CAE: push eax */
    eax = ebp + (-0x34); /* 0x11037CAF: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x11037CB2: push eax */
    RECOMP_CALL(sub_110366A0); /* 0x11037CB3: call 0x110366a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11037CB8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x14; /* 0x11037CBC: lea eax, [ebp + 0x14] */
    ebx = MEM32(ebp + (-0x24)); /* 0x11037CBF: mov ebx, dword ptr [ebp - 0x24] */
    ecx = ebp + 0xC; /* 0x11037CC2: lea ecx, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11037CC5: push eax */
    RECOMP_CALL(sub_11027871); /* 0x11037CC6: call 0x11027871 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x11037CCB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11037CD2; /* 0x11037CCD: je 0x11037cd2 */
L_11037CCF:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x11037CCF: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_11037CD2:
    /* test ebx, ebx */ /* 0x11037CD2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11037CDB; /* 0x11037CD4: jne 0x11037cdb */
L_11037CD6:
    _flag_a = (uint32_t)((MEM32(edi) | 2)); _flag_b = (uint32_t)((MEM32(edi) | 2));
    MEM32(edi) = MEM32(edi) | 2; /* 0x11037CD6: or dword ptr [edi], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11037D34; /* 0x11037CD9: jmp 0x11037d34 */
L_11037CDB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11037CDB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x11037CDD: mov ecx, esi */
    PUSH32(esp, edi); /* 0x11037CDF: push edi */
    PUSH32(esp, ebx); /* 0x11037CE0: push ebx */
    RECOMP_CALL(sub_110380D3); /* 0x11037CE1: call 0x110380d3 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x34)); /* 0x11037CE6: mov eax, dword ptr [ebp - 0x34] */
    PUSH32(esp, 0x10u); /* 0x11037CE9: push 0x10 */
    edx = POP32_VAL(esp); /* 0x11037CEB: pop edx */
    /* cmp MEM32(ebp + (-0x20)), edx */ /* 0x11037CEC: cmp dword ptr [ebp - 0x20], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11037CF4; /* 0x11037CEF: jae 0x11037cf4 */
L_11037CF1:
    eax = ebp + (-0x34); /* 0x11037CF1: lea eax, [ebp - 0x34] */
L_11037CF4:
    /* cmp MEM8(eax), 0x2Du */ /* 0x11037CF4: cmp byte ptr [eax], 0x2d */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11037D30; /* 0x11037CF7: jne 0x11037d30 */
L_11037CF9:
    /* cmp MEM32(esi + 0x14), edx */ /* 0x11037CF9: cmp dword ptr [esi + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11037D02; /* 0x11037CFC: jb 0x11037d02 */
L_11037CFE:
    ecx = MEM32(esi); /* 0x11037CFE: mov ecx, dword ptr [esi] */
    goto L_11037D04; /* 0x11037D00: jmp 0x11037d04 */
L_11037D02:
    ecx = esi; /* 0x11037D02: mov ecx, esi */
L_11037D04:
    SET_LO8(eax, MEM8(ebp + (-0x12))); /* 0x11037D04: mov al, byte ptr [ebp - 0x12] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11037D07: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x11037D09: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11037D0B: inc edi */
    _flag_k = FK_INC;
    goto L_11037D30; /* 0x11037D0C: jmp 0x11037d30 */
L_11037D0E:
    eax = MEM32(ebp + (-0x34)); /* 0x11037D0E: mov eax, dword ptr [ebp - 0x34] */
    /* cmp MEM32(ebp + (-0x20)), edx */ /* 0x11037D11: cmp dword ptr [ebp - 0x20], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11037D19; /* 0x11037D14: jae 0x11037d19 */
L_11037D16:
    eax = ebp + (-0x34); /* 0x11037D16: lea eax, [ebp - 0x34] */
L_11037D19:
    /* cmp MEM32(esi + 0x14), edx */ /* 0x11037D19: cmp dword ptr [esi + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11037D22; /* 0x11037D1C: jb 0x11037d22 */
L_11037D1E:
    ecx = MEM32(esi); /* 0x11037D1E: mov ecx, dword ptr [esi] */
    goto L_11037D24; /* 0x11037D20: jmp 0x11037d24 */
L_11037D22:
    ecx = esi; /* 0x11037D22: mov ecx, esi */
L_11037D24:
    eax = (int32_t)(int8_t)MEM8(eax + edi); /* 0x11037D24: movsx eax, byte ptr [eax + edi] */
    SET_LO8(eax, MEM8(ebp + eax + (-0x4C))); /* 0x11037D28: mov al, byte ptr [ebp + eax - 0x4c] */
    MEM8(ecx + edi) = (uint8_t)(LO8(eax)); /* 0x11037D2C: mov byte ptr [ecx + edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11037D2F: inc edi */
    _flag_k = FK_INC;
L_11037D30:
    /* cmp edi, ebx */ /* 0x11037D30: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11037D0E; /* 0x11037D32: jb 0x11037d0e */
L_11037D34:
    ebx = MEM32(ebp + (-0x38)); /* 0x11037D34: mov ebx, dword ptr [ebp - 0x38] */
    ecx = MEM32(ebp + 0xC); /* 0x11037D37: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x11037D3A: push 0 */
    PUSH32(esp, 1); /* 0x11037D3C: push 1 */
    MEM32(ebx) = ecx; /* 0x11037D3E: mov dword ptr [ebx], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11037D40: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = ecx; /* 0x11037D43: mov dword ptr [ebx + 4], ecx */
    ecx = ebp + (-0x34); /* 0x11037D46: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_11010630); /* 0x11037D49: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x11037D4E: mov eax, ebx */
    RECOMP_CALL(sub_1103B354); /* 0x11037D50: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x11037D55: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_11037D58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11037D58u);

L_11037D58:
    PUSH32(esp, ebp); /* 0x11037D58: push ebp */
    ebp = esp; /* 0x11037D59: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11037D5B: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x8); /* 0x11037D5E: sub eax, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x11037D61: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11037D62: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11033A40); /* 0x11037D65: call 0x11033a40 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11037D6A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11037D6B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x11037D6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11037D6D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11037D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11037D70u);

L_11037D70:
    PUSH32(esp, ebp); /* 0x11037D70: push ebp */
    ebp = esp; /* 0x11037D71: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11037D73: push ecx */
    PUSH32(esp, MEM32(ecx + 0x18)); /* 0x11037D74: push dword ptr [ecx + 0x18] */
    ecx = MEM32(ebp + 0x8); /* 0x11037D77: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11037D7A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_11010191); /* 0x11037D7E: call 0x11010191 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11037D83: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x11037D86: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11037D88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11037D89: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11037D8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11037D8Cu);

L_11037D8C:
    PUSH32(esp, ebp); /* 0x11037D8C: push ebp */
    ebp = esp; /* 0x11037D8D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11037D8F: push ecx */
    PUSH32(esp, MEM32(ecx + 0x14)); /* 0x11037D90: push dword ptr [ecx + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x11037D93: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11037D96: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_11010191); /* 0x11037D9A: call 0x11010191 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11037D9F: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x11037DA2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11037DA4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11037DA5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11037DA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11037DA8u);

L_11037DA8:
    PUSH32(esp, 0x3Cu); /* 0x11037DA8: push 0x3c */
    eax = 0x1103F5BFu; /* 0x11037DAA: mov eax, 0x1103f5bf */
    RECOMP_CALL(sub_1103B3A5); /* 0x11037DAF: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x48)) = ecx; /* 0x11037DB4: mov dword ptr [ebp - 0x48], ecx */
    eax = MEM32(ebp + 0x8); /* 0x11037DB7: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x38); /* 0x11037DBA: lea ecx, [ebp - 0x38] */
    edi = MEM32(ebp + 0x20); /* 0x11037DBD: mov edi, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x40)) = eax; /* 0x11037DC0: mov dword ptr [ebp - 0x40], eax */
    eax = MEM32(ebp + 0x18); /* 0x11037DC3: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x11037DC6: push ecx */
    ecx = eax; /* 0x11037DC7: mov ecx, eax */
    MEM32(ebp + (-0x44)) = eax; /* 0x11037DC9: mov dword ptr [ebp - 0x44], eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11037DCC: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11037DD1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11037DD5: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x11037DD6: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11037DDB: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x11037DDF: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x11037DE1: pop ecx */
    ecx = ebp + (-0x38); /* 0x11037DE2: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_1100E431); /* 0x11037DE5: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x11037DEA: mov edx, dword ptr [esi] */
    eax = ebp + (-0x1C); /* 0x11037DEC: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11037DEF: push eax */
    PUSH32(esp, 0x11003767u); /* 0x11037DF0: push 0x11003767 */
    PUSH32(esp, 0x1100375Cu); /* 0x11037DF5: push 0x1100375c */
    ecx = esi; /* 0x11037DFA: mov ecx, esi */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x11037DFC: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11037DFF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x3C)) = (uint8_t)(0); /* 0x11037E01: mov byte ptr [ebp - 0x3c], 0 */
    /* cmp MEM32(edi + 0x10), ebx */ /* 0x11037E05: cmp dword ptr [edi + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11037E24; /* 0x11037E08: je 0x11037e24 */
L_11037E0A:
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x11037E0A: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11037E14; /* 0x11037E0E: jb 0x11037e14 */
L_11037E10:
    eax = MEM32(edi); /* 0x11037E10: mov eax, dword ptr [edi] */
    goto L_11037E16; /* 0x11037E12: jmp 0x11037e16 */
L_11037E14:
    eax = edi; /* 0x11037E14: mov eax, edi */
L_11037E16:
    SET_LO8(eax, MEM8(eax)); /* 0x11037E16: mov al, byte ptr [eax] */
    /* cmp LO8(eax), MEM8(ebp + (-0x12)) */ /* 0x11037E18: cmp al, byte ptr [ebp - 0x12] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x12))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11037E24; /* 0x11037E1B: jne 0x11037e24 */
L_11037E1D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x11037E1D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x3C)) = (uint8_t)(1); /* 0x11037E1F: mov byte ptr [ebp - 0x3c], 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x11037E23: inc ebx */
    _flag_k = FK_INC;
L_11037E24:
    esi = ebx; /* 0x11037E24: mov esi, ebx */
    /* cmp ebx, MEM32(edi + 0x10) */ /* 0x11037E26: cmp ebx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11037E52; /* 0x11037E29: jae 0x11037e52 */
L_11037E2B:
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x11037E2B: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11037E35; /* 0x11037E2F: jb 0x11037e35 */
L_11037E31:
    eax = MEM32(edi); /* 0x11037E31: mov eax, dword ptr [edi] */
    goto L_11037E37; /* 0x11037E33: jmp 0x11037e37 */
L_11037E35:
    eax = edi; /* 0x11037E35: mov eax, edi */
L_11037E37:
    eax = (uint32_t)MEM8(eax + esi); /* 0x11037E37: movzx eax, byte ptr [eax + esi] */
    PUSH32(esp, eax); /* 0x11037E3B: push eax */
    eax = ebp + (-0x1C); /* 0x11037E3C: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11037E3F: push eax */
    RECOMP_CALL(sub_1101501B); /* 0x11037E40: call 0x1101501b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11037E45: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11037E46: pop ecx */
    /* cmp eax, 0xAu */ /* 0x11037E47: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11037E52; /* 0x11037E4A: jae 0x11037e52 */
L_11037E4C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11037E4C: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x10) */ /* 0x11037E4D: cmp esi, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11037E2B; /* 0x11037E50: jb 0x11037e2b */
L_11037E52:
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x11037E52: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_11037E5A; /* 0x11037E56: jb 0x11037e5a */
L_11037E58:
    edi = MEM32(edi); /* 0x11037E58: mov edi, dword ptr [edi] */
L_11037E5A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x11037E5A: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + ebx; /* 0x11037E5E: lea eax, [edi + ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x11037E61: sub esi, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = 0xFu; /* 0x11037E63: mov dword ptr [ebp - 0x20], 0xf */
    PUSH32(esp, esi); /* 0x11037E6A: push esi */
    PUSH32(esp, eax); /* 0x11037E6B: push eax */
    ecx = ebp + (-0x34); /* 0x11037E6C: lea ecx, [ebp - 0x34] */
    MEM8(ebp + (-0x34)) = (uint8_t)(0); /* 0x11037E6F: mov byte ptr [ebp - 0x34], 0 */
    RECOMP_CALL(sub_11010AB4); /* 0x11037E73: call 0x11010ab4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11037E78: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11037E7A: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x11037E7B: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x11037E7F: mov dword ptr [ebp - 4], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_11037E90; /* 0x11037E82: jne 0x11037e90 */
L_11037E84:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x11037E84: push dword ptr [ebp - 0x1c] */
    ecx = ebp + (-0x34); /* 0x11037E87: lea ecx, [ebp - 0x34] */
    PUSH32(esp, edi); /* 0x11037E8A: push edi */
    RECOMP_CALL(sub_11014015); /* 0x11037E8B: call 0x11014015 */
    RECOMP_FLAGS_IN();
L_11037E90:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x11037E90: push dword ptr [ebp - 0x1c] */
    eax = ebp + (-0x34); /* 0x11037E93: lea eax, [ebp - 0x34] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x11037E96: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x11037E99: mov ecx, esp */
    PUSH32(esp, eax); /* 0x11037E9B: push eax */
    RECOMP_CALL(sub_1101016B); /* 0x11037E9C: call 0x1101016b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x11037EA1: push dword ptr [ebp - 0x3c] */
    esi = MEM32(ebp + (-0x40)); /* 0x11037EA4: mov esi, dword ptr [ebp - 0x40] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11037EA7: push dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + (-0x48)); /* 0x11037EAA: mov ecx, dword ptr [ebp - 0x48] */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x11037EAD: push dword ptr [ebp - 0x44] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x11037EB0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11037EB3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11037EB6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11037EB9: push esi */
    RECOMP_CALL(sub_110375DE); /* 0x11037EBA: call 0x110375de */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x11037EBF: push 0 */
    PUSH32(esp, edi); /* 0x11037EC1: push edi */
    ecx = ebp + (-0x34); /* 0x11037EC2: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_11010630); /* 0x11037EC5: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x11037ECA: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x11037ECC: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x11037ED1: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_11037ED4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11037ED4u);

L_11037ED4:
    PUSH32(esp, 0x5Cu); /* 0x11037ED4: push 0x5c */
    eax = 0x1103F5F4u; /* 0x11037ED6: mov eax, 0x1103f5f4 */
    RECOMP_CALL(sub_1103B3A5); /* 0x11037EDB: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x68)) = ecx; /* 0x11037EE0: mov dword ptr [ebp - 0x68], ecx */
    fp_push(0.0); /* 0x11037EE3: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x20)); /* 0x11037EE5: fld qword ptr [ebp + 0x20] */
    eax = MEM32(ebp + 0x18); /* 0x11037EE8: mov eax, dword ptr [ebp + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11037EEB: fcom st(1) */
    esi = MEM32(ebp + 0x8); /* 0x11037EED: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x54)) = eax; /* 0x11037EF0: mov dword ptr [ebp - 0x54], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11037EF3: fnstsw ax */
    MEM8(ebp + (-0x60)) = (uint8_t)(0); /* 0x11037EF5: mov byte ptr [ebp - 0x60], 0 */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11037EF9: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x11037EFB: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11037F06; /* 0x11037EFE: jp 0x11037f06 */
L_11037F00:
    MEM8(ebp + (-0x60)) = (uint8_t)(1); /* 0x11037F00: mov byte ptr [ebp - 0x60], 1 */
    _st[0] = -_st[0]; /* 0x11037F04: fchs  */
L_11037F06:
    fp_push(*(double*)ADDR(0x11002438)); /* 0x11037F06: fld qword ptr [0x11002438] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11037F0C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11037F0E: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11037F10: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11037F12: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11037F3B; /* 0x11037F15: jp 0x11037f3b */
L_11037F17:
    fp_push(*(double*)ADDR(0x11002430)); /* 0x11037F17: fld qword ptr [0x11002430] */
    goto L_11037F21; /* 0x11037F1D: jmp 0x11037f21 */
L_11037F1F:
    fp_xch(1); /* 0x11037F1F: fxch st(1) */
L_11037F21:
    /* cmp edi, 0x1388u */ /* 0x11037F21: cmp edi, 0x1388 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_11037F6C; /* 0x11037F27: jae 0x11037f6c */
L_11037F29:
    _st[2] /= _st[0]; /* 0x11037F29: fdiv st(2), st(0) */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xAu; /* 0x11037F2B: add edi, 0xa */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x11037F2E: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x11037F30: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11037F32: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x11037F34: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11037F1F; /* 0x11037F37: jnp 0x11037f1f */
L_11037F39:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11037F39: fstp st(0) */
L_11037F3B:
    PUSH32(esp, ecx); /* 0x11037F3B: push ecx */
    PUSH32(esp, ecx); /* 0x11037F3C: push ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11037F3D: fstp st(0) */
    eax = ebp + (-0x38); /* 0x11037F3F: lea eax, [ebp - 0x38] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11037F42: fstp qword ptr [esp] */
    PUSH32(esp, 0x11003590u); /* 0x11037F45: push 0x11003590 */
    PUSH32(esp, 0x28u); /* 0x11037F4A: push 0x28 */
    PUSH32(esp, eax); /* 0x11037F4C: push eax */
    RECOMP_ICALL(MEM32(0x11069108)); /* 0x11037F4D: call dword ptr [0x11069108] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x11037F53: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11037F55: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x11037F58: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11037F70; /* 0x11037F5A: jns 0x11037f70 */
L_11037F5C:
    ecx = MEM32(ebp + 0xC); /* 0x11037F5C: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(esi) = ecx; /* 0x11037F5F: mov dword ptr [esi], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x11037F61: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x4) = ecx; /* 0x11037F64: mov dword ptr [esi + 4], ecx */
    goto L_11038028; /* 0x11037F67: jmp 0x11038028 */
L_11037F6C:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11037F6C: fstp st(1) */
    RECOMP_BACKEDGE();
    goto L_11037F3B; /* 0x11037F6E: jmp 0x11037f3b */
L_11037F70:
    ecx = MEM32(ebp + (-0x54)); /* 0x11037F70: mov ecx, dword ptr [ebp - 0x54] */
    eax = ebp + (-0x58); /* 0x11037F73: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x11037F76: push eax */
    RECOMP_CALL(sub_1100F94A); /* 0x11037F77: call 0x1100f94a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11037F7C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x11037F80: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x11037F81: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11037F86: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x11037F8A: pop ecx */
    ecx = ebp + (-0x58); /* 0x11037F8B: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x11037F8E: mov dword ptr [ebp - 0x5c], eax */
    RECOMP_CALL(sub_1100E431); /* 0x11037F91: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x5C)); /* 0x11037F96: mov eax, dword ptr [ebp - 0x5c] */
    ecx = eax; /* 0x11037F99: mov ecx, eax */
    PUSH32(esp, 0x30u); /* 0x11037F9B: push 0x30 */
    edx = MEM32(eax); /* 0x11037F9D: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x20)); /* 0x11037F9F: call dword ptr [edx + 0x20] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x64)) = (uint8_t)(LO8(eax)); /* 0x11037FA2: mov byte ptr [ebp - 0x64], al */
    ecx = ebp + (-0x50); /* 0x11037FA5: lea ecx, [ebp - 0x50] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11037FA8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = 0xFu; /* 0x11037FAA: mov dword ptr [ebp - 0x3c], 0xf */
    PUSH32(esp, eax); /* 0x11037FB1: push eax */
    PUSH32(esp, ebx); /* 0x11037FB2: push ebx */
    MEM32(ebp + (-0x40)) = eax; /* 0x11037FB3: mov dword ptr [ebp - 0x40], eax */
    MEM8(ebp + (-0x50)) = (uint8_t)(LO8(eax)); /* 0x11037FB6: mov byte ptr [ebp - 0x50], al */
    RECOMP_CALL(sub_11014076); /* 0x11037FB9: call 0x11014076 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x3C)), 0x10u */ /* 0x11037FBE: cmp dword ptr [ebp - 0x3c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x50)); /* 0x11037FC2: mov eax, dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x4)) = 1; /* 0x11037FC5: mov dword ptr [ebp - 4], 1 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_11037FD1; /* 0x11037FCC: jae 0x11037fd1 */
L_11037FCE:
    eax = ebp + (-0x50); /* 0x11037FCE: lea eax, [ebp - 0x50] */
L_11037FD1:
    ecx = MEM32(ebp + (-0x5C)); /* 0x11037FD1: mov ecx, dword ptr [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x11037FD4: push eax */
    eax = ebp + (-0x38); /* 0x11037FD5: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x11037FD8: add eax, ebx */
    _flag_k = FK_ADD;
    edx = MEM32(ecx); /* 0x11037FDA: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x11037FDC: push eax */
    eax = ebp + (-0x38); /* 0x11037FDD: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x11037FE0: push eax */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x11037FE1: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x11037FE4: push dword ptr [ebp - 0x64] */
    ecx = ebp + (-0x50); /* 0x11037FE7: lea ecx, [ebp - 0x50] */
    PUSH32(esp, edi); /* 0x11037FEA: push edi */
    RECOMP_CALL(sub_11014015); /* 0x11037FEB: call 0x11014015 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x11037FF0: push dword ptr [ebp - 0x64] */
    eax = ebp + (-0x50); /* 0x11037FF3: lea eax, [ebp - 0x50] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x11037FF6: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x11037FF9: mov ecx, esp */
    PUSH32(esp, eax); /* 0x11037FFB: push eax */
    RECOMP_CALL(sub_1101016B); /* 0x11037FFC: call 0x1101016b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x11038001: push dword ptr [ebp - 0x60] */
    ecx = MEM32(ebp + (-0x68)); /* 0x11038004: mov ecx, dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x11038007: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1103800A: push dword ptr [ebp - 0x54] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1103800D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11038010: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11038013: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11038016: push esi */
    RECOMP_CALL(sub_110375DE); /* 0x11038017: call 0x110375de */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1103801C: push 0 */
    PUSH32(esp, 1); /* 0x1103801E: push 1 */
    ecx = ebp + (-0x50); /* 0x11038020: lea ecx, [ebp - 0x50] */
    RECOMP_CALL(sub_11010630); /* 0x11038023: call 0x11010630 */
    RECOMP_FLAGS_IN();
L_11038028:
    eax = esi; /* 0x11038028: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x1103802A: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1103802F: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_11038032(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11038032u);

L_11038032:
    PUSH32(esp, 4); /* 0x11038032: push 4 */
    eax = 0x1103F632u; /* 0x11038034: mov eax, 0x1103f632 */
    RECOMP_CALL(sub_1103B372); /* 0x11038039: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103803E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x11038040: mov dword ptr [ebp - 0x10], ebx */
    esi = MEM32(ebp + 0x8); /* 0x11038043: mov esi, dword ptr [ebp + 8] */
    MEM32(esi + 0x14) = 0xFu; /* 0x11038046: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = ebx; /* 0x1103804D: mov dword ptr [esi + 0x10], ebx */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x11038050: mov byte ptr [esi], bl */
    eax = MEM32(ebp + 0x10); /* 0x11038052: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x11038055: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x10)) = 1; /* 0x11038058: mov dword ptr [ebp - 0x10], 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x1103805F: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_110380A7; /* 0x11038062: je 0x110380a7 */
L_11038064:
    edi = ecx + 0x8; /* 0x11038064: lea edi, [ecx + 8] */
L_11038067:
    PUSH32(esp, ebx); /* 0x11038067: push ebx */
    PUSH32(esp, eax); /* 0x11038068: push eax */
    ecx = esi; /* 0x11038069: mov ecx, esi */
    RECOMP_CALL(sub_110380D3); /* 0x1103806B: call 0x110380d3 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x11038070: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1103807A; /* 0x11038074: jb 0x1103807a */
L_11038076:
    eax = MEM32(esi); /* 0x11038076: mov eax, dword ptr [esi] */
    goto L_1103807C; /* 0x11038078: jmp 0x1103807c */
L_1103807A:
    eax = esi; /* 0x1103807A: mov eax, esi */
L_1103807C:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x1103807C: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(esi + 0x10); /* 0x11038080: mov edx, dword ptr [esi + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_11038089; /* 0x11038083: jb 0x11038089 */
L_11038085:
    ecx = MEM32(esi); /* 0x11038085: mov ecx, dword ptr [esi] */
    goto L_1103808B; /* 0x11038087: jmp 0x1103808b */
L_11038089:
    ecx = esi; /* 0x11038089: mov ecx, esi */
L_1103808B:
    PUSH32(esp, edi); /* 0x1103808B: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1103808C: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1103808F: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11038091: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11038094: push eax */
    PUSH32(esp, ecx); /* 0x11038095: push ecx */
    RECOMP_CALL(sub_1102D9AB); /* 0x11038096: call 0x1102d9ab */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1103809B: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x1103809E: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_110380A7; /* 0x110380A1: jbe 0x110380a7 */
L_110380A3:
    /* test eax, eax */ /* 0x110380A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11038067; /* 0x110380A5: jne 0x11038067 */
L_110380A7:
    PUSH32(esp, ebx); /* 0x110380A7: push ebx */
    PUSH32(esp, eax); /* 0x110380A8: push eax */
    ecx = esi; /* 0x110380A9: mov ecx, esi */
    RECOMP_CALL(sub_110380D3); /* 0x110380AB: call 0x110380d3 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x110380B0: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x110380B2: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x110380B7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_110380BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110380BAu);

L_110380BA:
    PUSH32(esp, ebp); /* 0x110380BA: push ebp */
    ebp = esp; /* 0x110380BB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110380BD: push ecx */
    edx = MEM32(ecx); /* 0x110380BE: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x110380C0: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x110380C3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(edx + 0x20)); /* 0x110380C7: call dword ptr [edx + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x110380CA: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x110380CD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110380CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x110380D0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_110380D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110380D3u);

L_110380D3:
    PUSH32(esp, ebp); /* 0x110380D3: push ebp */
    ebp = esp; /* 0x110380D4: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x110380D6: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x10) */ /* 0x110380D9: cmp eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_110380EF; /* 0x110380DC: ja 0x110380ef */
L_110380DE:
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x110380DE: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx + 0x10) = eax; /* 0x110380E2: mov dword ptr [ecx + 0x10], eax */
    if (CMP_B(_flag_a, _flag_b)) goto L_110380E9; /* 0x110380E5: jb 0x110380e9 */
L_110380E7:
    ecx = MEM32(ecx); /* 0x110380E7: mov ecx, dword ptr [ecx] */
L_110380E9:
    MEM8(ecx + eax) = (uint8_t)(0); /* 0x110380E9: mov byte ptr [ecx + eax], 0 */
    goto L_110380FB; /* 0x110380ED: jmp 0x110380fb */
L_110380EF:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110380EF: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x10); /* 0x110380F2: sub eax, dword ptr [ecx + 0x10] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x110380F5: push eax */
    RECOMP_CALL(sub_11014015); /* 0x110380F6: call 0x11014015 */
    RECOMP_FLAGS_IN();
L_110380FB:
    ebp = POP32_VAL(esp); /* 0x110380FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x110380FC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_110380FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110380FFu);

L_110380FF:
    PUSH32(esp, ebp); /* 0x110380FF: push ebp */
    ebp = esp; /* 0x11038100: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11038102: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11038103: mov esi, dword ptr [ebp + 8] */
    eax = 0x7FFu; /* 0x11038106: mov eax, 0x7ff */
    edx = (uint32_t)MEM16(esi + 0x6); /* 0x1103810B: movzx edx, word ptr [esi + 6] */
    ecx = edx; /* 0x1103810F: mov ecx, edx */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x11038111: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x11038111: shr ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x11038114: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = ecx; /* 0x11038116: mov dword ptr [ebp + 8], ecx */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11038119: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11038144; /* 0x1103811C: jne 0x11038144 */
L_1103811E:
    /* test LO8(edx), 0xFu */ /* 0x1103811E: test dl, 0xf */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103813C; /* 0x11038121: jne 0x1103813c */
L_11038123:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11038123: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x4), LO16(eax) */ /* 0x11038125: cmp word ptr [esi + 4], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103813C; /* 0x11038129: jne 0x1103813c */
L_1103812B:
    /* cmp MEM16(esi + 0x2), LO16(eax) */ /* 0x1103812B: cmp word ptr [esi + 2], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103813C; /* 0x1103812F: jne 0x1103813c */
L_11038131:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x11038131: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103813C; /* 0x11038134: jne 0x1103813c */
L_11038136:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11038136: inc eax */
    _flag_k = FK_INC;
    goto L_110381F8; /* 0x11038137: jmp 0x110381f8 */
L_1103813C:
    PUSH32(esp, 2); /* 0x1103813C: push 2 */
    eax = POP32_VAL(esp); /* 0x1103813E: pop eax */
    goto L_110381F8; /* 0x1103813F: jmp 0x110381f8 */
L_11038144:
    /* test edx, 0xFFFF7FFFu */ /* 0x11038144: test edx, 0xffff7fff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFF7FFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11038166; /* 0x1103814A: jne 0x11038166 */
L_1103814C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103814C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x4), LO16(eax) */ /* 0x1103814E: cmp word ptr [esi + 4], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11038166; /* 0x11038152: jne 0x11038166 */
L_11038154:
    /* cmp MEM16(esi + 0x2), LO16(eax) */ /* 0x11038154: cmp word ptr [esi + 2], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11038166; /* 0x11038158: jne 0x11038166 */
L_1103815A:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x1103815A: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11038166; /* 0x1103815D: jne 0x11038166 */
L_1103815F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103815F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110381F8; /* 0x11038161: jmp 0x110381f8 */
L_11038166:
    eax = 0x433u; /* 0x11038166: mov eax, 0x433 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1103816B: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x1103816D: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO16(eax); /* 0x11038170: movzx ecx, ax */
    SET_LO16(eax, LO16(ecx)); /* 0x11038173: mov ax, cx */
    MEM32(ebp + 0x8) = ecx; /* 0x11038176: mov dword ptr [ebp + 8], ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x11038179: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1103815F; /* 0x1103817C: jle 0x1103815f */
L_1103817E:
    PUSH32(esp, edi); /* 0x1103817E: push edi */
    PUSH32(esp, 0x35u); /* 0x1103817F: push 0x35 */
    edi = POP32_VAL(esp); /* 0x11038181: pop edi */
    /* cmp LO16(edi), LO16(eax) */ /* 0x11038182: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_1103819E; /* 0x11038185: jg 0x1103819e */
L_11038187:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11038187: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x8000u);
    edx = edx & 0x8000u; /* 0x11038189: and edx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x2) = eax; /* 0x1103818F: mov dword ptr [esi + 2], eax */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x11038192: mov word ptr [esi], ax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x11038195: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x6) = (uint16_t)(LO16(edx)); /* 0x11038198: mov word ptr [esi + 6], dx */
    goto L_110381F7; /* 0x1103819C: jmp 0x110381f7 */
L_1103819E:
    if (4u) _cf = (((LO16(eax)) >> 3) & 1u); /* 0x1103819E: sar ax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int16_t)(LO16(eax)) >> 4u))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, (uint32_t)((int32_t)(int32_t)(int16_t)(LO16(eax)) >> 4u));
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x110381A2: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = (int32_t)(int16_t)LO16(eax); /* 0x110381A5: movsx edi, ax */
    edx = (uint32_t)MEM16(ecx * 2 + 0x11003774); /* 0x110381A8: movzx edx, word ptr [ecx*2 + 0x11003774] */
    ecx = MEM32(edi * 4 + 0x11003794); /* 0x110381B0: mov ecx, dword ptr [edi*4 + 0x11003794] */
    eax = (uint32_t)MEM16(esi + ecx * 2); /* 0x110381B7: movzx eax, word ptr [esi + ecx*2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x110381BB: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x110381BD: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = edx; /* 0x110381BF: mov dword ptr [ebp + 8], edx */
    MEM16(esi + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x110381C2: mov word ptr [esi + ecx*2], ax */
    SET_LO16(ecx, LO16(edx)); /* 0x110381C6: mov cx, dx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x110381C9: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_110381E6; /* 0x110381CA: je 0x110381e6 */
L_110381CC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x110381CC: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_110381DC; /* 0x110381CD: je 0x110381dc */
L_110381CF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x110381CF: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_110381EE; /* 0x110381D0: jne 0x110381ee */
L_110381D2:
    _flag_a = (uint32_t)((LO16(ecx) | MEM16(esi + 0x4))) << 16; _flag_b = (uint32_t)((LO16(ecx) | MEM16(esi + 0x4))) << 16;
    SET_LO16(ecx, LO16(ecx) | MEM16(esi + 0x4)); /* 0x110381D2: or cx, word ptr [esi + 4] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110381D6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x110381D8: mov word ptr [esi + 4], ax */
L_110381DC:
    _flag_a = (uint32_t)((LO16(ecx) | MEM16(esi + 0x2))) << 16; _flag_b = (uint32_t)((LO16(ecx) | MEM16(esi + 0x2))) << 16;
    SET_LO16(ecx, LO16(ecx) | MEM16(esi + 0x2)); /* 0x110381DC: or cx, word ptr [esi + 2] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110381E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x110381E2: mov word ptr [esi + 2], ax */
L_110381E6:
    _flag_a = (uint32_t)((LO16(ecx) | MEM16(esi))) << 16; _flag_b = (uint32_t)((LO16(ecx) | MEM16(esi))) << 16;
    SET_LO16(ecx, LO16(ecx) | MEM16(esi)); /* 0x110381E6: or cx, word ptr [esi] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110381E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x110381EB: mov word ptr [esi], ax */
L_110381EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110381EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(ecx), LO16(ecx) */ /* 0x110381F0: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x110381F3: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x110381F6: dec eax */
    _flag_k = FK_DEC;
L_110381F7:
    edi = POP32_VAL(esp); /* 0x110381F7: pop edi */
L_110381F8:
    esi = POP32_VAL(esp); /* 0x110381F8: pop esi */
    ebp = POP32_VAL(esp); /* 0x110381F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110381FA: ret  */
    RECOMP_REGS_OUT();
}

void sub_110381FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110381FBu);

L_110381FB:
    PUSH32(esp, ebp); /* 0x110381FB: push ebp */
    ebp = esp; /* 0x110381FC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x110381FE: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x11038201: push ebx */
    PUSH32(esp, esi); /* 0x11038202: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11038203: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x11038206: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11038207: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFu); /* 0x11038209: push 0xf */
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x1103820B: movzx eax, word ptr [esi + 6] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1103820F: inc edi */
    _flag_k = FK_INC;
    ebx = eax; /* 0x11038210: mov ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x8000u);
    ebx = ebx & 0x8000u; /* 0x11038212: and ebx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x11038218: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x11038219: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1103821B: mov dword ptr [ebp - 8], ebx */
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x1103821E: mov word ptr [esi + 6], ax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103823B; /* 0x11038222: jne 0x1103823b */
L_11038224:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11038224: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x4), LO16(ecx) */ /* 0x11038226: cmp word ptr [esi + 4], cx */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103823B; /* 0x1103822A: jne 0x1103823b */
L_1103822C:
    /* cmp MEM16(esi + 0x2), LO16(ecx) */ /* 0x1103822C: cmp word ptr [esi + 2], cx */
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103823B; /* 0x11038230: jne 0x1103823b */
L_11038232:
    /* cmp MEM16(esi), LO16(ecx) */ /* 0x11038232: cmp word ptr [esi], cx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103835E; /* 0x11038235: je 0x1103835e */
L_1103823B:
    /* test LO16(eax), LO16(eax) */ /* 0x1103823B: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103826D; /* 0x1103823E: jne 0x1103826d */
L_11038240:
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x11038240: movzx eax, word ptr [esi + 4] */
    ecx = (uint32_t)MEM16(esi + 0x2); /* 0x11038244: movzx ecx, word ptr [esi + 2] */
L_11038248:
    edx = (uint32_t)LO16(eax); /* 0x11038248: movzx edx, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1103824B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(ecx); /* 0x1103824D: movzx eax, cx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x10u; /* 0x11038250: sub edi, 0x10 */
    _flag_k = FK_CMP;
    ecx = (uint32_t)MEM16(esi); /* 0x11038253: movzx ecx, word ptr [esi] */
    MEM16(esi) = (uint16_t)(LO16(ebx)); /* 0x11038256: mov word ptr [esi], bx */
    /* test LO16(edx), LO16(edx) */ /* 0x11038259: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11038248; /* 0x1103825C: je 0x11038248 */
L_1103825E:
    ebx = MEM32(ebp + (-0x8)); /* 0x1103825E: mov ebx, dword ptr [ebp - 8] */
    MEM16(esi + 0x6) = (uint16_t)(LO16(edx)); /* 0x11038261: mov word ptr [esi + 6], dx */
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x11038265: mov word ptr [esi + 4], ax */
    MEM16(esi + 0x2) = (uint16_t)(LO16(ecx)); /* 0x11038269: mov word ptr [esi + 2], cx */
L_1103826D:
    ecx = (uint32_t)MEM16(esi + 0x6); /* 0x1103826D: movzx ecx, word ptr [esi + 6] */
    PUSH32(esp, 0x10u); /* 0x11038271: push 0x10 */
    eax = POP32_VAL(esp); /* 0x11038273: pop eax */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11038274: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_110382EA; /* 0x11038277: jae 0x110382ea */
L_11038279:
    edx = (uint32_t)MEM16(esi + 0x2); /* 0x11038279: movzx edx, word ptr [esi + 2] */
    ebx = (uint32_t)MEM16(esi + 0x4); /* 0x1103827D: movzx ebx, word ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = edx; /* 0x11038281: mov dword ptr [ebp - 4], edx */
    goto L_11038289; /* 0x11038284: jmp 0x11038289 */
L_11038286:
    edx = MEM32(ebp + (-0x4)); /* 0x11038286: mov edx, dword ptr [ebp - 4] */
L_11038289:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x11038289: add ecx, ecx */
    _flag_k = FK_ADD;
    SET_LO16(eax, LO16(ebx)); /* 0x1103828B: mov ax, bx */
    if (15u) _cf = (((LO16(eax)) >> 14) & 1u); /* 0x1103828E: shr ax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) >> 15u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) >> 15u); /* 0x1103828E: shr ax, 0xf */
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x11038292: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = (uint32_t)LO16(ecx); /* 0x11038295: movzx eax, cx */
    SET_LO16(ecx, LO16(edx)); /* 0x11038298: mov cx, dx */
    edx = (uint32_t)MEM16(esi); /* 0x1103829B: movzx edx, word ptr [esi] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1103829E: mov dword ptr [ebp - 0xc], eax */
    eax = ebx + ebx; /* 0x110382A1: lea eax, [ebx + ebx] */
    if (15u) _cf = (((LO16(ecx)) >> 14) & 1u); /* 0x110382A4: shr cx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ecx) >> 15u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, LO16(ecx) >> 15u); /* 0x110382A4: shr cx, 0xf */
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x110382A8: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(ebp + (-0x4)); /* 0x110382AB: mov eax, dword ptr [ebp - 4] */
    ebx = (uint32_t)LO16(ecx); /* 0x110382AE: movzx ebx, cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x110382B1: add eax, eax */
    _flag_k = FK_ADD;
    SET_LO16(ecx, LO16(edx)); /* 0x110382B3: mov cx, dx */
    if (15u) _cf = (((LO16(ecx)) >> 14) & 1u); /* 0x110382B6: shr cx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ecx) >> 15u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, LO16(ecx) >> 15u); /* 0x110382B6: shr cx, 0xf */
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x110382BA: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x110382BD: dec edi */
    _flag_k = FK_DEC;
    eax = (uint32_t)LO16(ecx); /* 0x110382BE: movzx eax, cx */
    MEM32(ebp + (-0x4)) = eax; /* 0x110382C1: mov dword ptr [ebp - 4], eax */
    eax = edx + edx; /* 0x110382C4: lea eax, [edx + edx] */
    PUSH32(esp, 0x10u); /* 0x110382C7: push 0x10 */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x110382C9: mov word ptr [esi], ax */
    eax = MEM32(ebp + (-0xC)); /* 0x110382CC: mov eax, dword ptr [ebp - 0xc] */
    edx = POP32_VAL(esp); /* 0x110382CF: pop edx */
    ecx = (uint32_t)LO16(eax); /* 0x110382D0: movzx ecx, ax */
    /* cmp LO16(eax), LO16(edx) */ /* 0x110382D3: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11038286; /* 0x110382D6: jb 0x11038286 */
L_110382D8:
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x110382D8: mov word ptr [esi + 6], ax */
    eax = MEM32(ebp + (-0x4)); /* 0x110382DC: mov eax, dword ptr [ebp - 4] */
    MEM16(esi + 0x4) = (uint16_t)(LO16(ebx)); /* 0x110382DF: mov word ptr [esi + 4], bx */
    ebx = MEM32(ebp + (-0x8)); /* 0x110382E3: mov ebx, dword ptr [ebp - 8] */
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x110382E6: mov word ptr [esi + 2], ax */
L_110382EA:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x110382EA: movzx eax, word ptr [esi + 6] */
    PUSH32(esp, 0x20u); /* 0x110382EE: push 0x20 */
    ecx = POP32_VAL(esp); /* 0x110382F0: pop ecx */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x110382F1: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_11038357; /* 0x110382F4: ja 0x11038357 */
L_110382F6:
    edx = (uint32_t)MEM16(esi + 0x4); /* 0x110382F6: movzx edx, word ptr [esi + 4] */
    ecx = (uint32_t)MEM16(esi + 0x2); /* 0x110382FA: movzx ecx, word ptr [esi + 2] */
    ebx = (uint32_t)MEM16(esi); /* 0x110382FE: movzx ebx, word ptr [esi] */
    esi = eax; /* 0x11038301: mov esi, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x11038303: mov dword ptr [ebp - 4], eax */
L_11038306:
    eax = ecx; /* 0x11038306: mov eax, ecx */
    if (1u) _cf = (((LO16(ebx)) >> 0) & 1u); /* 0x11038308: shr bx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ebx) >> 1u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ebx, LO16(ebx) >> 1u); /* 0x11038308: shr bx, 1 */
    if (15u) _cf = (((eax) >> 17) & 1u); /* 0x1103830B: shl eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 15u; /* 0x1103830B: shl eax, 0xf */
    _flag_a = (uint32_t)((LO16(eax) | LO16(ebx))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(ebx))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(ebx)); /* 0x1103830E: or ax, bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (1u) _cf = (((LO16(ecx)) >> 0) & 1u); /* 0x11038311: shr cx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ecx) >> 1u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, LO16(ecx) >> 1u); /* 0x11038311: shr cx, 1 */
    ebx = (uint32_t)LO16(eax); /* 0x11038314: movzx ebx, ax */
    eax = edx; /* 0x11038317: mov eax, edx */
    if (15u) _cf = (((eax) >> 17) & 1u); /* 0x11038319: shl eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 15u; /* 0x11038319: shl eax, 0xf */
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x1103831C: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (1u) _cf = (((LO16(edx)) >> 0) & 1u); /* 0x1103831F: shr dx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) >> 1u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) >> 1u); /* 0x1103831F: shr dx, 1 */
    eax = esi; /* 0x11038322: mov eax, esi */
    ecx = (uint32_t)LO16(ecx); /* 0x11038324: movzx ecx, cx */
    if (15u) _cf = (((eax) >> 17) & 1u); /* 0x11038327: shl eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 15u; /* 0x11038327: shl eax, 0xf */
    _flag_a = (uint32_t)((LO16(eax) | LO16(edx))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(edx))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(edx)); /* 0x1103832A: or ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (1u) _cf = (((LO16(esi)) >> 0) & 1u); /* 0x1103832D: shr si, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(esi) >> 1u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(esi, LO16(esi) >> 1u); /* 0x1103832D: shr si, 1 */
    PUSH32(esp, 0x20u); /* 0x11038330: push 0x20 */
    edx = (uint32_t)LO16(eax); /* 0x11038332: movzx edx, ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11038335: inc edi */
    _flag_k = FK_INC;
    eax = POP32_VAL(esp); /* 0x11038336: pop eax */
    /* cmp LO16(eax), LO16(esi) */ /* 0x11038337: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_11038306; /* 0x1103833A: jbe 0x11038306 */
L_1103833C:
    MEM32(ebp + (-0x4)) = esi; /* 0x1103833C: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebp + 0x8); /* 0x1103833F: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x11038342: mov eax, dword ptr [ebp - 4] */
    MEM16(esi) = (uint16_t)(LO16(ebx)); /* 0x11038345: mov word ptr [esi], bx */
    ebx = MEM32(ebp + (-0x8)); /* 0x11038348: mov ebx, dword ptr [ebp - 8] */
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x1103834B: mov word ptr [esi + 6], ax */
    MEM16(esi + 0x4) = (uint16_t)(LO16(edx)); /* 0x1103834F: mov word ptr [esi + 4], dx */
    MEM16(esi + 0x2) = (uint16_t)(LO16(ecx)); /* 0x11038353: mov word ptr [esi + 2], cx */
L_11038357:
    PUSH32(esp, 0xFu); /* 0x11038357: push 0xf */
    eax = POP32_VAL(esp); /* 0x11038359: pop eax */
    _flag_a = (uint32_t)(MEM16(esi + 0x6)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    MEM16(esi + 0x6) = (uint16_t)(MEM16(esi + 0x6) & LO16(eax)); /* 0x1103835A: and word ptr [esi + 6], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_1103835E:
    _flag_a = (uint32_t)((MEM16(esi + 0x6) | LO16(ebx))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x6) | LO16(ebx))) << 16;
    MEM16(esi + 0x6) = (uint16_t)(MEM16(esi + 0x6) | LO16(ebx)); /* 0x1103835E: or word ptr [esi + 6], bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO16(eax, LO16(edi)); /* 0x11038362: mov ax, di */
    edi = POP32_VAL(esp); /* 0x11038365: pop edi */
    esi = POP32_VAL(esp); /* 0x11038366: pop esi */
    ebx = POP32_VAL(esp); /* 0x11038367: pop ebx */
    esp = ebp; /* 0x11038368: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103836A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103836B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103836C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103836Cu);

L_1103836C:
    PUSH32(esp, ebp); /* 0x1103836C: push ebp */
    ebp = esp; /* 0x1103836D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x70u; /* 0x1103836F: sub esp, 0x70 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11038372: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11038377: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11038379: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x1103837C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1103837F: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x11038380: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x68)) = ecx; /* 0x11038383: mov dword ptr [ebp - 0x68], ecx */
    PUSH32(esp, edi); /* 0x11038386: push edi */
    edi = MEM32(ebp + 0x10); /* 0x11038387: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x70)) = edi; /* 0x1103838A: mov dword ptr [ebp - 0x70], edi */
    /* test ebx, ebx */ /* 0x1103838D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11038475; /* 0x1103838F: je 0x11038475 */
L_11038395:
    fp_push(*(double*)ADDR(ecx)); /* 0x11038395: fld qword ptr [ecx] */
    fp_push(0.0); /* 0x11038397: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038399: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103839B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103839D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11038475; /* 0x110383A0: jnp 0x11038475 */
L_110383A6:
    eax = ebp + (-0x1C); /* 0x110383A6: lea eax, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x110383A9: push esi */
    /* test ebx, ebx */ /* 0x110383AA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110383C8; /* 0x110383AC: jle 0x110383c8 */
L_110383AE:
    fp_push(*(double*)ADDR(0x110037C0)); /* 0x110383AE: fld qword ptr [0x110037c0] */
    PUSH32(esp, ecx); /* 0x110383B4: push ecx */
    PUSH32(esp, ecx); /* 0x110383B5: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x110383B6: fstp qword ptr [esp] */
    PUSH32(esp, 3); /* 0x110383B9: push 3 */
    esi = POP32_VAL(esp); /* 0x110383BB: pop esi */
    PUSH32(esp, esi); /* 0x110383BC: push esi */
    PUSH32(esp, eax); /* 0x110383BD: push eax */
    RECOMP_CALL(sub_1103AC96); /* 0x110383BE: call 0x1103ac96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x110383C3: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_110383DC; /* 0x110383C6: jmp 0x110383dc */
L_110383C8:
    PUSH32(esp, 0x110037A8u); /* 0x110383C8: push 0x110037a8 */
    PUSH32(esp, 3); /* 0x110383CD: push 3 */
    esi = POP32_VAL(esp); /* 0x110383CF: pop esi */
    PUSH32(esp, esi); /* 0x110383D0: push esi */
    PUSH32(esp, eax); /* 0x110383D1: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x110383D2: neg ebx */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_110398FE); /* 0x110383D4: call 0x110398fe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110383D9: add esp, 0xc */
    _flag_k = FK_ADD;
L_110383DC:
    edi = MEM32(ebp + (-0x68)); /* 0x110383DC: mov edi, dword ptr [ebp - 0x68] */
L_110383DF:
    /* test LO8(ebx), 1 */ /* 0x110383DF: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_110383F7; /* 0x110383E2: je 0x110383f7 */
L_110383E4:
    eax = ebp + (-0x64); /* 0x110383E4: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x110383E7: push eax */
    PUSH32(esp, esi); /* 0x110383E8: push esi */
    eax = ebp + (-0x1C); /* 0x110383E9: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x110383EC: push eax */
    PUSH32(esp, esi); /* 0x110383ED: push esi */
    PUSH32(esp, edi); /* 0x110383EE: push edi */
    RECOMP_CALL(sub_1103AB9B); /* 0x110383EF: call 0x1103ab9b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x110383F4: add esp, 0x14 */
    _flag_k = FK_ADD;
L_110383F7:
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x110383F7: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_11038421; /* 0x110383F9: je 0x11038421 */
L_110383FB:
    eax = ebp + (-0x1C); /* 0x110383FB: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x110383FE: push eax */
    eax = ebp + (-0x34); /* 0x110383FF: lea eax, [ebp - 0x34] */
    PUSH32(esp, esi); /* 0x11038402: push esi */
    PUSH32(esp, eax); /* 0x11038403: push eax */
    RECOMP_CALL(sub_110398FE); /* 0x11038404: call 0x110398fe */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x64); /* 0x11038409: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x1103840C: push eax */
    PUSH32(esp, esi); /* 0x1103840D: push esi */
    eax = ebp + (-0x34); /* 0x1103840E: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x11038411: push eax */
    eax = ebp + (-0x1C); /* 0x11038412: lea eax, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x11038415: push esi */
    PUSH32(esp, eax); /* 0x11038416: push eax */
    RECOMP_CALL(sub_1103AB9B); /* 0x11038417: call 0x1103ab9b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1103841C: add esp, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_110383DF; /* 0x1103841F: jmp 0x110383df */
L_11038421:
    PUSH32(esp, esi); /* 0x11038421: push esi */
    PUSH32(esp, edi); /* 0x11038422: push edi */
    RECOMP_CALL(sub_1103971A); /* 0x11038423: call 0x1103971a */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x70)); /* 0x11038428: mov edi, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1103842B: add esp, 8 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + (-0x6C)) = _st[0]; /* 0x1103842E: fst qword ptr [ebp - 0x6c] */
    fp_push(0.0); /* 0x11038431: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038433: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038435: fnstsw ax */
    esi = POP32_VAL(esp); /* 0x11038437: pop esi */
    /* test HI8(eax), 0x44u */ /* 0x11038438: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103845B; /* 0x1103843B: jnp 0x1103845b */
L_1103843D:
    fp_push(*(double*)ADDR(0x11063098)); /* 0x1103843D: fld qword ptr [0x11063098] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038443: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038445: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038447: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11038459; /* 0x1103844A: jnp 0x11038459 */
L_1103844C:
    _st[0] = -_st[0]; /* 0x1103844C: fchs  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103844E: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038450: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038452: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1103847F; /* 0x11038455: jp 0x1103847f */
L_11038457:
    goto L_1103845B; /* 0x11038457: jmp 0x1103845b */
L_11038459:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11038459: fstp st(0) */
L_1103845B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103845B: fstp st(0) */
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x1103845D: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x6C))); /* 0x11038463: fld qword ptr [ebp - 0x6c] */
    MEM32(eax) = 0x22u; /* 0x11038466: mov dword ptr [eax], 0x22 */
    /* test edi, edi */ /* 0x1103846C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103847F; /* 0x1103846E: je 0x1103847f */
L_11038470:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x11038470: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1103847F; /* 0x11038473: jmp 0x1103847f */
L_11038475:
    PUSH32(esp, 3); /* 0x11038475: push 3 */
    PUSH32(esp, ecx); /* 0x11038477: push ecx */
    RECOMP_CALL(sub_1103971A); /* 0x11038478: call 0x1103971a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103847D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103847E: pop ecx */
L_1103847F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1103847F: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x11038482: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11038483: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x11038485: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11038486: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1103848B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103848D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103848E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103848F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103848Fu);

L_1103848F:
    PUSH32(esp, ebp); /* 0x1103848F: push ebp */
    ebp = esp; /* 0x11038490: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11038492: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11038493: mov esi, dword ptr [ebp + 0xc] */
    edx = 0x7FFu; /* 0x11038496: mov edx, 0x7ff */
    SET_LO16(eax, MEM16(esi + 0x6)); /* 0x1103849B: mov ax, word ptr [esi + 6] */
    if (4u) _cf = (((LO16(eax)) >> 3) & 1u); /* 0x1103849F: shr ax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) >> 4u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) >> 4u); /* 0x1103849F: shr ax, 4 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(edx)); /* 0x110384A3: and ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = (uint32_t)LO16(eax); /* 0x110384A6: movzx ecx, ax */
    /* cmp LO16(ecx), LO16(edx) */ /* 0x110384A9: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110384D7; /* 0x110384AC: jne 0x110384d7 */
L_110384AE:
    eax = MEM32(ebp + 0x8); /* 0x110384AE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110384B1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x110384B3: mov word ptr [eax], cx */
    /* test MEM8(esi + 0x6), 0xFu */ /* 0x110384B6: test byte ptr [esi + 6], 0xf */
    _flag_a = (uint32_t)(MEM8(esi + 0x6)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_110384D2; /* 0x110384BA: jne 0x110384d2 */
L_110384BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110384BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x4), LO16(eax) */ /* 0x110384BE: cmp word ptr [esi + 4], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110384D2; /* 0x110384C2: jne 0x110384d2 */
L_110384C4:
    /* cmp MEM16(esi + 0x2), LO16(eax) */ /* 0x110384C4: cmp word ptr [esi + 2], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110384D2; /* 0x110384C8: jne 0x110384d2 */
L_110384CA:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x110384CA: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_110384D2; /* 0x110384CD: jne 0x110384d2 */
L_110384CF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x110384CF: inc eax */
    _flag_k = FK_INC;
    goto L_11038520; /* 0x110384D0: jmp 0x11038520 */
L_110384D2:
    PUSH32(esp, 2); /* 0x110384D2: push 2 */
    eax = POP32_VAL(esp); /* 0x110384D4: pop eax */
    goto L_11038520; /* 0x110384D5: jmp 0x11038520 */
L_110384D7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110384D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x110384D9: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_110384F9; /* 0x110384DC: jl 0x110384f9 */
L_110384DE:
    PUSH32(esp, esi); /* 0x110384DE: push esi */
    RECOMP_CALL(sub_110381FB); /* 0x110384DF: call 0x110381fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110384E4: pop ecx */
    ecx = (uint32_t)LO16(eax); /* 0x110384E5: movzx ecx, ax */
    /* test LO16(ecx), LO16(ecx) */ /* 0x110384E8: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_110384F9; /* 0x110384EB: jle 0x110384f9 */
L_110384ED:
    eax = MEM32(ebp + 0x8); /* 0x110384ED: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110384F0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x110384F2: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110384F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11038520; /* 0x110384F7: jmp 0x11038520 */
L_110384F9:
    SET_LO16(eax, MEM16(esi + 0x6)); /* 0x110384F9: mov ax, word ptr [esi + 6] */
    edx = 0xBFEFu; /* 0x110384FD: mov edx, 0xbfef */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(edx)); /* 0x11038502: and ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFC02u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFC02u; /* 0x11038505: add ecx, 0xfffffc02 */
    _flag_k = FK_ADD;
    edx = 0x3FE0u; /* 0x1103850B: mov edx, 0x3fe0 */
    _flag_a = (uint32_t)((LO16(eax) | LO16(edx))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(edx))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(edx)); /* 0x11038510: or ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x11038513: mov word ptr [esi + 6], ax */
    eax = MEM32(ebp + 0x8); /* 0x11038517: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1103851A: mov word ptr [eax], cx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1103851D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_11038520:
    esi = POP32_VAL(esp); /* 0x11038520: pop esi */
    ebp = POP32_VAL(esp); /* 0x11038521: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11038522: ret  */
    RECOMP_REGS_OUT();
}

void sub_11038523(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11038523u);

L_11038523:
    PUSH32(esp, ebp); /* 0x11038523: push ebp */
    ebp = esp; /* 0x11038524: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11038526: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11038527: mov esi, dword ptr [ebp + 8] */
    eax = 0xFFu; /* 0x1103852A: mov eax, 0xff */
    ecx = (uint32_t)MEM16(esi + 0x2); /* 0x1103852F: movzx ecx, word ptr [esi + 2] */
    edx = ecx; /* 0x11038533: mov edx, ecx */
    if (7u) _cf = (((edx) >> 6) & 1u); /* 0x11038535: shr edx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((edx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 7u; /* 0x11038535: shr edx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x11038538: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = edx; /* 0x1103853A: mov dword ptr [ebp + 8], edx */
    /* cmp LO16(edx), LO16(eax) */ /* 0x1103853D: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103855D; /* 0x11038540: jne 0x1103855d */
L_11038542:
    /* test LO8(ecx), 0x7Fu */ /* 0x11038542: test cl, 0x7f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11038555; /* 0x11038545: jne 0x11038555 */
L_11038547:
    /* cmp MEM16(esi), 0 */ /* 0x11038547: cmp word ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11038555; /* 0x1103854B: jne 0x11038555 */
L_1103854D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103854D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1103854F: inc eax */
    _flag_k = FK_INC;
    goto L_110385EA; /* 0x11038550: jmp 0x110385ea */
L_11038555:
    PUSH32(esp, 2); /* 0x11038555: push 2 */
    eax = POP32_VAL(esp); /* 0x11038557: pop eax */
    goto L_110385EA; /* 0x11038558: jmp 0x110385ea */
L_1103855D:
    /* test ecx, 0xFFFF7FFFu */ /* 0x1103855D: test ecx, 0xffff7fff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF7FFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103856F; /* 0x11038563: jne 0x1103856f */
L_11038565:
    /* cmp MEM16(esi), 0 */ /* 0x11038565: cmp word ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103856F; /* 0x11038569: jne 0x1103856f */
L_1103856B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103856B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110385EA; /* 0x1103856D: jmp 0x110385ea */
L_1103856F:
    eax = 0x96u; /* 0x1103856F: mov eax, 0x96 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x11038574: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x11038576: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(eax); /* 0x11038579: movzx eax, ax */
    PUSH32(esp, edi); /* 0x1103857C: push edi */
    SET_LO16(edi, LO16(eax)); /* 0x1103857D: mov di, ax */
    MEM32(ebp + 0x8) = eax; /* 0x11038580: mov dword ptr [ebp + 8], eax */
    /* test LO16(edi), LO16(edi) */ /* 0x11038583: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1103858C; /* 0x11038586: jg 0x1103858c */
L_11038588:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11038588: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110385E9; /* 0x1103858A: jmp 0x110385e9 */
L_1103858C:
    PUSH32(esp, 0x18u); /* 0x1103858C: push 0x18 */
    edx = POP32_VAL(esp); /* 0x1103858E: pop edx */
    /* cmp LO16(edx), LO16(edi) */ /* 0x1103858F: cmp dx, di */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_110385A8; /* 0x11038592: jg 0x110385a8 */
L_11038594:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11038594: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000u);
    ecx = ecx & 0x8000u; /* 0x11038596: and ecx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1103859C: mov word ptr [esi], ax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1103859F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x2) = (uint16_t)(LO16(ecx)); /* 0x110385A2: mov word ptr [esi + 2], cx */
    goto L_110385E9; /* 0x110385A6: jmp 0x110385e9 */
L_110385A8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x110385A8: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((LO16(edi)) >> 3) & 1u); /* 0x110385AB: sar di, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int16_t)(LO16(edi)) >> 4u))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, (uint32_t)((int32_t)(int32_t)(int16_t)(LO16(edi)) >> 4u));
    edx = (uint32_t)MEM16(eax * 2 + 0x110037C8); /* 0x110385AF: movzx edx, word ptr [eax*2 + 0x110037c8] */
    eax = (int32_t)(int16_t)LO16(edi); /* 0x110385B7: movsx eax, di */
    ecx = MEM32(eax * 4 + 0x110037E8); /* 0x110385BA: mov ecx, dword ptr [eax*4 + 0x110037e8] */
    eax = (uint32_t)MEM16(esi + ecx * 2); /* 0x110385C1: movzx eax, word ptr [esi + ecx*2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x110385C5: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x110385C7: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = edx; /* 0x110385C9: mov dword ptr [ebp + 8], edx */
    MEM16(esi + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x110385CC: mov word ptr [esi + ecx*2], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110385D0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, LO16(edx)); /* 0x110385D2: mov cx, dx */
    /* cmp LO16(eax), LO16(edi) */ /* 0x110385D5: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_110385E0; /* 0x110385D8: jge 0x110385e0 */
L_110385DA:
    _flag_a = (uint32_t)((LO16(ecx) | MEM16(esi))) << 16; _flag_b = (uint32_t)((LO16(ecx) | MEM16(esi))) << 16;
    SET_LO16(ecx, LO16(ecx) | MEM16(esi)); /* 0x110385DA: or cx, word ptr [esi] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x110385DD: mov word ptr [esi], ax */
L_110385E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110385E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(ecx), LO16(ecx) */ /* 0x110385E2: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x110385E5: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x110385E8: dec eax */
    _flag_k = FK_DEC;
L_110385E9:
    edi = POP32_VAL(esp); /* 0x110385E9: pop edi */
L_110385EA:
    esi = POP32_VAL(esp); /* 0x110385EA: pop esi */
    ebp = POP32_VAL(esp); /* 0x110385EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110385EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_110385ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110385EDu);

L_110385ED:
    PUSH32(esp, ebp); /* 0x110385ED: push ebp */
    ebp = esp; /* 0x110385EE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110385F0: push ecx */
    PUSH32(esp, ebx); /* 0x110385F1: push ebx */
    PUSH32(esp, esi); /* 0x110385F2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x110385F3: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x110385F6: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x110385F7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x7Fu); /* 0x110385F9: push 0x7f */
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x110385FB: movzx eax, word ptr [esi + 2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x110385FF: inc edi */
    _flag_k = FK_INC;
    ebx = eax; /* 0x11038600: mov ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x8000u);
    ebx = ebx & 0x8000u; /* 0x11038602: and ebx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x11038608: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x11038609: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1103860B: mov dword ptr [ebp - 4], ebx */
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x1103860E: mov word ptr [esi + 2], ax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103861E; /* 0x11038612: jne 0x1103861e */
L_11038614:
    /* cmp MEM16(esi), 0 */ /* 0x11038614: cmp word ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_110386A9; /* 0x11038618: je 0x110386a9 */
L_1103861E:
    /* test LO16(eax), LO16(eax) */ /* 0x1103861E: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11038632; /* 0x11038621: jne 0x11038632 */
L_11038623:
    SET_LO16(eax, MEM16(esi)); /* 0x11038623: mov ax, word ptr [esi] */
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x11038626: mov word ptr [esi + 2], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103862A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFF1u); /* 0x1103862C: push -0xf */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1103862E: mov word ptr [esi], ax */
    edi = POP32_VAL(esp); /* 0x11038631: pop edi */
L_11038632:
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x11038632: movzx eax, word ptr [esi + 2] */
    ecx = 0x80u; /* 0x11038636: mov ecx, 0x80 */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1103863B: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_11038669; /* 0x1103863E: jae 0x11038669 */
L_11038640:
    ebx = ecx; /* 0x11038640: mov ebx, ecx */
L_11038642:
    edx = (uint32_t)MEM16(esi); /* 0x11038642: movzx edx, word ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x11038645: add eax, eax */
    _flag_k = FK_ADD;
    SET_LO16(ecx, LO16(edx)); /* 0x11038647: mov cx, dx */
    if (15u) _cf = (((LO16(ecx)) >> 14) & 1u); /* 0x1103864A: shr cx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ecx) >> 15u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, LO16(ecx) >> 15u); /* 0x1103864A: shr cx, 0xf */
    _flag_a = (uint32_t)((LO16(ecx) | LO16(eax))) << 16; _flag_b = (uint32_t)((LO16(ecx) | LO16(eax))) << 16;
    SET_LO16(ecx, LO16(ecx) | LO16(eax)); /* 0x1103864E: or cx, ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x11038651: dec edi */
    _flag_k = FK_DEC;
    ecx = (uint32_t)LO16(ecx); /* 0x11038652: movzx ecx, cx */
    eax = edx + edx; /* 0x11038655: lea eax, [edx + edx] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x11038658: mov word ptr [esi], ax */
    eax = ecx; /* 0x1103865B: mov eax, ecx */
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x1103865D: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_11038642; /* 0x11038660: jb 0x11038642 */
L_11038662:
    ebx = MEM32(ebp + (-0x4)); /* 0x11038662: mov ebx, dword ptr [ebp - 4] */
    MEM16(esi + 0x2) = (uint16_t)(LO16(ecx)); /* 0x11038665: mov word ptr [esi + 2], cx */
L_11038669:
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x11038669: movzx eax, word ptr [esi + 2] */
    ecx = 0x100u; /* 0x1103866D: mov ecx, 0x100 */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11038672: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_110386A2; /* 0x11038675: ja 0x110386a2 */
L_11038677:
    edx = (uint32_t)MEM16(esi); /* 0x11038677: movzx edx, word ptr [esi] */
    ecx = eax; /* 0x1103867A: mov ecx, eax */
    esi = 0x100u; /* 0x1103867C: mov esi, 0x100 */
L_11038681:
    eax = ecx; /* 0x11038681: mov eax, ecx */
    if (1u) _cf = (((LO16(edx)) >> 0) & 1u); /* 0x11038683: shr dx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) >> 1u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) >> 1u); /* 0x11038683: shr dx, 1 */
    if (15u) _cf = (((eax) >> 17) & 1u); /* 0x11038686: shl eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 15u; /* 0x11038686: shl eax, 0xf */
    _flag_a = (uint32_t)((LO16(eax) | LO16(edx))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(edx))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(edx)); /* 0x11038689: or ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (1u) _cf = (((LO16(ecx)) >> 0) & 1u); /* 0x1103868C: shr cx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ecx) >> 1u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, LO16(ecx) >> 1u); /* 0x1103868C: shr cx, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1103868F: inc edi */
    _flag_k = FK_INC;
    edx = (uint32_t)LO16(eax); /* 0x11038690: movzx edx, ax */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x11038693: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_11038681; /* 0x11038696: jbe 0x11038681 */
L_11038698:
    esi = MEM32(ebp + 0x8); /* 0x11038698: mov esi, dword ptr [ebp + 8] */
    MEM16(esi + 0x2) = (uint16_t)(LO16(ecx)); /* 0x1103869B: mov word ptr [esi + 2], cx */
    MEM16(esi) = (uint16_t)(LO16(edx)); /* 0x1103869F: mov word ptr [esi], dx */
L_110386A2:
    PUSH32(esp, 0x7Fu); /* 0x110386A2: push 0x7f */
    eax = POP32_VAL(esp); /* 0x110386A4: pop eax */
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    MEM16(esi + 0x2) = (uint16_t)(MEM16(esi + 0x2) & LO16(eax)); /* 0x110386A5: and word ptr [esi + 2], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_110386A9:
    _flag_a = (uint32_t)((MEM16(esi + 0x2) | LO16(ebx))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x2) | LO16(ebx))) << 16;
    MEM16(esi + 0x2) = (uint16_t)(MEM16(esi + 0x2) | LO16(ebx)); /* 0x110386A9: or word ptr [esi + 2], bx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO16(eax, LO16(edi)); /* 0x110386AD: mov ax, di */
    edi = POP32_VAL(esp); /* 0x110386B0: pop edi */
    esi = POP32_VAL(esp); /* 0x110386B1: pop esi */
    ebx = POP32_VAL(esp); /* 0x110386B2: pop ebx */
    esp = ebp; /* 0x110386B3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110386B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110386B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_110386B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110386B7u);

L_110386B7:
    PUSH32(esp, ebp); /* 0x110386B7: push ebp */
    ebp = esp; /* 0x110386B8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x110386BA: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x110386BD: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x110386C2: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x110386C4: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x110386C7: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x110386CA: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x110386CB: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x38)) = ecx; /* 0x110386CE: mov dword ptr [ebp - 0x38], ecx */
    PUSH32(esp, edi); /* 0x110386D1: push edi */
    edi = MEM32(ebp + 0x10); /* 0x110386D2: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x3C)) = edi; /* 0x110386D5: mov dword ptr [ebp - 0x3c], edi */
    /* test ebx, ebx */ /* 0x110386D8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110387C5; /* 0x110386DA: je 0x110387c5 */
L_110386E0:
    fp_push(*(float*)&MEM32(ecx)); /* 0x110386E0: fld dword ptr [ecx] */
    fp_push(0.0); /* 0x110386E2: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110386E4: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110386E6: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x110386E8: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_110387C5; /* 0x110386EB: jnp 0x110387c5 */
L_110386F1:
    eax = ebp + (-0x10); /* 0x110386F1: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x110386F4: push esi */
    /* test ebx, ebx */ /* 0x110386F5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1103870F; /* 0x110386F7: jle 0x1103870f */
L_110386F9:
    fp_push(*(float*)&MEM32(0x110037FC)); /* 0x110386F9: fld dword ptr [0x110037fc] */
    PUSH32(esp, ecx); /* 0x110386FF: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11038700: fstp dword ptr [esp] */
    PUSH32(esp, 3); /* 0x11038703: push 3 */
    esi = POP32_VAL(esp); /* 0x11038705: pop esi */
    PUSH32(esp, esi); /* 0x11038706: push esi */
    PUSH32(esp, eax); /* 0x11038707: push eax */
    RECOMP_CALL(sub_110390AC); /* 0x11038708: call 0x110390ac */
    RECOMP_FLAGS_IN();
    goto L_11038720; /* 0x1103870D: jmp 0x11038720 */
L_1103870F:
    PUSH32(esp, 0x110037F0u); /* 0x1103870F: push 0x110037f0 */
    PUSH32(esp, 3); /* 0x11038714: push 3 */
    esi = POP32_VAL(esp); /* 0x11038716: pop esi */
    PUSH32(esp, esi); /* 0x11038717: push esi */
    PUSH32(esp, eax); /* 0x11038718: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x11038719: neg ebx */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_11038DCA); /* 0x1103871B: call 0x11038dca */
    RECOMP_FLAGS_IN();
L_11038720:
    edi = MEM32(ebp + (-0x38)); /* 0x11038720: mov edi, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11038723: add esp, 0xc */
    _flag_k = FK_ADD;
L_11038726:
    /* test LO8(ebx), 1 */ /* 0x11038726: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103873E; /* 0x11038729: je 0x1103873e */
L_1103872B:
    eax = ebp + (-0x34); /* 0x1103872B: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1103872E: push eax */
    PUSH32(esp, esi); /* 0x1103872F: push esi */
    eax = ebp + (-0x10); /* 0x11038730: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11038733: push eax */
    PUSH32(esp, esi); /* 0x11038734: push esi */
    PUSH32(esp, edi); /* 0x11038735: push edi */
    RECOMP_CALL(sub_11038F71); /* 0x11038736: call 0x11038f71 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1103873B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1103873E:
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x1103873E: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_11038768; /* 0x11038740: je 0x11038768 */
L_11038742:
    eax = ebp + (-0x10); /* 0x11038742: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11038745: push eax */
    eax = ebp + (-0x1C); /* 0x11038746: lea eax, [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x11038749: push esi */
    PUSH32(esp, eax); /* 0x1103874A: push eax */
    RECOMP_CALL(sub_11038DCA); /* 0x1103874B: call 0x11038dca */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x11038750: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x11038753: push eax */
    PUSH32(esp, esi); /* 0x11038754: push esi */
    eax = ebp + (-0x1C); /* 0x11038755: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11038758: push eax */
    eax = ebp + (-0x10); /* 0x11038759: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1103875C: push esi */
    PUSH32(esp, eax); /* 0x1103875D: push eax */
    RECOMP_CALL(sub_11038F71); /* 0x1103875E: call 0x11038f71 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x11038763: add esp, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_11038726; /* 0x11038766: jmp 0x11038726 */
L_11038768:
    PUSH32(esp, esi); /* 0x11038768: push esi */
    PUSH32(esp, edi); /* 0x11038769: push edi */
    RECOMP_CALL(sub_11038BC8); /* 0x1103876A: call 0x11038bc8 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x3C)); /* 0x1103876F: mov edi, dword ptr [ebp - 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x11038772: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x11038775: fld dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x11038778: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103877A: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103877C: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x1103877E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103877F: pop ecx */
    esi = POP32_VAL(esp); /* 0x11038780: pop esi */
    /* test HI8(eax), 0x44u */ /* 0x11038781: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_110387AB; /* 0x11038784: jnp 0x110387ab */
L_11038786:
    fp_push(*(float*)&MEM32(0x11063100)); /* 0x11038786: fld dword ptr [0x11063100] */
    fp_push(_st[0]); /* 0x1103878C: fld st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1103878E: fucomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038790: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11038792: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x11038794: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_110387AB; /* 0x11038797: jnp 0x110387ab */
L_11038799:
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x11038799: fld dword ptr [ebp - 0x38] */
    fp_xch(1); /* 0x1103879C: fxch st(1) */
    _st[0] = -_st[0]; /* 0x1103879E: fchs  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110387A0: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110387A2: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x110387A4: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_110387C0; /* 0x110387A7: jp 0x110387c0 */
L_110387A9:
    goto L_110387AD; /* 0x110387A9: jmp 0x110387ad */
L_110387AB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110387AB: fstp st(0) */
L_110387AD:
    RECOMP_ICALL(MEM32(0x11069140)); /* 0x110387AD: call dword ptr [0x11069140] */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x110387B3: mov dword ptr [eax], 0x22 */
    /* test edi, edi */ /* 0x110387B9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_110387C0; /* 0x110387BB: je 0x110387c0 */
L_110387BD:
    _flag_a = (uint32_t)((MEM32(edi) | 1)); _flag_b = (uint32_t)((MEM32(edi) | 1));
    MEM32(edi) = MEM32(edi) | 1; /* 0x110387BD: or dword ptr [edi], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_110387C0:
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x110387C0: fld dword ptr [ebp - 0x38] */
    goto L_110387CF; /* 0x110387C3: jmp 0x110387cf */
L_110387C5:
    PUSH32(esp, 3); /* 0x110387C5: push 3 */
    PUSH32(esp, ecx); /* 0x110387C7: push ecx */
    RECOMP_CALL(sub_11038BC8); /* 0x110387C8: call 0x11038bc8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110387CD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110387CE: pop ecx */
L_110387CF:
    ecx = MEM32(ebp + (-0x4)); /* 0x110387CF: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x110387D2: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x110387D3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x110387D5: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x110387D6: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x110387DB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110387DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110387DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_110387DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110387DFu);

L_110387DF:
    PUSH32(esp, ebp); /* 0x110387DF: push ebp */
    ebp = esp; /* 0x110387E0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x110387E2: push esi */
    esi = MEM32(ebp + 0xC); /* 0x110387E3: mov esi, dword ptr [ebp + 0xc] */
    edx = 0xFFu; /* 0x110387E6: mov edx, 0xff */
    SET_LO16(eax, MEM16(esi + 0x2)); /* 0x110387EB: mov ax, word ptr [esi + 2] */
    if (7u) _cf = (((LO16(eax)) >> 6) & 1u); /* 0x110387EF: shr ax, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) >> 7u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) >> 7u); /* 0x110387EF: shr ax, 7 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(edx)); /* 0x110387F3: and ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = (uint32_t)LO16(eax); /* 0x110387F6: movzx ecx, ax */
    /* cmp LO16(ecx), LO16(edx) */ /* 0x110387F9: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103881B; /* 0x110387FC: jne 0x1103881b */
L_110387FE:
    eax = MEM32(ebp + 0x8); /* 0x110387FE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11038801: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x11038803: mov word ptr [eax], cx */
    /* test MEM8(esi + 0x2), 0x7Fu */ /* 0x11038806: test byte ptr [esi + 2], 0x7f */
    _flag_a = (uint32_t)(MEM8(esi + 0x2)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11038816; /* 0x1103880A: jne 0x11038816 */
L_1103880C:
    /* cmp MEM16(esi), LO16(ecx) */ /* 0x1103880C: cmp word ptr [esi], cx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11038816; /* 0x1103880F: jne 0x11038816 */
L_11038811:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11038811: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11038813: inc eax */
    _flag_k = FK_INC;
    goto L_11038861; /* 0x11038814: jmp 0x11038861 */
L_11038816:
    PUSH32(esp, 2); /* 0x11038816: push 2 */
    eax = POP32_VAL(esp); /* 0x11038818: pop eax */
    goto L_11038861; /* 0x11038819: jmp 0x11038861 */
L_1103881B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103881B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1103881D: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_1103883D; /* 0x11038820: jl 0x1103883d */
L_11038822:
    PUSH32(esp, esi); /* 0x11038822: push esi */
    RECOMP_CALL(sub_110385ED); /* 0x11038823: call 0x110385ed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11038828: pop ecx */
    ecx = (uint32_t)LO16(eax); /* 0x11038829: movzx ecx, ax */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1103882C: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1103883D; /* 0x1103882F: jle 0x1103883d */
L_11038831:
    eax = MEM32(ebp + 0x8); /* 0x11038831: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11038834: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x11038836: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11038839: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_11038861; /* 0x1103883B: jmp 0x11038861 */
L_1103883D:
    SET_LO16(eax, MEM16(esi + 0x2)); /* 0x1103883D: mov ax, word ptr [esi + 2] */
    edx = 0xBF7Fu; /* 0x11038841: mov edx, 0xbf7f */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(edx)); /* 0x11038846: and ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFF82u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFF82u; /* 0x11038849: add ecx, -0x7e */
    _flag_k = FK_ADD;
    edx = 0x3F00u; /* 0x1103884C: mov edx, 0x3f00 */
    _flag_a = (uint32_t)((LO16(eax) | LO16(edx))) << 16; _flag_b = (uint32_t)((LO16(eax) | LO16(edx))) << 16;
    SET_LO16(eax, LO16(eax) | LO16(edx)); /* 0x11038851: or ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x11038854: mov word ptr [esi + 2], ax */
    eax = MEM32(ebp + 0x8); /* 0x11038858: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1103885B: mov word ptr [eax], cx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1103885E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_11038861:
    esi = POP32_VAL(esp); /* 0x11038861: pop esi */
    ebp = POP32_VAL(esp); /* 0x11038862: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11038863: ret  */
    RECOMP_REGS_OUT();
}

void sub_11038864(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11038864u);

L_11038864:
    PUSH32(esp, ebp); /* 0x11038864: push ebp */
    ebp = esp; /* 0x11038865: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x11038867: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1103886A: fld dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1103886D: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1103886E: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11038871: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11038872: mov edi, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x11038875: fstp dword ptr [ebp - 0xc] */
    /* test ebx, ebx */ /* 0x11038878: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11038B7D; /* 0x1103887A: je 0x11038b7d */
L_11038880:
    PUSH32(esp, esi); /* 0x11038880: push esi */
    eax = ebp + (-0xC); /* 0x11038881: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x11038884: push eax */
    eax = ebp + 0x8; /* 0x11038885: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11038888: push eax */
    RECOMP_CALL(sub_110387DF); /* 0x11038889: call 0x110387df */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1103888E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1103888F: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x11038890: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11038893: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11038895: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103891E; /* 0x11038898: jge 0x1103891e */
L_1103889E:
    PUSH32(esp, 2); /* 0x1103889E: push 2 */
    esi = POP32_VAL(esp); /* 0x110388A0: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x110388A1: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11038914; /* 0x110388A4: je 0x11038914 */
L_110388A6:
    PUSH32(esp, edi); /* 0x110388A6: push edi */
    RECOMP_CALL(sub_110129D2); /* 0x110388A7: call 0x110129d2 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x110388AC: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x110388AF: pop ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x110388B0: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11038914; /* 0x110388B3: jle 0x11038914 */
L_110388B5:
    /* cmp LO16(eax), LO16(esi) */ /* 0x110388B5: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11038B7C; /* 0x110388B8: je 0x11038b7c */
L_110388BE:
    PUSH32(esp, edi); /* 0x110388BE: push edi */
    RECOMP_CALL(sub_11012A1E); /* 0x110388BF: call 0x11012a1e */
    RECOMP_FLAGS_IN();
    ecx = 0x8000u; /* 0x110388C4: mov ecx, 0x8000 */
    SET_LO16(eax, MEM16(eax)); /* 0x110388C9: mov ax, word ptr [eax] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(ecx)); /* 0x110388CC: and ax, cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = (uint32_t)LO16(eax); /* 0x110388CF: movzx esi, ax */
    eax = ebp + 0x10; /* 0x110388D2: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x110388D5: push eax */
    RECOMP_CALL(sub_11012A1E); /* 0x110388D6: call 0x11012a1e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x110388DB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110388DC: pop ecx */
    ecx = 0x8000u; /* 0x110388DD: mov ecx, 0x8000 */
    SET_LO16(eax, MEM16(eax)); /* 0x110388E2: mov ax, word ptr [eax] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(ecx)); /* 0x110388E5: and ax, cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* cmp LO16(eax), LO16(esi) */ /* 0x110388E8: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11038B7C; /* 0x110388EB: je 0x11038b7c */
L_110388F1:
    PUSH32(esp, 1); /* 0x110388F1: push 1 */
    RECOMP_CALL(sub_1102F9F9); /* 0x110388F3: call 0x1102f9f9 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x11063110)); /* 0x110388F8: fld dword ptr [0x11063110] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x110388FE: fstp dword ptr [edi] */
    ecx = POP32_VAL(esp); /* 0x11038900: pop ecx */
    /* cmp ebx, 1 */ /* 0x11038901: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11038B7C; /* 0x11038904: jle 0x11038b7c */
L_1103890A:
    fp_push(0.0); /* 0x1103890A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x4) = _v; } /* 0x1103890C: fstp dword ptr [edi + 4] */
    goto L_11038B7C; /* 0x1103890F: jmp 0x11038b7c */
L_11038914:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x11038914: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x11038917: fstp dword ptr [edi] */
    goto L_11038B7C; /* 0x11038919: jmp 0x11038b7c */
L_1103891E:
    /* test LO16(eax), LO16(eax) */ /* 0x1103891E: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11038B7C; /* 0x11038921: jns 0x11038b7c */
L_11038927:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11038927: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0x100u; /* 0x11038929: mov dword ptr [ebp - 4], 0x100 */
    /* test ebx, ebx */ /* 0x11038930: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11038B7C; /* 0x11038932: jle 0x11038b7c */
L_11038938:
    eax = edi + esi * 4; /* 0x11038938: lea eax, [edi + esi*4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1103893B: fld dword ptr [eax] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1103893D: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x10); /* 0x11038940: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x11038943: push eax */
    eax = ebp + 0xC; /* 0x11038944: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11038947: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x11038948: fstp dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_110387DF); /* 0x1103894B: call 0x110387df */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11038950: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11038951: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x11038952: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11038955: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11038957: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_11038B7C; /* 0x1103895A: jl 0x11038b7c */
L_11038960:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x11038960: fld dword ptr [ebp + 0x10] */
    /* test LO16(eax), LO16(eax) */ /* 0x11038963: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11038B6C; /* 0x11038966: je 0x11038b6c */
L_1103896C:
    edx = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x1103896C: movsx edx, word ptr [ebp + 0xc] */
    eax = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x11038970: movsx eax, word ptr [ebp + 8] */
    ecx = edx; /* 0x11038974: mov ecx, edx */
    fp_push(0.0); /* 0x11038976: fldz  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x11038978: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 0xFFFFFFF4u */ /* 0x1103897A: cmp ecx, -0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_110389C9; /* 0x1103897D: jg 0x110389c9 */
L_1103897F:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103897F: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038981: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038983: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_110389C9; /* 0x11038986: jnp 0x110389c9 */
L_11038988:
    ecx = esi; /* 0x11038988: mov ecx, esi */
L_1103898A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1103898A: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x1103898B: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1103899B; /* 0x1103898D: jge 0x1103899b */
L_1103898F:
    fp_push(*(float*)&MEM32(edi + ecx * 4)); /* 0x1103898F: fld dword ptr [edi + ecx*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038992: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038994: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038996: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1103898A; /* 0x11038999: jp 0x1103898a */
L_1103899B:
    eax = ebx + (-0x1); /* 0x1103899B: lea eax, [ebx - 1] */
    /* cmp ecx, eax */ /* 0x1103899E: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_110389A5; /* 0x110389A0: jge 0x110389a5 */
L_110389A2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x110389A2: inc ecx */
    _flag_k = FK_INC;
    goto L_110389AA; /* 0x110389A3: jmp 0x110389aa */
L_110389A5:
    /* cmp ecx, ebx */ /* 0x110389A5: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_110389AA; /* 0x110389A7: jne 0x110389aa */
L_110389A9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x110389A9: dec ecx */
    _flag_k = FK_DEC;
L_110389AA:
    /* cmp esi, ecx */ /* 0x110389AA: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_110389BA; /* 0x110389AC: jge 0x110389ba */
L_110389AE:
    fp_push(*(float*)&MEM32(edi + ecx * 4 + (-0x4))); /* 0x110389AE: fld dword ptr [edi + ecx*4 - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + ecx * 4) = _v; } /* 0x110389B2: fstp dword ptr [edi + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x110389B5: dec ecx */
    _flag_k = FK_DEC;
    /* cmp ecx, esi */ /* 0x110389B6: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_110389AE; /* 0x110389B8: jg 0x110389ae */
L_110389BA:
    eax = MEM32(ebp + (-0x8)); /* 0x110389BA: mov eax, dword ptr [ebp - 8] */
    fp_xch(1); /* 0x110389BD: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x110389BF: fstp dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x110389C1: fstp dword ptr [ebp + 0x10] */
    goto L_11038B62; /* 0x110389C4: jmp 0x11038b62 */
L_110389C9:
    PUSH32(esp, 0xCu); /* 0x110389C9: push 0xc */
    eax = POP32_VAL(esp); /* 0x110389CB: pop eax */
    /* cmp ecx, eax */ /* 0x110389CC: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_110389E6; /* 0x110389CE: jl 0x110389e6 */
L_110389D0:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110389D0: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110389D2: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x110389D4: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_110389E6; /* 0x110389D7: jnp 0x110389e6 */
L_110389D9:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110389D9: fstp st(0) */
    MEM32(ebp + (-0x4)) = edx; /* 0x110389DB: mov dword ptr [ebp - 4], edx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x110389DE: fstp st(0) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x110389E0: inc esi */
    _flag_k = FK_INC;
    goto L_11038B62; /* 0x110389E1: jmp 0x11038b62 */
L_110389E6:
    ecx = MEM32(ebp + (-0x8)); /* 0x110389E6: mov ecx, dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x110389E9: fld dword ptr [ecx] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x110389EB: faddp st(2) */
    fp_xch(1); /* 0x110389ED: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x110389EF: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x110389F2: fld dword ptr [ebp + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx) = _v; } /* 0x110389F5: fst dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x110389F7: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x110389F9: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x110389FB: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11038A32; /* 0x110389FE: jp 0x11038a32 */
L_11038A00:
    edx = esi; /* 0x11038A00: mov edx, esi */
L_11038A02:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x11038A02: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x11038A03: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11038A1D; /* 0x11038A05: jge 0x11038a1d */
L_11038A07:
    fp_push(*(float*)&MEM32(edi + edx * 4)); /* 0x11038A07: fld dword ptr [edi + edx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x11038A0A: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x11038A0D: fld dword ptr [ebp + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(edi + edx * 4 + (-0x4)) = _v; } /* 0x11038A10: fst dword ptr [edi + edx*4 - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038A14: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038A16: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038A18: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11038A02; /* 0x11038A1B: jp 0x11038a02 */
L_11038A1D:
    { float _v = (float)_st[0]; *(float*)ADDR(edi + ebx * 4 + (-0x4)) = _v; } /* 0x11038A1D: fst dword ptr [edi + ebx*4 - 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x11038A21: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038A23: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038A25: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038A27: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11038B7C; /* 0x11038A2A: jnp 0x11038b7c */
L_11038A30:
    goto L_11038A34; /* 0x11038A30: jmp 0x11038a34 */
L_11038A32:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11038A32: fstp st(0) */
L_11038A34:
    fp_push(*(float*)&MEM32(ecx)); /* 0x11038A34: fld dword ptr [ecx] */
    eax = ebp + 0x10; /* 0x11038A36: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x11038A39: push eax */
    eax = ebp + 0x8; /* 0x11038A3A: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11038A3D: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x11038A3E: fstp dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_110387DF); /* 0x11038A41: call 0x110387df */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x11038A46: mov edx, dword ptr [ebp - 4] */
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x11038A49: mov ax, word ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x11038A4D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11038A4E: pop ecx */
    MEM16(ebp + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x11038A4F: mov word ptr [ebp - 2], ax */
    ecx = edx + (-0xC); /* 0x11038A53: lea ecx, [edx - 0xc] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x11038A56: cwde  */
    /* cmp ecx, eax */ /* 0x11038A57: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11038AF8; /* 0x11038A59: jge 0x11038af8 */
L_11038A5F:
    SET_LO16(eax, MEM16(ebp + (-0x2))); /* 0x11038A5F: mov ax, word ptr [ebp - 2] */
    PUSH32(esp, 0xCu); /* 0x11038A63: push 0xc */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - LO16(edx)); /* 0x11038A65: sub ax, dx */
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = POP32_VAL(esp); /* 0x11038A68: pop ecx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x11038A69: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    eax = (uint32_t)LO16(eax); /* 0x11038A6C: movzx eax, ax */
    PUSH32(esp, eax); /* 0x11038A6F: push eax */
    eax = ebp + 0x10; /* 0x11038A70: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x11038A73: push eax */
    RECOMP_CALL(sub_11038523); /* 0x11038A74: call 0x11038523 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x11038A79: movsx eax, word ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x11038A7D: push eax */
    eax = ebp + 0x10; /* 0x11038A7E: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x11038A81: push eax */
    RECOMP_CALL(sub_1102FC8B); /* 0x11038A82: call 0x1102fc8b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x11038A87: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x11038A8A: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax)); /* 0x11038A8D: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x10); /* 0x11038A8F: fsub dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x11038A92: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x11038A95: fld dword ptr [ebp - 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax) = _v; } /* 0x11038A98: fst dword ptr [eax] */
    fp_push(0.0); /* 0x11038A9A: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038A9C: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038A9E: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11038AA0: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x11038AA2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11038ACA; /* 0x11038AA5: jp 0x11038aca */
L_11038AA7:
    ecx = esi; /* 0x11038AA7: mov ecx, esi */
L_11038AA9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11038AA9: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x11038AAA: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11038AC4; /* 0x11038AAC: jge 0x11038ac4 */
L_11038AAE:
    fp_push(*(float*)&MEM32(edi + ecx * 4)); /* 0x11038AAE: fld dword ptr [edi + ecx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x11038AB1: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x11038AB4: fld dword ptr [ebp - 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(edi + ecx * 4 + (-0x4)) = _v; } /* 0x11038AB7: fst dword ptr [edi + ecx*4 - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038ABB: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038ABD: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038ABF: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11038AA9; /* 0x11038AC2: jp 0x11038aa9 */
L_11038AC4:
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + ebx * 4 + (-0x4)) = _v; } /* 0x11038AC4: fstp dword ptr [edi + ebx*4 - 4] */
    goto L_11038ACC; /* 0x11038AC8: jmp 0x11038acc */
L_11038ACA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11038ACA: fstp st(0) */
L_11038ACC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x11038ACC: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_11038ADB; /* 0x11038ACD: jne 0x11038adb */
L_11038ACF:
    MEM32(ebp + (-0x4)) = 0x100u; /* 0x11038ACF: mov dword ptr [ebp - 4], 0x100 */
    goto L_11038B62; /* 0x11038AD6: jmp 0x11038b62 */
L_11038ADB:
    fp_push(*(float*)&MEM32(edi + esi * 4 + (-0x4))); /* 0x11038ADB: fld dword ptr [edi + esi*4 - 4] */
    eax = ebp + (-0xC); /* 0x11038ADF: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x11038AE2: push eax */
    eax = ebp + 0xC; /* 0x11038AE3: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11038AE6: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x11038AE7: fstp dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_110387DF); /* 0x11038AEA: call 0x110387df */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x11038AEF: movsx eax, word ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x11038AF3: mov dword ptr [ebp - 4], eax */
    goto L_11038B60; /* 0x11038AF6: jmp 0x11038b60 */
L_11038AF8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11038AF8: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x11038AF9: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11038B7C; /* 0x11038AFB: je 0x11038b7c */
L_11038AFD:
    eax = MEM32(ebp + (-0x8)); /* 0x11038AFD: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x11038B00: push eax */
    fp_push(*(float*)&MEM32(eax)); /* 0x11038B01: fld dword ptr [eax] */
    eax = ebp + 0xC; /* 0x11038B03: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11038B06: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x11038B07: fstp dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_110387DF); /* 0x11038B0A: call 0x110387df */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x11038B0F: push 0xc */
    eax = POP32_VAL(esp); /* 0x11038B11: pop eax */
    PUSH32(esp, eax); /* 0x11038B12: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x11038B13: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x11038B16: push eax */
    RECOMP_CALL(sub_11038523); /* 0x11038B17: call 0x11038523 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x11038B1C: movsx eax, word ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11038B20: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x11038B21: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1102FC8B); /* 0x11038B24: call 0x1102fc8b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x11038B29: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x11038B2C: add esp, 0x18 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x11038B2F: fld dword ptr [ebp + 0x10] */
    eax = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x11038B32: movsx eax, word ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x11038B36: mov dword ptr [ebp - 4], eax */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x11038B39: fsub dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x11038B3B: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x11038B3E: fld dword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x11038B41: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038B43: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038B45: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038B47: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11038B50; /* 0x11038B4A: jp 0x11038b50 */
L_11038B4C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11038B4C: fstp st(0) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x11038B4E: fld dword ptr [ecx] */
L_11038B50:
    eax = ebp + (-0xC); /* 0x11038B50: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x11038B53: push eax */
    eax = ebp + 0x8; /* 0x11038B54: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x11038B57: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x11038B58: fstp dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_110387DF); /* 0x11038B5B: call 0x110387df */
    RECOMP_FLAGS_IN();
L_11038B60:
    ecx = POP32_VAL(esp); /* 0x11038B60: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11038B61: pop ecx */
L_11038B62:
    /* cmp esi, ebx */ /* 0x11038B62: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11038938; /* 0x11038B64: jl 0x11038938 */
L_11038B6A:
    goto L_11038B7C; /* 0x11038B6A: jmp 0x11038b7c */
L_11038B6C:
    ecx = esi + 0x1; /* 0x11038B6C: lea ecx, [esi + 1] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + esi * 4) = _v; } /* 0x11038B6F: fstp dword ptr [edi + esi*4] */
    /* cmp ecx, ebx */ /* 0x11038B72: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11038B7C; /* 0x11038B74: jge 0x11038b7c */
L_11038B76:
    fp_push(0.0); /* 0x11038B76: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + esi * 4 + 0x4) = _v; } /* 0x11038B78: fstp dword ptr [edi + esi*4 + 4] */
L_11038B7C:
    esi = POP32_VAL(esp); /* 0x11038B7C: pop esi */
L_11038B7D:
    eax = edi; /* 0x11038B7D: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x11038B7F: pop edi */
    ebx = POP32_VAL(esp); /* 0x11038B80: pop ebx */
    esp = ebp; /* 0x11038B81: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11038B83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11038B84: ret  */
    RECOMP_REGS_OUT();
}

void sub_11038B85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11038B85u);

L_11038B85:
    PUSH32(esp, ebp); /* 0x11038B85: push ebp */
    ebp = esp; /* 0x11038B86: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11038B88: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11038B89: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x11038B8B: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11038BC2; /* 0x11038B8E: jle 0x11038bc2 */
L_11038B90:
    fp_push(0.0); /* 0x11038B90: fldz  */
    PUSH32(esp, edi); /* 0x11038B92: push edi */
    edi = MEM32(ebp + 0x10); /* 0x11038B93: mov edi, dword ptr [ebp + 0x10] */
L_11038B96:
    fp_push(*(float*)&MEM32(edi + esi * 4)); /* 0x11038B96: fld dword ptr [edi + esi*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038B99: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038B9B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038B9D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11038BC1; /* 0x11038BA0: jnp 0x11038bc1 */
L_11038BA2:
    fp_push(*(float*)&MEM32(edi + esi * 4)); /* 0x11038BA2: fld dword ptr [edi + esi*4] */
    PUSH32(esp, ecx); /* 0x11038BA5: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11038BA6: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11038BA9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11038BAC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11038864); /* 0x11038BAF: call 0x11038864 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x11038BB4: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11038BB6: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11038BB9: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x11038BBA: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11038B96; /* 0x11038BBD: jl 0x11038b96 */
L_11038BBF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11038BBF: fstp st(0) */
L_11038BC1:
    edi = POP32_VAL(esp); /* 0x11038BC1: pop edi */
L_11038BC2:
    eax = MEM32(ebp + 0x8); /* 0x11038BC2: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x11038BC5: pop esi */
    ebp = POP32_VAL(esp); /* 0x11038BC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11038BC7: ret  */
    RECOMP_REGS_OUT();
}

void sub_11038BC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11038BC8u);

L_11038BC8:
    PUSH32(esp, ebp); /* 0x11038BC8: push ebp */
    ebp = esp; /* 0x11038BC9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11038BCB: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x11038BCC: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x11038BCF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11038BDA; /* 0x11038BD1: jne 0x11038bda */
L_11038BD3:
    fp_push(0.0); /* 0x11038BD3: fldz  */
    goto L_11038C86; /* 0x11038BD5: jmp 0x11038c86 */
L_11038BDA:
    PUSH32(esp, esi); /* 0x11038BDA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11038BDB: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x11038BDE: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x11038BDF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x11038BE1: inc edi */
    _flag_k = FK_INC;
    /* cmp ecx, edi */ /* 0x11038BE2: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11038C82; /* 0x11038BE4: je 0x11038c82 */
L_11038BEA:
    fp_push(*(float*)&MEM32(esi)); /* 0x11038BEA: fld dword ptr [esi] */
    fp_push(0.0); /* 0x11038BEC: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038BEE: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038BF0: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11038BF2: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x11038BF4: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11038C80; /* 0x11038BF7: jnp 0x11038c80 */
L_11038BFD:
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x11038BFD: fld dword ptr [esi + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038C00: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038C02: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038C04: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11038C80; /* 0x11038C07: jnp 0x11038c80 */
L_11038C09:
    /* cmp ecx, 2 */ /* 0x11038C09: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11038C71; /* 0x11038C0C: je 0x11038c71 */
L_11038C0E:
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x11038C0E: fld dword ptr [esi + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038C11: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038C13: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038C15: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11038C71; /* 0x11038C18: jnp 0x11038c71 */
L_11038C1A:
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x11038C1A: fld dword ptr [esi + 4] */
    _st[0] += (double)*(float*)ADDR(esi); /* 0x11038C1D: fadd dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x11038C1F: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x11038C22: fld dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x11038C25: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x11038C28: fld dword ptr [esi + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038C2B: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038C2D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038C2F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11038C41; /* 0x11038C32: jnp 0x11038c41 */
L_11038C34:
    eax = ebp + 0xC; /* 0x11038C34: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x11038C37: push eax */
    RECOMP_CALL(sub_110127EC); /* 0x11038C38: call 0x110127ec */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11038C3D: pop ecx */
    _flag_a = (uint32_t)((MEM16(eax) | LO16(edi))) << 16; _flag_b = (uint32_t)((MEM16(eax) | LO16(edi))) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) | LO16(edi)); /* 0x11038C3E: or word ptr [eax], di */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_11038C41:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x11038C41: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x11038C44: fld st(0) */
    _st[0] -= (double)*(float*)ADDR(esi); /* 0x11038C46: fsub dword ptr [esi] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x11038C48: fld dword ptr [esi + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038C4B: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038C4D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038C4F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_11038C5F; /* 0x11038C52: jp 0x11038c5f */
L_11038C54:
    _st[0] += (double)*(float*)ADDR(ebp + 0xC); /* 0x11038C54: fadd dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x11038C57: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x11038C5A: fld dword ptr [ebp + 0xc] */
    goto L_11038C84; /* 0x11038C5D: jmp 0x11038c84 */
L_11038C5F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11038C5F: fstp st(0) */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x11038C61: fld dword ptr [esi + 4] */
    _st[0] += (double)*(float*)ADDR(ebp + 0xC); /* 0x11038C64: fadd dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(esi); /* 0x11038C67: fadd dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x11038C69: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x11038C6C: fld dword ptr [ebp + 0xc] */
    goto L_11038C84; /* 0x11038C6F: jmp 0x11038c84 */
L_11038C71:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11038C71: fstp st(0) */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x11038C73: fld dword ptr [esi + 4] */
    _st[0] += (double)*(float*)ADDR(esi); /* 0x11038C76: fadd dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x11038C78: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x11038C7B: fld dword ptr [ebp + 0xc] */
    goto L_11038C84; /* 0x11038C7E: jmp 0x11038c84 */
L_11038C80:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11038C80: fstp st(0) */
L_11038C82:
    fp_push(*(float*)&MEM32(esi)); /* 0x11038C82: fld dword ptr [esi] */
L_11038C84:
    edi = POP32_VAL(esp); /* 0x11038C84: pop edi */
    esi = POP32_VAL(esp); /* 0x11038C85: pop esi */
L_11038C86:
    esp = ebp; /* 0x11038C86: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11038C88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11038C89: ret  */
    RECOMP_REGS_OUT();
}

void sub_11038C8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11038C8Au);

L_11038C8A:
    PUSH32(esp, ebp); /* 0x11038C8A: push ebp */
    ebp = esp; /* 0x11038C8B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11038C8D: push ecx */
    PUSH32(esp, esi); /* 0x11038C8E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11038C8F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11038C92: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11038C93: mov edi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x11038C96: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11038D7F; /* 0x11038C98: je 0x11038d7f */
L_11038C9E:
    PUSH32(esp, edi); /* 0x11038C9E: push edi */
    RECOMP_CALL(sub_110129D2); /* 0x11038C9F: call 0x110129d2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11038CA4: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x11038CA5: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11038CA8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11038CAA: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_11038CCF; /* 0x11038CAD: jg 0x11038ccf */
L_11038CAF:
    /* cmp LO16(eax), 1 */ /* 0x11038CAF: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11038CB9; /* 0x11038CB3: jne 0x11038cb9 */
L_11038CB5:
    fp_push(0.0); /* 0x11038CB5: fldz  */
    goto L_11038CC8; /* 0x11038CB7: jmp 0x11038cc8 */
L_11038CB9:
    /* test LO16(eax), LO16(eax) */ /* 0x11038CB9: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11038D7F; /* 0x11038CBC: jne 0x11038d7f */
L_11038CC2:
    fp_push(*(float*)&MEM32(0x11063100)); /* 0x11038CC2: fld dword ptr [0x11063100] */
L_11038CC8:
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x11038CC8: fstp dword ptr [edi] */
    goto L_11038D7F; /* 0x11038CCA: jmp 0x11038d7f */
L_11038CCF:
    fp_push(*(float*)&MEM32(edi)); /* 0x11038CCF: fld dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x11038CD1: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x11038CD2: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x11038CD5: push edi */
    PUSH32(esp, esi); /* 0x11038CD6: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x11038CD7: fstp dword ptr [ebp + 0xc] */
    eax = ebx + esi * 4; /* 0x11038CDA: lea eax, [ebx + esi*4] */
    ecx = eax + esi * 4; /* 0x11038CDD: lea ecx, [eax + esi*4] */
    PUSH32(esp, eax); /* 0x11038CE0: push eax */
    MEM32(ebp + 0x8) = ecx; /* 0x11038CE1: mov dword ptr [ebp + 8], ecx */
    RECOMP_CALL(sub_11038DCA); /* 0x11038CE4: call 0x11038dca */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x11003808)); /* 0x11038CE9: fld dword ptr [0x11003808] */
    eax = ebx + esi * 4; /* 0x11038CEF: lea eax, [ebx + esi*4] */
    ecx = POP32_VAL(esp); /* 0x11038CF2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11038CF3: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11038CF4: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x11038CF7: push esi */
    PUSH32(esp, eax); /* 0x11038CF8: push eax */
    RECOMP_CALL(sub_11038DE7); /* 0x11038CF9: call 0x11038de7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11038CFE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11038D00: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11038D03: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x11038D04: mov dword ptr [ebp - 4], eax */
    /* cmp esi, eax */ /* 0x11038D07: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11038D14; /* 0x11038D09: jle 0x11038d14 */
L_11038D0B:
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x11038D0B: fld dword ptr [edi + 4] */
    _st[0] += (double)*(float*)ADDR(ebp + 0xC); /* 0x11038D0E: fadd dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x11038D11: fstp dword ptr [ebp + 0xc] */
L_11038D14:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x11038D14: fld dword ptr [ebp + 0xc] */
    fp_push(1.0); /* 0x11038D17: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x11038D19: fdivrp st(1) */
    PUSH32(esp, ecx); /* 0x11038D1B: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x11038D1C: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x11038D1F: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11038D22: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x11038D25: push esi */
    PUSH32(esp, edi); /* 0x11038D26: push edi */
    RECOMP_CALL(sub_110390AC); /* 0x11038D27: call 0x110390ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11038D2C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, 1 */ /* 0x11038D2F: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11038D7E; /* 0x11038D32: jle 0x11038d7e */
L_11038D34:
    PUSH32(esp, edi); /* 0x11038D34: push edi */
    PUSH32(esp, esi); /* 0x11038D35: push esi */
    PUSH32(esp, ebx); /* 0x11038D36: push ebx */
    RECOMP_CALL(sub_11038DCA); /* 0x11038D37: call 0x11038dca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11038D3C: push dword ptr [ebp + 8] */
    eax = ebx + esi * 4; /* 0x11038D3F: lea eax, [ebx + esi*4] */
    PUSH32(esp, esi); /* 0x11038D42: push esi */
    PUSH32(esp, eax); /* 0x11038D43: push eax */
    PUSH32(esp, esi); /* 0x11038D44: push esi */
    PUSH32(esp, ebx); /* 0x11038D45: push ebx */
    RECOMP_CALL(sub_11038F71); /* 0x11038D46: call 0x11038f71 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x11038D4B: fld1  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x11038D4D: add esp, 0x1c */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11038D50: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x11038D53: push esi */
    PUSH32(esp, ebx); /* 0x11038D54: push ebx */
    RECOMP_CALL(sub_11038864); /* 0x11038D55: call 0x11038864 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11038D5A: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x11038D5D: push esi */
    PUSH32(esp, edi); /* 0x11038D5E: push edi */
    PUSH32(esp, esi); /* 0x11038D5F: push esi */
    PUSH32(esp, ebx); /* 0x11038D60: push ebx */
    RECOMP_CALL(sub_11038F71); /* 0x11038D61: call 0x11038f71 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11038D66: push esi */
    PUSH32(esp, ebx); /* 0x11038D67: push ebx */
    PUSH32(esp, esi); /* 0x11038D68: push esi */
    PUSH32(esp, edi); /* 0x11038D69: push edi */
    RECOMP_CALL(sub_11038B85); /* 0x11038D6A: call 0x11038b85 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x11038D6F: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x11038D72: add esp, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x11038D75: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x11038D77: mov dword ptr [ebp - 4], eax */
    /* cmp eax, esi */ /* 0x11038D7A: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11038D34; /* 0x11038D7C: jl 0x11038d34 */
L_11038D7E:
    ebx = POP32_VAL(esp); /* 0x11038D7E: pop ebx */
L_11038D7F:
    eax = edi; /* 0x11038D7F: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x11038D81: pop edi */
    esi = POP32_VAL(esp); /* 0x11038D82: pop esi */
    esp = ebp; /* 0x11038D83: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11038D85: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11038D86: ret  */
    RECOMP_REGS_OUT();
}

void sub_11038D87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11038D87u);

L_11038D87:
    PUSH32(esp, ebp); /* 0x11038D87: push ebp */
    ebp = esp; /* 0x11038D88: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11038D8A: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11038D8B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x11038D8D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11038D8E: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x11038D91: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11038DC4; /* 0x11038D94: jle 0x11038dc4 */
L_11038D96:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11038D96: push dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(edi + esi * 4)); /* 0x11038D99: fld dword ptr [edi + esi*4] */
    PUSH32(esp, ecx); /* 0x11038D9C: push ecx */
    PUSH32(esp, ecx); /* 0x11038D9D: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x11038D9E: fstp qword ptr [esp] */
    RECOMP_ICALL(MEM32(0x11069104)); /* 0x11038DA1: call dword ptr [0x11069104] */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x11038DA7: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11038DAA: fld dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11038DAD: add esp, 0xc */
    _flag_k = FK_ADD;
    { float _v = (float)_st[0]; *(float*)ADDR(edi + esi * 4) = _v; } /* 0x11038DB0: fst dword ptr [edi + esi*4] */
    fp_push(0.0); /* 0x11038DB3: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038DB5: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038DB7: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038DB9: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11038DC4; /* 0x11038DBC: jnp 0x11038dc4 */
L_11038DBE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11038DBE: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x11038DBF: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11038D96; /* 0x11038DC2: jl 0x11038d96 */
L_11038DC4:
    eax = edi; /* 0x11038DC4: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x11038DC6: pop edi */
    esi = POP32_VAL(esp); /* 0x11038DC7: pop esi */
    ebp = POP32_VAL(esp); /* 0x11038DC8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11038DC9: ret  */
    RECOMP_REGS_OUT();
}

void sub_11038DCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11038DCAu);

L_11038DCA:
    PUSH32(esp, ebp); /* 0x11038DCA: push ebp */
    ebp = esp; /* 0x11038DCB: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x11038DCD: mov eax, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x11038DD0: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x11038DD0: shl eax, 2 */
    PUSH32(esp, eax); /* 0x11038DD3: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x11038DD4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11038DD7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103B300); /* 0x11038DDA: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11038DDF: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11038DE2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x11038DE5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11038DE6: ret  */
    RECOMP_REGS_OUT();
}

void sub_11038DE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11038DE7u);

L_11038DE7:
    PUSH32(esp, ebp); /* 0x11038DE7: push ebp */
    ebp = esp; /* 0x11038DE8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x11038DEA: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x11038DED: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x11038DF2: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x11038DF4: mov dword ptr [ebp - 4], eax */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x11038DF7: fld dword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x11038DFA: fldz  */
    PUSH32(esp, ebx); /* 0x11038DFC: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x11038DFD: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11038E00: push esi */
    PUSH32(esp, edi); /* 0x11038E01: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11038E02: mov edi, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x11038E05: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_11038E5E; /* 0x11038E07: jle 0x11038e5e */
L_11038E09:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11038E09: fstp st(0) */
    eax = ebp + (-0x14); /* 0x11038E0B: lea eax, [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x11038E0E: fmul dword ptr [edi] */
    PUSH32(esp, eax); /* 0x11038E10: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x11038E11: fstp dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_110129D2); /* 0x11038E14: call 0x110129d2 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x11038E19: movzx esi, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11038E1C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x11038E1E: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x11038E1F: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_11038E55; /* 0x11038E22: jg 0x11038e55 */
L_11038E24:
    /* cmp LO16(esi), 2 */ /* 0x11038E24: cmp si, 2 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(2) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11038E32; /* 0x11038E28: jne 0x11038e32 */
L_11038E2A:
    PUSH32(esp, 1); /* 0x11038E2A: push 1 */
    RECOMP_CALL(sub_1102F9F9); /* 0x11038E2C: call 0x1102f9f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11038E31: pop ecx */
L_11038E32:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x11038E32: fld dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11038E35: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x11038E37: fstp dword ptr [edi] */
    /* cmp LO16(eax), LO16(esi) */ /* 0x11038E39: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_11038F50; /* 0x11038E3C: jge 0x11038f50 */
L_11038E42:
    /* cmp ebx, 1 */ /* 0x11038E42: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11038F50; /* 0x11038E45: jle 0x11038f50 */
L_11038E4B:
    fp_push(0.0); /* 0x11038E4B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x4) = _v; } /* 0x11038E4D: fstp dword ptr [edi + 4] */
    goto L_11038F50; /* 0x11038E50: jmp 0x11038f50 */
L_11038E55:
    fp_push(0.0); /* 0x11038E55: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(edi) = _v; } /* 0x11038E57: fst dword ptr [edi] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x11038E59: fld dword ptr [ebp + 0x10] */
    fp_xch(1); /* 0x11038E5C: fxch st(1) */
L_11038E5E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x11038E5E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11038E60: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11038E62: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x24)) = ecx; /* 0x11038E63: mov dword ptr [ebp - 0x24], ecx */
    /* test ebx, ebx */ /* 0x11038E66: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_11038E73; /* 0x11038E68: jg 0x11038e73 */
L_11038E6A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11038E6A: fstp st(0) */
    goto L_11038F4E; /* 0x11038E6C: jmp 0x11038f4e */
L_11038E71:
    fp_xch(1); /* 0x11038E71: fxch st(1) */
L_11038E73:
    /* cmp esi, 4 */ /* 0x11038E73: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11038EAB; /* 0x11038E76: jge 0x11038eab */
L_11038E78:
    eax = ecx + esi; /* 0x11038E78: lea eax, [ecx + esi] */
    edx = edi + eax * 4; /* 0x11038E7B: lea edx, [edi + eax*4] */
L_11038E7E:
    eax = ecx + esi; /* 0x11038E7E: lea eax, [ecx + esi] */
    /* cmp eax, ebx */ /* 0x11038E81: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_11038F63; /* 0x11038E83: jge 0x11038f63 */
L_11038E89:
    fp_push(*(float*)&MEM32(edx)); /* 0x11038E89: fld dword ptr [edx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038E8B: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038E8D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038E8F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11038F63; /* 0x11038E92: jnp 0x11038f63 */
L_11038E98:
    fp_push(_st[1]); /* 0x11038E98: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x11038E9A: fmul dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + esi * 4 + (-0x14)) = _v; } /* 0x11038E9C: fstp dword ptr [ebp + esi*4 - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x11038EA0: inc esi */
    _flag_k = FK_INC;
    { float _v = (float)_st[0]; *(float*)ADDR(edx) = _v; } /* 0x11038EA1: fst dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x11038EA3: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 4 */ /* 0x11038EA6: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11038E7E; /* 0x11038EA9: jl 0x11038e7e */
L_11038EAB:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11038EAB: fstp st(1) */
L_11038EAD:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x11038EAD: fld dword ptr [ebp - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038EB0: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038EB2: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11038EB4: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x11038EB6: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11038F4E; /* 0x11038EB9: jnp 0x11038f4e */
L_11038EBF:
    eax = ebp + (-0x18); /* 0x11038EBF: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x11038EC2: push eax */
    eax = ebp + (-0x1C); /* 0x11038EC3: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11038EC6: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x11038EC7: fstp dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_110387DF); /* 0x11038ECA: call 0x110387df */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x11038ECF: lea eax, [ebp - 0x18] */
    PUSH32(esp, 0xCu); /* 0x11038ED2: push 0xc */
    PUSH32(esp, eax); /* 0x11038ED4: push eax */
    RECOMP_CALL(sub_11038523); /* 0x11038ED5: call 0x11038523 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + (-0x1C)); /* 0x11038EDA: movsx eax, word ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x11038EDE: push eax */
    eax = ebp + (-0x18); /* 0x11038EDF: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x11038EE2: push eax */
    RECOMP_CALL(sub_1102FC8B); /* 0x11038EE3: call 0x1102fc8b */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x11038EE8: fld dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11038EEB: add esp, 0x14 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11038EEE: fstp dword ptr [esp] */
    PUSH32(esp, ebx); /* 0x11038EF1: push ebx */
    PUSH32(esp, edi); /* 0x11038EF2: push edi */
    RECOMP_CALL(sub_11038864); /* 0x11038EF3: call 0x11038864 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x11038EF8: fld dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x11038EFB: add esp, 8 */
    _flag_k = FK_ADD;
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x11038EFE: fsub dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x11038F01: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x11038F04: fld dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11038F07: fstp dword ptr [esp] */
    PUSH32(esp, ebx); /* 0x11038F0A: push ebx */
    PUSH32(esp, edi); /* 0x11038F0B: push edi */
    RECOMP_CALL(sub_11038864); /* 0x11038F0C: call 0x11038864 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x11038F11: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x11038F13: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11038F15: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11038F16: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x11038F19: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11038F39; /* 0x11038F1B: jle 0x11038f39 */
L_11038F1D:
    fp_push(*(float*)&MEM32(ebp + ecx * 4 + (-0x14))); /* 0x11038F1D: fld dword ptr [ebp + ecx*4 - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x11038F21: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x11038F24: fld dword ptr [ebp - 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + ecx * 4 + (-0x18)) = _v; } /* 0x11038F27: fst dword ptr [ebp + ecx*4 - 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038F2B: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038F2D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038F2F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11038F39; /* 0x11038F32: jnp 0x11038f39 */
L_11038F34:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11038F34: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x11038F35: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11038F1D; /* 0x11038F37: jl 0x11038f1d */
L_11038F39:
    ecx = MEM32(ebp + (-0x24)); /* 0x11038F39: mov ecx, dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x11038F3C: fld dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x11038F3F: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x11038F40: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x24)) = ecx; /* 0x11038F41: mov dword ptr [ebp - 0x24], ecx */
    /* cmp ecx, ebx */ /* 0x11038F44: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11038E71; /* 0x11038F46: jl 0x11038e71 */
L_11038F4C:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11038F4C: fstp st(1) */
L_11038F4E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11038F4E: fstp st(0) */
L_11038F50:
    ecx = MEM32(ebp + (-0x4)); /* 0x11038F50: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x11038F53: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x11038F55: pop edi */
    esi = POP32_VAL(esp); /* 0x11038F56: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x11038F57: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x11038F59: pop ebx */
    RECOMP_CALL(sub_1103B32A); /* 0x11038F5A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x11038F5F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11038F61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11038F62: ret  */
L_11038F63:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11038F63: fstp st(1) */
    PUSH32(esp, 8); /* 0x11038F65: push 8 */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + esi * 4 + (-0x14)) = _v; } /* 0x11038F67: fst dword ptr [ebp + esi*4 - 0x14] */
    esi = POP32_VAL(esp); /* 0x11038F6B: pop esi */
    RECOMP_BACKEDGE();
    goto L_11038EAD; /* 0x11038F6C: jmp 0x11038ead */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11038F71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11038F71u);

L_11038F71:
    PUSH32(esp, ebp); /* 0x11038F71: push ebp */
    ebp = esp; /* 0x11038F72: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11038F74: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11038F75: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11038F78: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11038F79: mov edi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x11038F7C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103903F; /* 0x11038F7E: je 0x1103903f */
L_11038F84:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x11038F84: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1103903F; /* 0x11038F88: je 0x1103903f */
L_11038F8E:
    PUSH32(esp, ebx); /* 0x11038F8E: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x11038F8F: mov ebx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x11038F92: fld dword ptr [ebx] */
    fp_push(0.0); /* 0x11038F94: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038F96: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038F98: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x11038F9A: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x11038F9C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103902C; /* 0x11038F9F: jnp 0x1103902c */
L_11038FA5:
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x11038FA5: fld dword ptr [ebx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038FA8: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038FAA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038FAC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103902E; /* 0x11038FAF: jnp 0x1103902e */
L_11038FB1:
    ecx = MEM32(ebp + 0x18); /* 0x11038FB1: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x11038FB4: push edi */
    PUSH32(esp, esi); /* 0x11038FB5: push esi */
    PUSH32(esp, ecx); /* 0x11038FB6: push ecx */
    RECOMP_CALL(sub_11038DCA); /* 0x11038FB7: call 0x11038dca */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebx)); /* 0x11038FBC: fld dword ptr [ebx] */
    ecx = POP32_VAL(esp); /* 0x11038FBE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11038FBF: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11038FC0: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x11038FC3: push esi */
    PUSH32(esp, edi); /* 0x11038FC4: push edi */
    RECOMP_CALL(sub_11038DE7); /* 0x11038FC5: call 0x11038de7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11038FCA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11038FCC: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11038FCF: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = eax; /* 0x11038FD0: mov dword ptr [ebp + 0xc], eax */
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x11038FD3: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1103903E; /* 0x11038FD6: jle 0x1103903e */
L_11038FD8:
    fp_push(*(float*)&MEM32(ebx + eax * 4)); /* 0x11038FD8: fld dword ptr [ebx + eax*4] */
    fp_push(0.0); /* 0x11038FDB: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x11038FDD: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11038FDF: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x11038FE1: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1103903E; /* 0x11038FE4: jnp 0x1103903e */
L_11038FE6:
    ecx = MEM32(ebp + 0x18); /* 0x11038FE6: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x11038FE9: push ecx */
    PUSH32(esp, esi); /* 0x11038FEA: push esi */
    eax = ecx + esi * 4; /* 0x11038FEB: lea eax, [ecx + esi*4] */
    PUSH32(esp, eax); /* 0x11038FEE: push eax */
    RECOMP_CALL(sub_11038DCA); /* 0x11038FEF: call 0x11038dca */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x11038FF4: mov eax, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x11038FF7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11038FF8: pop ecx */
    ecx = MEM32(ebp + 0x18); /* 0x11038FF9: mov ecx, dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ebx + eax * 4)); /* 0x11038FFC: fld dword ptr [ebx + eax*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11038FFF: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x11039002: push esi */
    eax = ecx + esi * 4; /* 0x11039003: lea eax, [ecx + esi*4] */
    PUSH32(esp, eax); /* 0x11039006: push eax */
    RECOMP_CALL(sub_11038DE7); /* 0x11039007: call 0x11038de7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x18); /* 0x1103900C: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1103900F: push esi */
    eax = ecx + esi * 4; /* 0x11039010: lea eax, [ecx + esi*4] */
    PUSH32(esp, eax); /* 0x11039013: push eax */
    PUSH32(esp, esi); /* 0x11039014: push esi */
    PUSH32(esp, edi); /* 0x11039015: push edi */
    RECOMP_CALL(sub_11038B85); /* 0x11039016: call 0x11038b85 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1103901B: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1103901E: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11039021: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = eax; /* 0x11039022: mov dword ptr [ebp + 0xc], eax */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x11039025: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11038FD8; /* 0x11039028: jl 0x11038fd8 */
L_1103902A:
    goto L_1103903E; /* 0x1103902A: jmp 0x1103903e */
L_1103902C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1103902C: fstp st(0) */
L_1103902E:
    fp_push(*(float*)&MEM32(ebx)); /* 0x1103902E: fld dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x11039030: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11039031: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x11039034: push esi */
    PUSH32(esp, edi); /* 0x11039035: push edi */
    RECOMP_CALL(sub_11038DE7); /* 0x11039036: call 0x11038de7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1103903B: add esp, 0xc */
    _flag_k = FK_ADD;
L_1103903E:
    ebx = POP32_VAL(esp); /* 0x1103903E: pop ebx */
L_1103903F:
    eax = edi; /* 0x1103903F: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x11039041: pop edi */
    esi = POP32_VAL(esp); /* 0x11039042: pop esi */
    ebp = POP32_VAL(esp); /* 0x11039043: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11039044: ret  */
    RECOMP_REGS_OUT();
}

void sub_11039045(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11039045u);

L_11039045:
    PUSH32(esp, ebp); /* 0x11039045: push ebp */
    ebp = esp; /* 0x11039046: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11039048: push ecx */
    eax = MEM32(ebp + 0x10); /* 0x11039049: mov eax, dword ptr [ebp + 0x10] */
    ecx = 0x2710u; /* 0x1103904C: mov ecx, 0x2710 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x11039051: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x11039052: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, ecx); /* 0x11039054: push ecx */
    MEM32(ebp + 0x10) = eax; /* 0x11039055: mov dword ptr [ebp + 0x10], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x11039058: fild dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = edx; /* 0x1103905B: mov dword ptr [ebp - 4], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x1103905E: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x11039061: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11039064: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11039067: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103906A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_110390AC); /* 0x1103906D: call 0x110390ac */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x11003804)); /* 0x11039072: fld dword ptr [0x11003804] */
    ecx = POP32_VAL(esp); /* 0x11039078: pop ecx */
    ecx = POP32_VAL(esp); /* 0x11039079: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1103907A: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1103907D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11039080: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11038DE7); /* 0x11039083: call 0x11038de7 */
    RECOMP_FLAGS_IN();
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x11039088: fild dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1103908B: add esp, 8 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x1103908E: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x11039091: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11039094: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11039097: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103909A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11038864); /* 0x1103909D: call 0x11038864 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x110390A2: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110390A5: add esp, 0xc */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x110390A8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x110390AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110390AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_110390AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x110390ACu);

L_110390AC:
    PUSH32(esp, ebp); /* 0x110390AC: push ebp */
    ebp = esp; /* 0x110390AD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x110390AF: push ecx */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x110390B0: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x110390B4: fld dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x110390B7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x110390B8: mov esi, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x110390BB: fstp dword ptr [ebp - 4] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039129; /* 0x110390BE: jle 0x11039129 */
L_110390C0:
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x110390C0: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11039124; /* 0x110390C4: je 0x11039124 */
L_110390C6:
    eax = ebp + (-0x4); /* 0x110390C6: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x110390C9: push eax */
    eax = ebp + 0x8; /* 0x110390CA: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x110390CD: push eax */
    RECOMP_CALL(sub_110387DF); /* 0x110390CE: call 0x110387df */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x110390D3: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x110390D6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110390D7: pop ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x110390D8: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_11039124; /* 0x110390DB: je 0x11039124 */
L_110390DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x110390DD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x110390DF: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_110390F0; /* 0x110390E2: jge 0x110390f0 */
L_110390E4:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x110390E4: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x110390E7: fstp dword ptr [esi] */
    fp_push(0.0); /* 0x110390E9: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x110390EB: fstp dword ptr [esi + 4] */
    goto L_11039129; /* 0x110390EE: jmp 0x11039129 */
L_110390F0:
    eax = ebp + (-0x4); /* 0x110390F0: lea eax, [ebp - 4] */
    PUSH32(esp, 0xCu); /* 0x110390F3: push 0xc */
    PUSH32(esp, eax); /* 0x110390F5: push eax */
    RECOMP_CALL(sub_11038523); /* 0x110390F6: call 0x11038523 */
    RECOMP_FLAGS_IN();
    eax = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x110390FB: movsx eax, word ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x110390FF: push eax */
    eax = ebp + (-0x4); /* 0x11039100: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x11039103: push eax */
    RECOMP_CALL(sub_1102FC8B); /* 0x11039104: call 0x1102fc8b */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x11039109: fld dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1103910C: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0xC), 2 */ /* 0x1103910F: cmp dword ptr [ebp + 0xc], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)_st[0]; *(float*)ADDR(esi) = _v; } /* 0x11039113: fst dword ptr [esi] */
    _st[0] = (double)*(float*)ADDR(ebp + 0x10) - _st[0]; /* 0x11039115: fsubr dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x11039118: fstp dword ptr [esi + 4] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039129; /* 0x1103911B: jle 0x11039129 */
L_1103911D:
    fp_push(0.0); /* 0x1103911D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x1103911F: fstp dword ptr [esi + 8] */
    goto L_11039129; /* 0x11039122: jmp 0x11039129 */
L_11039124:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x11039124: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x11039127: fstp dword ptr [esi] */
L_11039129:
    eax = esi; /* 0x11039129: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1103912B: pop esi */
    esp = ebp; /* 0x1103912C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1103912E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103912F: ret  */
    RECOMP_REGS_OUT();
}

void sub_11039130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11039130u);

L_11039130:
    PUSH32(esp, ebp); /* 0x11039130: push ebp */
    ebp = esp; /* 0x11039131: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x11039133: push ecx */
    PUSH32(esp, esi); /* 0x11039134: push esi */
    esi = MEM32(ebp + 0xC); /* 0x11039135: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x11039138: push edi */
    edi = MEM32(ebp + 0x8); /* 0x11039139: mov edi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1103913C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103924E; /* 0x1103913E: je 0x1103924e */
L_11039144:
    PUSH32(esp, edi); /* 0x11039144: push edi */
    RECOMP_CALL(sub_110129D2); /* 0x11039145: call 0x110129d2 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1103914A: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edi)); /* 0x1103914C: fcomp dword ptr [edi] */
    fp_pop();
    ecx = POP32_VAL(esp); /* 0x1103914E: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1103914F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11039151: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x11039154: fnstsw ax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039239; /* 0x11039156: jle 0x11039239 */
L_1103915C:
    /* test HI8(eax), 0x41u */ /* 0x1103915C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1103923E; /* 0x1103915F: je 0x1103923e */
L_11039165:
    fp_push(*(float*)&MEM32(edi)); /* 0x11039165: fld dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x11039167: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x11039168: mov ebx, dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1103916B: fstp dword ptr [ebp + 8] */
    eax = ebx + esi * 4; /* 0x1103916E: lea eax, [ebx + esi*4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x11039171: mov dword ptr [ebp - 4], eax */
    eax = eax + esi * 4; /* 0x11039174: lea eax, [eax + esi*4] */
    MEM32(ebp + 0xC) = eax; /* 0x11039177: mov dword ptr [ebp + 0xc], eax */
    /* cmp esi, 1 */ /* 0x1103917A: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039188; /* 0x1103917D: jle 0x11039188 */
L_1103917F:
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x1103917F: fld dword ptr [edi + 4] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x11039182: fadd dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x11039185: fstp dword ptr [ebp + 8] */
L_11039188:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x11039188: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1103918B: push ecx */
    PUSH32(esp, ecx); /* 0x1103918C: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1103918D: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1103B870); /* 0x11039190: call 0x1103b870 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x11039195: fld1  */
    eax = ebx + esi * 4; /* 0x11039197: lea eax, [ebx + esi*4] */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x1103919A: fdivrp st(1) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1103919C: add esp, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1103919F: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x110391A2: fld dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x110391A5: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x110391A8: push esi */
    PUSH32(esp, eax); /* 0x110391A9: push eax */
    RECOMP_CALL(sub_110390AC); /* 0x110391AA: call 0x110390ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x110391AF: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 2); /* 0x110391B2: push 2 */
    eax = POP32_VAL(esp); /* 0x110391B4: pop eax */
    MEM32(ebp + 0x8) = eax; /* 0x110391B5: mov dword ptr [ebp + 8], eax */
    /* cmp esi, eax */ /* 0x110391B8: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039225; /* 0x110391BA: jle 0x11039225 */
L_110391BC:
    eax = ebx + esi * 4; /* 0x110391BC: lea eax, [ebx + esi*4] */
    PUSH32(esp, eax); /* 0x110391BF: push eax */
    PUSH32(esp, esi); /* 0x110391C0: push esi */
    PUSH32(esp, ebx); /* 0x110391C1: push ebx */
    RECOMP_CALL(sub_11038DCA); /* 0x110391C2: call 0x11038dca */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x11001248)); /* 0x110391C7: fld dword ptr [0x11001248] */
    ecx = POP32_VAL(esp); /* 0x110391CD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x110391CE: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x110391CF: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x110391D2: push esi */
    PUSH32(esp, ebx); /* 0x110391D3: push ebx */
    RECOMP_CALL(sub_11038DE7); /* 0x110391D4: call 0x11038de7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110391D9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x110391DC: push esi */
    PUSH32(esp, edi); /* 0x110391DD: push edi */
    PUSH32(esp, esi); /* 0x110391DE: push esi */
    PUSH32(esp, ebx); /* 0x110391DF: push ebx */
    RECOMP_CALL(sub_11038F71); /* 0x110391E0: call 0x11038f71 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x110391E5: push dword ptr [ebp + 0xc] */
    eax = ebx + esi * 4; /* 0x110391E8: lea eax, [ebx + esi*4] */
    PUSH32(esp, esi); /* 0x110391EB: push esi */
    PUSH32(esp, eax); /* 0x110391EC: push eax */
    PUSH32(esp, esi); /* 0x110391ED: push esi */
    PUSH32(esp, ebx); /* 0x110391EE: push ebx */
    RECOMP_CALL(sub_11038F71); /* 0x110391EF: call 0x11038f71 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x11003800)); /* 0x110391F4: fld dword ptr [0x11003800] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x110391FA: add esp, 0x30 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x110391FD: fstp dword ptr [esp] */
    PUSH32(esp, esi); /* 0x11039200: push esi */
    PUSH32(esp, ebx); /* 0x11039201: push ebx */
    RECOMP_CALL(sub_11038864); /* 0x11039202: call 0x11038864 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11039207: push dword ptr [ebp + 0xc] */
    eax = ebx + esi * 4; /* 0x1103920A: lea eax, [ebx + esi*4] */
    PUSH32(esp, esi); /* 0x1103920D: push esi */
    PUSH32(esp, ebx); /* 0x1103920E: push ebx */
    PUSH32(esp, esi); /* 0x1103920F: push esi */
    PUSH32(esp, eax); /* 0x11039210: push eax */
    RECOMP_CALL(sub_11038F71); /* 0x11039211: call 0x11038f71 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x11039216: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x11039219: add esp, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1103921C: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x1103921E: mov dword ptr [ebp + 8], eax */
    /* cmp eax, esi */ /* 0x11039221: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_110391BC; /* 0x11039223: jl 0x110391bc */
L_11039225:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x11039225: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x11039228: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x11039229: push dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x1103922C: push esi */
    PUSH32(esp, edi); /* 0x1103922D: push edi */
    RECOMP_CALL(sub_11038F71); /* 0x1103922E: call 0x11038f71 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x11039233: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x11039236: pop ebx */
    goto L_1103924E; /* 0x11039237: jmp 0x1103924e */
L_11039239:
    /* test HI8(eax), 0x41u */ /* 0x11039239: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103924E; /* 0x1103923C: jne 0x1103924e */
L_1103923E:
    PUSH32(esp, 1); /* 0x1103923E: push 1 */
    RECOMP_CALL(sub_1102F9F9); /* 0x11039240: call 0x1102f9f9 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x11063110)); /* 0x11039245: fld dword ptr [0x11063110] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x1103924B: fstp dword ptr [edi] */
    ecx = POP32_VAL(esp); /* 0x1103924D: pop ecx */
L_1103924E:
    eax = edi; /* 0x1103924E: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x11039250: pop edi */
    esi = POP32_VAL(esp); /* 0x11039251: pop esi */
    esp = ebp; /* 0x11039252: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x11039254: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11039255: ret  */
    RECOMP_REGS_OUT();
}

void sub_11039256(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11039256u);

L_11039256:
    PUSH32(esp, ebp); /* 0x11039256: push ebp */
    ebp = esp; /* 0x11039257: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11039259: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1103925A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x1103925C: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_11039295; /* 0x1103925F: jle 0x11039295 */
L_11039261:
    fp_push(0.0); /* 0x11039261: fldz  */
    PUSH32(esp, edi); /* 0x11039263: push edi */
    edi = MEM32(ebp + 0x10); /* 0x11039264: mov edi, dword ptr [ebp + 0x10] */
L_11039267:
    fp_push(*(float*)&MEM32(edi + esi * 4)); /* 0x11039267: fld dword ptr [edi + esi*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1103926A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1103926C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1103926E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_11039294; /* 0x11039271: jnp 0x11039294 */
L_11039273:
    fp_push(*(float*)&MEM32(edi + esi * 4)); /* 0x11039273: fld dword ptr [edi + esi*4] */
    PUSH32(esp, ecx); /* 0x11039276: push ecx */
    _st[0] = -_st[0]; /* 0x11039277: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x11039279: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1103927C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1103927F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_11038864); /* 0x11039282: call 0x11038864 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x11039287: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x11039289: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1103928C: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x1103928D: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_11039267; /* 0x11039290: jl 0x11039267 */
L_11039292:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x11039292: fstp st(0) */
L_11039294:
    edi = POP32_VAL(esp); /* 0x11039294: pop edi */
L_11039295:
    eax = MEM32(ebp + 0x8); /* 0x11039295: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x11039298: pop esi */
    ebp = POP32_VAL(esp); /* 0x11039299: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103929A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103929B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103929Bu);

    goto L_1103929B;
L_110380FF:
    PUSH32(esp, ebp); /* 0x110380FF: push ebp */
    ebp = esp; /* 0x11038100: mov ebp, esp */
    PUSH32(esp, esi); /* 0x11038102: push esi */
    esi = MEM32(ebp + 0x8); /* 0x11038103: mov esi, dword ptr [ebp + 8] */
    eax = 0x7FFu; /* 0x11038106: mov eax, 0x7ff */
    edx = (uint32_t)MEM16(esi + 0x6); /* 0x1103810B: movzx edx, word ptr [esi + 6] */
    ecx = edx; /* 0x1103810F: mov ecx, edx */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x11038111: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x11038111: shr ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x11038114: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = ecx; /* 0x11038116: mov dword ptr [ebp + 8], ecx */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x11038119: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11038144; /* 0x1103811C: jne 0x11038144 */
L_1103811E:
    /* test LO8(edx), 0xFu */ /* 0x1103811E: test dl, 0xf */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1103813C; /* 0x11038121: jne 0x1103813c */
L_11038123:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11038123: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x4), LO16(eax) */ /* 0x11038125: cmp word ptr [esi + 4], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103813C; /* 0x11038129: jne 0x1103813c */
L_1103812B:
    /* cmp MEM16(esi + 0x2), LO16(eax) */ /* 0x1103812B: cmp word ptr [esi + 2], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103813C; /* 0x1103812F: jne 0x1103813c */
L_11038131:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x11038131: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1103813C; /* 0x11038134: jne 0x1103813c */
L_11038136:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11038136: inc eax */
    _flag_k = FK_INC;
    goto L_110381F8; /* 0x11038137: jmp 0x110381f8 */
L_1103813C:
    PUSH32(esp, 2); /* 0x1103813C: push 2 */
    eax = POP32_VAL(esp); /* 0x1103813E: pop eax */
    goto L_110381F8; /* 0x1103813F: jmp 0x110381f8 */
L_11038144:
    /* test edx, 0xFFFF7FFFu */ /* 0x11038144: test edx, 0xffff7fff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFF7FFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11038166; /* 0x1103814A: jne 0x11038166 */
L_1103814C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103814C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x4), LO16(eax) */ /* 0x1103814E: cmp word ptr [esi + 4], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11038166; /* 0x11038152: jne 0x11038166 */
L_11038154:
    /* cmp MEM16(esi + 0x2), LO16(eax) */ /* 0x11038154: cmp word ptr [esi + 2], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11038166; /* 0x11038158: jne 0x11038166 */
L_1103815A:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x1103815A: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_11038166; /* 0x1103815D: jne 0x11038166 */
L_1103815F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1103815F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_110381F8; /* 0x11038161: jmp 0x110381f8 */
L_11038166:
    eax = 0x433u; /* 0x11038166: mov eax, 0x433 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1103816B: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x1103816D: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO16(eax); /* 0x11038170: movzx ecx, ax */
    SET_LO16(eax, LO16(ecx)); /* 0x11038173: mov ax, cx */
    MEM32(ebp + 0x8) = ecx; /* 0x11038176: mov dword ptr [ebp + 8], ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x11038179: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1103815F; /* 0x1103817C: jle 0x1103815f */
L_1103817E:
    PUSH32(esp, edi); /* 0x1103817E: push edi */
    PUSH32(esp, 0x35u); /* 0x1103817F: push 0x35 */
    edi = POP32_VAL(esp); /* 0x11038181: pop edi */
    /* cmp LO16(edi), LO16(eax) */ /* 0x11038182: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_1103819E; /* 0x11038185: jg 0x1103819e */
L_11038187:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11038187: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x8000u);
    edx = edx & 0x8000u; /* 0x11038189: and edx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x2) = eax; /* 0x1103818F: mov dword ptr [esi + 2], eax */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x11038192: mov word ptr [esi], ax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x11038195: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x6) = (uint16_t)(LO16(edx)); /* 0x11038198: mov word ptr [esi + 6], dx */
    goto L_110381F7; /* 0x1103819C: jmp 0x110381f7 */
L_1103819E:
    if (4u) _cf = (((LO16(eax)) >> 3) & 1u); /* 0x1103819E: sar ax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int16_t)(LO16(eax)) >> 4u))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, (uint32_t)((int32_t)(int32_t)(int16_t)(LO16(eax)) >> 4u));
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x110381A2: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = (int32_t)(int16_t)LO16(eax); /* 0x110381A5: movsx edi, ax */
    edx = (uint32_t)MEM16(ecx * 2 + 0x11003774); /* 0x110381A8: movzx edx, word ptr [ecx*2 + 0x11003774] */
    ecx = MEM32(edi * 4 + 0x11003794); /* 0x110381B0: mov ecx, dword ptr [edi*4 + 0x11003794] */
    eax = (uint32_t)MEM16(esi + ecx * 2); /* 0x110381B7: movzx eax, word ptr [esi + ecx*2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x110381BB: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x110381BD: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = edx; /* 0x110381BF: mov dword ptr [ebp + 8], edx */
    MEM16(esi + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x110381C2: mov word ptr [esi + ecx*2], ax */
    SET_LO16(ecx, LO16(edx)); /* 0x110381C6: mov cx, dx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x110381C9: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_110381E6; /* 0x110381CA: je 0x110381e6 */
L_110381CC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x110381CC: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_110381DC; /* 0x110381CD: je 0x110381dc */
L_110381CF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x110381CF: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_110381EE; /* 0x110381D0: jne 0x110381ee */
L_110381D2:
    _flag_a = (uint32_t)((LO16(ecx) | MEM16(esi + 0x4))) << 16; _flag_b = (uint32_t)((LO16(ecx) | MEM16(esi + 0x4))) << 16;
    SET_LO16(ecx, LO16(ecx) | MEM16(esi + 0x4)); /* 0x110381D2: or cx, word ptr [esi + 4] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110381D6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x110381D8: mov word ptr [esi + 4], ax */
L_110381DC:
    _flag_a = (uint32_t)((LO16(ecx) | MEM16(esi + 0x2))) << 16; _flag_b = (uint32_t)((LO16(ecx) | MEM16(esi + 0x2))) << 16;
    SET_LO16(ecx, LO16(ecx) | MEM16(esi + 0x2)); /* 0x110381DC: or cx, word ptr [esi + 2] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110381E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x110381E2: mov word ptr [esi + 2], ax */
L_110381E6:
    _flag_a = (uint32_t)((LO16(ecx) | MEM16(esi))) << 16; _flag_b = (uint32_t)((LO16(ecx) | MEM16(esi))) << 16;
    SET_LO16(ecx, LO16(ecx) | MEM16(esi)); /* 0x110381E6: or cx, word ptr [esi] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110381E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x110381EB: mov word ptr [esi], ax */
L_110381EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x110381EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(ecx), LO16(ecx) */ /* 0x110381F0: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x110381F3: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x110381F6: dec eax */
    _flag_k = FK_DEC;
L_110381F7:
    edi = POP32_VAL(esp); /* 0x110381F7: pop edi */
L_110381F8:
    esi = POP32_VAL(esp); /* 0x110381F8: pop esi */
    ebp = POP32_VAL(esp); /* 0x110381F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x110381FA: ret  */
L_1103929B:
    PUSH32(esp, ebp); /* 0x1103929B: push ebp */
    ebp = esp; /* 0x1103929C: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1103929E: pop ebp */
    RECOMP_BACKEDGE();
    goto L_110380FF; /* 0x1103929F: jmp 0x110380ff */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
