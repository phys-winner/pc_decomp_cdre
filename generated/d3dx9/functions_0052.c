#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_121C13CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C13CEu);

L_121C13CE:
    edi = edi; /* 0x121C13CE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C13D0: push ebp */
    ebp = esp; /* 0x121C13D1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C13D3: push ecx */
    PUSH32(esp, ebx); /* 0x121C13D4: push ebx */
    PUSH32(esp, esi); /* 0x121C13D5: push esi */
    esi = ecx; /* 0x121C13D6: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x121C13D8: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x121C13DB: push edi */
    /* cmp MEM32(esi + 0x4), eax */ /* 0x121C13DC: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C1439; /* 0x121C13DF: jne 0x121c1439 */
L_121C13E1:
    PUSH32(esp, 0x120014BCu); /* 0x121C13E1: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121C13E6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x121C13E8: push 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x121C13EA: add eax, 0x10 */
    _flag_k = FK_ADD;
    edx = POP32_VAL(esp); /* 0x121C13ED: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x121C13EE: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x121C13F0: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x121C13F3: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x121C13F5: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x121C13F7: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x121C13F8: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C13FD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121C13FE: pop ecx */
    ecx = eax; /* 0x121C13FF: mov ecx, eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x121C1401: mov dword ptr [ebp - 4], ecx */
    /* test ecx, ecx */ /* 0x121C1404: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C1412; /* 0x121C1406: jne 0x121c1412 */
L_121C1408:
    eax = 0x8007000Eu; /* 0x121C1408: mov eax, 0x8007000e */
    goto L_121C1494; /* 0x121C140D: jmp 0x121c1494 */
L_121C1412:
    /* cmp MEM32(esi), 0 */ /* 0x121C1412: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C1433; /* 0x121C1415: je 0x121c1433 */
L_121C1417:
    eax = MEM32(esi + 0x4); /* 0x121C1417: mov eax, dword ptr [esi + 4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x121C141A: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x121C141A: shl eax, 2 */
    PUSH32(esp, eax); /* 0x121C141D: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x121C141E: push dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x121C1420: push ecx */
    RECOMP_CALL(sub_121BF440); /* 0x121C1421: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x121C1426: push dword ptr [esi] */
    RECOMP_CALL(sub_121BF388); /* 0x121C1428: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x121C142D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x121C1430: add esp, 0x10 */
    _flag_k = FK_ADD;
L_121C1433:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 0x10u; /* 0x121C1433: add dword ptr [esi + 8], 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi) = ecx; /* 0x121C1437: mov dword ptr [esi], ecx */
L_121C1439:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x121C1439: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C1486; /* 0x121C143D: je 0x121c1486 */
L_121C143F:
    ebx = MEM32(ebp + 0x8); /* 0x121C143F: mov ebx, dword ptr [ebp + 8] */
    ecx = ebx + 0x1; /* 0x121C1442: lea ecx, [ebx + 1] */
L_121C1445:
    SET_LO8(eax, MEM8(ebx)); /* 0x121C1445: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x121C1447: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x121C1448: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C1445; /* 0x121C144A: jne 0x121c1445 */
L_121C144C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x121C144C: sub ebx, ecx */
    _flag_k = FK_CMP;
    eax = ebx + 0x1; /* 0x121C144E: lea eax, [ebx + 1] */
    PUSH32(esp, 0x120014BCu); /* 0x121C1451: push 0x120014bc */
    PUSH32(esp, eax); /* 0x121C1456: push eax */
    RECOMP_CALL(sub_12018970); /* 0x121C1457: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121C145C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121C145D: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x121C145E: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x121C1461: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C1408; /* 0x121C1463: je 0x121c1408 */
L_121C1465:
    PUSH32(esp, ebx); /* 0x121C1465: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121C1466: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x121C1469: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x121C146A: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x121C146F: mov edx, dword ptr [ebp - 4] */
    MEM8(edx + ebx) = (uint8_t)(0); /* 0x121C1472: mov byte ptr [edx + ebx], 0 */
    ecx = MEM32(esi + 0x4); /* 0x121C1476: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(esi); /* 0x121C1479: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121C147B: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ebx; /* 0x121C147E: add dword ptr [esi + 0xc], ebx */
    _flag_k = FK_ADD;
    MEM32(eax + ecx * 4) = edx; /* 0x121C1481: mov dword ptr [eax + ecx*4], edx */
    goto L_121C148F; /* 0x121C1484: jmp 0x121c148f */
L_121C1486:
    ecx = MEM32(esi + 0x4); /* 0x121C1486: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(esi); /* 0x121C1489: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + ecx * 4) = MEM32(eax + ecx * 4) & 0; /* 0x121C148B: and dword ptr [eax + ecx*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C148F:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 1; /* 0x121C148F: inc dword ptr [esi + 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C1492: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C1494:
    edi = POP32_VAL(esp); /* 0x121C1494: pop edi */
    esi = POP32_VAL(esp); /* 0x121C1495: pop esi */
    ebx = POP32_VAL(esp); /* 0x121C1496: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C1497: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121C1498: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121C14A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C14A0u);

L_121C14A0:
    edi = edi; /* 0x121C14A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C14A2: push ebp */
    ebp = esp; /* 0x121C14A3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121C14A5: push ecx */
    PUSH32(esp, ecx); /* 0x121C14A6: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x121C14A7: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x121C14AA: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x121C14AD: push esi */
    esi = ecx; /* 0x121C14AE: mov esi, ecx */
    ecx = MEM32(esi + 0xC); /* 0x121C14B0: mov ecx, dword ptr [esi + 0xc] */
    /* test ecx, ecx */ /* 0x121C14B3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C1525; /* 0x121C14B5: je 0x121c1525 */
L_121C14B7:
    eax = ebp + (-0x4); /* 0x121C14B7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x121C14BA: push eax */
    eax = MEM32(esi + 0x4); /* 0x121C14BB: mov eax, dword ptr [esi + 4] */
    eax = eax + ecx + 0x1; /* 0x121C14BE: lea eax, [eax + ecx + 1] */
    PUSH32(esp, eax); /* 0x121C14C2: push eax */
    RECOMP_CALL(sub_12019209); /* 0x121C14C3: call 0x12019209 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121C14C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121C1527; /* 0x121C14CA: js 0x121c1527 */
L_121C14CC:
    eax = MEM32(ebp + (-0x4)); /* 0x121C14CC: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x121C14CF: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x121C14D1: push ebx */
    PUSH32(esp, edi); /* 0x121C14D2: push edi */
    PUSH32(esp, eax); /* 0x121C14D3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x121C14D4: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121C14D7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x121C14D9: mov ebx, eax */
    /* cmp MEM32(esi + 0x4), edi */ /* 0x121C14DB: cmp dword ptr [esi + 4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121C1518; /* 0x121C14DE: jbe 0x121c1518 */
L_121C14E0:
    eax = MEM32(esi); /* 0x121C14E0: mov eax, dword ptr [esi] */
    /* cmp MEM32(eax + edi * 4), 0 */ /* 0x121C14E2: cmp dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C1512; /* 0x121C14E6: je 0x121c1512 */
L_121C14E8:
    edx = MEM32(eax + edi * 4); /* 0x121C14E8: mov edx, dword ptr [eax + edi*4] */
    ecx = edx; /* 0x121C14EB: mov ecx, edx */
    eax = ecx + 0x1; /* 0x121C14ED: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x8)) = eax; /* 0x121C14F0: mov dword ptr [ebp - 8], eax */
