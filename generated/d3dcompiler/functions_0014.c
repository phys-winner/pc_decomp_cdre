#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_140F12E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F12E0u);

L_140F12E0:
    edi = edi; /* 0x140F12E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F12E2: push ebp */
    ebp = esp; /* 0x140F12E3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140F12E5: push ecx */
    PUSH32(esp, edi); /* 0x140F12E6: push edi */
    /* test esi, esi */ /* 0x140F12E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1325; /* 0x140F12E9: je 0x140f1325 */
L_140F12EB:
    /* cmp MEM32(esi + 0x4), 3 */ /* 0x140F12EB: cmp dword ptr [esi + 4], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1325; /* 0x140F12EF: jne 0x140f1325 */
L_140F12F1:
    edi = MEM32(esi + 0x48); /* 0x140F12F1: mov edi, dword ptr [esi + 0x48] */
    /* test edi, edi */ /* 0x140F12F4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1325; /* 0x140F12F6: je 0x140f1325 */
L_140F12F8:
    /* cmp MEM32(edi + 0x4), 0xAu */ /* 0x140F12F8: cmp dword ptr [edi + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1325; /* 0x140F12FC: jne 0x140f1325 */
L_140F12FE:
    eax = ebp + (-0x4); /* 0x140F12FE: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x140F1301: push eax */
    eax = MEM32(ebp + 0xC); /* 0x140F1302: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x140F1305: push 0 */
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x140F1307: push dword ptr [edi + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140F130A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_140F1090); /* 0x140F130D: call 0x140f1090 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F1312: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F131C; /* 0x140F1314: js 0x140f131c */
L_140F1316:
    eax = MEM32(ebp + (-0x4)); /* 0x140F1316: mov eax, dword ptr [ebp - 4] */
    MEM32(edi + 0x20) = eax; /* 0x140F1319: mov dword ptr [edi + 0x20], eax */
L_140F131C:
    eax = esi; /* 0x140F131C: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x140F131E: pop edi */
    esp = ebp; /* 0x140F131F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F1321: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F1322: ret 8 */
L_140F1325:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F1325: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140F1327: pop edi */
    esp = ebp; /* 0x140F1328: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F132A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F132B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F1370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F1370u);

L_140F1370:
    edi = edi; /* 0x140F1370: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F1372: push ebp */
    ebp = esp; /* 0x140F1373: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x134u; /* 0x140F1375: sub esp, 0x134 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x140F137B: push ebx */
    PUSH32(esp, esi); /* 0x140F137C: push esi */
    esi = ecx; /* 0x140F137D: mov esi, ecx */
    PUSH32(esp, edi); /* 0x140F137F: push edi */
    ecx = ebp + (-0x70); /* 0x140F1380: lea ecx, [ebp - 0x70] */
    PUSH32(esp, ecx); /* 0x140F1383: push ecx */
    edi = eax; /* 0x140F1384: mov edi, eax */
    eax = MEM32(esi); /* 0x140F1386: mov eax, dword ptr [esi] */
    PUSH32(esp, 0xAu); /* 0x140F1388: push 0xa */
    ecx = esi; /* 0x140F138A: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x140F138C: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F138F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F17F8; /* 0x140F1391: je 0x140f17f8 */
L_140F1397:
    eax = MEM32(edi); /* 0x140F1397: mov eax, dword ptr [edi] */
    ecx = ebp + (-0xD0); /* 0x140F1399: lea ecx, [ebp - 0xd0] */
    PUSH32(esp, ecx); /* 0x140F139F: push ecx */
    PUSH32(esp, 0xAu); /* 0x140F13A0: push 0xa */
    ecx = edi; /* 0x140F13A2: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x140F13A4: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F13A7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F17F8; /* 0x140F13A9: je 0x140f17f8 */
L_140F13AF:
    eax = MEM32(ebp + (-0x38)); /* 0x140F13AF: mov eax, dword ptr [ebp - 0x38] */
    /* cmp eax, MEM32(ebp + (-0x98)) */ /* 0x140F13B2: cmp eax, dword ptr [ebp - 0x98] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x98)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_140F13CA; /* 0x140F13B8: jb 0x140f13ca */
L_140F13BA:
    PUSH32(esp, 0); /* 0x140F13BA: push 0 */
    PUSH32(esp, 0); /* 0x140F13BC: push 0 */
    PUSH32(esp, esi); /* 0x140F13BE: push esi */
    ecx = edi; /* 0x140F13BF: mov ecx, edi */
    RECOMP_CALL(sub_140F1B70); /* 0x140F13C1: call 0x140f1b70 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F13C6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F13F8; /* 0x140F13C8: jne 0x140f13f8 */
L_140F13CA:
    PUSH32(esp, 0); /* 0x140F13CA: push 0 */
    PUSH32(esp, 0); /* 0x140F13CC: push 0 */
    PUSH32(esp, edi); /* 0x140F13CE: push edi */
    ecx = esi; /* 0x140F13CF: mov ecx, esi */
    RECOMP_CALL(sub_140F1B70); /* 0x140F13D1: call 0x140f1b70 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F13D6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F13E4; /* 0x140F13D8: je 0x140f13e4 */
L_140F13DA:
    esi = edi; /* 0x140F13DA: mov esi, edi */
    edx = ebp + (-0xD0); /* 0x140F13DC: lea edx, [ebp - 0xd0] */
    goto L_140F13FB; /* 0x140F13E2: jmp 0x140f13fb */
L_140F13E4:
    PUSH32(esp, 0); /* 0x140F13E4: push 0 */
    PUSH32(esp, 0); /* 0x140F13E6: push 0 */
    PUSH32(esp, esi); /* 0x140F13E8: push esi */
    ecx = edi; /* 0x140F13E9: mov ecx, edi */
    RECOMP_CALL(sub_140F1B70); /* 0x140F13EB: call 0x140f1b70 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F13F0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F17F8; /* 0x140F13F2: je 0x140f17f8 */
L_140F13F8:
    edx = ebp + (-0x70); /* 0x140F13F8: lea edx, [ebp - 0x70] */
L_140F13FB:
    ebx = MEM32(edx + 0x30); /* 0x140F13FB: mov ebx, dword ptr [edx + 0x30] */
    ecx = MEM32(ebp + 0x10); /* 0x140F13FE: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x40)) = ebx; /* 0x140F1401: mov dword ptr [ebp - 0x40], ebx */
    edi = MEM32(edx + 0x34); /* 0x140F1404: mov edi, dword ptr [edx + 0x34] */
    MEM32(ebp + (-0xC)) = edx; /* 0x140F1407: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x4)) = edi; /* 0x140F140A: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x3C)) = edi; /* 0x140F140D: mov dword ptr [ebp - 0x3c], edi */
    /* test ecx, ecx */ /* 0x140F1410: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1464; /* 0x140F1412: je 0x140f1464 */
L_140F1414:
    eax = MEM32(ecx); /* 0x140F1414: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x130); /* 0x140F1416: lea edx, [ebp - 0x130] */
    PUSH32(esp, edx); /* 0x140F141C: push edx */
    PUSH32(esp, 0xAu); /* 0x140F141D: push 0xa */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x140F141F: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F1422: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F17F8; /* 0x140F1424: je 0x140f17f8 */
L_140F142A:
    ebx = MEM32(ebp + (-0x100)); /* 0x140F142A: mov ebx, dword ptr [ebp - 0x100] */
    edx = MEM32(ebp + (-0xC)); /* 0x140F1430: mov edx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(edx + 0x30), ebx */ /* 0x140F1433: cmp dword ptr [edx + 0x30], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x30)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140F143F; /* 0x140F1436: jae 0x140f143f */
L_140F1438:
    MEM32(ebp + (-0x40)) = ebx; /* 0x140F1438: mov dword ptr [ebp - 0x40], ebx */
    SET_LO8(eax, 1); /* 0x140F143B: mov al, 1 */
    goto L_140F1444; /* 0x140F143D: jmp 0x140f1444 */
L_140F143F:
    ebx = MEM32(ebp + (-0x40)); /* 0x140F143F: mov ebx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F1442: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_140F1444:
    ecx = MEM32(ebp + (-0xFC)); /* 0x140F1444: mov ecx, dword ptr [ebp - 0xfc] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x140F144A: mov dword ptr [ebp - 4], ecx */
    /* cmp MEM32(edx + 0x34), ecx */ /* 0x140F144D: cmp dword ptr [edx + 0x34], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x34)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140F145A; /* 0x140F1450: jae 0x140f145a */
L_140F1452:
    edi = MEM32(ebp + (-0x6C)); /* 0x140F1452: mov edi, dword ptr [ebp - 0x6c] */
    MEM32(ebp + (-0x3C)) = ecx; /* 0x140F1455: mov dword ptr [ebp - 0x3c], ecx */
    goto L_140F14A7; /* 0x140F1458: jmp 0x140f14a7 */
L_140F145A:
    /* test LO8(eax), LO8(eax) */ /* 0x140F145A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1499; /* 0x140F145C: jne 0x140f1499 */
L_140F145E:
    edi = MEM32(ebp + (-0x3C)); /* 0x140F145E: mov edi, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x4)) = edi; /* 0x140F1461: mov dword ptr [ebp - 4], edi */
L_140F1464:
    edi = MEM32(ebp + (-0x6C)); /* 0x140F1464: mov edi, dword ptr [ebp - 0x6c] */
    /* cmp edi, MEM32(ebp + (-0xCC)) */ /* 0x140F1467: cmp edi, dword ptr [ebp - 0xcc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xCC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F14A4; /* 0x140F146D: jne 0x140f14a4 */
L_140F146F:
    eax = MEM32(ebp + (-0xA8)); /* 0x140F146F: mov eax, dword ptr [ebp - 0xa8] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + (-0x48)))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + (-0x48))));
    eax = eax ^ MEM32(ebp + (-0x48)); /* 0x140F1475: xor eax, dword ptr [ebp - 0x48] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA0000200u);
    eax = eax & 0xA0000200u; /* 0x140F1478: and eax, 0xa0000200 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x140F147D: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F14A4; /* 0x140F1480: jne 0x140f14a4 */
L_140F1482:
    eax = MEM32(edx + 0x4); /* 0x140F1482: mov eax, dword ptr [edx + 4] */
    MEM32(ebp + (-0x6C)) = eax; /* 0x140F1485: mov dword ptr [ebp - 0x6c], eax */
    eax = MEM32(edx + 0x28); /* 0x140F1488: mov eax, dword ptr [edx + 0x28] */
    MEM32(ebp + (-0x48)) = eax; /* 0x140F148B: mov dword ptr [ebp - 0x48], eax */
    edx = MEM32(edx + 0x2C); /* 0x140F148E: mov edx, dword ptr [edx + 0x2c] */
    MEM32(ebp + (-0x44)) = edx; /* 0x140F1491: mov dword ptr [ebp - 0x44], edx */
    goto L_140F15DD; /* 0x140F1494: jmp 0x140f15dd */
L_140F1499:
    ecx = MEM32(ebp + (-0x3C)); /* 0x140F1499: mov ecx, dword ptr [ebp - 0x3c] */
    edi = MEM32(ebp + (-0x6C)); /* 0x140F149C: mov edi, dword ptr [ebp - 0x6c] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x140F149F: mov dword ptr [ebp - 4], ecx */
    goto L_140F14A7; /* 0x140F14A2: jmp 0x140f14a7 */
L_140F14A4:
    ecx = MEM32(ebp + (-0x4)); /* 0x140F14A4: mov ecx, dword ptr [ebp - 4] */
L_140F14A7:
    /* cmp MEM8(ebp + 0x18), 0 */ /* 0x140F14A7: cmp byte ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x18)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F14E9; /* 0x140F14AB: jne 0x140f14e9 */
L_140F14AD:
    edx = MEM32(ebp + (-0xCC)); /* 0x140F14AD: mov edx, dword ptr [ebp - 0xcc] */
    ecx = ebp + (-0x6C); /* 0x140F14B3: lea ecx, [ebp - 0x6c] */
    eax = edi; /* 0x140F14B6: mov eax, edi */
    RECOMP_CALL(sub_140F2280); /* 0x140F14B8: call 0x140f2280 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F14BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F17FD; /* 0x140F14BF: js 0x140f17fd */
L_140F14C5:
    eax = MEM32(ebp + (-0xA8)); /* 0x140F14C5: mov eax, dword ptr [ebp - 0xa8] */
    _flag_a = (uint32_t)((eax | MEM32(ebp + (-0x48)))); _flag_b = (uint32_t)((eax | MEM32(ebp + (-0x48))));
    eax = eax | MEM32(ebp + (-0x48)); /* 0x140F14CB: or eax, dword ptr [ebp - 0x48] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x3C)); /* 0x140F14CE: mov ecx, dword ptr [ebp - 0x3c] */
    ebx = MEM32(ebp + (-0x40)); /* 0x140F14D1: mov ebx, dword ptr [ebp - 0x40] */
    edi = MEM32(ebp + (-0x6C)); /* 0x140F14D4: mov edi, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000200u);
    eax = eax & 0x20000200u; /* 0x140F14D7: and eax, 0x20000200 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140F14DC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x48)) = eax; /* 0x140F14DE: mov dword ptr [ebp - 0x48], eax */
    MEM32(ebp + (-0x44)) = edx; /* 0x140F14E1: mov dword ptr [ebp - 0x44], edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x140F14E4: mov dword ptr [ebp - 4], ecx */
    goto L_140F14EC; /* 0x140F14E7: jmp 0x140f14ec */
L_140F14E9:
    edx = MEM32(ebp + (-0x44)); /* 0x140F14E9: mov edx, dword ptr [ebp - 0x44] */
L_140F14EC:
    /* cmp edi, 0xFu */ /* 0x140F14EC: cmp edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_140F14FA; /* 0x140F14EF: jge 0x140f14fa */
L_140F14F1:
    eax = MEM32(ebp + 0x8); /* 0x140F14F1: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(eax + edi * 4 + 0x68); /* 0x140F14F4: mov edi, dword ptr [eax + edi*4 + 0x68] */
    goto L_140F1515; /* 0x140F14F8: jmp 0x140f1515 */
L_140F14FA:
    esi = edi; /* 0x140F14FA: mov esi, edi */
    edi = MEM32(ebp + 0x8); /* 0x140F14FC: mov edi, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_140F0380); /* 0x140F14FF: call 0x140f0380 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x3C)); /* 0x140F1504: mov ecx, dword ptr [ebp - 0x3c] */
    ebx = MEM32(ebp + (-0x40)); /* 0x140F1507: mov ebx, dword ptr [ebp - 0x40] */
    edx = MEM32(ebp + (-0x44)); /* 0x140F150A: mov edx, dword ptr [ebp - 0x44] */
    edi = eax; /* 0x140F150D: mov edi, eax */
    eax = MEM32(ebp + 0x8); /* 0x140F150F: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x140F1512: mov dword ptr [ebp - 4], ecx */
L_140F1515:
    /* test edi, edi */ /* 0x140F1515: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F17DF; /* 0x140F1517: je 0x140f17df */
L_140F151D:
    esi = MEM32(ebp + (-0x48)); /* 0x140F151D: mov esi, dword ptr [ebp - 0x48] */
    MEM32(ebp + 0x18) = esi; /* 0x140F1520: mov dword ptr [ebp + 0x18], esi */
    MEM32(ebp + (-0xC)) = edx; /* 0x140F1523: mov dword ptr [ebp - 0xc], edx */
    /* cmp edi, MEM32(eax + 0x78) */ /* 0x140F1526: cmp edi, dword ptr [eax + 0x78] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x78));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F155F; /* 0x140F1529: jne 0x140f155f */
L_140F152B:
    eax = esi; /* 0x140F152B: mov eax, esi */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x140F152D: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F155F; /* 0x140F152F: jne 0x140f155f */
L_140F1531:
    eax = MEM32(ebp + 0x8); /* 0x140F1531: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(eax + 0x1D4); /* 0x140F1534: mov esi, dword ptr [eax + 0x1d4] */
    /* test esi, esi */ /* 0x140F153A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F154C; /* 0x140F153C: je 0x140f154c */
L_140F153E:
    /* cmp ebx, 1 */ /* 0x140F153E: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F154C; /* 0x140F1541: jne 0x140f154c */
L_140F1543:
    /* cmp ecx, 4 */ /* 0x140F1543: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F15D5; /* 0x140F1546: je 0x140f15d5 */
L_140F154C:
    esi = MEM32(eax + 0x1D8); /* 0x140F154C: mov esi, dword ptr [eax + 0x1d8] */
    /* test esi, esi */ /* 0x140F1552: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F155F; /* 0x140F1554: je 0x140f155f */
L_140F1556:
    /* cmp ebx, 4 */ /* 0x140F1556: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F155F; /* 0x140F1559: jne 0x140f155f */
L_140F155B:
    /* cmp ecx, ebx */ /* 0x140F155B: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F15D5; /* 0x140F155D: je 0x140f15d5 */
L_140F155F:
    eax = MEM32(ebp + (-0x48)); /* 0x140F155F: mov eax, dword ptr [ebp - 0x48] */
    ecx = MEM32(ebp + 0x8); /* 0x140F1562: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x140F1565: push edi */
    PUSH32(esp, edx); /* 0x140F1566: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF3FFu);
    eax = eax & 0xFFFFF3FFu; /* 0x140F1567: and eax, 0xfffff3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x140F156C: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140F156D: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_140F0510); /* 0x140F1570: call 0x140f0510 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x140F1575: mov esi, eax */
    /* test esi, esi */ /* 0x140F1577: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F15BD; /* 0x140F1579: je 0x140f15bd */
L_140F157B:
    edi = MEM32(ebp + (-0x4)); /* 0x140F157B: mov edi, dword ptr [ebp - 4] */
    /* cmp ebx, 1 */ /* 0x140F157E: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F1588; /* 0x140F1581: ja 0x140f1588 */
L_140F1583:
    /* cmp edi, 1 */ /* 0x140F1583: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F15C9; /* 0x140F1586: jbe 0x140f15c9 */
L_140F1588:
    eax = MEM32(0x141F3DEC); /* 0x140F1588: mov eax, dword ptr [0x141f3dec] */
    /* cmp ebx, 1 */ /* 0x140F158D: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1607; /* 0x140F1590: jne 0x140f1607 */
L_140F1592:
    /* test eax, eax */ /* 0x140F1592: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140F159A; /* 0x140F1594: jns 0x140f159a */
L_140F1596:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F1596: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140F15A2; /* 0x140F1598: jmp 0x140f15a2 */
L_140F159A:
    PUSH32(esp, eax); /* 0x140F159A: push eax */
    eax = MEM32(0x14001068); /* 0x140F159B: mov eax, dword ptr [0x14001068] */
    RECOMP_ICALL(eax); /* 0x140F15A0: call eax */
    RECOMP_FLAGS_IN();
L_140F15A2:
    ecx = MEM32(eax + 0x4); /* 0x140F15A2: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x140F15A5: push 0x10 */
    PUSH32(esp, 0x24u); /* 0x140F15A7: push 0x24 */
    RECOMP_CALL(sub_141E6491); /* 0x140F15A9: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F15AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F15BD; /* 0x140F15B0: je 0x140f15bd */
L_140F15B2:
    RECOMP_CALL(sub_140F51E0); /* 0x140F15B2: call 0x140f51e0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140F15B7: mov ecx, eax */
    /* test ecx, ecx */ /* 0x140F15B9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1632; /* 0x140F15BB: jne 0x140f1632 */
L_140F15BD:
    eax = MEM32(ebp + 0x8); /* 0x140F15BD: mov eax, dword ptr [ebp + 8] */
    MEM8(eax + 0x248) = (uint8_t)(1); /* 0x140F15C0: mov byte ptr [eax + 0x248], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x140F15C7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F15C9:
    edi = MEM32(ebp + (-0x3C)); /* 0x140F15C9: mov edi, dword ptr [ebp - 0x3c] */
    ebx = MEM32(ebp + (-0x40)); /* 0x140F15CC: mov ebx, dword ptr [ebp - 0x40] */
    edx = MEM32(ebp + (-0x44)); /* 0x140F15CF: mov edx, dword ptr [ebp - 0x44] */
    MEM32(ebp + (-0x4)) = edi; /* 0x140F15D2: mov dword ptr [ebp - 4], edi */
L_140F15D5:
    /* test esi, esi */ /* 0x140F15D5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F17DF; /* 0x140F15D7: je 0x140f17df */
L_140F15DD:
    eax = MEM32(ebp + 0x1C); /* 0x140F15DD: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0x14); /* 0x140F15E0: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax) = esi; /* 0x140F15E3: mov dword ptr [eax], esi */
    eax = MEM32(ebp + 0x20); /* 0x140F15E5: mov eax, dword ptr [ebp + 0x20] */
    MEM32(eax) = esi; /* 0x140F15E8: mov dword ptr [eax], esi */
    /* cmp ecx, 0xFu */ /* 0x140F15EA: cmp ecx, 0xf */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F17C3; /* 0x140F15ED: je 0x140f17c3 */
L_140F15F3:
    if (CMP_GE(_flag_a, _flag_b)) goto L_140F1670; /* 0x140F15F3: jge 0x140f1670 */
L_140F15F5:
    eax = MEM32(ebp + 0x8); /* 0x140F15F5: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + ecx * 4 + 0x68); /* 0x140F15F8: mov ecx, dword ptr [eax + ecx*4 + 0x68] */
    edi = MEM32(ebp + (-0x4)); /* 0x140F15FC: mov edi, dword ptr [ebp - 4] */
    MEM32(ebp + 0x18) = ecx; /* 0x140F15FF: mov dword ptr [ebp + 0x18], ecx */
    goto L_140F168B; /* 0x140F1602: jmp 0x140f168b */
L_140F1607:
    /* test eax, eax */ /* 0x140F1607: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140F160F; /* 0x140F1609: jns 0x140f160f */
L_140F160B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F160B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140F1617; /* 0x140F160D: jmp 0x140f1617 */
L_140F160F:
    PUSH32(esp, eax); /* 0x140F160F: push eax */
    eax = MEM32(0x14001068); /* 0x140F1610: mov eax, dword ptr [0x14001068] */
    RECOMP_ICALL(eax); /* 0x140F1615: call eax */
    RECOMP_FLAGS_IN();
L_140F1617:
    ecx = MEM32(eax + 0x4); /* 0x140F1617: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x140F161A: push 0x10 */
    PUSH32(esp, 0x24u); /* 0x140F161C: push 0x24 */
    RECOMP_CALL(sub_141E6491); /* 0x140F161E: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F1623: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F15BD; /* 0x140F1625: je 0x140f15bd */
L_140F1627:
    RECOMP_CALL(sub_140F4CB0); /* 0x140F1627: call 0x140f4cb0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140F162C: mov ecx, eax */
    /* test ecx, ecx */ /* 0x140F162E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F15BD; /* 0x140F1630: je 0x140f15bd */
L_140F1632:
    edx = MEM32(ebp + 0x18); /* 0x140F1632: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC00u);
    edx = edx & 0xC00u; /* 0x140F1635: and edx, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x140F163B: mov eax, edx */
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x140F163D: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x18) = esi; /* 0x140F1640: mov dword ptr [ecx + 0x18], esi */
    MEM32(ecx + 0x1C) = ebx; /* 0x140F1643: mov dword ptr [ecx + 0x1c], ebx */
    MEM32(ecx + 0x20) = edi; /* 0x140F1646: mov dword ptr [ecx + 0x20], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1669; /* 0x140F1649: je 0x140f1669 */
L_140F164B:
    PUSH32(esp, ecx); /* 0x140F164B: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x140F164C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x140F164F: push 0 */
    PUSH32(esp, edx); /* 0x140F1651: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140F1652: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_140F0510); /* 0x140F1655: call 0x140f0510 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x140F165A: mov esi, eax */
    /* test esi, esi */ /* 0x140F165C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F15BD; /* 0x140F165E: je 0x140f15bd */
L_140F1664:
    RECOMP_BACKEDGE();
    goto L_140F15C9; /* 0x140F1664: jmp 0x140f15c9 */
L_140F1669:
    esi = ecx; /* 0x140F1669: mov esi, ecx */
    RECOMP_BACKEDGE();
    goto L_140F15C9; /* 0x140F166B: jmp 0x140f15c9 */
L_140F1670:
    edi = MEM32(ebp + 0x8); /* 0x140F1670: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x140F1673: mov esi, ecx */
    RECOMP_CALL(sub_140F0380); /* 0x140F1675: call 0x140f0380 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x3C)); /* 0x140F167A: mov edi, dword ptr [ebp - 0x3c] */
    ebx = MEM32(ebp + (-0x40)); /* 0x140F167D: mov ebx, dword ptr [ebp - 0x40] */
    edx = MEM32(ebp + (-0x44)); /* 0x140F1680: mov edx, dword ptr [ebp - 0x44] */
    ecx = eax; /* 0x140F1683: mov ecx, eax */
    MEM32(ebp + 0x18) = eax; /* 0x140F1685: mov dword ptr [ebp + 0x18], eax */
    eax = MEM32(ebp + 0x8); /* 0x140F1688: mov eax, dword ptr [ebp + 8] */
L_140F168B:
    /* test ecx, ecx */ /* 0x140F168B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F17DF; /* 0x140F168D: je 0x140f17df */
L_140F1693:
    ecx = MEM32(ebp + (-0x48)); /* 0x140F1693: mov ecx, dword ptr [ebp - 0x48] */
    esi = MEM32(ebp + 0x18); /* 0x140F1696: mov esi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)((ecx | 0x200u)); _flag_b = (uint32_t)((ecx | 0x200u));
    ecx = ecx | 0x200u; /* 0x140F1699: or ecx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ecx; /* 0x140F169F: mov dword ptr [ebp + 0x10], ecx */
    /* cmp esi, MEM32(eax + 0x78) */ /* 0x140F16A2: cmp esi, dword ptr [eax + 0x78] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x78));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F16DA; /* 0x140F16A5: jne 0x140f16da */
L_140F16A7:
    eax = ecx; /* 0x140F16A7: mov eax, ecx */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x140F16A9: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F16DA; /* 0x140F16AB: jne 0x140f16da */
L_140F16AD:
    eax = MEM32(ebp + 0x8); /* 0x140F16AD: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(eax + 0x1D4); /* 0x140F16B0: mov esi, dword ptr [eax + 0x1d4] */
    /* test esi, esi */ /* 0x140F16B6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F16C4; /* 0x140F16B8: je 0x140f16c4 */
L_140F16BA:
    /* cmp ebx, 1 */ /* 0x140F16BA: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F16C4; /* 0x140F16BD: jne 0x140f16c4 */
L_140F16BF:
    /* cmp edi, 4 */ /* 0x140F16BF: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F173E; /* 0x140F16C2: je 0x140f173e */
L_140F16C4:
    esi = MEM32(eax + 0x1D8); /* 0x140F16C4: mov esi, dword ptr [eax + 0x1d8] */
    /* test esi, esi */ /* 0x140F16CA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F16D7; /* 0x140F16CC: je 0x140f16d7 */
L_140F16CE:
    /* cmp ebx, 4 */ /* 0x140F16CE: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F16D7; /* 0x140F16D1: jne 0x140f16d7 */
L_140F16D3:
    /* cmp edi, ebx */ /* 0x140F16D3: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F173E; /* 0x140F16D5: je 0x140f173e */
L_140F16D7:
    esi = MEM32(ebp + 0x18); /* 0x140F16D7: mov esi, dword ptr [ebp + 0x18] */
L_140F16DA:
    PUSH32(esp, esi); /* 0x140F16DA: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFF3FFu);
    ecx = ecx & 0xFFFFF3FFu; /* 0x140F16DB: and ecx, 0xfffff3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x140F16E1: push edx */
    PUSH32(esp, ecx); /* 0x140F16E2: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140F16E3: push dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x140F16E6: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_140F0510); /* 0x140F16E9: call 0x140f0510 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x140F16EE: mov esi, eax */
    /* test esi, esi */ /* 0x140F16F0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1732; /* 0x140F16F2: je 0x140f1732 */
L_140F16F4:
    /* cmp ebx, 1 */ /* 0x140F16F4: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F1759; /* 0x140F16F7: ja 0x140f1759 */
L_140F16F9:
    /* cmp edi, 1 */ /* 0x140F16F9: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F173E; /* 0x140F16FC: jbe 0x140f173e */
L_140F16FE:
    /* cmp ebx, 1 */ /* 0x140F16FE: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1759; /* 0x140F1701: jne 0x140f1759 */
L_140F1703:
    eax = MEM32(0x141F3DEC); /* 0x140F1703: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x140F1708: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140F1710; /* 0x140F170A: jns 0x140f1710 */
L_140F170C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F170C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140F1717; /* 0x140F170E: jmp 0x140f1717 */
L_140F1710:
    PUSH32(esp, eax); /* 0x140F1710: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x140F1711: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_140F1717:
    ecx = MEM32(eax + 0x4); /* 0x140F1717: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x140F171A: push 0x10 */
    PUSH32(esp, 0x24u); /* 0x140F171C: push 0x24 */
    RECOMP_CALL(sub_141E6491); /* 0x140F171E: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F1723: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1732; /* 0x140F1725: je 0x140f1732 */
L_140F1727:
    RECOMP_CALL(sub_140F51E0); /* 0x140F1727: call 0x140f51e0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140F172C: mov ecx, eax */
    /* test ecx, ecx */ /* 0x140F172E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1788; /* 0x140F1730: jne 0x140f1788 */
L_140F1732:
    eax = MEM32(ebp + 0x8); /* 0x140F1732: mov eax, dword ptr [ebp + 8] */
    MEM8(eax + 0x248) = (uint8_t)(1); /* 0x140F1735: mov byte ptr [eax + 0x248], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x140F173C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F173E:
    eax = MEM32(ebp + 0x24); /* 0x140F173E: mov eax, dword ptr [ebp + 0x24] */
    MEM32(eax) = esi; /* 0x140F1741: mov dword ptr [eax], esi */
    /* test esi, esi */ /* 0x140F1743: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F17ED; /* 0x140F1745: jne 0x140f17ed */
L_140F174B:
    eax = 0x8007000Eu; /* 0x140F174B: mov eax, 0x8007000e */
    edi = POP32_VAL(esp); /* 0x140F1750: pop edi */
    esi = POP32_VAL(esp); /* 0x140F1751: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F1752: pop ebx */
    esp = ebp; /* 0x140F1753: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F1755: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x140F1756: ret 0x20 */
L_140F1759:
    eax = MEM32(0x141F3DEC); /* 0x140F1759: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x140F175E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140F1766; /* 0x140F1760: jns 0x140f1766 */
L_140F1762:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F1762: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140F176D; /* 0x140F1764: jmp 0x140f176d */
L_140F1766:
    PUSH32(esp, eax); /* 0x140F1766: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x140F1767: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_140F176D:
    ecx = MEM32(eax + 0x4); /* 0x140F176D: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x140F1770: push 0x10 */
    PUSH32(esp, 0x24u); /* 0x140F1772: push 0x24 */
    RECOMP_CALL(sub_141E6491); /* 0x140F1774: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F1779: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1732; /* 0x140F177B: je 0x140f1732 */
L_140F177D:
    RECOMP_CALL(sub_140F4CB0); /* 0x140F177D: call 0x140f4cb0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140F1782: mov ecx, eax */
    /* test ecx, ecx */ /* 0x140F1784: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1732; /* 0x140F1786: je 0x140f1732 */
L_140F1788:
    edx = MEM32(ebp + 0x10); /* 0x140F1788: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC00u);
    edx = edx & 0xC00u; /* 0x140F178B: and edx, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x140F1791: mov eax, edx */
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x140F1793: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x18) = esi; /* 0x140F1796: mov dword ptr [ecx + 0x18], esi */
    MEM32(ecx + 0x1C) = ebx; /* 0x140F1799: mov dword ptr [ecx + 0x1c], ebx */
    MEM32(ecx + 0x20) = edi; /* 0x140F179C: mov dword ptr [ecx + 0x20], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F17BC; /* 0x140F179F: je 0x140f17bc */
L_140F17A1:
    PUSH32(esp, ecx); /* 0x140F17A1: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x140F17A2: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x140F17A5: push 0 */
    PUSH32(esp, edx); /* 0x140F17A7: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140F17A8: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_140F0510); /* 0x140F17AB: call 0x140f0510 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x140F17B0: mov esi, eax */
    /* test esi, esi */ /* 0x140F17B2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1732; /* 0x140F17B4: je 0x140f1732 */
L_140F17BA:
    RECOMP_BACKEDGE();
    goto L_140F173E; /* 0x140F17BA: jmp 0x140f173e */
L_140F17BC:
    esi = ecx; /* 0x140F17BC: mov esi, ecx */
    RECOMP_BACKEDGE();
    goto L_140F173E; /* 0x140F17BE: jmp 0x140f173e */
L_140F17C3:
    ecx = MEM32(ebp + 0x8); /* 0x140F17C3: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x140F17C6: push esi */
    PUSH32(esp, 0); /* 0x140F17C7: push 0 */
    PUSH32(esp, 0x200u); /* 0x140F17C9: push 0x200 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140F17CE: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_140F0510); /* 0x140F17D1: call 0x140f0510 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x24); /* 0x140F17D6: mov ecx, dword ptr [ebp + 0x24] */
    MEM32(ecx) = eax; /* 0x140F17D9: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x140F17DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F17ED; /* 0x140F17DD: jne 0x140f17ed */
L_140F17DF:
    eax = 0x8007000Eu; /* 0x140F17DF: mov eax, 0x8007000e */
    edi = POP32_VAL(esp); /* 0x140F17E4: pop edi */
    esi = POP32_VAL(esp); /* 0x140F17E5: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F17E6: pop ebx */
    esp = ebp; /* 0x140F17E7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F17E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x140F17EA: ret 0x20 */
L_140F17ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F17ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140F17EF: pop edi */
    esi = POP32_VAL(esp); /* 0x140F17F0: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F17F1: pop ebx */
    esp = ebp; /* 0x140F17F2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F17F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x140F17F5: ret 0x20 */
L_140F17F8:
    eax = 0x80004005u; /* 0x140F17F8: mov eax, 0x80004005 */
L_140F17FD:
    edi = POP32_VAL(esp); /* 0x140F17FD: pop edi */
    esi = POP32_VAL(esp); /* 0x140F17FE: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F17FF: pop ebx */
    esp = ebp; /* 0x140F1800: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F1802: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x140F1803: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_140F1810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F1810u);

L_140F1810:
    edi = edi; /* 0x140F1810: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F1812: push ebp */
    ebp = esp; /* 0x140F1813: mov ebp, esp */
    eax = MEM32(ecx); /* 0x140F1815: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x140F1817: sub esp, 0x60 */
    _flag_k = FK_CMP;
    edx = ebp + (-0x60); /* 0x140F181A: lea edx, [ebp - 0x60] */
    PUSH32(esp, edx); /* 0x140F181D: push edx */
    PUSH32(esp, 3); /* 0x140F181E: push 3 */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x140F1820: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F1823: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1893; /* 0x140F1825: je 0x140f1893 */
L_140F1827:
    eax = MEM32(ebp + (-0x60)); /* 0x140F1827: mov eax, dword ptr [ebp - 0x60] */
    /* cmp eax, 6 */ /* 0x140F182A: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F1844; /* 0x140F182D: je 0x140f1844 */
L_140F182F:
    if (CMP_LE(_flag_a, _flag_b)) goto L_140F1893; /* 0x140F182F: jle 0x140f1893 */
L_140F1831:
    /* cmp eax, 9 */ /* 0x140F1831: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_140F1893; /* 0x140F1834: jg 0x140f1893 */
L_140F1836:
    eax = MEM32(esi + 0x1C4); /* 0x140F1836: mov eax, dword ptr [esi + 0x1c4] */
    MEM32(edi) = eax; /* 0x140F183C: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F183E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F1840: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F1842: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F1843: ret  */
L_140F1844:
    eax = MEM32(ebp + (-0x58)); /* 0x140F1844: mov eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE9u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFE9u; /* 0x140F1847: add eax, -0x17 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x2Cu */ /* 0x140F184A: cmp eax, 0x2c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F1893; /* 0x140F184D: ja 0x140f1893 */
L_140F184F:
    eax = (uint32_t)MEM8(eax + 0x140F18B0); /* 0x140F184F: movzx eax, byte ptr [eax + 0x140f18b0] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F189C)); goto _ljump; }
L_140F185D:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140F185D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1836; /* 0x140F185F: je 0x140f1836 */
L_140F1861:
    eax = MEM32(esi + 0x1C8); /* 0x140F1861: mov eax, dword ptr [esi + 0x1c8] */
    MEM32(edi) = eax; /* 0x140F1867: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F1869: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F186B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F186D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F186E: ret  */
L_140F186F:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140F186F: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1861; /* 0x140F1871: je 0x140f1861 */
L_140F1873:
    eax = MEM32(esi + 0x1CC); /* 0x140F1873: mov eax, dword ptr [esi + 0x1cc] */
    MEM32(edi) = eax; /* 0x140F1879: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F187B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F187D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F187F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F1880: ret  */
L_140F1881:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140F1881: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1873; /* 0x140F1883: je 0x140f1873 */
L_140F1885:
    eax = MEM32(esi + 0x1D0); /* 0x140F1885: mov eax, dword ptr [esi + 0x1d0] */
    MEM32(edi) = eax; /* 0x140F188B: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F188D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F188F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F1891: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F1892: ret  */
L_140F1893:
    eax = 0x80004005u; /* 0x140F1893: mov eax, 0x80004005 */
    esp = ebp; /* 0x140F1898: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F189A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F189B: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x140F1836u: goto L_140F1836;
      case 0x140F185Du: goto L_140F185D;
      case 0x140F186Fu: goto L_140F186F;
      case 0x140F1881u: goto L_140F1881;
      case 0x140F1893u: goto L_140F1893;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F18F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F18F0u);

L_140F18F0:
    /* cmp eax, ecx */ /* 0x140F18F0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F190A; /* 0x140F18F2: je 0x140f190a */
L_140F18F4:
    /* cmp eax, 4 */ /* 0x140F18F4: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1900; /* 0x140F18F7: jne 0x140f1900 */
L_140F18F9:
    /* cmp ecx, 3 */ /* 0x140F18F9: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F190A; /* 0x140F18FC: je 0x140f190a */
L_140F18FE:
    goto L_140F191F; /* 0x140F18FE: jmp 0x140f191f */
L_140F1900:
    /* cmp eax, 3 */ /* 0x140F1900: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F190D; /* 0x140F1903: jne 0x140f190d */
L_140F1905:
    /* cmp ecx, 4 */ /* 0x140F1905: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F191F; /* 0x140F1908: jne 0x140f191f */
L_140F190A:
    SET_LO8(eax, 1); /* 0x140F190A: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F190C: ret  */
L_140F190D:
    /* cmp eax, 0x20u */ /* 0x140F190D: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F191F; /* 0x140F1910: jne 0x140f191f */
L_140F1912:
    /* test MEM32(ecx * 4 + 0x140278B8), 0x8000u */ /* 0x140F1912: test dword ptr [ecx*4 + 0x140278b8], 0x8000 */
    _flag_a = (uint32_t)(MEM32(ecx * 4 + 0x140278B8)); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F190A; /* 0x140F191D: jne 0x140f190a */
L_140F191F:
    /* cmp ecx, 0x20u */ /* 0x140F191F: cmp ecx, 0x20 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1931; /* 0x140F1922: jne 0x140f1931 */
L_140F1924:
    /* test MEM32(eax * 4 + 0x140278B8), 0x8000u */ /* 0x140F1924: test dword ptr [eax*4 + 0x140278b8], 0x8000 */
    _flag_a = (uint32_t)(MEM32(eax * 4 + 0x140278B8)); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F190A; /* 0x140F192F: jne 0x140f190a */
L_140F1931:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F1931: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F1933: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F1940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F1940u);

L_140F1940:
    edi = edi; /* 0x140F1940: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F1942: push ebp */
    ebp = esp; /* 0x140F1943: mov ebp, esp */
    eax = MEM32(ecx); /* 0x140F1945: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140F1947: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x140F194A: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x140F194D: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x140F194F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x140F1951: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x140F1953: mov eax, dword ptr [ebp + 8] */
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x140F1956: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x140F1958: neg ecx */
    _flag_k = FK_CMP;
    MEM32(eax) = ecx; /* 0x140F195A: mov dword ptr [eax], ecx */
    ebp = POP32_VAL(esp); /* 0x140F195C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F195D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F1970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F1970u);

L_140F1970:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F1970: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F1972: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F1980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F1980u);

L_140F1980:
    eax = 0x80004005u; /* 0x140F1980: mov eax, 0x80004005 */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F1985: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F1990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F1990u);

L_140F1990:
    eax = 1; /* 0x140F1990: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x140F1995: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_140F19A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F19A0u);

L_140F19A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F19A0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F19A2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F19B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F19B0u);

L_140F19B0:
    edi = edi; /* 0x140F19B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F19B2: push ebp */
    ebp = esp; /* 0x140F19B3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x140F19B5: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x140F19B8: push ebx */
    ebx = eax; /* 0x140F19B9: mov ebx, eax */
    /* test edx, edx */ /* 0x140F19BB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1A51; /* 0x140F19BD: je 0x140f1a51 */
L_140F19C3:
    eax = edx; /* 0x140F19C3: mov eax, edx */
L_140F19C5:
    /* test eax, eax */ /* 0x140F19C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F19D4; /* 0x140F19C7: je 0x140f19d4 */
L_140F19C9:
    /* cmp MEM32(eax + 0x4), 0xAu */ /* 0x140F19C9: cmp dword ptr [eax + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F19D4; /* 0x140F19CD: jne 0x140f19d4 */
L_140F19CF:
    eax = MEM32(eax + 0x20); /* 0x140F19CF: mov eax, dword ptr [eax + 0x20] */
    RECOMP_BACKEDGE();
    goto L_140F19C5; /* 0x140F19D2: jmp 0x140f19c5 */
L_140F19D4:
    /* cmp MEM32(eax + 0x4), 7 */ /* 0x140F19D4: cmp dword ptr [eax + 4], 7 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F19D8: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x140F19DB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1A51; /* 0x140F19DD: je 0x140f1a51 */
L_140F19DF:
    /* test ecx, ecx */ /* 0x140F19DF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1A51; /* 0x140F19E1: je 0x140f1a51 */
L_140F19E3:
    eax = ecx; /* 0x140F19E3: mov eax, ecx */
L_140F19E5:
    /* test eax, eax */ /* 0x140F19E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F19F4; /* 0x140F19E7: je 0x140f19f4 */
L_140F19E9:
    /* cmp MEM32(eax + 0x4), 0xAu */ /* 0x140F19E9: cmp dword ptr [eax + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F19F4; /* 0x140F19ED: jne 0x140f19f4 */
L_140F19EF:
    eax = MEM32(eax + 0x20); /* 0x140F19EF: mov eax, dword ptr [eax + 0x20] */
    RECOMP_BACKEDGE();
    goto L_140F19E5; /* 0x140F19F2: jmp 0x140f19e5 */
L_140F19F4:
    /* cmp MEM32(eax + 0x4), 7 */ /* 0x140F19F4: cmp dword ptr [eax + 4], 7 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F19F8: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x140F19FB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1A51; /* 0x140F19FD: je 0x140f1a51 */
L_140F19FF:
    PUSH32(esp, esi); /* 0x140F19FF: push esi */
    PUSH32(esp, edi); /* 0x140F1A00: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140F1A01: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_14086500); /* 0x140F1A03: call 0x14086500 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x140F1A08: mov esi, dword ptr [eax] */
    ecx = eax; /* 0x140F1A0A: mov ecx, eax */
    RECOMP_ICALL(MEM32(esi + 0x4)); /* 0x140F1A0C: call dword ptr [esi + 4] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x140F1A0F: mov edx, dword ptr [ebp + 8] */
    esi = eax; /* 0x140F1A12: mov esi, eax */
    RECOMP_CALL(sub_14086500); /* 0x140F1A14: call 0x14086500 */
    RECOMP_FLAGS_IN();
    edx = MEM32(eax); /* 0x140F1A19: mov edx, dword ptr [eax] */
    ecx = eax; /* 0x140F1A1B: mov ecx, eax */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x140F1A1D: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140F1A20: mov ecx, eax */
    /* cmp esi, ecx */ /* 0x140F1A22: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F1A36; /* 0x140F1A24: je 0x140f1a36 */
L_140F1A26:
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F1A41; /* 0x140F1A26: jbe 0x140f1a41 */
L_140F1A28:
    /* test ecx, ecx */ /* 0x140F1A28: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1A4F; /* 0x140F1A2A: je 0x140f1a4f */
L_140F1A2C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140F1A2C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x140F1A2E: mov eax, esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x140F1A30: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x140F1A32: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1A4F; /* 0x140F1A34: jne 0x140f1a4f */
L_140F1A36:
    ebx = esi; /* 0x140F1A36: mov ebx, esi */
    edi = POP32_VAL(esp); /* 0x140F1A38: pop edi */
    esi = POP32_VAL(esp); /* 0x140F1A39: pop esi */
    eax = ebx; /* 0x140F1A3A: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x140F1A3C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F1A3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F1A3E: ret 4 */
L_140F1A41:
    /* test esi, esi */ /* 0x140F1A41: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1A4F; /* 0x140F1A43: je 0x140f1a4f */
L_140F1A45:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140F1A45: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x140F1A47: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x140F1A49: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1A4F; /* 0x140F1A4B: jne 0x140f1a4f */
L_140F1A4D:
    ebx = ecx; /* 0x140F1A4D: mov ebx, ecx */
L_140F1A4F:
    edi = POP32_VAL(esp); /* 0x140F1A4F: pop edi */
    esi = POP32_VAL(esp); /* 0x140F1A50: pop esi */
L_140F1A51:
    eax = ebx; /* 0x140F1A51: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x140F1A53: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F1A54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F1A55: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F1A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F1A60u);

L_140F1A60:
    edi = edi; /* 0x140F1A60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F1A62: push ebp */
    ebp = esp; /* 0x140F1A63: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x68u; /* 0x140F1A65: sub esp, 0x68 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x140F1A68: push esi */
    edx = ebp + (-0x64); /* 0x140F1A69: lea edx, [ebp - 0x64] */
    PUSH32(esp, edx); /* 0x140F1A6C: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140F1A6D: push dword ptr [ebp + 8] */
    esi = eax; /* 0x140F1A70: mov esi, eax */
    eax = MEM32(ecx); /* 0x140F1A72: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x140F1A74: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F1A77: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1A82; /* 0x140F1A79: jne 0x140f1a82 */
L_140F1A7B:
    esi = POP32_VAL(esp); /* 0x140F1A7B: pop esi */
    esp = ebp; /* 0x140F1A7C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F1A7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F1A7F: ret 4 */
L_140F1A82:
    SET_LO8(ecx, MEM8(ebp + (-0xC))); /* 0x140F1A82: mov cl, byte ptr [ebp - 0xc] */
    /* test LO8(ecx), 2 */ /* 0x140F1A85: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1A8E; /* 0x140F1A88: je 0x140f1a8e */
L_140F1A8A:
    _flag_a = (uint32_t)((MEM8(esi + 0x58) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x58) | 2)) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) | 2); /* 0x140F1A8A: or byte ptr [esi + 0x58], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_140F1A8E:
    /* test LO8(ecx), 1 */ /* 0x140F1A8E: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1A99; /* 0x140F1A91: jne 0x140f1a99 */
L_140F1A93:
    /* cmp MEM32(ebp + (-0x5C)), 0x10u */ /* 0x140F1A93: cmp dword ptr [ebp - 0x5c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F1A9D; /* 0x140F1A97: je 0x140f1a9d */
L_140F1A99:
    _flag_a = (uint32_t)((MEM8(esi + 0x58) | 1)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x58) | 1)) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) | 1); /* 0x140F1A99: or byte ptr [esi + 0x58], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_140F1A9D:
    ecx = MEM32(ebp + (-0x2C)); /* 0x140F1A9D: mov ecx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) + ecx; /* 0x140F1AA0: add dword ptr [esi + 0x38], ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x28)); /* 0x140F1AA3: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) + ecx; /* 0x140F1AA6: add dword ptr [esi + 0x3c], ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x24)); /* 0x140F1AA9: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x40) = MEM32(esi + 0x40) + ecx; /* 0x140F1AAC: add dword ptr [esi + 0x40], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x140F1AAF: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x64); /* 0x140F1AB2: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_140F27C0); /* 0x140F1AB5: call 0x140f27c0 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x140F1ABA: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x140F1ABC: pop esi */
    esp = ebp; /* 0x140F1ABD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F1ABF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F1AC0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F1AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F1AD0u);

L_140F1AD0:
    edi = edi; /* 0x140F1AD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F1AD2: push ebp */
    ebp = esp; /* 0x140F1AD3: mov ebp, esp */
    eax = MEM32(ebx); /* 0x140F1AD5: mov eax, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x140F1AD7: push esi */
    PUSH32(esp, 3); /* 0x140F1AD8: push 3 */
    ecx = ebx; /* 0x140F1ADA: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x140F1ADC: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F1ADF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1AE7; /* 0x140F1AE1: jne 0x140f1ae7 */
L_140F1AE3:
    ebp = POP32_VAL(esp); /* 0x140F1AE3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F1AE4: ret 4 */
L_140F1AE7:
    eax = MEM32(esi); /* 0x140F1AE7: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x140F1AE9: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFDu; /* 0x140F1AEB: add eax, -3 */
    _flag_k = FK_ADD;
    /* cmp eax, 6 */ /* 0x140F1AEE: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F1B4D; /* 0x140F1AF1: ja 0x140f1b4d */
L_140F1AF3:
    eax = (uint32_t)MEM8(eax + 0x140F1B60); /* 0x140F1AF3: movzx eax, byte ptr [eax + 0x140f1b60] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F1B54)); goto _ljump; }
L_140F1B01:
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x140F1B01: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F1B29; /* 0x140F1B05: je 0x140f1b29 */
L_140F1B07:
    eax = MEM32(ebx); /* 0x140F1B07: mov eax, dword ptr [ebx] */
    ecx = ebp + 0x8; /* 0x140F1B09: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x140F1B0C: push ecx */
    ecx = ebx; /* 0x140F1B0D: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x140F1B0F: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax), 0x40u */ /* 0x140F1B12: test byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1B29; /* 0x140F1B15: je 0x140f1b29 */
L_140F1B17:
    eax = MEM32(esi + 0x38); /* 0x140F1B17: mov eax, dword ptr [esi + 0x38] */
    MEM32(esi + 0x34) = eax; /* 0x140F1B1A: mov dword ptr [esi + 0x34], eax */
    MEM32(esi) = 9; /* 0x140F1B1D: mov dword ptr [esi], 9 */
    SET_LO8(eax, 1); /* 0x140F1B23: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x140F1B25: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F1B26: ret 4 */
L_140F1B29:
    eax = MEM32(esi + 0x38); /* 0x140F1B29: mov eax, dword ptr [esi + 0x38] */
    MEM32(esi + 0x34) = eax; /* 0x140F1B2C: mov dword ptr [esi + 0x34], eax */
    MEM32(esi) = 3; /* 0x140F1B2F: mov dword ptr [esi], 3 */
    SET_LO8(eax, 1); /* 0x140F1B35: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x140F1B37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F1B38: ret 4 */
L_140F1B3B:
    /* cmp MEM32(esi + 0x34), 1 */ /* 0x140F1B3B: cmp dword ptr [esi + 0x34], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1B4D; /* 0x140F1B3F: jne 0x140f1b4d */
L_140F1B41:
    /* cmp MEM32(esi + 0x30), 1 */ /* 0x140F1B41: cmp dword ptr [esi + 0x30], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1B4D; /* 0x140F1B45: jne 0x140f1b4d */
L_140F1B47:
    MEM32(esi) = 2; /* 0x140F1B47: mov dword ptr [esi], 2 */
L_140F1B4D:
    SET_LO8(eax, 1); /* 0x140F1B4D: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x140F1B4F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F1B50: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x140F1B01u: goto L_140F1B01;
      case 0x140F1B3Bu: goto L_140F1B3B;
      case 0x140F1B4Du: goto L_140F1B4D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F1B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F1B70u);

L_140F1B70:
    edi = edi; /* 0x140F1B70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F1B72: push ebp */
    ebp = esp; /* 0x140F1B73: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x108u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x108u; /* 0x140F1B75: sub esp, 0x108 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x140F1B7B: push ebx */
    PUSH32(esp, esi); /* 0x140F1B7C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x140F1B7D: mov esi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x140F1B80: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x140F1B82: push edi */
    MEM32(ebp + (-0x14)) = ebx; /* 0x140F1B83: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x24)) = 0; /* 0x140F1B86: mov dword ptr [ebp - 0x24], 0 */
    /* cmp ebx, esi */ /* 0x140F1B8D: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1B9B; /* 0x140F1B8F: jne 0x140f1b9b */
L_140F1B91:
    eax = 2; /* 0x140F1B91: mov eax, 2 */
    goto L_140F2089; /* 0x140F1B96: jmp 0x140f2089 */
L_140F1B9B:
    eax = MEM32(ebp + 0xC); /* 0x140F1B9B: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x140F1B9E: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xC); /* 0x140F1BA1: lea ecx, [ebp - 0xc] */
    MEM32(ebp + (-0x28)) = eax; /* 0x140F1BA4: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebx); /* 0x140F1BA7: mov eax, dword ptr [ebx] */
    PUSH32(esp, ecx); /* 0x140F1BA9: push ecx */
    ecx = ebx; /* 0x140F1BAA: mov ecx, ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1BDB; /* 0x140F1BAC: je 0x140f1bdb */
L_140F1BAE:
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x140F1BAE: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax), 1 */ /* 0x140F1BB1: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1BC0; /* 0x140F1BB4: je 0x140f1bc0 */
L_140F1BB6:
    eax = 4; /* 0x140F1BB6: mov eax, 4 */
    goto L_140F2089; /* 0x140F1BBB: jmp 0x140f2089 */
L_140F1BC0:
    eax = MEM32(esi); /* 0x140F1BC0: mov eax, dword ptr [esi] */
    ecx = ebp + (-0xC); /* 0x140F1BC2: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x140F1BC5: push ecx */
    ecx = esi; /* 0x140F1BC6: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x140F1BC8: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax), 1 */ /* 0x140F1BCB: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1C25; /* 0x140F1BCE: je 0x140f1c25 */
L_140F1BD0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F1BD0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x140F1BD2: pop edi */
    esi = POP32_VAL(esp); /* 0x140F1BD3: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F1BD4: pop ebx */
    esp = ebp; /* 0x140F1BD5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F1BD7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F1BD8: ret 0xc */
L_140F1BDB:
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x140F1BDB: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax), 1 */ /* 0x140F1BDE: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1BFD; /* 0x140F1BE1: je 0x140f1bfd */
L_140F1BE3:
    eax = MEM32(esi); /* 0x140F1BE3: mov eax, dword ptr [esi] */
    ecx = ebp + (-0xC); /* 0x140F1BE5: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x140F1BE8: push ecx */
    ecx = esi; /* 0x140F1BE9: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x140F1BEB: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax), 1 */ /* 0x140F1BEE: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1BFD; /* 0x140F1BF1: je 0x140f1bfd */
L_140F1BF3:
    eax = 4; /* 0x140F1BF3: mov eax, 4 */
    goto L_140F2089; /* 0x140F1BF8: jmp 0x140f2089 */
L_140F1BFD:
    eax = MEM32(ebx); /* 0x140F1BFD: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0xC); /* 0x140F1BFF: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x140F1C02: push ecx */
    ecx = ebx; /* 0x140F1C03: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x140F1C05: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax), 1 */ /* 0x140F1C08: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1C0B: jne 0x140f1e37 */
L_140F1C11:
    eax = MEM32(esi); /* 0x140F1C11: mov eax, dword ptr [esi] */
    ecx = ebp + (-0xC); /* 0x140F1C13: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x140F1C16: push ecx */
    ecx = esi; /* 0x140F1C17: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x140F1C19: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax), 1 */ /* 0x140F1C1C: test byte ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1C1F: jne 0x140f1e37 */
L_140F1C25:
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x140F1C25: mov al, byte ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x8); /* 0x140F1C28: mov ebx, dword ptr [ebp + 8] */
    edi = ebp + (-0x8); /* 0x140F1C2B: lea edi, [ebp - 8] */
    esi = ebp + (-0xA4); /* 0x140F1C2E: lea esi, [ebp - 0xa4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF01u);
    eax = eax & 0xFFFFFF01u; /* 0x140F1C34: and eax, 0xffffff01 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x140F1C39: push eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x140F1C3A: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_140F1AD0); /* 0x140F1C3D: call 0x140f1ad0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F1C42: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1C44: je 0x140f1e37 */
L_140F1C4A:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x140F1C4A: push dword ptr [ebp - 0x18] */
    ebx = MEM32(ebp + (-0x14)); /* 0x140F1C4D: mov ebx, dword ptr [ebp - 0x14] */
    edi = ebp + (-0x10); /* 0x140F1C50: lea edi, [ebp - 0x10] */
    esi = ebp + (-0x104); /* 0x140F1C53: lea esi, [ebp - 0x104] */
    RECOMP_CALL(sub_140F1AD0); /* 0x140F1C59: call 0x140f1ad0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F1C5E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1C60: je 0x140f1e37 */
L_140F1C66:
    /* cmp MEM32(ebp + (-0x8)), 7 */ /* 0x140F1C66: cmp dword ptr [ebp - 8], 7 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = 0xFFFFFFFFu; /* 0x140F1C6A: mov dword ptr [ebp - 0x20], 0xffffffff */
    MEM32(ebp + (-0x1C)) = 0xFFFFFFFFu; /* 0x140F1C71: mov dword ptr [ebp - 0x1c], 0xffffffff */
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1CB7; /* 0x140F1C78: jne 0x140f1cb7 */
L_140F1C7A:
    edx = MEM32(ebp + 0x8); /* 0x140F1C7A: mov edx, dword ptr [ebp + 8] */
    edi = ebp + (-0x20); /* 0x140F1C7D: lea edi, [ebp - 0x20] */
    RECOMP_CALL(sub_14086500); /* 0x140F1C80: call 0x14086500 */
    RECOMP_FLAGS_IN();
    edx = 5; /* 0x140F1C85: mov edx, 5 */
    ecx = eax; /* 0x140F1C8A: mov ecx, eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x140F1C8C: mov dword ptr [ebp - 0xc], eax */
    RECOMP_CALL(sub_140864D0); /* 0x140F1C8F: call 0x140864d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F1C94: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1CB7; /* 0x140F1C96: je 0x140f1cb7 */
L_140F1C98:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x140F1C98: push dword ptr [ebp - 0x18] */
    ebx = MEM32(ebp + (-0xC)); /* 0x140F1C9B: mov ebx, dword ptr [ebp - 0xc] */
    edi = ebp + (-0x8); /* 0x140F1C9E: lea edi, [ebp - 8] */
    esi = ebp + (-0xA4); /* 0x140F1CA1: lea esi, [ebp - 0xa4] */
    RECOMP_CALL(sub_140F1AD0); /* 0x140F1CA7: call 0x140f1ad0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F1CAC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1CAE: je 0x140f1e37 */
L_140F1CB4:
    ebx = MEM32(ebp + (-0x14)); /* 0x140F1CB4: mov ebx, dword ptr [ebp - 0x14] */
L_140F1CB7:
    esi = MEM32(ebp + (-0x10)); /* 0x140F1CB7: mov esi, dword ptr [ebp - 0x10] */
    /* cmp esi, 7 */ /* 0x140F1CBA: cmp esi, 7 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1CFB; /* 0x140F1CBD: jne 0x140f1cfb */
L_140F1CBF:
    edi = ebp + (-0x1C); /* 0x140F1CBF: lea edi, [ebp - 0x1c] */
    edx = ebx; /* 0x140F1CC2: mov edx, ebx */
    RECOMP_CALL(sub_14086500); /* 0x140F1CC4: call 0x14086500 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x8)), 5 */ /* 0x140F1CC9: cmp dword ptr [ebp - 8], 5 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = eax; /* 0x140F1CCD: mov ebx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F1CDF; /* 0x140F1CCF: je 0x140f1cdf */
L_140F1CD1:
    edx = esi + (-0x2); /* 0x140F1CD1: lea edx, [esi - 2] */
    ecx = ebx; /* 0x140F1CD4: mov ecx, ebx */
    RECOMP_CALL(sub_140864D0); /* 0x140F1CD6: call 0x140864d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F1CDB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1CFB; /* 0x140F1CDD: je 0x140f1cfb */
L_140F1CDF:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x140F1CDF: push dword ptr [ebp - 0x18] */
    edi = ebp + (-0x10); /* 0x140F1CE2: lea edi, [ebp - 0x10] */
    esi = ebp + (-0x104); /* 0x140F1CE5: lea esi, [ebp - 0x104] */
    RECOMP_CALL(sub_140F1AD0); /* 0x140F1CEB: call 0x140f1ad0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F1CF0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1CF2: je 0x140f1e37 */
L_140F1CF8:
    esi = MEM32(ebp + (-0x10)); /* 0x140F1CF8: mov esi, dword ptr [ebp - 0x10] */
L_140F1CFB:
    /* cmp MEM32(ebp + (-0x8)), 5 */ /* 0x140F1CFB: cmp dword ptr [ebp - 8], 5 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F1FC1; /* 0x140F1CFF: je 0x140f1fc1 */
L_140F1D05:
    /* cmp esi, 5 */ /* 0x140F1D05: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1D08: je 0x140f1e37 */
L_140F1D0E:
    /* test MEM8(ebp + 0xC), 2 */ /* 0x140F1D0E: test byte ptr [ebp + 0xc], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = MEM32(ebp + (-0xCC)); /* 0x140F1D12: mov edx, dword ptr [ebp - 0xcc] */
    esi = MEM32(ebp + (-0x6C)); /* 0x140F1D18: mov esi, dword ptr [ebp - 0x6c] */
    MEM32(ebp + (-0x8)) = edx; /* 0x140F1D1B: mov dword ptr [ebp - 8], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1D28; /* 0x140F1D1E: je 0x140f1d28 */
L_140F1D20:
    /* cmp esi, edx */ /* 0x140F1D20: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1D22: jne 0x140f1e37 */
L_140F1D28:
    ecx = MEM32(ebp + (-0xA4)); /* 0x140F1D28: mov ecx, dword ptr [ebp - 0xa4] */
    /* cmp ecx, 3 */ /* 0x140F1D2E: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F1EAB; /* 0x140F1D31: je 0x140f1eab */
L_140F1D37:
    eax = MEM32(ebp + (-0x104)); /* 0x140F1D37: mov eax, dword ptr [ebp - 0x104] */
    /* cmp eax, 3 */ /* 0x140F1D3D: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F1EAB; /* 0x140F1D40: je 0x140f1eab */
L_140F1D46:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x140F1D46: add ecx, -2 */
    _flag_k = FK_ADD;
    /* cmp ecx, 7 */ /* 0x140F1D49: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1D4C: ja 0x140f1e37 */
L_140F1D52:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x140F20A0)); goto _ljump; }
L_140F1D59:
    /* cmp eax, 6 */ /* 0x140F1D59: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1D5C: je 0x140f1e37 */
L_140F1D62:
    /* cmp eax, 4 */ /* 0x140F1D62: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1D65: je 0x140f1e37 */
L_140F1D6B:
    /* cmp eax, 5 */ /* 0x140F1D6B: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1DC7; /* 0x140F1D6E: jne 0x140f1dc7 */
L_140F1D70:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F1D70: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x140F1D72: pop edi */
    esi = POP32_VAL(esp); /* 0x140F1D73: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F1D74: pop ebx */
    esp = ebp; /* 0x140F1D75: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F1D77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F1D78: ret 0xc */
L_140F1D7B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x140F1D7B: add eax, -4 */
    _flag_k = FK_ADD;
    /* cmp eax, 5 */ /* 0x140F1D7E: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F1DC7; /* 0x140F1D81: ja 0x140f1dc7 */
L_140F1D83:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F20C0)); goto _ljump; }
L_140F1D8A:
    eax = MEM32(ebp + (-0xD4)); /* 0x140F1D8A: mov eax, dword ptr [ebp - 0xd4] */
    edx = MEM32(ebp + (-0x70)); /* 0x140F1D90: mov edx, dword ptr [ebp - 0x70] */
    ecx = MEM32(ebp + (-0xD0)); /* 0x140F1D93: mov ecx, dword ptr [ebp - 0xd0] */
    /* cmp eax, 1 */ /* 0x140F1D99: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1DA6; /* 0x140F1D9C: jne 0x140f1da6 */
L_140F1D9E:
    /* cmp edx, ecx */ /* 0x140F1D9E: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1DA0: ja 0x140f1e37 */
L_140F1DA6:
    /* cmp ecx, 1 */ /* 0x140F1DA6: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1DB3; /* 0x140F1DA9: jne 0x140f1db3 */
L_140F1DAB:
    /* cmp edx, eax */ /* 0x140F1DAB: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_140F1DAD:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_140F1E37; /* 0x140F1DAD: ja 0x140f1e37 */
L_140F1DB3:
    /* cmp eax, 1 */ /* 0x140F1DB3: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F1DC4; /* 0x140F1DB6: je 0x140f1dc4 */
L_140F1DB8:
    /* cmp ecx, 1 */ /* 0x140F1DB8: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F1DC4; /* 0x140F1DBB: je 0x140f1dc4 */
L_140F1DBD:
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x140F1DBD: imul eax, ecx */
    /* cmp eax, edx */ /* 0x140F1DC0: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1DC2: jne 0x140f1e37 */
L_140F1DC4:
    edx = MEM32(ebp + (-0x8)); /* 0x140F1DC4: mov edx, dword ptr [ebp - 8] */
L_140F1DC7:
    eax = MEM32(ebp + (-0xA0)); /* 0x140F1DC7: mov eax, dword ptr [ebp - 0xa0] */
    ecx = MEM32(eax * 4 + 0x140278B8); /* 0x140F1DCD: mov ecx, dword ptr [eax*4 + 0x140278b8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x140F1DD4: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1E42; /* 0x140F1DD7: je 0x140f1e42 */
L_140F1DD9:
    eax = MEM32(ebp + (-0x100)); /* 0x140F1DD9: mov eax, dword ptr [ebp - 0x100] */
    eax = MEM32(eax * 4 + 0x140278B8); /* 0x140F1DDF: mov eax, dword ptr [eax*4 + 0x140278b8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x140F1DE6: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x140F1DE9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140F1E42; /* 0x140F1DEB: jae 0x140f1e42 */
L_140F1DED:
    eax = 1; /* 0x140F1DED: mov eax, 1 */
    goto L_140F1E44; /* 0x140F1DF2: jmp 0x140f1e44 */
L_140F1DF4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x140F1DF4: add eax, -4 */
    _flag_k = FK_ADD;
    /* cmp eax, 5 */ /* 0x140F1DF7: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_140F1DC7; /* 0x140F1DFA: ja 0x140f1dc7 */
L_140F1DFC:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F20D8)); goto _ljump; }
L_140F1E03:
    eax = MEM32(ebp + (-0x74)); /* 0x140F1E03: mov eax, dword ptr [ebp - 0x74] */
    ecx = MEM32(ebp + (-0x70)); /* 0x140F1E06: mov ecx, dword ptr [ebp - 0x70] */
    edx = MEM32(ebp + (-0xD0)); /* 0x140F1E09: mov edx, dword ptr [ebp - 0xd0] */
    /* cmp eax, 1 */ /* 0x140F1E0F: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1E18; /* 0x140F1E12: jne 0x140f1e18 */
L_140F1E14:
    /* cmp ecx, edx */ /* 0x140F1E14: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1E16: ja 0x140f1e37 */
L_140F1E18:
    /* cmp ecx, 1 */ /* 0x140F1E18: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1DB3; /* 0x140F1E1B: jne 0x140f1db3 */
L_140F1E1D:
    /* cmp eax, edx */ /* 0x140F1E1D: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_140F1DAD; /* 0x140F1E1F: jmp 0x140f1dad */
L_140F1E21:
    eax = MEM32(ebp + (-0x74)); /* 0x140F1E21: mov eax, dword ptr [ebp - 0x74] */
    /* cmp eax, MEM32(ebp + (-0xD4)) */ /* 0x140F1E24: cmp eax, dword ptr [ebp - 0xd4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xD4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1E2A: ja 0x140f1e37 */
L_140F1E2C:
    eax = MEM32(ebp + (-0x70)); /* 0x140F1E2C: mov eax, dword ptr [ebp - 0x70] */
    /* cmp eax, MEM32(ebp + (-0xD0)) */ /* 0x140F1E2F: cmp eax, dword ptr [ebp - 0xd0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xD0)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F1DC7; /* 0x140F1E35: jbe 0x140f1dc7 */
L_140F1E37:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F1E37: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x140F1E39: pop edi */
    esi = POP32_VAL(esp); /* 0x140F1E3A: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F1E3B: pop ebx */
    esp = ebp; /* 0x140F1E3C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F1E3E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F1E3F: ret 0xc */
L_140F1E42:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F1E42: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F1E44:
    /* cmp esi, edx */ /* 0x140F1E44: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140F2089; /* 0x140F1E46: jae 0x140f2089 */
L_140F1E4C:
    _flag_a = (uint32_t)((eax | 8)); _flag_b = (uint32_t)((eax | 8));
    eax = eax | 8; /* 0x140F1E4C: or eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140F2089; /* 0x140F1E4F: jmp 0x140f2089 */
L_140F1E54:
    /* cmp eax, 6 */ /* 0x140F1E54: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1E57: jne 0x140f1e37 */
L_140F1E59:
    esi = MEM32(ebp + (-0xFC)); /* 0x140F1E59: mov esi, dword ptr [ebp - 0xfc] */
    edx = MEM32(ebp + (-0x9C)); /* 0x140F1E5F: mov edx, dword ptr [ebp - 0x9c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140F1E65: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_140F2480); /* 0x140F1E67: call 0x140f2480 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F1E6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1E6E: jne 0x140f1e37 */
L_140F1E70:
    ecx = MEM32(ebp + (-0x94)); /* 0x140F1E70: mov ecx, dword ptr [ebp - 0x94] */
    edx = MEM32(ebp + (-0xF4)); /* 0x140F1E76: mov edx, dword ptr [ebp - 0xf4] */
    /* test ecx, ecx */ /* 0x140F1E7C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1E88; /* 0x140F1E7E: jne 0x140f1e88 */
L_140F1E80:
    /* test edx, edx */ /* 0x140F1E80: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2087; /* 0x140F1E82: je 0x140f2087 */
L_140F1E88:
    /* cmp MEM32(ebp + (-0xFC)), 0x14u */ /* 0x140F1E88: cmp dword ptr [ebp - 0xfc], 0x14 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xFC))); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F2087; /* 0x140F1E8F: je 0x140f2087 */
L_140F1E95:
    RECOMP_CALL(sub_140F2100); /* 0x140F1E95: call 0x140f2100 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F1E9A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F2087; /* 0x140F1E9C: jne 0x140f2087 */
L_140F1EA2:
    edi = POP32_VAL(esp); /* 0x140F1EA2: pop edi */
    esi = POP32_VAL(esp); /* 0x140F1EA3: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F1EA4: pop ebx */
    esp = ebp; /* 0x140F1EA5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F1EA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F1EA8: ret 0xc */
L_140F1EAB:
    edi = MEM32(ebp + (-0x14)); /* 0x140F1EAB: mov edi, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + 0x8); /* 0x140F1EAE: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x140F1EB1: push edi */
    eax = esi; /* 0x140F1EB2: mov eax, esi */
    edx = ebx; /* 0x140F1EB4: mov edx, ebx */
    RECOMP_CALL(sub_140F19B0); /* 0x140F1EB6: call 0x140f19b0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x28)), 0 */ /* 0x140F1EBB: cmp dword ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = eax; /* 0x140F1EBF: mov ecx, eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x140F1EC1: mov dword ptr [ebp - 0x10], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F1F43; /* 0x140F1EC4: je 0x140f1f43 */
L_140F1EC6:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x140F1EC6: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1EC9: ja 0x140f1e37 */
L_140F1ECF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x140F1ECF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x140F1ED1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2087; /* 0x140F1ED3: je 0x140f2087 */
L_140F1ED9:
    esp = esp; /* 0x140F1ED9: lea esp, [esp] */
L_140F1EE0:
    eax = MEM32(edi); /* 0x140F1EE0: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x40); /* 0x140F1EE2: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x140F1EE5: push ecx */
    PUSH32(esp, esi); /* 0x140F1EE6: push esi */
    ecx = edi; /* 0x140F1EE7: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140F1EE9: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F1EEC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1EEE: jne 0x140f1e37 */
L_140F1EF4:
    eax = MEM32(ebx); /* 0x140F1EF4: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x34); /* 0x140F1EF6: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x140F1EF9: push ecx */
    PUSH32(esp, esi); /* 0x140F1EFA: push esi */
    ecx = ebx; /* 0x140F1EFB: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140F1EFD: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F1F00: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1F02: jne 0x140f1e37 */
L_140F1F08:
    eax = ebp + 0x8; /* 0x140F1F08: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x140F1F0B: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140F1F0C: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0x34)); /* 0x140F1F0F: mov eax, dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_14086DF0); /* 0x140F1F12: call 0x14086df0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x140F1F17: push eax */
    eax = MEM32(ebp + (-0x40)); /* 0x140F1F18: mov eax, dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_14086DF0); /* 0x140F1F1B: call 0x14086df0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140F1F20: mov ecx, eax */
    RECOMP_CALL(sub_140F1B70); /* 0x140F1F22: call 0x140f1b70 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F1F27: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1F29: je 0x140f1e37 */
L_140F1F2F:
    eax = MEM32(ebp + (-0x24)); /* 0x140F1F2F: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x8))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x8)));
    eax = eax | MEM32(ebp + 0x8); /* 0x140F1F32: or eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x140F1F35: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x24)) = eax; /* 0x140F1F36: mov dword ptr [ebp - 0x24], eax */
    /* cmp esi, MEM32(ebp + (-0x10)) */ /* 0x140F1F39: cmp esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140F1EE0; /* 0x140F1F3C: jb 0x140f1ee0 */
L_140F1F3E:
    goto L_140F2089; /* 0x140F1F3E: jmp 0x140f2089 */
L_140F1F43:
    eax = MEM32(ebp + (-0xA4)); /* 0x140F1F43: mov eax, dword ptr [ebp - 0xa4] */
    /* cmp eax, MEM32(ebp + (-0x104)) */ /* 0x140F1F49: cmp eax, dword ptr [ebp - 0x104] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x104)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1F4F: jne 0x140f1e37 */
L_140F1F55:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x140F1F55: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1F58: jne 0x140f1e37 */
L_140F1F5E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x140F1F5E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x140F1F60: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2087; /* 0x140F1F62: je 0x140f2087 */
L_140F1F68:
    eax = MEM32(edi); /* 0x140F1F68: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x40); /* 0x140F1F6A: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x140F1F6D: push ecx */
    PUSH32(esp, ebx); /* 0x140F1F6E: push ebx */
    ecx = edi; /* 0x140F1F6F: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140F1F71: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F1F74: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1F76: jne 0x140f1e37 */
L_140F1F7C:
    ecx = MEM32(ebp + 0x8); /* 0x140F1F7C: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x140F1F7F: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x34); /* 0x140F1F81: lea edx, [ebp - 0x34] */
    PUSH32(esp, edx); /* 0x140F1F84: push edx */
    PUSH32(esp, ebx); /* 0x140F1F85: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140F1F86: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F1F89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1F8B: jne 0x140f1e37 */
L_140F1F91:
    eax = MEM32(ebp + (-0x34)); /* 0x140F1F91: mov eax, dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_14086DF0); /* 0x140F1F94: call 0x14086df0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x140F1F99: mov esi, eax */
    eax = MEM32(ebp + (-0x40)); /* 0x140F1F9B: mov eax, dword ptr [ebp - 0x40] */
    edi = MEM32(esi); /* 0x140F1F9E: mov edi, dword ptr [esi] */
    RECOMP_CALL(sub_14086DF0); /* 0x140F1FA0: call 0x14086df0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x140F1FA5: push eax */
    ecx = esi; /* 0x140F1FA6: mov ecx, esi */
    RECOMP_ICALL(MEM32(edi + 0x34)); /* 0x140F1FA8: call dword ptr [edi + 0x34] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F1FAB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1FAD: je 0x140f1e37 */
L_140F1FB3:
    edi = MEM32(ebp + (-0x14)); /* 0x140F1FB3: mov edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x140F1FB6: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x10)) */ /* 0x140F1FB7: cmp ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140F1F68; /* 0x140F1FBA: jb 0x140f1f68 */
L_140F1FBC:
    goto L_140F2087; /* 0x140F1FBC: jmp 0x140f2087 */
L_140F1FC1:
    eax = MEM32(ebp + (-0x20)); /* 0x140F1FC1: mov eax, dword ptr [ebp - 0x20] */
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x140F1FC4: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F1FC7: jne 0x140f1e37 */
L_140F1FCD:
    /* cmp esi, 5 */ /* 0x140F1FCD: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F203D; /* 0x140F1FD0: jne 0x140f203d */
L_140F1FD2:
    eax = MEM32(ebp + (-0xF4)); /* 0x140F1FD2: mov eax, dword ptr [ebp - 0xf4] */
    RECOMP_CALL(sub_14086DF0); /* 0x140F1FD8: call 0x14086df0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x140F1FDD: mov esi, eax */
    eax = MEM32(ebp + (-0x94)); /* 0x140F1FDF: mov eax, dword ptr [ebp - 0x94] */
    RECOMP_CALL(sub_14086DF0); /* 0x140F1FE5: call 0x14086df0 */
    RECOMP_FLAGS_IN();
    edx = esi; /* 0x140F1FEA: mov edx, esi */
    ecx = eax; /* 0x140F1FEC: mov ecx, eax */
    RECOMP_CALL(sub_140F2100); /* 0x140F1FEE: call 0x140f2100 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F1FF3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F2087; /* 0x140F1FF5: jne 0x140f2087 */
L_140F1FFB:
    edi = MEM32(ebp + (-0xF4)); /* 0x140F1FFB: mov edi, dword ptr [ebp - 0xf4] */
    edx = 3; /* 0x140F2001: mov edx, 3 */
    ecx = edi; /* 0x140F2006: mov ecx, edi */
    RECOMP_CALL(sub_140864D0); /* 0x140F2008: call 0x140864d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F200D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F200F: je 0x140f1e37 */
L_140F2015:
    eax = MEM32(ebp + (-0x94)); /* 0x140F2015: mov eax, dword ptr [ebp - 0x94] */
    RECOMP_CALL(sub_14086DF0); /* 0x140F201B: call 0x14086df0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x140F2020: mov esi, eax */
    eax = edi; /* 0x140F2022: mov eax, edi */
    RECOMP_CALL(sub_14086DF0); /* 0x140F2024: call 0x14086df0 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x140F2029: mov ecx, esi */
    RECOMP_CALL(sub_140F36D0); /* 0x140F202B: call 0x140f36d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F2030: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F2087; /* 0x140F2032: jne 0x140f2087 */
L_140F2034:
    edi = POP32_VAL(esp); /* 0x140F2034: pop edi */
    esi = POP32_VAL(esp); /* 0x140F2035: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F2036: pop ebx */
    esp = ebp; /* 0x140F2037: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F2039: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F203A: ret 0xc */
L_140F203D:
    /* cmp esi, 3 */ /* 0x140F203D: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F2040: jne 0x140f1e37 */
L_140F2046:
    eax = MEM32(ebp + (-0x14)); /* 0x140F2046: mov eax, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_14086DF0); /* 0x140F2049: call 0x14086df0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x140F204E: mov esi, eax */
    eax = MEM32(ebp + (-0x94)); /* 0x140F2050: mov eax, dword ptr [ebp - 0x94] */
    edi = MEM32(esi); /* 0x140F2056: mov edi, dword ptr [esi] */
    RECOMP_CALL(sub_14086DF0); /* 0x140F2058: call 0x14086df0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x140F205D: push eax */
    ecx = esi; /* 0x140F205E: mov ecx, esi */
    RECOMP_ICALL(MEM32(edi + 0x34)); /* 0x140F2060: call dword ptr [edi + 0x34] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F2063: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F2087; /* 0x140F2065: jne 0x140f2087 */
L_140F2067:
    eax = MEM32(ebp + (-0x94)); /* 0x140F2067: mov eax, dword ptr [ebp - 0x94] */
    RECOMP_CALL(sub_14086DF0); /* 0x140F206D: call 0x14086df0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140F2072: mov ecx, eax */
    eax = MEM32(ebp + (-0xF8)); /* 0x140F2074: mov eax, dword ptr [ebp - 0xf8] */
    RECOMP_CALL(sub_140F36D0); /* 0x140F207A: call 0x140f36d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F207F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1E37; /* 0x140F2081: je 0x140f1e37 */
L_140F2087:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2087: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F2089:
    ecx = MEM32(ebp + 0x10); /* 0x140F2089: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x140F208C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2092; /* 0x140F208E: je 0x140f2092 */
L_140F2090:
    MEM32(ecx) = eax; /* 0x140F2090: mov dword ptr [ecx], eax */
L_140F2092:
    edi = POP32_VAL(esp); /* 0x140F2092: pop edi */
    esi = POP32_VAL(esp); /* 0x140F2093: pop esi */
    SET_LO8(eax, 1); /* 0x140F2094: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x140F2096: pop ebx */
    esp = ebp; /* 0x140F2097: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F2099: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F209A: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x140F1D59u: goto L_140F1D59;
      case 0x140F1D7Bu: goto L_140F1D7B;
      case 0x140F1D8Au: goto L_140F1D8A;
      case 0x140F1DC7u: goto L_140F1DC7;
      case 0x140F1DF4u: goto L_140F1DF4;
      case 0x140F1E03u: goto L_140F1E03;
      case 0x140F1E21u: goto L_140F1E21;
      case 0x140F1E2Cu: goto L_140F1E2C;
      case 0x140F1E37u: goto L_140F1E37;
      case 0x140F1E54u: goto L_140F1E54;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F2100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2100u);

L_140F2100:
    /* cmp ecx, edx */ /* 0x140F2100: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F2107; /* 0x140F2102: jne 0x140f2107 */
L_140F2104:
    SET_LO8(eax, 1); /* 0x140F2104: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2106: ret  */
L_140F2107:
    /* test ecx, ecx */ /* 0x140F2107: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2116; /* 0x140F2109: je 0x140f2116 */
L_140F210B:
    /* test edx, edx */ /* 0x140F210B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2116; /* 0x140F210D: je 0x140f2116 */
L_140F210F:
    eax = MEM32(ecx); /* 0x140F210F: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x140F2111: push edx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x140F2112: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2115: ret  */
L_140F2116:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F2116: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2118: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F2120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2120u);

L_140F2120:
    edi = edi; /* 0x140F2120: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F2122: push ebp */
    ebp = esp; /* 0x140F2123: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x140F2125: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x140F2128: push ebx */
    PUSH32(esp, esi); /* 0x140F2129: push esi */
    esi = MEM32(ebp + 0x1C); /* 0x140F212A: mov esi, dword ptr [ebp + 0x1c] */
    PUSH32(esp, edi); /* 0x140F212D: push edi */
    edi = eax; /* 0x140F212E: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2130: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ecx; /* 0x140F2132: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x140F2134: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140F2136: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x140F2138: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x140F213B: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x18)) = ecx; /* 0x140F213E: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x1C)) = edx; /* 0x140F2141: mov dword ptr [ebp - 0x1c], edx */
    MEM32(ebp + (-0x14)) = eax; /* 0x140F2144: mov dword ptr [ebp - 0x14], eax */
    MEM32(esi) = eax; /* 0x140F2147: mov dword ptr [esi], eax */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x140F2149: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F224F; /* 0x140F214C: jbe 0x140f224f */
L_140F2152:
    esi = MEM32(ebp + (-0x10)); /* 0x140F2152: mov esi, dword ptr [ebp - 0x10] */
L_140F2155:
    /* test edx, edx */ /* 0x140F2155: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F21B1; /* 0x140F2157: je 0x140f21b1 */
L_140F2159:
    /* cmp edi, ecx */ /* 0x140F2159: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_140F21B1; /* 0x140F215B: jb 0x140f21b1 */
L_140F215D:
    eax = MEM32(ebp + 0x14); /* 0x140F215D: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x140F2160: sub esi, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = esi; /* 0x140F2162: mov dword ptr [ebp - 4], esi */
    /* cmp esi, eax */ /* 0x140F2165: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F216E; /* 0x140F2167: jbe 0x140f216e */
L_140F2169:
    esi = eax; /* 0x140F2169: mov esi, eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x140F216B: mov dword ptr [ebp - 4], esi */
L_140F216E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x140F216E: sub edi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x140F2170: add edi, edi */
    _flag_k = FK_ADD;
    eax = esi * 4; /* 0x140F2172: lea eax, [esi*4] */
    PUSH32(esp, eax); /* 0x140F2179: push eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x140F217A: add edi, edi */
    _flag_k = FK_ADD;
    eax = edi + edx; /* 0x140F217C: lea eax, [edi + edx] */
    PUSH32(esp, eax); /* 0x140F217F: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x140F2180: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_141EC9A4); /* 0x140F2183: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x140F2188: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140F218B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x140F218E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F21A9; /* 0x140F2190: je 0x140f21a9 */
L_140F2192:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x140F2192: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x140F2194: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x140F2196: push eax */
    eax = MEM32(ebp + (-0x14)); /* 0x140F2197: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x140F219A: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x140F219C: push eax */
    PUSH32(esp, ebx); /* 0x140F219D: push ebx */
    RECOMP_CALL(sub_141EC9A4); /* 0x140F219E: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x140F21A3: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140F21A6: add esp, 0xc */
    _flag_k = FK_ADD;
L_140F21A9:
    esi = MEM32(ebp + (-0x10)); /* 0x140F21A9: mov esi, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x8)); /* 0x140F21AC: mov edx, dword ptr [ebp - 8] */
    goto L_140F221B; /* 0x140F21AF: jmp 0x140f221b */
L_140F21B1:
    ecx = MEM32(ebp + 0x8); /* 0x140F21B1: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x140F21B4: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x140F21B6: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x140F21B9: push edx */
    edx = ebp + (-0x10); /* 0x140F21BA: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x140F21BD: push edx */
    PUSH32(esp, edi); /* 0x140F21BE: push edi */
    PUSH32(esp, ebx); /* 0x140F21BF: push ebx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x140F21C0: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x140F21C3: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x140F21C6: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x140F21C9: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F21CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F225B; /* 0x140F21CE: js 0x140f225b */
L_140F21D4:
    esi = MEM32(ebp + (-0x10)); /* 0x140F21D4: mov esi, dword ptr [ebp - 0x10] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x140F21D7: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F2264; /* 0x140F21DA: je 0x140f2264 */
L_140F21E0:
    edx = MEM32(ebp + (-0x8)); /* 0x140F21E0: mov edx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x140F21E3: mov eax, dword ptr [ebp - 4] */
    /* test edx, edx */ /* 0x140F21E6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F220F; /* 0x140F21E8: jne 0x140f220f */
L_140F21EA:
    edx = MEM32(ebp + 0x1C); /* 0x140F21EA: mov edx, dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x140F21ED: mov ecx, esi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x140F21EF: imul ecx, dword ptr [ebp + 0xc] */
    MEM32(edx) = ecx; /* 0x140F21F3: mov dword ptr [edx], ecx */
    edx = MEM32(ebp + (-0x8)); /* 0x140F21F5: mov edx, dword ptr [ebp - 8] */
    /* cmp edi, ecx */ /* 0x140F21F8: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140F224C; /* 0x140F21FA: jae 0x140f224c */
L_140F21FC:
    /* test eax, eax */ /* 0x140F21FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F220F; /* 0x140F21FE: jne 0x140f220f */
L_140F2200:
    eax = edi; /* 0x140F2200: mov eax, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140F2202: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x140F2204: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edi = edx; /* 0x140F2206: mov edi, edx */
    edx = eax; /* 0x140F2208: mov edx, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x140F220A: mov dword ptr [ebp - 8], eax */
    goto L_140F223D; /* 0x140F220D: jmp 0x140f223d */
L_140F220F:
    ecx = MEM32(ebp + 0x18); /* 0x140F220F: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x140F2212: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x140F2215: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x18)) = edi; /* 0x140F2218: mov dword ptr [ebp - 0x18], edi */
L_140F221B:
    ecx = MEM32(ebp + 0x14); /* 0x140F221B: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + eax; /* 0x140F221E: add dword ptr [ebp - 0xc], eax */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x140F2221: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140F224C; /* 0x140F2223: jae 0x140f224c */
L_140F2225:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x140F2225: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x140F2227: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x140F2229: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + eax; /* 0x140F222B: add dword ptr [ebp + 0x18], eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = ecx; /* 0x140F222E: mov dword ptr [ebp + 0x14], ecx */
    /* test ebx, ebx */ /* 0x140F2231: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2237; /* 0x140F2233: je 0x140f2237 */
L_140F2235:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x140F2235: add ebx, eax */
    _flag_k = FK_ADD;
L_140F2237:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140F2237: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x140F2239: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edx; /* 0x140F223A: mov dword ptr [ebp - 8], edx */
L_140F223D:
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x140F223D: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x18)); /* 0x140F2240: mov ecx, dword ptr [ebp - 0x18] */
    edx = MEM32(ebp + (-0x1C)); /* 0x140F2243: mov edx, dword ptr [ebp - 0x1c] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140F2155; /* 0x140F2246: jb 0x140f2155 */
L_140F224C:
    eax = MEM32(ebp + (-0xC)); /* 0x140F224C: mov eax, dword ptr [ebp - 0xc] */
L_140F224F:
    ecx = MEM32(ebp + 0x20); /* 0x140F224F: mov ecx, dword ptr [ebp + 0x20] */
    MEM32(ecx) = eax; /* 0x140F2252: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x140F2254: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x140F2256: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x140F2258: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140F225A: inc eax */
    _flag_k = FK_INC;
L_140F225B:
    edi = POP32_VAL(esp); /* 0x140F225B: pop edi */
    esi = POP32_VAL(esp); /* 0x140F225C: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F225D: pop ebx */
    esp = ebp; /* 0x140F225E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F2260: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x140F2261: ret 0x1c */
L_140F2264:
    eax = MEM32(ebp + 0x1C); /* 0x140F2264: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = 0xFFFFFFFFu; /* 0x140F2267: mov dword ptr [eax], 0xffffffff */
    eax = MEM32(ebp + (-0xC)); /* 0x140F226D: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x140F2270: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_140F224F; /* 0x140F2273: jmp 0x140f224f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_140F2280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2280u);

L_140F2280:
    edi = edi; /* 0x140F2280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F2282: push ebp */
    ebp = esp; /* 0x140F2283: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140F2285: push ecx */
    /* cmp eax, 0xFu */ /* 0x140F2286: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_140F242C; /* 0x140F2289: jge 0x140f242c */
L_140F228F:
    /* cmp edx, 0xFu */ /* 0x140F228F: cmp edx, 0xf */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_140F242C; /* 0x140F2292: jge 0x140f242c */
L_140F2298:
    /* cmp eax, edx */ /* 0x140F2298: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F22A4; /* 0x140F229A: jne 0x140f22a4 */
L_140F229C:
    MEM32(ecx) = eax; /* 0x140F229C: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F229E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F22A0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F22A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F22A3: ret  */
L_140F22A4:
    eax = MEM32(eax * 4 + 0x140278B8); /* 0x140F22A4: mov eax, dword ptr [eax*4 + 0x140278b8] */
    PUSH32(esp, ebx); /* 0x140F22AB: push ebx */
    ebx = MEM32(edx * 4 + 0x140278B8); /* 0x140F22AC: mov ebx, dword ptr [edx*4 + 0x140278b8] */
    PUSH32(esp, esi); /* 0x140F22B3: push esi */
    PUSH32(esp, edi); /* 0x140F22B4: push edi */
    edi = eax; /* 0x140F22B5: mov edi, eax */
    esi = ebx; /* 0x140F22B7: mov esi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    edi = edi & 0xFu; /* 0x140F22B9: and edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    esi = esi & 0xFu; /* 0x140F22BC: and esi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x140F22BF: mov dword ptr [ebp - 4], eax */
    eax = edi; /* 0x140F22C2: mov eax, edi */
    /* cmp edi, esi */ /* 0x140F22C4: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F22CA; /* 0x140F22C6: ja 0x140f22ca */
L_140F22C8:
    eax = esi; /* 0x140F22C8: mov eax, esi */
L_140F22CA:
    edx = ebx; /* 0x140F22CA: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    edx = edx & MEM32(ebp + (-0x4)); /* 0x140F22CC: and edx, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | MEM32(ebp + (-0x4)))); _flag_b = (uint32_t)((ebx | MEM32(ebp + (-0x4))));
    ebx = ebx | MEM32(ebp + (-0x4)); /* 0x140F22CF: or ebx, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(edx), 0x10u */ /* 0x140F22D2: test dl, 0x10 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F22E6; /* 0x140F22D5: je 0x140f22e6 */
L_140F22D7:
    MEM32(ecx) = 0; /* 0x140F22D7: mov dword ptr [ecx], 0 */
L_140F22DD:
    edi = POP32_VAL(esp); /* 0x140F22DD: pop edi */
    esi = POP32_VAL(esp); /* 0x140F22DE: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F22DF: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F22E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F22E2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F22E4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F22E5: ret  */
L_140F22E6:
    /* test edx, 0x100u */ /* 0x140F22E6: test edx, 0x100 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2307; /* 0x140F22EC: je 0x140f2307 */
L_140F22EE:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    SET_LO8(edx, LO8(edx) & 0x20u); /* 0x140F22EE: and dl, 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(edx); /* 0x140F22F1: movzx eax, dl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x140F22F4: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x140F22F6: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    eax = eax & 5; /* 0x140F22F8: and eax, 5 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140F22FB: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140F22FC: inc eax */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x140F22FD: pop esi */
    MEM32(ecx) = eax; /* 0x140F22FE: mov dword ptr [ecx], eax */
    ebx = POP32_VAL(esp); /* 0x140F2300: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2301: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F2303: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F2305: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2306: ret  */
L_140F2307:
    /* test LO8(edx), 0x40u */ /* 0x140F2307: test dl, 0x40 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2328; /* 0x140F230A: je 0x140f2328 */
L_140F230C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140F230C: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 3 */ /* 0x140F230D: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_140F22DD; /* 0x140F2310: ja 0x140f22dd */
L_140F2312:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F2438)); goto _ljump; }
L_140F2319:
    edi = POP32_VAL(esp); /* 0x140F2319: pop edi */
    esi = POP32_VAL(esp); /* 0x140F231A: pop esi */
    MEM32(ecx) = 0xAu; /* 0x140F231B: mov dword ptr [ecx], 0xa */
    ebx = POP32_VAL(esp); /* 0x140F2321: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2322: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F2324: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F2326: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2327: ret  */
L_140F2328:
    /* test LO8(edx), 0x20u */ /* 0x140F2328: test dl, 0x20 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F23CB; /* 0x140F232B: je 0x140f23cb */
L_140F2331:
    /* test LO8(ebx), 0x40u */ /* 0x140F2331: test bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2370; /* 0x140F2334: je 0x140f2370 */
L_140F2336:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140F2336: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 3 */ /* 0x140F2337: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_140F22DD; /* 0x140F233A: ja 0x140f22dd */
L_140F233C:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F2448)); goto _ljump; }
L_140F2343:
    edi = POP32_VAL(esp); /* 0x140F2343: pop edi */
    esi = POP32_VAL(esp); /* 0x140F2344: pop esi */
    MEM32(ecx) = 8; /* 0x140F2345: mov dword ptr [ecx], 8 */
    ebx = POP32_VAL(esp); /* 0x140F234B: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F234C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F234E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F2350: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2351: ret  */
L_140F2352:
    edi = POP32_VAL(esp); /* 0x140F2352: pop edi */
    esi = POP32_VAL(esp); /* 0x140F2353: pop esi */
    MEM32(ecx) = 0xCu; /* 0x140F2354: mov dword ptr [ecx], 0xc */
    ebx = POP32_VAL(esp); /* 0x140F235A: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F235B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F235D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F235F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2360: ret  */
L_140F2361:
    edi = POP32_VAL(esp); /* 0x140F2361: pop edi */
    esi = POP32_VAL(esp); /* 0x140F2362: pop esi */
    MEM32(ecx) = 0xEu; /* 0x140F2363: mov dword ptr [ecx], 0xe */
    ebx = POP32_VAL(esp); /* 0x140F2369: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F236A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F236C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F236E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F236F: ret  */
L_140F2370:
    /* cmp eax, 4 */ /* 0x140F2370: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_140F22DD; /* 0x140F2373: ja 0x140f22dd */
L_140F2379:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F2458)); goto _ljump; }
L_140F2380:
    edi = POP32_VAL(esp); /* 0x140F2380: pop edi */
    esi = POP32_VAL(esp); /* 0x140F2381: pop esi */
    MEM32(ecx) = 6; /* 0x140F2382: mov dword ptr [ecx], 6 */
    ebx = POP32_VAL(esp); /* 0x140F2388: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2389: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F238B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F238D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F238E: ret  */
L_140F238F:
    edi = POP32_VAL(esp); /* 0x140F238F: pop edi */
    esi = POP32_VAL(esp); /* 0x140F2390: pop esi */
    MEM32(ecx) = 7; /* 0x140F2391: mov dword ptr [ecx], 7 */
    ebx = POP32_VAL(esp); /* 0x140F2397: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2398: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F239A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F239C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F239D: ret  */
L_140F239E:
    edi = POP32_VAL(esp); /* 0x140F239E: pop edi */
    esi = POP32_VAL(esp); /* 0x140F239F: pop esi */
    MEM32(ecx) = 9; /* 0x140F23A0: mov dword ptr [ecx], 9 */
    ebx = POP32_VAL(esp); /* 0x140F23A6: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F23A7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F23A9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F23AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F23AC: ret  */
L_140F23AD:
    edi = POP32_VAL(esp); /* 0x140F23AD: pop edi */
    esi = POP32_VAL(esp); /* 0x140F23AE: pop esi */
    MEM32(ecx) = 0xBu; /* 0x140F23AF: mov dword ptr [ecx], 0xb */
    ebx = POP32_VAL(esp); /* 0x140F23B5: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F23B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F23B8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F23BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F23BB: ret  */
L_140F23BC:
    edi = POP32_VAL(esp); /* 0x140F23BC: pop edi */
    esi = POP32_VAL(esp); /* 0x140F23BD: pop esi */
    MEM32(ecx) = 0xDu; /* 0x140F23BE: mov dword ptr [ecx], 0xd */
    ebx = POP32_VAL(esp); /* 0x140F23C4: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F23C5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F23C7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F23C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F23CA: ret  */
L_140F23CB:
    /* test edx, 0x200u */ /* 0x140F23CB: test edx, 0x200 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F23E9; /* 0x140F23D1: jne 0x140f23e9 */
L_140F23D3:
    /* test MEM32(ebp + (-0x4)), 0x200u */ /* 0x140F23D3: test dword ptr [ebp - 4], 0x200 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x140F23DA: mov eax, edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F23E0; /* 0x140F23DC: jne 0x140f23e0 */
L_140F23DE:
    eax = esi; /* 0x140F23DE: mov eax, esi */
L_140F23E0:
    /* test eax, eax */ /* 0x140F23E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F23E9; /* 0x140F23E2: jne 0x140f23e9 */
L_140F23E4:
    eax = 3; /* 0x140F23E4: mov eax, 3 */
L_140F23E9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x140F23E9: sub eax, 2 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_140F241D; /* 0x140F23EC: je 0x140f241d */
L_140F23EE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140F23EE: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_140F2405; /* 0x140F23EF: je 0x140f2405 */
L_140F23F1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140F23F1: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140F22DD; /* 0x140F23F2: jne 0x140f22dd */
L_140F23F8:
    edi = POP32_VAL(esp); /* 0x140F23F8: pop edi */
    esi = POP32_VAL(esp); /* 0x140F23F9: pop esi */
    MEM32(ecx) = 5; /* 0x140F23FA: mov dword ptr [ecx], 5 */
    ebx = POP32_VAL(esp); /* 0x140F2400: pop ebx */
    esp = ebp; /* 0x140F2401: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F2403: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2404: ret  */
L_140F2405:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1000u);
    edx = edx & 0x1000u; /* 0x140F2405: and edx, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x140F240B: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x140F240D: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = POP32_VAL(esp); /* 0x140F240F: pop edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x140F2410: add edx, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x140F2413: pop esi */
    MEM32(ecx) = edx; /* 0x140F2414: mov dword ptr [ecx], edx */
    ebx = POP32_VAL(esp); /* 0x140F2416: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2417: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F2419: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F241B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F241C: ret  */
L_140F241D:
    edi = POP32_VAL(esp); /* 0x140F241D: pop edi */
    esi = POP32_VAL(esp); /* 0x140F241E: pop esi */
    MEM32(ecx) = 2; /* 0x140F241F: mov dword ptr [ecx], 2 */
    ebx = POP32_VAL(esp); /* 0x140F2425: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2426: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F2428: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F242A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F242B: ret  */
L_140F242C:
    eax = 0x8007054Fu; /* 0x140F242C: mov eax, 0x8007054f */
    esp = ebp; /* 0x140F2431: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F2433: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2434: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x140F2319u: goto L_140F2319;
      case 0x140F2343u: goto L_140F2343;
      case 0x140F2352u: goto L_140F2352;
      case 0x140F2361u: goto L_140F2361;
      case 0x140F2380u: goto L_140F2380;
      case 0x140F238Fu: goto L_140F238F;
      case 0x140F239Eu: goto L_140F239E;
      case 0x140F23ADu: goto L_140F23AD;
      case 0x140F23BCu: goto L_140F23BC;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F2480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2480u);

L_140F2480:
    ecx = 0x11u; /* 0x140F2480: mov ecx, 0x11 */
    /* cmp edx, esi */ /* 0x140F2485: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F24B3; /* 0x140F2487: je 0x140f24b3 */
L_140F2489:
    /* cmp esi, 0x14u */ /* 0x140F2489: cmp esi, 0x14 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F24B3; /* 0x140F248C: je 0x140f24b3 */
L_140F248E:
    eax = edx + (-0x16); /* 0x140F248E: lea eax, [edx - 0x16] */
    /* cmp eax, 0x1Eu */ /* 0x140F2491: cmp eax, 0x1e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F24B5; /* 0x140F2494: ja 0x140f24b5 */
L_140F2496:
    eax = (uint32_t)MEM8(eax + 0x140F24DC); /* 0x140F2496: movzx eax, byte ptr [eax + 0x140f24dc] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F24CC)); goto _ljump; }
L_140F24A4:
    /* cmp esi, 0x16u */ /* 0x140F24A4: cmp esi, 0x16 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_140F24B1; /* 0x140F24A7: jmp 0x140f24b1 */
L_140F24A9:
    /* cmp esi, 0x20u */ /* 0x140F24A9: cmp esi, 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F24B3; /* 0x140F24AC: je 0x140f24b3 */
L_140F24AE:
    /* cmp esi, 0x31u */ /* 0x140F24AE: cmp esi, 0x31 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x31u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_140F24B1:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_140F24B5; /* 0x140F24B1: jne 0x140f24b5 */
L_140F24B3:
    ecx = edx; /* 0x140F24B3: mov ecx, edx */
L_140F24B5:
    /* test edi, edi */ /* 0x140F24B5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F24BB; /* 0x140F24B7: je 0x140f24bb */
L_140F24B9:
    MEM32(edi) = ecx; /* 0x140F24B9: mov dword ptr [edi], ecx */
L_140F24BB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F24BB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x11u */ /* 0x140F24BD: cmp ecx, 0x11 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F24C0: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140F24C3: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80004005u);
    eax = eax & 0x80004005u; /* 0x140F24C4: and eax, 0x80004005 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F24C9: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x140F24A4u: goto L_140F24A4;
      case 0x140F24A9u: goto L_140F24A9;
      case 0x140F24AEu: goto L_140F24AE;
      case 0x140F24B5u: goto L_140F24B5;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F2500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2500u);

L_140F2500:
    /* cmp edx, 0x47u */ /* 0x140F2500: cmp edx, 0x47 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x47u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F268A; /* 0x140F2503: ja 0x140f268a */
L_140F2509:
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x140F2690)); goto _ljump; }
L_140F2510:
    eax = 1; /* 0x140F2510: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2515: ret  */
L_140F2516:
    eax = 2; /* 0x140F2516: mov eax, 2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F251B: ret  */
L_140F251C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    SET_LO8(eax, LO8(eax) & 2); /* 0x140F251C: and al, 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x140F251E: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x140F2521: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x140F2523: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    eax = eax & 0x11u; /* 0x140F2525: and eax, 0x11 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140F2528: add eax, 2 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F252B: ret  */
L_140F252C:
    eax = 0x27u; /* 0x140F252C: mov eax, 0x27 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2531: ret  */
L_140F2532:
    /* test LO8(eax), 4 */ /* 0x140F2532: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F268A; /* 0x140F2534: jne 0x140f268a */
L_140F253A:
    eax = 3; /* 0x140F253A: mov eax, 3 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F253F: ret  */
L_140F2540:
    eax = 0x25u; /* 0x140F2540: mov eax, 0x25 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2545: ret  */
L_140F2546:
    eax = 4; /* 0x140F2546: mov eax, 4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F254B: ret  */
L_140F254C:
    eax = 5; /* 0x140F254C: mov eax, 5 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2551: ret  */
L_140F2552:
    eax = 6; /* 0x140F2552: mov eax, 6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2557: ret  */
L_140F2558:
    eax = 0x1Cu; /* 0x140F2558: mov eax, 0x1c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F255D: ret  */
L_140F255E:
    eax = 7; /* 0x140F255E: mov eax, 7 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2563: ret  */
L_140F2564:
    eax = 0x1Du; /* 0x140F2564: mov eax, 0x1d */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2569: ret  */
L_140F256A:
    eax = 0x20u; /* 0x140F256A: mov eax, 0x20 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F256F: ret  */
L_140F2570:
    eax = 0x21u; /* 0x140F2570: mov eax, 0x21 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2575: ret  */
L_140F2576:
    eax = 8; /* 0x140F2576: mov eax, 8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F257B: ret  */
L_140F257C:
    eax = 9; /* 0x140F257C: mov eax, 9 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2581: ret  */
L_140F2582:
    eax = 0x22u; /* 0x140F2582: mov eax, 0x22 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2587: ret  */
L_140F2588:
    /* test LO8(eax), 1 */ /* 0x140F2588: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2592; /* 0x140F258A: je 0x140f2592 */
L_140F258C:
    eax = 0xAu; /* 0x140F258C: mov eax, 0xa */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2591: ret  */
L_140F2592:
    /* cmp ecx, 0x19u */ /* 0x140F2592: cmp ecx, 0x19 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F259B; /* 0x140F2595: jne 0x140f259b */
L_140F2597:
    eax = ecx + (-0xD); /* 0x140F2597: lea eax, [ecx - 0xd] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F259A: ret  */
L_140F259B:
    /* cmp ecx, 0x1Bu */ /* 0x140F259B: cmp ecx, 0x1b */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F25A6; /* 0x140F259E: jne 0x140f25a6 */
L_140F25A0:
    eax = 0xDu; /* 0x140F25A0: mov eax, 0xd */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F25A5: ret  */
L_140F25A6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F25A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x1Cu */ /* 0x140F25A8: cmp ecx, 0x1c */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F25AB: sete al */
    eax = eax + eax + 0xC; /* 0x140F25AE: lea eax, [eax + eax + 0xc] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F25B2: ret  */
L_140F25B3:
    SET_LO8(eax, ~LO8(eax)); /* 0x140F25B3: not al */
    eax = (uint32_t)LO8(eax); /* 0x140F25B5: movzx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x140F25B8: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xAu)); _flag_b = (uint32_t)((eax | 0xAu));
    eax = eax | 0xAu; /* 0x140F25BB: or eax, 0xa */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F25BE: ret  */
L_140F25BF:
    /* test LO8(eax), 1 */ /* 0x140F25BF: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0; /* 0x140F25C1: mov eax, 0 */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F25C6: sete al */
    eax = eax + eax + 0xA; /* 0x140F25C9: lea eax, [eax + eax + 0xa] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F25CD: ret  */
L_140F25CE:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x140F25CE: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x140F25D0: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x140F25D3: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x140F25D5: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x140F25D7: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xDu; /* 0x140F25DA: add eax, 0xd */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F25DD: ret  */
L_140F25DE:
    SET_LO8(eax, ~LO8(eax)); /* 0x140F25DE: not al */
    eax = (uint32_t)LO8(eax); /* 0x140F25E0: movzx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x140F25E3: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x140F25E6: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x140F25E8: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xAu)); _flag_b = (uint32_t)((eax | 0xAu));
    eax = eax | 0xAu; /* 0x140F25EA: or eax, 0xa */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F25ED: ret  */
L_140F25EE:
    eax = 0x19u; /* 0x140F25EE: mov eax, 0x19 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F25F3: ret  */
L_140F25F4:
    eax = 0x1Eu; /* 0x140F25F4: mov eax, 0x1e */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F25F9: ret  */
L_140F25FA:
    eax = 0x1Fu; /* 0x140F25FA: mov eax, 0x1f */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F25FF: ret  */
L_140F2600:
    eax = 0x26u; /* 0x140F2600: mov eax, 0x26 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2605: ret  */
L_140F2606:
    eax = 0x24u; /* 0x140F2606: mov eax, 0x24 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F260B: ret  */
L_140F260C:
    eax = 0x15u; /* 0x140F260C: mov eax, 0x15 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2611: ret  */
L_140F2612:
    eax = 0x23u; /* 0x140F2612: mov eax, 0x23 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2617: ret  */
L_140F2618:
    eax = 0xFu; /* 0x140F2618: mov eax, 0xf */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F261D: ret  */
L_140F261E:
    eax = 0x10u; /* 0x140F261E: mov eax, 0x10 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2623: ret  */
L_140F2624:
    eax = 0x11u; /* 0x140F2624: mov eax, 0x11 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2629: ret  */
L_140F262A:
    eax = 0x12u; /* 0x140F262A: mov eax, 0x12 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F262F: ret  */
L_140F2630:
    eax = 0x16u; /* 0x140F2630: mov eax, 0x16 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2635: ret  */
L_140F2636:
    eax = 0x17u; /* 0x140F2636: mov eax, 0x17 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F263B: ret  */
L_140F263C:
    eax = 0x18u; /* 0x140F263C: mov eax, 0x18 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2641: ret  */
L_140F2642:
    eax = 0x28u; /* 0x140F2642: mov eax, 0x28 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2647: ret  */
L_140F2648:
    eax = 0x29u; /* 0x140F2648: mov eax, 0x29 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F264D: ret  */
L_140F264E:
    eax = 0x2Au; /* 0x140F264E: mov eax, 0x2a */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2653: ret  */
L_140F2654:
    eax = 0x2Bu; /* 0x140F2654: mov eax, 0x2b */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2659: ret  */
L_140F265A:
    eax = 0x2Cu; /* 0x140F265A: mov eax, 0x2c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F265F: ret  */
L_140F2660:
    eax = 0x2Du; /* 0x140F2660: mov eax, 0x2d */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2665: ret  */
L_140F2666:
    eax = 0x2Eu; /* 0x140F2666: mov eax, 0x2e */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F266B: ret  */
L_140F266C:
    eax = 0x2Fu; /* 0x140F266C: mov eax, 0x2f */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2671: ret  */
L_140F2672:
    eax = 0x30u; /* 0x140F2672: mov eax, 0x30 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2677: ret  */
L_140F2678:
    eax = 0x31u; /* 0x140F2678: mov eax, 0x31 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F267D: ret  */
L_140F267E:
    eax = 0x32u; /* 0x140F267E: mov eax, 0x32 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2683: ret  */
L_140F2684:
    eax = 0x33u; /* 0x140F2684: mov eax, 0x33 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2689: ret  */
L_140F268A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F268A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F268C: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x140F2510u: goto L_140F2510;
      case 0x140F2516u: goto L_140F2516;
      case 0x140F251Cu: goto L_140F251C;
      case 0x140F252Cu: goto L_140F252C;
      case 0x140F2532u: goto L_140F2532;
      case 0x140F253Au: goto L_140F253A;
      case 0x140F2540u: goto L_140F2540;
      case 0x140F2546u: goto L_140F2546;
      case 0x140F254Cu: goto L_140F254C;
      case 0x140F2552u: goto L_140F2552;
      case 0x140F2558u: goto L_140F2558;
      case 0x140F255Eu: goto L_140F255E;
      case 0x140F2564u: goto L_140F2564;
      case 0x140F256Au: goto L_140F256A;
      case 0x140F2570u: goto L_140F2570;
      case 0x140F2576u: goto L_140F2576;
      case 0x140F257Cu: goto L_140F257C;
      case 0x140F2582u: goto L_140F2582;
      case 0x140F2588u: goto L_140F2588;
      case 0x140F258Cu: goto L_140F258C;
      case 0x140F25B3u: goto L_140F25B3;
      case 0x140F25BFu: goto L_140F25BF;
      case 0x140F25CEu: goto L_140F25CE;
      case 0x140F25DEu: goto L_140F25DE;
      case 0x140F25EEu: goto L_140F25EE;
      case 0x140F25F4u: goto L_140F25F4;
      case 0x140F25FAu: goto L_140F25FA;
      case 0x140F2600u: goto L_140F2600;
      case 0x140F2606u: goto L_140F2606;
      case 0x140F260Cu: goto L_140F260C;
      case 0x140F2612u: goto L_140F2612;
      case 0x140F2618u: goto L_140F2618;
      case 0x140F261Eu: goto L_140F261E;
      case 0x140F2624u: goto L_140F2624;
      case 0x140F262Au: goto L_140F262A;
      case 0x140F2630u: goto L_140F2630;
      case 0x140F2636u: goto L_140F2636;
      case 0x140F263Cu: goto L_140F263C;
      case 0x140F2642u: goto L_140F2642;
      case 0x140F2648u: goto L_140F2648;
      case 0x140F264Eu: goto L_140F264E;
      case 0x140F2654u: goto L_140F2654;
      case 0x140F265Au: goto L_140F265A;
      case 0x140F2660u: goto L_140F2660;
      case 0x140F2666u: goto L_140F2666;
      case 0x140F266Cu: goto L_140F266C;
      case 0x140F2672u: goto L_140F2672;
      case 0x140F2678u: goto L_140F2678;
      case 0x140F267Eu: goto L_140F267E;
      case 0x140F2684u: goto L_140F2684;
      case 0x140F268Au: goto L_140F268A;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F27C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F27C0u);

L_140F27C0:
    edi = edi; /* 0x140F27C0: mov edi, edi */
    PUSH32(esp, ebx); /* 0x140F27C2: push ebx */
    ebx = eax; /* 0x140F27C3: mov ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    ebx = ebx & 0x10u; /* 0x140F27C5: and ebx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x140F27C8: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F27D6; /* 0x140F27C9: je 0x140f27d6 */
L_140F27CB:
    eax = MEM32(ecx + 0x48); /* 0x140F27CB: mov eax, dword ptr [ecx + 0x48] */
    /* cmp eax, MEM32(esi + 0x48) */ /* 0x140F27CE: cmp eax, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x48));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F27D6; /* 0x140F27D1: jbe 0x140f27d6 */
L_140F27D3:
    MEM32(esi + 0x48) = eax; /* 0x140F27D3: mov dword ptr [esi + 0x48], eax */
L_140F27D6:
    edi = MEM32(ecx + 0x54); /* 0x140F27D6: mov edi, dword ptr [ecx + 0x54] */
    /* test edi, edi */ /* 0x140F27D9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2817; /* 0x140F27DB: je 0x140f2817 */
L_140F27DD:
    /* cmp MEM32(ecx + 0x4C), 0 */ /* 0x140F27DD: cmp dword ptr [ecx + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F2817; /* 0x140F27E1: je 0x140f2817 */
L_140F27E3:
    ecx = MEM32(ecx + 0x48); /* 0x140F27E3: mov ecx, dword ptr [ecx + 0x48] */
    eax = MEM32(esi + 0x54); /* 0x140F27E6: mov eax, dword ptr [esi + 0x54] */
    edx = eax + ecx + (-0x1); /* 0x140F27E9: lea edx, [eax + ecx - 1] */
    eax = ecx + (-0x1); /* 0x140F27ED: lea eax, [ecx - 1] */
    eax = ~eax; /* 0x140F27F0: not eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x140F27F2: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x140F27F4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F280C; /* 0x140F27F6: jne 0x140f280c */
L_140F27F8:
    eax = edx; /* 0x140F27F8: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x140F27FA: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F280C; /* 0x140F27FD: je 0x140f280c */
L_140F27FF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x140F27FF: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp eax, 0x10u */ /* 0x140F2801: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F280C; /* 0x140F2804: jbe 0x140f280c */
L_140F2806:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFu; /* 0x140F2806: add edx, 0xf */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    edx = edx & 0xFFFFFFF0u; /* 0x140F2809: and edx, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F280C:
    eax = edi + edx; /* 0x140F280C: lea eax, [edi + edx] */
    edi = POP32_VAL(esp); /* 0x140F280F: pop edi */
    MEM32(esi + 0x54) = eax; /* 0x140F2810: mov dword ptr [esi + 0x54], eax */
    eax = edx; /* 0x140F2813: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x140F2815: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2816: ret  */
L_140F2817:
    eax = MEM32(esi + 0x54); /* 0x140F2817: mov eax, dword ptr [esi + 0x54] */
    edi = POP32_VAL(esp); /* 0x140F281A: pop edi */
    ebx = POP32_VAL(esp); /* 0x140F281B: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F281C: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F2830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2830u);

L_140F2830:
    eax = 0x8007054Fu; /* 0x140F2830: mov eax, 0x8007054f */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F2835: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F2840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2840u);

L_140F2840:
    eax = 0x8007054Fu; /* 0x140F2840: mov eax, 0x8007054f */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x140F2845: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_140F2850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2850u);

L_140F2850:
    eax = 0x8007054Fu; /* 0x140F2850: mov eax, 0x8007054f */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F2855: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140F2860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2860u);

L_140F2860:
    edi = edi; /* 0x140F2860: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F2862: push ebp */
    ebp = esp; /* 0x140F2863: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x140F2865: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2868: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x140F286A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2876; /* 0x140F286C: je 0x140f2876 */
L_140F286E:
    /* cmp ecx, 0x7FFFFFFFu */ /* 0x140F286E: cmp ecx, 0x7fffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F287B; /* 0x140F2874: jbe 0x140f287b */
L_140F2876:
    eax = 0x80070057u; /* 0x140F2876: mov eax, 0x80070057 */
L_140F287B:
    /* test eax, eax */ /* 0x140F287B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F288C; /* 0x140F287D: js 0x140f288c */
L_140F287F:
    eax = MEM32(ebp + 0x8); /* 0x140F287F: mov eax, dword ptr [ebp + 8] */
    edx = 0x14033F70u; /* 0x140F2882: mov edx, 0x14033f70 */
    RECOMP_CALL(sub_140865C0); /* 0x140F2887: call 0x140865c0 */
    RECOMP_FLAGS_IN();
L_140F288C:
    ebp = POP32_VAL(esp); /* 0x140F288C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F288D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F28A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F28A0u);

L_140F28A0:
    edi = edi; /* 0x140F28A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F28A2: push ebp */
    ebp = esp; /* 0x140F28A3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x140F28A5: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = 1; /* 0x140F28A8: mov dword ptr [eax], 1 */
    ebp = POP32_VAL(esp); /* 0x140F28AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F28AF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F28C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F28C0u);

L_140F28C0:
    edi = edi; /* 0x140F28C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F28C2: push ebp */
    ebp = esp; /* 0x140F28C3: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x140F28C5: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = ecx; /* 0x140F28C9: mov edx, ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F28D3; /* 0x140F28CB: jne 0x140f28d3 */
L_140F28CD:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F28CD: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x140F28CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F28D0: ret 8 */
L_140F28D3:
    ecx = MEM32(ebp + 0xC); /* 0x140F28D3: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x140F28D6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F296F; /* 0x140F28D8: je 0x140f296f */
L_140F28DE:
    eax = MEM32(edx + 0x4); /* 0x140F28DE: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(MEM8(ecx + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(ecx + 0x58) = (uint8_t)(MEM8(ecx + 0x58) & 0xFCu); /* 0x140F28E1: and byte ptr [ecx + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = eax; /* 0x140F28E5: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = 0x10u; /* 0x140F28E7: mov dword ptr [ecx + 4], 0x10 */
    MEM32(ecx + 0x8) = 0x10u; /* 0x140F28EE: mov dword ptr [ecx + 8], 0x10 */
    MEM32(ecx + 0xC) = edx; /* 0x140F28F5: mov dword ptr [ecx + 0xc], edx */
    MEM32(ecx + 0x10) = 0; /* 0x140F28F8: mov dword ptr [ecx + 0x10], 0 */
    MEM32(ecx + 0x18) = 0; /* 0x140F28FF: mov dword ptr [ecx + 0x18], 0 */
    MEM32(ecx + 0x1C) = 0; /* 0x140F2906: mov dword ptr [ecx + 0x1c], 0 */
    MEM32(ecx + 0x20) = 0; /* 0x140F290D: mov dword ptr [ecx + 0x20], 0 */
    MEM32(ecx + 0x24) = 0; /* 0x140F2914: mov dword ptr [ecx + 0x24], 0 */
    MEM32(ecx + 0x28) = 0; /* 0x140F291B: mov dword ptr [ecx + 0x28], 0 */
    MEM32(ecx + 0x2C) = 0; /* 0x140F2922: mov dword ptr [ecx + 0x2c], 0 */
    MEM32(ecx + 0x30) = 0; /* 0x140F2929: mov dword ptr [ecx + 0x30], 0 */
    MEM32(ecx + 0x34) = 0; /* 0x140F2930: mov dword ptr [ecx + 0x34], 0 */
    MEM32(ecx + 0x38) = 0; /* 0x140F2937: mov dword ptr [ecx + 0x38], 0 */
    MEM32(ecx + 0x3C) = 0; /* 0x140F293E: mov dword ptr [ecx + 0x3c], 0 */
    MEM32(ecx + 0x40) = 0; /* 0x140F2945: mov dword ptr [ecx + 0x40], 0 */
    MEM32(ecx + 0x44) = 0; /* 0x140F294C: mov dword ptr [ecx + 0x44], 0 */
    MEM32(ecx + 0x48) = 0; /* 0x140F2953: mov dword ptr [ecx + 0x48], 0 */
    MEM32(ecx + 0x4C) = 0; /* 0x140F295A: mov dword ptr [ecx + 0x4c], 0 */
    MEM32(ecx + 0x50) = 0; /* 0x140F2961: mov dword ptr [ecx + 0x50], 0 */
    MEM32(ecx + 0x54) = 0; /* 0x140F2968: mov dword ptr [ecx + 0x54], 0 */
L_140F296F:
    SET_LO8(eax, 1); /* 0x140F296F: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x140F2971: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F2972: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F2980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2980u);

L_140F2980:
    edi = edi; /* 0x140F2980: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F2982: push ebp */
    ebp = esp; /* 0x140F2983: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x140F2985: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + 0x4), 1 */ /* 0x140F2988: cmp dword ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F298C: sete al */
    ebp = POP32_VAL(esp); /* 0x140F298F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F2990: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F29A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F29A0u);

L_140F29A0:
    eax = 1; /* 0x140F29A0: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F29A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F29B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F29B0u);

L_140F29B0:
    edi = edi; /* 0x140F29B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F29B2: push ebp */
    ebp = esp; /* 0x140F29B3: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x140F29B5: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x140F29B9: mov eax, dword ptr [ebp + 0xc] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F29D4; /* 0x140F29BC: jne 0x140f29d4 */
L_140F29BE:
    MEM32(eax) = ecx; /* 0x140F29BE: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = 0; /* 0x140F29C0: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x140F29C7: mov dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F29CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x140F29D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F29D1: ret 8 */
L_140F29D4:
    MEM32(eax + 0x8) = 1; /* 0x140F29D4: mov dword ptr [eax + 8], 1 */
    eax = 1; /* 0x140F29DB: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x140F29E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F29E1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F29F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F29F0u);

L_140F29F0:
    edi = edi; /* 0x140F29F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F29F2: push ebp */
    ebp = esp; /* 0x140F29F3: mov ebp, esp */
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x140F29F5: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x1C); /* 0x140F29F9: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = 1; /* 0x140F29FC: mov dword ptr [eax], 1 */
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F2A16; /* 0x140F2A02: jbe 0x140f2a16 */
L_140F2A04:
    eax = MEM32(ebp + 0x20); /* 0x140F2A04: mov eax, dword ptr [ebp + 0x20] */
    MEM32(eax) = 0; /* 0x140F2A07: mov dword ptr [eax], 0 */
    eax = 1; /* 0x140F2A0D: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x140F2A12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x140F2A13: ret 0x1c */
L_140F2A16:
    ecx = MEM32(ecx + 0x18); /* 0x140F2A16: mov ecx, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140F2A19: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xEu */ /* 0x140F2A1B: cmp ecx, 0xe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F2B57; /* 0x140F2A1E: ja 0x140f2b57 */
L_140F2A24:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x140F2B60)); goto _ljump; }
L_140F2A2B:
    eax = MEM32(ebp + 0x8); /* 0x140F2A2B: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0xA0), 4 */ /* 0x140F2A2E: test byte ptr [eax + 0xa0], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0xA0)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2A3E; /* 0x140F2A35: je 0x140f2a3e */
L_140F2A37:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x140F2A37: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140F2B3A; /* 0x140F2A39: jmp 0x140f2b3a */
L_140F2A3E:
    ecx = 4; /* 0x140F2A3E: mov ecx, 4 */
    edx = 0x20000032u; /* 0x140F2A43: mov edx, 0x20000032 */
    goto L_140F2B3A; /* 0x140F2A48: jmp 0x140f2b3a */
L_140F2A4D:
    ecx = 4; /* 0x140F2A4D: mov ecx, 4 */
    goto L_140F2B3A; /* 0x140F2A52: jmp 0x140f2b3a */
L_140F2A57:
    eax = MEM32(ebp + 0x8); /* 0x140F2A57: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0xA6), 4 */ /* 0x140F2A5A: test byte ptr [eax + 0xa6], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0xA6)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F2B3A; /* 0x140F2A61: jne 0x140f2b3a */
L_140F2A67:
    ecx = 3; /* 0x140F2A67: mov ecx, 3 */
    goto L_140F2B3A; /* 0x140F2A6C: jmp 0x140f2b3a */
L_140F2A71:
    eax = MEM32(ebp + 0x8); /* 0x140F2A71: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0xA0), 4 */ /* 0x140F2A74: test byte ptr [eax + 0xa0], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0xA0)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2A87; /* 0x140F2A7B: je 0x140f2a87 */
L_140F2A7D:
    ecx = 7; /* 0x140F2A7D: mov ecx, 7 */
    goto L_140F2B3A; /* 0x140F2A82: jmp 0x140f2b3a */
L_140F2A87:
    ecx = 4; /* 0x140F2A87: mov ecx, 4 */
    edx = ecx + 0x1C; /* 0x140F2A8C: lea edx, [ecx + 0x1c] */
    goto L_140F2B3A; /* 0x140F2A8F: jmp 0x140f2b3a */
L_140F2A94:
    eax = MEM32(ebp + 0x8); /* 0x140F2A94: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0xA0), 4 */ /* 0x140F2A97: test byte ptr [eax + 0xa0], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0xA0)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2AAA; /* 0x140F2A9E: je 0x140f2aaa */
L_140F2AA0:
    ecx = 8; /* 0x140F2AA0: mov ecx, 8 */
    goto L_140F2B3A; /* 0x140F2AA5: jmp 0x140f2b3a */
L_140F2AAA:
    ecx = 4; /* 0x140F2AAA: mov ecx, 4 */
    goto L_140F2B35; /* 0x140F2AAF: jmp 0x140f2b35 */
L_140F2AB4:
    eax = MEM32(ebp + 0x8); /* 0x140F2AB4: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0xA0), 4 */ /* 0x140F2AB7: test byte ptr [eax + 0xa0], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0xA0)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2A87; /* 0x140F2ABE: je 0x140f2a87 */
L_140F2AC0:
    ecx = 9; /* 0x140F2AC0: mov ecx, 9 */
    goto L_140F2B3A; /* 0x140F2AC5: jmp 0x140f2b3a */
L_140F2AC7:
    eax = MEM32(ebp + 0x8); /* 0x140F2AC7: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0xA0), 4 */ /* 0x140F2ACA: test byte ptr [eax + 0xa0], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0xA0)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2AAA; /* 0x140F2AD1: je 0x140f2aaa */
L_140F2AD3:
    ecx = 0xAu; /* 0x140F2AD3: mov ecx, 0xa */
    goto L_140F2B3A; /* 0x140F2AD8: jmp 0x140f2b3a */
L_140F2ADA:
    eax = MEM32(ebp + 0x8); /* 0x140F2ADA: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0xA0), 4 */ /* 0x140F2ADD: test byte ptr [eax + 0xa0], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0xA0)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2A87; /* 0x140F2AE4: je 0x140f2a87 */
L_140F2AE6:
    ecx = 0xBu; /* 0x140F2AE6: mov ecx, 0xb */
    goto L_140F2B3A; /* 0x140F2AEB: jmp 0x140f2b3a */
L_140F2AED:
    eax = MEM32(ebp + 0x8); /* 0x140F2AED: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0xA0), 4 */ /* 0x140F2AF0: test byte ptr [eax + 0xa0], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0xA0)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2AAA; /* 0x140F2AF7: je 0x140f2aaa */
L_140F2AF9:
    ecx = 0xCu; /* 0x140F2AF9: mov ecx, 0xc */
    goto L_140F2B3A; /* 0x140F2AFE: jmp 0x140f2b3a */
L_140F2B00:
    eax = MEM32(ebp + 0x8); /* 0x140F2B00: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0xA0), 4 */ /* 0x140F2B03: test byte ptr [eax + 0xa0], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0xA0)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2B13; /* 0x140F2B0A: je 0x140f2b13 */
L_140F2B0C:
    ecx = 0xDu; /* 0x140F2B0C: mov ecx, 0xd */
    goto L_140F2B3A; /* 0x140F2B11: jmp 0x140f2b3a */
L_140F2B13:
    ecx = 5; /* 0x140F2B13: mov ecx, 5 */
    edx = ecx + 0x1B; /* 0x140F2B18: lea edx, [ecx + 0x1b] */
    goto L_140F2B3A; /* 0x140F2B1B: jmp 0x140f2b3a */
L_140F2B1D:
    eax = MEM32(ebp + 0x8); /* 0x140F2B1D: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0xA0), 4 */ /* 0x140F2B20: test byte ptr [eax + 0xa0], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0xA0)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2B30; /* 0x140F2B27: je 0x140f2b30 */
L_140F2B29:
    ecx = 0xEu; /* 0x140F2B29: mov ecx, 0xe */
    goto L_140F2B3A; /* 0x140F2B2E: jmp 0x140f2b3a */
L_140F2B30:
    ecx = 5; /* 0x140F2B30: mov ecx, 5 */
L_140F2B35:
    edx = 0x20000022u; /* 0x140F2B35: mov edx, 0x20000022 */
L_140F2B3A:
    eax = MEM32(ebp + 0x10); /* 0x140F2B3A: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x140F2B3D: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + 0x14); /* 0x140F2B3F: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x140F2B42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2B48; /* 0x140F2B44: je 0x140f2b48 */
L_140F2B46:
    MEM32(eax) = edx; /* 0x140F2B46: mov dword ptr [eax], edx */
L_140F2B48:
    eax = MEM32(ebp + 0x20); /* 0x140F2B48: mov eax, dword ptr [ebp + 0x20] */
    MEM32(eax) = 1; /* 0x140F2B4B: mov dword ptr [eax], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2B51: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x140F2B53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x140F2B54: ret 0x1c */
L_140F2B57:
    eax = 0x8007054Fu; /* 0x140F2B57: mov eax, 0x8007054f */
    ebp = POP32_VAL(esp); /* 0x140F2B5C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x140F2B5D: ret 0x1c */
  _ljump:
    switch (_itail_tgt) {
      case 0x140F2A2Bu: goto L_140F2A2B;
      case 0x140F2A4Du: goto L_140F2A4D;
      case 0x140F2A57u: goto L_140F2A57;
      case 0x140F2A71u: goto L_140F2A71;
      case 0x140F2A94u: goto L_140F2A94;
      case 0x140F2AB4u: goto L_140F2AB4;
      case 0x140F2AC7u: goto L_140F2AC7;
      case 0x140F2ADAu: goto L_140F2ADA;
      case 0x140F2AEDu: goto L_140F2AED;
      case 0x140F2B00u: goto L_140F2B00;
      case 0x140F2B1Du: goto L_140F2B1D;
      case 0x140F2B3Au: goto L_140F2B3A;
      case 0x140F2B57u: goto L_140F2B57;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F2BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2BB0u);

L_140F2BB0:
    edi = edi; /* 0x140F2BB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F2BB2: push ebp */
    ebp = esp; /* 0x140F2BB3: mov ebp, esp */
    eax = MEM32(ecx + 0x18); /* 0x140F2BB5: mov eax, dword ptr [ecx + 0x18] */
    /* cmp eax, 0xEu */ /* 0x140F2BB8: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F2C2B; /* 0x140F2BBB: ja 0x140f2c2b */
L_140F2BBD:
    eax = (uint32_t)MEM8(eax + 0x140F2C48); /* 0x140F2BBD: movzx eax, byte ptr [eax + 0x140f2c48] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F2C34)); goto _ljump; }
L_140F2BCB:
    eax = MEM32(ebp + 0xC); /* 0x140F2BCB: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0; /* 0x140F2BCE: mov dword ptr [eax], 0 */
    eax = MEM32(ebp + 0x10); /* 0x140F2BD4: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = 1; /* 0x140F2BD7: mov dword ptr [eax], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2BDD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x140F2BDF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F2BE0: ret 0xc */
L_140F2BE3:
    eax = MEM32(ebp + 0xC); /* 0x140F2BE3: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 3; /* 0x140F2BE6: mov dword ptr [eax], 3 */
    eax = MEM32(ebp + 0x10); /* 0x140F2BEC: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = 1; /* 0x140F2BEF: mov dword ptr [eax], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2BF5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x140F2BF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F2BF8: ret 0xc */
L_140F2BFB:
    eax = MEM32(ebp + 0xC); /* 0x140F2BFB: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 1; /* 0x140F2BFE: mov dword ptr [eax], 1 */
    eax = MEM32(ebp + 0x10); /* 0x140F2C04: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = 1; /* 0x140F2C07: mov dword ptr [eax], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2C0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x140F2C0F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F2C10: ret 0xc */
L_140F2C13:
    eax = MEM32(ebp + 0xC); /* 0x140F2C13: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 2; /* 0x140F2C16: mov dword ptr [eax], 2 */
    eax = MEM32(ebp + 0x10); /* 0x140F2C1C: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = 1; /* 0x140F2C1F: mov dword ptr [eax], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2C25: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x140F2C27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F2C28: ret 0xc */
L_140F2C2B:
    eax = 0x8007054Fu; /* 0x140F2C2B: mov eax, 0x8007054f */
    ebp = POP32_VAL(esp); /* 0x140F2C30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F2C31: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x140F2BCBu: goto L_140F2BCB;
      case 0x140F2BE3u: goto L_140F2BE3;
      case 0x140F2BFBu: goto L_140F2BFB;
      case 0x140F2C13u: goto L_140F2C13;
      case 0x140F2C2Bu: goto L_140F2C2B;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F2C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2C60u);

L_140F2C60:
    edi = edi; /* 0x140F2C60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F2C62: push ebp */
    ebp = esp; /* 0x140F2C63: mov ebp, esp */
    eax = MEM32(ecx + 0x18); /* 0x140F2C65: mov eax, dword ptr [ecx + 0x18] */
    /* cmp eax, 0x48u */ /* 0x140F2C68: cmp eax, 0x48 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140F2C76; /* 0x140F2C6B: jae 0x140f2c76 */
L_140F2C6D:
    edx = MEM32(eax * 4 + 0x141F0E50); /* 0x140F2C6D: mov edx, dword ptr [eax*4 + 0x141f0e50] */
    goto L_140F2C7B; /* 0x140F2C74: jmp 0x140f2c7b */
L_140F2C76:
    edx = 0x140414CCu; /* 0x140F2C76: mov edx, 0x140414cc */
L_140F2C7B:
    ecx = MEM32(ebp + 0xC); /* 0x140F2C7B: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2C7E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x140F2C80: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2C8C; /* 0x140F2C82: je 0x140f2c8c */
L_140F2C84:
    /* cmp ecx, 0x7FFFFFFFu */ /* 0x140F2C84: cmp ecx, 0x7fffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F2C91; /* 0x140F2C8A: jbe 0x140f2c91 */
L_140F2C8C:
    eax = 0x80070057u; /* 0x140F2C8C: mov eax, 0x80070057 */
L_140F2C91:
    /* test eax, eax */ /* 0x140F2C91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F2C9D; /* 0x140F2C93: js 0x140f2c9d */
L_140F2C95:
    eax = MEM32(ebp + 0x8); /* 0x140F2C95: mov eax, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_140865C0); /* 0x140F2C98: call 0x140865c0 */
    RECOMP_FLAGS_IN();
L_140F2C9D:
    ebp = POP32_VAL(esp); /* 0x140F2C9D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F2C9E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F2CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2CB0u);

L_140F2CB0:
    edi = edi; /* 0x140F2CB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F2CB2: push ebp */
    ebp = esp; /* 0x140F2CB3: mov ebp, esp */
    ecx = MEM32(ecx + 0x18); /* 0x140F2CB5: mov ecx, dword ptr [ecx + 0x18] */
    PUSH32(esp, esi); /* 0x140F2CB8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x140F2CB9: mov esi, dword ptr [ebp + 8] */
    MEM32(esi) = 0x00100010u; /* 0x140F2CBC: mov dword ptr [esi], 0x100010 */
    /* cmp ecx, 0xEu */ /* 0x140F2CC2: cmp ecx, 0xe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F2CFE; /* 0x140F2CC5: ja 0x140f2cfe */
L_140F2CC7:
    eax = (uint32_t)MEM8(ecx + 0x140F2D1C); /* 0x140F2CC7: movzx eax, byte ptr [ecx + 0x140f2d1c] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F2D08)); goto _ljump; }
L_140F2CD5:
    _flag_a = (uint32_t)((MEM8(esi + 0x1) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x1) | 2)) << 24;
    MEM8(esi + 0x1) = (uint8_t)(MEM8(esi + 0x1) | 2); /* 0x140F2CD5: or byte ptr [esi + 1], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_140F2CD9:
    _flag_a = (uint32_t)((MEM8(esi + 0x1) | 1)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x1) | 1)) << 24;
    MEM8(esi + 0x1) = (uint8_t)(MEM8(esi + 0x1) | 1); /* 0x140F2CD9: or byte ptr [esi + 1], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(esi) | 0x40u)) << 24; _flag_b = (uint32_t)((MEM8(esi) | 0x40u)) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) | 0x40u); /* 0x140F2CDD: or byte ptr [esi], 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = esi; /* 0x140F2CE0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x140F2CE2: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F2CE3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F2CE4: ret 4 */
L_140F2CE7:
    _flag_a = (uint32_t)((MEM8(esi) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(esi) | 0x20u)) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) | 0x20u); /* 0x140F2CE7: or byte ptr [esi], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_140F2CEA:
    /* cmp ecx, 6 */ /* 0x140F2CEA: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F2CED: sete cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(ecx)); /* 0x140F2CF0: add cl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(ecx) ^ MEM8(esi + 0x1))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ MEM8(esi + 0x1))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ MEM8(esi + 0x1)); /* 0x140F2CF2: xor cl, byte ptr [esi + 1] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    SET_LO8(ecx, LO8(ecx) & 2); /* 0x140F2CF5: and cl, 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(esi + 0x1) ^ LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x1) ^ LO8(ecx))) << 24;
    MEM8(esi + 0x1) = (uint8_t)(MEM8(esi + 0x1) ^ LO8(ecx)); /* 0x140F2CF8: xor byte ptr [esi + 1], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(esi) | 0xC0u)) << 24; _flag_b = (uint32_t)((MEM8(esi) | 0xC0u)) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) | 0xC0u); /* 0x140F2CFB: or byte ptr [esi], 0xc0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_140F2CFE:
    eax = esi; /* 0x140F2CFE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x140F2D00: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F2D01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F2D02: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x140F2CD5u: goto L_140F2CD5;
      case 0x140F2CD9u: goto L_140F2CD9;
      case 0x140F2CE7u: goto L_140F2CE7;
      case 0x140F2CEAu: goto L_140F2CEA;
      case 0x140F2CFEu: goto L_140F2CFE;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F2D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2D30u);

L_140F2D30:
    edi = edi; /* 0x140F2D30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F2D32: push ebp */
    ebp = esp; /* 0x140F2D33: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x140F2D35: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x140F2D38: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2E2B; /* 0x140F2D3A: je 0x140f2e2b */
L_140F2D40:
    eax = MEM32(ecx + 0x4); /* 0x140F2D40: mov eax, dword ptr [ecx + 4] */
    MEM32(edx) = eax; /* 0x140F2D43: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x18); /* 0x140F2D45: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(MEM8(edx + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(edx + 0x58) = (uint8_t)(MEM8(edx + 0x58) & 0xFCu); /* 0x140F2D48: and byte ptr [edx + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(edx + 0x4) = eax; /* 0x140F2D4C: mov dword ptr [edx + 4], eax */
    MEM32(edx + 0x8) = 0x10u; /* 0x140F2D4F: mov dword ptr [edx + 8], 0x10 */
    MEM32(edx + 0xC) = ecx; /* 0x140F2D56: mov dword ptr [edx + 0xc], ecx */
    MEM32(edx + 0x10) = 0; /* 0x140F2D59: mov dword ptr [edx + 0x10], 0 */
    MEM32(edx + 0x18) = 0; /* 0x140F2D60: mov dword ptr [edx + 0x18], 0 */
    MEM32(edx + 0x1C) = 0; /* 0x140F2D67: mov dword ptr [edx + 0x1c], 0 */
    MEM32(edx + 0x20) = 0; /* 0x140F2D6E: mov dword ptr [edx + 0x20], 0 */
    MEM32(edx + 0x24) = 0; /* 0x140F2D75: mov dword ptr [edx + 0x24], 0 */
    MEM32(edx + 0x28) = 0; /* 0x140F2D7C: mov dword ptr [edx + 0x28], 0 */
    MEM32(edx + 0x2C) = 0; /* 0x140F2D83: mov dword ptr [edx + 0x2c], 0 */
    MEM32(edx + 0x30) = 1; /* 0x140F2D8A: mov dword ptr [edx + 0x30], 1 */
    MEM32(edx + 0x34) = 1; /* 0x140F2D91: mov dword ptr [edx + 0x34], 1 */
    MEM32(edx + 0x38) = 1; /* 0x140F2D98: mov dword ptr [edx + 0x38], 1 */
    MEM32(edx + 0x3C) = 0; /* 0x140F2D9F: mov dword ptr [edx + 0x3c], 0 */
    MEM32(edx + 0x40) = 0; /* 0x140F2DA6: mov dword ptr [edx + 0x40], 0 */
    MEM32(edx + 0x44) = 0; /* 0x140F2DAD: mov dword ptr [edx + 0x44], 0 */
    eax = MEM32(ecx + 0x18); /* 0x140F2DB4: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x140F2DB7: add eax, -2 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xCu */ /* 0x140F2DBA: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F2E18; /* 0x140F2DBD: ja 0x140f2e18 */
L_140F2DBF:
    eax = (uint32_t)MEM8(eax + 0x140F2E44); /* 0x140F2DBF: movzx eax, byte ptr [eax + 0x140f2e44] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F2E34)); goto _ljump; }
L_140F2DCD:
    MEM32(edx + 0x4C) = 1; /* 0x140F2DCD: mov dword ptr [edx + 0x4c], 1 */
    eax = MEM32(edx + 0x4C); /* 0x140F2DD4: mov eax, dword ptr [edx + 0x4c] */
    MEM32(edx + 0x48) = eax; /* 0x140F2DD7: mov dword ptr [edx + 0x48], eax */
    MEM32(edx + 0x50) = eax; /* 0x140F2DDA: mov dword ptr [edx + 0x50], eax */
    MEM32(edx + 0x54) = eax; /* 0x140F2DDD: mov dword ptr [edx + 0x54], eax */
    SET_LO8(eax, 1); /* 0x140F2DE0: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x140F2DE2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F2DE3: ret 8 */
L_140F2DE6:
    MEM32(edx + 0x4C) = 2; /* 0x140F2DE6: mov dword ptr [edx + 0x4c], 2 */
    eax = MEM32(edx + 0x4C); /* 0x140F2DED: mov eax, dword ptr [edx + 0x4c] */
    MEM32(edx + 0x48) = eax; /* 0x140F2DF0: mov dword ptr [edx + 0x48], eax */
    MEM32(edx + 0x50) = eax; /* 0x140F2DF3: mov dword ptr [edx + 0x50], eax */
    MEM32(edx + 0x54) = eax; /* 0x140F2DF6: mov dword ptr [edx + 0x54], eax */
    SET_LO8(eax, 1); /* 0x140F2DF9: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x140F2DFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F2DFC: ret 8 */
L_140F2DFF:
    MEM32(edx + 0x4C) = 8; /* 0x140F2DFF: mov dword ptr [edx + 0x4c], 8 */
    eax = MEM32(edx + 0x4C); /* 0x140F2E06: mov eax, dword ptr [edx + 0x4c] */
    MEM32(edx + 0x48) = eax; /* 0x140F2E09: mov dword ptr [edx + 0x48], eax */
    MEM32(edx + 0x50) = eax; /* 0x140F2E0C: mov dword ptr [edx + 0x50], eax */
    MEM32(edx + 0x54) = eax; /* 0x140F2E0F: mov dword ptr [edx + 0x54], eax */
    SET_LO8(eax, 1); /* 0x140F2E12: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x140F2E14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F2E15: ret 8 */
L_140F2E18:
    MEM32(edx + 0x4C) = 4; /* 0x140F2E18: mov dword ptr [edx + 0x4c], 4 */
    eax = MEM32(edx + 0x4C); /* 0x140F2E1F: mov eax, dword ptr [edx + 0x4c] */
    MEM32(edx + 0x48) = eax; /* 0x140F2E22: mov dword ptr [edx + 0x48], eax */
    MEM32(edx + 0x50) = eax; /* 0x140F2E25: mov dword ptr [edx + 0x50], eax */
    MEM32(edx + 0x54) = eax; /* 0x140F2E28: mov dword ptr [edx + 0x54], eax */
L_140F2E2B:
    SET_LO8(eax, 1); /* 0x140F2E2B: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x140F2E2D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F2E2E: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x140F2DCDu: goto L_140F2DCD;
      case 0x140F2DE6u: goto L_140F2DE6;
      case 0x140F2DFFu: goto L_140F2DFF;
      case 0x140F2E18u: goto L_140F2E18;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F2E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2E60u);

L_140F2E60:
    edi = edi; /* 0x140F2E60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F2E62: push ebp */
    ebp = esp; /* 0x140F2E63: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x140F2E65: mov edx, dword ptr [ebp + 8] */
    /* cmp ecx, edx */ /* 0x140F2E68: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F2E72; /* 0x140F2E6A: jne 0x140f2e72 */
L_140F2E6C:
    SET_LO8(eax, 1); /* 0x140F2E6C: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x140F2E6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F2E6F: ret 4 */
L_140F2E72:
    /* cmp MEM32(edx + 0x4), 2 */ /* 0x140F2E72: cmp dword ptr [edx + 4], 2 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F2E7E; /* 0x140F2E76: je 0x140f2e7e */
L_140F2E78:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F2E78: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x140F2E7A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F2E7B: ret 4 */
L_140F2E7E:
    ecx = MEM32(ecx + 0x18); /* 0x140F2E7E: mov ecx, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2E81: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(edx + 0x18) */ /* 0x140F2E83: cmp ecx, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F2E86: sete al */
    ebp = POP32_VAL(esp); /* 0x140F2E89: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F2E8A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F2EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2EA0u);

L_140F2EA0:
    /* cmp eax, 0x48u */ /* 0x140F2EA0: cmp eax, 0x48 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140F2EAD; /* 0x140F2EA3: jae 0x140f2ead */
L_140F2EA5:
    eax = MEM32(eax * 4 + 0x141F0E50); /* 0x140F2EA5: mov eax, dword ptr [eax*4 + 0x141f0e50] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2EAC: ret  */
L_140F2EAD:
    eax = 0x140414CCu; /* 0x140F2EAD: mov eax, 0x140414cc */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2EB2: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F2EC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2EC0u);

L_140F2EC0:
    edi = edi; /* 0x140F2EC0: mov edi, edi */
    PUSH32(esp, esi); /* 0x140F2EC2: push esi */
    esi = ecx; /* 0x140F2EC3: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140F2EC5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x1C), edx */ /* 0x140F2EC7: cmp dword ptr [esi + 0x1c], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F2ED6; /* 0x140F2ECA: je 0x140f2ed6 */
L_140F2ECC:
    ecx = MEM32(esi + 0x1C); /* 0x140F2ECC: mov ecx, dword ptr [esi + 0x1c] */
    eax = MEM32(ecx); /* 0x140F2ECF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140F2ED1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x140F2ED4: mov edx, eax */
L_140F2ED6:
    eax = MEM32(esi + 0x8); /* 0x140F2ED6: mov eax, dword ptr [esi + 8] */
    esi = POP32_VAL(esp); /* 0x140F2ED9: pop esi */
    /* test eax, eax */ /* 0x140F2EDA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2EF5; /* 0x140F2EDC: je 0x140f2ef5 */
L_140F2EDE:
    eax = MEM32(eax + 0x50); /* 0x140F2EDE: mov eax, dword ptr [eax + 0x50] */
    /* test eax, eax */ /* 0x140F2EE1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2EF5; /* 0x140F2EE3: je 0x140f2ef5 */
L_140F2EE5:
    /* test MEM8(eax + 0x64), 4 */ /* 0x140F2EE5: test byte ptr [eax + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2EEE; /* 0x140F2EE9: je 0x140f2eee */
L_140F2EEB:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x34));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax + 0x34); /* 0x140F2EEB: add edx, dword ptr [eax + 0x34] */
    _flag_k = FK_ADD;
L_140F2EEE:
    eax = MEM32(eax + 0x58); /* 0x140F2EEE: mov eax, dword ptr [eax + 0x58] */
    /* test eax, eax */ /* 0x140F2EF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F2EE5; /* 0x140F2EF3: jne 0x140f2ee5 */
L_140F2EF5:
    eax = edx; /* 0x140F2EF5: mov eax, edx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F2EF7: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F2F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2F00u);

L_140F2F00:
    edi = edi; /* 0x140F2F00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F2F02: push ebp */
    ebp = esp; /* 0x140F2F03: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140F2F05: push ecx */
    edx = MEM32(ebp + 0xC); /* 0x140F2F06: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x140F2F09: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x140F2F0A: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x140F2F0D: push esi */
    PUSH32(esp, edi); /* 0x140F2F0E: push edi */
    esi = ecx; /* 0x140F2F0F: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140F2F11: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x140F2F13: mov dword ptr [ebp - 4], esi */
    /* cmp MEM32(esi + 0x1C), edi */ /* 0x140F2F16: cmp dword ptr [esi + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F2F33; /* 0x140F2F19: je 0x140f2f33 */
L_140F2F1B:
    ecx = MEM32(esi + 0x1C); /* 0x140F2F1B: mov ecx, dword ptr [esi + 0x1c] */
    eax = MEM32(ecx); /* 0x140F2F1E: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x140F2F20: push edx */
    PUSH32(esp, ebx); /* 0x140F2F21: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140F2F22: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F2F25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F2F76; /* 0x140F2F27: js 0x140f2f76 */
L_140F2F29:
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2F91; /* 0x140F2F29: je 0x140f2f91 */
L_140F2F2B:
    edx = MEM32(ebp + 0xC); /* 0x140F2F2B: mov edx, dword ptr [ebp + 0xc] */
    edi = MEM32(edx + 0x8); /* 0x140F2F2E: mov edi, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x140F2F31: sub ebx, edi */
    _flag_k = FK_CMP;
L_140F2F33:
    esi = MEM32(esi + 0x8); /* 0x140F2F33: mov esi, dword ptr [esi + 8] */
    /* test esi, esi */ /* 0x140F2F36: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2F6E; /* 0x140F2F38: je 0x140f2f6e */
L_140F2F3A:
    esi = MEM32(esi + 0x50); /* 0x140F2F3A: mov esi, dword ptr [esi + 0x50] */
    /* test esi, esi */ /* 0x140F2F3D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2F6E; /* 0x140F2F3F: je 0x140f2f6e */
L_140F2F41:
    /* test MEM8(esi + 0x64), 4 */ /* 0x140F2F41: test byte ptr [esi + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2F67; /* 0x140F2F45: je 0x140f2f67 */
L_140F2F47:
    /* cmp MEM32(esi + 0x48), 0 */ /* 0x140F2F47: cmp dword ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F2F67; /* 0x140F2F4B: je 0x140f2f67 */
L_140F2F4D:
    ecx = MEM32(esi + 0x48); /* 0x140F2F4D: mov ecx, dword ptr [esi + 0x48] */
    eax = MEM32(ecx); /* 0x140F2F50: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x140F2F52: push edx */
    PUSH32(esp, ebx); /* 0x140F2F53: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140F2F54: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F2F57: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F2F76; /* 0x140F2F59: js 0x140f2f76 */
L_140F2F5B:
    edx = MEM32(ebp + 0xC); /* 0x140F2F5B: mov edx, dword ptr [ebp + 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F2F7F; /* 0x140F2F5E: je 0x140f2f7f */
L_140F2F60:
    eax = MEM32(edx + 0x8); /* 0x140F2F60: mov eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x140F2F63: sub ebx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x140F2F65: add edi, eax */
    _flag_k = FK_ADD;
L_140F2F67:
    esi = MEM32(esi + 0x58); /* 0x140F2F67: mov esi, dword ptr [esi + 0x58] */
    /* test esi, esi */ /* 0x140F2F6A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F2F41; /* 0x140F2F6C: jne 0x140f2f41 */
L_140F2F6E:
    eax = 1; /* 0x140F2F6E: mov eax, 1 */
    MEM32(edx + 0x8) = edi; /* 0x140F2F73: mov dword ptr [edx + 8], edi */
L_140F2F76:
    edi = POP32_VAL(esp); /* 0x140F2F76: pop edi */
    esi = POP32_VAL(esp); /* 0x140F2F77: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F2F78: pop ebx */
    esp = ebp; /* 0x140F2F79: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F2F7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F2F7C: ret 8 */
L_140F2F7F:
    /* cmp MEM32(edx + 0x4), 0 */ /* 0x140F2F7F: cmp dword ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F2F91; /* 0x140F2F83: jne 0x140f2f91 */
L_140F2F85:
    eax = MEM32(ebp + (-0x4)); /* 0x140F2F85: mov eax, dword ptr [ebp - 4] */
    MEM32(edx + 0x4) = eax; /* 0x140F2F88: mov dword ptr [edx + 4], eax */
    eax = edi + ebx; /* 0x140F2F8B: lea eax, [edi + ebx] */
    MEM32(edx + 0x8) = eax; /* 0x140F2F8E: mov dword ptr [edx + 8], eax */
L_140F2F91:
    edi = POP32_VAL(esp); /* 0x140F2F91: pop edi */
    esi = POP32_VAL(esp); /* 0x140F2F92: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F2F93: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140F2F95: pop ebx */
    esp = ebp; /* 0x140F2F96: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F2F98: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F2F99: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F2FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F2FB0u);

L_140F2FB0:
    edi = edi; /* 0x140F2FB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F2FB2: push ebp */
    ebp = esp; /* 0x140F2FB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x140F2FB5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x140F2FB8: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x140F2FB9: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x140F2FBC: push esi */
    eax = ecx; /* 0x140F2FBD: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x140F2FBF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x140F2FC1: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x140F2FC2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140F2FC4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x140F2FC6: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x140F2FC9: mov dword ptr [ebp - 8], ecx */
    /* cmp MEM32(eax + 0x1C), ecx */ /* 0x140F2FCC: cmp dword ptr [eax + 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F304A; /* 0x140F2FCF: je 0x140f304a */
L_140F2FD1:
    esi = MEM32(ebp + 0x10); /* 0x140F2FD1: mov esi, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x1C); /* 0x140F2FD4: mov ecx, dword ptr [eax + 0x1c] */
    eax = MEM32(ecx); /* 0x140F2FD7: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x10); /* 0x140F2FD9: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x140F2FDC: push edx */
    edx = ebp + (-0x14); /* 0x140F2FDD: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x140F2FE0: push edx */
    edx = MEM32(ebp + 0x14); /* 0x140F2FE1: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x140F2FE4: push ebx */
    PUSH32(esp, edx); /* 0x140F2FE5: push edx */
    MEM32(ebp + 0x18) = edx; /* 0x140F2FE6: mov dword ptr [ebp + 0x18], edx */
    edx = MEM32(ebp + 0xC); /* 0x140F2FE9: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x140F2FEC: push esi */
    PUSH32(esp, edx); /* 0x140F2FED: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140F2FEE: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = esi; /* 0x140F2FF1: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + 0x10) = edx; /* 0x140F2FF4: mov dword ptr [ebp + 0x10], edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x140F2FF7: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x140F2FFA: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x140F2FFD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F3116; /* 0x140F2FFF: js 0x140f3116 */
L_140F3005:
    edi = MEM32(ebp + (-0x14)); /* 0x140F3005: mov edi, dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + (-0x10)); /* 0x140F3008: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x140F300B: mov dword ptr [ebp - 8], ecx */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x140F300E: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F30FF; /* 0x140F3011: je 0x140f30ff */
L_140F3017:
    eax = MEM32(ebp + 0xC); /* 0x140F3017: mov eax, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x140F301A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3043; /* 0x140F301C: je 0x140f3043 */
L_140F301E:
    edx = ecx * 4; /* 0x140F301E: lea edx, [ecx*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x140F3025: add esi, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = edx; /* 0x140F3027: mov dword ptr [ebp + 0xc], edx */
    edx = MEM32(ebp + 0x14); /* 0x140F302A: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x140F302D: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x140F302F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x140F3031: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebp + (-0xC)); /* 0x140F3034: mov esi, dword ptr [ebp - 0xc] */
    MEM32(ebp + 0x10) = eax; /* 0x140F3037: mov dword ptr [ebp + 0x10], eax */
    /* test edx, edx */ /* 0x140F303A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F305C; /* 0x140F303C: je 0x140f305c */
L_140F303E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0xC); /* 0x140F303E: add edx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    goto L_140F3059; /* 0x140F3041: jmp 0x140f3059 */
L_140F3043:
    esi = MEM32(ebp + (-0xC)); /* 0x140F3043: mov esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x140F3046: sub ebx, edi */
    _flag_k = FK_CMP;
    goto L_140F305C; /* 0x140F3048: jmp 0x140f305c */
L_140F304A:
    eax = MEM32(ebp + 0x10); /* 0x140F304A: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x140F304D: mov edx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x140F3050: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x140F3053: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = eax; /* 0x140F3056: mov dword ptr [ebp + 0x10], eax */
L_140F3059:
    MEM32(ebp + 0x18) = edx; /* 0x140F3059: mov dword ptr [ebp + 0x18], edx */
L_140F305C:
    ecx = MEM32(ebp + (-0x18)); /* 0x140F305C: mov ecx, dword ptr [ebp - 0x18] */
    ecx = MEM32(ecx + 0x8); /* 0x140F305F: mov ecx, dword ptr [ecx + 8] */
    MEM32(ebp + 0x14) = ecx; /* 0x140F3062: mov dword ptr [ebp + 0x14], ecx */
    /* test ecx, ecx */ /* 0x140F3065: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x8)); /* 0x140F3067: mov ecx, dword ptr [ebp - 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F3081; /* 0x140F306A: jne 0x140f3081 */
L_140F306C:
    eax = MEM32(ebp + 0x1C); /* 0x140F306C: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = edi; /* 0x140F306F: mov dword ptr [eax], edi */
    eax = MEM32(ebp + 0x20); /* 0x140F3071: mov eax, dword ptr [ebp + 0x20] */
    edi = POP32_VAL(esp); /* 0x140F3074: pop edi */
    MEM32(eax) = ecx; /* 0x140F3075: mov dword ptr [eax], ecx */
    eax = esi; /* 0x140F3077: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x140F3079: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F307A: pop ebx */
    esp = ebp; /* 0x140F307B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F307D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x140F307E: ret 0x1c */
L_140F3081:
    esi = MEM32(ebp + 0x14); /* 0x140F3081: mov esi, dword ptr [ebp + 0x14] */
    esi = MEM32(esi + 0x50); /* 0x140F3084: mov esi, dword ptr [esi + 0x50] */
    /* test esi, esi */ /* 0x140F3087: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3102; /* 0x140F3089: je 0x140f3102 */
L_140F308B:
    goto L_140F3090; /* 0x140F308B: jmp 0x140f3090 */
L_140F3090:
    /* test MEM8(esi + 0x64), 4 */ /* 0x140F3090: test byte ptr [esi + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F30F3; /* 0x140F3094: je 0x140f30f3 */
L_140F3096:
    /* cmp MEM32(esi + 0x48), 0 */ /* 0x140F3096: cmp dword ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F30F3; /* 0x140F309A: je 0x140f30f3 */
L_140F309C:
    /* test eax, eax */ /* 0x140F309C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F30FF; /* 0x140F309E: je 0x140f30ff */
L_140F30A0:
    ecx = MEM32(esi + 0x48); /* 0x140F30A0: mov ecx, dword ptr [esi + 0x48] */
    eax = MEM32(ecx); /* 0x140F30A3: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x10); /* 0x140F30A5: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x140F30A8: push edx */
    edx = ebp + (-0x14); /* 0x140F30A9: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x140F30AC: push edx */
    edx = MEM32(ebp + 0x18); /* 0x140F30AD: mov edx, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x140F30B0: push ebx */
    PUSH32(esp, edx); /* 0x140F30B1: push edx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x140F30B2: push dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0x10); /* 0x140F30B5: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x140F30B8: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140F30B9: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x140F30BC: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F30BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F3116; /* 0x140F30C1: js 0x140f3116 */
L_140F30C3:
    eax = MEM32(ebp + (-0x10)); /* 0x140F30C3: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x14)); /* 0x140F30C6: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + eax; /* 0x140F30C9: add dword ptr [ebp - 8], eax */
    _flag_k = FK_ADD;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x140F30CC: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F30FF; /* 0x140F30CF: je 0x140f30ff */
L_140F30D1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x140F30D1: add edi, ecx */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140F30D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F30F1; /* 0x140F30D5: je 0x140f30f1 */
L_140F30D7:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - eax; /* 0x140F30D7: sub dword ptr [ebp + 0x10], eax */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x18); /* 0x140F30DA: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x140F30DD: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x140F30DF: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + eax; /* 0x140F30E1: add dword ptr [ebp - 4], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x140F30E4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x140F30E6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F30F3; /* 0x140F30E8: je 0x140f30f3 */
L_140F30EA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x140F30EA: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x18) = edx; /* 0x140F30EC: mov dword ptr [ebp + 0x18], edx */
    goto L_140F30F3; /* 0x140F30EF: jmp 0x140f30f3 */
L_140F30F1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x140F30F1: sub ebx, ecx */
    _flag_k = FK_CMP;
L_140F30F3:
    esi = MEM32(esi + 0x58); /* 0x140F30F3: mov esi, dword ptr [esi + 0x58] */
    /* test esi, esi */ /* 0x140F30F6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3102; /* 0x140F30F8: je 0x140f3102 */
L_140F30FA:
    eax = MEM32(ebp + 0x10); /* 0x140F30FA: mov eax, dword ptr [ebp + 0x10] */
    RECOMP_BACKEDGE();
    goto L_140F3090; /* 0x140F30FD: jmp 0x140f3090 */
L_140F30FF:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x140F30FF: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F3102:
    eax = MEM32(ebp + 0x1C); /* 0x140F3102: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + (-0x8)); /* 0x140F3105: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = edi; /* 0x140F3108: mov dword ptr [eax], edi */
    eax = MEM32(ebp + 0x20); /* 0x140F310A: mov eax, dword ptr [ebp + 0x20] */
    MEM32(eax) = ecx; /* 0x140F310D: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F310F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x140F3111: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x140F3113: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140F3115: inc eax */
    _flag_k = FK_INC;
L_140F3116:
    edi = POP32_VAL(esp); /* 0x140F3116: pop edi */
    esi = POP32_VAL(esp); /* 0x140F3117: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F3118: pop ebx */
    esp = ebp; /* 0x140F3119: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F311B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x140F311C: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_140F3130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3130u);

L_140F3130:
    edi = edi; /* 0x140F3130: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3132: push ebp */
    ebp = esp; /* 0x140F3133: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140F3135: push ecx */
    PUSH32(esp, ebx); /* 0x140F3136: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x140F3137: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x140F313A: push esi */
    PUSH32(esp, edi); /* 0x140F313B: push edi */
    esi = ecx; /* 0x140F313C: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140F313E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x1C), edi */ /* 0x140F3140: cmp dword ptr [esi + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F316A; /* 0x140F3143: je 0x140f316a */
L_140F3145:
    ecx = MEM32(esi + 0x1C); /* 0x140F3145: mov ecx, dword ptr [esi + 0x1c] */
    eax = MEM32(ecx); /* 0x140F3148: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x140F314A: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x140F314D: push edx */
    PUSH32(esp, ebx); /* 0x140F314E: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140F314F: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x140F3152: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F3155: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F31C1; /* 0x140F3157: js 0x140f31c1 */
L_140F3159:
    edi = MEM32(ebp + (-0x4)); /* 0x140F3159: mov edi, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0x8); /* 0x140F315C: mov edx, dword ptr [ebp + 8] */
    eax = edi; /* 0x140F315F: mov eax, edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x140F3161: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x140F3161: shl eax, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x140F3164: sub edx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x140F3166: add ebx, eax */
    _flag_k = FK_ADD;
    goto L_140F316D; /* 0x140F3168: jmp 0x140f316d */
L_140F316A:
    edx = MEM32(ebp + 0x8); /* 0x140F316A: mov edx, dword ptr [ebp + 8] */
L_140F316D:
    esi = MEM32(esi + 0x8); /* 0x140F316D: mov esi, dword ptr [esi + 8] */
    MEM32(ebp + 0x8) = edx; /* 0x140F3170: mov dword ptr [ebp + 8], edx */
    /* test esi, esi */ /* 0x140F3173: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F31BA; /* 0x140F3175: je 0x140f31ba */
L_140F3177:
    esi = MEM32(esi + 0x50); /* 0x140F3177: mov esi, dword ptr [esi + 0x50] */
    /* test esi, esi */ /* 0x140F317A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F31BA; /* 0x140F317C: je 0x140f31ba */
L_140F317E:
    edi = edi; /* 0x140F317E: mov edi, edi */
L_140F3180:
    /* test MEM8(esi + 0x64), 4 */ /* 0x140F3180: test byte ptr [esi + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F31B3; /* 0x140F3184: je 0x140f31b3 */
L_140F3186:
    /* cmp MEM32(esi + 0x48), 0 */ /* 0x140F3186: cmp dword ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F31B3; /* 0x140F318A: je 0x140f31b3 */
L_140F318C:
    ecx = MEM32(esi + 0x48); /* 0x140F318C: mov ecx, dword ptr [esi + 0x48] */
    eax = MEM32(ecx); /* 0x140F318F: mov eax, dword ptr [ecx] */
    ecx = ebp + (-0x4); /* 0x140F3191: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x140F3194: push ecx */
    ecx = MEM32(esi + 0x48); /* 0x140F3195: mov ecx, dword ptr [esi + 0x48] */
    PUSH32(esp, ebx); /* 0x140F3198: push ebx */
    PUSH32(esp, edx); /* 0x140F3199: push edx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x140F319A: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F319D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F31C1; /* 0x140F319F: js 0x140f31c1 */
L_140F31A1:
    eax = MEM32(ebp + (-0x4)); /* 0x140F31A1: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0x8); /* 0x140F31A4: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x140F31A7: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x140F31A9: add edi, eax */
    _flag_k = FK_ADD;
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x140F31AB: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x140F31AB: shl eax, 4 */
    MEM32(ebp + 0x8) = edx; /* 0x140F31AE: mov dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x140F31B1: add ebx, eax */
    _flag_k = FK_ADD;
L_140F31B3:
    esi = MEM32(esi + 0x58); /* 0x140F31B3: mov esi, dword ptr [esi + 0x58] */
    /* test esi, esi */ /* 0x140F31B6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F3180; /* 0x140F31B8: jne 0x140f3180 */
L_140F31BA:
    eax = MEM32(ebp + 0x10); /* 0x140F31BA: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = edi; /* 0x140F31BD: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F31BF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F31C1:
    edi = POP32_VAL(esp); /* 0x140F31C1: pop edi */
    esi = POP32_VAL(esp); /* 0x140F31C2: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F31C3: pop ebx */
    esp = ebp; /* 0x140F31C4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F31C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F31C7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140F31D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F31D0u);

L_140F31D0:
    edi = edi; /* 0x140F31D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F31D2: push ebp */
    ebp = esp; /* 0x140F31D3: mov ebp, esp */
    eax = MEM32(ecx + 0x18); /* 0x140F31D5: mov eax, dword ptr [ecx + 0x18] */
    /* cmp eax, 3 */ /* 0x140F31D8: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140F31E6; /* 0x140F31DB: jae 0x140f31e6 */
L_140F31DD:
    edx = MEM32(eax * 4 + 0x141F0504); /* 0x140F31DD: mov edx, dword ptr [eax*4 + 0x141f0504] */
    goto L_140F31EB; /* 0x140F31E4: jmp 0x140f31eb */
L_140F31E6:
    edx = 0x140414D4u; /* 0x140F31E6: mov edx, 0x140414d4 */
L_140F31EB:
    eax = MEM32(ecx + 0x8); /* 0x140F31EB: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x140F31EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F31F7; /* 0x140F31F0: je 0x140f31f7 */
L_140F31F2:
    eax = MEM32(eax + 0xC); /* 0x140F31F2: mov eax, dword ptr [eax + 0xc] */
    goto L_140F31FC; /* 0x140F31F5: jmp 0x140f31fc */
L_140F31F7:
    eax = 0x140414E0u; /* 0x140F31F7: mov eax, 0x140414e0 */
L_140F31FC:
    PUSH32(esp, eax); /* 0x140F31FC: push eax */
    PUSH32(esp, edx); /* 0x140F31FD: push edx */
    PUSH32(esp, 0x140341D4u); /* 0x140F31FE: push 0x140341d4 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140F3203: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140F3206: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_140683B0); /* 0x140F3209: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x140F320E: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x140F3211: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F3212: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F3220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3220u);

L_140F3220:
    edi = edi; /* 0x140F3220: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3222: push ebp */
    ebp = esp; /* 0x140F3223: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x140F3225: sub esp, 8 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ecx + 0x8), 0 */ /* 0x140F3228: cmp dword ptr [ecx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x140F322C: push ebx */
    PUSH32(esp, esi); /* 0x140F322D: push esi */
    PUSH32(esp, edi); /* 0x140F322E: push edi */
    edi = MEM32(ebp + 0x18); /* 0x140F322F: mov edi, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x140F3232: mov dword ptr [ebp - 4], ecx */
    ebx = 1; /* 0x140F3235: mov ebx, 1 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F32EE; /* 0x140F323A: je 0x140f32ee */
L_140F3240:
    /* test edi, edi */ /* 0x140F3240: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F324A; /* 0x140F3242: je 0x140f324a */
L_140F3244:
    MEM32(edi) = 0; /* 0x140F3244: mov dword ptr [edi], 0 */
L_140F324A:
    eax = MEM32(ecx + 0x8); /* 0x140F324A: mov eax, dword ptr [ecx + 8] */
    esi = MEM32(eax + 0x50); /* 0x140F324D: mov esi, dword ptr [eax + 0x50] */
    /* test esi, esi */ /* 0x140F3250: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F32EE; /* 0x140F3252: je 0x140f32ee */
L_140F3258:
    eax = MEM32(ebp + 0x10); /* 0x140F3258: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x140F325B: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x140F325E: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x140F3261: mov dword ptr [ebp - 8], eax */
L_140F3264:
    /* test eax, eax */ /* 0x140F3264: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F326E; /* 0x140F3266: je 0x140f326e */
L_140F3268:
    /* test MEM8(esi + 0x64), 4 */ /* 0x140F3268: test byte ptr [esi + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F32D7; /* 0x140F326C: je 0x140f32d7 */
L_140F326E:
    eax = MEM32(ebp + 0xC); /* 0x140F326E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(esi + 0x4), eax */ /* 0x140F3271: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F32C8; /* 0x140F3274: jne 0x140f32c8 */
L_140F3276:
    edi = MEM32(ebp + 0x8); /* 0x140F3276: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM8(edi), 0 */ /* 0x140F3279: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi + 0x8); /* 0x140F327C: mov eax, dword ptr [esi + 8] */
    edi = MEM32(ebp + 0x18); /* 0x140F327F: mov edi, dword ptr [ebp + 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F3289; /* 0x140F3282: jne 0x140f3289 */
L_140F3284:
    /* cmp MEM8(eax), 0 */ /* 0x140F3284: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_140F3291; /* 0x140F3287: jmp 0x140f3291 */
L_140F3289:
    /* cmp MEM8(eax), 0 */ /* 0x140F3289: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F32C8; /* 0x140F328C: je 0x140f32c8 */
L_140F328E:
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x140F328E: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_140F3291:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) ? 1 : 0); /* 0x140F3291: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x140F3294: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F32C8; /* 0x140F3296: je 0x140f32c8 */
L_140F3298:
    MEM32(edx) = esi; /* 0x140F3298: mov dword ptr [edx], esi */
    edx = esi + 0x5C; /* 0x140F329A: lea edx, [esi + 0x5c] */
    MEM32(edx) = 0; /* 0x140F329D: mov dword ptr [edx], 0 */
    /* cmp MEM32(ecx + 0x1C), 0 */ /* 0x140F32A3: cmp dword ptr [ecx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = edx; /* 0x140F32A7: mov dword ptr [ebp + 0x14], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F32C0; /* 0x140F32AA: je 0x140f32c0 */
L_140F32AC:
    /* test edi, edi */ /* 0x140F32AC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F32C0; /* 0x140F32AE: je 0x140f32c0 */
L_140F32B0:
    ecx = MEM32(ecx + 0x1C); /* 0x140F32B0: mov ecx, dword ptr [ecx + 0x1c] */
    eax = MEM32(ecx); /* 0x140F32B3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140F32B5: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + eax; /* 0x140F32B8: add dword ptr [edi], eax */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x14); /* 0x140F32BA: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + (-0x4)); /* 0x140F32BD: mov ecx, dword ptr [ebp - 4] */
L_140F32C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x140F32C0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + 0x10), 2 */ /* 0x140F32C2: test byte ptr [ebp + 0x10], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F32E3; /* 0x140F32C6: je 0x140f32e3 */
L_140F32C8:
    /* test MEM8(esi + 0x64), 4 */ /* 0x140F32C8: test byte ptr [esi + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F32D7; /* 0x140F32CC: je 0x140f32d7 */
L_140F32CE:
    /* test edi, edi */ /* 0x140F32CE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F32D7; /* 0x140F32D0: je 0x140f32d7 */
L_140F32D2:
    eax = MEM32(esi + 0x34); /* 0x140F32D2: mov eax, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + eax; /* 0x140F32D5: add dword ptr [edi], eax */
    _flag_k = FK_ADD;
L_140F32D7:
    esi = MEM32(esi + 0x58); /* 0x140F32D7: mov esi, dword ptr [esi + 0x58] */
    /* test esi, esi */ /* 0x140F32DA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F32F1; /* 0x140F32DC: je 0x140f32f1 */
L_140F32DE:
    eax = MEM32(ebp + (-0x8)); /* 0x140F32DE: mov eax, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_140F3264; /* 0x140F32E1: jmp 0x140f3264 */
L_140F32E3:
    edi = POP32_VAL(esp); /* 0x140F32E3: pop edi */
    esi = POP32_VAL(esp); /* 0x140F32E4: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F32E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140F32E7: pop ebx */
    esp = ebp; /* 0x140F32E8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F32EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x140F32EB: ret 0x14 */
L_140F32EE:
    edx = MEM32(ebp + 0x14); /* 0x140F32EE: mov edx, dword ptr [ebp + 0x14] */
L_140F32F1:
    /* cmp MEM32(ecx + 0x1C), 0 */ /* 0x140F32F1: cmp dword ptr [ecx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F331D; /* 0x140F32F5: je 0x140f331d */
L_140F32F7:
    /* cmp ebx, 1 */ /* 0x140F32F7: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F3302; /* 0x140F32FA: je 0x140f3302 */
L_140F32FC:
    /* test MEM8(ebp + 0x10), 4 */ /* 0x140F32FC: test byte ptr [ebp + 0x10], 4 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F331D; /* 0x140F3300: jne 0x140f331d */
L_140F3302:
    ecx = MEM32(ecx + 0x1C); /* 0x140F3302: mov ecx, dword ptr [ecx + 0x1c] */
    eax = MEM32(ecx); /* 0x140F3305: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x140F3307: push edi */
    PUSH32(esp, edx); /* 0x140F3308: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x140F3309: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140F330C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140F330F: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x140F3312: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F3315: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F331F; /* 0x140F3317: js 0x140f331f */
L_140F3319:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F331D; /* 0x140F3319: jne 0x140f331d */
L_140F331B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x140F331B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F331D:
    eax = ebx; /* 0x140F331D: mov eax, ebx */
L_140F331F:
    edi = POP32_VAL(esp); /* 0x140F331F: pop edi */
    esi = POP32_VAL(esp); /* 0x140F3320: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F3321: pop ebx */
    esp = ebp; /* 0x140F3322: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F3324: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x140F3325: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_140F3330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3330u);

L_140F3330:
    edi = edi; /* 0x140F3330: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3332: push ebp */
    ebp = esp; /* 0x140F3333: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x140F3335: push ebx */
    PUSH32(esp, esi); /* 0x140F3336: push esi */
    PUSH32(esp, edi); /* 0x140F3337: push edi */
    edi = ecx; /* 0x140F3338: mov edi, ecx */
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x140F333A: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F337A; /* 0x140F333E: je 0x140f337a */
L_140F3340:
    ecx = MEM32(edi + 0x1C); /* 0x140F3340: mov ecx, dword ptr [edi + 0x1c] */
    eax = MEM32(ecx); /* 0x140F3343: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140F3345: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x140F3348: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, eax */ /* 0x140F334B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140F3376; /* 0x140F334D: jae 0x140f3376 */
L_140F334F:
    ebx = MEM32(ebp + 0x8); /* 0x140F334F: mov ebx, dword ptr [ebp + 8] */
    eax = 7; /* 0x140F3352: mov eax, 7 */
    ecx = 0x140414ECu; /* 0x140F3357: mov ecx, 0x140414ec */
    RECOMP_CALL(sub_14085AB0); /* 0x140F335C: call 0x14085ab0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F3361: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F33B9; /* 0x140F3363: js 0x140f33b9 */
L_140F3365:
    ecx = MEM32(edi + 0x1C); /* 0x140F3365: mov ecx, dword ptr [edi + 0x1c] */
    eax = MEM32(ecx); /* 0x140F3368: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x140F336A: push esi */
    PUSH32(esp, ebx); /* 0x140F336B: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x140F336C: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x140F336F: pop edi */
    esi = POP32_VAL(esp); /* 0x140F3370: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F3371: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F3372: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F3373: ret 8 */
L_140F3376:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x140F3376: sub esi, eax */
    _flag_k = FK_CMP;
    goto L_140F337D; /* 0x140F3378: jmp 0x140f337d */
L_140F337A:
    esi = MEM32(ebp + 0xC); /* 0x140F337A: mov esi, dword ptr [ebp + 0xc] */
L_140F337D:
    edi = MEM32(edi + 0x8); /* 0x140F337D: mov edi, dword ptr [edi + 8] */
    MEM32(ebp + 0xC) = esi; /* 0x140F3380: mov dword ptr [ebp + 0xc], esi */
    /* test edi, edi */ /* 0x140F3383: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F33B4; /* 0x140F3385: je 0x140f33b4 */
L_140F3387:
    edi = MEM32(edi + 0x50); /* 0x140F3387: mov edi, dword ptr [edi + 0x50] */
    /* test edi, edi */ /* 0x140F338A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F33B4; /* 0x140F338C: je 0x140f33b4 */
L_140F338E:
    edi = edi; /* 0x140F338E: mov edi, edi */
L_140F3390:
    /* test MEM8(edi + 0x64), 4 */ /* 0x140F3390: test byte ptr [edi + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(edi + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F33AD; /* 0x140F3394: je 0x140f33ad */
L_140F3396:
    /* cmp MEM32(edi + 0x48), 0 */ /* 0x140F3396: cmp dword ptr [edi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F33AD; /* 0x140F339A: je 0x140f33ad */
L_140F339C:
    ecx = MEM32(edi + 0x48); /* 0x140F339C: mov ecx, dword ptr [edi + 0x48] */
    eax = MEM32(ecx); /* 0x140F339F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140F33A1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x140F33A4: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_140F33C0; /* 0x140F33A6: jb 0x140f33c0 */
L_140F33A8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x140F33A8: sub esi, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = esi; /* 0x140F33AA: mov dword ptr [ebp + 0xc], esi */
L_140F33AD:
    edi = MEM32(edi + 0x58); /* 0x140F33AD: mov edi, dword ptr [edi + 0x58] */
    /* test edi, edi */ /* 0x140F33B0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F3390; /* 0x140F33B2: jne 0x140f3390 */
L_140F33B4:
    eax = 1; /* 0x140F33B4: mov eax, 1 */
L_140F33B9:
    edi = POP32_VAL(esp); /* 0x140F33B9: pop edi */
    esi = POP32_VAL(esp); /* 0x140F33BA: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F33BB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F33BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F33BD: ret 8 */
L_140F33C0:
    esi = MEM32(ebp + 0x8); /* 0x140F33C0: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x2Eu); /* 0x140F33C3: push 0x2e */
    RECOMP_CALL(sub_14085B30); /* 0x140F33C5: call 0x14085b30 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F33CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F33B9; /* 0x140F33CC: js 0x140f33b9 */
L_140F33CE:
    ecx = MEM32(edi + 0x8); /* 0x140F33CE: mov ecx, dword ptr [edi + 8] */
    eax = ecx; /* 0x140F33D1: mov eax, ecx */
    ebx = eax + 0x1; /* 0x140F33D3: lea ebx, [eax + 1] */
L_140F33D6:
    SET_LO8(edx, MEM8(eax)); /* 0x140F33D6: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140F33D8: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x140F33D9: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F33D6; /* 0x140F33DB: jne 0x140f33d6 */
L_140F33DD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x140F33DD: sub eax, ebx */
    _flag_k = FK_CMP;
    ebx = esi; /* 0x140F33DF: mov ebx, esi */
    RECOMP_CALL(sub_14085AB0); /* 0x140F33E1: call 0x14085ab0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F33E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F33B9; /* 0x140F33E8: js 0x140f33b9 */
L_140F33EA:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140F33EA: push dword ptr [ebp + 0xc] */
    ecx = MEM32(edi + 0x48); /* 0x140F33ED: mov ecx, dword ptr [edi + 0x48] */
    eax = MEM32(ecx); /* 0x140F33F0: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x140F33F2: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x140F33F3: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x140F33F6: pop edi */
    esi = POP32_VAL(esp); /* 0x140F33F7: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F33F8: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F33F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F33FA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F3410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3410u);

L_140F3410:
    edi = edi; /* 0x140F3410: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3412: push ebp */
    ebp = esp; /* 0x140F3413: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140F3415: push esi */
    PUSH32(esp, edi); /* 0x140F3416: push edi */
    edi = MEM32(ebp + 0x8); /* 0x140F3417: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x140F341A: mov esi, ecx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F341C: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x140F341E: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi) = 0x4000u; /* 0x140F3422: mov dword ptr [edi], 0x4000 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F3447; /* 0x140F3428: je 0x140f3447 */
L_140F342A:
    ecx = MEM32(esi + 0x1C); /* 0x140F342A: mov ecx, dword ptr [esi + 0x1c] */
    eax = MEM32(ecx); /* 0x140F342D: mov eax, dword ptr [ecx] */
    edx = ebp + 0x8; /* 0x140F342F: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x140F3432: push edx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x140F3433: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x140F3436: mov eax, dword ptr [eax] */
    ecx = MEM32(esi + 0x1C); /* 0x140F3438: mov ecx, dword ptr [esi + 0x1c] */
    MEM32(edi) = eax; /* 0x140F343B: mov dword ptr [edi], eax */
    eax = MEM32(ecx); /* 0x140F343D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140F343F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F3442: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F3444: setne al */
L_140F3447:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x140F3447: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F3451; /* 0x140F344B: je 0x140f3451 */
L_140F344D:
    _flag_a = (uint32_t)((MEM8(edi + 0x1) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(edi + 0x1) | 0x20u)) << 24;
    MEM8(edi + 0x1) = (uint8_t)(MEM8(edi + 0x1) | 0x20u); /* 0x140F344D: or byte ptr [edi + 1], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_140F3451:
    esi = MEM32(esi + 0x8); /* 0x140F3451: mov esi, dword ptr [esi + 8] */
    /* test esi, esi */ /* 0x140F3454: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F34B1; /* 0x140F3456: je 0x140f34b1 */
L_140F3458:
    esi = MEM32(esi + 0x50); /* 0x140F3458: mov esi, dword ptr [esi + 0x50] */
    /* test LO8(eax), LO8(eax) */ /* 0x140F345B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F3465; /* 0x140F345D: jne 0x140f3465 */
L_140F345F:
    _flag_a = (uint32_t)((MEM32(edi) | 0x1E2u)); _flag_b = (uint32_t)((MEM32(edi) | 0x1E2u));
    MEM32(edi) = MEM32(edi) | 0x1E2u; /* 0x140F345F: or dword ptr [edi], 0x1e2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F3465:
    /* test esi, esi */ /* 0x140F3465: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F34A7; /* 0x140F3467: je 0x140f34a7 */
L_140F3469:
    esp = esp; /* 0x140F3469: lea esp, [esp] */
L_140F3470:
    /* test MEM8(esi + 0x64), 4 */ /* 0x140F3470: test byte ptr [esi + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F34A0; /* 0x140F3474: je 0x140f34a0 */
L_140F3476:
    /* cmp MEM32(esi + 0x48), 0 */ /* 0x140F3476: cmp dword ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F34A0; /* 0x140F347A: je 0x140f34a0 */
L_140F347C:
    ecx = MEM32(esi + 0x48); /* 0x140F347C: mov ecx, dword ptr [esi + 0x48] */
    eax = MEM32(ecx); /* 0x140F347F: mov eax, dword ptr [ecx] */
    edx = ebp + 0x8; /* 0x140F3481: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x140F3484: push edx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x140F3485: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x140F3488: mov eax, dword ptr [ebp + 8] */
    ecx = eax; /* 0x140F348B: mov ecx, eax */
    _flag_a = (uint32_t)((ecx | 0x3CFFE000u)); _flag_b = (uint32_t)((ecx | 0x3CFFE000u));
    ecx = ecx | 0x3CFFE000u; /* 0x140F348D: or ecx, 0x3cffe000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    ecx = ecx & MEM32(edi); /* 0x140F3493: and ecx, dword ptr [edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3CFFE000u);
    eax = eax & 0x3CFFE000u; /* 0x140F3495: and eax, 0x3cffe000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x140F349A: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = ecx; /* 0x140F349C: mov dword ptr [edi], ecx */
    SET_LO8(eax, 1); /* 0x140F349E: mov al, 1 */
L_140F34A0:
    esi = MEM32(esi + 0x58); /* 0x140F34A0: mov esi, dword ptr [esi + 0x58] */
    /* test esi, esi */ /* 0x140F34A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F3470; /* 0x140F34A5: jne 0x140f3470 */
L_140F34A7:
    /* test LO8(eax), LO8(eax) */ /* 0x140F34A7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F34B1; /* 0x140F34A9: jne 0x140f34b1 */
L_140F34AB:
    MEM32(edi) = 0x40u; /* 0x140F34AB: mov dword ptr [edi], 0x40 */
L_140F34B1:
    eax = edi; /* 0x140F34B1: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x140F34B3: pop edi */
    esi = POP32_VAL(esp); /* 0x140F34B4: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F34B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F34B6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F34C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F34C0u);

L_140F34C0:
    edi = edi; /* 0x140F34C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F34C2: push ebp */
    ebp = esp; /* 0x140F34C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x140F34C5: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x140F34C8: push ecx */
    edx = MEM32(ebp + 0x8); /* 0x140F34C9: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x140F34CC: push ebx */
    PUSH32(esp, esi); /* 0x140F34CD: push esi */
    PUSH32(esp, edi); /* 0x140F34CE: push edi */
    edi = ecx; /* 0x140F34CF: mov edi, ecx */
    /* test LO8(edx), 1 */ /* 0x140F34D1: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F34E1; /* 0x140F34D4: jne 0x140f34e1 */
L_140F34D6:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F34D6: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x140F34D8: pop edi */
    esi = POP32_VAL(esp); /* 0x140F34D9: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F34DA: pop ebx */
    esp = ebp; /* 0x140F34DB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F34DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F34DE: ret 8 */
L_140F34E1:
    esi = MEM32(ebp + 0xC); /* 0x140F34E1: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x140F34E4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3610; /* 0x140F34E6: je 0x140f3610 */
L_140F34EC:
    eax = MEM32(edi + 0x4); /* 0x140F34EC: mov eax, dword ptr [edi + 4] */
    MEM32(esi) = eax; /* 0x140F34EF: mov dword ptr [esi], eax */
    eax = edx; /* 0x140F34F1: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x140F34F3: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = 0x10u; /* 0x140F34F6: mov dword ptr [esi + 4], 0x10 */
    MEM32(esi + 0x8) = 0x10u; /* 0x140F34FD: mov dword ptr [esi + 8], 0x10 */
    MEM32(esi + 0xC) = edi; /* 0x140F3504: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = 0; /* 0x140F3507: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x18) = 0; /* 0x140F350E: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x140F3515: mov dword ptr [esi + 0x1c], 0 */
    MEM32(esi + 0x20) = 0; /* 0x140F351C: mov dword ptr [esi + 0x20], 0 */
    MEM32(esi + 0x24) = 0; /* 0x140F3523: mov dword ptr [esi + 0x24], 0 */
    MEM32(esi + 0x28) = 0; /* 0x140F352A: mov dword ptr [esi + 0x28], 0 */
    MEM32(esi + 0x2C) = 0; /* 0x140F3531: mov dword ptr [esi + 0x2c], 0 */
    MEM32(esi + 0x30) = 1; /* 0x140F3538: mov dword ptr [esi + 0x30], 1 */
    MEM32(esi + 0x34) = 0; /* 0x140F353F: mov dword ptr [esi + 0x34], 0 */
    MEM32(esi + 0x38) = 0; /* 0x140F3546: mov dword ptr [esi + 0x38], 0 */
    MEM32(esi + 0x3C) = 0; /* 0x140F354D: mov dword ptr [esi + 0x3c], 0 */
    MEM32(esi + 0x40) = 0; /* 0x140F3554: mov dword ptr [esi + 0x40], 0 */
    MEM32(esi + 0x44) = 0; /* 0x140F355B: mov dword ptr [esi + 0x44], 0 */
    MEM32(esp + 0xC) = eax; /* 0x140F3562: mov dword ptr [esp + 0xc], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F3571; /* 0x140F3566: jne 0x140f3571 */
L_140F3568:
    MEM32(esi + 0x48) = 0x10u; /* 0x140F3568: mov dword ptr [esi + 0x48], 0x10 */
    goto L_140F3578; /* 0x140F356F: jmp 0x140f3578 */
L_140F3571:
    MEM32(esi + 0x48) = 0; /* 0x140F3571: mov dword ptr [esi + 0x48], 0 */
L_140F3578:
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) & 0xFCu); /* 0x140F3578: and byte ptr [esi + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = esi + 0x58; /* 0x140F357C: lea eax, [esi + 0x58] */
    MEM32(esi + 0x54) = 0; /* 0x140F357F: mov dword ptr [esi + 0x54], 0 */
    ecx = MEM32(edi + 0x1C); /* 0x140F3586: mov ecx, dword ptr [edi + 0x1c] */
    /* test ecx, ecx */ /* 0x140F3589: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F35A0; /* 0x140F358B: je 0x140f35a0 */
L_140F358D:
    PUSH32(esp, edx); /* 0x140F358D: push edx */
    eax = esi; /* 0x140F358E: mov eax, esi */
    RECOMP_CALL(sub_140F1A60); /* 0x140F3590: call 0x140f1a60 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F3595: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F34D6; /* 0x140F3597: je 0x140f34d6 */
L_140F359D:
    edx = MEM32(ebp + 0x8); /* 0x140F359D: mov edx, dword ptr [ebp + 8] */
L_140F35A0:
    edi = MEM32(edi + 0x8); /* 0x140F35A0: mov edi, dword ptr [edi + 8] */
    /* test edi, edi */ /* 0x140F35A3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F35E0; /* 0x140F35A5: je 0x140f35e0 */
L_140F35A7:
    edi = MEM32(edi + 0x50); /* 0x140F35A7: mov edi, dword ptr [edi + 0x50] */
    /* test edi, edi */ /* 0x140F35AA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F35E0; /* 0x140F35AC: je 0x140f35e0 */
L_140F35AE:
    edi = edi; /* 0x140F35AE: mov edi, edi */
L_140F35B0:
    /* test MEM8(edi + 0x64), 4 */ /* 0x140F35B0: test byte ptr [edi + 0x64], 4 */
    _flag_a = (uint32_t)(MEM8(edi + 0x64)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F35D4; /* 0x140F35B4: je 0x140f35d4 */
L_140F35B6:
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x34) = MEM32(esi + 0x34) + 1; /* 0x140F35B6: inc dword ptr [esi + 0x34] */
    _flag_k = FK_INC;
    ecx = MEM32(edi + 0x48); /* 0x140F35B9: mov ecx, dword ptr [edi + 0x48] */
    /* test ecx, ecx */ /* 0x140F35BC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F34D6; /* 0x140F35BE: je 0x140f34d6 */
L_140F35C4:
    PUSH32(esp, edx); /* 0x140F35C4: push edx */
    eax = esi; /* 0x140F35C5: mov eax, esi */
    RECOMP_CALL(sub_140F1A60); /* 0x140F35C7: call 0x140f1a60 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F35CC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F34D6; /* 0x140F35CE: je 0x140f34d6 */
L_140F35D4:
    edi = MEM32(edi + 0x58); /* 0x140F35D4: mov edi, dword ptr [edi + 0x58] */
    /* test edi, edi */ /* 0x140F35D7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F35E0; /* 0x140F35D9: je 0x140f35e0 */
L_140F35DB:
    edx = MEM32(ebp + 0x8); /* 0x140F35DB: mov edx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_140F35B0; /* 0x140F35DE: jmp 0x140f35b0 */
L_140F35E0:
    /* cmp MEM32(esp + 0xC), 0 */ /* 0x140F35E0: cmp dword ptr [esp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F35FB; /* 0x140F35E5: je 0x140f35fb */
L_140F35E7:
    eax = MEM32(esi + 0x54); /* 0x140F35E7: mov eax, dword ptr [esi + 0x54] */
    ecx = MEM32(esi + 0x48); /* 0x140F35EA: mov ecx, dword ptr [esi + 0x48] */
    edx = ecx + eax + (-0x1); /* 0x140F35ED: lea edx, [ecx + eax - 1] */
    eax = ecx + (-0x1); /* 0x140F35F1: lea eax, [ecx - 1] */
    eax = ~eax; /* 0x140F35F4: not eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x140F35F6: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x54) = edx; /* 0x140F35F8: mov dword ptr [esi + 0x54], edx */
L_140F35FB:
    ecx = MEM32(esi + 0x54); /* 0x140F35FB: mov ecx, dword ptr [esi + 0x54] */
    eax = MEM32(esi + 0x48); /* 0x140F35FE: mov eax, dword ptr [esi + 0x48] */
    MEM32(esi + 0x4C) = ecx; /* 0x140F3601: mov dword ptr [esi + 0x4c], ecx */
    ecx = eax + ecx + (-0x1); /* 0x140F3604: lea ecx, [eax + ecx - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140F3608: dec eax */
    _flag_k = FK_DEC;
    eax = ~eax; /* 0x140F3609: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x140F360B: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x50) = ecx; /* 0x140F360D: mov dword ptr [esi + 0x50], ecx */
L_140F3610:
    edi = POP32_VAL(esp); /* 0x140F3610: pop edi */
    esi = POP32_VAL(esp); /* 0x140F3611: pop esi */
    SET_LO8(eax, 1); /* 0x140F3612: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x140F3614: pop ebx */
    esp = ebp; /* 0x140F3615: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F3617: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F3618: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F3620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3620u);

L_140F3620:
    edi = edi; /* 0x140F3620: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3622: push ebp */
    ebp = esp; /* 0x140F3623: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x140F3625: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x140F3628: push ebx */
    ebx = ecx; /* 0x140F3629: mov ebx, ecx */
    /* cmp ebx, edx */ /* 0x140F362B: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F3636; /* 0x140F362D: jne 0x140f3636 */
L_140F362F:
    SET_LO8(eax, 1); /* 0x140F362F: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x140F3631: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F3632: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F3633: ret 4 */
L_140F3636:
    eax = MEM32(edx + 0x4); /* 0x140F3636: mov eax, dword ptr [edx + 4] */
    /* cmp eax, MEM32(ebx + 0x4) */ /* 0x140F3639: cmp eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F3645; /* 0x140F363C: je 0x140f3645 */
L_140F363E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F363E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x140F3640: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F3641: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F3642: ret 4 */
L_140F3645:
    ecx = MEM32(ebx + 0x1C); /* 0x140F3645: mov ecx, dword ptr [ebx + 0x1c] */
    PUSH32(esp, esi); /* 0x140F3648: push esi */
    esi = MEM32(edx + 0x1C); /* 0x140F3649: mov esi, dword ptr [edx + 0x1c] */
    /* cmp ecx, esi */ /* 0x140F364C: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F366D; /* 0x140F364E: je 0x140f366d */
L_140F3650:
    /* test ecx, ecx */ /* 0x140F3650: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3662; /* 0x140F3652: je 0x140f3662 */
L_140F3654:
    /* test esi, esi */ /* 0x140F3654: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3662; /* 0x140F3656: je 0x140f3662 */
L_140F3658:
    eax = MEM32(ecx); /* 0x140F3658: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x140F365A: push esi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x140F365B: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F365E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F366A; /* 0x140F3660: jne 0x140f366a */
L_140F3662:
    esi = POP32_VAL(esp); /* 0x140F3662: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F3663: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x140F3665: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F3666: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F3667: ret 4 */
L_140F366A:
    edx = MEM32(ebp + 0x8); /* 0x140F366A: mov edx, dword ptr [ebp + 8] */
L_140F366D:
    esi = MEM32(edx + 0x20); /* 0x140F366D: mov esi, dword ptr [edx + 0x20] */
    PUSH32(esp, edi); /* 0x140F3670: push edi */
    edi = MEM32(ebx + 0x20); /* 0x140F3671: mov edi, dword ptr [ebx + 0x20] */
L_140F3674:
    /* test edi, edi */ /* 0x140F3674: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F369E; /* 0x140F3676: je 0x140f369e */
L_140F3678:
    /* test esi, esi */ /* 0x140F3678: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F36B7; /* 0x140F367A: je 0x140f36b7 */
L_140F367C:
    edx = MEM32(esi); /* 0x140F367C: mov edx, dword ptr [esi] */
    ecx = MEM32(edi); /* 0x140F367E: mov ecx, dword ptr [edi] */
    /* cmp ecx, edx */ /* 0x140F3680: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F3696; /* 0x140F3682: je 0x140f3696 */
L_140F3684:
    /* test ecx, ecx */ /* 0x140F3684: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F36B7; /* 0x140F3686: je 0x140f36b7 */
L_140F3688:
    /* test edx, edx */ /* 0x140F3688: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F36B7; /* 0x140F368A: je 0x140f36b7 */
L_140F368C:
    eax = MEM32(ecx); /* 0x140F368C: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x140F368E: push edx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x140F368F: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F3692: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F36B7; /* 0x140F3694: je 0x140f36b7 */
L_140F3696:
    edi = MEM32(edi + 0x4); /* 0x140F3696: mov edi, dword ptr [edi + 4] */
    esi = MEM32(esi + 0x4); /* 0x140F3699: mov esi, dword ptr [esi + 4] */
    RECOMP_BACKEDGE();
    goto L_140F3674; /* 0x140F369C: jmp 0x140f3674 */
L_140F369E:
    /* test esi, esi */ /* 0x140F369E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F36B7; /* 0x140F36A0: jne 0x140f36b7 */
L_140F36A2:
    ecx = MEM32(ebx + 0x8); /* 0x140F36A2: mov ecx, dword ptr [ebx + 8] */
    edx = MEM32(ebp + 0x8); /* 0x140F36A5: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F36A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(edx + 0x8) */ /* 0x140F36AA: cmp ecx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x140F36AD: pop edi */
    esi = POP32_VAL(esp); /* 0x140F36AE: pop esi */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F36AF: sete al */
    ebx = POP32_VAL(esp); /* 0x140F36B2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F36B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F36B4: ret 4 */
L_140F36B7:
    edi = POP32_VAL(esp); /* 0x140F36B7: pop edi */
    esi = POP32_VAL(esp); /* 0x140F36B8: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F36B9: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x140F36BB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F36BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F36BD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F36D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F36D0u);

L_140F36D0:
    edx = MEM32(eax + 0x1C); /* 0x140F36D0: mov edx, dword ptr [eax + 0x1c] */
    /* cmp ecx, edx */ /* 0x140F36D3: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F36F8; /* 0x140F36D5: je 0x140f36f8 */
L_140F36D7:
    eax = MEM32(eax + 0x20); /* 0x140F36D7: mov eax, dword ptr [eax + 0x20] */
    /* test eax, eax */ /* 0x140F36DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F36EB; /* 0x140F36DC: je 0x140f36eb */
L_140F36DE:
    edi = edi; /* 0x140F36DE: mov edi, edi */
L_140F36E0:
    /* cmp MEM32(eax), ecx */ /* 0x140F36E0: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F36F8; /* 0x140F36E2: je 0x140f36f8 */
L_140F36E4:
    eax = MEM32(eax + 0x4); /* 0x140F36E4: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x140F36E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F36E0; /* 0x140F36E9: jne 0x140f36e0 */
L_140F36EB:
    /* test edx, edx */ /* 0x140F36EB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F36FB; /* 0x140F36ED: je 0x140f36fb */
L_140F36EF:
    eax = edx; /* 0x140F36EF: mov eax, edx */
    edx = MEM32(eax + 0x1C); /* 0x140F36F1: mov edx, dword ptr [eax + 0x1c] */
    /* cmp ecx, edx */ /* 0x140F36F4: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F36D7; /* 0x140F36F6: jne 0x140f36d7 */
L_140F36F8:
    SET_LO8(eax, 1); /* 0x140F36F8: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F36FA: ret  */
L_140F36FB:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F36FB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F36FD: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F3710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3710u);

L_140F3710:
    edi = edi; /* 0x140F3710: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3712: push ebp */
    ebp = esp; /* 0x140F3713: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140F3715: push ecx */
    eax = MEM32(ecx); /* 0x140F3716: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x140F3718: push 0 */
    edx = ebp + (-0x4); /* 0x140F371A: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x140F371D: push edx */
    PUSH32(esp, 6); /* 0x140F371E: push 6 */
    PUSH32(esp, 4); /* 0x140F3720: push 4 */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x140F3722: push dword ptr [edi + 8] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x140F3725: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F3728: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3732; /* 0x140F372A: je 0x140f3732 */
L_140F372C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F372C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140F372E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F3730: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F3731: ret  */
L_140F3732:
    PUSH32(esp, esi); /* 0x140F3732: push esi */
    esi = MEM32(ebp + (-0x4)); /* 0x140F3733: mov esi, dword ptr [ebp - 4] */
    /* test esi, esi */ /* 0x140F3736: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3783; /* 0x140F3738: je 0x140f3783 */
L_140F373A:
    ebx = ebx; /* 0x140F373A: lea ebx, [ebx] */
L_140F3740:
    eax = MEM32(esi + 0x5C); /* 0x140F3740: mov eax, dword ptr [esi + 0x5c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x140F3743: mov dword ptr [ebp - 4], eax */
    eax = edi; /* 0x140F3746: mov eax, edi */
    ecx = esi; /* 0x140F3748: mov ecx, esi */
    RECOMP_CALL(sub_140E8B20); /* 0x140F374A: call 0x140e8b20 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F374F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F377C; /* 0x140F3751: je 0x140f377c */
L_140F3753:
    /* cmp MEM32(edi + 0x4), 4 */ /* 0x140F3753: cmp dword ptr [edi + 4], 4 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F377C; /* 0x140F3757: jne 0x140f377c */
L_140F3759:
    eax = MEM32(esi + 0x6C); /* 0x140F3759: mov eax, dword ptr [esi + 0x6c] */
    /* test eax, eax */ /* 0x140F375C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F3769; /* 0x140F375E: jne 0x140f3769 */
L_140F3760:
    /* cmp MEM32(edi + 0x6C), eax */ /* 0x140F3760: cmp dword ptr [edi + 0x6c], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x6C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F378A; /* 0x140F3763: je 0x140f378a */
L_140F3765:
    /* test eax, eax */ /* 0x140F3765: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F377C; /* 0x140F3767: je 0x140f377c */
L_140F3769:
    /* cmp MEM32(edi + 0x6C), 0 */ /* 0x140F3769: cmp dword ptr [edi + 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x6C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F377C; /* 0x140F376D: je 0x140f377c */
L_140F376F:
    eax = MEM32(esi + 0x70); /* 0x140F376F: mov eax, dword ptr [esi + 0x70] */
    /* cmp eax, MEM32(edi + 0x70) */ /* 0x140F3772: cmp eax, dword ptr [edi + 0x70] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x70));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F3775: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x140F3778: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F378A; /* 0x140F377A: jne 0x140f378a */
L_140F377C:
    esi = MEM32(ebp + (-0x4)); /* 0x140F377C: mov esi, dword ptr [ebp - 4] */
    /* test esi, esi */ /* 0x140F377F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F3740; /* 0x140F3781: jne 0x140f3740 */
L_140F3783:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F3783: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140F3785: pop esi */
    esp = ebp; /* 0x140F3786: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F3788: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F3789: ret  */
L_140F378A:
    eax = esi; /* 0x140F378A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x140F378C: pop esi */
    esp = ebp; /* 0x140F378D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F378F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F3790: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F37A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F37A0u);

L_140F37A0:
    edi = edi; /* 0x140F37A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F37A2: push ebp */
    ebp = esp; /* 0x140F37A3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140F37A5: push ecx */
    PUSH32(esp, ebx); /* 0x140F37A6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x140F37A7: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x140F37AA: push esi */
    esi = ecx; /* 0x140F37AB: mov esi, ecx */
    ecx = MEM32(esi + 0x1C); /* 0x140F37AD: mov ecx, dword ptr [esi + 0x1c] */
    /* test ecx, ecx */ /* 0x140F37B0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F37C5; /* 0x140F37B2: je 0x140f37c5 */
L_140F37B4:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140F37B4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x140F37B7: push ebx */
    RECOMP_CALL(sub_140F37A0); /* 0x140F37B8: call 0x140f37a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F37BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F3873; /* 0x140F37BF: js 0x140f3873 */
L_140F37C5:
    eax = MEM32(esi + 0x20); /* 0x140F37C5: mov eax, dword ptr [esi + 0x20] */
    PUSH32(esp, edi); /* 0x140F37C8: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x140F37C9: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x140F37CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3870; /* 0x140F37CE: je 0x140f3870 */
L_140F37D4:
    eax = MEM32(eax); /* 0x140F37D4: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x8); /* 0x140F37D6: mov eax, dword ptr [eax + 8] */
    edi = MEM32(eax + 0x50); /* 0x140F37D9: mov edi, dword ptr [eax + 0x50] */
    /* test edi, edi */ /* 0x140F37DC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F385B; /* 0x140F37DE: je 0x140f385b */
L_140F37E4:
    esi = MEM32(edi + 0xAC); /* 0x140F37E4: mov esi, dword ptr [edi + 0xac] */
    /* test esi, esi */ /* 0x140F37EA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F384B; /* 0x140F37EC: je 0x140f384b */
L_140F37EE:
    edi = edi; /* 0x140F37EE: mov edi, edi */
L_140F37F0:
    /* cmp MEM32(esi + 0x4), ebx */ /* 0x140F37F0: cmp dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F3844; /* 0x140F37F3: jne 0x140f3844 */
L_140F37F5:
    eax = MEM32(0x141F3DEC); /* 0x140F37F5: mov eax, dword ptr [0x141f3dec] */
    ebx = MEM32(esi); /* 0x140F37FA: mov ebx, dword ptr [esi] */
    /* test eax, eax */ /* 0x140F37FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140F3804; /* 0x140F37FE: jns 0x140f3804 */
L_140F3800:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F3800: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140F380B; /* 0x140F3802: jmp 0x140f380b */
L_140F3804:
    PUSH32(esp, eax); /* 0x140F3804: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x140F3805: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_140F380B:
    ecx = MEM32(eax + 0x4); /* 0x140F380B: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x140F380E: push 0x10 */
    PUSH32(esp, 0xCu); /* 0x140F3810: push 0xc */
    RECOMP_CALL(sub_141E6491); /* 0x140F3812: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140F3817: mov ecx, eax */
    /* test ecx, ecx */ /* 0x140F3819: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F3824; /* 0x140F381B: jne 0x140f3824 */
L_140F381D:
    eax = 0x8007000Eu; /* 0x140F381D: mov eax, 0x8007000e */
    goto L_140F383D; /* 0x140F3822: jmp 0x140f383d */
L_140F3824:
    eax = MEM32(ebp + 0xC); /* 0x140F3824: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x140F3827: mov dword ptr [ecx + 4], eax */
    MEM32(ecx) = ebx; /* 0x140F382A: mov dword ptr [ecx], ebx */
    eax = MEM32(edi + 0xAC); /* 0x140F382C: mov eax, dword ptr [edi + 0xac] */
    MEM32(ecx + 0x8) = eax; /* 0x140F3832: mov dword ptr [ecx + 8], eax */
    MEM32(edi + 0xAC) = ecx; /* 0x140F3835: mov dword ptr [edi + 0xac], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F383B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F383D:
    /* test eax, eax */ /* 0x140F383D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F3872; /* 0x140F383F: js 0x140f3872 */
L_140F3841:
    ebx = MEM32(ebp + 0x8); /* 0x140F3841: mov ebx, dword ptr [ebp + 8] */
L_140F3844:
    esi = MEM32(esi + 0x8); /* 0x140F3844: mov esi, dword ptr [esi + 8] */
    /* test esi, esi */ /* 0x140F3847: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F37F0; /* 0x140F3849: jne 0x140f37f0 */
L_140F384B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F384B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x140F384D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F3872; /* 0x140F384F: js 0x140f3872 */
L_140F3851:
    edi = MEM32(edi + 0x58); /* 0x140F3851: mov edi, dword ptr [edi + 0x58] */
    ebx = MEM32(ebp + 0x8); /* 0x140F3854: mov ebx, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x140F3857: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F37E4; /* 0x140F3859: jne 0x140f37e4 */
L_140F385B:
    eax = MEM32(ebp + (-0x4)); /* 0x140F385B: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x4); /* 0x140F385E: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x140F3861: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x140F3864: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3870; /* 0x140F3866: je 0x140f3870 */
L_140F3868:
    ebx = MEM32(ebp + 0x8); /* 0x140F3868: mov ebx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_140F37D4; /* 0x140F386B: jmp 0x140f37d4 */
L_140F3870:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F3870: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F3872:
    edi = POP32_VAL(esp); /* 0x140F3872: pop edi */
L_140F3873:
    esi = POP32_VAL(esp); /* 0x140F3873: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F3874: pop ebx */
    esp = ebp; /* 0x140F3875: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F3877: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F3878: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F3880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3880u);

L_140F3880:
    edi = edi; /* 0x140F3880: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3882: push ebp */
    ebp = esp; /* 0x140F3883: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x140F3885: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x140F3886: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x140F3889: push esi */
    esi = ecx; /* 0x140F388A: mov esi, ecx */
    ecx = MEM32(esi + 0x1C); /* 0x140F388C: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, edi); /* 0x140F388F: push edi */
    edi = MEM32(ebp + 0x10); /* 0x140F3890: mov edi, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x140F3893: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F38A5; /* 0x140F3895: je 0x140f38a5 */
L_140F3897:
    PUSH32(esp, edi); /* 0x140F3897: push edi */
    PUSH32(esp, ebx); /* 0x140F3898: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140F3899: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_140F3880); /* 0x140F389C: call 0x140f3880 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F38A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F38F2; /* 0x140F38A3: js 0x140f38f2 */
L_140F38A5:
    esi = MEM32(esi + 0x20); /* 0x140F38A5: mov esi, dword ptr [esi + 0x20] */
    /* test esi, esi */ /* 0x140F38A8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F38F0; /* 0x140F38AA: je 0x140f38f0 */
L_140F38AC:
    edx = MEM32(ebp + 0x8); /* 0x140F38AC: mov edx, dword ptr [ebp + 8] */
    /* nop */ /* 0x140F38AF: nop  */
L_140F38B0:
    eax = MEM32(esi); /* 0x140F38B0: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x8); /* 0x140F38B2: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(eax + 0x50); /* 0x140F38B5: mov ecx, dword ptr [eax + 0x50] */
    /* test ecx, ecx */ /* 0x140F38B8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F38E9; /* 0x140F38BA: je 0x140f38e9 */
L_140F38BC:
    esp = esp; /* 0x140F38BC: lea esp, [esp] */
L_140F38C0:
    eax = MEM32(ecx + 0xAC); /* 0x140F38C0: mov eax, dword ptr [ecx + 0xac] */
    /* test eax, eax */ /* 0x140F38C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F38E2; /* 0x140F38C8: je 0x140f38e2 */
L_140F38CA:
    ebx = ebx; /* 0x140F38CA: lea ebx, [ebx] */
L_140F38D0:
    /* cmp MEM32(eax), edx */ /* 0x140F38D0: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F38DB; /* 0x140F38D2: jne 0x140f38db */
L_140F38D4:
    /* cmp MEM32(eax + 0x4), ebx */ /* 0x140F38D4: cmp dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F38DB; /* 0x140F38D7: jne 0x140f38db */
L_140F38D9:
    MEM32(eax) = edi; /* 0x140F38D9: mov dword ptr [eax], edi */
L_140F38DB:
    eax = MEM32(eax + 0x8); /* 0x140F38DB: mov eax, dword ptr [eax + 8] */
    /* test eax, eax */ /* 0x140F38DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F38D0; /* 0x140F38E0: jne 0x140f38d0 */
L_140F38E2:
    ecx = MEM32(ecx + 0x58); /* 0x140F38E2: mov ecx, dword ptr [ecx + 0x58] */
    /* test ecx, ecx */ /* 0x140F38E5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F38C0; /* 0x140F38E7: jne 0x140f38c0 */
L_140F38E9:
    esi = MEM32(esi + 0x4); /* 0x140F38E9: mov esi, dword ptr [esi + 4] */
    /* test esi, esi */ /* 0x140F38EC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F38B0; /* 0x140F38EE: jne 0x140f38b0 */
L_140F38F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F38F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F38F2:
    edi = POP32_VAL(esp); /* 0x140F38F2: pop edi */
    esi = POP32_VAL(esp); /* 0x140F38F3: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F38F4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F38F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F38F6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140F3900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3900u);

L_140F3900:
    MEM32(ecx) = 0x14041580u; /* 0x140F3900: mov dword ptr [ecx], 0x14041580 */
    eax = ecx; /* 0x140F3906: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F3908: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F3910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3910u);

L_140F3910:
    eax = 4; /* 0x140F3910: mov eax, 4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F3915: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F3920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3920u);

L_140F3920:
    edi = edi; /* 0x140F3920: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3922: push ebp */
    ebp = esp; /* 0x140F3923: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 4 */ /* 0x140F3925: cmp dword ptr [ebp + 8], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x140F3929: mov eax, dword ptr [ebp + 0xc] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_140F3944; /* 0x140F392C: jae 0x140f3944 */
L_140F392E:
    MEM32(eax) = ecx; /* 0x140F392E: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = 0; /* 0x140F3930: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x140F3937: mov dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F393E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x140F3940: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F3941: ret 8 */
L_140F3944:
    MEM32(eax + 0x8) = 4; /* 0x140F3944: mov dword ptr [eax + 8], 4 */
    eax = 1; /* 0x140F394B: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x140F3950: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F3951: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F3960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3960u);

L_140F3960:
    edi = edi; /* 0x140F3960: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3962: push ebp */
    ebp = esp; /* 0x140F3963: mov ebp, esp */
    /* cmp MEM32(ebp + 0x18), 4 */ /* 0x140F3965: cmp dword ptr [ebp + 0x18], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x1C); /* 0x140F3969: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = 4; /* 0x140F396C: mov dword ptr [eax], 4 */
    if (CMP_B(_flag_a, _flag_b)) goto L_140F3986; /* 0x140F3972: jb 0x140f3986 */
L_140F3974:
    eax = MEM32(ebp + 0x20); /* 0x140F3974: mov eax, dword ptr [ebp + 0x20] */
    MEM32(eax) = 0; /* 0x140F3977: mov dword ptr [eax], 0 */
    eax = 1; /* 0x140F397D: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x140F3982: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x140F3983: ret 0x1c */
L_140F3986:
    ecx = MEM32(ebp + 0xC); /* 0x140F3986: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 4 */ /* 0x140F3989: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F3993; /* 0x140F398C: jbe 0x140f3993 */
L_140F398E:
    ecx = 4; /* 0x140F398E: mov ecx, 4 */
L_140F3993:
    eax = MEM32(ebp + 0x20); /* 0x140F3993: mov eax, dword ptr [ebp + 0x20] */
    MEM32(eax) = ecx; /* 0x140F3996: mov dword ptr [eax], ecx */
    /* test ecx, ecx */ /* 0x140F3998: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F39BB; /* 0x140F399A: je 0x140f39bb */
L_140F399C:
    eax = MEM32(ebp + 0x14); /* 0x140F399C: mov eax, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0x10); /* 0x140F399F: mov edx, dword ptr [ebp + 0x10] */
L_140F39A2:
    MEM32(edx) = 0x13u; /* 0x140F39A2: mov dword ptr [edx], 0x13 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x140F39A8: add edx, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140F39AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F39B8; /* 0x140F39AD: je 0x140f39b8 */
L_140F39AF:
    MEM32(eax) = 0; /* 0x140F39AF: mov dword ptr [eax], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x140F39B5: add eax, 4 */
    _flag_k = FK_ADD;
L_140F39B8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x140F39B8: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140F39A2; /* 0x140F39B9: jne 0x140f39a2 */
L_140F39BB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F39BB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x140F39BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x140F39BE: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_140F39D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F39D0u);

L_140F39D0:
    edi = edi; /* 0x140F39D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F39D2: push ebp */
    ebp = esp; /* 0x140F39D3: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x140F39D5: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 5; /* 0x140F39D8: mov dword ptr [eax], 5 */
    MEM32(eax + 0x10) = 5; /* 0x140F39DE: mov dword ptr [eax + 0x10], 5 */
    MEM32(eax + 0x20) = 5; /* 0x140F39E5: mov dword ptr [eax + 0x20], 5 */
    MEM32(eax + 0x30) = 5; /* 0x140F39EC: mov dword ptr [eax + 0x30], 5 */
    eax = MEM32(ebp + 0x10); /* 0x140F39F3: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = 4; /* 0x140F39F6: mov dword ptr [eax], 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F39FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x140F39FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F39FF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140F3A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3A10u);

L_140F3A10:
    edi = edi; /* 0x140F3A10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3A12: push ebp */
    ebp = esp; /* 0x140F3A13: mov ebp, esp */
    /* cmp MEM32(ecx + 0x18), 0 */ /* 0x140F3A15: cmp dword ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x140F3A19: push ebx */
    PUSH32(esp, edi); /* 0x140F3A1A: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F3A60; /* 0x140F3A1B: je 0x140f3a60 */
L_140F3A1D:
    edi = MEM32(ebp + 0xC); /* 0x140F3A1D: mov edi, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + 0x18); /* 0x140F3A20: mov ecx, dword ptr [ecx + 0x18] */
    ebx = MEM32(ebp + 0x8); /* 0x140F3A23: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x140F3A26: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x140F3A28: push edi */
    PUSH32(esp, ebx); /* 0x140F3A29: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x140F3A2A: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F3A2D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F3A8D; /* 0x140F3A2F: js 0x140f3a8d */
L_140F3A31:
    PUSH32(esp, esi); /* 0x140F3A31: push esi */
    esi = ebp + 0xC; /* 0x140F3A32: lea esi, [ebp + 0xc] */
    edx = edi; /* 0x140F3A35: mov edx, edi */
    eax = ebx; /* 0x140F3A37: mov eax, ebx */
    RECOMP_CALL(sub_140F5A00); /* 0x140F3A39: call 0x140f5a00 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x140F3A3E: pop esi */
    /* test eax, eax */ /* 0x140F3A3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F3A8D; /* 0x140F3A41: js 0x140f3a8d */
L_140F3A43:
    eax = MEM32(ebp + 0xC); /* 0x140F3A43: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x140F3A46: sub edi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x140F3A48: add eax, ebx */
    _flag_k = FK_ADD;
    edx = 0x140414F4u; /* 0x140F3A4A: mov edx, 0x140414f4 */
    ecx = edi; /* 0x140F3A4F: mov ecx, edi */
    RECOMP_CALL(sub_140E3180); /* 0x140F3A51: call 0x140e3180 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F3A56: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140F3A8B; /* 0x140F3A58: jns 0x140f3a8b */
L_140F3A5A:
    edi = POP32_VAL(esp); /* 0x140F3A5A: pop edi */
    ebx = POP32_VAL(esp); /* 0x140F3A5B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F3A5C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F3A5D: ret 8 */
L_140F3A60:
    ecx = MEM32(ebp + 0xC); /* 0x140F3A60: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F3A63: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x140F3A65: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3A71; /* 0x140F3A67: je 0x140f3a71 */
L_140F3A69:
    /* cmp ecx, 0x7FFFFFFFu */ /* 0x140F3A69: cmp ecx, 0x7fffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F3A76; /* 0x140F3A6F: jbe 0x140f3a76 */
L_140F3A71:
    eax = 0x80070057u; /* 0x140F3A71: mov eax, 0x80070057 */
L_140F3A76:
    /* test eax, eax */ /* 0x140F3A76: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F3A8D; /* 0x140F3A78: js 0x140f3a8d */
L_140F3A7A:
    eax = MEM32(ebp + 0x8); /* 0x140F3A7A: mov eax, dword ptr [ebp + 8] */
    edx = 0x140414F8u; /* 0x140F3A7D: mov edx, 0x140414f8 */
    RECOMP_CALL(sub_140865C0); /* 0x140F3A82: call 0x140865c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F3A87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F3A8D; /* 0x140F3A89: js 0x140f3a8d */
L_140F3A8B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F3A8B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F3A8D:
    edi = POP32_VAL(esp); /* 0x140F3A8D: pop edi */
    ebx = POP32_VAL(esp); /* 0x140F3A8E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F3A8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F3A90: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F3AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3AA0u);

L_140F3AA0:
    edi = edi; /* 0x140F3AA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3AA2: push ebp */
    ebp = esp; /* 0x140F3AA3: mov ebp, esp */
    ecx = MEM32(ecx + 0x18); /* 0x140F3AA5: mov ecx, dword ptr [ecx + 0x18] */
    /* test ecx, ecx */ /* 0x140F3AA8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3AB7; /* 0x140F3AAA: je 0x140f3ab7 */
L_140F3AAC:
    eax = MEM32(ebp + 0x8); /* 0x140F3AAC: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x140F3AAF: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F3AB1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x140F3AB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F3AB4: ret 4 */
L_140F3AB7:
    eax = 0x80004005u; /* 0x140F3AB7: mov eax, 0x80004005 */
    ebp = POP32_VAL(esp); /* 0x140F3ABC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F3ABD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F3AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3AD0u);

L_140F3AD0:
    edi = edi; /* 0x140F3AD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3AD2: push ebp */
    ebp = esp; /* 0x140F3AD3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x140F3AD5: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = 0x00800400u; /* 0x140F3AD8: mov dword ptr [eax], 0x800400 */
    ebp = POP32_VAL(esp); /* 0x140F3ADE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F3ADF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F3AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3AF0u);

L_140F3AF0:
    edi = edi; /* 0x140F3AF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3AF2: push ebp */
    ebp = esp; /* 0x140F3AF3: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x140F3AF5: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x140F3AF8: push esi */
    esi = ecx; /* 0x140F3AF9: mov esi, ecx */
    /* test LO8(edx), 1 */ /* 0x140F3AFB: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F3B07; /* 0x140F3AFE: jne 0x140f3b07 */
L_140F3B00:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F3B00: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x140F3B02: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F3B03: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F3B04: ret 8 */
L_140F3B07:
    ecx = MEM32(ebp + 0xC); /* 0x140F3B07: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x140F3B0A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3BB9; /* 0x140F3B0C: je 0x140f3bb9 */
L_140F3B12:
    eax = MEM32(esi + 0x4); /* 0x140F3B12: mov eax, dword ptr [esi + 4] */
    MEM32(ecx) = eax; /* 0x140F3B15: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = 0x10u; /* 0x140F3B17: mov dword ptr [ecx + 4], 0x10 */
    MEM32(ecx + 0x8) = 0x10u; /* 0x140F3B1E: mov dword ptr [ecx + 8], 0x10 */
    MEM32(ecx + 0xC) = esi; /* 0x140F3B25: mov dword ptr [ecx + 0xc], esi */
    eax = MEM32(esi + 0x18); /* 0x140F3B28: mov eax, dword ptr [esi + 0x18] */
    MEM32(ecx + 0x10) = eax; /* 0x140F3B2B: mov dword ptr [ecx + 0x10], eax */
    MEM32(ecx + 0x18) = 0; /* 0x140F3B2E: mov dword ptr [ecx + 0x18], 0 */
    MEM32(ecx + 0x1C) = 0; /* 0x140F3B35: mov dword ptr [ecx + 0x1c], 0 */
    MEM32(ecx + 0x20) = 0; /* 0x140F3B3C: mov dword ptr [ecx + 0x20], 0 */
    MEM32(ecx + 0x24) = 0; /* 0x140F3B43: mov dword ptr [ecx + 0x24], 0 */
    MEM32(ecx + 0x28) = 0; /* 0x140F3B4A: mov dword ptr [ecx + 0x28], 0 */
    MEM32(ecx + 0x2C) = 0; /* 0x140F3B51: mov dword ptr [ecx + 0x2c], 0 */
    MEM32(ecx + 0x30) = 1; /* 0x140F3B58: mov dword ptr [ecx + 0x30], 1 */
    MEM32(ecx + 0x34) = 4; /* 0x140F3B5F: mov dword ptr [ecx + 0x34], 4 */
    MEM32(ecx + 0x38) = 4; /* 0x140F3B66: mov dword ptr [ecx + 0x38], 4 */
    MEM32(ecx + 0x3C) = 0; /* 0x140F3B6D: mov dword ptr [ecx + 0x3c], 0 */
    MEM32(ecx + 0x40) = 0; /* 0x140F3B74: mov dword ptr [ecx + 0x40], 0 */
    MEM32(ecx + 0x44) = 0; /* 0x140F3B7B: mov dword ptr [ecx + 0x44], 0 */
    MEM32(ecx + 0x4C) = 0x10u; /* 0x140F3B82: mov dword ptr [ecx + 0x4c], 0x10 */
    MEM32(ecx + 0x54) = 0x10u; /* 0x140F3B89: mov dword ptr [ecx + 0x54], 0x10 */
    MEM32(ecx + 0x50) = 0x10u; /* 0x140F3B90: mov dword ptr [ecx + 0x50], 0x10 */
    /* test LO8(edx), 0x10u */ /* 0x140F3B97: test dl, 0x10 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F3BAE; /* 0x140F3B9A: jne 0x140f3bae */
L_140F3B9C:
    _flag_a = (uint32_t)(MEM8(ecx + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(ecx + 0x58) = (uint8_t)(MEM8(ecx + 0x58) & 0xFCu); /* 0x140F3B9C: and byte ptr [ecx + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx + 0x48) = 0x10u; /* 0x140F3BA0: mov dword ptr [ecx + 0x48], 0x10 */
    SET_LO8(eax, 1); /* 0x140F3BA7: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x140F3BA9: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F3BAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F3BAB: ret 8 */
L_140F3BAE:
    _flag_a = (uint32_t)(MEM8(ecx + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(ecx + 0x58) = (uint8_t)(MEM8(ecx + 0x58) & 0xFCu); /* 0x140F3BAE: and byte ptr [ecx + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx + 0x48) = 4; /* 0x140F3BB2: mov dword ptr [ecx + 0x48], 4 */
L_140F3BB9:
    SET_LO8(eax, 1); /* 0x140F3BB9: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x140F3BBB: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F3BBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F3BBD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F3BD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3BD0u);

L_140F3BD0:
    edi = edi; /* 0x140F3BD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3BD2: push ebp */
    ebp = esp; /* 0x140F3BD3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x140F3BD5: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, eax */ /* 0x140F3BD8: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F3BE2; /* 0x140F3BDA: jne 0x140f3be2 */
L_140F3BDC:
    SET_LO8(eax, 1); /* 0x140F3BDC: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x140F3BDE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F3BDF: ret 4 */
L_140F3BE2:
    /* cmp MEM32(eax + 0x4), 5 */ /* 0x140F3BE2: cmp dword ptr [eax + 4], 5 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F3C04; /* 0x140F3BE6: jne 0x140f3c04 */
L_140F3BE8:
    edx = MEM32(eax + 0x18); /* 0x140F3BE8: mov edx, dword ptr [eax + 0x18] */
    ecx = MEM32(ecx + 0x18); /* 0x140F3BEB: mov ecx, dword ptr [ecx + 0x18] */
    /* cmp ecx, edx */ /* 0x140F3BEE: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F3BDC; /* 0x140F3BF0: je 0x140f3bdc */
L_140F3BF2:
    /* test ecx, ecx */ /* 0x140F3BF2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3C04; /* 0x140F3BF4: je 0x140f3c04 */
L_140F3BF6:
    /* test edx, edx */ /* 0x140F3BF6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3C04; /* 0x140F3BF8: je 0x140f3c04 */
L_140F3BFA:
    eax = MEM32(ecx); /* 0x140F3BFA: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x140F3BFC: push edx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x140F3BFD: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x140F3C00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F3C01: ret 4 */
L_140F3C04:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F3C04: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x140F3C06: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F3C07: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F3C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3C10u);

L_140F3C10:
    MEM32(eax + 0x8) = 0; /* 0x140F3C10: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x140F3C17: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x140F3C1E: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x140F3C25: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax) = 0x140416D0u; /* 0x140F3C2C: mov dword ptr [eax], 0x140416d0 */
    MEM32(eax + 0x4) = 6; /* 0x140F3C32: mov dword ptr [eax + 4], 6 */
    MEM32(eax + 0x18) = 0x10u; /* 0x140F3C39: mov dword ptr [eax + 0x18], 0x10 */
    MEM32(eax + 0x1C) = 0; /* 0x140F3C40: mov dword ptr [eax + 0x1c], 0 */
    MEM32(eax + 0x20) = 0; /* 0x140F3C47: mov dword ptr [eax + 0x20], 0 */
    MEM32(eax + 0x24) = 0; /* 0x140F3C4E: mov dword ptr [eax + 0x24], 0 */
    MEM32(eax + 0x28) = 0; /* 0x140F3C55: mov dword ptr [eax + 0x28], 0 */
    MEM32(eax + 0x2C) = 1; /* 0x140F3C5C: mov dword ptr [eax + 0x2c], 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F3C63: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F3C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3C70u);

L_140F3C70:
    eax = MEM32(ecx + 0x2C); /* 0x140F3C70: mov eax, dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F3C73: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F3C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3C80u);

L_140F3C80:
    edi = edi; /* 0x140F3C80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3C82: push ebp */
    ebp = esp; /* 0x140F3C83: mov ebp, esp */
    edx = MEM32(ecx + 0x2C); /* 0x140F3C85: mov edx, dword ptr [ecx + 0x2c] */
    eax = MEM32(ebp + 0xC); /* 0x140F3C88: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ebp + 0x8), edx */ /* 0x140F3C8B: cmp dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140F3CA6; /* 0x140F3C8E: jae 0x140f3ca6 */
L_140F3C90:
    MEM32(eax) = ecx; /* 0x140F3C90: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = 0; /* 0x140F3C92: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x140F3C99: mov dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F3CA0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x140F3CA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F3CA3: ret 8 */
L_140F3CA6:
    MEM32(eax + 0x8) = edx; /* 0x140F3CA6: mov dword ptr [eax + 8], edx */
    eax = 1; /* 0x140F3CA9: mov eax, 1 */
    ebp = POP32_VAL(esp); /* 0x140F3CAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F3CAF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F3CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3CC0u);

L_140F3CC0:
    edi = edi; /* 0x140F3CC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3CC2: push ebp */
    ebp = esp; /* 0x140F3CC3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x140F3CC5: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = 1; /* 0x140F3CC8: mov dword ptr [eax], 1 */
    ecx = MEM32(ecx + 0x2C); /* 0x140F3CCE: mov ecx, dword ptr [ecx + 0x2c] */
    eax = MEM32(ebp + 0xC); /* 0x140F3CD1: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x140F3CD4: mov dword ptr [eax], ecx */
    ebp = POP32_VAL(esp); /* 0x140F3CD6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F3CD7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F3CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3CE0u);

L_140F3CE0:
    edi = edi; /* 0x140F3CE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3CE2: push ebp */
    ebp = esp; /* 0x140F3CE3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140F3CE5: push ecx */
    PUSH32(esp, ebx); /* 0x140F3CE6: push ebx */
    PUSH32(esp, esi); /* 0x140F3CE7: push esi */
    esi = ecx; /* 0x140F3CE8: mov esi, ecx */
    eax = MEM32(esi + 0x18); /* 0x140F3CEA: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE9u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFE9u; /* 0x140F3CED: add eax, -0x17 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x140F3CF0: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp eax, 0x2Cu */ /* 0x140F3CF2: cmp eax, 0x2c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F3D88; /* 0x140F3CF5: ja 0x140f3d88 */
L_140F3CFB:
    eax = (uint32_t)MEM8(eax + 0x140F3DA0); /* 0x140F3CFB: movzx eax, byte ptr [eax + 0x140f3da0] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F3D94)); goto _ljump; }
L_140F3D09:
    ecx = MEM32(ebp + 0x8); /* 0x140F3D09: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x140F3D0C: mov eax, dword ptr [ecx] */
    edx = ebp + 0x8; /* 0x140F3D0E: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x140F3D11: push edx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x140F3D12: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, MEM8(eax)); /* 0x140F3D15: mov bl, byte ptr [eax] */
    if (4u) _cf = (((LO8(ebx)) >> 3) & 1u); /* 0x140F3D17: shr bl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ebx) >> 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ebx, LO8(ebx) >> 4u); /* 0x140F3D17: shr bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) & 1); /* 0x140F3D1A: and bl, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x140F3D1D: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x140F3D1E: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x140F3D20: pop ebx */
    esp = ebp; /* 0x140F3D21: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F3D23: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F3D24: ret 4 */
L_140F3D27:
    ecx = MEM32(ebp + 0x8); /* 0x140F3D27: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x140F3D2A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3D88; /* 0x140F3D2C: je 0x140f3d88 */
L_140F3D2E:
    eax = ecx; /* 0x140F3D2E: mov eax, ecx */
L_140F3D30:
    /* test eax, eax */ /* 0x140F3D30: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3D3F; /* 0x140F3D32: je 0x140f3d3f */
L_140F3D34:
    /* cmp MEM32(eax + 0x4), 0xAu */ /* 0x140F3D34: cmp dword ptr [eax + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F3D3F; /* 0x140F3D38: jne 0x140f3d3f */
L_140F3D3A:
    eax = MEM32(eax + 0x20); /* 0x140F3D3A: mov eax, dword ptr [eax + 0x20] */
    RECOMP_BACKEDGE();
    goto L_140F3D30; /* 0x140F3D3D: jmp 0x140f3d30 */
L_140F3D3F:
    /* cmp MEM32(eax + 0x4), 9 */ /* 0x140F3D3F: cmp dword ptr [eax + 4], 9 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F3D43: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x140F3D46: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3D88; /* 0x140F3D48: je 0x140f3d88 */
L_140F3D4A:
    eax = MEM32(ecx); /* 0x140F3D4A: mov eax, dword ptr [ecx] */
    edx = ebp + 0x8; /* 0x140F3D4C: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x140F3D4F: push edx */
    edx = ebp + (-0x4); /* 0x140F3D50: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x140F3D53: push edx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x140F3D54: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x18); /* 0x140F3D57: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFE8u; /* 0x140F3D5A: add eax, -0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x26u */ /* 0x140F3D5D: cmp eax, 0x26 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x26u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F3D88; /* 0x140F3D60: ja 0x140f3d88 */
L_140F3D62:
    eax = (uint32_t)MEM8(eax + 0x140F3DDC); /* 0x140F3D62: movzx eax, byte ptr [eax + 0x140f3ddc] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F3DD0)); goto _ljump; }
L_140F3D70:
    /* cmp MEM32(ebp + 0x8), 2 */ /* 0x140F3D70: cmp dword ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x140F3D74: pop esi */
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F3D75: sete bl */
    SET_LO8(eax, LO8(ebx)); /* 0x140F3D78: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x140F3D7A: pop ebx */
    esp = ebp; /* 0x140F3D7B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F3D7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F3D7E: ret 4 */
L_140F3D81:
    /* cmp MEM32(ebp + 0x8), 3 */ /* 0x140F3D81: cmp dword ptr [ebp + 8], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F3D85: sete bl */
L_140F3D88:
    esi = POP32_VAL(esp); /* 0x140F3D88: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x140F3D89: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x140F3D8B: pop ebx */
    esp = ebp; /* 0x140F3D8C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F3D8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F3D8F: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x140F3D09u: goto L_140F3D09;
      case 0x140F3D27u: goto L_140F3D27;
      case 0x140F3D70u: goto L_140F3D70;
      case 0x140F3D81u: goto L_140F3D81;
      case 0x140F3D88u: goto L_140F3D88;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F3E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3E10u);

L_140F3E10:
    edi = edi; /* 0x140F3E10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3E12: push ebp */
    ebp = esp; /* 0x140F3E13: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140F3E15: push ecx */
    PUSH32(esp, esi); /* 0x140F3E16: push esi */
    esi = ecx; /* 0x140F3E17: mov esi, ecx */
    eax = MEM32(esi); /* 0x140F3E19: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x4); /* 0x140F3E1B: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x140F3E1E: push ecx */
    ecx = esi; /* 0x140F3E1F: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x140F3E21: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax + 0x3), 1 */ /* 0x140F3E24: test byte ptr [eax + 3], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x3)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F3E3B; /* 0x140F3E28: je 0x140f3e3b */
L_140F3E2A:
    ecx = MEM32(esi + 0x1C); /* 0x140F3E2A: mov ecx, dword ptr [esi + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x140F3E2D: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x140F3E30: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F3E32: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140F3E34: pop esi */
    esp = ebp; /* 0x140F3E35: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F3E37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F3E38: ret 4 */
L_140F3E3B:
    eax = 0x80004005u; /* 0x140F3E3B: mov eax, 0x80004005 */
    esi = POP32_VAL(esp); /* 0x140F3E40: pop esi */
    esp = ebp; /* 0x140F3E41: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F3E43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F3E44: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F3E50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F3E50u);

L_140F3E50:
    edi = edi; /* 0x140F3E50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F3E52: push ebp */
    ebp = esp; /* 0x140F3E53: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x140F3E55: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x6Cu; /* 0x140F3E58: sub esp, 0x6c */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x140F3E5B: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x140F3E60: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x68) = eax; /* 0x140F3E62: mov dword ptr [esp + 0x68], eax */
    eax = MEM32(ebp + 0x8); /* 0x140F3E66: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x1C); /* 0x140F3E69: mov edx, dword ptr [ebp + 0x1c] */
    MEM32(esp + 0x8) = eax; /* 0x140F3E6C: mov dword ptr [esp + 8], eax */
    PUSH32(esp, ebx); /* 0x140F3E70: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x140F3E71: mov ebx, dword ptr [ebp + 0x14] */
    eax = esp + 0x5C; /* 0x140F3E74: lea eax, [esp + 0x5c] */
    PUSH32(esp, esi); /* 0x140F3E78: push esi */
    esi = MEM32(ebp + 0x20); /* 0x140F3E79: mov esi, dword ptr [ebp + 0x20] */
    MEM32(esp + 0x50) = eax; /* 0x140F3E7C: mov dword ptr [esp + 0x50], eax */
    eax = esp + 0x40; /* 0x140F3E80: lea eax, [esp + 0x40] */
    PUSH32(esp, edi); /* 0x140F3E84: push edi */
    edi = ecx; /* 0x140F3E85: mov edi, ecx */
    ecx = MEM32(ebp + 0x10); /* 0x140F3E87: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(esp + 0x34) = eax; /* 0x140F3E8A: mov dword ptr [esp + 0x34], eax */
    eax = MEM32(edi + 0x2C); /* 0x140F3E8E: mov eax, dword ptr [edi + 0x2c] */
    MEM32(edx) = eax; /* 0x140F3E91: mov dword ptr [edx], eax */
    eax = MEM32(ebp + 0x18); /* 0x140F3E93: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esp + 0x1C) = edi; /* 0x140F3E96: mov dword ptr [esp + 0x1c], edi */
    MEM32(esp + 0x20) = ecx; /* 0x140F3E9A: mov dword ptr [esp + 0x20], ecx */
    MEM32(esp + 0x28) = esi; /* 0x140F3E9E: mov dword ptr [esp + 0x28], esi */
    MEM32(esp + 0x58) = 4; /* 0x140F3EA2: mov dword ptr [esp + 0x58], 4 */
    MEM32(esp + 0x5C) = 0; /* 0x140F3EAA: mov dword ptr [esp + 0x5c], 0 */
    MEM16(esp + 0x60) = (uint16_t)(0x100u); /* 0x140F3EB2: mov word ptr [esp + 0x60], 0x100 */
    MEM32(esp + 0x38) = 4; /* 0x140F3EB9: mov dword ptr [esp + 0x38], 4 */
    MEM32(esp + 0x3C) = 0; /* 0x140F3EC1: mov dword ptr [esp + 0x3c], 0 */
    MEM16(esp + 0x40) = (uint16_t)(0x100u); /* 0x140F3EC9: mov word ptr [esp + 0x40], 0x100 */
    MEM8(esp + 0xE) = (uint8_t)(0); /* 0x140F3ED0: mov byte ptr [esp + 0xe], 0 */
    MEM8(esp + 0xF) = (uint8_t)(1); /* 0x140F3ED5: mov byte ptr [esp + 0xf], 1 */
    /* cmp eax, MEM32(edi + 0x2C) */ /* 0x140F3EDA: cmp eax, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_140F3EFE; /* 0x140F3EDD: jb 0x140f3efe */
L_140F3EDF:
    MEM32(esi) = 0; /* 0x140F3EDF: mov dword ptr [esi], 0 */
    eax = 1; /* 0x140F3EE5: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x140F3EEA: pop edi */
    esi = POP32_VAL(esp); /* 0x140F3EEB: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F3EEC: pop ebx */
    ecx = MEM32(esp + 0x68); /* 0x140F3EED: mov ecx, dword ptr [esp + 0x68] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x140F3EF1: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x140F3EF3: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140F3EF8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F3EFA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x140F3EFB: ret 0x1c */
L_140F3EFE:
    esi = MEM32(edi + 0x18); /* 0x140F3EFE: mov esi, dword ptr [edi + 0x18] */
    eax = esi + (-0x14); /* 0x140F3F01: lea eax, [esi - 0x14] */
    MEM32(esp + 0x18) = esi; /* 0x140F3F04: mov dword ptr [esp + 0x18], esi */
    /* cmp eax, 0x33u */ /* 0x140F3F08: cmp eax, 0x33 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x33u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F412D; /* 0x140F3F0B: ja 0x140f412d */
L_140F3F11:
    eax = (uint32_t)MEM8(eax + 0x140F4158); /* 0x140F3F11: movzx eax, byte ptr [eax + 0x140f4158] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F4148)); goto _ljump; }
L_140F3F1F:
    MEM8(esp + 0xE) = (uint8_t)(1); /* 0x140F3F1F: mov byte ptr [esp + 0xe], 1 */
    goto L_140F3F2F; /* 0x140F3F24: jmp 0x140f3f2f */
L_140F3F26:
    MEM8(esp + 0xF) = (uint8_t)(0); /* 0x140F3F26: mov byte ptr [esp + 0xf], 0 */
    MEM32(esp + 0x18) = esi; /* 0x140F3F2B: mov dword ptr [esp + 0x18], esi */
L_140F3F2F:
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x140F3F2F: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F4091; /* 0x140F3F33: je 0x140f4091 */
L_140F3F39:
    /* cmp MEM8(esp + 0xE), 0 */ /* 0x140F3F39: cmp byte ptr [esp + 0xe], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0xE)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F4091; /* 0x140F3F3E: jne 0x140f4091 */
L_140F3F44:
    ecx = MEM32(edi + 0x1C); /* 0x140F3F44: mov ecx, dword ptr [edi + 0x1c] */
    eax = MEM32(ecx); /* 0x140F3F47: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140F3F49: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140F3F4C: mov edi, eax */
    MEM32(esp + 0x10) = edi; /* 0x140F3F4E: mov dword ptr [esp + 0x10], edi */
    /* cmp edi, MEM32(esp + 0x58) */ /* 0x140F3F52: cmp edi, dword ptr [esp + 0x58] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x58));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F3F79; /* 0x140F3F56: jbe 0x140f3f79 */
L_140F3F58:
    /* cmp MEM8(esp + 0x61), 0 */ /* 0x140F3F58: cmp byte ptr [esp + 0x61], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x61)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F3F66; /* 0x140F3F5D: jne 0x140f3f66 */
L_140F3F5F:
    esi = 0x8007000Eu; /* 0x140F3F5F: mov esi, 0x8007000e */
    goto L_140F3F7F; /* 0x140F3F64: jmp 0x140f3f7f */
L_140F3F66:
    edi = esp + 0x54; /* 0x140F3F66: lea edi, [esp + 0x54] */
    RECOMP_CALL(sub_141B1440); /* 0x140F3F6A: call 0x141b1440 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esp + 0x10); /* 0x140F3F6F: mov edi, dword ptr [esp + 0x10] */
    esi = eax; /* 0x140F3F73: mov esi, eax */
    /* test esi, esi */ /* 0x140F3F75: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F3F81; /* 0x140F3F77: jne 0x140f3f81 */
L_140F3F79:
    MEM32(esp + 0x5C) = edi; /* 0x140F3F79: mov dword ptr [esp + 0x5c], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x140F3F7D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F3F7F:
    /* test esi, esi */ /* 0x140F3F7F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
L_140F3F81:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_140F40BE; /* 0x140F3F81: js 0x140f40be */
L_140F3F87:
    /* cmp edi, MEM32(esp + 0x38) */ /* 0x140F3F87: cmp edi, dword ptr [esp + 0x38] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F3FB0; /* 0x140F3F8B: jbe 0x140f3fb0 */
L_140F3F8D:
    /* cmp MEM8(esp + 0x41), 0 */ /* 0x140F3F8D: cmp byte ptr [esp + 0x41], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x41)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F3F9B; /* 0x140F3F92: jne 0x140f3f9b */
L_140F3F94:
    esi = 0x8007000Eu; /* 0x140F3F94: mov esi, 0x8007000e */
    goto L_140F3FB6; /* 0x140F3F99: jmp 0x140f3fb6 */
L_140F3F9B:
    eax = edi; /* 0x140F3F9B: mov eax, edi */
    edi = esp + 0x34; /* 0x140F3F9D: lea edi, [esp + 0x34] */
    RECOMP_CALL(sub_141B1440); /* 0x140F3FA1: call 0x141b1440 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esp + 0x10); /* 0x140F3FA6: mov edi, dword ptr [esp + 0x10] */
    esi = eax; /* 0x140F3FAA: mov esi, eax */
    /* test esi, esi */ /* 0x140F3FAC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F3FB8; /* 0x140F3FAE: jne 0x140f3fb8 */
L_140F3FB0:
    MEM32(esp + 0x3C) = edi; /* 0x140F3FB0: mov dword ptr [esp + 0x3c], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x140F3FB4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F3FB6:
    /* test esi, esi */ /* 0x140F3FB6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
L_140F3FB8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_140F40BE; /* 0x140F3FB8: js 0x140f40be */
L_140F3FBE:
    ecx = MEM32(esp + 0x1C); /* 0x140F3FBE: mov ecx, dword ptr [esp + 0x1c] */
    ecx = MEM32(ecx + 0x1C); /* 0x140F3FC2: mov ecx, dword ptr [ecx + 0x1c] */
    eax = MEM32(ecx); /* 0x140F3FC5: mov eax, dword ptr [ecx] */
    edx = esp + 0x2C; /* 0x140F3FC7: lea edx, [esp + 0x2c] */
    PUSH32(esp, edx); /* 0x140F3FCB: push edx */
    edx = esp + 0x34; /* 0x140F3FCC: lea edx, [esp + 0x34] */
    PUSH32(esp, edx); /* 0x140F3FD0: push edx */
    PUSH32(esp, 0); /* 0x140F3FD1: push 0 */
    PUSH32(esp, MEM32(esp + 0x40)); /* 0x140F3FD3: push dword ptr [esp + 0x40] */
    PUSH32(esp, MEM32(esp + 0x64)); /* 0x140F3FD7: push dword ptr [esp + 0x64] */
    PUSH32(esp, edi); /* 0x140F3FDB: push edi */
    PUSH32(esp, MEM32(esp + 0x2C)); /* 0x140F3FDC: push dword ptr [esp + 0x2c] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x140F3FE0: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x140F3FE3: mov esi, eax */
    /* test esi, esi */ /* 0x140F3FE5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F40BE; /* 0x140F3FE7: js 0x140f40be */
L_140F3FED:
    /* cmp MEM32(esp + 0x30), edi */ /* 0x140F3FED: cmp dword ptr [esp + 0x30], edi */
    _flag_a = (uint32_t)(MEM32(esp + 0x30)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F4126; /* 0x140F3FF1: jne 0x140f4126 */
L_140F3FF7:
    /* cmp MEM32(esp + 0x2C), edi */ /* 0x140F3FF7: cmp dword ptr [esp + 0x2c], edi */
    _flag_a = (uint32_t)(MEM32(esp + 0x2C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F4126; /* 0x140F3FFB: jne 0x140f4126 */
L_140F4001:
    edi = 1; /* 0x140F4001: mov edi, 1 */
    /* cmp MEM32(esp + 0x10), edi */ /* 0x140F4006: cmp dword ptr [esp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(esp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F4085; /* 0x140F400A: jbe 0x140f4085 */
L_140F400C:
    eax = MEM32(esp + 0x34); /* 0x140F400C: mov eax, dword ptr [esp + 0x34] */
    edx = MEM32(esp + 0x54); /* 0x140F4010: mov edx, dword ptr [esp + 0x54] */
    ecx = eax + 0x4; /* 0x140F4014: lea ecx, [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x140F4017: sub edx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(esp + 0x10); /* 0x140F4019: mov eax, dword ptr [esp + 0x10] */
    MEM32(esp + 0x14) = ecx; /* 0x140F401D: mov dword ptr [esp + 0x14], ecx */
    MEM32(esp + 0x24) = edx; /* 0x140F4021: mov dword ptr [esp + 0x24], edx */
L_140F4025:
    /* cmp MEM8(esp + 0xF), 0 */ /* 0x140F4025: cmp byte ptr [esp + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F4079; /* 0x140F402A: je 0x140f4079 */
L_140F402C:
    /* cmp edi, MEM32(esp + 0x5C) */ /* 0x140F402C: cmp edi, dword ptr [esp + 0x5c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x5C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140F4037; /* 0x140F4030: jae 0x140f4037 */
L_140F4032:
    esi = edx + ecx; /* 0x140F4032: lea esi, [edx + ecx] */
    goto L_140F4039; /* 0x140F4035: jmp 0x140f4039 */
L_140F4037:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x140F4037: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F4039:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x140F4039: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp + 0x54; /* 0x140F403B: lea eax, [esp + 0x54] */
    RECOMP_CALL(sub_140F59B0); /* 0x140F403F: call 0x140f59b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x140F4044: mov ecx, dword ptr [esi] */
    /* cmp ecx, MEM32(eax) */ /* 0x140F4046: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F411F; /* 0x140F4048: jne 0x140f411f */
L_140F404E:
    /* cmp edi, MEM32(esp + 0x3C) */ /* 0x140F404E: cmp edi, dword ptr [esp + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esp + 0x34; /* 0x140F4052: lea eax, [esp + 0x34] */
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x140F4056: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    esi = esi & MEM32(esp + 0x14); /* 0x140F4058: and esi, dword ptr [esp + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x140F405C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_140F59B0); /* 0x140F405E: call 0x140f59b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x140F4063: mov ecx, dword ptr [esi] */
    /* cmp ecx, MEM32(eax) */ /* 0x140F4065: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F411F; /* 0x140F4067: jne 0x140f411f */
L_140F406D:
    ecx = MEM32(esp + 0x14); /* 0x140F406D: mov ecx, dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x10); /* 0x140F4071: mov eax, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x24); /* 0x140F4075: mov edx, dword ptr [esp + 0x24] */
L_140F4079:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x140F4079: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x140F407A: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x14) = ecx; /* 0x140F407D: mov dword ptr [esp + 0x14], ecx */
    /* cmp edi, eax */ /* 0x140F4081: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140F4025; /* 0x140F4083: jb 0x140f4025 */
L_140F4085:
    ecx = MEM32(esp + 0x20); /* 0x140F4085: mov ecx, dword ptr [esp + 0x20] */
    esi = MEM32(esp + 0x18); /* 0x140F4089: mov esi, dword ptr [esp + 0x18] */
    edi = MEM32(esp + 0x1C); /* 0x140F408D: mov edi, dword ptr [esp + 0x1c] */
L_140F4091:
    edx = MEM32(edi + 0x2C); /* 0x140F4091: mov edx, dword ptr [edi + 0x2c] */
    eax = MEM32(ebp + 0xC); /* 0x140F4094: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, edx */ /* 0x140F4097: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F409D; /* 0x140F4099: jbe 0x140f409d */
L_140F409B:
    eax = edx; /* 0x140F409B: mov eax, edx */
L_140F409D:
    edx = MEM32(esp + 0x28); /* 0x140F409D: mov edx, dword ptr [esp + 0x28] */
    MEM32(edx) = eax; /* 0x140F40A1: mov dword ptr [edx], eax */
    /* test eax, eax */ /* 0x140F40A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F40BC; /* 0x140F40A5: je 0x140f40bc */
L_140F40A7:
    MEM32(ecx) = esi; /* 0x140F40A7: mov dword ptr [ecx], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x140F40A9: add ecx, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x140F40AC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F40B9; /* 0x140F40AE: je 0x140f40b9 */
L_140F40B0:
    MEM32(ebx) = 0; /* 0x140F40B0: mov dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x140F40B6: add ebx, 4 */
    _flag_k = FK_ADD;
L_140F40B9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140F40B9: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140F40A7; /* 0x140F40BA: jne 0x140f40a7 */
L_140F40BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x140F40BC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F40BE:
    /* cmp MEM8(esp + 0x40), 0 */ /* 0x140F40BE: cmp byte ptr [esp + 0x40], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x40)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(0x1400115C); /* 0x140F40C3: mov edi, dword ptr [0x1400115c] */
    MEM32(esp + 0x3C) = 0; /* 0x140F40C9: mov dword ptr [esp + 0x3c], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F40E1; /* 0x140F40D1: je 0x140f40e1 */
L_140F40D3:
    PUSH32(esp, MEM32(esp + 0x34)); /* 0x140F40D3: push dword ptr [esp + 0x34] */
    RECOMP_ICALL(edi); /* 0x140F40D7: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140F40D9: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esp + 0x40) = (uint8_t)(0); /* 0x140F40DC: mov byte ptr [esp + 0x40], 0 */
L_140F40E1:
    /* cmp MEM8(esp + 0x60), 0 */ /* 0x140F40E1: cmp byte ptr [esp + 0x60], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x60)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(esp + 0x34) = 0; /* 0x140F40E6: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x38) = 0; /* 0x140F40EE: mov dword ptr [esp + 0x38], 0 */
    MEM32(esp + 0x5C) = 0; /* 0x140F40F6: mov dword ptr [esp + 0x5c], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F4109; /* 0x140F40FE: je 0x140f4109 */
L_140F4100:
    PUSH32(esp, MEM32(esp + 0x54)); /* 0x140F4100: push dword ptr [esp + 0x54] */
    RECOMP_ICALL(edi); /* 0x140F4104: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140F4106: add esp, 4 */
    _flag_k = FK_ADD;
L_140F4109:
    eax = esi; /* 0x140F4109: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x140F410B: pop edi */
    esi = POP32_VAL(esp); /* 0x140F410C: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F410D: pop ebx */
    ecx = MEM32(esp + 0x68); /* 0x140F410E: mov ecx, dword ptr [esp + 0x68] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x140F4112: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x140F4114: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140F4119: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F411B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x140F411C: ret 0x1c */
L_140F411F:
    esi = 0x80070057u; /* 0x140F411F: mov esi, 0x80070057 */
    RECOMP_BACKEDGE();
    goto L_140F40BE; /* 0x140F4124: jmp 0x140f40be */
L_140F4126:
    esi = 0x8007054Fu; /* 0x140F4126: mov esi, 0x8007054f */
    RECOMP_BACKEDGE();
    goto L_140F40BE; /* 0x140F412B: jmp 0x140f40be */
L_140F412D:
    ecx = MEM32(esp + 0x74); /* 0x140F412D: mov ecx, dword ptr [esp + 0x74] */
    edi = POP32_VAL(esp); /* 0x140F4131: pop edi */
    esi = POP32_VAL(esp); /* 0x140F4132: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F4133: pop ebx */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x140F4134: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x8007054Fu; /* 0x140F4136: mov eax, 0x8007054f */
    RECOMP_CALL(sub_141EC0B6); /* 0x140F413B: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140F4140: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F4142: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x140F4143: ret 0x1c */
  _ljump:
    switch (_itail_tgt) {
      case 0x140F3F1Fu: goto L_140F3F1F;
      case 0x140F3F26u: goto L_140F3F26;
      case 0x140F3F2Fu: goto L_140F3F2F;
      case 0x140F412Du: goto L_140F412D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F41A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F41A0u);

L_140F41A0:
    edi = edi; /* 0x140F41A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F41A2: push ebp */
    ebp = esp; /* 0x140F41A3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140F41A5: push esi */
    esi = ecx; /* 0x140F41A6: mov esi, ecx */
    eax = MEM32(esi + 0x18); /* 0x140F41A8: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFECu; /* 0x140F41AB: add eax, -0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x23u */ /* 0x140F41AE: cmp eax, 0x23 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F41FA; /* 0x140F41B1: ja 0x140f41fa */
L_140F41B3:
    eax = (uint32_t)MEM8(eax + 0x140F4210); /* 0x140F41B3: movzx eax, byte ptr [eax + 0x140f4210] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F4204)); goto _ljump; }
L_140F41C1:
    eax = 6; /* 0x140F41C1: mov eax, 6 */
    goto L_140F41D4; /* 0x140F41C6: jmp 0x140f41d4 */
L_140F41C8:
    eax = 4; /* 0x140F41C8: mov eax, 4 */
    goto L_140F41D4; /* 0x140F41CD: jmp 0x140f41d4 */
L_140F41CF:
    eax = 3; /* 0x140F41CF: mov eax, 3 */
L_140F41D4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140F41D4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x2C), edx */ /* 0x140F41D6: cmp dword ptr [esi + 0x2c], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F41EB; /* 0x140F41D9: jbe 0x140f41eb */
L_140F41DB:
    ecx = MEM32(ebp + 0xC); /* 0x140F41DB: mov ecx, dword ptr [ebp + 0xc] */
    edi = edi; /* 0x140F41DE: mov edi, edi */
L_140F41E0:
    MEM32(ecx) = eax; /* 0x140F41E0: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x140F41E2: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x140F41E3: add ecx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi + 0x2C) */ /* 0x140F41E6: cmp edx, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140F41E0; /* 0x140F41E9: jb 0x140f41e0 */
L_140F41EB:
    ecx = MEM32(esi + 0x2C); /* 0x140F41EB: mov ecx, dword ptr [esi + 0x2c] */
    eax = MEM32(ebp + 0x10); /* 0x140F41EE: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x140F41F1: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F41F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140F41F5: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F41F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F41F7: ret 0xc */
L_140F41FA:
    eax = 0x8007054Fu; /* 0x140F41FA: mov eax, 0x8007054f */
    esi = POP32_VAL(esp); /* 0x140F41FF: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F4200: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F4201: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x140F41C1u: goto L_140F41C1;
      case 0x140F41C8u: goto L_140F41C8;
      case 0x140F41CFu: goto L_140F41CF;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F4240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4240u);

L_140F4240:
    edi = edi; /* 0x140F4240: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4242: push ebp */
    ebp = esp; /* 0x140F4243: mov ebp, esp */
    ecx = MEM32(ecx + 0x18); /* 0x140F4245: mov ecx, dword ptr [ecx + 0x18] */
    edx = MEM32(ebp + 0x8); /* 0x140F4248: mov edx, dword ptr [ebp + 8] */
    eax = ecx + (-0x16); /* 0x140F424B: lea eax, [ecx - 0x16] */
    MEM32(edx) = 8; /* 0x140F424E: mov dword ptr [edx], 8 */
    /* cmp eax, 0x31u */ /* 0x140F4254: cmp eax, 0x31 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x31u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F42B1; /* 0x140F4257: ja 0x140f42b1 */
L_140F4259:
    eax = (uint32_t)MEM8(eax + 0x140F4328); /* 0x140F4259: movzx eax, byte ptr [eax + 0x140f4328] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F42F8)); goto _ljump; }
L_140F4267:
    _flag_a = (uint32_t)((MEM8(edx + 0x2) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x2) | 0x20u)) << 24;
    MEM8(edx + 0x2) = (uint8_t)(MEM8(edx + 0x2) | 0x20u); /* 0x140F4267: or byte ptr [edx + 2], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_140F42B5; /* 0x140F426B: jmp 0x140f42b5 */
L_140F426D:
    _flag_a = (uint32_t)((MEM8(edx + 0x1) | 0x80u)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x1) | 0x80u)) << 24;
    MEM8(edx + 0x1) = (uint8_t)(MEM8(edx + 0x1) | 0x80u); /* 0x140F426D: or byte ptr [edx + 1], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_140F42B5; /* 0x140F4271: jmp 0x140f42b5 */
L_140F4273:
    _flag_a = (uint32_t)((MEM8(edx + 0x1) | 0x80u)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x1) | 0x80u)) << 24;
    MEM8(edx + 0x1) = (uint8_t)(MEM8(edx + 0x1) | 0x80u); /* 0x140F4273: or byte ptr [edx + 1], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(edx + 0x3) | 0x10u)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x3) | 0x10u)) << 24;
    MEM8(edx + 0x3) = (uint8_t)(MEM8(edx + 0x3) | 0x10u); /* 0x140F4277: or byte ptr [edx + 3], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_140F42B5; /* 0x140F427B: jmp 0x140f42b5 */
L_140F427D:
    _flag_a = (uint32_t)((MEM8(edx + 0x1) | 0x80u)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x1) | 0x80u)) << 24;
    MEM8(edx + 0x1) = (uint8_t)(MEM8(edx + 0x1) | 0x80u); /* 0x140F427D: or byte ptr [edx + 1], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(edx + 0x3) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x3) | 0x20u)) << 24;
    MEM8(edx + 0x3) = (uint8_t)(MEM8(edx + 0x3) | 0x20u); /* 0x140F4281: or byte ptr [edx + 3], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_140F42B5; /* 0x140F4285: jmp 0x140f42b5 */
L_140F4287:
    _flag_a = (uint32_t)((MEM8(edx + 0x3) | 8)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x3) | 8)) << 24;
    MEM8(edx + 0x3) = (uint8_t)(MEM8(edx + 0x3) | 8); /* 0x140F4287: or byte ptr [edx + 3], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_140F42B5; /* 0x140F428B: jmp 0x140f42b5 */
L_140F428D:
    _flag_a = (uint32_t)((MEM8(edx + 0x3) | 0x18u)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x3) | 0x18u)) << 24;
    MEM8(edx + 0x3) = (uint8_t)(MEM8(edx + 0x3) | 0x18u); /* 0x140F428D: or byte ptr [edx + 3], 0x18 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_140F42B5; /* 0x140F4291: jmp 0x140f42b5 */
L_140F4293:
    _flag_a = (uint32_t)((MEM8(edx + 0x3) | 0x28u)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x3) | 0x28u)) << 24;
    MEM8(edx + 0x3) = (uint8_t)(MEM8(edx + 0x3) | 0x28u); /* 0x140F4293: or byte ptr [edx + 3], 0x28 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_140F42B5; /* 0x140F4297: jmp 0x140f42b5 */
L_140F4299:
    _flag_a = (uint32_t)((MEM8(edx + 0x2) | 1)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x2) | 1)) << 24;
    MEM8(edx + 0x2) = (uint8_t)(MEM8(edx + 0x2) | 1); /* 0x140F4299: or byte ptr [edx + 2], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_140F42B5; /* 0x140F429D: jmp 0x140f42b5 */
L_140F429F:
    _flag_a = (uint32_t)((MEM8(edx + 0x2) | 2)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x2) | 2)) << 24;
    MEM8(edx + 0x2) = (uint8_t)(MEM8(edx + 0x2) | 2); /* 0x140F429F: or byte ptr [edx + 2], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_140F42B5; /* 0x140F42A3: jmp 0x140f42b5 */
L_140F42A5:
    _flag_a = (uint32_t)((MEM8(edx + 0x2) | 4)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x2) | 4)) << 24;
    MEM8(edx + 0x2) = (uint8_t)(MEM8(edx + 0x2) | 4); /* 0x140F42A5: or byte ptr [edx + 2], 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_140F42B5; /* 0x140F42A9: jmp 0x140f42b5 */
L_140F42AB:
    _flag_a = (uint32_t)((MEM8(edx + 0x2) | 0x40u)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x2) | 0x40u)) << 24;
    MEM8(edx + 0x2) = (uint8_t)(MEM8(edx + 0x2) | 0x40u); /* 0x140F42AB: or byte ptr [edx + 2], 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_140F42B5; /* 0x140F42AF: jmp 0x140f42b5 */
L_140F42B1:
    _flag_a = (uint32_t)((MEM8(edx + 0x2) | 8)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x2) | 8)) << 24;
    MEM8(edx + 0x2) = (uint8_t)(MEM8(edx + 0x2) | 8); /* 0x140F42B1: or byte ptr [edx + 2], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_140F42B5:
    eax = ecx + (-0x17); /* 0x140F42B5: lea eax, [ecx - 0x17] */
    /* cmp eax, 0x2Cu */ /* 0x140F42B8: cmp eax, 0x2c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F42DF; /* 0x140F42BB: ja 0x140f42df */
L_140F42BD:
    eax = (uint32_t)MEM8(eax + 0x140F4370); /* 0x140F42BD: movzx eax, byte ptr [eax + 0x140f4370] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F435C)); goto _ljump; }
L_140F42CB:
    _flag_a = (uint32_t)((MEM8(edx + 0x3) | 2)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x3) | 2)) << 24;
    MEM8(edx + 0x3) = (uint8_t)(MEM8(edx + 0x3) | 2); /* 0x140F42CB: or byte ptr [edx + 3], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_140F42DF; /* 0x140F42CF: jmp 0x140f42df */
L_140F42D1:
    _flag_a = (uint32_t)((MEM8(edx + 0x3) | 2)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x3) | 2)) << 24;
    MEM8(edx + 0x3) = (uint8_t)(MEM8(edx + 0x3) | 2); /* 0x140F42D1: or byte ptr [edx + 3], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_140F42D5:
    _flag_a = (uint32_t)((MEM8(edx + 0x3) | 1)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x3) | 1)) << 24;
    MEM8(edx + 0x3) = (uint8_t)(MEM8(edx + 0x3) | 1); /* 0x140F42D5: or byte ptr [edx + 3], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_140F42DF; /* 0x140F42D9: jmp 0x140f42df */
L_140F42DB:
    _flag_a = (uint32_t)((MEM8(edx + 0x3) | 0x41u)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x3) | 0x41u)) << 24;
    MEM8(edx + 0x3) = (uint8_t)(MEM8(edx + 0x3) | 0x41u); /* 0x140F42DB: or byte ptr [edx + 3], 0x41 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_140F42DF:
    /* cmp ecx, 0x3Au */ /* 0x140F42DF: cmp ecx, 0x3a */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_140F42F2; /* 0x140F42E2: jl 0x140f42f2 */
L_140F42E4:
    /* cmp ecx, 0x3Fu */ /* 0x140F42E4: cmp ecx, 0x3f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_140F42EE; /* 0x140F42E7: jle 0x140f42ee */
L_140F42E9:
    /* cmp ecx, 0x43u */ /* 0x140F42E9: cmp ecx, 0x43 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F42F2; /* 0x140F42EC: jne 0x140f42f2 */
L_140F42EE:
    _flag_a = (uint32_t)((MEM8(edx + 0x3) | 4)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x3) | 4)) << 24;
    MEM8(edx + 0x3) = (uint8_t)(MEM8(edx + 0x3) | 4); /* 0x140F42EE: or byte ptr [edx + 3], 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_140F42F2:
    eax = edx; /* 0x140F42F2: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x140F42F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F42F5: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x140F4267u: goto L_140F4267;
      case 0x140F426Du: goto L_140F426D;
      case 0x140F4273u: goto L_140F4273;
      case 0x140F427Du: goto L_140F427D;
      case 0x140F4287u: goto L_140F4287;
      case 0x140F428Du: goto L_140F428D;
      case 0x140F4293u: goto L_140F4293;
      case 0x140F4299u: goto L_140F4299;
      case 0x140F429Fu: goto L_140F429F;
      case 0x140F42A5u: goto L_140F42A5;
      case 0x140F42ABu: goto L_140F42AB;
      case 0x140F42B1u: goto L_140F42B1;
      case 0x140F42CBu: goto L_140F42CB;
      case 0x140F42D1u: goto L_140F42D1;
      case 0x140F42D5u: goto L_140F42D5;
      case 0x140F42DBu: goto L_140F42DB;
      case 0x140F42DFu: goto L_140F42DF;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F43B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F43B0u);

L_140F43B0:
    edi = edi; /* 0x140F43B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F43B2: push ebp */
    ebp = esp; /* 0x140F43B3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x140F43B5: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x140F43B6: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x140F43B9: push edi */
    edi = ecx; /* 0x140F43BA: mov edi, ecx */
    /* test LO8(ebx), 2 */ /* 0x140F43BC: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F43C9; /* 0x140F43BF: jne 0x140f43c9 */
L_140F43C1:
    edi = POP32_VAL(esp); /* 0x140F43C1: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F43C2: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x140F43C4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F43C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F43C6: ret 8 */
L_140F43C9:
    PUSH32(esp, esi); /* 0x140F43C9: push esi */
    esi = MEM32(ebp + 0xC); /* 0x140F43CA: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x140F43CD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F441E; /* 0x140F43CF: je 0x140f441e */
L_140F43D1:
    MEM32(esi + 0x4) = 0x10u; /* 0x140F43D1: mov dword ptr [esi + 4], 0x10 */
    eax = MEM32(edi + 0x20); /* 0x140F43D8: mov eax, dword ptr [edi + 0x20] */
    MEM32(esi + 0x18) = eax; /* 0x140F43DB: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(edi + 0x24); /* 0x140F43DE: mov eax, dword ptr [edi + 0x24] */
    MEM32(esi + 0x1C) = eax; /* 0x140F43E1: mov dword ptr [esi + 0x1c], eax */
    eax = MEM32(edi + 0x20); /* 0x140F43E4: mov eax, dword ptr [edi + 0x20] */
    MEM32(esi + 0x20) = eax; /* 0x140F43E7: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(edi + 0x24); /* 0x140F43EA: mov eax, dword ptr [edi + 0x24] */
    MEM32(esi + 0x24) = eax; /* 0x140F43ED: mov dword ptr [esi + 0x24], eax */
    eax = MEM32(edi + 0x20); /* 0x140F43F0: mov eax, dword ptr [edi + 0x20] */
    MEM32(esi + 0x28) = eax; /* 0x140F43F3: mov dword ptr [esi + 0x28], eax */
    eax = MEM32(edi + 0x24); /* 0x140F43F6: mov eax, dword ptr [edi + 0x24] */
    MEM32(esi + 0x2C) = eax; /* 0x140F43F9: mov dword ptr [esi + 0x2c], eax */
    MEM32(esi + 0x30) = 1; /* 0x140F43FC: mov dword ptr [esi + 0x30], 1 */
    eax = MEM32(edi + 0x2C); /* 0x140F4403: mov eax, dword ptr [edi + 0x2c] */
    MEM32(esi + 0x34) = eax; /* 0x140F4406: mov dword ptr [esi + 0x34], eax */
    MEM32(esi + 0x48) = 0; /* 0x140F4409: mov dword ptr [esi + 0x48], 0 */
    MEM32(esi + 0x4C) = 0; /* 0x140F4410: mov dword ptr [esi + 0x4c], 0 */
    MEM32(esi + 0x50) = 0; /* 0x140F4417: mov dword ptr [esi + 0x50], 0 */
L_140F441E:
    /* cmp MEM32(edi + 0x1C), 0 */ /* 0x140F441E: cmp dword ptr [edi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F4439; /* 0x140F4422: je 0x140f4439 */
L_140F4424:
    ecx = MEM32(edi + 0x1C); /* 0x140F4424: mov ecx, dword ptr [edi + 0x1c] */
    eax = MEM32(ecx); /* 0x140F4427: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x140F4429: push esi */
    PUSH32(esp, ebx); /* 0x140F442A: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x140F442B: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F442E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F4439; /* 0x140F4430: jne 0x140f4439 */
L_140F4432:
    esi = POP32_VAL(esp); /* 0x140F4432: pop esi */
    edi = POP32_VAL(esp); /* 0x140F4433: pop edi */
    ebx = POP32_VAL(esp); /* 0x140F4434: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F4435: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F4436: ret 8 */
L_140F4439:
    /* test esi, esi */ /* 0x140F4439: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F44F6; /* 0x140F443B: je 0x140f44f6 */
L_140F4441:
    eax = MEM32(edi + 0x4); /* 0x140F4441: mov eax, dword ptr [edi + 4] */
    MEM32(esi) = eax; /* 0x140F4444: mov dword ptr [esi], eax */
    eax = MEM32(edi + 0x18); /* 0x140F4446: mov eax, dword ptr [edi + 0x18] */
    MEM32(esi + 0x8) = eax; /* 0x140F4449: mov dword ptr [esi + 8], eax */
    /* test LO8(ebx), 8 */ /* 0x140F444C: test bl, 8 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F4464; /* 0x140F444F: je 0x140f4464 */
L_140F4451:
    eax = MEM32(edi + 0x18); /* 0x140F4451: mov eax, dword ptr [edi + 0x18] */
    MEM32(esi + 0x4) = eax; /* 0x140F4454: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x30) = 1; /* 0x140F4457: mov dword ptr [esi + 0x30], 1 */
    eax = MEM32(edi + 0x2C); /* 0x140F445E: mov eax, dword ptr [edi + 0x2c] */
    MEM32(esi + 0x34) = eax; /* 0x140F4461: mov dword ptr [esi + 0x34], eax */
L_140F4464:
    MEM32(esi + 0xC) = edi; /* 0x140F4464: mov dword ptr [esi + 0xc], edi */
    eax = MEM32(edi + 0x1C); /* 0x140F4467: mov eax, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x10) = eax; /* 0x140F446A: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(edi + 0x2C); /* 0x140F446D: mov eax, dword ptr [edi + 0x2c] */
    MEM32(esi + 0x38) = eax; /* 0x140F4470: mov dword ptr [esi + 0x38], eax */
    eax = MEM32(esi + 0x18); /* 0x140F4473: mov eax, dword ptr [esi + 0x18] */
    MEM32(esi + 0x20) = eax; /* 0x140F4476: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(esi + 0x1C); /* 0x140F4479: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(esi + 0x20); /* 0x140F447C: mov ecx, dword ptr [esi + 0x20] */
    MEM32(esi + 0x24) = eax; /* 0x140F447F: mov dword ptr [esi + 0x24], eax */
    MEM32(esi + 0x3C) = 0; /* 0x140F4482: mov dword ptr [esi + 0x3c], 0 */
    MEM32(esi + 0x40) = 0; /* 0x140F4489: mov dword ptr [esi + 0x40], 0 */
    eax = MEM32(edi + 0x20); /* 0x140F4490: mov eax, dword ptr [edi + 0x20] */
    MEM32(esi + 0x18) = eax; /* 0x140F4493: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(edi + 0x24); /* 0x140F4496: mov eax, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)((ecx | MEM32(esi + 0x18))); _flag_b = (uint32_t)((ecx | MEM32(esi + 0x18)));
    ecx = ecx | MEM32(esi + 0x18); /* 0x140F4499: or ecx, dword ptr [esi + 0x18] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) & 0xFCu); /* 0x140F449C: and byte ptr [esi + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x1C) = eax; /* 0x140F44A0: mov dword ptr [esi + 0x1c], eax */
    eax = MEM32(esi + 0x24); /* 0x140F44A3: mov eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0x1C))); _flag_b = (uint32_t)((eax | MEM32(esi + 0x1C)));
    eax = eax | MEM32(esi + 0x1C); /* 0x140F44A6: or eax, dword ptr [esi + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x28) = ecx; /* 0x140F44A9: mov dword ptr [esi + 0x28], ecx */
    MEM32(esi + 0x2C) = eax; /* 0x140F44AC: mov dword ptr [esi + 0x2c], eax */
    eax = MEM32(esi + 0x54); /* 0x140F44AF: mov eax, dword ptr [esi + 0x54] */
    MEM32(esi + 0x4C) = eax; /* 0x140F44B2: mov dword ptr [esi + 0x4c], eax */
    MEM32(esi + 0x50) = eax; /* 0x140F44B5: mov dword ptr [esi + 0x50], eax */
    MEM32(esi + 0x44) = 0; /* 0x140F44B8: mov dword ptr [esi + 0x44], 0 */
    MEM32(esi + 0x54) = 0; /* 0x140F44BF: mov dword ptr [esi + 0x54], 0 */
    eax = MEM32(edi + 0x18); /* 0x140F44C6: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFEAu; /* 0x140F44C9: add eax, -0x16 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x31u */ /* 0x140F44CC: cmp eax, 0x31 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x31u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F44F6; /* 0x140F44CF: ja 0x140f44f6 */
L_140F44D1:
    eax = (uint32_t)MEM8(eax + 0x140F450C); /* 0x140F44D1: movzx eax, byte ptr [eax + 0x140f450c] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140F4500)); goto _ljump; }
L_140F44DF:
    MEM32(esi + 0x3C) = 1; /* 0x140F44DF: mov dword ptr [esi + 0x3c], 1 */
    esi = POP32_VAL(esp); /* 0x140F44E6: pop esi */
    edi = POP32_VAL(esp); /* 0x140F44E7: pop edi */
    SET_LO8(eax, 1); /* 0x140F44E8: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x140F44EA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F44EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F44EC: ret 8 */
L_140F44EF:
    MEM32(esi + 0x40) = 1; /* 0x140F44EF: mov dword ptr [esi + 0x40], 1 */
L_140F44F6:
    esi = POP32_VAL(esp); /* 0x140F44F6: pop esi */
    edi = POP32_VAL(esp); /* 0x140F44F7: pop edi */
    SET_LO8(eax, 1); /* 0x140F44F8: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x140F44FA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F44FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F44FC: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x140F44DFu: goto L_140F44DF;
      case 0x140F44EFu: goto L_140F44EF;
      case 0x140F44F6u: goto L_140F44F6;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F4550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4550u);

L_140F4550:
    edi = edi; /* 0x140F4550: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4552: push ebp */
    ebp = esp; /* 0x140F4553: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140F4555: push esi */
    PUSH32(esp, edi); /* 0x140F4556: push edi */
    edi = MEM32(ebp + 0x8); /* 0x140F4557: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x140F455A: mov esi, ecx */
    /* cmp esi, edi */ /* 0x140F455C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F4568; /* 0x140F455E: jne 0x140f4568 */
L_140F4560:
    edi = POP32_VAL(esp); /* 0x140F4560: pop edi */
    SET_LO8(eax, 1); /* 0x140F4561: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x140F4563: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F4564: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F4565: ret 4 */
L_140F4568:
    eax = MEM32(edi + 0x4); /* 0x140F4568: mov eax, dword ptr [edi + 4] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x140F456B: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F4578; /* 0x140F456E: je 0x140f4578 */
L_140F4570:
    edi = POP32_VAL(esp); /* 0x140F4570: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F4571: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x140F4573: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F4574: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F4575: ret 4 */
L_140F4578:
    eax = MEM32(esi + 0x18); /* 0x140F4578: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, MEM32(edi + 0x18) */ /* 0x140F457B: cmp eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F45BF; /* 0x140F457E: jne 0x140f45bf */
L_140F4580:
    edx = MEM32(edi + 0x1C); /* 0x140F4580: mov edx, dword ptr [edi + 0x1c] */
    ecx = MEM32(esi + 0x1C); /* 0x140F4583: mov ecx, dword ptr [esi + 0x1c] */
    /* cmp ecx, edx */ /* 0x140F4586: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F459C; /* 0x140F4588: je 0x140f459c */
L_140F458A:
    /* test ecx, ecx */ /* 0x140F458A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F45BF; /* 0x140F458C: je 0x140f45bf */
L_140F458E:
    /* test edx, edx */ /* 0x140F458E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F45BF; /* 0x140F4590: je 0x140f45bf */
L_140F4592:
    eax = MEM32(ecx); /* 0x140F4592: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x140F4594: push edx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x140F4595: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F4598: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F45BF; /* 0x140F459A: je 0x140f45bf */
L_140F459C:
    eax = MEM32(esi + 0x20); /* 0x140F459C: mov eax, dword ptr [esi + 0x20] */
    /* cmp eax, MEM32(edi + 0x20) */ /* 0x140F459F: cmp eax, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F45BF; /* 0x140F45A2: jne 0x140f45bf */
L_140F45A4:
    eax = MEM32(esi + 0x24); /* 0x140F45A4: mov eax, dword ptr [esi + 0x24] */
    /* cmp eax, MEM32(edi + 0x24) */ /* 0x140F45A7: cmp eax, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F45BF; /* 0x140F45AA: jne 0x140f45bf */
L_140F45AC:
    eax = MEM32(esi + 0x28); /* 0x140F45AC: mov eax, dword ptr [esi + 0x28] */
    /* cmp eax, MEM32(edi + 0x28) */ /* 0x140F45AF: cmp eax, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F45BF; /* 0x140F45B2: jne 0x140f45bf */
L_140F45B4:
    edi = POP32_VAL(esp); /* 0x140F45B4: pop edi */
    eax = 1; /* 0x140F45B5: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x140F45BA: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F45BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F45BC: ret 4 */
L_140F45BF:
    edi = POP32_VAL(esp); /* 0x140F45BF: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F45C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140F45C2: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F45C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F45C4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F45D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F45D0u);

L_140F45D0:
    MEM32(eax + 0x8) = 0; /* 0x140F45D0: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x140F45D7: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x140F45DE: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x140F45E5: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax) = 0x14041708u; /* 0x140F45EC: mov dword ptr [eax], 0x14041708 */
    MEM32(eax + 0x4) = 7; /* 0x140F45F2: mov dword ptr [eax + 4], 7 */
    MEM32(eax + 0x20) = 0x10u; /* 0x140F45F9: mov dword ptr [eax + 0x20], 0x10 */
    MEM32(eax + 0x18) = 0; /* 0x140F4600: mov dword ptr [eax + 0x18], 0 */
    MEM32(eax + 0x1C) = 0; /* 0x140F4607: mov dword ptr [eax + 0x1c], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F460E: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F4620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4620u);

L_140F4620:
    edi = edi; /* 0x140F4620: mov edi, edi */
    PUSH32(esp, esi); /* 0x140F4622: push esi */
    esi = ecx; /* 0x140F4623: mov esi, ecx */
    ecx = MEM32(esi + 0x18); /* 0x140F4625: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x140F4628: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140F462A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x1C)); /* 0x140F462D: imul eax, dword ptr [esi + 0x1c] */
    esi = POP32_VAL(esp); /* 0x140F4631: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F4632: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F4640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4640u);

L_140F4640:
    edi = edi; /* 0x140F4640: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4642: push ebp */
    ebp = esp; /* 0x140F4643: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x140F4645: push ebx */
    PUSH32(esp, esi); /* 0x140F4646: push esi */
    esi = MEM32(ebp + 0x8); /* 0x140F4647: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x140F464A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x140F464B: mov edi, dword ptr [ebp + 0xc] */
    ebx = ecx; /* 0x140F464E: mov ebx, ecx */
    ecx = MEM32(ebx + 0x18); /* 0x140F4650: mov ecx, dword ptr [ebx + 0x18] */
    eax = MEM32(ecx); /* 0x140F4653: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x140F4655: push edi */
    PUSH32(esp, esi); /* 0x140F4656: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140F4657: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F465A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F46B8; /* 0x140F465C: js 0x140f46b8 */
L_140F465E:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F4675; /* 0x140F465E: jne 0x140f4675 */
L_140F4660:
    /* cmp MEM32(edi + 0x4), 0 */ /* 0x140F4660: cmp dword ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F46B6; /* 0x140F4664: jne 0x140f46b6 */
L_140F4666:
    MEM32(edi + 0x8) = esi; /* 0x140F4666: mov dword ptr [edi + 8], esi */
    MEM32(edi + 0x4) = ebx; /* 0x140F4669: mov dword ptr [edi + 4], ebx */
    edi = POP32_VAL(esp); /* 0x140F466C: pop edi */
    esi = POP32_VAL(esp); /* 0x140F466D: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F466E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140F4670: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F4671: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F4672: ret 8 */
L_140F4675:
    eax = MEM32(ebx + 0x1C); /* 0x140F4675: mov eax, dword ptr [ebx + 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x8)); /* 0x140F4678: imul eax, dword ptr [edi + 8] */
    /* cmp esi, eax */ /* 0x140F467C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_140F468F; /* 0x140F467E: jb 0x140f468f */
L_140F4680:
    MEM32(edi + 0x8) = eax; /* 0x140F4680: mov dword ptr [edi + 8], eax */
    edi = POP32_VAL(esp); /* 0x140F4683: pop edi */
    esi = POP32_VAL(esp); /* 0x140F4684: pop esi */
    eax = 1; /* 0x140F4685: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x140F468A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F468B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F468C: ret 8 */
L_140F468F:
    eax = MEM32(ebp + 0x8); /* 0x140F468F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140F4692: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(edi + 0x8); /* 0x140F4694: div dword ptr [edi + 8] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ebx + 0x18); /* 0x140F4697: mov ecx, dword ptr [ebx + 0x18] */
    esi = MEM32(ecx); /* 0x140F469A: mov esi, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x140F469C: push edi */
    PUSH32(esp, edx); /* 0x140F469D: push edx */
    RECOMP_ICALL(MEM32(esi + 0x8)); /* 0x140F469E: call dword ptr [esi + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F46A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F46B8; /* 0x140F46A3: js 0x140f46b8 */
L_140F46A5:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F46B8; /* 0x140F46A5: jne 0x140f46b8 */
L_140F46A7:
    /* cmp MEM32(edi + 0x4), 0 */ /* 0x140F46A7: cmp dword ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F46B6; /* 0x140F46AB: jne 0x140f46b6 */
L_140F46AD:
    eax = MEM32(ebp + 0x8); /* 0x140F46AD: mov eax, dword ptr [ebp + 8] */
    MEM32(edi + 0x8) = eax; /* 0x140F46B0: mov dword ptr [edi + 8], eax */
    MEM32(edi + 0x4) = ebx; /* 0x140F46B3: mov dword ptr [edi + 4], ebx */
L_140F46B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F46B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F46B8:
    edi = POP32_VAL(esp); /* 0x140F46B8: pop edi */
    esi = POP32_VAL(esp); /* 0x140F46B9: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F46BA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F46BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F46BC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F46D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F46D0u);

L_140F46D0:
    edi = edi; /* 0x140F46D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F46D2: push ebp */
    ebp = esp; /* 0x140F46D3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x140F46D5: push dword ptr [ebp + 0x20] */
    eax = MEM32(ebp + 0x18); /* 0x140F46D8: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x140F46DB: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x140F46DE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140F46E1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140F46E4: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x140F46E7: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, MEM32(ecx + 0x18)); /* 0x140F46EA: push dword ptr [ecx + 0x18] */
    ecx = MEM32(ebp + 0x14); /* 0x140F46ED: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_140F2120); /* 0x140F46F0: call 0x140f2120 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x140F46F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x140F46F6: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_140F4700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4700u);

L_140F4700:
    edi = edi; /* 0x140F4700: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4702: push ebp */
    ebp = esp; /* 0x140F4703: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140F4705: push ecx */
    PUSH32(esp, ebx); /* 0x140F4706: push ebx */
    ebx = ecx; /* 0x140F4707: mov ebx, ecx */
    /* cmp MEM32(ebx + 0x1C), 0 */ /* 0x140F4709: cmp dword ptr [ebx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x140F470D: push esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F4773; /* 0x140F470E: jbe 0x140f4773 */
L_140F4710:
    esi = MEM32(ebp + 0xC); /* 0x140F4710: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebx + 0x18); /* 0x140F4713: mov ecx, dword ptr [ebx + 0x18] */
    eax = MEM32(ecx); /* 0x140F4716: mov eax, dword ptr [ecx] */
    edx = ebp + 0xC; /* 0x140F4718: lea edx, [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x140F471B: push edx */
    PUSH32(esp, esi); /* 0x140F471C: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140F471D: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = esi; /* 0x140F4720: mov dword ptr [ebp - 4], esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x140F4723: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F4726: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F477E; /* 0x140F4728: js 0x140f477e */
L_140F472A:
    edx = MEM32(ebp + 0xC); /* 0x140F472A: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x140F472D: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140F472E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x1C), edi */ /* 0x140F4730: cmp dword ptr [ebx + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F475D; /* 0x140F4733: jbe 0x140f475d */
L_140F4735:
    eax = MEM32(ebp + (-0x4)); /* 0x140F4735: mov eax, dword ptr [ebp - 4] */
    /* cmp esi, eax */ /* 0x140F4738: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F474D; /* 0x140F473A: je 0x140f474d */
L_140F473C:
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x140F473C: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x140F473C: shl edx, 4 */
    PUSH32(esp, edx); /* 0x140F473F: push edx */
    PUSH32(esp, eax); /* 0x140F4740: push eax */
    PUSH32(esp, esi); /* 0x140F4741: push esi */
    RECOMP_CALL(sub_141EC9A4); /* 0x140F4742: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0xC); /* 0x140F4747: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140F474A: add esp, 0xc */
    _flag_k = FK_ADD;
L_140F474D:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - edx; /* 0x140F474D: sub dword ptr [ebp + 8], edx */
    _flag_k = FK_CMP;
    eax = edx; /* 0x140F4750: mov eax, edx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x140F4752: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x140F4752: shl eax, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x140F4755: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x140F4756: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebx + 0x1C) */ /* 0x140F4758: cmp edi, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140F4735; /* 0x140F475B: jb 0x140f4735 */
L_140F475D:
    ecx = MEM32(ebx + 0x1C); /* 0x140F475D: mov ecx, dword ptr [ebx + 0x1c] */
    eax = MEM32(ebp + 0x10); /* 0x140F4760: mov eax, dword ptr [ebp + 0x10] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x140F4763: imul ecx, edx */
    edi = POP32_VAL(esp); /* 0x140F4766: pop edi */
    esi = POP32_VAL(esp); /* 0x140F4767: pop esi */
    MEM32(eax) = ecx; /* 0x140F4768: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F476A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140F476C: pop ebx */
    esp = ebp; /* 0x140F476D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F476F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F4770: ret 0xc */
L_140F4773:
    eax = MEM32(ebp + 0x10); /* 0x140F4773: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = 0; /* 0x140F4776: mov dword ptr [eax], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F477C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F477E:
    esi = POP32_VAL(esp); /* 0x140F477E: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F477F: pop ebx */
    esp = ebp; /* 0x140F4780: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F4782: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F4783: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140F4790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4790u);

L_140F4790:
    edi = edi; /* 0x140F4790: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4792: push ebp */
    ebp = esp; /* 0x140F4793: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x140F4795: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x140F4798: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x140F479D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x140F479F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x140F47A2: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x140F47A5: push ebx */
    PUSH32(esp, esi); /* 0x140F47A6: push esi */
    ebx = ecx; /* 0x140F47A7: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x140F47A9: push edi */
    MEM32(ebp + (-0x3C)) = eax; /* 0x140F47AA: mov dword ptr [ebp - 0x3c], eax */
    esi = ebx; /* 0x140F47AD: mov esi, ebx */
    /* nop */ /* 0x140F47AF: nop  */
L_140F47B0:
    /* test esi, esi */ /* 0x140F47B0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F47BF; /* 0x140F47B2: je 0x140f47bf */
L_140F47B4:
    /* cmp MEM32(esi + 0x4), 0xAu */ /* 0x140F47B4: cmp dword ptr [esi + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F47BF; /* 0x140F47B8: jne 0x140f47bf */
L_140F47BA:
    esi = MEM32(esi + 0x20); /* 0x140F47BA: mov esi, dword ptr [esi + 0x20] */
    RECOMP_BACKEDGE();
    goto L_140F47B0; /* 0x140F47BD: jmp 0x140f47b0 */
L_140F47BF:
    eax = MEM32(ebx + 0x20); /* 0x140F47BF: mov eax, dword ptr [ebx + 0x20] */
    /* cmp eax, 0x38u */ /* 0x140F47C2: cmp eax, 0x38 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F4888; /* 0x140F47C5: je 0x140f4888 */
L_140F47CB:
    /* cmp eax, 0x39u */ /* 0x140F47CB: cmp eax, 0x39 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x39u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F4883; /* 0x140F47CE: je 0x140f4883 */
L_140F47D4:
    edx = MEM32(ebx + 0x18); /* 0x140F47D4: mov edx, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140F47D7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_14086500); /* 0x140F47D9: call 0x14086500 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x140F47DE: mov edi, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + (-0x3C)); /* 0x140F47E1: mov esi, dword ptr [ebp - 0x3c] */
    edx = MEM32(eax); /* 0x140F47E4: mov edx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x140F47E6: push edi */
    PUSH32(esp, esi); /* 0x140F47E7: push esi */
    ecx = eax; /* 0x140F47E8: mov ecx, eax */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x140F47EA: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F47ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F493A; /* 0x140F47EF: js 0x140f493a */
L_140F47F5:
    /* test ebx, ebx */ /* 0x140F47F5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F4938; /* 0x140F47F7: je 0x140f4938 */
L_140F47FD:
    /* cmp MEM32(ebx + 0x4), 0xAu */ /* 0x140F47FD: cmp dword ptr [ebx + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F4808; /* 0x140F4801: jne 0x140f4808 */
L_140F4803:
    ebx = MEM32(ebx + 0x20); /* 0x140F4803: mov ebx, dword ptr [ebx + 0x20] */
    RECOMP_BACKEDGE();
    goto L_140F47F5; /* 0x140F4806: jmp 0x140f47f5 */
L_140F4808:
    /* test ebx, ebx */ /* 0x140F4808: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F4938; /* 0x140F480A: je 0x140f4938 */
L_140F4810:
    /* cmp MEM32(ebx + 0x4), 7 */ /* 0x140F4810: cmp dword ptr [ebx + 4], 7 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F4938; /* 0x140F4814: jne 0x140f4938 */
L_140F481A:
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x140F481A: push dword ptr [ebx + 0x1c] */
    eax = ebp + (-0x38); /* 0x140F481D: lea eax, [ebp - 0x38] */
    PUSH32(esp, 0x140341E0u); /* 0x140F4820: push 0x140341e0 */
    PUSH32(esp, 0x32u); /* 0x140F4825: push 0x32 */
    PUSH32(esp, eax); /* 0x140F4827: push eax */
    RECOMP_CALL(sub_140683B0); /* 0x140F4828: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x140F482D: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140F4830: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F493A; /* 0x140F4832: js 0x140f493a */
L_140F4838:
    eax = MEM32(ebp + (-0x3C)); /* 0x140F4838: mov eax, dword ptr [ebp - 0x3c] */
    esi = ebp + (-0x40); /* 0x140F483B: lea esi, [ebp - 0x40] */
    edx = edi; /* 0x140F483E: mov edx, edi */
    RECOMP_CALL(sub_140F5A00); /* 0x140F4840: call 0x140f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F4845: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F493A; /* 0x140F4847: js 0x140f493a */
L_140F484D:
    eax = MEM32(ebp + (-0x40)); /* 0x140F484D: mov eax, dword ptr [ebp - 0x40] */
    ecx = edi; /* 0x140F4850: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x140F4852: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x3C)); /* 0x140F4854: add eax, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    edx = ebp + (-0x38); /* 0x140F4857: lea edx, [ebp - 0x38] */
    RECOMP_CALL(sub_140E3180); /* 0x140F485A: call 0x140e3180 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F485F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F493A; /* 0x140F4861: js 0x140f493a */
L_140F4867:
    ebx = MEM32(ebx + 0x18); /* 0x140F4867: mov ebx, dword ptr [ebx + 0x18] */
    ebx = ebx; /* 0x140F486A: lea ebx, [ebx] */
L_140F4870:
    /* test ebx, ebx */ /* 0x140F4870: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F4938; /* 0x140F4872: je 0x140f4938 */
L_140F4878:
    /* cmp MEM32(ebx + 0x4), 0xAu */ /* 0x140F4878: cmp dword ptr [ebx + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F4808; /* 0x140F487C: jne 0x140f4808 */
L_140F487E:
    ebx = MEM32(ebx + 0x20); /* 0x140F487E: mov ebx, dword ptr [ebx + 0x20] */
    RECOMP_BACKEDGE();
    goto L_140F4870; /* 0x140F4881: jmp 0x140f4870 */
L_140F4883:
    /* cmp eax, 0x38u */ /* 0x140F4883: cmp eax, 0x38 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F488F; /* 0x140F4886: jne 0x140f488f */
L_140F4888:
    ecx = 0x1403F40Cu; /* 0x140F4888: mov ecx, 0x1403f40c */
    goto L_140F4894; /* 0x140F488D: jmp 0x140f4894 */
L_140F488F:
    ecx = 0x1403F48Cu; /* 0x140F488F: mov ecx, 0x1403f48c */
L_140F4894:
    edi = ecx; /* 0x140F4894: mov edi, ecx */
    edx = edi + 0x1; /* 0x140F4896: lea edx, [edi + 1] */
    esp = esp; /* 0x140F4899: lea esp, [esp] */
L_140F48A0:
    SET_LO8(eax, MEM8(edi)); /* 0x140F48A0: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x140F48A2: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x140F48A3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F48A0; /* 0x140F48A5: jne 0x140f48a0 */
L_140F48A7:
    ebx = MEM32(ebp + 0xC); /* 0x140F48A7: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x140F48AA: push ecx */
    PUSH32(esp, 0x14035794u); /* 0x140F48AB: push 0x14035794 */
    PUSH32(esp, ebx); /* 0x140F48B0: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x140F48B1: push dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x140F48B4: sub edi, edx */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_140683B0); /* 0x140F48B6: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x140F48BB: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140F48BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F493A; /* 0x140F48C0: js 0x140f493a */
L_140F48C2:
    ecx = MEM32(esi + 0x18); /* 0x140F48C2: mov ecx, dword ptr [esi + 0x18] */
L_140F48C5:
    /* test ecx, ecx */ /* 0x140F48C5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F48D4; /* 0x140F48C7: je 0x140f48d4 */
L_140F48C9:
    /* cmp MEM32(ecx + 0x4), 0xAu */ /* 0x140F48C9: cmp dword ptr [ecx + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F48D4; /* 0x140F48CD: jne 0x140f48d4 */
L_140F48CF:
    ecx = MEM32(ecx + 0x20); /* 0x140F48CF: mov ecx, dword ptr [ecx + 0x20] */
    RECOMP_BACKEDGE();
    goto L_140F48C5; /* 0x140F48D2: jmp 0x140f48c5 */
L_140F48D4:
    eax = edi + 0x1; /* 0x140F48D4: lea eax, [edi + 1] */
    /* cmp eax, ebx */ /* 0x140F48D7: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F48DF; /* 0x140F48D9: jbe 0x140f48df */
L_140F48DB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F48DB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140F48E4; /* 0x140F48DD: jmp 0x140f48e4 */
L_140F48DF:
    eax = ebx; /* 0x140F48DF: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x140F48E1: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140F48E3: dec eax */
    _flag_k = FK_DEC;
L_140F48E4:
    edx = MEM32(ecx); /* 0x140F48E4: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x140F48E6: push eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x140F48E7: mov eax, dword ptr [ebp - 0x3c] */
    eax = eax + edi + 0x1; /* 0x140F48EA: lea eax, [eax + edi + 1] */
    PUSH32(esp, eax); /* 0x140F48EE: push eax */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x140F48EF: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F48F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F493A; /* 0x140F48F4: js 0x140f493a */
L_140F48F6:
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x140F48F6: push dword ptr [esi + 0x1c] */
    eax = ebp + (-0x38); /* 0x140F48F9: lea eax, [ebp - 0x38] */
    PUSH32(esp, 0x14041504u); /* 0x140F48FC: push 0x14041504 */
    PUSH32(esp, 0x32u); /* 0x140F4901: push 0x32 */
    PUSH32(esp, eax); /* 0x140F4903: push eax */
    RECOMP_CALL(sub_140683B0); /* 0x140F4904: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x140F4909: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140F490C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F493A; /* 0x140F490E: js 0x140f493a */
L_140F4910:
    edi = MEM32(ebp + (-0x3C)); /* 0x140F4910: mov edi, dword ptr [ebp - 0x3c] */
    esi = ebp + (-0x40); /* 0x140F4913: lea esi, [ebp - 0x40] */
    edx = ebx; /* 0x140F4916: mov edx, ebx */
    eax = edi; /* 0x140F4918: mov eax, edi */
    RECOMP_CALL(sub_140F5A00); /* 0x140F491A: call 0x140f5a00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F491F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F493A; /* 0x140F4921: js 0x140f493a */
L_140F4923:
    eax = MEM32(ebp + (-0x40)); /* 0x140F4923: mov eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x140F4926: sub ebx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x140F4928: add eax, edi */
    _flag_k = FK_ADD;
    edx = ebp + (-0x38); /* 0x140F492A: lea edx, [ebp - 0x38] */
    ecx = ebx; /* 0x140F492D: mov ecx, ebx */
    RECOMP_CALL(sub_140E3180); /* 0x140F492F: call 0x140e3180 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F4934: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F493A; /* 0x140F4936: js 0x140f493a */
L_140F4938:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F4938: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F493A:
    ecx = MEM32(ebp + (-0x4)); /* 0x140F493A: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x140F493D: pop edi */
    esi = POP32_VAL(esp); /* 0x140F493E: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140F493F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140F4941: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x140F4942: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140F4947: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F4949: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F494A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F4960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4960u);

L_140F4960:
    edi = edi; /* 0x140F4960: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4962: push ebp */
    ebp = esp; /* 0x140F4963: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x140F4965: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x18); /* 0x140F4968: mov ecx, dword ptr [ecx + 0x18] */
    MEM32(eax) = ecx; /* 0x140F496B: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F496D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x140F496F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F4970: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F4980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4980u);

L_140F4980:
    edi = edi; /* 0x140F4980: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4982: push ebp */
    ebp = esp; /* 0x140F4983: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x140F4985: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x140F4988: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x140F498D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x140F498F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x140F4992: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x140F4995: push ebx */
    ebx = ecx; /* 0x140F4996: mov ebx, ecx */
    ecx = MEM32(ebx + 0x18); /* 0x140F4998: mov ecx, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x44)) = eax; /* 0x140F499B: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ecx); /* 0x140F499E: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x140F49A0: mov dword ptr [ebp - 0x3c], ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140F49A3: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140F49A6: mov ecx, eax */
    MEM32(ebp + (-0x40)) = ecx; /* 0x140F49A8: mov dword ptr [ebp - 0x40], ecx */
    /* test ecx, ecx */ /* 0x140F49AB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F49C3; /* 0x140F49AD: jne 0x140f49c3 */
L_140F49AF:
    eax = ecx + 0x1; /* 0x140F49AF: lea eax, [ecx + 1] */
    ebx = POP32_VAL(esp); /* 0x140F49B2: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x140F49B3: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140F49B6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x140F49B8: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140F49BD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F49BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F49C0: ret 8 */
L_140F49C3:
    PUSH32(esp, esi); /* 0x140F49C3: push esi */
    PUSH32(esp, edi); /* 0x140F49C4: push edi */
    edi = MEM32(ebp + 0xC); /* 0x140F49C5: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140F49C8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x140F49CA: mov eax, edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x140F49CC: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x140F49CE: mov esi, eax */
    /* cmp esi, MEM32(ebx + 0x1C) */ /* 0x140F49D0: cmp esi, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_140F49ED; /* 0x140F49D3: jb 0x140f49ed */
L_140F49D5:
    edi = POP32_VAL(esp); /* 0x140F49D5: pop edi */
    esi = POP32_VAL(esp); /* 0x140F49D6: pop esi */
    eax = 1; /* 0x140F49D7: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x140F49DC: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x140F49DD: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140F49E0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x140F49E2: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140F49E7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F49E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F49EA: ret 8 */
L_140F49ED:
    PUSH32(esp, esi); /* 0x140F49ED: push esi */
    PUSH32(esp, 0x140341E0u); /* 0x140F49EE: push 0x140341e0 */
    eax = ebp + (-0x38); /* 0x140F49F3: lea eax, [ebp - 0x38] */
    PUSH32(esp, 0x32u); /* 0x140F49F6: push 0x32 */
    PUSH32(esp, eax); /* 0x140F49F8: push eax */
    RECOMP_CALL(sub_140683B0); /* 0x140F49F9: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x140F49FE: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140F4A01: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F4A41; /* 0x140F4A03: js 0x140f4a41 */
L_140F4A05:
    eax = ebp + (-0x38); /* 0x140F4A05: lea eax, [ebp - 0x38] */
    edx = eax + 0x1; /* 0x140F4A08: lea edx, [eax + 1] */
    goto L_140F4A10; /* 0x140F4A0B: jmp 0x140f4a10 */
L_140F4A10:
    SET_LO8(ecx, MEM8(eax)); /* 0x140F4A10: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140F4A12: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x140F4A13: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F4A10; /* 0x140F4A15: jne 0x140f4a10 */
L_140F4A17:
    ebx = MEM32(ebp + (-0x44)); /* 0x140F4A17: mov ebx, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x140F4A1A: sub eax, edx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x38); /* 0x140F4A1C: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_14085AB0); /* 0x140F4A1F: call 0x14085ab0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F4A24: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F4A41; /* 0x140F4A26: js 0x140f4a41 */
L_140F4A28:
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x40))); /* 0x140F4A28: imul esi, dword ptr [ebp - 0x40] */
    ecx = MEM32(ebp + (-0x3C)); /* 0x140F4A2C: mov ecx, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ecx + 0x18); /* 0x140F4A2F: mov ecx, dword ptr [ecx + 0x18] */
    eax = MEM32(ecx); /* 0x140F4A32: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x140F4A34: sub edi, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x140F4A36: push edi */
    PUSH32(esp, ebx); /* 0x140F4A37: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x140F4A38: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F4A3B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F4A41; /* 0x140F4A3D: js 0x140f4a41 */
L_140F4A3F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F4A3F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F4A41:
    ecx = MEM32(ebp + (-0x4)); /* 0x140F4A41: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x140F4A44: pop edi */
    esi = POP32_VAL(esp); /* 0x140F4A45: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140F4A46: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140F4A48: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x140F4A49: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140F4A4E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F4A50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F4A51: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F4A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4A60u);

L_140F4A60:
    edi = edi; /* 0x140F4A60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4A62: push ebp */
    ebp = esp; /* 0x140F4A63: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x140F4A65: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x140F4A66: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x140F4A69: push esi */
    PUSH32(esp, edi); /* 0x140F4A6A: push edi */
    edi = ecx; /* 0x140F4A6B: mov edi, ecx */
    ecx = MEM32(edi + 0x18); /* 0x140F4A6D: mov ecx, dword ptr [edi + 0x18] */
    eax = MEM32(ecx); /* 0x140F4A70: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x140F4A72: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x140F4A73: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0xEFu) << 24;
    MEM8(ebx) = (uint8_t)(MEM8(ebx) & 0xEFu); /* 0x140F4A76: and byte ptr [ebx], 0xef */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp MEM32(edi + 0x20), 0x38u */ /* 0x140F4A79: cmp dword ptr [edi + 0x20], 0x38 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F4A7D: sete al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x140F4A80: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x140F4A82: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x140F4A84: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(ebx + 0x1))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(ebx + 0x1))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(ebx + 0x1)); /* 0x140F4A86: xor al, byte ptr [ebx + 1] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    SET_LO8(eax, LO8(eax) & 8); /* 0x140F4A89: and al, 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(ebx + 0x1) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0x1) ^ LO8(eax))) << 24;
    MEM8(ebx + 0x1) = (uint8_t)(MEM8(ebx + 0x1) ^ LO8(eax)); /* 0x140F4A8B: xor byte ptr [ebx + 1], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp MEM32(edi + 0x20), 0x39u */ /* 0x140F4A8E: cmp dword ptr [edi + 0x20], 0x39 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0x39u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, MEM8(ebx + 0x1)); /* 0x140F4A92: mov dl, byte ptr [ebx + 1] */
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F4A95: sete cl */
    if (4u) _cf = (((LO8(ecx)) >> 4) & 1u); /* 0x140F4A98: shl cl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 4u); /* 0x140F4A98: shl cl, 4 */
    _flag_a = (uint32_t)((LO8(ecx) ^ LO8(edx))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ LO8(edx))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx)); /* 0x140F4A9B: xor cl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x10u); /* 0x140F4A9D: and cl, 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x140F4AA0: pop edi */
    _flag_a = (uint32_t)((LO8(ecx) ^ LO8(edx))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ LO8(edx))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx)); /* 0x140F4AA1: xor cl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(ebx + 0x3) | 1)) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0x3) | 1)) << 24;
    MEM8(ebx + 0x3) = (uint8_t)(MEM8(ebx + 0x3) | 1); /* 0x140F4AA3: or byte ptr [ebx + 3], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x140F4AA7: pop esi */
    MEM8(ebx + 0x1) = (uint8_t)(LO8(ecx)); /* 0x140F4AA8: mov byte ptr [ebx + 1], cl */
    eax = ebx; /* 0x140F4AAB: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x140F4AAD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F4AAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F4AAF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F4AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4AC0u);

L_140F4AC0:
    edi = edi; /* 0x140F4AC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4AC2: push ebp */
    ebp = esp; /* 0x140F4AC3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x140F4AC5: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x140F4AC6: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x140F4AC9: push edi */
    edi = ecx; /* 0x140F4ACA: mov edi, ecx */
    /* test LO8(ebx), 1 */ /* 0x140F4ACC: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F4AD9; /* 0x140F4ACF: jne 0x140f4ad9 */
L_140F4AD1:
    edi = POP32_VAL(esp); /* 0x140F4AD1: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F4AD2: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x140F4AD4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F4AD5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F4AD6: ret 8 */
L_140F4AD9:
    PUSH32(esp, esi); /* 0x140F4AD9: push esi */
    esi = MEM32(ebp + 0xC); /* 0x140F4ADA: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x140F4ADD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F4B55; /* 0x140F4ADF: je 0x140f4b55 */
L_140F4AE1:
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) & 0xFCu); /* 0x140F4AE1: and byte ptr [esi + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x4) = 0x10u; /* 0x140F4AE5: mov dword ptr [esi + 4], 0x10 */
    MEM32(esi + 0x10) = 0; /* 0x140F4AEC: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x18) = 0; /* 0x140F4AF3: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x140F4AFA: mov dword ptr [esi + 0x1c], 0 */
    MEM32(esi + 0x20) = 0; /* 0x140F4B01: mov dword ptr [esi + 0x20], 0 */
    MEM32(esi + 0x24) = 0; /* 0x140F4B08: mov dword ptr [esi + 0x24], 0 */
    MEM32(esi + 0x28) = 0; /* 0x140F4B0F: mov dword ptr [esi + 0x28], 0 */
    MEM32(esi + 0x2C) = 0; /* 0x140F4B16: mov dword ptr [esi + 0x2c], 0 */
    MEM32(esi + 0x38) = 0; /* 0x140F4B1D: mov dword ptr [esi + 0x38], 0 */
    MEM32(esi + 0x3C) = 0; /* 0x140F4B24: mov dword ptr [esi + 0x3c], 0 */
    MEM32(esi + 0x40) = 0; /* 0x140F4B2B: mov dword ptr [esi + 0x40], 0 */
    MEM32(esi + 0x44) = 0; /* 0x140F4B32: mov dword ptr [esi + 0x44], 0 */
    MEM32(esi + 0x48) = 0; /* 0x140F4B39: mov dword ptr [esi + 0x48], 0 */
    MEM32(esi + 0x4C) = 0; /* 0x140F4B40: mov dword ptr [esi + 0x4c], 0 */
    MEM32(esi + 0x50) = 0; /* 0x140F4B47: mov dword ptr [esi + 0x50], 0 */
    MEM32(esi + 0x54) = 0; /* 0x140F4B4E: mov dword ptr [esi + 0x54], 0 */
L_140F4B55:
    /* cmp MEM32(edi + 0x18), 0 */ /* 0x140F4B55: cmp dword ptr [edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F4B70; /* 0x140F4B59: je 0x140f4b70 */
L_140F4B5B:
    ecx = MEM32(edi + 0x18); /* 0x140F4B5B: mov ecx, dword ptr [edi + 0x18] */
    eax = MEM32(ecx); /* 0x140F4B5E: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x140F4B60: push esi */
    PUSH32(esp, ebx); /* 0x140F4B61: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x140F4B62: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F4B65: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F4B70; /* 0x140F4B67: jne 0x140f4b70 */
L_140F4B69:
    esi = POP32_VAL(esp); /* 0x140F4B69: pop esi */
    edi = POP32_VAL(esp); /* 0x140F4B6A: pop edi */
    ebx = POP32_VAL(esp); /* 0x140F4B6B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F4B6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F4B6D: ret 8 */
L_140F4B70:
    /* test esi, esi */ /* 0x140F4B70: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F4C60; /* 0x140F4B72: je 0x140f4c60 */
L_140F4B78:
    ecx = MEM32(esi + 0x44); /* 0x140F4B78: mov ecx, dword ptr [esi + 0x44] */
    /* test ecx, ecx */ /* 0x140F4B7B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F4B89; /* 0x140F4B7D: je 0x140f4b89 */
L_140F4B7F:
    /* cmp MEM32(esi + 0x8), 0x10u */ /* 0x140F4B7F: cmp dword ptr [esi + 8], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F4B89; /* 0x140F4B83: je 0x140f4b89 */
L_140F4B85:
    _flag_a = (uint32_t)((MEM8(esi + 0x58) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x58) | 2)) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) | 2); /* 0x140F4B85: or byte ptr [esi + 0x58], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_140F4B89:
    eax = MEM32(edi + 0x4); /* 0x140F4B89: mov eax, dword ptr [edi + 4] */
    MEM32(esi) = eax; /* 0x140F4B8C: mov dword ptr [esi], eax */
    MEM32(esi + 0x8) = 0x10u; /* 0x140F4B8E: mov dword ptr [esi + 8], 0x10 */
    MEM32(esi + 0xC) = edi; /* 0x140F4B95: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x30) = 1; /* 0x140F4B98: mov dword ptr [esi + 0x30], 1 */
    eax = MEM32(edi + 0x1C); /* 0x140F4B9F: mov eax, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x34) = eax; /* 0x140F4BA2: mov dword ptr [esi + 0x34], eax */
    eax = MEM32(esi + 0x38); /* 0x140F4BA5: mov eax, dword ptr [esi + 0x38] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x1C)); /* 0x140F4BA8: imul eax, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x38) = eax; /* 0x140F4BAC: mov dword ptr [esi + 0x38], eax */
    eax = MEM32(esi + 0x3C); /* 0x140F4BAF: mov eax, dword ptr [esi + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x1C)); /* 0x140F4BB2: imul eax, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x3C) = eax; /* 0x140F4BB6: mov dword ptr [esi + 0x3c], eax */
    eax = MEM32(esi + 0x40); /* 0x140F4BB9: mov eax, dword ptr [esi + 0x40] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x1C)); /* 0x140F4BBC: imul eax, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x40) = eax; /* 0x140F4BC0: mov dword ptr [esi + 0x40], eax */
    eax = MEM32(edi + 0x18); /* 0x140F4BC3: mov eax, dword ptr [edi + 0x18] */
    MEM32(ebp + 0x8) = eax; /* 0x140F4BC6: mov dword ptr [ebp + 8], eax */
    /* test eax, eax */ /* 0x140F4BC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F4BED; /* 0x140F4BCB: je 0x140f4bed */
L_140F4BCD:
    ecx = ecx; /* 0x140F4BCD: lea ecx, [ecx] */
L_140F4BD0:
    /* test eax, eax */ /* 0x140F4BD0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F4BDF; /* 0x140F4BD2: je 0x140f4bdf */
L_140F4BD4:
    /* cmp MEM32(eax + 0x4), 0xAu */ /* 0x140F4BD4: cmp dword ptr [eax + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F4BDF; /* 0x140F4BD8: jne 0x140f4bdf */
L_140F4BDA:
    eax = MEM32(eax + 0x20); /* 0x140F4BDA: mov eax, dword ptr [eax + 0x20] */
    RECOMP_BACKEDGE();
    goto L_140F4BD0; /* 0x140F4BDD: jmp 0x140f4bd0 */
L_140F4BDF:
    /* cmp MEM32(eax + 0x4), 7 */ /* 0x140F4BDF: cmp dword ptr [eax + 4], 7 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F4BE3: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x140F4BE6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F4C0A; /* 0x140F4BE8: jne 0x140f4c0a */
L_140F4BEA:
    eax = MEM32(ebp + 0x8); /* 0x140F4BEA: mov eax, dword ptr [ebp + 8] */
L_140F4BED:
    MEM32(esi + 0x10) = eax; /* 0x140F4BED: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(esi + 0x18); /* 0x140F4BF0: mov eax, dword ptr [esi + 0x18] */
    MEM32(esi + 0x20) = eax; /* 0x140F4BF3: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(esi + 0x1C); /* 0x140F4BF6: mov eax, dword ptr [esi + 0x1c] */
    MEM32(esi + 0x24) = eax; /* 0x140F4BF9: mov dword ptr [esi + 0x24], eax */
    MEM32(esi + 0x18) = 0; /* 0x140F4BFC: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x140F4C03: mov dword ptr [esi + 0x1c], 0 */
L_140F4C0A:
    eax = ecx + 0x1; /* 0x140F4C0A: lea eax, [ecx + 1] */
    ecx = MEM32(esi + 0x54); /* 0x140F4C0D: mov ecx, dword ptr [esi + 0x54] */
    MEM32(esi + 0x44) = eax; /* 0x140F4C10: mov dword ptr [esi + 0x44], eax */
    MEM32(esi + 0x4C) = ecx; /* 0x140F4C13: mov dword ptr [esi + 0x4c], ecx */
    /* test LO8(ebx), 0x10u */ /* 0x140F4C16: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F4C54; /* 0x140F4C19: jne 0x140f4c54 */
L_140F4C1B:
    edx = ecx + 0xF; /* 0x140F4C1B: lea edx, [ecx + 0xf] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    edx = edx & 0xFFFFFFF0u; /* 0x140F4C1E: and edx, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x48) = 0x10u; /* 0x140F4C21: mov dword ptr [esi + 0x48], 0x10 */
    MEM32(esi + 0x50) = edx; /* 0x140F4C28: mov dword ptr [esi + 0x50], edx */
    eax = MEM32(edi + 0x1C); /* 0x140F4C2B: mov eax, dword ptr [edi + 0x1c] */
    /* test eax, eax */ /* 0x140F4C2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F4C44; /* 0x140F4C30: je 0x140f4c44 */
L_140F4C32:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140F4C32: dec eax */
    _flag_k = FK_DEC;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x140F4C33: imul eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x140F4C36: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(esi + 0x54) = eax; /* 0x140F4C38: mov dword ptr [esi + 0x54], eax */
    esi = POP32_VAL(esp); /* 0x140F4C3B: pop esi */
    edi = POP32_VAL(esp); /* 0x140F4C3C: pop edi */
    SET_LO8(eax, 1); /* 0x140F4C3D: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x140F4C3F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F4C40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F4C41: ret 8 */
L_140F4C44:
    MEM32(esi + 0x54) = 0; /* 0x140F4C44: mov dword ptr [esi + 0x54], 0 */
    esi = POP32_VAL(esp); /* 0x140F4C4B: pop esi */
    edi = POP32_VAL(esp); /* 0x140F4C4C: pop edi */
    SET_LO8(eax, 1); /* 0x140F4C4D: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x140F4C4F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F4C50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F4C51: ret 8 */
L_140F4C54:
    MEM32(esi + 0x50) = ecx; /* 0x140F4C54: mov dword ptr [esi + 0x50], ecx */
    eax = MEM32(edi + 0x1C); /* 0x140F4C57: mov eax, dword ptr [edi + 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x140F4C5A: imul eax, ecx */
    MEM32(esi + 0x54) = eax; /* 0x140F4C5D: mov dword ptr [esi + 0x54], eax */
L_140F4C60:
    esi = POP32_VAL(esp); /* 0x140F4C60: pop esi */
    edi = POP32_VAL(esp); /* 0x140F4C61: pop edi */
    SET_LO8(eax, 1); /* 0x140F4C62: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x140F4C64: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F4C65: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F4C66: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F4C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4C70u);

L_140F4C70:
    edi = edi; /* 0x140F4C70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4C72: push ebp */
    ebp = esp; /* 0x140F4C73: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x140F4C75: mov edx, dword ptr [ebp + 8] */
    /* cmp ecx, edx */ /* 0x140F4C78: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F4C82; /* 0x140F4C7A: jne 0x140f4c82 */
L_140F4C7C:
    SET_LO8(eax, 1); /* 0x140F4C7C: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x140F4C7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F4C7F: ret 4 */
L_140F4C82:
    /* cmp MEM32(edx + 0x4), 7 */ /* 0x140F4C82: cmp dword ptr [edx + 4], 7 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F4C8E; /* 0x140F4C86: je 0x140f4c8e */
L_140F4C88:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F4C88: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x140F4C8A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F4C8B: ret 4 */
L_140F4C8E:
    eax = MEM32(ecx + 0x1C); /* 0x140F4C8E: mov eax, dword ptr [ecx + 0x1c] */
    /* cmp eax, MEM32(edx + 0x1C) */ /* 0x140F4C91: cmp eax, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F4C88; /* 0x140F4C94: jne 0x140f4c88 */
L_140F4C96:
    ecx = MEM32(ecx + 0x18); /* 0x140F4C96: mov ecx, dword ptr [ecx + 0x18] */
    PUSH32(esp, MEM32(edx + 0x18)); /* 0x140F4C99: push dword ptr [edx + 0x18] */
    eax = MEM32(ecx); /* 0x140F4C9C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x140F4C9E: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x140F4CA1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F4CA2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F4CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4CB0u);

L_140F4CB0:
    MEM32(eax + 0x8) = 0; /* 0x140F4CB0: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x140F4CB7: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x140F4CBE: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x140F4CC5: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax) = 0x14041740u; /* 0x140F4CCC: mov dword ptr [eax], 0x14041740 */
    MEM32(eax + 0x4) = 8; /* 0x140F4CD2: mov dword ptr [eax + 4], 8 */
    MEM32(eax + 0x18) = 0; /* 0x140F4CD9: mov dword ptr [eax + 0x18], 0 */
    MEM32(eax + 0x1C) = 0; /* 0x140F4CE0: mov dword ptr [eax + 0x1c], 0 */
    MEM32(eax + 0x20) = 0; /* 0x140F4CE7: mov dword ptr [eax + 0x20], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F4CEE: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F4D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4D00u);

L_140F4D00:
    edi = edi; /* 0x140F4D00: mov edi, edi */
    PUSH32(esp, esi); /* 0x140F4D02: push esi */
    esi = ecx; /* 0x140F4D03: mov esi, ecx */
    ecx = MEM32(esi + 0x18); /* 0x140F4D05: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x140F4D08: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140F4D0A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x20); /* 0x140F4D0D: mov edx, dword ptr [esi + 0x20] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 0x1C)); /* 0x140F4D10: imul edx, dword ptr [esi + 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x140F4D14: imul eax, edx */
    esi = POP32_VAL(esp); /* 0x140F4D17: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F4D18: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F4D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4D20u);

L_140F4D20:
    edi = edi; /* 0x140F4D20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4D22: push ebp */
    ebp = esp; /* 0x140F4D23: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140F4D25: push esi */
    esi = ecx; /* 0x140F4D26: mov esi, ecx */
    ecx = MEM32(esi + 0x18); /* 0x140F4D28: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x140F4D2B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140F4D2D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x20)); /* 0x140F4D30: imul eax, dword ptr [esi + 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x1C)); /* 0x140F4D34: imul eax, dword ptr [esi + 0x1c] */
    edx = MEM32(ebp + 0x8); /* 0x140F4D38: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x140F4D3B: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp edx, eax */ /* 0x140F4D3E: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_140F4D4F; /* 0x140F4D40: jb 0x140f4d4f */
L_140F4D42:
    MEM32(ecx + 0x8) = eax; /* 0x140F4D42: mov dword ptr [ecx + 8], eax */
    eax = 1; /* 0x140F4D45: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x140F4D4A: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F4D4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F4D4C: ret 8 */
L_140F4D4F:
    eax = MEM32(esi + 0x18); /* 0x140F4D4F: mov eax, dword ptr [esi + 0x18] */
    MEM32(ecx) = eax; /* 0x140F4D52: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = esi; /* 0x140F4D54: mov dword ptr [ecx + 4], esi */
    MEM32(ecx + 0x8) = edx; /* 0x140F4D57: mov dword ptr [ecx + 8], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F4D5A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140F4D5C: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F4D5D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F4D5E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F4D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4D70u);

L_140F4D70:
    edi = edi; /* 0x140F4D70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4D72: push ebp */
    ebp = esp; /* 0x140F4D73: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x140F4D75: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x140F4D78: push esi */
    esi = ecx; /* 0x140F4D79: mov esi, ecx */
    edx = MEM32(esi + 0x1C); /* 0x140F4D7B: mov edx, dword ptr [esi + 0x1c] */
    MEM32(eax) = edx; /* 0x140F4D7E: mov dword ptr [eax], edx */
    ecx = MEM32(esi + 0x18); /* 0x140F4D80: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x140F4D83: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140F4D85: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x20)); /* 0x140F4D88: imul eax, dword ptr [esi + 0x20] */
    ecx = MEM32(ebp + 0xC); /* 0x140F4D8C: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x140F4D8F: mov dword ptr [ecx], eax */
    esi = POP32_VAL(esp); /* 0x140F4D91: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F4D92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F4D93: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F4DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4DA0u);

L_140F4DA0:
    edi = edi; /* 0x140F4DA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4DA2: push ebp */
    ebp = esp; /* 0x140F4DA3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x140F4DA5: push dword ptr [ebp + 0x20] */
    eax = MEM32(ecx + 0x20); /* 0x140F4DA8: mov eax, dword ptr [ecx + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x140F4DAB: push dword ptr [ebp + 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x1C)); /* 0x140F4DAE: imul eax, dword ptr [ecx + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x140F4DB2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140F4DB5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140F4DB8: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x140F4DBB: push eax */
    PUSH32(esp, MEM32(ecx + 0x18)); /* 0x140F4DBC: push dword ptr [ecx + 0x18] */
    eax = MEM32(ebp + 0x18); /* 0x140F4DBF: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x14); /* 0x140F4DC2: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_140F2120); /* 0x140F4DC5: call 0x140f2120 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x140F4DCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x140F4DCB: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_140F4DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4DE0u);

L_140F4DE0:
    edi = edi; /* 0x140F4DE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4DE2: push ebp */
    ebp = esp; /* 0x140F4DE3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x140F4DE5: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x140F4DE8: push ebx */
    PUSH32(esp, esi); /* 0x140F4DE9: push esi */
    esi = ecx; /* 0x140F4DEA: mov esi, ecx */
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x140F4DEC: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x140F4DF0: push edi */
    edi = esi + 0x1C; /* 0x140F4DF1: lea edi, [esi + 0x1c] */
    MEM32(ebp + (-0x4)) = esi; /* 0x140F4DF4: mov dword ptr [ebp - 4], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F4EA0; /* 0x140F4DF7: jbe 0x140f4ea0 */
L_140F4DFD:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x140F4DFD: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F4EA0; /* 0x140F4E01: jbe 0x140f4ea0 */
L_140F4E07:
    ecx = MEM32(esi + 0x18); /* 0x140F4E07: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ecx); /* 0x140F4E0A: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x8); /* 0x140F4E0C: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x140F4E0F: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140F4E10: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x140F4E13: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140F4E15: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x140F4E18: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F4E1B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F4EAB; /* 0x140F4E1D: js 0x140f4eab */
L_140F4E23:
    eax = MEM32(ebp + (-0x8)); /* 0x140F4E23: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x140F4E26: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = ecx; /* 0x140F4E28: mov dword ptr [ebp + 8], ecx */
    /* cmp MEM32(edi), ecx */ /* 0x140F4E2B: cmp dword ptr [edi], ecx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F4E87; /* 0x140F4E2D: jbe 0x140f4e87 */
L_140F4E2F:
    /* nop */ /* 0x140F4E2F: nop  */
L_140F4E30:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140F4E30: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x20), edi */ /* 0x140F4E32: cmp dword ptr [esi + 0x20], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F4E7C; /* 0x140F4E35: jbe 0x140f4e7c */
L_140F4E37:
    edx = MEM32(ebp + 0xC); /* 0x140F4E37: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x140F4E3A: mov ecx, dword ptr [ebp - 4] */
    esi = ebx; /* 0x140F4E3D: mov esi, ebx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x140F4E3F: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x140F4E3F: shl eax, 4 */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x140F4E42: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x140F4E42: shl esi, 4 */
    MEM32(ebp + (-0xC)) = eax; /* 0x140F4E45: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x140F4E48: add esi, edx */
    _flag_k = FK_ADD;
    ebx = ebx; /* 0x140F4E4A: lea ebx, [ebx] */
L_140F4E50:
    /* test ebx, ebx */ /* 0x140F4E50: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F4E68; /* 0x140F4E52: je 0x140f4e68 */
L_140F4E54:
    PUSH32(esp, eax); /* 0x140F4E54: push eax */
    PUSH32(esp, edx); /* 0x140F4E55: push edx */
    PUSH32(esp, esi); /* 0x140F4E56: push esi */
    RECOMP_CALL(sub_141EC9A4); /* 0x140F4E57: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x140F4E5C: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x140F4E5F: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0xC); /* 0x140F4E62: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140F4E65: add esp, 0xc */
    _flag_k = FK_ADD;
L_140F4E68:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x8)); /* 0x140F4E68: add ebx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x140F4E6B: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x140F4E6C: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ecx + 0x20) */ /* 0x140F4E6E: cmp edi, dword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140F4E50; /* 0x140F4E71: jb 0x140f4e50 */
L_140F4E73:
    esi = MEM32(ebp + (-0x4)); /* 0x140F4E73: mov esi, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x8)); /* 0x140F4E76: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + 0x8); /* 0x140F4E79: mov ecx, dword ptr [ebp + 8] */
L_140F4E7C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x140F4E7C: inc ecx */
    _flag_k = FK_INC;
    edi = esi + 0x1C; /* 0x140F4E7D: lea edi, [esi + 0x1c] */
    MEM32(ebp + 0x8) = ecx; /* 0x140F4E80: mov dword ptr [ebp + 8], ecx */
    /* cmp ecx, MEM32(edi) */ /* 0x140F4E83: cmp ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140F4E30; /* 0x140F4E85: jb 0x140f4e30 */
L_140F4E87:
    ecx = MEM32(esi + 0x20); /* 0x140F4E87: mov ecx, dword ptr [esi + 0x20] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x140F4E8A: imul ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edi)); /* 0x140F4E8D: imul ecx, dword ptr [edi] */
    eax = MEM32(ebp + 0x10); /* 0x140F4E90: mov eax, dword ptr [ebp + 0x10] */
    edi = POP32_VAL(esp); /* 0x140F4E93: pop edi */
    esi = POP32_VAL(esp); /* 0x140F4E94: pop esi */
    MEM32(eax) = ecx; /* 0x140F4E95: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F4E97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140F4E99: pop ebx */
    esp = ebp; /* 0x140F4E9A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F4E9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F4E9D: ret 0xc */
L_140F4EA0:
    eax = MEM32(ebp + 0x10); /* 0x140F4EA0: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = 0; /* 0x140F4EA3: mov dword ptr [eax], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F4EA9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F4EAB:
    edi = POP32_VAL(esp); /* 0x140F4EAB: pop edi */
    esi = POP32_VAL(esp); /* 0x140F4EAC: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F4EAD: pop ebx */
    esp = ebp; /* 0x140F4EAE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F4EB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140F4EB1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140F4EC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4EC0u);

L_140F4EC0:
    edi = edi; /* 0x140F4EC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4EC2: push ebp */
    ebp = esp; /* 0x140F4EC3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x140F4EC5: push ebx */
    PUSH32(esp, esi); /* 0x140F4EC6: push esi */
    esi = MEM32(ebp + 0xC); /* 0x140F4EC7: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x140F4ECA: push edi */
    edi = MEM32(ebp + 0x8); /* 0x140F4ECB: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x140F4ECE: mov ebx, ecx */
    ecx = MEM32(ebx + 0x18); /* 0x140F4ED0: mov ecx, dword ptr [ebx + 0x18] */
    eax = MEM32(ecx); /* 0x140F4ED3: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x140F4ED5: push esi */
    PUSH32(esp, edi); /* 0x140F4ED6: push edi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x140F4ED7: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F4EDA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F4F25; /* 0x140F4EDC: js 0x140f4f25 */
L_140F4EDE:
    ecx = edi; /* 0x140F4EDE: mov ecx, edi */
    edx = ecx + 0x1; /* 0x140F4EE0: lea edx, [ecx + 1] */
L_140F4EE3:
    SET_LO8(eax, MEM8(ecx)); /* 0x140F4EE3: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x140F4EE5: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x140F4EE6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F4EE3; /* 0x140F4EE8: jne 0x140f4ee3 */
L_140F4EEA:
    eax = MEM32(ebx + 0x1C); /* 0x140F4EEA: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, MEM32(ebx + 0x20)); /* 0x140F4EED: push dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x140F4EF0: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x140F4EF2: sub esi, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x140F4EF4: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F4F12; /* 0x140F4EF7: jne 0x140f4f12 */
L_140F4EF9:
    PUSH32(esp, 0x1403555Cu); /* 0x140F4EF9: push 0x1403555c */
    eax = ecx + edi; /* 0x140F4EFE: lea eax, [ecx + edi] */
    PUSH32(esp, esi); /* 0x140F4F01: push esi */
    PUSH32(esp, eax); /* 0x140F4F02: push eax */
    RECOMP_CALL(sub_140683B0); /* 0x140F4F03: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x140F4F08: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x140F4F0B: pop edi */
    esi = POP32_VAL(esp); /* 0x140F4F0C: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F4F0D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F4F0E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F4F0F: ret 8 */
L_140F4F12:
    PUSH32(esp, eax); /* 0x140F4F12: push eax */
    PUSH32(esp, 0x1404150Cu); /* 0x140F4F13: push 0x1404150c */
    eax = ecx + edi; /* 0x140F4F18: lea eax, [ecx + edi] */
    PUSH32(esp, esi); /* 0x140F4F1B: push esi */
    PUSH32(esp, eax); /* 0x140F4F1C: push eax */
    RECOMP_CALL(sub_140683B0); /* 0x140F4F1D: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x140F4F22: add esp, 0x14 */
    _flag_k = FK_ADD;
L_140F4F25:
    edi = POP32_VAL(esp); /* 0x140F4F25: pop edi */
    esi = POP32_VAL(esp); /* 0x140F4F26: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F4F27: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F4F28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F4F29: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F4F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4F40u);

L_140F4F40:
    edi = edi; /* 0x140F4F40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4F42: push ebp */
    ebp = esp; /* 0x140F4F43: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x140F4F45: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x140F4F48: mov eax, dword ptr [ecx] */
    edx = ebp + 0x8; /* 0x140F4F4A: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x140F4F4D: push edx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x140F4F4E: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(eax)); /* 0x140F4F51: mov al, byte ptr [eax] */
    if (4u) _cf = (((LO8(eax)) >> 3) & 1u); /* 0x140F4F53: shr al, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) >> 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) >> 4u); /* 0x140F4F53: shr al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x140F4F56: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x140F4F58: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F4F59: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F4F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F4F70u);

L_140F4F70:
    edi = edi; /* 0x140F4F70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F4F72: push ebp */
    ebp = esp; /* 0x140F4F73: mov ebp, esp */
    eax = MEM32(0x141F3DEC); /* 0x140F4F75: mov eax, dword ptr [0x141f3dec] */
    PUSH32(esp, esi); /* 0x140F4F7A: push esi */
    esi = ecx; /* 0x140F4F7B: mov esi, ecx */
    /* test eax, eax */ /* 0x140F4F7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140F4F85; /* 0x140F4F7F: jns 0x140f4f85 */
L_140F4F81:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F4F81: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140F4F8C; /* 0x140F4F83: jmp 0x140f4f8c */
L_140F4F85:
    PUSH32(esp, eax); /* 0x140F4F85: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x140F4F86: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_140F4F8C:
    ecx = MEM32(eax + 0x4); /* 0x140F4F8C: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x140F4F8F: push 0x10 */
    PUSH32(esp, 0x24u); /* 0x140F4F91: push 0x24 */
    RECOMP_CALL(sub_141E6491); /* 0x140F4F93: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140F4F98: mov ecx, eax */
    /* test ecx, ecx */ /* 0x140F4F9A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F4FFB; /* 0x140F4F9C: je 0x140f4ffb */
L_140F4F9E:
    MEM32(ecx + 0x8) = 0; /* 0x140F4F9E: mov dword ptr [ecx + 8], 0 */
    MEM32(ecx + 0xC) = 0; /* 0x140F4FA5: mov dword ptr [ecx + 0xc], 0 */
    MEM32(ecx + 0x10) = 0; /* 0x140F4FAC: mov dword ptr [ecx + 0x10], 0 */
    MEM32(ecx + 0x14) = 0xFFFFFFFFu; /* 0x140F4FB3: mov dword ptr [ecx + 0x14], 0xffffffff */
    MEM32(ecx + 0x18) = 0; /* 0x140F4FBA: mov dword ptr [ecx + 0x18], 0 */
    MEM32(ecx + 0x1C) = 0; /* 0x140F4FC1: mov dword ptr [ecx + 0x1c], 0 */
    MEM32(ecx + 0x20) = 0; /* 0x140F4FC8: mov dword ptr [ecx + 0x20], 0 */
    MEM32(ecx) = 0x14041778u; /* 0x140F4FCF: mov dword ptr [ecx], 0x14041778 */
    MEM32(ecx + 0x4) = 9; /* 0x140F4FD5: mov dword ptr [ecx + 4], 9 */
    eax = MEM32(esi + 0x18); /* 0x140F4FDC: mov eax, dword ptr [esi + 0x18] */
    MEM32(ecx + 0x18) = eax; /* 0x140F4FDF: mov dword ptr [ecx + 0x18], eax */
    MEM32(ecx + 0x1C) = 1; /* 0x140F4FE2: mov dword ptr [ecx + 0x1c], 1 */
    eax = MEM32(esi + 0x20); /* 0x140F4FE9: mov eax, dword ptr [esi + 0x20] */
    MEM32(ecx + 0x20) = eax; /* 0x140F4FEC: mov dword ptr [ecx + 0x20], eax */
    eax = MEM32(ebp + 0x8); /* 0x140F4FEF: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x140F4FF2: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F4FF4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140F4FF6: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F4FF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F4FF8: ret 4 */
L_140F4FFB:
    eax = 0x8007000Eu; /* 0x140F4FFB: mov eax, 0x8007000e */
    esi = POP32_VAL(esp); /* 0x140F5000: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F5001: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F5002: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F5010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F5010u);

L_140F5010:
    edi = edi; /* 0x140F5010: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F5012: push ebp */
    ebp = esp; /* 0x140F5013: mov ebp, esp */
    ecx = MEM32(ecx + 0x18); /* 0x140F5015: mov ecx, dword ptr [ecx + 0x18] */
    edx = MEM32(ecx); /* 0x140F5018: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x140F501A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x140F501B: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x140F501E: push esi */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x140F501F: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0xEFu) << 24;
    MEM8(esi) = (uint8_t)(MEM8(esi) & 0xEFu); /* 0x140F5022: and byte ptr [esi], 0xef */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(esi + 0x3) | 1)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x3) | 1)) << 24;
    MEM8(esi + 0x3) = (uint8_t)(MEM8(esi + 0x3) | 1); /* 0x140F5025: or byte ptr [esi + 3], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = esi; /* 0x140F5029: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x140F502B: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F502C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F502D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F5040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F5040u);

L_140F5040:
    edi = edi; /* 0x140F5040: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F5042: push ebp */
    ebp = esp; /* 0x140F5043: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x140F5045: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x140F5046: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x140F5049: push esi */
    PUSH32(esp, edi); /* 0x140F504A: push edi */
    edi = ecx; /* 0x140F504B: mov edi, ecx */
    /* test LO8(ebx), 1 */ /* 0x140F504D: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F507A; /* 0x140F5050: jne 0x140f507a */
L_140F5052:
    eax = MEM32(edi + 0x18); /* 0x140F5052: mov eax, dword ptr [edi + 0x18] */
    /* test eax, eax */ /* 0x140F5055: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F508B; /* 0x140F5057: je 0x140f508b */
L_140F5059:
    esp = esp; /* 0x140F5059: lea esp, [esp] */
L_140F5060:
    /* test eax, eax */ /* 0x140F5060: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F506F; /* 0x140F5062: je 0x140f506f */
L_140F5064:
    /* cmp MEM32(eax + 0x4), 0xAu */ /* 0x140F5064: cmp dword ptr [eax + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F506F; /* 0x140F5068: jne 0x140f506f */
L_140F506A:
    eax = MEM32(eax + 0x20); /* 0x140F506A: mov eax, dword ptr [eax + 0x20] */
    RECOMP_BACKEDGE();
    goto L_140F5060; /* 0x140F506D: jmp 0x140f5060 */
L_140F506F:
    /* cmp MEM32(eax + 0x4), 2 */ /* 0x140F506F: cmp dword ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140F5073: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x140F5076: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F508B; /* 0x140F5078: je 0x140f508b */
L_140F507A:
    esi = MEM32(ebp + 0xC); /* 0x140F507A: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(edi + 0x18); /* 0x140F507D: mov ecx, dword ptr [edi + 0x18] */
    eax = MEM32(ecx); /* 0x140F5080: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x140F5082: push esi */
    PUSH32(esp, ebx); /* 0x140F5083: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x140F5084: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140F5087: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F5094; /* 0x140F5089: jne 0x140f5094 */
L_140F508B:
    edi = POP32_VAL(esp); /* 0x140F508B: pop edi */
    esi = POP32_VAL(esp); /* 0x140F508C: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F508D: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x140F508F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F5090: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F5091: ret 8 */
L_140F5094:
    /* test esi, esi */ /* 0x140F5094: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F517C; /* 0x140F5096: je 0x140f517c */
L_140F509C:
    eax = MEM32(edi + 0x4); /* 0x140F509C: mov eax, dword ptr [edi + 4] */
    MEM32(esi) = eax; /* 0x140F509F: mov dword ptr [esi], eax */
    MEM32(esi + 0xC) = edi; /* 0x140F50A1: mov dword ptr [esi + 0xc], edi */
    eax = MEM32(edi + 0x18); /* 0x140F50A4: mov eax, dword ptr [edi + 0x18] */
    MEM32(esi + 0x10) = eax; /* 0x140F50A7: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(edi + 0x1C); /* 0x140F50AA: mov eax, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x30) = eax; /* 0x140F50AD: mov dword ptr [esi + 0x30], eax */
    eax = MEM32(edi + 0x20); /* 0x140F50B0: mov eax, dword ptr [edi + 0x20] */
    MEM32(esi + 0x34) = eax; /* 0x140F50B3: mov dword ptr [esi + 0x34], eax */
    eax = MEM32(edi + 0x20); /* 0x140F50B6: mov eax, dword ptr [edi + 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x1C)); /* 0x140F50B9: imul eax, dword ptr [edi + 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x38)); /* 0x140F50BD: imul eax, dword ptr [esi + 0x38] */
    MEM32(esi + 0x38) = eax; /* 0x140F50C1: mov dword ptr [esi + 0x38], eax */
    eax = MEM32(edi + 0x20); /* 0x140F50C4: mov eax, dword ptr [edi + 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x1C)); /* 0x140F50C7: imul eax, dword ptr [edi + 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x3C)); /* 0x140F50CB: imul eax, dword ptr [esi + 0x3c] */
    MEM32(esi + 0x3C) = eax; /* 0x140F50CF: mov dword ptr [esi + 0x3c], eax */
    eax = MEM32(edi + 0x20); /* 0x140F50D2: mov eax, dword ptr [edi + 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x40)); /* 0x140F50D5: imul eax, dword ptr [esi + 0x40] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x1C)); /* 0x140F50D9: imul eax, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x40) = eax; /* 0x140F50DD: mov dword ptr [esi + 0x40], eax */
    eax = MEM32(esi + 0x18); /* 0x140F50E0: mov eax, dword ptr [esi + 0x18] */
    MEM32(esi + 0x20) = eax; /* 0x140F50E3: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(esi + 0x1C); /* 0x140F50E6: mov eax, dword ptr [esi + 0x1c] */
    MEM32(esi + 0x24) = eax; /* 0x140F50E9: mov dword ptr [esi + 0x24], eax */
    MEM32(esi + 0x18) = 0; /* 0x140F50EC: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x140F50F3: mov dword ptr [esi + 0x1c], 0 */
    MEM32(esi + 0x44) = 0; /* 0x140F50FA: mov dword ptr [esi + 0x44], 0 */
    /* test LO8(ebx), 0x10u */ /* 0x140F5101: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F516A; /* 0x140F5104: jne 0x140f516a */
L_140F5106:
    eax = MEM32(edi + 0x4); /* 0x140F5106: mov eax, dword ptr [edi + 4] */
    /* cmp eax, 9 */ /* 0x140F5109: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F5120; /* 0x140F510C: je 0x140f5120 */
L_140F510E:
    /* cmp eax, 8 */ /* 0x140F510E: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F5118; /* 0x140F5111: jne 0x140f5118 */
L_140F5113:
    /* test LO8(ebx), 0x20u */ /* 0x140F5113: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F5120; /* 0x140F5116: jne 0x140f5120 */
L_140F5118:
    eax = MEM32(edi + 0x20); /* 0x140F5118: mov eax, dword ptr [edi + 0x20] */
    ecx = MEM32(edi + 0x1C); /* 0x140F511B: mov ecx, dword ptr [edi + 0x1c] */
    goto L_140F5126; /* 0x140F511E: jmp 0x140f5126 */
L_140F5120:
    eax = MEM32(edi + 0x1C); /* 0x140F5120: mov eax, dword ptr [edi + 0x1c] */
    ecx = MEM32(edi + 0x20); /* 0x140F5123: mov ecx, dword ptr [edi + 0x20] */
L_140F5126:
    /* cmp eax, 1 */ /* 0x140F5126: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F5154; /* 0x140F5129: jbe 0x140f5154 */
L_140F512B:
    edx = MEM32(esi + 0x54); /* 0x140F512B: mov edx, dword ptr [esi + 0x54] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x140F512E: imul edx, ecx */
    ecx = edx + 0xF; /* 0x140F5131: lea ecx, [edx + 0xf] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    ecx = ecx & 0xFFFFFFF0u; /* 0x140F5134: and ecx, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140F5137: dec eax */
    _flag_k = FK_DEC;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x140F5138: imul ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x140F513B: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) & 0xFCu); /* 0x140F513D: and byte ptr [esi + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x140F5141: pop edi */
    MEM32(esi + 0x48) = 0x10u; /* 0x140F5142: mov dword ptr [esi + 0x48], 0x10 */
    MEM32(esi + 0x54) = ecx; /* 0x140F5149: mov dword ptr [esi + 0x54], ecx */
    esi = POP32_VAL(esp); /* 0x140F514C: pop esi */
    SET_LO8(eax, 1); /* 0x140F514D: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x140F514F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F5150: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F5151: ret 8 */
L_140F5154:
    eax = MEM32(esi + 0x54); /* 0x140F5154: mov eax, dword ptr [esi + 0x54] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x140F5157: imul eax, ecx */
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) & 0xFCu); /* 0x140F515A: and byte ptr [esi + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x140F515E: pop edi */
    MEM32(esi + 0x54) = eax; /* 0x140F515F: mov dword ptr [esi + 0x54], eax */
    esi = POP32_VAL(esp); /* 0x140F5162: pop esi */
    SET_LO8(eax, 1); /* 0x140F5163: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x140F5165: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F5166: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F5167: ret 8 */
L_140F516A:
    eax = MEM32(esi + 0x54); /* 0x140F516A: mov eax, dword ptr [esi + 0x54] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x20)); /* 0x140F516D: imul eax, dword ptr [edi + 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi + 0x1C)); /* 0x140F5171: imul eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0xFCu) << 24;
    MEM8(esi + 0x58) = (uint8_t)(MEM8(esi + 0x58) & 0xFCu); /* 0x140F5175: and byte ptr [esi + 0x58], 0xfc */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x54) = eax; /* 0x140F5179: mov dword ptr [esi + 0x54], eax */
L_140F517C:
    edi = POP32_VAL(esp); /* 0x140F517C: pop edi */
    esi = POP32_VAL(esp); /* 0x140F517D: pop esi */
    SET_LO8(eax, 1); /* 0x140F517E: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x140F5180: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140F5181: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F5182: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F5190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F5190u);

L_140F5190:
    edi = edi; /* 0x140F5190: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F5192: push ebp */
    ebp = esp; /* 0x140F5193: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x140F5195: mov edx, dword ptr [ebp + 8] */
    /* cmp ecx, edx */ /* 0x140F5198: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F51A2; /* 0x140F519A: jne 0x140f51a2 */
L_140F519C:
    SET_LO8(eax, 1); /* 0x140F519C: mov al, 1 */
    ebp = POP32_VAL(esp); /* 0x140F519E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F519F: ret 4 */
L_140F51A2:
    eax = MEM32(edx + 0x4); /* 0x140F51A2: mov eax, dword ptr [edx + 4] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x140F51A5: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F51C9; /* 0x140F51A8: jne 0x140f51c9 */
L_140F51AA:
    eax = MEM32(ecx + 0x1C); /* 0x140F51AA: mov eax, dword ptr [ecx + 0x1c] */
    /* cmp eax, MEM32(edx + 0x1C) */ /* 0x140F51AD: cmp eax, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F51C9; /* 0x140F51B0: jne 0x140f51c9 */
L_140F51B2:
    eax = MEM32(ecx + 0x20); /* 0x140F51B2: mov eax, dword ptr [ecx + 0x20] */
    /* cmp eax, MEM32(edx + 0x20) */ /* 0x140F51B5: cmp eax, dword ptr [edx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F51C9; /* 0x140F51B8: jne 0x140f51c9 */
L_140F51BA:
    ecx = MEM32(ecx + 0x18); /* 0x140F51BA: mov ecx, dword ptr [ecx + 0x18] */
    PUSH32(esp, MEM32(edx + 0x18)); /* 0x140F51BD: push dword ptr [edx + 0x18] */
    eax = MEM32(ecx); /* 0x140F51C0: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x140F51C2: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x140F51C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F51C6: ret 4 */
L_140F51C9:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140F51C9: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x140F51CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140F51CC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140F51E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F51E0u);

L_140F51E0:
    MEM32(eax + 0x8) = 0; /* 0x140F51E0: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x140F51E7: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x140F51EE: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x140F51F5: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax + 0x18) = 0; /* 0x140F51FC: mov dword ptr [eax + 0x18], 0 */
    MEM32(eax + 0x1C) = 0; /* 0x140F5203: mov dword ptr [eax + 0x1c], 0 */
    MEM32(eax + 0x20) = 0; /* 0x140F520A: mov dword ptr [eax + 0x20], 0 */
    MEM32(eax) = 0x14041778u; /* 0x140F5211: mov dword ptr [eax], 0x14041778 */
    MEM32(eax + 0x4) = 9; /* 0x140F5217: mov dword ptr [eax + 4], 9 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F521E: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F5230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F5230u);

L_140F5230:
    MEM32(eax + 0x8) = 0; /* 0x140F5230: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x140F5237: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x140F523E: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x140F5245: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax) = 0x140415B8u; /* 0x140F524C: mov dword ptr [eax], 0x140415b8 */
    MEM32(eax + 0x4) = 0xAu; /* 0x140F5252: mov dword ptr [eax + 4], 0xa */
    MEM32(eax + 0x18) = 0; /* 0x140F5259: mov dword ptr [eax + 0x18], 0 */
    MEM32(eax + 0x1C) = 0; /* 0x140F5260: mov dword ptr [eax + 0x1c], 0 */
    MEM32(eax + 0x20) = 0; /* 0x140F5267: mov dword ptr [eax + 0x20], 0 */
    MEM32(eax + 0x24) = 0; /* 0x140F526E: mov dword ptr [eax + 0x24], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F5275: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F5280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F5280u);

L_140F5280:
    ecx = MEM32(ecx + 0x20); /* 0x140F5280: mov ecx, dword ptr [ecx + 0x20] */
    eax = MEM32(ecx); /* 0x140F5283: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F5290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F5290u);

L_140F5290:
    edi = edi; /* 0x140F5290: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F5292: push ebp */
    ebp = esp; /* 0x140F5293: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140F5295: push esi */
    PUSH32(esp, edi); /* 0x140F5296: push edi */
    edi = MEM32(ebp + 0xC); /* 0x140F5297: mov edi, dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x140F529A: mov esi, ecx */
    ecx = MEM32(esi + 0x20); /* 0x140F529C: mov ecx, dword ptr [esi + 0x20] */
    eax = MEM32(ecx); /* 0x140F529F: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x140F52A1: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140F52A2: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140F52A5: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x140F52A8: mov edx, eax */
    /* test edx, edx */ /* 0x140F52AA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140F52C6; /* 0x140F52AC: js 0x140f52c6 */
L_140F52AE:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F52C6; /* 0x140F52AE: jne 0x140f52c6 */
L_140F52B0:
    ecx = MEM32(edi); /* 0x140F52B0: mov ecx, dword ptr [edi] */
    /* cmp ecx, MEM32(esi + 0x20) */ /* 0x140F52B2: cmp ecx, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F52B9; /* 0x140F52B5: jne 0x140f52b9 */
L_140F52B7:
    MEM32(edi) = esi; /* 0x140F52B7: mov dword ptr [edi], esi */
L_140F52B9:
    eax = MEM32(edi + 0x4); /* 0x140F52B9: mov eax, dword ptr [edi + 4] */
    /* cmp eax, MEM32(esi + 0x20) */ /* 0x140F52BC: cmp eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edx; /* 0x140F52BF: mov eax, edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F52C6; /* 0x140F52C1: jne 0x140f52c6 */
L_140F52C3:
    MEM32(edi + 0x4) = esi; /* 0x140F52C3: mov dword ptr [edi + 4], esi */
L_140F52C6:
    edi = POP32_VAL(esp); /* 0x140F52C6: pop edi */
    esi = POP32_VAL(esp); /* 0x140F52C7: pop esi */
    ebp = POP32_VAL(esp); /* 0x140F52C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140F52C9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140F52E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F52E0u);

L_140F52E0:
    edi = edi; /* 0x140F52E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F52E2: push ebp */
    ebp = esp; /* 0x140F52E3: mov ebp, esp */
    ecx = MEM32(ecx + 0x20); /* 0x140F52E5: mov ecx, dword ptr [ecx + 0x20] */
    eax = MEM32(ecx); /* 0x140F52E8: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x140F52EA: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0xC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140F5300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F5300u);

L_140F5300:
    edi = edi; /* 0x140F5300: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F5302: push ebp */
    ebp = esp; /* 0x140F5303: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140F5305: push ecx */
    PUSH32(esp, ebx); /* 0x140F5306: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x140F5307: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x140F530A: push esi */
    esi = MEM32(ebp + 0x20); /* 0x140F530B: mov esi, dword ptr [ebp + 0x20] */
    PUSH32(esp, edi); /* 0x140F530E: push edi */
    edi = MEM32(ebp + 0x14); /* 0x140F530F: mov edi, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x140F5312: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x140F5313: push dword ptr [ebp + 0x1c] */
    eax = ecx; /* 0x140F5316: mov eax, ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x140F5318: push dword ptr [ebp + 0x18] */
    ecx = MEM32(eax + 0x20); /* 0x140F531B: mov ecx, dword ptr [eax + 0x20] */
    PUSH32(esp, edi); /* 0x140F531E: push edi */
    PUSH32(esp, ebx); /* 0x140F531F: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140F5320: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x140F5323: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140F5326: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x140F5329: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x140F532B: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F532E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F53D1; /* 0x140F5330: jne 0x140f53d1 */
L_140F5336:
    /* test edi, edi */ /* 0x140F5336: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F53D1; /* 0x140F5338: je 0x140f53d1 */
L_140F533E:
    eax = MEM32(ebp + (-0x4)); /* 0x140F533E: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x18); /* 0x140F5341: mov eax, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x08000000u);
    eax = eax & 0x08000000u; /* 0x140F5344: and eax, 0x8000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x140F5349: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F536F; /* 0x140F534C: je 0x140f536f */
L_140F534E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140F534E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edx */ /* 0x140F5350: cmp dword ptr [esi], edx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F536F; /* 0x140F5352: jbe 0x140f536f */
L_140F5354:
    ecx = edi; /* 0x140F5354: mov ecx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x140F5356: sub ebx, edi */
    _flag_k = FK_CMP;
L_140F5358:
    eax = MEM32(ebx + ecx); /* 0x140F5358: mov eax, dword ptr [ebx + ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140F535B: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 4 */ /* 0x140F535C: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F5364; /* 0x140F535F: ja 0x140f5364 */
L_140F5361:
    _flag_a = (uint32_t)((MEM32(ecx) | 0x10u)); _flag_b = (uint32_t)((MEM32(ecx) | 0x10u));
    MEM32(ecx) = MEM32(ecx) | 0x10u; /* 0x140F5361: or dword ptr [ecx], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F5364:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x140F5364: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x140F5365: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi) */ /* 0x140F5368: cmp edx, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140F5358; /* 0x140F536A: jb 0x140f5358 */
L_140F536C:
    ebx = MEM32(ebp + 0x10); /* 0x140F536C: mov ebx, dword ptr [ebp + 0x10] */
L_140F536F:
    eax = MEM32(ebp + (-0x4)); /* 0x140F536F: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x18); /* 0x140F5372: mov eax, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    eax = eax & 0x10000000u; /* 0x140F5375: and eax, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x140F537A: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F53A7; /* 0x140F537D: je 0x140f53a7 */
L_140F537F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140F537F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edx */ /* 0x140F5381: cmp dword ptr [esi], edx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F53A7; /* 0x140F5383: jbe 0x140f53a7 */
L_140F5385:
    ecx = edi; /* 0x140F5385: mov ecx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x140F5387: sub ebx, edi */
    _flag_k = FK_CMP;
    esp = esp; /* 0x140F5389: lea esp, [esp] */
L_140F5390:
    eax = MEM32(ecx + ebx); /* 0x140F5390: mov eax, dword ptr [ecx + ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140F5393: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 4 */ /* 0x140F5394: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140F539F; /* 0x140F5397: ja 0x140f539f */
L_140F5399:
    _flag_a = (uint32_t)((MEM32(ecx) | 0x20000012u)); _flag_b = (uint32_t)((MEM32(ecx) | 0x20000012u));
    MEM32(ecx) = MEM32(ecx) | 0x20000012u; /* 0x140F5399: or dword ptr [ecx], 0x20000012 */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F539F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x140F539F: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x140F53A0: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi) */ /* 0x140F53A3: cmp edx, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140F5390; /* 0x140F53A5: jb 0x140f5390 */
L_140F53A7:
    eax = MEM32(ebp + (-0x4)); /* 0x140F53A7: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x18); /* 0x140F53AA: mov eax, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x140F53AD: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x140F53B2: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F53CF; /* 0x140F53B5: je 0x140f53cf */
L_140F53B7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x140F53B7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), ecx */ /* 0x140F53B9: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140F53CF; /* 0x140F53BB: jbe 0x140f53cf */
L_140F53BD:
    ecx = ecx; /* 0x140F53BD: lea ecx, [ecx] */
L_140F53C0:
    _flag_a = (uint32_t)((MEM32(edi + ecx * 4) | 0x400u)); _flag_b = (uint32_t)((MEM32(edi + ecx * 4) | 0x400u));
    MEM32(edi + ecx * 4) = MEM32(edi + ecx * 4) | 0x400u; /* 0x140F53C0: or dword ptr [edi + ecx*4], 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + ecx * 4; /* 0x140F53C7: lea eax, [edi + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x140F53CA: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(esi) */ /* 0x140F53CB: cmp ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140F53C0; /* 0x140F53CD: jb 0x140f53c0 */
L_140F53CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F53CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140F53D1:
    edi = POP32_VAL(esp); /* 0x140F53D1: pop edi */
    esi = POP32_VAL(esp); /* 0x140F53D2: pop esi */
    ebx = POP32_VAL(esp); /* 0x140F53D3: pop ebx */
    esp = ebp; /* 0x140F53D4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140F53D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x140F53D7: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_140F53E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F53E0u);

L_140F53E0:
    edi = edi; /* 0x140F53E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140F53E2: push ebp */
    ebp = esp; /* 0x140F53E3: mov ebp, esp */
    ecx = MEM32(ecx + 0x20); /* 0x140F53E5: mov ecx, dword ptr [ecx + 0x20] */
    eax = MEM32(ecx); /* 0x140F53E8: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x140F53EA: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x14)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140EF800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140EF800u);

L_140EF800:
    /* test eax, eax */ /* 0x140EF800: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140EF830; /* 0x140EF802: je 0x140ef830 */
L_140EF804:
    PUSH32(esp, esi); /* 0x140EF804: push esi */
    MEM32(ecx + 0x4) = eax; /* 0x140EF805: mov dword ptr [ecx + 4], eax */
    MEM8(ecx + 0x24D) = (uint8_t)(1); /* 0x140EF808: mov byte ptr [ecx + 0x24d], 1 */
    esi = MEM32(eax + 0xA4); /* 0x140EF80F: mov esi, dword ptr [eax + 0xa4] */
    /* test esi, esi */ /* 0x140EF815: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140EF82F; /* 0x140EF817: je 0x140ef82f */
L_140EF819:
    ecx = MEM32(esi + 0x48); /* 0x140EF819: mov ecx, dword ptr [esi + 0x48] */
    MEM32(esi + 0x34) = 0; /* 0x140EF81C: mov dword ptr [esi + 0x34], 0 */
    /* test ecx, ecx */ /* 0x140EF823: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140EF82F; /* 0x140EF825: je 0x140ef82f */
L_140EF827:
    eax = MEM32(ecx); /* 0x140EF827: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140EF829: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x34) = eax; /* 0x140EF82C: mov dword ptr [esi + 0x34], eax */
L_140EF82F:
    esi = POP32_VAL(esp); /* 0x140EF82F: pop esi */
L_140EF830:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140EF830: ret  */
    RECOMP_REGS_OUT();
}

void sub_140EF840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140EF840u);

L_140EF840:
    edi = edi; /* 0x140EF840: mov edi, edi */
    PUSH32(esp, edi); /* 0x140EF842: push edi */
    edi = eax; /* 0x140EF843: mov edi, eax */
    /* test edx, edx */ /* 0x140EF845: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140EF86F; /* 0x140EF847: je 0x140ef86f */
L_140EF849:
    /* cmp MEM32(edx + 0x4), 1 */ /* 0x140EF849: cmp dword ptr [edx + 4], 1 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140EF86F; /* 0x140EF84D: jne 0x140ef86f */
L_140EF84F:
    eax = MEM32(edi + 0x4); /* 0x140EF84F: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x4C); /* 0x140EF852: mov eax, dword ptr [eax + 0x4c] */
    MEM32(edi + 0x4) = eax; /* 0x140EF855: mov dword ptr [edi + 4], eax */
    MEM8(edi + 0x24D) = (uint8_t)(1); /* 0x140EF858: mov byte ptr [edi + 0x24d], 1 */
    PUSH32(esp, esi); /* 0x140EF85F: push esi */
    esi = MEM32(edx + 0x50); /* 0x140EF860: mov esi, dword ptr [edx + 0x50] */
    edi = eax; /* 0x140EF863: mov edi, eax */
    RECOMP_CALL(sub_140E8040); /* 0x140EF865: call 0x140e8040 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x140EF86A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x140EF86C: pop esi */
    edi = POP32_VAL(esp); /* 0x140EF86D: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140EF86E: ret  */
L_140EF86F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140EF86F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140EF871: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140EF872: ret  */
    RECOMP_REGS_OUT();
}

void sub_140EFF40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140EFF40u);

L_140EFF40:
    eax = MEM32(0x141F3DEC); /* 0x140EFF40: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x140EFF45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140EFF4D; /* 0x140EFF47: jns 0x140eff4d */
L_140EFF49:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140EFF49: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140EFF54; /* 0x140EFF4B: jmp 0x140eff54 */
L_140EFF4D:
    PUSH32(esp, eax); /* 0x140EFF4D: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x140EFF4E: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_140EFF54:
    ecx = MEM32(eax + 0x4); /* 0x140EFF54: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x140EFF57: push 0x10 */
    PUSH32(esp, 0x30u); /* 0x140EFF59: push 0x30 */
    RECOMP_CALL(sub_141E6491); /* 0x140EFF5B: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140EFF60: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140EFF91; /* 0x140EFF62: je 0x140eff91 */
L_140EFF64:
    RECOMP_CALL(sub_140F3C10); /* 0x140EFF64: call 0x140f3c10 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140EFF69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140EFF91; /* 0x140EFF6B: je 0x140eff91 */
L_140EFF6D:
    MEM32(eax + 0x18) = 0x16u; /* 0x140EFF6D: mov dword ptr [eax + 0x18], 0x16 */
    MEM32(eax + 0x1C) = 0; /* 0x140EFF74: mov dword ptr [eax + 0x1c], 0 */
    MEM32(eax + 0x20) = 0; /* 0x140EFF7B: mov dword ptr [eax + 0x20], 0 */
    MEM32(eax + 0x24) = 0; /* 0x140EFF82: mov dword ptr [eax + 0x24], 0 */
    MEM32(eax + 0x28) = 0; /* 0x140EFF89: mov dword ptr [eax + 0x28], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140EFF90: ret  */
L_140EFF91:
    MEM8(esi + 0x248) = (uint8_t)(1); /* 0x140EFF91: mov byte ptr [esi + 0x248], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140EFF98: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140EFF9A: ret  */
    RECOMP_REGS_OUT();
}

void sub_140EFFA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140EFFA0u);

L_140EFFA0:
    eax = MEM32(0x141F3DEC); /* 0x140EFFA0: mov eax, dword ptr [0x141f3dec] */
    PUSH32(esp, ebx); /* 0x140EFFA5: push ebx */
    ebx = MEM32(esi + 0x1D4); /* 0x140EFFA6: mov ebx, dword ptr [esi + 0x1d4] */
    /* test eax, eax */ /* 0x140EFFAC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140EFFB4; /* 0x140EFFAE: jns 0x140effb4 */
L_140EFFB0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140EFFB0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140EFFBB; /* 0x140EFFB2: jmp 0x140effbb */
L_140EFFB4:
    PUSH32(esp, eax); /* 0x140EFFB4: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x140EFFB5: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_140EFFBB:
    ecx = MEM32(eax + 0x4); /* 0x140EFFBB: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x140EFFBE: push 0x10 */
    PUSH32(esp, 0x30u); /* 0x140EFFC0: push 0x30 */
    RECOMP_CALL(sub_141E6491); /* 0x140EFFC2: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140EFFC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140EFFF1; /* 0x140EFFC9: je 0x140efff1 */
L_140EFFCB:
    RECOMP_CALL(sub_140F3C10); /* 0x140EFFCB: call 0x140f3c10 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140EFFD0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140EFFF1; /* 0x140EFFD2: je 0x140efff1 */
L_140EFFD4:
    MEM32(eax + 0x18) = edi; /* 0x140EFFD4: mov dword ptr [eax + 0x18], edi */
    MEM32(eax + 0x1C) = ebx; /* 0x140EFFD7: mov dword ptr [eax + 0x1c], ebx */
    MEM32(eax + 0x20) = 0; /* 0x140EFFDA: mov dword ptr [eax + 0x20], 0 */
    MEM32(eax + 0x24) = 0; /* 0x140EFFE1: mov dword ptr [eax + 0x24], 0 */
    MEM32(eax + 0x28) = 0; /* 0x140EFFE8: mov dword ptr [eax + 0x28], 0 */
    ebx = POP32_VAL(esp); /* 0x140EFFEF: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140EFFF0: ret  */
L_140EFFF1:
    MEM8(esi + 0x248) = (uint8_t)(1); /* 0x140EFFF1: mov byte ptr [esi + 0x248], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140EFFF8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140EFFFA: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140EFFFB: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F0310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F0310u);

L_140F0310:
    eax = MEM32(0x141F3DEC); /* 0x140F0310: mov eax, dword ptr [0x141f3dec] */
    PUSH32(esp, ebx); /* 0x140F0315: push ebx */
    ebx = MEM32(esi + 0x98); /* 0x140F0316: mov ebx, dword ptr [esi + 0x98] */
    /* test eax, eax */ /* 0x140F031C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140F0324; /* 0x140F031E: jns 0x140f0324 */
L_140F0320:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F0320: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140F032B; /* 0x140F0322: jmp 0x140f032b */
L_140F0324:
    PUSH32(esp, eax); /* 0x140F0324: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x140F0325: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_140F032B:
    ecx = MEM32(eax + 0x4); /* 0x140F032B: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x140F032E: push 0x10 */
    PUSH32(esp, 0x30u); /* 0x140F0330: push 0x30 */
    RECOMP_CALL(sub_141E6491); /* 0x140F0332: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F0337: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F0361; /* 0x140F0339: je 0x140f0361 */
L_140F033B:
    RECOMP_CALL(sub_140F3C10); /* 0x140F033B: call 0x140f3c10 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140F0340: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F0361; /* 0x140F0342: je 0x140f0361 */
L_140F0344:
    MEM32(eax + 0x18) = edi; /* 0x140F0344: mov dword ptr [eax + 0x18], edi */
    MEM32(eax + 0x1C) = ebx; /* 0x140F0347: mov dword ptr [eax + 0x1c], ebx */
    MEM32(eax + 0x20) = 0; /* 0x140F034A: mov dword ptr [eax + 0x20], 0 */
    MEM32(eax + 0x24) = 0; /* 0x140F0351: mov dword ptr [eax + 0x24], 0 */
    MEM32(eax + 0x28) = 0; /* 0x140F0358: mov dword ptr [eax + 0x28], 0 */
    ebx = POP32_VAL(esp); /* 0x140F035F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F0360: ret  */
L_140F0361:
    MEM8(esi + 0x248) = (uint8_t)(1); /* 0x140F0361: mov byte ptr [esi + 0x248], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F0368: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140F036A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F036B: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F1050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F1050u);

L_140F1050:
    /* test edx, edx */ /* 0x140F1050: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1085; /* 0x140F1052: je 0x140f1085 */
L_140F1054:
    /* cmp MEM32(edx + 0x4), 3 */ /* 0x140F1054: cmp dword ptr [edx + 4], 3 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1085; /* 0x140F1058: jne 0x140f1085 */
L_140F105A:
    eax = MEM32(edx + 0x48); /* 0x140F105A: mov eax, dword ptr [edx + 0x48] */
    /* test eax, eax */ /* 0x140F105D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140F1085; /* 0x140F105F: je 0x140f1085 */
L_140F1061:
    /* cmp MEM32(eax + 0x4), 4 */ /* 0x140F1061: cmp dword ptr [eax + 4], 4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1085; /* 0x140F1065: jne 0x140f1085 */
L_140F1067:
    eax = MEM32(ecx + 0x4); /* 0x140F1067: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x4C); /* 0x140F106A: mov eax, dword ptr [eax + 0x4c] */
    PUSH32(esp, edi); /* 0x140F106D: push edi */
    MEM32(ecx + 0x4) = eax; /* 0x140F106E: mov dword ptr [ecx + 4], eax */
    MEM8(ecx + 0x24D) = (uint8_t)(1); /* 0x140F1071: mov byte ptr [ecx + 0x24d], 1 */
    edi = MEM32(edx + 0x4C); /* 0x140F1078: mov edi, dword ptr [edx + 0x4c] */
    RECOMP_CALL(sub_140E8040); /* 0x140F107B: call 0x140e8040 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edx + 0x48); /* 0x140F1080: mov eax, dword ptr [edx + 0x48] */
    edi = POP32_VAL(esp); /* 0x140F1083: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F1084: ret  */
L_140F1085:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F1085: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F1087: ret  */
    RECOMP_REGS_OUT();
}

void sub_140F1340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140F1340u);

L_140F1340:
    /* test edi, edi */ /* 0x140F1340: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140F1347; /* 0x140F1342: jne 0x140f1347 */
L_140F1344:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140F1344: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F1346: ret  */
L_140F1347:
    /* cmp MEM32(edi + 0x4), 3 */ /* 0x140F1347: cmp dword ptr [edi + 4], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140F1352; /* 0x140F134B: jne 0x140f1352 */
L_140F134D:
    /* cmp MEM32(edi + 0x18), eax */ /* 0x140F134D: cmp dword ptr [edi + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140F1364; /* 0x140F1350: je 0x140f1364 */
L_140F1352:
    PUSH32(esp, 0x140413CCu); /* 0x140F1352: push 0x140413cc */
    PUSH32(esp, 0xBBBu); /* 0x140F1357: push 0xbbb */
    RECOMP_CALL(sub_140E6B90); /* 0x140F135C: call 0x140e6b90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140F1361: add esp, 8 */
    _flag_k = FK_ADD;
L_140F1364:
    eax = edi; /* 0x140F1364: mov eax, edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140F1366: ret  */
    RECOMP_REGS_OUT();
}

void sub_140EFC40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140EFC40u);

L_140EFC40:
    MEM32(eax + 0x38) = 0; /* 0x140EFC40: mov dword ptr [eax + 0x38], 0 */
    MEM32(eax + 0x40) = 0; /* 0x140EFC47: mov dword ptr [eax + 0x40], 0 */
    MEM32(eax + 0x44) = 0; /* 0x140EFC4E: mov dword ptr [eax + 0x44], 0 */
    MEM32(eax + 0x48) = 0; /* 0x140EFC55: mov dword ptr [eax + 0x48], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140EFC5C: ret  */
    RECOMP_REGS_OUT();
}