L_121C14F3:
    SET_LO8(eax, MEM8(ecx)); /* 0x121C14F3: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121C14F5: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x121C14F6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C14F3; /* 0x121C14F8: jne 0x121c14f3 */
L_121C14FA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x8)); /* 0x121C14FA: sub ecx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x121C14FD: push ecx */
    PUSH32(esp, edx); /* 0x121C14FE: push edx */
    PUSH32(esp, ebx); /* 0x121C14FF: push ebx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x121C1500: mov dword ptr [ebp - 8], ecx */
    RECOMP_CALL(sub_121BF440); /* 0x121C1503: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x8)); /* 0x121C1508: add ebx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121C150B: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(ebx) = (uint8_t)(0xAu); /* 0x121C150E: mov byte ptr [ebx], 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x121C1511: inc ebx */
    _flag_k = FK_INC;
L_121C1512:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121C1512: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x121C1513: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121C14E0; /* 0x121C1516: jb 0x121c14e0 */
L_121C1518:
    ecx = MEM32(ebp + 0x8); /* 0x121C1518: mov ecx, dword ptr [ebp + 8] */
    MEM8(ebx) = (uint8_t)(0); /* 0x121C151B: mov byte ptr [ebx], 0 */
    eax = MEM32(ebp + (-0x4)); /* 0x121C151E: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121C1521: pop edi */
    MEM32(ecx) = eax; /* 0x121C1522: mov dword ptr [ecx], eax */
    ebx = POP32_VAL(esp); /* 0x121C1524: pop ebx */
L_121C1525:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C1525: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C1527:
    esi = POP32_VAL(esp); /* 0x121C1527: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C1528: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121C1529: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121C1531(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1531u);

L_121C1531:
    edi = edi; /* 0x121C1531: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C1533: push ebp */
    ebp = esp; /* 0x121C1534: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA0u; /* 0x121C1536: sub esp, 0xa0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121C153C: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121C1541: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121C1543: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x9C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x9C)) = MEM32(ebp + (-0x9C)) & 0; /* 0x121C1546: and dword ptr [ebp - 0x9c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x121C154D: push esi */
    PUSH32(esp, edi); /* 0x121C154E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x121C154F: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x121C1552: mov esi, ecx */
    /* test edi, edi */ /* 0x121C1554: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C1562; /* 0x121C1556: jne 0x121c1562 */
L_121C1558:
    eax = 0x8876086Cu; /* 0x121C1558: mov eax, 0x8876086c */
    goto L_121C167B; /* 0x121C155D: jmp 0x121c167b */
L_121C1562:
    PUSH32(esp, ebx); /* 0x121C1562: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x121C1563: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x121C1566: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C1603; /* 0x121C1568: je 0x121c1603 */
L_121C156E:
    eax = ebp + (-0x98); /* 0x121C156E: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x121C1574: push eax */
    MEM32(ebp + (-0x98)) = 0x94u; /* 0x121C1575: mov dword ptr [ebp - 0x98], 0x94 */
    RECOMP_ICALL(MEM32(0x12001124)); /* 0x121C157F: call dword ptr [0x12001124] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x88)), 2 */ /* 0x121C1585: cmp dword ptr [ebp - 0x88], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C15E4; /* 0x121C158C: je 0x121c15e4 */
L_121C158E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C158E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x121C1590: push eax */
    PUSH32(esp, eax); /* 0x121C1591: push eax */
    PUSH32(esp, eax); /* 0x121C1592: push eax */
    PUSH32(esp, eax); /* 0x121C1593: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x121C1594: push -1 */
    PUSH32(esp, edi); /* 0x121C1596: push edi */
    PUSH32(esp, eax); /* 0x121C1597: push eax */
    PUSH32(esp, 0xFDE9u); /* 0x121C1598: push 0xfde9 */
    RECOMP_ICALL(MEM32(0x1200110C)); /* 0x121C159D: call dword ptr [0x1200110c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x121C15A3: push eax */
    MEM32(ebp + (-0xA0)) = eax; /* 0x121C15A4: mov dword ptr [ebp - 0xa0], eax */
    RECOMP_CALL(sub_121BF394); /* 0x121C15AA: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x121C15AF: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x121C15B1: pop ecx */
    MEM32(ebp + (-0x9C)) = ebx; /* 0x121C15B2: mov dword ptr [ebp - 0x9c], ebx */
    /* test ebx, ebx */ /* 0x121C15B8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C15C6; /* 0x121C15BA: jne 0x121c15c6 */
L_121C15BC:
    eax = 0x8007000Eu; /* 0x121C15BC: mov eax, 0x8007000e */
    goto L_121C167A; /* 0x121C15C1: jmp 0x121c167a */
L_121C15C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C15C6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x121C15C8: push eax */
    PUSH32(esp, eax); /* 0x121C15C9: push eax */
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x121C15CA: push dword ptr [ebp - 0xa0] */
    PUSH32(esp, ebx); /* 0x121C15D0: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x121C15D1: push -1 */
    PUSH32(esp, edi); /* 0x121C15D3: push edi */
    PUSH32(esp, eax); /* 0x121C15D4: push eax */
    PUSH32(esp, 0xFDE9u); /* 0x121C15D5: push 0xfde9 */
    RECOMP_ICALL(MEM32(0x1200110C)); /* 0x121C15DA: call dword ptr [0x1200110c] */
    RECOMP_FLAGS_IN();
    edi = ebx; /* 0x121C15E0: mov edi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121C15E2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C15E4:
    /* test ebx, ebx */ /* 0x121C15E4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C1603; /* 0x121C15E6: je 0x121c1603 */
L_121C15E8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121C15E8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x121C15EA: push ebx */
    PUSH32(esp, 0x10000000u); /* 0x121C15EB: push 0x10000000 */
    PUSH32(esp, 3); /* 0x121C15F0: push 3 */
    PUSH32(esp, ebx); /* 0x121C15F2: push ebx */
    PUSH32(esp, 1); /* 0x121C15F3: push 1 */
    PUSH32(esp, 0x80000000u); /* 0x121C15F5: push 0x80000000 */
    PUSH32(esp, edi); /* 0x121C15FA: push edi */
    RECOMP_ICALL(MEM32(0x120010C8)); /* 0x121C15FB: call dword ptr [0x120010c8] */
    RECOMP_FLAGS_IN();
    goto L_121C161C; /* 0x121C1601: jmp 0x121c161c */
L_121C1603:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121C1603: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x121C1605: push ebx */
    PUSH32(esp, 0x10000000u); /* 0x121C1606: push 0x10000000 */
    PUSH32(esp, 3); /* 0x121C160B: push 3 */
    PUSH32(esp, ebx); /* 0x121C160D: push ebx */
    PUSH32(esp, 1); /* 0x121C160E: push 1 */
    PUSH32(esp, 0x80000000u); /* 0x121C1610: push 0x80000000 */
    PUSH32(esp, edi); /* 0x121C1615: push edi */
    RECOMP_ICALL(MEM32(0x120010E8)); /* 0x121C1616: call dword ptr [0x120010e8] */
    RECOMP_FLAGS_IN();
L_121C161C:
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x121C161C: push dword ptr [ebp - 0x9c] */
    MEM32(esi) = eax; /* 0x121C1622: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_121BF388); /* 0x121C1624: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi), 0xFFFFFFFFu */ /* 0x121C1629: cmp dword ptr [esi], -1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x121C162C: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C166F; /* 0x121C162D: je 0x121c166f */
L_121C162F:
    PUSH32(esp, ebx); /* 0x121C162F: push ebx */
    PUSH32(esp, ebx); /* 0x121C1630: push ebx */
    PUSH32(esp, ebx); /* 0x121C1631: push ebx */
    PUSH32(esp, 2); /* 0x121C1632: push 2 */
    PUSH32(esp, ebx); /* 0x121C1634: push ebx */
    PUSH32(esp, MEM32(esi)); /* 0x121C1635: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x1200108C)); /* 0x121C1637: call dword ptr [0x1200108c] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x121C163D: mov dword ptr [esi + 4], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x121C1640: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C166F; /* 0x121C1643: je 0x121c166f */
L_121C1645:
    PUSH32(esp, ebx); /* 0x121C1645: push ebx */
    PUSH32(esp, MEM32(esi)); /* 0x121C1646: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x12001088)); /* 0x121C1648: call dword ptr [0x12001088] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x121C164E: mov dword ptr [esi + 0xc], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x121C1651: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C166F; /* 0x121C1654: je 0x121c166f */
L_121C1656:
    /* test eax, eax */ /* 0x121C1656: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C168B; /* 0x121C1658: je 0x121c168b */
L_121C165A:
    PUSH32(esp, ebx); /* 0x121C165A: push ebx */
    PUSH32(esp, ebx); /* 0x121C165B: push ebx */
    PUSH32(esp, ebx); /* 0x121C165C: push ebx */
    PUSH32(esp, 4); /* 0x121C165D: push 4 */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x121C165F: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x12001090)); /* 0x121C1662: call dword ptr [0x12001090] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x121C1668: mov dword ptr [esi + 8], eax */
    /* test eax, eax */ /* 0x121C166B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C168E; /* 0x121C166D: jne 0x121c168e */
L_121C166F:
    RECOMP_ICALL(MEM32(0x120010D4)); /* 0x121C166F: call dword ptr [0x120010d4] */
    RECOMP_FLAGS_IN();
    eax = 0x88760B59u; /* 0x121C1675: mov eax, 0x88760b59 */
L_121C167A:
    ebx = POP32_VAL(esp); /* 0x121C167A: pop ebx */
L_121C167B:
    ecx = MEM32(ebp + (-0x4)); /* 0x121C167B: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121C167E: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121C167F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121C1681: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121C1682: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C1687: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121C1688: ret 8 */
L_121C168B:
    MEM32(esi + 0x8) = ebx; /* 0x121C168B: mov dword ptr [esi + 8], ebx */
L_121C168E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C168E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_121C167A; /* 0x121C1690: jmp 0x121c167a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121C1697(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1697u);

L_121C1697:
    edi = edi; /* 0x121C1697: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121C1699: push ebp */
    ebp = esp; /* 0x121C169A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA0u; /* 0x121C169C: sub esp, 0xa0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121C16A2: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121C16A7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121C16A9: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x121C16AC: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121C16AD: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C16B0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x121C16B2: push edi */
    edi = ecx; /* 0x121C16B3: mov edi, ecx */
    MEM32(ebp + (-0x9C)) = eax; /* 0x121C16B5: mov dword ptr [ebp - 0x9c], eax */
    /* test esi, esi */ /* 0x121C16BB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C16C9; /* 0x121C16BD: jne 0x121c16c9 */
L_121C16BF:
    eax = 0x8876086Cu; /* 0x121C16BF: mov eax, 0x8876086c */
    goto L_121C1797; /* 0x121C16C4: jmp 0x121c1797 */
L_121C16C9:
    PUSH32(esp, ebx); /* 0x121C16C9: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x121C16CA: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x121C16CD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C1762; /* 0x121C16CF: je 0x121c1762 */
L_121C16D5:
    eax = ebp + (-0x98); /* 0x121C16D5: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x121C16DB: push eax */
    MEM32(ebp + (-0x98)) = 0x94u; /* 0x121C16DC: mov dword ptr [ebp - 0x98], 0x94 */
    RECOMP_ICALL(MEM32(0x12001124)); /* 0x121C16E6: call dword ptr [0x12001124] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C16EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x88)), 2 */ /* 0x121C16EE: cmp dword ptr [ebp - 0x88], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C174A; /* 0x121C16F5: je 0x121c174a */
L_121C16F7:
    PUSH32(esp, eax); /* 0x121C16F7: push eax */
    PUSH32(esp, eax); /* 0x121C16F8: push eax */
    PUSH32(esp, eax); /* 0x121C16F9: push eax */
    PUSH32(esp, eax); /* 0x121C16FA: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x121C16FB: push -1 */
    PUSH32(esp, esi); /* 0x121C16FD: push esi */
    PUSH32(esp, eax); /* 0x121C16FE: push eax */
    PUSH32(esp, 0xFDE9u); /* 0x121C16FF: push 0xfde9 */
    RECOMP_ICALL(MEM32(0x1200110C)); /* 0x121C1704: call dword ptr [0x1200110c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x121C170A: push eax */
    MEM32(ebp + (-0xA0)) = eax; /* 0x121C170B: mov dword ptr [ebp - 0xa0], eax */
    RECOMP_CALL(sub_121BF394); /* 0x121C1711: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x121C1716: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x121C1718: pop ecx */
    MEM32(ebp + (-0x9C)) = ebx; /* 0x121C1719: mov dword ptr [ebp - 0x9c], ebx */
    /* test ebx, ebx */ /* 0x121C171F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121C172A; /* 0x121C1721: jne 0x121c172a */
L_121C1723:
    eax = 0x8007000Eu; /* 0x121C1723: mov eax, 0x8007000e */
    goto L_121C1796; /* 0x121C1728: jmp 0x121c1796 */
L_121C172A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C172A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x121C172C: push eax */
    PUSH32(esp, eax); /* 0x121C172D: push eax */
    PUSH32(esp, MEM32(ebp + (-0xA0))); /* 0x121C172E: push dword ptr [ebp - 0xa0] */
    PUSH32(esp, ebx); /* 0x121C1734: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x121C1735: push -1 */
    PUSH32(esp, esi); /* 0x121C1737: push esi */
    PUSH32(esp, eax); /* 0x121C1738: push eax */
    PUSH32(esp, 0xFDE9u); /* 0x121C1739: push 0xfde9 */
    RECOMP_ICALL(MEM32(0x1200110C)); /* 0x121C173E: call dword ptr [0x1200110c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C1744: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x121C1746: mov esi, ebx */
    ebx = eax; /* 0x121C1748: mov ebx, eax */
L_121C174A:
    /* test ebx, ebx */ /* 0x121C174A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121C1762; /* 0x121C174C: je 0x121c1762 */
L_121C174E:
    PUSH32(esp, eax); /* 0x121C174E: push eax */
    PUSH32(esp, eax); /* 0x121C174F: push eax */
    PUSH32(esp, 2); /* 0x121C1750: push 2 */
    PUSH32(esp, eax); /* 0x121C1752: push eax */
    PUSH32(esp, eax); /* 0x121C1753: push eax */
    PUSH32(esp, 0x40000000u); /* 0x121C1754: push 0x40000000 */
    PUSH32(esp, esi); /* 0x121C1759: push esi */
    RECOMP_ICALL(MEM32(0x120010C8)); /* 0x121C175A: call dword ptr [0x120010c8] */
    RECOMP_FLAGS_IN();
    goto L_121C1774; /* 0x121C1760: jmp 0x121c1774 */
L_121C1762:
    PUSH32(esp, eax); /* 0x121C1762: push eax */
    PUSH32(esp, eax); /* 0x121C1763: push eax */
    PUSH32(esp, 2); /* 0x121C1764: push 2 */
    PUSH32(esp, eax); /* 0x121C1766: push eax */
    PUSH32(esp, eax); /* 0x121C1767: push eax */
    PUSH32(esp, 0x40000000u); /* 0x121C1768: push 0x40000000 */
    PUSH32(esp, esi); /* 0x121C176D: push esi */
    RECOMP_ICALL(MEM32(0x120010E8)); /* 0x121C176E: call dword ptr [0x120010e8] */
    RECOMP_FLAGS_IN();
L_121C1774:
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x121C1774: push dword ptr [ebp - 0x9c] */
    MEM32(edi) = eax; /* 0x121C177A: mov dword ptr [edi], eax */
    RECOMP_CALL(sub_121BF388); /* 0x121C177C: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi), 0xFFFFFFFFu */ /* 0x121C1781: cmp dword ptr [edi], -1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x121C1784: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_121C1794; /* 0x121C1785: jne 0x121c1794 */
L_121C1787:
    RECOMP_ICALL(MEM32(0x120010D4)); /* 0x121C1787: call dword ptr [0x120010d4] */
    RECOMP_FLAGS_IN();
    eax = 0x88760B59u; /* 0x121C178D: mov eax, 0x88760b59 */
    goto L_121C1796; /* 0x121C1792: jmp 0x121c1796 */
L_121C1794:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C1794: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C1796:
    ebx = POP32_VAL(esp); /* 0x121C1796: pop ebx */
L_121C1797:
    ecx = MEM32(ebp + (-0x4)); /* 0x121C1797: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121C179A: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121C179B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121C179D: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121C179E: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121C17A3: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121C17A4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121C17AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C17ACu);

L_121C17AC:
    edi = edi; /* 0x121C17AC: mov edi, edi */
    PUSH32(esp, esi); /* 0x121C17AE: push esi */
    esi = ecx; /* 0x121C17AF: mov esi, ecx */
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x121C17B1: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C17C8; /* 0x121C17B5: je 0x121c17c8 */
L_121C17B7:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x121C17B7: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(0x12001094)); /* 0x121C17BA: call dword ptr [0x12001094] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x121C17C0: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x121C17C4: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C17C8:
    /* cmp MEM32(esi + 0x4), 0xFFFFFFFFu */ /* 0x121C17C8: cmp dword ptr [esi + 4], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C17DB; /* 0x121C17CC: je 0x121c17db */
L_121C17CE:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x121C17CE: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x121C17D1: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0xFFFFFFFFu; /* 0x121C17D7: or dword ptr [esi + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C17DB:
    /* cmp MEM32(esi), 0xFFFFFFFFu */ /* 0x121C17DB: cmp dword ptr [esi], -1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C17EB; /* 0x121C17DE: je 0x121c17eb */
L_121C17E0:
    PUSH32(esp, MEM32(esi)); /* 0x121C17E0: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x121C17E2: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu));
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu; /* 0x121C17E8: or dword ptr [esi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C17EB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C17EB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121C17ED: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C17EE: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C17F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C17F4u);

    goto L_121C17F4;
L_121C17AC:
    edi = edi; /* 0x121C17AC: mov edi, edi */
    PUSH32(esp, esi); /* 0x121C17AE: push esi */
    esi = ecx; /* 0x121C17AF: mov esi, ecx */
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x121C17B1: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C17C8; /* 0x121C17B5: je 0x121c17c8 */
L_121C17B7:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x121C17B7: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(0x12001094)); /* 0x121C17BA: call dword ptr [0x12001094] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x121C17C0: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x121C17C4: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C17C8:
    /* cmp MEM32(esi + 0x4), 0xFFFFFFFFu */ /* 0x121C17C8: cmp dword ptr [esi + 4], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C17DB; /* 0x121C17CC: je 0x121c17db */
L_121C17CE:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x121C17CE: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x121C17D1: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0xFFFFFFFFu; /* 0x121C17D7: or dword ptr [esi + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C17DB:
    /* cmp MEM32(esi), 0xFFFFFFFFu */ /* 0x121C17DB: cmp dword ptr [esi], -1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C17EB; /* 0x121C17DE: je 0x121c17eb */
L_121C17E0:
    PUSH32(esp, MEM32(esi)); /* 0x121C17E0: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x121C17E2: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu));
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu; /* 0x121C17E8: or dword ptr [esi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_121C17EB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C17EB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121C17ED: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C17EE: ret  */
L_121C17F4:
    /* cmp MEM32(ecx), 0xFFFFFFFFu */ /* 0x121C17F4: cmp dword ptr [ecx], -1 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C17FE; /* 0x121C17F7: je 0x121c17fe */
L_121C17F9:
    RECOMP_BACKEDGE();
    goto L_121C17AC; /* 0x121C17F9: jmp 0x121c17ac */
L_121C17FE:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C17FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C1804(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1804u);

L_121C1804:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C1804: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x121C1806: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x121C1808: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x121C180B: mov dword ptr [ecx + 8], eax */
    eax = ecx; /* 0x121C180E: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C1810: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C1816(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1816u);

L_121C1816:
    edi = edi; /* 0x121C1816: mov edi, edi */
    PUSH32(esp, esi); /* 0x121C1818: push esi */
    esi = ecx; /* 0x121C1819: mov esi, ecx */
    /* cmp MEM32(esi), 0 */ /* 0x121C181B: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121C1828; /* 0x121C181E: je 0x121c1828 */
L_121C1820:
    PUSH32(esp, MEM32(esi)); /* 0x121C1820: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x12001024)); /* 0x121C1822: call dword ptr [0x12001024] */
    RECOMP_FLAGS_IN();
L_121C1828:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121C1828: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x121C182A: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x121C182C: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x121C182F: mov dword ptr [esi + 8], eax */
    esi = POP32_VAL(esp); /* 0x121C1832: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121C1833: ret  */
    RECOMP_REGS_OUT();
}

void sub_121C1839(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1839u);

L_121C1839:
    edx = MEM32(esp + 0x8); /* 0x121C1839: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C183D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44)); /* 0x121C1840: mov ecx, dword ptr [edx - 0x44] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1843: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1845: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0xC)); /* 0x121C184A: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C184D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C184F: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C41D0u; /* 0x121C1854: mov eax, 0x121c41d0 */
    goto L_12018725; /* 0x121C1859: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1884(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1884u);

L_121C1884:
    edx = MEM32(esp + 0x8); /* 0x121C1884: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1888: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C188B: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C188E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1890: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C420Cu; /* 0x121C1895: mov eax, 0x121c420c */
    goto L_12018725; /* 0x121C189A: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C18CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C18CCu);

L_121C18CC:
    edx = MEM32(esp + 0x8); /* 0x121C18CC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C18D0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x121C18D3: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C18D6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C18D8: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4248u; /* 0x121C18DD: mov eax, 0x121c4248 */
    goto L_12018725; /* 0x121C18E2: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1902(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1902u);

L_121C1902:
    edx = MEM32(esp + 0x8); /* 0x121C1902: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1906: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C1909: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C190C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C190E: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C427Cu; /* 0x121C1913: mov eax, 0x121c427c */
    goto L_12018725; /* 0x121C1918: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C192A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C192Au);

L_121C192A:
    edx = MEM32(esp + 0x8); /* 0x121C192A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C192E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x121C1931: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1934: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1936: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C42A8u; /* 0x121C193B: mov eax, 0x121c42a8 */
    goto L_12018725; /* 0x121C1940: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1952(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1952u);

L_121C1952:
    edx = MEM32(esp + 0x8); /* 0x121C1952: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1956: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xE8)); /* 0x121C1959: mov ecx, dword ptr [edx - 0xe8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C195F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1961: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C1966: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1969: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C196B: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C42D4u; /* 0x121C1970: mov eax, 0x121c42d4 */
    goto L_12018725; /* 0x121C1975: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1987(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1987u);

L_121C1987:
    edx = MEM32(esp + 0x8); /* 0x121C1987: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C198B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xAC)); /* 0x121C198E: mov ecx, dword ptr [edx - 0xac] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1994: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1996: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C199B: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C199E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C19A0: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4300u; /* 0x121C19A5: mov eax, 0x121c4300 */
    goto L_12018725; /* 0x121C19AA: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C19BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C19BFu);

L_121C19BF:
    edx = MEM32(esp + 0x8); /* 0x121C19BF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C19C3: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C19C6: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C19C9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C19CB: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C432Cu; /* 0x121C19D0: mov eax, 0x121c432c */
    goto L_12018725; /* 0x121C19D5: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C19E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C19E7u);

L_121C19E7:
    edx = MEM32(esp + 0x8); /* 0x121C19E7: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C19EB: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xB4)); /* 0x121C19EE: mov ecx, dword ptr [edx - 0xb4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C19F4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C19F6: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C19FB: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C19FE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1A00: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4358u; /* 0x121C1A05: mov eax, 0x121c4358 */
    goto L_12018725; /* 0x121C1A0A: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1A24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1A24u);

L_121C1A24:
    edx = MEM32(esp + 0x8); /* 0x121C1A24: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1A28: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x121C1A2B: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1A2E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1A30: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4384u; /* 0x121C1A35: mov eax, 0x121c4384 */
    goto L_12018725; /* 0x121C1A3A: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1A4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1A4Cu);

L_121C1A4C:
    edx = MEM32(esp + 0x8); /* 0x121C1A4C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1A50: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x121C1A53: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1A56: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1A58: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C43B0u; /* 0x121C1A5D: mov eax, 0x121c43b0 */
    goto L_12018725; /* 0x121C1A62: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1A7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1A7Fu);

L_121C1A7F:
    edx = MEM32(esp + 0x8); /* 0x121C1A7F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1A83: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C1A86: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1A89: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1A8B: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C43E4u; /* 0x121C1A90: mov eax, 0x121c43e4 */
    goto L_12018725; /* 0x121C1A95: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1AA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1AA7u);

L_121C1AA7:
    edx = MEM32(esp + 0x8); /* 0x121C1AA7: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1AAB: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x121C1AAE: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1AB1: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1AB3: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4410u; /* 0x121C1AB8: mov eax, 0x121c4410 */
    goto L_12018725; /* 0x121C1ABD: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1ACF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1ACFu);

L_121C1ACF:
    edx = MEM32(esp + 0x8); /* 0x121C1ACF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1AD3: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x64)); /* 0x121C1AD6: mov ecx, dword ptr [edx - 0x64] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1AD9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1ADB: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C1AE0: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1AE3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1AE5: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C443Cu; /* 0x121C1AEA: mov eax, 0x121c443c */
    goto L_12018725; /* 0x121C1AEF: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1B0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1B0Fu);

L_121C1B0F:
    edx = MEM32(esp + 0x8); /* 0x121C1B0F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1B13: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C1B16: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1B19: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1B1B: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4470u; /* 0x121C1B20: mov eax, 0x121c4470 */
    goto L_12018725; /* 0x121C1B25: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1B37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1B37u);

L_121C1B37:
    edx = MEM32(esp + 0x8); /* 0x121C1B37: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1B3B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C1B3E: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1B41: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1B43: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C449Cu; /* 0x121C1B48: mov eax, 0x121c449c */
    goto L_12018725; /* 0x121C1B4D: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1B62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1B62u);

L_121C1B62:
    edx = MEM32(esp + 0x8); /* 0x121C1B62: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1B66: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C1B69: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1B6C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1B6E: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C44C8u; /* 0x121C1B73: mov eax, 0x121c44c8 */
    goto L_12018725; /* 0x121C1B78: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1B8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1B8Du);

L_121C1B8D:
    edx = MEM32(esp + 0x8); /* 0x121C1B8D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1B91: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C1B94: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1B97: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1B99: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C44F4u; /* 0x121C1B9E: mov eax, 0x121c44f4 */
    goto L_12018725; /* 0x121C1BA3: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1BBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1BBDu);

L_121C1BBD:
    edx = MEM32(esp + 0x8); /* 0x121C1BBD: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1BC1: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x121C1BC4: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1BC7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1BC9: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4520u; /* 0x121C1BCE: mov eax, 0x121c4520 */
    goto L_12018725; /* 0x121C1BD3: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1BF0u);

L_121C1BF0:
    edx = MEM32(esp + 0x8); /* 0x121C1BF0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1BF4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x108)); /* 0x121C1BF7: mov ecx, dword ptr [edx - 0x108] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1BFD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1BFF: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C1C04: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1C07: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1C09: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C454Cu; /* 0x121C1C0E: mov eax, 0x121c454c */
    goto L_12018725; /* 0x121C1C13: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1C33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1C33u);

L_121C1C33:
    edx = MEM32(esp + 0x8); /* 0x121C1C33: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1C37: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C1C3A: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1C3D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1C3F: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4580u; /* 0x121C1C44: mov eax, 0x121c4580 */
    goto L_12018725; /* 0x121C1C49: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1C5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1C5Bu);

L_121C1C5B:
    edx = MEM32(esp + 0x8); /* 0x121C1C5B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1C5F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xB8)); /* 0x121C1C62: mov ecx, dword ptr [edx - 0xb8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1C68: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1C6A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C1C6F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1C72: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1C74: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C45ACu; /* 0x121C1C79: mov eax, 0x121c45ac */
    goto L_12018725; /* 0x121C1C7E: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1C9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1C9Eu);

L_121C1C9E:
    edx = MEM32(esp + 0x8); /* 0x121C1C9E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1CA2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x6B4)); /* 0x121C1CA5: mov ecx, dword ptr [edx - 0x6b4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1CAB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1CAD: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C1CB2: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1CB5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1CB7: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C45E0u; /* 0x121C1CBC: mov eax, 0x121c45e0 */
    goto L_12018725; /* 0x121C1CC1: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1CD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1CD3u);

L_121C1CD3:
    edx = MEM32(esp + 0x8); /* 0x121C1CD3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1CD7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C1CDA: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1CDD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1CDF: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C460Cu; /* 0x121C1CE4: mov eax, 0x121c460c */
    goto L_12018725; /* 0x121C1CE9: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1D03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1D03u);

L_121C1D03:
    edx = MEM32(esp + 0x8); /* 0x121C1D03: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1D07: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C1D0A: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1D0D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1D0F: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4638u; /* 0x121C1D14: mov eax, 0x121c4638 */
    goto L_12018725; /* 0x121C1D19: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1D5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1D5Cu);

L_121C1D5C:
    edx = MEM32(esp + 0x8); /* 0x121C1D5C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1D60: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xF0)); /* 0x121C1D63: mov ecx, dword ptr [edx - 0xf0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1D69: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1D6B: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C1D70: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1D73: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1D75: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C465Cu; /* 0x121C1D7A: mov eax, 0x121c465c */
    goto L_12018725; /* 0x121C1D7F: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1D99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1D99u);

L_121C1D99:
    edx = MEM32(esp + 0x8); /* 0x121C1D99: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1D9D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x121C1DA0: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1DA3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1DA5: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C46B0u; /* 0x121C1DAA: mov eax, 0x121c46b0 */
    goto L_12018725; /* 0x121C1DAF: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1DC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1DC1u);

L_121C1DC1:
    edx = MEM32(esp + 0x8); /* 0x121C1DC1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1DC5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x121C1DC8: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1DCB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1DCD: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C46DCu; /* 0x121C1DD2: mov eax, 0x121c46dc */
    goto L_12018725; /* 0x121C1DD7: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1E2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1E2Bu);

L_121C1E2B:
    edx = MEM32(esp + 0x8); /* 0x121C1E2B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1E2F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C1E32: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1E35: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1E37: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4700u; /* 0x121C1E3C: mov eax, 0x121c4700 */
    goto L_12018725; /* 0x121C1E41: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1E53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1E53u);

L_121C1E53:
    edx = MEM32(esp + 0x8); /* 0x121C1E53: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1E57: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x58)); /* 0x121C1E5A: mov ecx, dword ptr [edx - 0x58] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1E5D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1E5F: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C1E64: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1E67: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1E69: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4764u; /* 0x121C1E6E: mov eax, 0x121c4764 */
    goto L_12018725; /* 0x121C1E73: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1EA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1EA3u);

L_121C1EA3:
    edx = MEM32(esp + 0x8); /* 0x121C1EA3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1EA7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xD4)); /* 0x121C1EAA: mov ecx, dword ptr [edx - 0xd4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1EB0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1EB2: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C47A8u; /* 0x121C1EB7: mov eax, 0x121c47a8 */
    goto L_12018725; /* 0x121C1EBC: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1EE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1EE6u);

L_121C1EE6:
    edx = MEM32(esp + 0x8); /* 0x121C1EE6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1EEA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xE8)); /* 0x121C1EED: mov ecx, dword ptr [edx - 0xe8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1EF3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1EF5: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C47ECu; /* 0x121C1EFA: mov eax, 0x121c47ec */
    goto L_12018725; /* 0x121C1EFF: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1F2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1F2Cu);

L_121C1F2C:
    edx = MEM32(esp + 0x8); /* 0x121C1F2C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1F30: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xD8)); /* 0x121C1F33: mov ecx, dword ptr [edx - 0xd8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1F39: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1F3B: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4830u; /* 0x121C1F40: mov eax, 0x121c4830 */
    goto L_12018725; /* 0x121C1F45: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1F75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1F75u);

L_121C1F75:
    edx = MEM32(esp + 0x8); /* 0x121C1F75: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1F79: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xB8)); /* 0x121C1F7C: mov ecx, dword ptr [edx - 0xb8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1F82: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1F84: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4874u; /* 0x121C1F89: mov eax, 0x121c4874 */
    goto L_12018725; /* 0x121C1F8E: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C1FA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C1FA0u);

L_121C1FA0:
    edx = MEM32(esp + 0x8); /* 0x121C1FA0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C1FA4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C1FA7: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C1FAA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C1FAC: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C48A0u; /* 0x121C1FB1: mov eax, 0x121c48a0 */
    goto L_12018725; /* 0x121C1FB6: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2030u);

L_121C2030:
    edx = MEM32(esp + 0x8); /* 0x121C2030: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2034: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x121C2037: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C203A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C203C: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C48C4u; /* 0x121C2041: mov eax, 0x121c48c4 */
    goto L_12018725; /* 0x121C2046: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C205B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C205Bu);

L_121C205B:
    edx = MEM32(esp + 0x8); /* 0x121C205B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C205F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x624)); /* 0x121C2062: mov ecx, dword ptr [edx - 0x624] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2068: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C206A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C206F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2072: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2074: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4928u; /* 0x121C2079: mov eax, 0x121c4928 */
    goto L_12018725; /* 0x121C207E: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2090u);

L_121C2090:
    edx = MEM32(esp + 0x8); /* 0x121C2090: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2094: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x121C2097: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C209A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C209C: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4954u; /* 0x121C20A1: mov eax, 0x121c4954 */
    goto L_12018725; /* 0x121C20A6: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C20C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C20C8u);

L_121C20C8:
    edx = MEM32(esp + 0x8); /* 0x121C20C8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C20CC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x121C20CF: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C20D2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C20D4: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4988u; /* 0x121C20D9: mov eax, 0x121c4988 */
    goto L_12018725; /* 0x121C20DE: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C20F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C20F0u);

L_121C20F0:
    edx = MEM32(esp + 0x8); /* 0x121C20F0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C20F4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C20F7: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C20FA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C20FC: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C49B4u; /* 0x121C2101: mov eax, 0x121c49b4 */
    goto L_12018725; /* 0x121C2106: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2150u);

L_121C2150:
    edx = MEM32(esp + 0x8); /* 0x121C2150: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2154: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C2157: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C215A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C215C: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C49D8u; /* 0x121C2161: mov eax, 0x121c49d8 */
    goto L_12018725; /* 0x121C2166: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C21BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C21BEu);

L_121C21BE:
    edx = MEM32(esp + 0x8); /* 0x121C21BE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C21C2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C21C5: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C21C8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C21CA: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4A24u; /* 0x121C21CF: mov eax, 0x121c4a24 */
    goto L_12018725; /* 0x121C21D4: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C21FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C21FEu);

L_121C21FE:
    edx = MEM32(esp + 0x8); /* 0x121C21FE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2202: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x90)); /* 0x121C2205: mov ecx, dword ptr [edx - 0x90] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C220B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C220D: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C2212: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2215: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2217: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4A88u; /* 0x121C221C: mov eax, 0x121c4a88 */
    goto L_12018725; /* 0x121C2221: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2233(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2233u);

L_121C2233:
    edx = MEM32(esp + 0x8); /* 0x121C2233: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2237: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x74)); /* 0x121C223A: mov ecx, dword ptr [edx - 0x74] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C223D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C223F: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C2244: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2247: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2249: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4AB4u; /* 0x121C224E: mov eax, 0x121c4ab4 */
    goto L_12018725; /* 0x121C2253: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2268(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2268u);

L_121C2268:
    edx = MEM32(esp + 0x8); /* 0x121C2268: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C226C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x134)); /* 0x121C226F: mov ecx, dword ptr [edx - 0x134] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2275: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2277: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C227C: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C227F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2281: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4AE0u; /* 0x121C2286: mov eax, 0x121c4ae0 */
    goto L_12018725; /* 0x121C228B: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C22A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C22A5u);

L_121C22A5:
    edx = MEM32(esp + 0x8); /* 0x121C22A5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C22A9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xA4)); /* 0x121C22AC: mov ecx, dword ptr [edx - 0xa4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C22B2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C22B4: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4B14u; /* 0x121C22B9: mov eax, 0x121c4b14 */
    goto L_12018725; /* 0x121C22BE: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C22D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C22D8u);

L_121C22D8:
    edx = MEM32(esp + 0x8); /* 0x121C22D8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C22DC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x121C22DF: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C22E2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C22E4: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4B40u; /* 0x121C22E9: mov eax, 0x121c4b40 */
    goto L_12018725; /* 0x121C22EE: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C231E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C231Eu);

L_121C231E:
    edx = MEM32(esp + 0x8); /* 0x121C231E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2322: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C2325: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2328: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C232A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4B74u; /* 0x121C232F: mov eax, 0x121c4b74 */
    goto L_12018725; /* 0x121C2334: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2424(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2424u);

L_121C2424:
    edx = MEM32(esp + 0x8); /* 0x121C2424: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2428: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C242B: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C242E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2430: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4B98u; /* 0x121C2435: mov eax, 0x121c4b98 */
    goto L_12018725; /* 0x121C243A: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C244F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C244Fu);

L_121C244F:
    edx = MEM32(esp + 0x8); /* 0x121C244F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2453: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2E0)); /* 0x121C2456: mov ecx, dword ptr [edx - 0x2e0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C245C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C245E: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C2463: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2466: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2468: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4C3Cu; /* 0x121C246D: mov eax, 0x121c4c3c */
    goto L_12018725; /* 0x121C2472: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2497(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2497u);

L_121C2497:
    edx = MEM32(esp + 0x8); /* 0x121C2497: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C249B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xE8)); /* 0x121C249E: mov ecx, dword ptr [edx - 0xe8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C24A4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C24A6: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C24AB: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C24AE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C24B0: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4C78u; /* 0x121C24B5: mov eax, 0x121c4c78 */
    goto L_12018725; /* 0x121C24BA: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C24DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C24DCu);

L_121C24DC:
    edx = MEM32(esp + 0x8); /* 0x121C24DC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C24E0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x80)); /* 0x121C24E3: mov ecx, dword ptr [edx - 0x80] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C24E6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C24E8: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4CB4u; /* 0x121C24ED: mov eax, 0x121c4cb4 */
    goto L_12018725; /* 0x121C24F2: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2504(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2504u);

L_121C2504:
    edx = MEM32(esp + 0x8); /* 0x121C2504: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2508: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C250B: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C250E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2510: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4CE0u; /* 0x121C2515: mov eax, 0x121c4ce0 */
    goto L_12018725; /* 0x121C251A: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2561(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2561u);

L_121C2561:
    edx = MEM32(esp + 0x8); /* 0x121C2561: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2565: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C2568: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C256B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C256D: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4D04u; /* 0x121C2572: mov eax, 0x121c4d04 */
    goto L_12018725; /* 0x121C2577: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2589(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2589u);

L_121C2589:
    edx = MEM32(esp + 0x8); /* 0x121C2589: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C258D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x121C2590: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2593: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2595: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4D58u; /* 0x121C259A: mov eax, 0x121c4d58 */
    goto L_12018725; /* 0x121C259F: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C25B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C25B1u);

L_121C25B1:
    edx = MEM32(esp + 0x8); /* 0x121C25B1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C25B5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x121C25B8: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C25BB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C25BD: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4D84u; /* 0x121C25C2: mov eax, 0x121c4d84 */
    goto L_12018725; /* 0x121C25C7: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C25F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C25F1u);

L_121C25F1:
    edx = MEM32(esp + 0x8); /* 0x121C25F1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C25F5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x70)); /* 0x121C25F8: mov ecx, dword ptr [edx - 0x70] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C25FB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C25FD: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C2602: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2605: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2607: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4DC0u; /* 0x121C260C: mov eax, 0x121c4dc0 */
    goto L_12018725; /* 0x121C2611: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2623(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2623u);

L_121C2623:
    edx = MEM32(esp + 0x8); /* 0x121C2623: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2627: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x121C262A: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C262D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C262F: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4DECu; /* 0x121C2634: mov eax, 0x121c4dec */
    goto L_12018725; /* 0x121C2639: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2653(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2653u);

L_121C2653:
    edx = MEM32(esp + 0x8); /* 0x121C2653: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2657: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x121C265A: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C265D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C265F: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4E18u; /* 0x121C2664: mov eax, 0x121c4e18 */
    goto L_12018725; /* 0x121C2669: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C269B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C269Bu);

L_121C269B:
    edx = MEM32(esp + 0x8); /* 0x121C269B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C269F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x98)); /* 0x121C26A2: mov ecx, dword ptr [edx - 0x98] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C26A8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C26AA: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4E5Cu; /* 0x121C26AF: mov eax, 0x121c4e5c */
    goto L_12018725; /* 0x121C26B4: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C26DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C26DEu);

L_121C26DE:
    edx = MEM32(esp + 0x8); /* 0x121C26DE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C26E2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x78)); /* 0x121C26E5: mov ecx, dword ptr [edx - 0x78] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C26E8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C26EA: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4E90u; /* 0x121C26EF: mov eax, 0x121c4e90 */
    goto L_12018725; /* 0x121C26F4: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2716(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2716u);

L_121C2716:
    edx = MEM32(esp + 0x8); /* 0x121C2716: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C271A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x121C271D: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2720: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2722: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4ECCu; /* 0x121C2727: mov eax, 0x121c4ecc */
    goto L_12018725; /* 0x121C272C: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2746(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2746u);

L_121C2746:
    edx = MEM32(esp + 0x8); /* 0x121C2746: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C274A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x121C274D: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2750: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2752: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4EF8u; /* 0x121C2757: mov eax, 0x121c4ef8 */
    goto L_12018725; /* 0x121C275C: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C276E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C276Eu);

L_121C276E:
    edx = MEM32(esp + 0x8); /* 0x121C276E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2772: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x121C2775: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2778: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C277A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4F24u; /* 0x121C277F: mov eax, 0x121c4f24 */
    goto L_12018725; /* 0x121C2784: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2796(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2796u);

L_121C2796:
    edx = MEM32(esp + 0x8); /* 0x121C2796: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C279A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x121C279D: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C27A0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C27A2: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4F50u; /* 0x121C27A7: mov eax, 0x121c4f50 */
    goto L_12018725; /* 0x121C27AC: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C27E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C27E0u);

L_121C27E0:
    edx = MEM32(esp + 0x8); /* 0x121C27E0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C27E4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C27E7: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C27EA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C27EC: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4F8Cu; /* 0x121C27F1: mov eax, 0x121c4f8c */
    goto L_12018725; /* 0x121C27F6: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2848(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2848u);

L_121C2848:
    edx = MEM32(esp + 0x8); /* 0x121C2848: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C284C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C284F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2852: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2854: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C4FB0u; /* 0x121C2859: mov eax, 0x121c4fb0 */
    goto L_12018725; /* 0x121C285E: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C28A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C28A2u);

L_121C28A2:
    edx = MEM32(esp + 0x8); /* 0x121C28A2: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C28A6: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C28A9: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C28AC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C28AE: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5004u; /* 0x121C28B3: mov eax, 0x121c5004 */
    goto L_12018725; /* 0x121C28B8: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C28E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C28E2u);

L_121C28E2:
    edx = MEM32(esp + 0x8); /* 0x121C28E2: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C28E6: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x121C28E9: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C28EC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C28EE: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5060u; /* 0x121C28F3: mov eax, 0x121c5060 */
    goto L_12018725; /* 0x121C28F8: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C292A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C292Au);

L_121C292A:
    edx = MEM32(esp + 0x8); /* 0x121C292A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C292E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x121C2931: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2934: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2936: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C509Cu; /* 0x121C293B: mov eax, 0x121c509c */
    goto L_12018725; /* 0x121C2940: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2962(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2962u);

L_121C2962:
    edx = MEM32(esp + 0x8); /* 0x121C2962: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2966: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x50)); /* 0x121C2969: mov ecx, dword ptr [edx - 0x50] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C296C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C296E: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C50D8u; /* 0x121C2973: mov eax, 0x121c50d8 */
    goto L_12018725; /* 0x121C2978: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C298A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C298Au);

L_121C298A:
    edx = MEM32(esp + 0x8); /* 0x121C298A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C298E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44)); /* 0x121C2991: mov ecx, dword ptr [edx - 0x44] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2994: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2996: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5104u; /* 0x121C299B: mov eax, 0x121c5104 */
    goto L_12018725; /* 0x121C29A0: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C29BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C29BDu);

L_121C29BD:
    edx = MEM32(esp + 0x8); /* 0x121C29BD: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C29C1: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8C)); /* 0x121C29C4: mov ecx, dword ptr [edx - 0x8c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C29CA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C29CC: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5138u; /* 0x121C29D1: mov eax, 0x121c5138 */
    goto L_12018725; /* 0x121C29D6: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C29E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C29E8u);

L_121C29E8:
    edx = MEM32(esp + 0x8); /* 0x121C29E8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C29EC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x80)); /* 0x121C29EF: mov ecx, dword ptr [edx - 0x80] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C29F2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C29F4: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5164u; /* 0x121C29F9: mov eax, 0x121c5164 */
    goto L_12018725; /* 0x121C29FE: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2A13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2A13u);

L_121C2A13:
    edx = MEM32(esp + 0x8); /* 0x121C2A13: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2A17: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x88)); /* 0x121C2A1A: mov ecx, dword ptr [edx - 0x88] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2A20: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2A22: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5190u; /* 0x121C2A27: mov eax, 0x121c5190 */
    goto L_12018725; /* 0x121C2A2C: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2A7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2A7Au);

L_121C2A7A:
    edx = MEM32(esp + 0x8); /* 0x121C2A7A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2A7E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x121C2A81: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2A84: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2A86: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C51CCu; /* 0x121C2A8B: mov eax, 0x121c51cc */
    goto L_12018725; /* 0x121C2A90: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2ABA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2ABAu);

L_121C2ABA:
    edx = MEM32(esp + 0x8); /* 0x121C2ABA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2ABE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x6C)); /* 0x121C2AC1: mov ecx, dword ptr [edx - 0x6c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2AC4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2AC6: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5210u; /* 0x121C2ACB: mov eax, 0x121c5210 */
    goto L_12018725; /* 0x121C2AD0: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2AF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2AF5u);

L_121C2AF5:
    edx = MEM32(esp + 0x8); /* 0x121C2AF5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2AF9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xB8)); /* 0x121C2AFC: mov ecx, dword ptr [edx - 0xb8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2B02: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2B04: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C524Cu; /* 0x121C2B09: mov eax, 0x121c524c */
    goto L_12018725; /* 0x121C2B0E: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2B28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2B28u);

L_121C2B28:
    edx = MEM32(esp + 0x8); /* 0x121C2B28: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2B2C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x121C2B2F: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2B32: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2B34: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5280u; /* 0x121C2B39: mov eax, 0x121c5280 */
    goto L_12018725; /* 0x121C2B3E: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2BCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2BCCu);

L_121C2BCC:
    edx = MEM32(esp + 0x8); /* 0x121C2BCC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2BD0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x228)); /* 0x121C2BD3: mov ecx, dword ptr [edx - 0x228] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2BD9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2BDB: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C2BE0: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2BE3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2BE5: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C52A4u; /* 0x121C2BEA: mov eax, 0x121c52a4 */
    goto L_12018725; /* 0x121C2BEF: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2C04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2C04u);

L_121C2C04:
    edx = MEM32(esp + 0x8); /* 0x121C2C04: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2C08: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x98)); /* 0x121C2C0B: mov ecx, dword ptr [edx - 0x98] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2C11: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2C13: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5330u; /* 0x121C2C18: mov eax, 0x121c5330 */
    goto L_12018725; /* 0x121C2C1D: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2C2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2C2Fu);

L_121C2C2F:
    edx = MEM32(esp + 0x8); /* 0x121C2C2F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2C33: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x121C2C36: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2C39: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2C3B: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C535Cu; /* 0x121C2C40: mov eax, 0x121c535c */
    goto L_12018725; /* 0x121C2C45: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2CA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2CA5u);

L_121C2CA5:
    edx = MEM32(esp + 0x8); /* 0x121C2CA5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2CA9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xA4)); /* 0x121C2CAC: mov ecx, dword ptr [edx - 0xa4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2CB2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2CB4: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5380u; /* 0x121C2CB9: mov eax, 0x121c5380 */
    goto L_12018725; /* 0x121C2CBE: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2CD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2CD3u);

L_121C2CD3:
    edx = MEM32(esp + 0x8); /* 0x121C2CD3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2CD7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8C)); /* 0x121C2CDA: mov ecx, dword ptr [edx - 0x8c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2CE0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2CE2: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C53ECu; /* 0x121C2CE7: mov eax, 0x121c53ec */
    goto L_12018725; /* 0x121C2CEC: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2CFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2CFEu);

L_121C2CFE:
    edx = MEM32(esp + 0x8); /* 0x121C2CFE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2D02: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x121C2D05: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2D08: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2D0A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5418u; /* 0x121C2D0F: mov eax, 0x121c5418 */
    goto L_12018725; /* 0x121C2D14: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2D26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2D26u);

L_121C2D26:
    edx = MEM32(esp + 0x8); /* 0x121C2D26: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2D2A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x121C2D2D: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2D30: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2D32: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5444u; /* 0x121C2D37: mov eax, 0x121c5444 */
    goto L_12018725; /* 0x121C2D3C: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2D56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2D56u);

L_121C2D56:
    edx = MEM32(esp + 0x8); /* 0x121C2D56: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2D5A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x121C2D5D: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2D60: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2D62: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5478u; /* 0x121C2D67: mov eax, 0x121c5478 */
    goto L_12018725; /* 0x121C2D6C: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2D86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2D86u);

L_121C2D86:
    edx = MEM32(esp + 0x8); /* 0x121C2D86: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2D8A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4C)); /* 0x121C2D8D: mov ecx, dword ptr [edx - 0x4c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2D90: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2D92: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C54ACu; /* 0x121C2D97: mov eax, 0x121c54ac */
    goto L_12018725; /* 0x121C2D9C: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2DB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2DB1u);

L_121C2DB1:
    edx = MEM32(esp + 0x8); /* 0x121C2DB1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2DB5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xF0)); /* 0x121C2DB8: mov ecx, dword ptr [edx - 0xf0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2DBE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2DC0: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x121C2DC5: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2DC8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2DCA: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C54D8u; /* 0x121C2DCF: mov eax, 0x121c54d8 */
    goto L_12018725; /* 0x121C2DD4: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2DE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2DE6u);

L_121C2DE6:
    edx = MEM32(esp + 0x8); /* 0x121C2DE6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2DEA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x121C2DED: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2DF0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2DF2: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5504u; /* 0x121C2DF7: mov eax, 0x121c5504 */
    goto L_12018725; /* 0x121C2DFC: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2E0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2E0Eu);

L_121C2E0E:
    edx = MEM32(esp + 0x8); /* 0x121C2E0E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2E12: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x121C2E15: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2E18: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2E1A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C5530u; /* 0x121C2E1F: mov eax, 0x121c5530 */
    goto L_12018725; /* 0x121C2E24: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_121C2E46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121C2E46u);

L_121C2E46:
    edx = MEM32(esp + 0x8); /* 0x121C2E46: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x121C2E4A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4C)); /* 0x121C2E4D: mov ecx, dword ptr [edx - 0x4c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x121C2E50: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x121C2E52: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    eax = 0x121C556Cu; /* 0x121C2E57: mov eax, 0x121c556c */
    goto L_12018725; /* 0x121C2E5C: jmp 0x12018725 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_12018725: RECOMP_ITAIL(0x12018725u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
